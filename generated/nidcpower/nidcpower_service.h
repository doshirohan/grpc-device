
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
  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status CalSelfCalibrate(::grpc::ServerContext* context, const CalSelfCalibrateRequest* request, CalSelfCalibrateResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status ConfigureApertureTime(::grpc::ServerContext* context, const ConfigureApertureTimeRequest* request, ConfigureApertureTimeResponse* response) override;
  ::grpc::Status CreateAdvancedSequenceStep(::grpc::ServerContext* context, const CreateAdvancedSequenceStepRequest* request, CreateAdvancedSequenceStepResponse* response) override;
  ::grpc::Status DeleteAdvancedSequence(::grpc::ServerContext* context, const DeleteAdvancedSequenceRequest* request, DeleteAdvancedSequenceResponse* response) override;
  ::grpc::Status Disable(::grpc::ServerContext* context, const DisableRequest* request, DisableResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ExportAttributeConfigurationBufferRequest* request, ExportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationFile(::grpc::ServerContext* context, const ExportAttributeConfigurationFileRequest* request, ExportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status FetchMultiple(::grpc::ServerContext* context, const FetchMultipleRequest* request, FetchMultipleResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetChannelName(::grpc::ServerContext* context, const GetChannelNameRequest* request, GetChannelNameResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetExtCalLastDateAndTime(::grpc::ServerContext* context, const GetExtCalLastDateAndTimeRequest* request, GetExtCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetExtCalLastTemp(::grpc::ServerContext* context, const GetExtCalLastTempRequest* request, GetExtCalLastTempResponse* response) override;
  ::grpc::Status GetExtCalRecommendedInterval(::grpc::ServerContext* context, const GetExtCalRecommendedIntervalRequest* request, GetExtCalRecommendedIntervalResponse* response) override;
  ::grpc::Status GetSelfCalLastDateAndTime(::grpc::ServerContext* context, const GetSelfCalLastDateAndTimeRequest* request, GetSelfCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetSelfCalLastTemp(::grpc::ServerContext* context, const GetSelfCalLastTempRequest* request, GetSelfCalLastTempResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ImportAttributeConfigurationBufferRequest* request, ImportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationFile(::grpc::ServerContext* context, const ImportAttributeConfigurationFileRequest* request, ImportAttributeConfigurationFileResponse* response) override;
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
  ::grpc::Status ResetDevice(::grpc::ServerContext* context, const ResetDeviceRequest* request, ResetDeviceResponse* response) override;
  ::grpc::Status ResetWithDefaults(::grpc::ServerContext* context, const ResetWithDefaultsRequest* request, ResetWithDefaultsResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViInt64(::grpc::ServerContext* context, const SetAttributeViInt64Request* request, SetAttributeViInt64Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status SetSequence(::grpc::ServerContext* context, const SetSequenceRequest* request, SetSequenceResponse* response) override;
  ::grpc::Status UnlockSession(::grpc::ServerContext* context, const UnlockSessionRequest* request, UnlockSessionResponse* response) override;
  ::grpc::Status WaitForEvent(::grpc::ServerContext* context, const WaitForEventRequest* request, WaitForEventResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status ErrorMessage(::grpc::ServerContext* context, const ErrorMessageRequest* request, ErrorMessageResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
private:
  NiDCPowerLibraryInterface* library_;
  nidevice_grpc::SessionRepository* session_repository_;
};

} // namespace nidcpower_grpc

#endif  // NIDCPOWER_GRPC_SERVICE_H