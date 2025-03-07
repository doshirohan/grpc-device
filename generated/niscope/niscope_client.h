
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-SCOPE.
//---------------------------------------------------------------------
#ifndef NISCOPE_GRPC_CLIENT_H
#define NISCOPE_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <niscope.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace niscope_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiScope::Stub>;
using namespace nidevice_grpc::experimental::client;


AbortResponse abort(const StubPtr& stub, const nidevice_grpc::Session& vi);
AcquisitionStatusResponse acquisition_status(const StubPtr& stub, const nidevice_grpc::Session& vi);
ActualMeasWfmSizeResponse actual_meas_wfm_size(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<ArrayMeasurement, pb::int32>& array_meas_function);
ActualNumWfmsResponse actual_num_wfms(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
ActualRecordLengthResponse actual_record_length(const StubPtr& stub, const nidevice_grpc::Session& vi);
AddWaveformProcessingResponse add_waveform_processing(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<ArrayMeasurement, pb::int32>& meas_function);
AdjustSampleClockRelativeDelayResponse adjust_sample_clock_relative_delay(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& delay);
AutoSetupResponse auto_setup(const StubPtr& stub, const nidevice_grpc::Session& vi);
CableSenseSignalStartResponse cable_sense_signal_start(const StubPtr& stub, const nidevice_grpc::Session& vi);
CableSenseSignalStopResponse cable_sense_signal_stop(const StubPtr& stub, const nidevice_grpc::Session& vi);
CalSelfCalibrateResponse cal_self_calibrate(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<Option, pb::int32>& option);
CheckAttributeViBooleanResponse check_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const bool& value);
CheckAttributeViInt32Response check_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const simple_variant<NiScopeInt32AttributeValues, pb::int32>& value);
CheckAttributeViInt64Response check_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const simple_variant<NiScopeInt64AttributeValues, pb::int64>& value);
CheckAttributeViReal64Response check_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const simple_variant<NiScopeReal64AttributeValues, double>& value);
CheckAttributeViSessionResponse check_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const nidevice_grpc::Session& value);
CheckAttributeViStringResponse check_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const pb::string& value);
ClearWaveformMeasurementStatsResponse clear_waveform_measurement_stats(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const simple_variant<ClearableMeasurement, pb::int32>& clearable_measurement_function);
ClearWaveformProcessingResponse clear_waveform_processing(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& vi);
CommitResponse commit(const StubPtr& stub, const nidevice_grpc::Session& vi);
ConfigureAcquisitionResponse configure_acquisition(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& acquisition_type);
ConfigureChanCharacteristicsResponse configure_chan_characteristics(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& input_impedance, const double& max_input_frequency);
ConfigureClockResponse configure_clock(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& input_clock_source, const pb::string& output_clock_source, const pb::string& clock_sync_pulse_source, const bool& master_enabled);
ConfigureEqualizationFilterCoefficientsResponse configure_equalization_filter_coefficients(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const std::vector<double>& coefficients);
ConfigureHorizontalTimingResponse configure_horizontal_timing(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& min_sample_rate, const pb::int32& min_num_pts, const double& ref_position, const pb::int32& num_records, const bool& enforce_realtime);
ConfigureTriggerDigitalResponse configure_trigger_digital(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_source, const simple_variant<TriggerSlope, pb::int32>& slope, const double& holdoff, const double& delay);
ConfigureTriggerEdgeResponse configure_trigger_edge(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_source, const double& level, const simple_variant<TriggerSlope, pb::int32>& slope, const simple_variant<TriggerCoupling, pb::int32>& trigger_coupling, const double& holdoff, const double& delay);
ConfigureTriggerGlitchResponse configure_trigger_glitch(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_source, const double& level, const double& width, const simple_variant<GlitchPolarity, pb::int32>& polarity, const simple_variant<GlitchCondition, pb::int32>& glitch_condition, const simple_variant<TriggerCoupling, pb::int32>& trigger_coupling, const double& holdoff, const double& delay);
ConfigureTriggerHysteresisResponse configure_trigger_hysteresis(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_source, const double& level, const double& hysteresis, const simple_variant<TriggerSlope, pb::int32>& slope, const simple_variant<TriggerCoupling, pb::int32>& trigger_coupling, const double& holdoff, const double& delay);
ConfigureTriggerImmediateResponse configure_trigger_immediate(const StubPtr& stub, const nidevice_grpc::Session& vi);
ConfigureTriggerRuntResponse configure_trigger_runt(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_source, const double& low_threshold, const double& high_threshold, const simple_variant<RuntPolarity, pb::int32>& polarity, const simple_variant<TriggerCoupling, pb::int32>& trigger_coupling, const double& holdoff, const double& delay);
ConfigureTriggerSoftwareResponse configure_trigger_software(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& holdoff, const double& delay);
ConfigureTriggerVideoResponse configure_trigger_video(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_source, const bool& enable_dc_restore, const simple_variant<VideoSignalFormat, pb::int32>& signal_format, const simple_variant<VideoTriggerEvent, pb::int32>& event_parameter, const pb::int32& line_number, const simple_variant<VideoPolarity, pb::int32>& polarity, const simple_variant<TriggerCoupling, pb::int32>& trigger_coupling, const double& holdoff, const double& delay);
ConfigureTriggerWidthResponse configure_trigger_width(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_source, const double& level, const double& low_threshold, const double& high_threshold, const simple_variant<WidthPolarity, pb::int32>& polarity, const simple_variant<WidthCondition, pb::int32>& condition, const simple_variant<TriggerCoupling, pb::int32>& trigger_coupling, const double& holdoff, const double& delay);
ConfigureTriggerWindowResponse configure_trigger_window(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& trigger_source, const double& low_level, const double& high_level, const simple_variant<TriggerWindowMode, pb::int32>& window_mode, const simple_variant<TriggerCoupling, pb::int32>& trigger_coupling, const double& holdoff, const double& delay);
ConfigureVerticalResponse configure_vertical(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& range, const double& offset, const simple_variant<VerticalCoupling, pb::int32>& coupling, const double& probe_attenuation, const bool& enabled);
DisableResponse disable(const StubPtr& stub, const nidevice_grpc::Session& vi);
ErrorHandlerResponse error_handler(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& error_code, const pb::string& error_source);
ExportAttributeConfigurationBufferResponse export_attribute_configuration_buffer(const StubPtr& stub, const nidevice_grpc::Session& vi);
ExportAttributeConfigurationFileResponse export_attribute_configuration_file(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& file_path);
ExportSignalResponse export_signal(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<ExportableSignals, pb::int32>& signal, const pb::string& signal_identifier, const pb::string& output_terminal);
FetchResponse fetch(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const pb::int32& num_samples);
FetchArrayMeasurementResponse fetch_array_measurement(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const simple_variant<ArrayMeasurement, pb::int32>& array_meas_function);
FetchBinary16Response fetch_binary16(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const pb::int32& num_samples);
FetchBinary32Response fetch_binary32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const pb::int32& num_samples);
FetchBinary8Response fetch_binary8(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const pb::int32& num_samples);
FetchComplexResponse fetch_complex(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const pb::int32& num_samples);
FetchComplexBinary16Response fetch_complex_binary16(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const pb::int32& num_samples);
FetchMeasurementResponse fetch_measurement(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const simple_variant<ScalarMeasurement, pb::int32>& scalar_meas_function);
FetchMeasurementStatsResponse fetch_measurement_stats(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const simple_variant<ScalarMeasurement, pb::int32>& scalar_meas_function);
GetAttributeViBooleanResponse get_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id);
GetAttributeViInt32Response get_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id);
GetAttributeViInt64Response get_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id);
GetAttributeViReal64Response get_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id);
GetAttributeViSessionResponse get_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id);
GetAttributeViStringResponse get_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id);
GetChannelNameResponse get_channel_name(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& index);
GetChannelNameFromStringResponse get_channel_name_from_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& index);
GetEqualizationFilterCoefficientsResponse get_equalization_filter_coefficients(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel, const pb::int32& number_of_coefficients);
GetErrorResponse get_error(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetErrorMessageResponse get_error_message(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& error_code);
GetFrequencyResponseResponse get_frequency_response(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel, const pb::int32& buffer_size);
GetNormalizationCoefficientsResponse get_normalization_coefficients(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
GetScalingCoefficientsResponse get_scaling_coefficients(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list);
GetStreamEndpointHandleResponse get_stream_endpoint_handle(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& stream_name);
ImportAttributeConfigurationBufferResponse import_attribute_configuration_buffer(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& configuration);
ImportAttributeConfigurationFileResponse import_attribute_configuration_file(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& file_path);
InitResponse init(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device);
InitWithOptionsResponse init_with_options(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device, const pb::string& option_string);
InitiateAcquisitionResponse initiate_acquisition(const StubPtr& stub, const nidevice_grpc::Session& vi);
ProbeCompensationSignalStartResponse probe_compensation_signal_start(const StubPtr& stub, const nidevice_grpc::Session& vi);
ProbeCompensationSignalStopResponse probe_compensation_signal_stop(const StubPtr& stub, const nidevice_grpc::Session& vi);
ReadResponse read(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const pb::int32& num_samples);
ReadMeasurementResponse read_measurement(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const double& timeout, const simple_variant<ScalarMeasurement, pb::int32>& scalar_meas_function);
ResetResponse reset(const StubPtr& stub, const nidevice_grpc::Session& vi);
ResetDeviceResponse reset_device(const StubPtr& stub, const nidevice_grpc::Session& vi);
RevisionQueryResponse revision_query(const StubPtr& stub, const nidevice_grpc::Session& vi);
SampleModeResponse sample_mode(const StubPtr& stub, const nidevice_grpc::Session& vi);
SampleRateResponse sample_rate(const StubPtr& stub, const nidevice_grpc::Session& vi);
SelfTestResponse self_test(const StubPtr& stub, const nidevice_grpc::Session& vi);
SendSoftwareTriggerEdgeResponse send_software_trigger_edge(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<WhichTrigger, pb::int32>& which_trigger);
SetAttributeViBooleanResponse set_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const bool& value);
SetAttributeViInt32Response set_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const simple_variant<NiScopeInt32AttributeValues, pb::int32>& value);
SetAttributeViInt64Response set_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const simple_variant<NiScopeInt64AttributeValues, pb::int64>& value);
SetAttributeViReal64Response set_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const simple_variant<NiScopeReal64AttributeValues, double>& value);
SetAttributeViSessionResponse set_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const nidevice_grpc::Session& value);
SetAttributeViStringResponse set_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_list, const NiScopeAttribute& attribute_id, const pb::string& value);

} // namespace niscope_grpc::experimental::client

#endif /* NISCOPE_GRPC_CLIENT_H */
