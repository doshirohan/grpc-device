
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-DAQMX Metadata
//---------------------------------------------------------------------
#ifndef NIDAQMX_GRPC_SERVICE_H
#define NIDAQMX_GRPC_SERVICE_H

#include <nidaqmx.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nidaqmx_library_interface.h"

namespace nidaqmx_grpc {

class NiDAQmxService final : public NiDAQmx::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<TaskHandle>>;

  NiDAQmxService(NiDAQmxLibraryInterface* library, ResourceRepositorySharedPtr session_repository);
  virtual ~NiDAQmxService();
  
  ::grpc::Status AddGlobalChansToTask(::grpc::ServerContext* context, const AddGlobalChansToTaskRequest* request, AddGlobalChansToTaskResponse* response) override;
  ::grpc::Status AddNetworkDevice(::grpc::ServerContext* context, const AddNetworkDeviceRequest* request, AddNetworkDeviceResponse* response) override;
  ::grpc::Status CfgAnlgEdgeRefTrig(::grpc::ServerContext* context, const CfgAnlgEdgeRefTrigRequest* request, CfgAnlgEdgeRefTrigResponse* response) override;
  ::grpc::Status CfgAnlgEdgeStartTrig(::grpc::ServerContext* context, const CfgAnlgEdgeStartTrigRequest* request, CfgAnlgEdgeStartTrigResponse* response) override;
  ::grpc::Status CfgAnlgMultiEdgeRefTrig(::grpc::ServerContext* context, const CfgAnlgMultiEdgeRefTrigRequest* request, CfgAnlgMultiEdgeRefTrigResponse* response) override;
  ::grpc::Status CfgAnlgMultiEdgeStartTrig(::grpc::ServerContext* context, const CfgAnlgMultiEdgeStartTrigRequest* request, CfgAnlgMultiEdgeStartTrigResponse* response) override;
  ::grpc::Status CfgAnlgWindowRefTrig(::grpc::ServerContext* context, const CfgAnlgWindowRefTrigRequest* request, CfgAnlgWindowRefTrigResponse* response) override;
  ::grpc::Status CfgAnlgWindowStartTrig(::grpc::ServerContext* context, const CfgAnlgWindowStartTrigRequest* request, CfgAnlgWindowStartTrigResponse* response) override;
  ::grpc::Status CfgBurstHandshakingTimingExportClock(::grpc::ServerContext* context, const CfgBurstHandshakingTimingExportClockRequest* request, CfgBurstHandshakingTimingExportClockResponse* response) override;
  ::grpc::Status CfgBurstHandshakingTimingImportClock(::grpc::ServerContext* context, const CfgBurstHandshakingTimingImportClockRequest* request, CfgBurstHandshakingTimingImportClockResponse* response) override;
  ::grpc::Status CfgChangeDetectionTiming(::grpc::ServerContext* context, const CfgChangeDetectionTimingRequest* request, CfgChangeDetectionTimingResponse* response) override;
  ::grpc::Status CfgDigEdgeRefTrig(::grpc::ServerContext* context, const CfgDigEdgeRefTrigRequest* request, CfgDigEdgeRefTrigResponse* response) override;
  ::grpc::Status CfgDigEdgeStartTrig(::grpc::ServerContext* context, const CfgDigEdgeStartTrigRequest* request, CfgDigEdgeStartTrigResponse* response) override;
  ::grpc::Status CfgDigPatternRefTrig(::grpc::ServerContext* context, const CfgDigPatternRefTrigRequest* request, CfgDigPatternRefTrigResponse* response) override;
  ::grpc::Status CfgDigPatternStartTrig(::grpc::ServerContext* context, const CfgDigPatternStartTrigRequest* request, CfgDigPatternStartTrigResponse* response) override;
  ::grpc::Status CfgHandshakingTiming(::grpc::ServerContext* context, const CfgHandshakingTimingRequest* request, CfgHandshakingTimingResponse* response) override;
  ::grpc::Status CfgImplicitTiming(::grpc::ServerContext* context, const CfgImplicitTimingRequest* request, CfgImplicitTimingResponse* response) override;
  ::grpc::Status CfgInputBuffer(::grpc::ServerContext* context, const CfgInputBufferRequest* request, CfgInputBufferResponse* response) override;
  ::grpc::Status CfgOutputBuffer(::grpc::ServerContext* context, const CfgOutputBufferRequest* request, CfgOutputBufferResponse* response) override;
  ::grpc::Status CfgPipelinedSampClkTiming(::grpc::ServerContext* context, const CfgPipelinedSampClkTimingRequest* request, CfgPipelinedSampClkTimingResponse* response) override;
  ::grpc::Status CfgSampClkTiming(::grpc::ServerContext* context, const CfgSampClkTimingRequest* request, CfgSampClkTimingResponse* response) override;
  ::grpc::Status CfgWatchdogAOExpirStates(::grpc::ServerContext* context, const CfgWatchdogAOExpirStatesRequest* request, CfgWatchdogAOExpirStatesResponse* response) override;
  ::grpc::Status CfgWatchdogCOExpirStates(::grpc::ServerContext* context, const CfgWatchdogCOExpirStatesRequest* request, CfgWatchdogCOExpirStatesResponse* response) override;
  ::grpc::Status CfgWatchdogDOExpirStates(::grpc::ServerContext* context, const CfgWatchdogDOExpirStatesRequest* request, CfgWatchdogDOExpirStatesResponse* response) override;
  ::grpc::Status ClearTask(::grpc::ServerContext* context, const ClearTaskRequest* request, ClearTaskResponse* response) override;
  ::grpc::Status ConfigureLogging(::grpc::ServerContext* context, const ConfigureLoggingRequest* request, ConfigureLoggingResponse* response) override;
  ::grpc::Status ConnectTerms(::grpc::ServerContext* context, const ConnectTermsRequest* request, ConnectTermsResponse* response) override;
  ::grpc::Status ControlWatchdogTask(::grpc::ServerContext* context, const ControlWatchdogTaskRequest* request, ControlWatchdogTaskResponse* response) override;
  ::grpc::Status CreateAIAccel4WireDCVoltageChan(::grpc::ServerContext* context, const CreateAIAccel4WireDCVoltageChanRequest* request, CreateAIAccel4WireDCVoltageChanResponse* response) override;
  ::grpc::Status CreateAIAccelChan(::grpc::ServerContext* context, const CreateAIAccelChanRequest* request, CreateAIAccelChanResponse* response) override;
  ::grpc::Status CreateAIAccelChargeChan(::grpc::ServerContext* context, const CreateAIAccelChargeChanRequest* request, CreateAIAccelChargeChanResponse* response) override;
  ::grpc::Status CreateAIBridgeChan(::grpc::ServerContext* context, const CreateAIBridgeChanRequest* request, CreateAIBridgeChanResponse* response) override;
  ::grpc::Status CreateAIChargeChan(::grpc::ServerContext* context, const CreateAIChargeChanRequest* request, CreateAIChargeChanResponse* response) override;
  ::grpc::Status CreateAICurrentChan(::grpc::ServerContext* context, const CreateAICurrentChanRequest* request, CreateAICurrentChanResponse* response) override;
  ::grpc::Status CreateAICurrentRMSChan(::grpc::ServerContext* context, const CreateAICurrentRMSChanRequest* request, CreateAICurrentRMSChanResponse* response) override;
  ::grpc::Status CreateAIForceBridgePolynomialChan(::grpc::ServerContext* context, const CreateAIForceBridgePolynomialChanRequest* request, CreateAIForceBridgePolynomialChanResponse* response) override;
  ::grpc::Status CreateAIForceBridgeTableChan(::grpc::ServerContext* context, const CreateAIForceBridgeTableChanRequest* request, CreateAIForceBridgeTableChanResponse* response) override;
  ::grpc::Status CreateAIForceBridgeTwoPointLinChan(::grpc::ServerContext* context, const CreateAIForceBridgeTwoPointLinChanRequest* request, CreateAIForceBridgeTwoPointLinChanResponse* response) override;
  ::grpc::Status CreateAIForceIEPEChan(::grpc::ServerContext* context, const CreateAIForceIEPEChanRequest* request, CreateAIForceIEPEChanResponse* response) override;
  ::grpc::Status CreateAIFreqVoltageChan(::grpc::ServerContext* context, const CreateAIFreqVoltageChanRequest* request, CreateAIFreqVoltageChanResponse* response) override;
  ::grpc::Status CreateAIMicrophoneChan(::grpc::ServerContext* context, const CreateAIMicrophoneChanRequest* request, CreateAIMicrophoneChanResponse* response) override;
  ::grpc::Status CreateAIPosEddyCurrProxProbeChan(::grpc::ServerContext* context, const CreateAIPosEddyCurrProxProbeChanRequest* request, CreateAIPosEddyCurrProxProbeChanResponse* response) override;
  ::grpc::Status CreateAIPosLVDTChan(::grpc::ServerContext* context, const CreateAIPosLVDTChanRequest* request, CreateAIPosLVDTChanResponse* response) override;
  ::grpc::Status CreateAIPosRVDTChan(::grpc::ServerContext* context, const CreateAIPosRVDTChanRequest* request, CreateAIPosRVDTChanResponse* response) override;
  ::grpc::Status CreateAIPressureBridgePolynomialChan(::grpc::ServerContext* context, const CreateAIPressureBridgePolynomialChanRequest* request, CreateAIPressureBridgePolynomialChanResponse* response) override;
  ::grpc::Status CreateAIPressureBridgeTableChan(::grpc::ServerContext* context, const CreateAIPressureBridgeTableChanRequest* request, CreateAIPressureBridgeTableChanResponse* response) override;
  ::grpc::Status CreateAIPressureBridgeTwoPointLinChan(::grpc::ServerContext* context, const CreateAIPressureBridgeTwoPointLinChanRequest* request, CreateAIPressureBridgeTwoPointLinChanResponse* response) override;
  ::grpc::Status CreateAIRTDChan(::grpc::ServerContext* context, const CreateAIRTDChanRequest* request, CreateAIRTDChanResponse* response) override;
  ::grpc::Status CreateAIResistanceChan(::grpc::ServerContext* context, const CreateAIResistanceChanRequest* request, CreateAIResistanceChanResponse* response) override;
  ::grpc::Status CreateAIRosetteStrainGageChan(::grpc::ServerContext* context, const CreateAIRosetteStrainGageChanRequest* request, CreateAIRosetteStrainGageChanResponse* response) override;
  ::grpc::Status CreateAIStrainGageChan(::grpc::ServerContext* context, const CreateAIStrainGageChanRequest* request, CreateAIStrainGageChanResponse* response) override;
  ::grpc::Status CreateAITempBuiltInSensorChan(::grpc::ServerContext* context, const CreateAITempBuiltInSensorChanRequest* request, CreateAITempBuiltInSensorChanResponse* response) override;
  ::grpc::Status CreateAIThrmcplChan(::grpc::ServerContext* context, const CreateAIThrmcplChanRequest* request, CreateAIThrmcplChanResponse* response) override;
  ::grpc::Status CreateAIThrmstrChanIex(::grpc::ServerContext* context, const CreateAIThrmstrChanIexRequest* request, CreateAIThrmstrChanIexResponse* response) override;
  ::grpc::Status CreateAIThrmstrChanVex(::grpc::ServerContext* context, const CreateAIThrmstrChanVexRequest* request, CreateAIThrmstrChanVexResponse* response) override;
  ::grpc::Status CreateAITorqueBridgePolynomialChan(::grpc::ServerContext* context, const CreateAITorqueBridgePolynomialChanRequest* request, CreateAITorqueBridgePolynomialChanResponse* response) override;
  ::grpc::Status CreateAITorqueBridgeTableChan(::grpc::ServerContext* context, const CreateAITorqueBridgeTableChanRequest* request, CreateAITorqueBridgeTableChanResponse* response) override;
  ::grpc::Status CreateAITorqueBridgeTwoPointLinChan(::grpc::ServerContext* context, const CreateAITorqueBridgeTwoPointLinChanRequest* request, CreateAITorqueBridgeTwoPointLinChanResponse* response) override;
  ::grpc::Status CreateAIVelocityIEPEChan(::grpc::ServerContext* context, const CreateAIVelocityIEPEChanRequest* request, CreateAIVelocityIEPEChanResponse* response) override;
  ::grpc::Status CreateAIVoltageChan(::grpc::ServerContext* context, const CreateAIVoltageChanRequest* request, CreateAIVoltageChanResponse* response) override;
  ::grpc::Status CreateAIVoltageChanWithExcit(::grpc::ServerContext* context, const CreateAIVoltageChanWithExcitRequest* request, CreateAIVoltageChanWithExcitResponse* response) override;
  ::grpc::Status CreateAIVoltageRMSChan(::grpc::ServerContext* context, const CreateAIVoltageRMSChanRequest* request, CreateAIVoltageRMSChanResponse* response) override;
  ::grpc::Status CreateAOCurrentChan(::grpc::ServerContext* context, const CreateAOCurrentChanRequest* request, CreateAOCurrentChanResponse* response) override;
  ::grpc::Status CreateAOFuncGenChan(::grpc::ServerContext* context, const CreateAOFuncGenChanRequest* request, CreateAOFuncGenChanResponse* response) override;
  ::grpc::Status CreateAOVoltageChan(::grpc::ServerContext* context, const CreateAOVoltageChanRequest* request, CreateAOVoltageChanResponse* response) override;
  ::grpc::Status CreateCIAngEncoderChan(::grpc::ServerContext* context, const CreateCIAngEncoderChanRequest* request, CreateCIAngEncoderChanResponse* response) override;
  ::grpc::Status CreateCIAngVelocityChan(::grpc::ServerContext* context, const CreateCIAngVelocityChanRequest* request, CreateCIAngVelocityChanResponse* response) override;
  ::grpc::Status CreateCICountEdgesChan(::grpc::ServerContext* context, const CreateCICountEdgesChanRequest* request, CreateCICountEdgesChanResponse* response) override;
  ::grpc::Status CreateCIDutyCycleChan(::grpc::ServerContext* context, const CreateCIDutyCycleChanRequest* request, CreateCIDutyCycleChanResponse* response) override;
  ::grpc::Status CreateCIFreqChan(::grpc::ServerContext* context, const CreateCIFreqChanRequest* request, CreateCIFreqChanResponse* response) override;
  ::grpc::Status CreateCIGPSTimestampChan(::grpc::ServerContext* context, const CreateCIGPSTimestampChanRequest* request, CreateCIGPSTimestampChanResponse* response) override;
  ::grpc::Status CreateCILinEncoderChan(::grpc::ServerContext* context, const CreateCILinEncoderChanRequest* request, CreateCILinEncoderChanResponse* response) override;
  ::grpc::Status CreateCILinVelocityChan(::grpc::ServerContext* context, const CreateCILinVelocityChanRequest* request, CreateCILinVelocityChanResponse* response) override;
  ::grpc::Status CreateCIPeriodChan(::grpc::ServerContext* context, const CreateCIPeriodChanRequest* request, CreateCIPeriodChanResponse* response) override;
  ::grpc::Status CreateCIPulseChanFreq(::grpc::ServerContext* context, const CreateCIPulseChanFreqRequest* request, CreateCIPulseChanFreqResponse* response) override;
  ::grpc::Status CreateCIPulseChanTicks(::grpc::ServerContext* context, const CreateCIPulseChanTicksRequest* request, CreateCIPulseChanTicksResponse* response) override;
  ::grpc::Status CreateCIPulseChanTime(::grpc::ServerContext* context, const CreateCIPulseChanTimeRequest* request, CreateCIPulseChanTimeResponse* response) override;
  ::grpc::Status CreateCIPulseWidthChan(::grpc::ServerContext* context, const CreateCIPulseWidthChanRequest* request, CreateCIPulseWidthChanResponse* response) override;
  ::grpc::Status CreateCISemiPeriodChan(::grpc::ServerContext* context, const CreateCISemiPeriodChanRequest* request, CreateCISemiPeriodChanResponse* response) override;
  ::grpc::Status CreateCITwoEdgeSepChan(::grpc::ServerContext* context, const CreateCITwoEdgeSepChanRequest* request, CreateCITwoEdgeSepChanResponse* response) override;
  ::grpc::Status CreateCOPulseChanFreq(::grpc::ServerContext* context, const CreateCOPulseChanFreqRequest* request, CreateCOPulseChanFreqResponse* response) override;
  ::grpc::Status CreateCOPulseChanTicks(::grpc::ServerContext* context, const CreateCOPulseChanTicksRequest* request, CreateCOPulseChanTicksResponse* response) override;
  ::grpc::Status CreateCOPulseChanTime(::grpc::ServerContext* context, const CreateCOPulseChanTimeRequest* request, CreateCOPulseChanTimeResponse* response) override;
  ::grpc::Status CreateDIChan(::grpc::ServerContext* context, const CreateDIChanRequest* request, CreateDIChanResponse* response) override;
  ::grpc::Status CreateDOChan(::grpc::ServerContext* context, const CreateDOChanRequest* request, CreateDOChanResponse* response) override;
  ::grpc::Status CreateLinScale(::grpc::ServerContext* context, const CreateLinScaleRequest* request, CreateLinScaleResponse* response) override;
  ::grpc::Status CreateMapScale(::grpc::ServerContext* context, const CreateMapScaleRequest* request, CreateMapScaleResponse* response) override;
  ::grpc::Status CreatePolynomialScale(::grpc::ServerContext* context, const CreatePolynomialScaleRequest* request, CreatePolynomialScaleResponse* response) override;
  ::grpc::Status CreateTEDSAIAccelChan(::grpc::ServerContext* context, const CreateTEDSAIAccelChanRequest* request, CreateTEDSAIAccelChanResponse* response) override;
  ::grpc::Status CreateTEDSAIBridgeChan(::grpc::ServerContext* context, const CreateTEDSAIBridgeChanRequest* request, CreateTEDSAIBridgeChanResponse* response) override;
  ::grpc::Status CreateTEDSAICurrentChan(::grpc::ServerContext* context, const CreateTEDSAICurrentChanRequest* request, CreateTEDSAICurrentChanResponse* response) override;
  ::grpc::Status CreateTEDSAIForceBridgeChan(::grpc::ServerContext* context, const CreateTEDSAIForceBridgeChanRequest* request, CreateTEDSAIForceBridgeChanResponse* response) override;
  ::grpc::Status CreateTEDSAIForceIEPEChan(::grpc::ServerContext* context, const CreateTEDSAIForceIEPEChanRequest* request, CreateTEDSAIForceIEPEChanResponse* response) override;
  ::grpc::Status CreateTEDSAIMicrophoneChan(::grpc::ServerContext* context, const CreateTEDSAIMicrophoneChanRequest* request, CreateTEDSAIMicrophoneChanResponse* response) override;
  ::grpc::Status CreateTEDSAIPosLVDTChan(::grpc::ServerContext* context, const CreateTEDSAIPosLVDTChanRequest* request, CreateTEDSAIPosLVDTChanResponse* response) override;
  ::grpc::Status CreateTEDSAIPosRVDTChan(::grpc::ServerContext* context, const CreateTEDSAIPosRVDTChanRequest* request, CreateTEDSAIPosRVDTChanResponse* response) override;
  ::grpc::Status CreateTEDSAIPressureBridgeChan(::grpc::ServerContext* context, const CreateTEDSAIPressureBridgeChanRequest* request, CreateTEDSAIPressureBridgeChanResponse* response) override;
  ::grpc::Status CreateTEDSAIRTDChan(::grpc::ServerContext* context, const CreateTEDSAIRTDChanRequest* request, CreateTEDSAIRTDChanResponse* response) override;
  ::grpc::Status CreateTEDSAIResistanceChan(::grpc::ServerContext* context, const CreateTEDSAIResistanceChanRequest* request, CreateTEDSAIResistanceChanResponse* response) override;
  ::grpc::Status CreateTEDSAIStrainGageChan(::grpc::ServerContext* context, const CreateTEDSAIStrainGageChanRequest* request, CreateTEDSAIStrainGageChanResponse* response) override;
  ::grpc::Status CreateTEDSAIThrmcplChan(::grpc::ServerContext* context, const CreateTEDSAIThrmcplChanRequest* request, CreateTEDSAIThrmcplChanResponse* response) override;
  ::grpc::Status CreateTEDSAIThrmstrChanIex(::grpc::ServerContext* context, const CreateTEDSAIThrmstrChanIexRequest* request, CreateTEDSAIThrmstrChanIexResponse* response) override;
  ::grpc::Status CreateTEDSAIThrmstrChanVex(::grpc::ServerContext* context, const CreateTEDSAIThrmstrChanVexRequest* request, CreateTEDSAIThrmstrChanVexResponse* response) override;
  ::grpc::Status CreateTEDSAITorqueBridgeChan(::grpc::ServerContext* context, const CreateTEDSAITorqueBridgeChanRequest* request, CreateTEDSAITorqueBridgeChanResponse* response) override;
  ::grpc::Status CreateTEDSAIVoltageChan(::grpc::ServerContext* context, const CreateTEDSAIVoltageChanRequest* request, CreateTEDSAIVoltageChanResponse* response) override;
  ::grpc::Status CreateTEDSAIVoltageChanWithExcit(::grpc::ServerContext* context, const CreateTEDSAIVoltageChanWithExcitRequest* request, CreateTEDSAIVoltageChanWithExcitResponse* response) override;
  ::grpc::Status CreateTableScale(::grpc::ServerContext* context, const CreateTableScaleRequest* request, CreateTableScaleResponse* response) override;
  ::grpc::Status CreateTask(::grpc::ServerContext* context, const CreateTaskRequest* request, CreateTaskResponse* response) override;
  ::grpc::Status CreateWatchdogTimerTask(::grpc::ServerContext* context, const CreateWatchdogTimerTaskRequest* request, CreateWatchdogTimerTaskResponse* response) override;
  ::grpc::Status CreateWatchdogTimerTaskEx(::grpc::ServerContext* context, const CreateWatchdogTimerTaskExRequest* request, CreateWatchdogTimerTaskExResponse* response) override;
  ::grpc::Status DeleteNetworkDevice(::grpc::ServerContext* context, const DeleteNetworkDeviceRequest* request, DeleteNetworkDeviceResponse* response) override;
  ::grpc::Status DisableRefTrig(::grpc::ServerContext* context, const DisableRefTrigRequest* request, DisableRefTrigResponse* response) override;
  ::grpc::Status DisableStartTrig(::grpc::ServerContext* context, const DisableStartTrigRequest* request, DisableStartTrigResponse* response) override;
  ::grpc::Status DisconnectTerms(::grpc::ServerContext* context, const DisconnectTermsRequest* request, DisconnectTermsResponse* response) override;
  ::grpc::Status ExportSignal(::grpc::ServerContext* context, const ExportSignalRequest* request, ExportSignalResponse* response) override;
  ::grpc::Status GetAIChanCalCalDate(::grpc::ServerContext* context, const GetAIChanCalCalDateRequest* request, GetAIChanCalCalDateResponse* response) override;
  ::grpc::Status GetAIChanCalExpDate(::grpc::ServerContext* context, const GetAIChanCalExpDateRequest* request, GetAIChanCalExpDateResponse* response) override;
  ::grpc::Status GetDigitalLogicFamilyPowerUpState(::grpc::ServerContext* context, const GetDigitalLogicFamilyPowerUpStateRequest* request, GetDigitalLogicFamilyPowerUpStateResponse* response) override;
  ::grpc::Status GetErrorString(::grpc::ServerContext* context, const GetErrorStringRequest* request, GetErrorStringResponse* response) override;
  ::grpc::Status GetExtendedErrorInfo(::grpc::ServerContext* context, const GetExtendedErrorInfoRequest* request, GetExtendedErrorInfoResponse* response) override;
  ::grpc::Status GetNthTaskChannel(::grpc::ServerContext* context, const GetNthTaskChannelRequest* request, GetNthTaskChannelResponse* response) override;
  ::grpc::Status GetNthTaskDevice(::grpc::ServerContext* context, const GetNthTaskDeviceRequest* request, GetNthTaskDeviceResponse* response) override;
  ::grpc::Status GetNthTaskReadChannel(::grpc::ServerContext* context, const GetNthTaskReadChannelRequest* request, GetNthTaskReadChannelResponse* response) override;
  ::grpc::Status IsTaskDone(::grpc::ServerContext* context, const IsTaskDoneRequest* request, IsTaskDoneResponse* response) override;
  ::grpc::Status LoadTask(::grpc::ServerContext* context, const LoadTaskRequest* request, LoadTaskResponse* response) override;
  ::grpc::Status ReadAnalogF64(::grpc::ServerContext* context, const ReadAnalogF64Request* request, ReadAnalogF64Response* response) override;
  ::grpc::Status ReadAnalogScalarF64(::grpc::ServerContext* context, const ReadAnalogScalarF64Request* request, ReadAnalogScalarF64Response* response) override;
  ::grpc::Status ReadBinaryI16(::grpc::ServerContext* context, const ReadBinaryI16Request* request, ReadBinaryI16Response* response) override;
  ::grpc::Status ReadBinaryI32(::grpc::ServerContext* context, const ReadBinaryI32Request* request, ReadBinaryI32Response* response) override;
  ::grpc::Status ReadBinaryU16(::grpc::ServerContext* context, const ReadBinaryU16Request* request, ReadBinaryU16Response* response) override;
  ::grpc::Status ReadBinaryU32(::grpc::ServerContext* context, const ReadBinaryU32Request* request, ReadBinaryU32Response* response) override;
  ::grpc::Status ReadCounterF64(::grpc::ServerContext* context, const ReadCounterF64Request* request, ReadCounterF64Response* response) override;
  ::grpc::Status ReadCounterF64Ex(::grpc::ServerContext* context, const ReadCounterF64ExRequest* request, ReadCounterF64ExResponse* response) override;
  ::grpc::Status ReadCounterScalarF64(::grpc::ServerContext* context, const ReadCounterScalarF64Request* request, ReadCounterScalarF64Response* response) override;
  ::grpc::Status ReadCounterScalarU32(::grpc::ServerContext* context, const ReadCounterScalarU32Request* request, ReadCounterScalarU32Response* response) override;
  ::grpc::Status ReadCounterU32(::grpc::ServerContext* context, const ReadCounterU32Request* request, ReadCounterU32Response* response) override;
  ::grpc::Status ReadCounterU32Ex(::grpc::ServerContext* context, const ReadCounterU32ExRequest* request, ReadCounterU32ExResponse* response) override;
  ::grpc::Status ReadCtrFreq(::grpc::ServerContext* context, const ReadCtrFreqRequest* request, ReadCtrFreqResponse* response) override;
  ::grpc::Status ReadCtrFreqScalar(::grpc::ServerContext* context, const ReadCtrFreqScalarRequest* request, ReadCtrFreqScalarResponse* response) override;
  ::grpc::Status ReadCtrTicks(::grpc::ServerContext* context, const ReadCtrTicksRequest* request, ReadCtrTicksResponse* response) override;
  ::grpc::Status ReadCtrTicksScalar(::grpc::ServerContext* context, const ReadCtrTicksScalarRequest* request, ReadCtrTicksScalarResponse* response) override;
  ::grpc::Status ReadCtrTime(::grpc::ServerContext* context, const ReadCtrTimeRequest* request, ReadCtrTimeResponse* response) override;
  ::grpc::Status ReadCtrTimeScalar(::grpc::ServerContext* context, const ReadCtrTimeScalarRequest* request, ReadCtrTimeScalarResponse* response) override;
  ::grpc::Status ReadDigitalLines(::grpc::ServerContext* context, const ReadDigitalLinesRequest* request, ReadDigitalLinesResponse* response) override;
  ::grpc::Status ReadDigitalScalarU32(::grpc::ServerContext* context, const ReadDigitalScalarU32Request* request, ReadDigitalScalarU32Response* response) override;
  ::grpc::Status ReadDigitalU16(::grpc::ServerContext* context, const ReadDigitalU16Request* request, ReadDigitalU16Response* response) override;
  ::grpc::Status ReadDigitalU32(::grpc::ServerContext* context, const ReadDigitalU32Request* request, ReadDigitalU32Response* response) override;
  ::grpc::Status ReadDigitalU8(::grpc::ServerContext* context, const ReadDigitalU8Request* request, ReadDigitalU8Response* response) override;
  ::grpc::Status ReserveNetworkDevice(::grpc::ServerContext* context, const ReserveNetworkDeviceRequest* request, ReserveNetworkDeviceResponse* response) override;
  ::grpc::Status ResetDevice(::grpc::ServerContext* context, const ResetDeviceRequest* request, ResetDeviceResponse* response) override;
  ::grpc::Status SelfTestDevice(::grpc::ServerContext* context, const SelfTestDeviceRequest* request, SelfTestDeviceResponse* response) override;
  ::grpc::Status SetAIChanCalCalDate(::grpc::ServerContext* context, const SetAIChanCalCalDateRequest* request, SetAIChanCalCalDateResponse* response) override;
  ::grpc::Status SetAIChanCalExpDate(::grpc::ServerContext* context, const SetAIChanCalExpDateRequest* request, SetAIChanCalExpDateResponse* response) override;
  ::grpc::Status SetDigitalLogicFamilyPowerUpState(::grpc::ServerContext* context, const SetDigitalLogicFamilyPowerUpStateRequest* request, SetDigitalLogicFamilyPowerUpStateResponse* response) override;
  ::grpc::Status StartNewFile(::grpc::ServerContext* context, const StartNewFileRequest* request, StartNewFileResponse* response) override;
  ::grpc::Status StartTask(::grpc::ServerContext* context, const StartTaskRequest* request, StartTaskResponse* response) override;
  ::grpc::Status StopTask(::grpc::ServerContext* context, const StopTaskRequest* request, StopTaskResponse* response) override;
  ::grpc::Status TaskControl(::grpc::ServerContext* context, const TaskControlRequest* request, TaskControlResponse* response) override;
  ::grpc::Status TristateOutputTerm(::grpc::ServerContext* context, const TristateOutputTermRequest* request, TristateOutputTermResponse* response) override;
  ::grpc::Status UnreserveNetworkDevice(::grpc::ServerContext* context, const UnreserveNetworkDeviceRequest* request, UnreserveNetworkDeviceResponse* response) override;
  ::grpc::Status WaitUntilTaskDone(::grpc::ServerContext* context, const WaitUntilTaskDoneRequest* request, WaitUntilTaskDoneResponse* response) override;
  ::grpc::Status WriteAnalogF64(::grpc::ServerContext* context, const WriteAnalogF64Request* request, WriteAnalogF64Response* response) override;
  ::grpc::Status WriteAnalogScalarF64(::grpc::ServerContext* context, const WriteAnalogScalarF64Request* request, WriteAnalogScalarF64Response* response) override;
  ::grpc::Status WriteBinaryI16(::grpc::ServerContext* context, const WriteBinaryI16Request* request, WriteBinaryI16Response* response) override;
  ::grpc::Status WriteBinaryI32(::grpc::ServerContext* context, const WriteBinaryI32Request* request, WriteBinaryI32Response* response) override;
  ::grpc::Status WriteBinaryU16(::grpc::ServerContext* context, const WriteBinaryU16Request* request, WriteBinaryU16Response* response) override;
  ::grpc::Status WriteBinaryU32(::grpc::ServerContext* context, const WriteBinaryU32Request* request, WriteBinaryU32Response* response) override;
  ::grpc::Status WriteCtrFreq(::grpc::ServerContext* context, const WriteCtrFreqRequest* request, WriteCtrFreqResponse* response) override;
  ::grpc::Status WriteCtrFreqScalar(::grpc::ServerContext* context, const WriteCtrFreqScalarRequest* request, WriteCtrFreqScalarResponse* response) override;
  ::grpc::Status WriteCtrTicks(::grpc::ServerContext* context, const WriteCtrTicksRequest* request, WriteCtrTicksResponse* response) override;
  ::grpc::Status WriteCtrTicksScalar(::grpc::ServerContext* context, const WriteCtrTicksScalarRequest* request, WriteCtrTicksScalarResponse* response) override;
  ::grpc::Status WriteCtrTime(::grpc::ServerContext* context, const WriteCtrTimeRequest* request, WriteCtrTimeResponse* response) override;
  ::grpc::Status WriteCtrTimeScalar(::grpc::ServerContext* context, const WriteCtrTimeScalarRequest* request, WriteCtrTimeScalarResponse* response) override;
  ::grpc::Status WriteDigitalLines(::grpc::ServerContext* context, const WriteDigitalLinesRequest* request, WriteDigitalLinesResponse* response) override;
  ::grpc::Status WriteDigitalScalarU32(::grpc::ServerContext* context, const WriteDigitalScalarU32Request* request, WriteDigitalScalarU32Response* response) override;
  ::grpc::Status WriteDigitalU16(::grpc::ServerContext* context, const WriteDigitalU16Request* request, WriteDigitalU16Response* response) override;
  ::grpc::Status WriteDigitalU32(::grpc::ServerContext* context, const WriteDigitalU32Request* request, WriteDigitalU32Response* response) override;
  ::grpc::Status WriteDigitalU8(::grpc::ServerContext* context, const WriteDigitalU8Request* request, WriteDigitalU8Response* response) override;
private:
  NiDAQmxLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
};

} // namespace nidaqmx_grpc

#endif  // NIDAQMX_GRPC_SERVICE_H
