
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-XNET Metadata
//---------------------------------------------------------------------
#ifndef NIXNET_GRPC_SERVICE_H
#define NIXNET_GRPC_SERVICE_H

#include <nixnet.grpc.pb.h>
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

#include "nixnet_library_interface.h"

namespace nixnet_grpc {

struct NiXnetFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiXnetFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiXnetService final : public NiXnet::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxSessionRef_t>>;
  using nxDatabaseRef_tResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxDatabaseRef_t>>;

  NiXnetService(
    NiXnetLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    nxDatabaseRef_tResourceRepositorySharedPtr nx_database_ref_t_resource_repository,
    const NiXnetFeatureToggles& feature_toggles = {});
  virtual ~NiXnetService();
  
  ::grpc::Status Blink(::grpc::ServerContext* context, const BlinkRequest* request, BlinkResponse* response) override;
  ::grpc::Status Clear(::grpc::ServerContext* context, const ClearRequest* request, ClearResponse* response) override;
  ::grpc::Status ConnectTerminals(::grpc::ServerContext* context, const ConnectTerminalsRequest* request, ConnectTerminalsResponse* response) override;
  ::grpc::Status ConvertByteArrayToFramesSinglePoint(::grpc::ServerContext* context, const ConvertByteArrayToFramesSinglePointRequest* request, ConvertByteArrayToFramesSinglePointResponse* response) override;
  ::grpc::Status ConvertFramesToSignalsSinglePoint(::grpc::ServerContext* context, const ConvertFramesToSignalsSinglePointRequest* request, ConvertFramesToSignalsSinglePointResponse* response) override;
  ::grpc::Status ConvertTimestamp100nsTo1ns(::grpc::ServerContext* context, const ConvertTimestamp100nsTo1nsRequest* request, ConvertTimestamp100nsTo1nsResponse* response) override;
  ::grpc::Status ConvertTimestamp1nsTo100ns(::grpc::ServerContext* context, const ConvertTimestamp1nsTo100nsRequest* request, ConvertTimestamp1nsTo100nsResponse* response) override;
  ::grpc::Status CreateSession(::grpc::ServerContext* context, const CreateSessionRequest* request, CreateSessionResponse* response) override;
  ::grpc::Status CreateSessionByRef(::grpc::ServerContext* context, const CreateSessionByRefRequest* request, CreateSessionByRefResponse* response) override;
  ::grpc::Status DbAddAlias(::grpc::ServerContext* context, const DbAddAliasRequest* request, DbAddAliasResponse* response) override;
  ::grpc::Status DbAddAlias64(::grpc::ServerContext* context, const DbAddAlias64Request* request, DbAddAlias64Response* response) override;
  ::grpc::Status DbCloseDatabase(::grpc::ServerContext* context, const DbCloseDatabaseRequest* request, DbCloseDatabaseResponse* response) override;
  ::grpc::Status DbCreateObject(::grpc::ServerContext* context, const DbCreateObjectRequest* request, DbCreateObjectResponse* response) override;
  ::grpc::Status DbDeleteObject(::grpc::ServerContext* context, const DbDeleteObjectRequest* request, DbDeleteObjectResponse* response) override;
  ::grpc::Status DbDeploy(::grpc::ServerContext* context, const DbDeployRequest* request, DbDeployResponse* response) override;
  ::grpc::Status DbFindObject(::grpc::ServerContext* context, const DbFindObjectRequest* request, DbFindObjectResponse* response) override;
  ::grpc::Status DbGetDatabaseListSizes(::grpc::ServerContext* context, const DbGetDatabaseListSizesRequest* request, DbGetDatabaseListSizesResponse* response) override;
  ::grpc::Status DbGetPropertySize(::grpc::ServerContext* context, const DbGetPropertySizeRequest* request, DbGetPropertySizeResponse* response) override;
  ::grpc::Status DbMerge(::grpc::ServerContext* context, const DbMergeRequest* request, DbMergeResponse* response) override;
  ::grpc::Status DbOpenDatabase(::grpc::ServerContext* context, const DbOpenDatabaseRequest* request, DbOpenDatabaseResponse* response) override;
  ::grpc::Status DbRemoveAlias(::grpc::ServerContext* context, const DbRemoveAliasRequest* request, DbRemoveAliasResponse* response) override;
  ::grpc::Status DbSaveDatabase(::grpc::ServerContext* context, const DbSaveDatabaseRequest* request, DbSaveDatabaseResponse* response) override;
  ::grpc::Status DbUndeploy(::grpc::ServerContext* context, const DbUndeployRequest* request, DbUndeployResponse* response) override;
  ::grpc::Status DisconnectTerminals(::grpc::ServerContext* context, const DisconnectTerminalsRequest* request, DisconnectTerminalsResponse* response) override;
  ::grpc::Status Flush(::grpc::ServerContext* context, const FlushRequest* request, FlushResponse* response) override;
  ::grpc::Status FutureTimeTrigger(::grpc::ServerContext* context, const FutureTimeTriggerRequest* request, FutureTimeTriggerResponse* response) override;
  ::grpc::Status GetPropertySize(::grpc::ServerContext* context, const GetPropertySizeRequest* request, GetPropertySizeResponse* response) override;
  ::grpc::Status GetSubPropertySize(::grpc::ServerContext* context, const GetSubPropertySizeRequest* request, GetSubPropertySizeResponse* response) override;
  ::grpc::Status ReadSignalSinglePoint(::grpc::ServerContext* context, const ReadSignalSinglePointRequest* request, ReadSignalSinglePointResponse* response) override;
  ::grpc::Status ReadSignalWaveform(::grpc::ServerContext* context, const ReadSignalWaveformRequest* request, ReadSignalWaveformResponse* response) override;
  ::grpc::Status Start(::grpc::ServerContext* context, const StartRequest* request, StartResponse* response) override;
  ::grpc::Status Stop(::grpc::ServerContext* context, const StopRequest* request, StopResponse* response) override;
  ::grpc::Status SystemClose(::grpc::ServerContext* context, const SystemCloseRequest* request, SystemCloseResponse* response) override;
  ::grpc::Status SystemOpen(::grpc::ServerContext* context, const SystemOpenRequest* request, SystemOpenResponse* response) override;
  ::grpc::Status Wait(::grpc::ServerContext* context, const WaitRequest* request, WaitResponse* response) override;
  ::grpc::Status WriteSignalSinglePoint(::grpc::ServerContext* context, const WriteSignalSinglePointRequest* request, WriteSignalSinglePointResponse* response) override;
  ::grpc::Status WriteSignalWaveform(::grpc::ServerContext* context, const WriteSignalWaveformRequest* request, WriteSignalWaveformResponse* response) override;
  ::grpc::Status WriteSignalXY(::grpc::ServerContext* context, const WriteSignalXYRequest* request, WriteSignalXYResponse* response) override;
private:
  NiXnetLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  nxDatabaseRef_tResourceRepositorySharedPtr nx_database_ref_t_resource_repository_;
  template <typename TEnum>
  void CopyBytesToEnums(const std::string& input, google::protobuf::RepeatedField<TEnum>* output);
  std::map<std::int32_t, std::int32_t> dbpropertyvalue_input_map_ { {0, 0},{1, 0},{2, 1},{3, 2},{4, 4294967294},{5, 0},{6, 1},{7, 2},{8, 3},{9, 0},{10, 1},{11, 1},{12, 2},{13, 3},{14, 4},{15, 0},{16, 1},{17, 2},{18, 0},{19, 1},{20, 0},{21, 1},{22, 2},{23, 3},{24, 2},{25, 3},{26, 4},{27, 5},{28, 6},{29, 0},{30, 1},{31, 2},{32, 0},{33, 1},{34, 2},{35, 3}, };
  std::map<std::int32_t, std::int32_t> dbpropertyvalue_output_map_ { {0, 0},{0, 1},{1, 2},{2, 3},{4294967294, 4},{0, 5},{1, 6},{2, 7},{3, 8},{0, 9},{1, 10},{1, 11},{2, 12},{3, 13},{4, 14},{0, 15},{1, 16},{2, 17},{0, 18},{1, 19},{0, 20},{1, 21},{2, 22},{3, 23},{2, 24},{3, 25},{4, 26},{5, 27},{6, 28},{0, 29},{1, 30},{2, 31},{0, 32},{1, 33},{2, 34},{3, 35}, };
  std::map<std::int32_t, std::int32_t> propertyvalue_input_map_ { {0, 0},{1, 0},{2, 1},{3, 2},{4, 0},{5, 1},{6, 2},{7, 1},{8, 2},{9, 4},{10, 0},{11, 1},{12, 2},{13, 3},{14, 0},{15, 1},{16, 2},{17, 3},{18, 4},{19, 5},{20, 0},{21, 1},{22, 0},{23, 1},{24, 3},{25, 4},{26, 4294967295},{27, 4294967294},{28, 0},{29, 1},{30, 2},{31, 3},{32, 0},{33, 1},{34, 1},{35, 2},{36, 3},{37, 4},{38, 5},{39, 13},{40, 14},{41, 1},{42, 2},{43, 3},{44, 4},{45, 6},{46, 13},{47, 14},{48, 0},{49, 1},{50, 0},{51, 1},{52, 2},{53, 3},{54, 0},{55, 1},{56, 2},{57, 3},{58, 4},{59, 0},{60, 1},{61, 2},{62, 0},{63, 1},{64, 0},{65, 1},{66, 2},{67, 3},{68, 0},{69, 1},{70, 0},{71, 1},{72, 2},{73, 0},{74, 1},{75, 0},{76, 1},{77, 2},{78, 4},{79, 32},{80, 256},{81, 2048},{82, 16384},{83, 1},{84, 8},{85, 64},{86, 512},{87, 4096},{88, 2},{89, 16},{90, 128},{91, 1024},{92, 8192},{93, 2147483648},{94, 0},{95, 1},{96, 0},{97, 1},{98, 2},{99, 0},{100, 1},{101, 2},{102, 0},{103, 1},{104, 0},{105, 1},{106, 0},{107, 1},{108, 0},{109, 1},{110, 0},{111, 32},{112, 33},{113, 34},{114, 35},{115, 36},{116, 37},{117, 38},{118, 39},{119, 40},{120, 41},{121, 42},{122, 43},{123, 44},{124, 45},{125, 46},{126, 47},{127, 48},{128, 49},{129, 254},{130, 0},{131, 1},{132, 2},{133, 3},{134, 4},{135, 5},{136, 6},{137, 7},{138, 8},{139, 9},{140, 10},{141, 11},{142, 12},{143, 3},{144, 6},{145, 7},{146, 9},{147, -3},{148, -2},{149, -1},{150, 0},{151, 1},{152, -3},{153, -2},{154, -1},{155, 0},{156, 1},{157, -3},{158, -2},{159, -1},{160, 0},{161, 1},{162, 0},{163, 1},{164, 0},{165, 1}, };
  std::map<std::int32_t, std::int32_t> propertyvalue_output_map_ { {0, 0},{0, 1},{1, 2},{2, 3},{0, 4},{1, 5},{2, 6},{1, 7},{2, 8},{4, 9},{0, 10},{1, 11},{2, 12},{3, 13},{0, 14},{1, 15},{2, 16},{3, 17},{4, 18},{5, 19},{0, 20},{1, 21},{0, 22},{1, 23},{3, 24},{4, 25},{4294967295, 26},{4294967294, 27},{0, 28},{1, 29},{2, 30},{3, 31},{0, 32},{1, 33},{1, 34},{2, 35},{3, 36},{4, 37},{5, 38},{13, 39},{14, 40},{1, 41},{2, 42},{3, 43},{4, 44},{6, 45},{13, 46},{14, 47},{0, 48},{1, 49},{0, 50},{1, 51},{2, 52},{3, 53},{0, 54},{1, 55},{2, 56},{3, 57},{4, 58},{0, 59},{1, 60},{2, 61},{0, 62},{1, 63},{0, 64},{1, 65},{2, 66},{3, 67},{0, 68},{1, 69},{0, 70},{1, 71},{2, 72},{0, 73},{1, 74},{0, 75},{1, 76},{2, 77},{4, 78},{32, 79},{256, 80},{2048, 81},{16384, 82},{1, 83},{8, 84},{64, 85},{512, 86},{4096, 87},{2, 88},{16, 89},{128, 90},{1024, 91},{8192, 92},{2147483648, 93},{0, 94},{1, 95},{0, 96},{1, 97},{2, 98},{0, 99},{1, 100},{2, 101},{0, 102},{1, 103},{0, 104},{1, 105},{0, 106},{1, 107},{0, 108},{1, 109},{0, 110},{32, 111},{33, 112},{34, 113},{35, 114},{36, 115},{37, 116},{38, 117},{39, 118},{40, 119},{41, 120},{42, 121},{43, 122},{44, 123},{45, 124},{46, 125},{47, 126},{48, 127},{49, 128},{254, 129},{0, 130},{1, 131},{2, 132},{3, 133},{4, 134},{5, 135},{6, 136},{7, 137},{8, 138},{9, 139},{10, 140},{11, 141},{12, 142},{3, 143},{6, 144},{7, 145},{9, 146},{-3, 147},{-2, 148},{-1, 149},{0, 150},{1, 151},{-3, 152},{-2, 153},{-1, 154},{0, 155},{1, 156},{-3, 157},{-2, 158},{-1, 159},{0, 160},{1, 161},{0, 162},{1, 163},{0, 164},{1, 165}, };
  std::map<std::int32_t, std::string> terminalname_input_map_ { {1, "PXI_Trig0"},{2, "PXI_Trig1"},{3, "PXI_Trig2"},{4, "PXI_Trig3"},{5, "PXI_Trig4"},{6, "PXI_Trig5"},{7, "PXI_Trig6"},{8, "PXI_Trig7"},{9, "FrontPanel0"},{10, "FrontPanel1"},{11, "PXI_Star"},{12, "PXI_Clk10"},{13, "10MHzTimebase"},{14, "1MHzTimebase"},{15, "MasterTimebase"},{16, "CommTrigger"},{17, "StartTrigger"},{18, "FlexRayStartCycle"},{19, "FlexRayMacrotick"},{20, "LogTrigger"},{21, "TimeTrigger"},{22, "NetworkTimePPS"},{23, "NetworkTime1MHz"}, };
  std::map<std::string, std::int32_t> terminalname_output_map_ { {"PXI_Trig0", 1},{"PXI_Trig1", 2},{"PXI_Trig2", 3},{"PXI_Trig3", 4},{"PXI_Trig4", 5},{"PXI_Trig5", 6},{"PXI_Trig6", 7},{"PXI_Trig7", 8},{"FrontPanel0", 9},{"FrontPanel1", 10},{"PXI_Star", 11},{"PXI_Clk10", 12},{"10MHzTimebase", 13},{"1MHzTimebase", 14},{"MasterTimebase", 15},{"CommTrigger", 16},{"StartTrigger", 17},{"FlexRayStartCycle", 18},{"FlexRayMacrotick", 19},{"LogTrigger", 20},{"TimeTrigger", 21},{"NetworkTimePPS", 22},{"NetworkTime1MHz", 23}, };

  NiXnetFeatureToggles feature_toggles_;
};

} // namespace nixnet_grpc

#endif  // NIXNET_GRPC_SERVICE_H
