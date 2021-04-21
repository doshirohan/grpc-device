
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-DMM Metadata
//---------------------------------------------------------------------
#ifndef NIDMM_GRPC_SERVICE_H
#define NIDMM_GRPC_SERVICE_H

#include <nidmm.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/session_repository.h>
#include <server/shared_library.h>

#include "nidmm_library_interface.h"

namespace nidmm_grpc {

class NiDmmService final : public NiDmm::Service {
public:
  NiDmmService(NiDmmLibraryInterface* library, nidevice_grpc::SessionRepository* session_repository);
  virtual ~NiDmmService();
  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status CalAdjustGain(::grpc::ServerContext* context, const CalAdjustGainRequest* request, CalAdjustGainResponse* response) override;
  ::grpc::Status CalAdjustACFilter(::grpc::ServerContext* context, const CalAdjustACFilterRequest* request, CalAdjustACFilterResponse* response) override;
  ::grpc::Status CalAdjustLC(::grpc::ServerContext* context, const CalAdjustLCRequest* request, CalAdjustLCResponse* response) override;
  ::grpc::Status CalAdjustLinearization(::grpc::ServerContext* context, const CalAdjustLinearizationRequest* request, CalAdjustLinearizationResponse* response) override;
  ::grpc::Status CalAdjustMisc(::grpc::ServerContext* context, const CalAdjustMiscRequest* request, CalAdjustMiscResponse* response) override;
  ::grpc::Status CalAdjustOffset(::grpc::ServerContext* context, const CalAdjustOffsetRequest* request, CalAdjustOffsetResponse* response) override;
  ::grpc::Status CheckAttributeViBoolean(::grpc::ServerContext* context, const CheckAttributeViBooleanRequest* request, CheckAttributeViBooleanResponse* response) override;
  ::grpc::Status CheckAttributeViInt32(::grpc::ServerContext* context, const CheckAttributeViInt32Request* request, CheckAttributeViInt32Response* response) override;
  ::grpc::Status CheckAttributeViReal64(::grpc::ServerContext* context, const CheckAttributeViReal64Request* request, CheckAttributeViReal64Response* response) override;
  ::grpc::Status CheckAttributeViSession(::grpc::ServerContext* context, const CheckAttributeViSessionRequest* request, CheckAttributeViSessionResponse* response) override;
  ::grpc::Status ClearError(::grpc::ServerContext* context, const ClearErrorRequest* request, ClearErrorResponse* response) override;
  ::grpc::Status ClearInterchangeWarnings(::grpc::ServerContext* context, const ClearInterchangeWarningsRequest* request, ClearInterchangeWarningsResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status CloseExtCal(::grpc::ServerContext* context, const CloseExtCalRequest* request, CloseExtCalResponse* response) override;
  ::grpc::Status ConfigureACBandwidth(::grpc::ServerContext* context, const ConfigureACBandwidthRequest* request, ConfigureACBandwidthResponse* response) override;
  ::grpc::Status ConfigureADCCalibration(::grpc::ServerContext* context, const ConfigureADCCalibrationRequest* request, ConfigureADCCalibrationResponse* response) override;
  ::grpc::Status ConfigureAutoZeroMode(::grpc::ServerContext* context, const ConfigureAutoZeroModeRequest* request, ConfigureAutoZeroModeResponse* response) override;
  ::grpc::Status ConfigureCableCompType(::grpc::ServerContext* context, const ConfigureCableCompTypeRequest* request, ConfigureCableCompTypeResponse* response) override;
  ::grpc::Status ConfigureCurrentSource(::grpc::ServerContext* context, const ConfigureCurrentSourceRequest* request, ConfigureCurrentSourceResponse* response) override;
  ::grpc::Status ConfigureFixedRefJunction(::grpc::ServerContext* context, const ConfigureFixedRefJunctionRequest* request, ConfigureFixedRefJunctionResponse* response) override;
  ::grpc::Status ConfigureFrequencyVoltageRange(::grpc::ServerContext* context, const ConfigureFrequencyVoltageRangeRequest* request, ConfigureFrequencyVoltageRangeResponse* response) override;
  ::grpc::Status ConfigureMeasCompleteDest(::grpc::ServerContext* context, const ConfigureMeasCompleteDestRequest* request, ConfigureMeasCompleteDestResponse* response) override;
  ::grpc::Status ConfigureMeasurementAbsolute(::grpc::ServerContext* context, const ConfigureMeasurementAbsoluteRequest* request, ConfigureMeasurementAbsoluteResponse* response) override;
  ::grpc::Status ConfigureMeasCompleteSlope(::grpc::ServerContext* context, const ConfigureMeasCompleteSlopeRequest* request, ConfigureMeasCompleteSlopeResponse* response) override;
  ::grpc::Status ConfigureMeasurementDigits(::grpc::ServerContext* context, const ConfigureMeasurementDigitsRequest* request, ConfigureMeasurementDigitsResponse* response) override;
  ::grpc::Status ConfigureMultiPoint(::grpc::ServerContext* context, const ConfigureMultiPointRequest* request, ConfigureMultiPointResponse* response) override;
  ::grpc::Status ConfigureOffsetCompOhms(::grpc::ServerContext* context, const ConfigureOffsetCompOhmsRequest* request, ConfigureOffsetCompOhmsResponse* response) override;
  ::grpc::Status ConfigureOpenCableCompValues(::grpc::ServerContext* context, const ConfigureOpenCableCompValuesRequest* request, ConfigureOpenCableCompValuesResponse* response) override;
  ::grpc::Status ConfigurePowerLineFrequency(::grpc::ServerContext* context, const ConfigurePowerLineFrequencyRequest* request, ConfigurePowerLineFrequencyResponse* response) override;
  ::grpc::Status ConfigureShortCableCompValues(::grpc::ServerContext* context, const ConfigureShortCableCompValuesRequest* request, ConfigureShortCableCompValuesResponse* response) override;
  ::grpc::Status ConfigureRTDCustom(::grpc::ServerContext* context, const ConfigureRTDCustomRequest* request, ConfigureRTDCustomResponse* response) override;
  ::grpc::Status ConfigureRTDType(::grpc::ServerContext* context, const ConfigureRTDTypeRequest* request, ConfigureRTDTypeResponse* response) override;
  ::grpc::Status ConfigureSampleTriggerSlope(::grpc::ServerContext* context, const ConfigureSampleTriggerSlopeRequest* request, ConfigureSampleTriggerSlopeResponse* response) override;
  ::grpc::Status ConfigureThermistorCustom(::grpc::ServerContext* context, const ConfigureThermistorCustomRequest* request, ConfigureThermistorCustomResponse* response) override;
  ::grpc::Status ConfigureThermocouple(::grpc::ServerContext* context, const ConfigureThermocoupleRequest* request, ConfigureThermocoupleResponse* response) override;
  ::grpc::Status ConfigureThermistorType(::grpc::ServerContext* context, const ConfigureThermistorTypeRequest* request, ConfigureThermistorTypeResponse* response) override;
  ::grpc::Status ConfigureTransducerType(::grpc::ServerContext* context, const ConfigureTransducerTypeRequest* request, ConfigureTransducerTypeResponse* response) override;
  ::grpc::Status ConfigureTrigger(::grpc::ServerContext* context, const ConfigureTriggerRequest* request, ConfigureTriggerResponse* response) override;
  ::grpc::Status ConfigureTriggerSlope(::grpc::ServerContext* context, const ConfigureTriggerSlopeRequest* request, ConfigureTriggerSlopeResponse* response) override;
  ::grpc::Status ConfigureWaveformAcquisition(::grpc::ServerContext* context, const ConfigureWaveformAcquisitionRequest* request, ConfigureWaveformAcquisitionResponse* response) override;
  ::grpc::Status ConfigureWaveformCoupling(::grpc::ServerContext* context, const ConfigureWaveformCouplingRequest* request, ConfigureWaveformCouplingResponse* response) override;
  ::grpc::Status Control(::grpc::ServerContext* context, const ControlRequest* request, ControlResponse* response) override;
  ::grpc::Status Disable(::grpc::ServerContext* context, const DisableRequest* request, DisableResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ExportAttributeConfigurationBufferRequest* request, ExportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationFile(::grpc::ServerContext* context, const ExportAttributeConfigurationFileRequest* request, ExportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status Fetch(::grpc::ServerContext* context, const FetchRequest* request, FetchResponse* response) override;
  ::grpc::Status FetchMultiPoint(::grpc::ServerContext* context, const FetchMultiPointRequest* request, FetchMultiPointResponse* response) override;
  ::grpc::Status FetchWaveform(::grpc::ServerContext* context, const FetchWaveformRequest* request, FetchWaveformResponse* response) override;
  ::grpc::Status GetApertureTimeInfo(::grpc::ServerContext* context, const GetApertureTimeInfoRequest* request, GetApertureTimeInfoResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetAutoRangeValue(::grpc::ServerContext* context, const GetAutoRangeValueRequest* request, GetAutoRangeValueResponse* response) override;
  ::grpc::Status GetCalCount(::grpc::ServerContext* context, const GetCalCountRequest* request, GetCalCountResponse* response) override;
  ::grpc::Status GetCalDateAndTime(::grpc::ServerContext* context, const GetCalDateAndTimeRequest* request, GetCalDateAndTimeResponse* response) override;
  ::grpc::Status GetCalUserDefinedInfo(::grpc::ServerContext* context, const GetCalUserDefinedInfoRequest* request, GetCalUserDefinedInfoResponse* response) override;
  ::grpc::Status GetCalUserDefinedInfoMaxSize(::grpc::ServerContext* context, const GetCalUserDefinedInfoMaxSizeRequest* request, GetCalUserDefinedInfoMaxSizeResponse* response) override;
  ::grpc::Status GetDevTemp(::grpc::ServerContext* context, const GetDevTempRequest* request, GetDevTempResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetErrorMessage(::grpc::ServerContext* context, const GetErrorMessageRequest* request, GetErrorMessageResponse* response) override;
  ::grpc::Status GetExtCalRecommendedInterval(::grpc::ServerContext* context, const GetExtCalRecommendedIntervalRequest* request, GetExtCalRecommendedIntervalResponse* response) override;
  ::grpc::Status GetLastCalTemp(::grpc::ServerContext* context, const GetLastCalTempRequest* request, GetLastCalTempResponse* response) override;
  ::grpc::Status GetMeasurementPeriod(::grpc::ServerContext* context, const GetMeasurementPeriodRequest* request, GetMeasurementPeriodResponse* response) override;
  ::grpc::Status GetSelfCalSupported(::grpc::ServerContext* context, const GetSelfCalSupportedRequest* request, GetSelfCalSupportedResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ImportAttributeConfigurationBufferRequest* request, ImportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status ImportAttributeConfigurationFile(::grpc::ServerContext* context, const ImportAttributeConfigurationFileRequest* request, ImportAttributeConfigurationFileResponse* response) override;
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status InvalidateAllAttributes(::grpc::ServerContext* context, const InvalidateAllAttributesRequest* request, InvalidateAllAttributesResponse* response) override;
  ::grpc::Status IsOverRange(::grpc::ServerContext* context, const IsOverRangeRequest* request, IsOverRangeResponse* response) override;
  ::grpc::Status IsUnderRange(::grpc::ServerContext* context, const IsUnderRangeRequest* request, IsUnderRangeResponse* response) override;
  ::grpc::Status LockSession(::grpc::ServerContext* context, const LockSessionRequest* request, LockSessionResponse* response) override;
  ::grpc::Status PerformOpenCableComp(::grpc::ServerContext* context, const PerformOpenCableCompRequest* request, PerformOpenCableCompResponse* response) override;
  ::grpc::Status PerformShortCableComp(::grpc::ServerContext* context, const PerformShortCableCompRequest* request, PerformShortCableCompResponse* response) override;
  ::grpc::Status Read(::grpc::ServerContext* context, const ReadRequest* request, ReadResponse* response) override;
  ::grpc::Status ReadMultiPoint(::grpc::ServerContext* context, const ReadMultiPointRequest* request, ReadMultiPointResponse* response) override;
  ::grpc::Status ReadStatus(::grpc::ServerContext* context, const ReadStatusRequest* request, ReadStatusResponse* response) override;
  ::grpc::Status ReadWaveform(::grpc::ServerContext* context, const ReadWaveformRequest* request, ReadWaveformResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status ResetInterchangeCheck(::grpc::ServerContext* context, const ResetInterchangeCheckRequest* request, ResetInterchangeCheckResponse* response) override;
  ::grpc::Status ResetWithDefaults(::grpc::ServerContext* context, const ResetWithDefaultsRequest* request, ResetWithDefaultsResponse* response) override;
  ::grpc::Status RestoreLastExtCalConstants(::grpc::ServerContext* context, const RestoreLastExtCalConstantsRequest* request, RestoreLastExtCalConstantsResponse* response) override;
  ::grpc::Status SelfCal(::grpc::ServerContext* context, const SelfCalRequest* request, SelfCalResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
  ::grpc::Status SendSoftwareTrigger(::grpc::ServerContext* context, const SendSoftwareTriggerRequest* request, SendSoftwareTriggerResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViSession(::grpc::ServerContext* context, const SetAttributeViSessionRequest* request, SetAttributeViSessionResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status UnlockSession(::grpc::ServerContext* context, const UnlockSessionRequest* request, UnlockSessionResponse* response) override;
private:
  NiDmmLibraryInterface* library_;
  nidevice_grpc::SessionRepository* session_repository_;
};

} // namespace nidmm_grpc

#endif  // NIDMM_GRPC_SERVICE_H
