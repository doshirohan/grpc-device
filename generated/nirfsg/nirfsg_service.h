
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-RFSG Metadata
//---------------------------------------------------------------------
#ifndef NIRFSG_GRPC_SERVICE_H
#define NIRFSG_GRPC_SERVICE_H

#include <nirfsg.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nirfsg_library_interface.h"

namespace nirfsg_grpc {

struct NiRFSGFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiRFSGFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiRFSGService final : public NiRFSG::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiRFSGService(
    NiRFSGLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    const NiRFSGFeatureToggles& feature_toggles = {});
  virtual ~NiRFSGService();
  
  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status AllocateArbWaveform(::grpc::ServerContext* context, const AllocateArbWaveformRequest* request, AllocateArbWaveformResponse* response) override;
  ::grpc::Status CheckAttributeViBoolean(::grpc::ServerContext* context, const CheckAttributeViBooleanRequest* request, CheckAttributeViBooleanResponse* response) override;
  ::grpc::Status CheckAttributeViInt32(::grpc::ServerContext* context, const CheckAttributeViInt32Request* request, CheckAttributeViInt32Response* response) override;
  ::grpc::Status CheckAttributeViInt64(::grpc::ServerContext* context, const CheckAttributeViInt64Request* request, CheckAttributeViInt64Response* response) override;
  ::grpc::Status CheckAttributeViReal64(::grpc::ServerContext* context, const CheckAttributeViReal64Request* request, CheckAttributeViReal64Response* response) override;
  ::grpc::Status CheckAttributeViSession(::grpc::ServerContext* context, const CheckAttributeViSessionRequest* request, CheckAttributeViSessionResponse* response) override;
  ::grpc::Status CheckAttributeViString(::grpc::ServerContext* context, const CheckAttributeViStringRequest* request, CheckAttributeViStringResponse* response) override;
  ::grpc::Status CheckGenerationStatus(::grpc::ServerContext* context, const CheckGenerationStatusRequest* request, CheckGenerationStatusResponse* response) override;
  ::grpc::Status CheckIfConfigurationListExists(::grpc::ServerContext* context, const CheckIfConfigurationListExistsRequest* request, CheckIfConfigurationListExistsResponse* response) override;
  ::grpc::Status CheckIfScriptExists(::grpc::ServerContext* context, const CheckIfScriptExistsRequest* request, CheckIfScriptExistsResponse* response) override;
  ::grpc::Status CheckIfWaveformExists(::grpc::ServerContext* context, const CheckIfWaveformExistsRequest* request, CheckIfWaveformExistsResponse* response) override;
  ::grpc::Status ClearAllArbWaveforms(::grpc::ServerContext* context, const ClearAllArbWaveformsRequest* request, ClearAllArbWaveformsResponse* response) override;
  ::grpc::Status ClearArbWaveform(::grpc::ServerContext* context, const ClearArbWaveformRequest* request, ClearArbWaveformResponse* response) override;
  ::grpc::Status ClearError(::grpc::ServerContext* context, const ClearErrorRequest* request, ClearErrorResponse* response) override;
  ::grpc::Status ClearSelfCalibrateRange(::grpc::ServerContext* context, const ClearSelfCalibrateRangeRequest* request, ClearSelfCalibrateRangeResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status ConfigureDeembeddingTableInterpolationLinear(::grpc::ServerContext* context, const ConfigureDeembeddingTableInterpolationLinearRequest* request, ConfigureDeembeddingTableInterpolationLinearResponse* response) override;
  ::grpc::Status ConfigureDeembeddingTableInterpolationNearest(::grpc::ServerContext* context, const ConfigureDeembeddingTableInterpolationNearestRequest* request, ConfigureDeembeddingTableInterpolationNearestResponse* response) override;
  ::grpc::Status ConfigureDeembeddingTableInterpolationSpline(::grpc::ServerContext* context, const ConfigureDeembeddingTableInterpolationSplineRequest* request, ConfigureDeembeddingTableInterpolationSplineResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeConfigurationListStepTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeConfigurationListStepTriggerRequest* request, ConfigureDigitalEdgeConfigurationListStepTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeScriptTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeScriptTriggerRequest* request, ConfigureDigitalEdgeScriptTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalEdgeStartTrigger(::grpc::ServerContext* context, const ConfigureDigitalEdgeStartTriggerRequest* request, ConfigureDigitalEdgeStartTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalLevelScriptTrigger(::grpc::ServerContext* context, const ConfigureDigitalLevelScriptTriggerRequest* request, ConfigureDigitalLevelScriptTriggerResponse* response) override;
  ::grpc::Status ConfigureDigitalModulationUserDefinedWaveform(::grpc::ServerContext* context, const ConfigureDigitalModulationUserDefinedWaveformRequest* request, ConfigureDigitalModulationUserDefinedWaveformResponse* response) override;
  ::grpc::Status ConfigureGenerationMode(::grpc::ServerContext* context, const ConfigureGenerationModeRequest* request, ConfigureGenerationModeResponse* response) override;
  ::grpc::Status ConfigureOutputEnabled(::grpc::ServerContext* context, const ConfigureOutputEnabledRequest* request, ConfigureOutputEnabledResponse* response) override;
  ::grpc::Status ConfigureP2PEndpointFullnessStartTrigger(::grpc::ServerContext* context, const ConfigureP2PEndpointFullnessStartTriggerRequest* request, ConfigureP2PEndpointFullnessStartTriggerResponse* response) override;
  ::grpc::Status ConfigurePXIChassisClk10(::grpc::ServerContext* context, const ConfigurePXIChassisClk10Request* request, ConfigurePXIChassisClk10Response* response) override;
  ::grpc::Status ConfigurePowerLevelType(::grpc::ServerContext* context, const ConfigurePowerLevelTypeRequest* request, ConfigurePowerLevelTypeResponse* response) override;
  ::grpc::Status ConfigureRF(::grpc::ServerContext* context, const ConfigureRFRequest* request, ConfigureRFResponse* response) override;
  ::grpc::Status ConfigureRefClock(::grpc::ServerContext* context, const ConfigureRefClockRequest* request, ConfigureRefClockResponse* response) override;
  ::grpc::Status ConfigureSignalBandwidth(::grpc::ServerContext* context, const ConfigureSignalBandwidthRequest* request, ConfigureSignalBandwidthResponse* response) override;
  ::grpc::Status ConfigureSoftwareScriptTrigger(::grpc::ServerContext* context, const ConfigureSoftwareScriptTriggerRequest* request, ConfigureSoftwareScriptTriggerResponse* response) override;
  ::grpc::Status ConfigureSoftwareStartTrigger(::grpc::ServerContext* context, const ConfigureSoftwareStartTriggerRequest* request, ConfigureSoftwareStartTriggerResponse* response) override;
  ::grpc::Status ConfigureUpconverterPLLSettlingTime(::grpc::ServerContext* context, const ConfigureUpconverterPLLSettlingTimeRequest* request, ConfigureUpconverterPLLSettlingTimeResponse* response) override;
  ::grpc::Status CreateConfigurationList(::grpc::ServerContext* context, const CreateConfigurationListRequest* request, CreateConfigurationListResponse* response) override;
  ::grpc::Status CreateConfigurationListStep(::grpc::ServerContext* context, const CreateConfigurationListStepRequest* request, CreateConfigurationListStepResponse* response) override;
  ::grpc::Status CreateDeembeddingSparameterTableArray(::grpc::ServerContext* context, const CreateDeembeddingSparameterTableArrayRequest* request, CreateDeembeddingSparameterTableArrayResponse* response) override;
  ::grpc::Status CreateDeembeddingSparameterTableS2PFile(::grpc::ServerContext* context, const CreateDeembeddingSparameterTableS2PFileRequest* request, CreateDeembeddingSparameterTableS2PFileResponse* response) override;
  ::grpc::Status DeleteAllDeembeddingTables(::grpc::ServerContext* context, const DeleteAllDeembeddingTablesRequest* request, DeleteAllDeembeddingTablesResponse* response) override;
  ::grpc::Status DeleteConfigurationList(::grpc::ServerContext* context, const DeleteConfigurationListRequest* request, DeleteConfigurationListResponse* response) override;
  ::grpc::Status DeleteDeembeddingTable(::grpc::ServerContext* context, const DeleteDeembeddingTableRequest* request, DeleteDeembeddingTableResponse* response) override;
  ::grpc::Status DeleteScript(::grpc::ServerContext* context, const DeleteScriptRequest* request, DeleteScriptResponse* response) override;
  ::grpc::Status Disable(::grpc::ServerContext* context, const DisableRequest* request, DisableResponse* response) override;
  ::grpc::Status DisableAllModulation(::grpc::ServerContext* context, const DisableAllModulationRequest* request, DisableAllModulationResponse* response) override;
  ::grpc::Status DisableConfigurationListStepTrigger(::grpc::ServerContext* context, const DisableConfigurationListStepTriggerRequest* request, DisableConfigurationListStepTriggerResponse* response) override;
  ::grpc::Status DisableScriptTrigger(::grpc::ServerContext* context, const DisableScriptTriggerRequest* request, DisableScriptTriggerResponse* response) override;
  ::grpc::Status DisableStartTrigger(::grpc::ServerContext* context, const DisableStartTriggerRequest* request, DisableStartTriggerResponse* response) override;
  ::grpc::Status ErrorMessage(::grpc::ServerContext* context, const ErrorMessageRequest* request, ErrorMessageResponse* response) override;
  ::grpc::Status ErrorQuery(::grpc::ServerContext* context, const ErrorQueryRequest* request, ErrorQueryResponse* response) override;
  ::grpc::Status ExportSignal(::grpc::ServerContext* context, const ExportSignalRequest* request, ExportSignalResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetChannelName(::grpc::ServerContext* context, const GetChannelNameRequest* request, GetChannelNameResponse* response) override;
  ::grpc::Status GetDeembeddingSparameters(::grpc::ServerContext* context, const GetDeembeddingSparametersRequest* request, GetDeembeddingSparametersResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetExternalCalibrationLastDateAndTime(::grpc::ServerContext* context, const GetExternalCalibrationLastDateAndTimeRequest* request, GetExternalCalibrationLastDateAndTimeResponse* response) override;
  ::grpc::Status GetSelfCalibrationDateAndTime(::grpc::ServerContext* context, const GetSelfCalibrationDateAndTimeRequest* request, GetSelfCalibrationDateAndTimeResponse* response) override;
  ::grpc::Status GetSelfCalibrationTemperature(::grpc::ServerContext* context, const GetSelfCalibrationTemperatureRequest* request, GetSelfCalibrationTemperatureResponse* response) override;
  ::grpc::Status GetTerminalName(::grpc::ServerContext* context, const GetTerminalNameRequest* request, GetTerminalNameResponse* response) override;
  ::grpc::Status GetUserData(::grpc::ServerContext* context, const GetUserDataRequest* request, GetUserDataResponse* response) override;
  ::grpc::Status GetWaveformBurstStartLocations(::grpc::ServerContext* context, const GetWaveformBurstStartLocationsRequest* request, GetWaveformBurstStartLocationsResponse* response) override;
  ::grpc::Status GetWaveformBurstStopLocations(::grpc::ServerContext* context, const GetWaveformBurstStopLocationsRequest* request, GetWaveformBurstStopLocationsResponse* response) override;
  ::grpc::Status GetWaveformMarkerEventLocations(::grpc::ServerContext* context, const GetWaveformMarkerEventLocationsRequest* request, GetWaveformMarkerEventLocationsResponse* response) override;
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status InvalidateAllAttributes(::grpc::ServerContext* context, const InvalidateAllAttributesRequest* request, InvalidateAllAttributesResponse* response) override;
  ::grpc::Status LoadConfigurationsFromFile(::grpc::ServerContext* context, const LoadConfigurationsFromFileRequest* request, LoadConfigurationsFromFileResponse* response) override;
  ::grpc::Status PerformPowerSearch(::grpc::ServerContext* context, const PerformPowerSearchRequest* request, PerformPowerSearchResponse* response) override;
  ::grpc::Status PerformThermalCorrection(::grpc::ServerContext* context, const PerformThermalCorrectionRequest* request, PerformThermalCorrectionResponse* response) override;
  ::grpc::Status QueryArbWaveformCapabilities(::grpc::ServerContext* context, const QueryArbWaveformCapabilitiesRequest* request, QueryArbWaveformCapabilitiesResponse* response) override;
  ::grpc::Status ReadAndDownloadWaveformFromFileTDMS(::grpc::ServerContext* context, const ReadAndDownloadWaveformFromFileTDMSRequest* request, ReadAndDownloadWaveformFromFileTDMSResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status ResetAttribute(::grpc::ServerContext* context, const ResetAttributeRequest* request, ResetAttributeResponse* response) override;
  ::grpc::Status ResetDevice(::grpc::ServerContext* context, const ResetDeviceRequest* request, ResetDeviceResponse* response) override;
  ::grpc::Status ResetWithDefaults(::grpc::ServerContext* context, const ResetWithDefaultsRequest* request, ResetWithDefaultsResponse* response) override;
  ::grpc::Status ResetWithOptions(::grpc::ServerContext* context, const ResetWithOptionsRequest* request, ResetWithOptionsResponse* response) override;
  ::grpc::Status RevisionQuery(::grpc::ServerContext* context, const RevisionQueryRequest* request, RevisionQueryResponse* response) override;
  ::grpc::Status SaveConfigurationsToFile(::grpc::ServerContext* context, const SaveConfigurationsToFileRequest* request, SaveConfigurationsToFileResponse* response) override;
  ::grpc::Status SelectArbWaveform(::grpc::ServerContext* context, const SelectArbWaveformRequest* request, SelectArbWaveformResponse* response) override;
  ::grpc::Status SelfCal(::grpc::ServerContext* context, const SelfCalRequest* request, SelfCalResponse* response) override;
  ::grpc::Status SelfCalibrateRange(::grpc::ServerContext* context, const SelfCalibrateRangeRequest* request, SelfCalibrateRangeResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetArbWaveformNextWritePosition(::grpc::ServerContext* context, const SetArbWaveformNextWritePositionRequest* request, SetArbWaveformNextWritePositionResponse* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViInt64(::grpc::ServerContext* context, const SetAttributeViInt64Request* request, SetAttributeViInt64Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViSession(::grpc::ServerContext* context, const SetAttributeViSessionRequest* request, SetAttributeViSessionResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status SetUserData(::grpc::ServerContext* context, const SetUserDataRequest* request, SetUserDataResponse* response) override;
  ::grpc::Status SetWaveformBurstStartLocations(::grpc::ServerContext* context, const SetWaveformBurstStartLocationsRequest* request, SetWaveformBurstStartLocationsResponse* response) override;
  ::grpc::Status SetWaveformBurstStopLocations(::grpc::ServerContext* context, const SetWaveformBurstStopLocationsRequest* request, SetWaveformBurstStopLocationsResponse* response) override;
  ::grpc::Status SetWaveformMarkerEventLocations(::grpc::ServerContext* context, const SetWaveformMarkerEventLocationsRequest* request, SetWaveformMarkerEventLocationsResponse* response) override;
  ::grpc::Status WaitUntilSettled(::grpc::ServerContext* context, const WaitUntilSettledRequest* request, WaitUntilSettledResponse* response) override;
  ::grpc::Status WriteArbWaveform(::grpc::ServerContext* context, const WriteArbWaveformRequest* request, WriteArbWaveformResponse* response) override;
  ::grpc::Status WriteArbWaveformComplexF32(::grpc::ServerContext* context, const WriteArbWaveformComplexF32Request* request, WriteArbWaveformComplexF32Response* response) override;
  ::grpc::Status WriteArbWaveformComplexF64(::grpc::ServerContext* context, const WriteArbWaveformComplexF64Request* request, WriteArbWaveformComplexF64Response* response) override;
  ::grpc::Status WriteArbWaveformComplexI16(::grpc::ServerContext* context, const WriteArbWaveformComplexI16Request* request, WriteArbWaveformComplexI16Response* response) override;
  ::grpc::Status WriteArbWaveformF32(::grpc::ServerContext* context, const WriteArbWaveformF32Request* request, WriteArbWaveformF32Response* response) override;
  ::grpc::Status WriteScript(::grpc::ServerContext* context, const WriteScriptRequest* request, WriteScriptResponse* response) override;
private:
  NiRFSGLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  std::map<std::int32_t, std::string> digitaledgeconfigurationliststeptriggersource_input_map_ { {1, "PFI0"},{2, "PFI1"},{3, "PFI2"},{4, "PFI3"},{5, "PXI_Trig0"},{6, "PXI_Trig1"},{7, "PXI_Trig2"},{8, "PXI_Trig3"},{9, "PXI_Trig4"},{10, "PXI_Trig5"},{11, "PXI_Trig6"},{12, "PXI_Trig7"},{13, "PXI_STAR"},{14, "Marker0Event"},{15, "Marker1Event"},{16, "Marker2Event"},{17, "Marker3Event"},{18, "TimerEvent"},{19, "TrigIn"}, };
  std::map<std::string, std::int32_t> digitaledgeconfigurationliststeptriggersource_output_map_ { {"PFI0", 1},{"PFI1", 2},{"PFI2", 3},{"PFI3", 4},{"PXI_Trig0", 5},{"PXI_Trig1", 6},{"PXI_Trig2", 7},{"PXI_Trig3", 8},{"PXI_Trig4", 9},{"PXI_Trig5", 10},{"PXI_Trig6", 11},{"PXI_Trig7", 12},{"PXI_STAR", 13},{"Marker0Event", 14},{"Marker1Event", 15},{"Marker2Event", 16},{"Marker3Event", 17},{"TimerEvent", 18},{"TrigIn", 19}, };
  std::map<std::int32_t, std::string> digitaledgescripttriggeridentifier_input_map_ { {1, "scriptTrigger0"},{2, "scriptTrigger1"},{3, "scriptTrigger2"},{4, "scriptTrigger3"}, };
  std::map<std::string, std::int32_t> digitaledgescripttriggeridentifier_output_map_ { {"scriptTrigger0", 1},{"scriptTrigger1", 2},{"scriptTrigger2", 3},{"scriptTrigger3", 4}, };
  std::map<std::int32_t, std::string> nirfsgstringattributevaluesmapped_input_map_ { {1, ""},{2, "PFI0"},{3, "PFI1"},{4, "PFI4"},{5, "PFI5"},{6, "PXI_Trig0"},{7, "PXI_Trig1"},{8, "PXI_Trig2"},{9, "PXI_Trig3"},{10, "PXI_Trig4"},{11, "PXI_Trig5"},{12, "PXI_Trig6"},{13, "PXIe_DStarC"},{14, "TrigOut"},{15, "OnboardClock"},{16, "ClkIn"},{17, ""},{18, "PFI0"},{19, "PFI1"},{20, "PXI_Trig0"},{21, "PXI_Trig1"},{22, "PXI_Trig2"},{23, "PXI_Trig3"},{24, "PXI_Trig4"},{25, "PXI_Trig5"},{26, "PXI_Trig6"},{27, "PXIe_DStarC"},{28, "TrigOut"},{29, "PFI0"},{30, "PFI1"},{31, "PXI_Trig0"},{32, "PXI_Trig1"},{33, "PXI_Trig2"},{34, "PXI_Trig3"},{35, "PXI_Trig4"},{36, "PXI_Trig5"},{37, "PXI_Trig6"},{38, "PXI_Trig7"},{39, "PXIe_DStarB"},{40, "Marker0Event"},{41, "Marker1Event"},{42, "Marker2Event"},{43, "Marker3Event"},{44, "TimerEvent"},{45, "TrigIn"},{46, ""},{47, "PXI_Trig0"},{48, "PXI_Trig1"},{49, "PXI_Trig2"},{50, "PXI_Trig3"},{51, "PXI_Trig4"},{52, "PXI_Trig5"},{53, "PXI_Trig6"},{54, "PXIe_DStarC"},{55, "TrigOut"},{56, "Onboard"},{57, "LO_In"},{58, "Secondary"},{59, "SG_SA_Shared"},{60, "Automatic_SG_SA_Shared"},{61, "None"},{62, "OnboardClock"},{63, "RefIn"},{64, ""},{65, "RefOut"},{66, "RefOut2"},{67, "ClkOut"},{68, "OnboardClock"},{69, "RefIn"},{70, "PXI_CLK"},{71, "ClkIn"},{72, "RefIn2"},{73, "PXI_ClkMaster"},{74, "PFI0"},{75, "PFI1"},{76, "PFI2"},{77, "PFI3"},{78, "PXI_Trig0"},{79, "PXI_Trig1"},{80, "PXI_Trig2"},{81, "PXI_Trig3"},{82, "PXI_Trig4"},{83, "PXI_Trig5"},{84, "PXI_Trig6"},{85, "PXI_Trig7"},{86, "PXI_STAR"},{87, "PXIe_DStarB"},{88, "Sync_Start"},{89, "Sync_Script"},{90, "TrigIn"}, };
  std::map<std::string, std::int32_t> nirfsgstringattributevaluesmapped_output_map_ { {"", 1},{"PFI0", 2},{"PFI1", 3},{"PFI4", 4},{"PFI5", 5},{"PXI_Trig0", 6},{"PXI_Trig1", 7},{"PXI_Trig2", 8},{"PXI_Trig3", 9},{"PXI_Trig4", 10},{"PXI_Trig5", 11},{"PXI_Trig6", 12},{"PXIe_DStarC", 13},{"TrigOut", 14},{"OnboardClock", 15},{"ClkIn", 16},{"", 17},{"PFI0", 18},{"PFI1", 19},{"PXI_Trig0", 20},{"PXI_Trig1", 21},{"PXI_Trig2", 22},{"PXI_Trig3", 23},{"PXI_Trig4", 24},{"PXI_Trig5", 25},{"PXI_Trig6", 26},{"PXIe_DStarC", 27},{"TrigOut", 28},{"PFI0", 29},{"PFI1", 30},{"PXI_Trig0", 31},{"PXI_Trig1", 32},{"PXI_Trig2", 33},{"PXI_Trig3", 34},{"PXI_Trig4", 35},{"PXI_Trig5", 36},{"PXI_Trig6", 37},{"PXI_Trig7", 38},{"PXIe_DStarB", 39},{"Marker0Event", 40},{"Marker1Event", 41},{"Marker2Event", 42},{"Marker3Event", 43},{"TimerEvent", 44},{"TrigIn", 45},{"", 46},{"PXI_Trig0", 47},{"PXI_Trig1", 48},{"PXI_Trig2", 49},{"PXI_Trig3", 50},{"PXI_Trig4", 51},{"PXI_Trig5", 52},{"PXI_Trig6", 53},{"PXIe_DStarC", 54},{"TrigOut", 55},{"Onboard", 56},{"LO_In", 57},{"Secondary", 58},{"SG_SA_Shared", 59},{"Automatic_SG_SA_Shared", 60},{"None", 61},{"OnboardClock", 62},{"RefIn", 63},{"", 64},{"RefOut", 65},{"RefOut2", 66},{"ClkOut", 67},{"OnboardClock", 68},{"RefIn", 69},{"PXI_CLK", 70},{"ClkIn", 71},{"RefIn2", 72},{"PXI_ClkMaster", 73},{"PFI0", 74},{"PFI1", 75},{"PFI2", 76},{"PFI3", 77},{"PXI_Trig0", 78},{"PXI_Trig1", 79},{"PXI_Trig2", 80},{"PXI_Trig3", 81},{"PXI_Trig4", 82},{"PXI_Trig5", 83},{"PXI_Trig6", 84},{"PXI_Trig7", 85},{"PXI_STAR", 86},{"PXIe_DStarB", 87},{"Sync_Start", 88},{"Sync_Script", 89},{"TrigIn", 90}, };
  std::map<std::int32_t, std::string> outputsignal_input_map_ { {1, ""},{2, "PFI0"},{3, "PFI1"},{4, "PFI4"},{5, "PFI5"},{6, "PXI_STAR"},{7, "PXI_Trig0"},{8, "PXI_Trig1"},{9, "PXI_Trig2"},{10, "PXI_Trig3"},{11, "PXI_Trig4"},{12, "PXI_Trig5"},{13, "PXI_Trig6"},{14, "RefOut2"},{15, "RefOut"},{16, "TrigOut"}, };
  std::map<std::string, std::int32_t> outputsignal_output_map_ { {"", 1},{"PFI0", 2},{"PFI1", 3},{"PFI4", 4},{"PFI5", 5},{"PXI_STAR", 6},{"PXI_Trig0", 7},{"PXI_Trig1", 8},{"PXI_Trig2", 9},{"PXI_Trig3", 10},{"PXI_Trig4", 11},{"PXI_Trig5", 12},{"PXI_Trig6", 13},{"RefOut2", 14},{"RefOut", 15},{"TrigOut", 16}, };
  std::map<std::int32_t, std::string> pxichassisclk10_input_map_ { {1, "None"},{2, "OnboardClock"},{3, "RefIn"}, };
  std::map<std::string, std::int32_t> pxichassisclk10_output_map_ { {"None", 1},{"OnboardClock", 2},{"RefIn", 3}, };
  std::map<std::int32_t, std::string> refclocksource_input_map_ { {1, "OnboardClock"},{2, "RefIn"},{3, "PXI_CLK"},{4, "ClkIn"},{5, "RefIn2"},{6, "PXI_ClkMaster"}, };
  std::map<std::string, std::int32_t> refclocksource_output_map_ { {"OnboardClock", 1},{"RefIn", 2},{"PXI_CLK", 3},{"ClkIn", 4},{"RefIn2", 5},{"PXI_ClkMaster", 6}, };
  std::map<std::int32_t, std::string> signalidentifier_input_map_ { {1, ""},{2, "scriptTrigger0"},{3, "scriptTrigger1"},{4, "scriptTrigger2"},{5, "scriptTrigger3"},{6, "marker0"},{7, "marker1"},{8, "marker2"},{9, "marker3"}, };
  std::map<std::string, std::int32_t> signalidentifier_output_map_ { {"", 1},{"scriptTrigger0", 2},{"scriptTrigger1", 3},{"scriptTrigger2", 4},{"scriptTrigger3", 5},{"marker0", 6},{"marker1", 7},{"marker2", 8},{"marker3", 9}, };
  std::map<std::int32_t, std::string> triggersource_input_map_ { {1, "PFI0"},{2, "PFI1"},{3, "PFI2"},{4, "PFI3"},{5, "PXI_Trig0"},{6, "PXI_Trig1"},{7, "PXI_Trig2"},{8, "PXI_Trig3"},{9, "PXI_Trig4"},{10, "PXI_Trig5"},{11, "PXI_Trig6"},{12, "PXI_Trig7"},{13, "PXI_STAR"},{14, "PXIe_DStarB"},{15, "Sync_Start"},{16, "Sync_Script"},{17, "TrigIn"}, };
  std::map<std::string, std::int32_t> triggersource_output_map_ { {"PFI0", 1},{"PFI1", 2},{"PFI2", 3},{"PFI3", 4},{"PXI_Trig0", 5},{"PXI_Trig1", 6},{"PXI_Trig2", 7},{"PXI_Trig3", 8},{"PXI_Trig4", 9},{"PXI_Trig5", 10},{"PXI_Trig6", 11},{"PXI_Trig7", 12},{"PXI_STAR", 13},{"PXIe_DStarB", 14},{"Sync_Start", 15},{"Sync_Script", 16},{"TrigIn", 17}, };

  NiRFSGFeatureToggles feature_toggles_;
};

} // namespace nirfsg_grpc

#endif  // NIRFSG_GRPC_SERVICE_H
