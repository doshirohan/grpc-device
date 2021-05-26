
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-DCPower Metadata
//---------------------------------------------------------------------
#ifndef NIDCPOWER_GRPC_SERVICE_H
#define NIDCPOWER_GRPC_SERVICE_H

#include <nidcpower.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/session_repository.h>
#include <server/shared_library.h>

#include "nidcpower_library_interface.h"

namespace nidcpower_grpc {

class NiDCPowerService final : public NiDCPower::Service {
public:
  NiDCPowerService(NiDCPowerLibraryInterface* library, nidevice_grpc::SessionRepository* session_repository);
  virtual ~NiDCPowerService();
  ::grpc::Status AbortWithChannels(::grpc::ServerContext* context, const AbortWithChannelsRequest* request, AbortWithChannelsResponse* response) override;
  ::grpc::Status CommitWithChannels(::grpc::ServerContext* context, const CommitWithChannelsRequest* request, CommitWithChannelsResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeMeasureTriggerWithChannels(::grpc::ServerContext* context, const ConfigureDigitalEdgeMeasureTriggerWithChannelsRequest* request, ConfigureDigitalEdgeMeasureTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgePulseTriggerWithChannels(::grpc::ServerContext* context, const ConfigureDigitalEdgePulseTriggerWithChannelsRequest* request, ConfigureDigitalEdgePulseTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannels(::grpc::ServerContext* context, const ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannelsRequest* request, ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeShutdownTriggerWithChannels(::grpc::ServerContext* context, const ConfigureDigitalEdgeShutdownTriggerWithChannelsRequest* request, ConfigureDigitalEdgeShutdownTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeSourceTriggerWithChannels(::grpc::ServerContext* context, const ConfigureDigitalEdgeSourceTriggerWithChannelsRequest* request, ConfigureDigitalEdgeSourceTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeStartTriggerWithChannels(::grpc::ServerContext* context, const ConfigureDigitalEdgeStartTriggerWithChannelsRequest* request, ConfigureDigitalEdgeStartTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureOvp(::grpc::ServerContext* context, const ConfigureOvpRequest* request, ConfigureOvpResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeMeasureTriggerWithChannels(::grpc::ServerContext* context, const ConfigureSoftwareEdgeMeasureTriggerWithChannelsRequest* request, ConfigureSoftwareEdgeMeasureTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgePulseTriggerWithChannels(::grpc::ServerContext* context, const ConfigureSoftwareEdgePulseTriggerWithChannelsRequest* request, ConfigureSoftwareEdgePulseTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannels(::grpc::ServerContext* context, const ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannelsRequest* request, ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeShutdownTriggerWithChannels(::grpc::ServerContext* context, const ConfigureSoftwareEdgeShutdownTriggerWithChannelsRequest* request, ConfigureSoftwareEdgeShutdownTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeSourceTriggerWithChannels(::grpc::ServerContext* context, const ConfigureSoftwareEdgeSourceTriggerWithChannelsRequest* request, ConfigureSoftwareEdgeSourceTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeStartTriggerWithChannels(::grpc::ServerContext* context, const ConfigureSoftwareEdgeStartTriggerWithChannelsRequest* request, ConfigureSoftwareEdgeStartTriggerWithChannelsResponse* response) override;
  ::grpc::Status ConfigureSourceModeWithChannels(::grpc::ServerContext* context, const ConfigureSourceModeWithChannelsRequest* request, ConfigureSourceModeWithChannelsResponse* response) override;
  ::grpc::Status CreateAdvancedSequenceCommitStepWithChannels(::grpc::ServerContext* context, const CreateAdvancedSequenceCommitStepWithChannelsRequest* request, CreateAdvancedSequenceCommitStepWithChannelsResponse* response) override;
  ::grpc::Status CreateAdvancedSequenceStepWithChannels(::grpc::ServerContext* context, const CreateAdvancedSequenceStepWithChannelsRequest* request, CreateAdvancedSequenceStepWithChannelsResponse* response) override;
  ::grpc::Status CreateAdvancedSequenceWithChannels(::grpc::ServerContext* context, const CreateAdvancedSequenceWithChannelsRequest* request, CreateAdvancedSequenceWithChannelsResponse* response) override;
  ::grpc::Status CreateAdvancedSequence(::grpc::ServerContext* context, const CreateAdvancedSequenceRequest* request, CreateAdvancedSequenceResponse* response) override;
  ::grpc::Status DeleteAdvancedSequenceWithChannels(::grpc::ServerContext* context, const DeleteAdvancedSequenceWithChannelsRequest* request, DeleteAdvancedSequenceWithChannelsResponse* response) override;
  ::grpc::Status DisablePulseTriggerWithChannels(::grpc::ServerContext* context, const DisablePulseTriggerWithChannelsRequest* request, DisablePulseTriggerWithChannelsResponse* response) override;
  ::grpc::Status DisableSequenceAdvanceTriggerWithChannels(::grpc::ServerContext* context, const DisableSequenceAdvanceTriggerWithChannelsRequest* request, DisableSequenceAdvanceTriggerWithChannelsResponse* response) override;
  ::grpc::Status DisableShutdownTriggerWithChannels(::grpc::ServerContext* context, const DisableShutdownTriggerWithChannelsRequest* request, DisableShutdownTriggerWithChannelsResponse* response) override;
  ::grpc::Status DisableSourceTriggerWithChannels(::grpc::ServerContext* context, const DisableSourceTriggerWithChannelsRequest* request, DisableSourceTriggerWithChannelsResponse* response) override;
  ::grpc::Status DisableStartTriggerWithChannels(::grpc::ServerContext* context, const DisableStartTriggerWithChannelsRequest* request, DisableStartTriggerWithChannelsResponse* response) override;
  ::grpc::Status ErrorQuery(::grpc::ServerContext* context, const ErrorQueryRequest* request, ErrorQueryResponse* response) override;
  ::grpc::Status ExportSignalWithChannels(::grpc::ServerContext* context, const ExportSignalWithChannelsRequest* request, ExportSignalWithChannelsResponse* response) override;
  ::grpc::Status InitializeWithIndependentChannels(::grpc::ServerContext* context, const InitializeWithIndependentChannelsRequest* request, InitializeWithIndependentChannelsResponse* response) override;
  ::grpc::Status InitiateWithChannels(::grpc::ServerContext* context, const InitiateWithChannelsRequest* request, InitiateWithChannelsResponse* response) override;
  ::grpc::Status InvalidateAllAttributes(::grpc::ServerContext* context, const InvalidateAllAttributesRequest* request, InvalidateAllAttributesResponse* response) override;
  ::grpc::Status ResetWithChannels(::grpc::ServerContext* context, const ResetWithChannelsRequest* request, ResetWithChannelsResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTriggerWithChannels(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerWithChannelsRequest* request, SendSoftwareEdgeTriggerWithChannelsResponse* response) override;
  ::grpc::Status WaitForEventWithChannels(::grpc::ServerContext* context, const WaitForEventWithChannelsRequest* request, WaitForEventWithChannelsResponse* response) override;
  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status CalAdjustCurrentLimit(::grpc::ServerContext* context, const CalAdjustCurrentLimitRequest* request, CalAdjustCurrentLimitResponse* response) override;
  ::grpc::Status CalAdjustCurrentMeasurement(::grpc::ServerContext* context, const CalAdjustCurrentMeasurementRequest* request, CalAdjustCurrentMeasurementResponse* response) override;
  ::grpc::Status CalAdjustInternalReference(::grpc::ServerContext* context, const CalAdjustInternalReferenceRequest* request, CalAdjustInternalReferenceResponse* response) override;
  ::grpc::Status CalAdjustOutputResistance(::grpc::ServerContext* context, const CalAdjustOutputResistanceRequest* request, CalAdjustOutputResistanceResponse* response) override;
  ::grpc::Status CalAdjustResidualCurrentOffset(::grpc::ServerContext* context, const CalAdjustResidualCurrentOffsetRequest* request, CalAdjustResidualCurrentOffsetResponse* response) override;
  ::grpc::Status CalAdjustResidualVoltageOffset(::grpc::ServerContext* context, const CalAdjustResidualVoltageOffsetRequest* request, CalAdjustResidualVoltageOffsetResponse* response) override;
  ::grpc::Status CalAdjustVoltageLevel(::grpc::ServerContext* context, const CalAdjustVoltageLevelRequest* request, CalAdjustVoltageLevelResponse* response) override;
  ::grpc::Status CalAdjustVoltageMeasurement(::grpc::ServerContext* context, const CalAdjustVoltageMeasurementRequest* request, CalAdjustVoltageMeasurementResponse* response) override;
  ::grpc::Status CalSelfCalibrate(::grpc::ServerContext* context, const CalSelfCalibrateRequest* request, CalSelfCalibrateResponse* response) override;
  ::grpc::Status ChangeExtCalPassword(::grpc::ServerContext* context, const ChangeExtCalPasswordRequest* request, ChangeExtCalPasswordResponse* response) override;
  ::grpc::Status ClearError(::grpc::ServerContext* context, const ClearErrorRequest* request, ClearErrorResponse* response) override;
  ::grpc::Status ClearInterchangeWarnings(::grpc::ServerContext* context, const ClearInterchangeWarningsRequest* request, ClearInterchangeWarningsResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status CloseExtCal(::grpc::ServerContext* context, const CloseExtCalRequest* request, CloseExtCalResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status ConfigureApertureTime(::grpc::ServerContext* context, const ConfigureApertureTimeRequest* request, ConfigureApertureTimeResponse* response) override;
  ::grpc::Status ConfigureAutoZero(::grpc::ServerContext* context, const ConfigureAutoZeroRequest* request, ConfigureAutoZeroResponse* response) override;
  ::grpc::Status ConfigureCurrentLevel(::grpc::ServerContext* context, const ConfigureCurrentLevelRequest* request, ConfigureCurrentLevelResponse* response) override;
  ::grpc::Status ConfigureCurrentLevelRange(::grpc::ServerContext* context, const ConfigureCurrentLevelRangeRequest* request, ConfigureCurrentLevelRangeResponse* response) override;
  ::grpc::Status ConfigureCurrentLimit(::grpc::ServerContext* context, const ConfigureCurrentLimitRequest* request, ConfigureCurrentLimitResponse* response) override;
  ::grpc::Status ConfigureCurrentLimitRange(::grpc::ServerContext* context, const ConfigureCurrentLimitRangeRequest* request, ConfigureCurrentLimitRangeResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeMeasureTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeMeasureTriggerRequest* request, ConfigureDigitalEdgeMeasureTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgePulseTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgePulseTriggerRequest* request, ConfigureDigitalEdgePulseTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeSequenceAdvanceTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeSequenceAdvanceTriggerRequest* request, ConfigureDigitalEdgeSequenceAdvanceTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeSourceTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeSourceTriggerRequest* request, ConfigureDigitalEdgeSourceTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeStartTriggerRequest* request, ConfigureDigitalEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureOutputEnabled(::grpc::ServerContext* context, const ConfigureOutputEnabledRequest* request, ConfigureOutputEnabledResponse* response) override;
  ::grpc::Status ConfigureOutputFunction(::grpc::ServerContext* context, const ConfigureOutputFunctionRequest* request, ConfigureOutputFunctionResponse* response) override;
  ::grpc::Status ConfigureOutputResistance(::grpc::ServerContext* context, const ConfigureOutputResistanceRequest* request, ConfigureOutputResistanceResponse* response) override;
  ::grpc::Status ConfigurePowerLineFrequency(::grpc::ServerContext* context, const ConfigurePowerLineFrequencyRequest* request, ConfigurePowerLineFrequencyResponse* response) override;
  ::grpc::Status ConfigurePulseBiasCurrentLevel(::grpc::ServerContext* context, const ConfigurePulseBiasCurrentLevelRequest* request, ConfigurePulseBiasCurrentLevelResponse* response) override;
  ::grpc::Status ConfigurePulseBiasCurrentLimit(::grpc::ServerContext* context, const ConfigurePulseBiasCurrentLimitRequest* request, ConfigurePulseBiasCurrentLimitResponse* response) override;
  ::grpc::Status ConfigurePulseBiasVoltageLevel(::grpc::ServerContext* context, const ConfigurePulseBiasVoltageLevelRequest* request, ConfigurePulseBiasVoltageLevelResponse* response) override;
  ::grpc::Status ConfigurePulseBiasVoltageLimit(::grpc::ServerContext* context, const ConfigurePulseBiasVoltageLimitRequest* request, ConfigurePulseBiasVoltageLimitResponse* response) override;
  ::grpc::Status ConfigurePulseCurrentLevel(::grpc::ServerContext* context, const ConfigurePulseCurrentLevelRequest* request, ConfigurePulseCurrentLevelResponse* response) override;
  ::grpc::Status ConfigurePulseCurrentLevelRange(::grpc::ServerContext* context, const ConfigurePulseCurrentLevelRangeRequest* request, ConfigurePulseCurrentLevelRangeResponse* response) override;
  ::grpc::Status ConfigurePulseCurrentLimit(::grpc::ServerContext* context, const ConfigurePulseCurrentLimitRequest* request, ConfigurePulseCurrentLimitResponse* response) override;
  ::grpc::Status ConfigurePulseCurrentLimitRange(::grpc::ServerContext* context, const ConfigurePulseCurrentLimitRangeRequest* request, ConfigurePulseCurrentLimitRangeResponse* response) override;
  ::grpc::Status ConfigurePulseVoltageLevel(::grpc::ServerContext* context, const ConfigurePulseVoltageLevelRequest* request, ConfigurePulseVoltageLevelResponse* response) override;
  ::grpc::Status ConfigurePulseVoltageLevelRange(::grpc::ServerContext* context, const ConfigurePulseVoltageLevelRangeRequest* request, ConfigurePulseVoltageLevelRangeResponse* response) override;
  ::grpc::Status ConfigurePulseVoltageLimit(::grpc::ServerContext* context, const ConfigurePulseVoltageLimitRequest* request, ConfigurePulseVoltageLimitResponse* response) override;
  ::grpc::Status ConfigurePulseVoltageLimitRange(::grpc::ServerContext* context, const ConfigurePulseVoltageLimitRangeRequest* request, ConfigurePulseVoltageLimitRangeResponse* response) override;
  ::grpc::Status ConfigureSense(::grpc::ServerContext* context, const ConfigureSenseRequest* request, ConfigureSenseResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeMeasureTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeMeasureTriggerRequest* request, ConfigureSoftwareEdgeMeasureTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgePulseTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgePulseTriggerRequest* request, ConfigureSoftwareEdgePulseTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeSequenceAdvanceTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeSequenceAdvanceTriggerRequest* request, ConfigureSoftwareEdgeSequenceAdvanceTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeSourceTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeSourceTriggerRequest* request, ConfigureSoftwareEdgeSourceTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureSoftwareEdgeStartTriggerRequest* request, ConfigureSoftwareEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureSourceMode(::grpc::ServerContext* context, const ConfigureSourceModeRequest* request, ConfigureSourceModeResponse* response) override;
  ::grpc::Status ConfigureVoltageLevel(::grpc::ServerContext* context, const ConfigureVoltageLevelRequest* request, ConfigureVoltageLevelResponse* response) override;
  ::grpc::Status ConfigureVoltageLevelRange(::grpc::ServerContext* context, const ConfigureVoltageLevelRangeRequest* request, ConfigureVoltageLevelRangeResponse* response) override;
  ::grpc::Status ConfigureVoltageLimit(::grpc::ServerContext* context, const ConfigureVoltageLimitRequest* request, ConfigureVoltageLimitResponse* response) override;
  ::grpc::Status ConfigureVoltageLimitRange(::grpc::ServerContext* context, const ConfigureVoltageLimitRangeRequest* request, ConfigureVoltageLimitRangeResponse* response) override;
  ::grpc::Status ConnectInternalReference(::grpc::ServerContext* context, const ConnectInternalReferenceRequest* request, ConnectInternalReferenceResponse* response) override;
  ::grpc::Status CreateAdvancedSequenceStep(::grpc::ServerContext* context, const CreateAdvancedSequenceStepRequest* request, CreateAdvancedSequenceStepResponse* response) override;
  ::grpc::Status DeleteAdvancedSequence(::grpc::ServerContext* context, const DeleteAdvancedSequenceRequest* request, DeleteAdvancedSequenceResponse* response) override;
  ::grpc::Status Disable(::grpc::ServerContext* context, const DisableRequest* request, DisableResponse* response) override;
  ::grpc::Status DisablePulseTrigger(::grpc::ServerContext* context, const DisablePulseTriggerRequest* request, DisablePulseTriggerResponse* response) override;
  ::grpc::Status DisableSequenceAdvanceTrigger(::grpc::ServerContext* context, const DisableSequenceAdvanceTriggerRequest* request, DisableSequenceAdvanceTriggerResponse* response) override;
  ::grpc::Status DisableSourceTrigger(::grpc::ServerContext* context, const DisableSourceTriggerRequest* request, DisableSourceTriggerResponse* response) override;
  ::grpc::Status DisableStartTrigger(::grpc::ServerContext* context, const DisableStartTriggerRequest* request, DisableStartTriggerResponse* response) override;
  ::grpc::Status ErrorMessage(::grpc::ServerContext* context, const ErrorMessageRequest* request, ErrorMessageResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ExportAttributeConfigurationBufferRequest* request, ExportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationFile(::grpc::ServerContext* context, const ExportAttributeConfigurationFileRequest* request, ExportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status ExportSignal(::grpc::ServerContext* context, const ExportSignalRequest* request, ExportSignalResponse* response) override;
  ::grpc::Status FetchMultiple(::grpc::ServerContext* context, const FetchMultipleRequest* request, FetchMultipleResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetCalUserDefinedInfo(::grpc::ServerContext* context, const GetCalUserDefinedInfoRequest* request, GetCalUserDefinedInfoResponse* response) override;
  ::grpc::Status GetCalUserDefinedInfoMaxSize(::grpc::ServerContext* context, const GetCalUserDefinedInfoMaxSizeRequest* request, GetCalUserDefinedInfoMaxSizeResponse* response) override;
  ::grpc::Status GetChannelName(::grpc::ServerContext* context, const GetChannelNameRequest* request, GetChannelNameResponse* response) override;
  ::grpc::Status GetChannelNameFromString(::grpc::ServerContext* context, const GetChannelNameFromStringRequest* request, GetChannelNameFromStringResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetExtCalLastDateAndTime(::grpc::ServerContext* context, const GetExtCalLastDateAndTimeRequest* request, GetExtCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetExtCalLastTemp(::grpc::ServerContext* context, const GetExtCalLastTempRequest* request, GetExtCalLastTempResponse* response) override;
  ::grpc::Status GetExtCalRecommendedInterval(::grpc::ServerContext* context, const GetExtCalRecommendedIntervalRequest* request, GetExtCalRecommendedIntervalResponse* response) override;
  ::grpc::Status GetNextCoercionRecord(::grpc::ServerContext* context, const GetNextCoercionRecordRequest* request, GetNextCoercionRecordResponse* response) override;
  ::grpc::Status GetNextInterchangeWarning(::grpc::ServerContext* context, const GetNextInterchangeWarningRequest* request, GetNextInterchangeWarningResponse* response) override;
  ::grpc::Status GetSelfCalLastDateAndTime(::grpc::ServerContext* context, const GetSelfCalLastDateAndTimeRequest* request, GetSelfCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetSelfCalLastTemp(::grpc::ServerContext* context, const GetSelfCalLastTempRequest* request, GetSelfCalLastTempResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ImportAttributeConfigurationBufferRequest* request, ImportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationFile(::grpc::ServerContext* context, const ImportAttributeConfigurationFileRequest* request, ImportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status InitExtCal(::grpc::ServerContext* context, const InitExtCalRequest* request, InitExtCalResponse* response) override;
  ::grpc::Status InitializeWithChannels(::grpc::ServerContext* context, const InitializeWithChannelsRequest* request, InitializeWithChannelsResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status LockSession(::grpc::ServerContext* context, const LockSessionRequest* request, LockSessionResponse* response) override;
  ::grpc::Status Measure(::grpc::ServerContext* context, const MeasureRequest* request, MeasureResponse* response) override;
  ::grpc::Status MeasureMultiple(::grpc::ServerContext* context, const MeasureMultipleRequest* request, MeasureMultipleResponse* response) override;
  ::grpc::Status QueryInCompliance(::grpc::ServerContext* context, const QueryInComplianceRequest* request, QueryInComplianceResponse* response) override;
  ::grpc::Status QueryMaxCurrentLimit(::grpc::ServerContext* context, const QueryMaxCurrentLimitRequest* request, QueryMaxCurrentLimitResponse* response) override;
  ::grpc::Status QueryMaxVoltageLevel(::grpc::ServerContext* context, const QueryMaxVoltageLevelRequest* request, QueryMaxVoltageLevelResponse* response) override;
  ::grpc::Status QueryMinCurrentLimit(::grpc::ServerContext* context, const QueryMinCurrentLimitRequest* request, QueryMinCurrentLimitResponse* response) override;
  ::grpc::Status QueryOutputState(::grpc::ServerContext* context, const QueryOutputStateRequest* request, QueryOutputStateResponse* response) override;
  ::grpc::Status ReadCurrentTemperature(::grpc::ServerContext* context, const ReadCurrentTemperatureRequest* request, ReadCurrentTemperatureResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status ResetDevice(::grpc::ServerContext* context, const ResetDeviceRequest* request, ResetDeviceResponse* response) override;
  ::grpc::Status ResetInterchangeCheck(::grpc::ServerContext* context, const ResetInterchangeCheckRequest* request, ResetInterchangeCheckResponse* response) override;
  ::grpc::Status ResetWithDefaults(::grpc::ServerContext* context, const ResetWithDefaultsRequest* request, ResetWithDefaultsResponse* response) override;
  ::grpc::Status RevisionQuery(::grpc::ServerContext* context, const RevisionQueryRequest* request, RevisionQueryResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViInt64(::grpc::ServerContext* context, const SetAttributeViInt64Request* request, SetAttributeViInt64Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViSession(::grpc::ServerContext* context, const SetAttributeViSessionRequest* request, SetAttributeViSessionResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status SetCalUserDefinedInfo(::grpc::ServerContext* context, const SetCalUserDefinedInfoRequest* request, SetCalUserDefinedInfoResponse* response) override;
  ::grpc::Status SetSequence(::grpc::ServerContext* context, const SetSequenceRequest* request, SetSequenceResponse* response) override;
  ::grpc::Status UnlockSession(::grpc::ServerContext* context, const UnlockSessionRequest* request, UnlockSessionResponse* response) override;
  ::grpc::Status WaitForEvent(::grpc::ServerContext* context, const WaitForEventRequest* request, WaitForEventResponse* response) override;
private:
  NiDCPowerLibraryInterface* library_;
  nidevice_grpc::SessionRepository* session_repository_;
  void Copy(const std::vector<ViBoolean>& input, google::protobuf::RepeatedField<bool>* output);
  std::map<std::int32_t, std::int64_t> nidcpowerint64attributevalues_input_map_ {  };
  std::map<std::int64_t, std::int32_t> nidcpowerint64attributevalues_output_map_ {  };
  std::map<std::int32_t, double> nidcpowerreal64attributevalues_input_map_ { {0, 0},{1, 50},{2, 60}, };
  std::map<double, std::int32_t> nidcpowerreal64attributevalues_output_map_ { {0, 0},{50, 1},{60, 2}, };
  std::map<std::int32_t, std::string> nidcpowerstringattributevalues_input_map_ {  };
  std::map<std::string, std::int32_t> nidcpowerstringattributevalues_output_map_ {  };
};

} // namespace nidcpower_grpc

#endif  // NIDCPOWER_GRPC_SERVICE_H
