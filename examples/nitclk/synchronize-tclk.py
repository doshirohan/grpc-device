# Demonstrates how to configure multiple NI Arbitrary Waveform Generators to generate synchronized waveforms with TClk
# 
# The gRPC API is built from the C API. NI-FGEN documentation is installed with the driver at:
# C:\Program Files (x86)\IVI Foundation\IVI\Drivers\niFgen\documentation\English\SigGenHelp.chm
#
# Getting Started:
#
# To run this example, install "NI-FGEN Driver" on the server machine.
# Link : https://www.ni.com/en-us/support/downloads/drivers/download.ni-fgen.html
#
# For instructions on how to use protoc to generate gRPC client interfaces, see our "Creating a gRPC Client" wiki page.
# Link: https://github.com/ni/grpc-device/wiki/Creating-a-gRPC-Client
#
# Running from command line:
#
# Server machine's IP address and port number can be passed as separate command line arguments.
#   > python synchronize-tclk.py <server_address> <port_number>
# If they are not passed in as command line arguments, then by default the server address will be "localhost:31763"

import grpc
import sys
import nifgen_pb2 as nifgen_types
import nifgen_pb2_grpc as grpc_nifgen
import nitclk_pb2 as nitclk_types
import nitclk_pb2_grpc as grpc_nitclk
import session_pb2 as session_types
import session_pb2_grpc as grpc_session
import matplotlib.pyplot as plt

server_address = "localhost"
server_port = "31763"

# Take resource name . This example doesn't work on simulation, so resource name is required.
resources = input("Enter comma separated resource names (PXI1Slot2,PXI1Slot3): ").split(",")

# parameters
sample_rate = 20000000.0
waveform_size = 16
# Create waveform data
waveform_data = []
for i in range(waveform_size):
    waveform_data.append(0.0)
waveform_data[0] = 1.0

# Read in cmd args
if len(sys.argv) >= 2:
    server_address = sys.argv[1]
if len(sys.argv) >= 3:
    server_port = sys.argv[2]

# Create the communication channel for the remote host and create connections to the NI-FGEN and session services.
channel = grpc.insecure_channel(f"{server_address}:{server_port}")
nifgen_service = grpc_nifgen.NiFgenStub(channel)
nitclk_service = grpc_nitclk.NiTClkStub(channel)

any_error = False
# Checks for errors. If any, throws an exception to stop the execution.
def CheckForError (service, vi, status) :
    global any_error
    if status != 0 and not any_error:
        any_error = True
        ThrowOnError (service, vi, status)

# Converts an error code returned by NI-FGEN into a user-readable string.
def ThrowOnError (service, vi, error_code):
    if service == nifgen_service:
        error_message_request = nifgen_types.ErrorMessageRequest(
            vi = vi,
            error_code = error_code
        )
        error_message_response = nifgen_service.ErrorMessage(error_message_request)
        raise Exception (error_message_request.error_message)
    else:
        error_message_request = nitclk_types.GetExtendedErrorInfoRequest()
        error_message_response = nitclk_service.GetExtendedErrorInfo(error_message_request)           
        raise Exception (error_message_response.error_string)

try:
    # list of sessions
    sessions = []
    i = 0
    for resource in resources:
        # Initalize NI-FGEN session
        init_with_channels_resp = nifgen_service.InitWithOptions(nifgen_types.InitWithOptionsRequest(
            session_name = "session" + str(i),
            resource_name = resource,
            option_string = ""
        ))
        vi = init_with_channels_resp.vi
        sessions.append(vi)
        CheckForError(nifgen_service, vi, init_with_channels_resp.status)

        # Configure channels
        config_channels_resp = nifgen_service.ConfigureChannels(nifgen_types.ConfigureChannelsRequest(
            vi = vi,
            channels = "0"
        ))
        CheckForError(nifgen_service, vi, config_channels_resp.status)

        # Configure output mode
        config_out_resp = nifgen_service.ConfigureOutputMode(nifgen_types.ConfigureOutputModeRequest(
            vi = vi,
            output_mode = 1
        ))

        # Configure sample rate
        config_sample_rate_resp = nifgen_service.ConfigureSampleRate(nifgen_types.ConfigureSampleRateRequest(
            vi = vi,
            sample_rate = sample_rate
        ))
        CheckForError(nifgen_service, vi, config_sample_rate_resp.status)

        # Create waveform
        create_waveform_resp = nifgen_service.CreateWaveformF64(nifgen_types.CreateWaveformF64Request(
            vi = vi,
            channel_name = "0",
            waveform_data_array = waveform_data
        ))
        CheckForError(nifgen_service, vi, create_waveform_resp.status)

        i += 1

    config_hom_trig_resp = nitclk_service.ConfigureForHomogeneousTriggers(nitclk_types.ConfigureForHomogeneousTriggersRequest(
        sessions = sessions
    ))
    CheckForError(nitclk_service, None, config_hom_trig_resp.status)

    # Synchronize and start generation
    sync_resp = nitclk_service.Synchronize(nitclk_types.SynchronizeRequest(
        sessions = sessions,
        min_tclk_period = 0
    ))
    CheckForError(nitclk_service, None, sync_resp.status)
    initiate_resp = nitclk_service.Initiate(nitclk_types.InitiateRequest(
        sessions = sessions
    ))
    CheckForError(nitclk_service, None, initiate_resp.status)

    print(f"Generating square wave with sample rate {sample_rate} on {resources}...")

    # Plot waveform
    fig = plt.gcf()
    fig.canvas.manager.set_window_title('Sample Waveform')
    plt.plot(waveform_data)
    plt.suptitle("Close the window to stop generation", fontsize=10)
    plt.xlabel("Samples")
    plt.ylabel("Amplitude")
    plt.show()

# If NI-FGEN API throws an exception, print the error message  
except grpc.RpcError as rpc_error:
    error_message = rpc_error.details()
    if rpc_error.code() == grpc.StatusCode.UNAVAILABLE :
        error_message = f"Failed to connect to server on {server_address}"
    elif rpc_error.code() == grpc.StatusCode.UNIMPLEMENTED:
        error_message = "The operation is not implemented or is not supported/enabled in this service"
    print(f"{error_message}") 
finally:
    if 'vi' in vars() and vi.id != 0:
        # Close NI-DMM session
        close_session_response = nifgen_service.Close(nifgen_types.CloseRequest(
            vi = vi
        ))
        CheckForError(nifgen_service, vi, close_session_response.status)