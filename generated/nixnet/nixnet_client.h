
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-XNET.
//---------------------------------------------------------------------
#ifndef NIXNET_GRPC_CLIENT_H
#define NIXNET_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nixnet.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nixnet_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiXnet::Stub>;
using namespace nidevice_grpc::experimental::client;


BlinkResponse blink(const StubPtr& stub, const nidevice_grpc::Session& interface_ref, const simple_variant<BlinkMode, pb::uint32>& modifier);
ClearResponse clear(const StubPtr& stub, const nidevice_grpc::Session& session_ref);
ConnectTerminalsResponse connect_terminals(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TerminalName, std::string>& source, const simple_variant<TerminalName, std::string>& destination);
ConvertByteArrayToFramesSinglePointResponse convert_byte_array_to_frames_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const pb::string& value_buffer, const pb::uint32& size_of_buffer);
ConvertFramesToSignalsSinglePointResponse convert_frames_to_signals_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const std::vector<FrameBuffer>& frame_buffer, const pb::uint32& size_of_value_buffer, const pb::uint32& size_of_timestamp_buffer);
ConvertTimestamp100nsTo1nsResponse convert_timestamp100ns_to1ns(const StubPtr& stub, const pb::uint64& from);
ConvertTimestamp1nsTo100nsResponse convert_timestamp1ns_to100ns(const StubPtr& stub, const pb::uint64& from);
CreateSessionResponse create_session(const StubPtr& stub, const pb::string& database_name, const pb::string& cluster_name, const pb::string& list, const pb::string& interface, const simple_variant<CreateSessionMode, pb::uint32>& mode);
CreateSessionByRefResponse create_session_by_ref(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& array_of_database_ref, const pb::string& interface, const simple_variant<CreateSessionMode, pb::uint32>& mode);
DbAddAliasResponse db_add_alias(const StubPtr& stub, const pb::string& database_alias, const pb::string& database_filepath, const pb::uint32& default_baud_rate);
DbAddAlias64Response db_add_alias64(const StubPtr& stub, const pb::string& database_alias, const pb::string& database_filepath, const pb::uint64& default_baud_rate);
DbCloseDatabaseResponse db_close_database(const StubPtr& stub, const nidevice_grpc::Session& database_ref, const pb::uint32& close_all_refs);
DbCreateObjectResponse db_create_object(const StubPtr& stub, const nidevice_grpc::Session& parent_object_ref, const pb::uint32& object_class, const pb::string& object_name);
DbDeleteObjectResponse db_delete_object(const StubPtr& stub, const nidevice_grpc::Session& db_object_ref);
DbDeployResponse db_deploy(const StubPtr& stub, const pb::string& ip_address, const pb::string& database_alias, const pb::uint32& wait_for_complete);
DbFindObjectResponse db_find_object(const StubPtr& stub, const nidevice_grpc::Session& parent_object_ref, const pb::uint32& object_class, const pb::string& object_name);
DbGetDatabaseListSizesResponse db_get_database_list_sizes(const StubPtr& stub, const pb::string& ip_address);
DbGetPropertySizeResponse db_get_property_size(const StubPtr& stub, const nidevice_grpc::Session& db_object_ref, const simple_variant<DBProperties, pb::uint32>& property_id);
DbMergeResponse db_merge(const StubPtr& stub, const nidevice_grpc::Session& target_cluster_ref, const nidevice_grpc::Session& source_obj_ref, const simple_variant<CopyMode, pb::uint32>& copy_mode, const pb::string& prefix, const pb::uint32& wait_for_complete);
DbOpenDatabaseResponse db_open_database(const StubPtr& stub, const pb::string& database_name);
DbRemoveAliasResponse db_remove_alias(const StubPtr& stub, const pb::string& database_alias);
DbSaveDatabaseResponse db_save_database(const StubPtr& stub, const nidevice_grpc::Session& database_ref, const pb::string& db_filepath);
DbUndeployResponse db_undeploy(const StubPtr& stub, const pb::string& ip_address, const pb::string& database_alias);
DisconnectTerminalsResponse disconnect_terminals(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TerminalName, std::string>& source, const simple_variant<TerminalName, std::string>& destination);
FlushResponse flush(const StubPtr& stub, const nidevice_grpc::Session& session_ref);
FutureTimeTriggerResponse future_time_trigger(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const pb::uint64& when, const simple_variant<TimeScale, pb::uint32>& timescale);
GetPropertySizeResponse get_property_size(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<Properties, pb::uint32>& property_id);
GetSubPropertySizeResponse get_sub_property_size(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const pb::uint32& active_index, const simple_variant<SubProperties, pb::uint32>& property_id);
ReadSignalSinglePointResponse read_signal_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const pb::uint32& size_of_value_buffer, const pb::uint32& size_of_timestamp_buffer);
ReadSignalWaveformResponse read_signal_waveform(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TimeOut, double>& timeout, const pb::uint32& size_of_value_buffer);
StartResponse start(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<StartStopScope, pb::uint32>& scope);
StopResponse stop(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<StartStopScope, pb::uint32>& scope);
SystemCloseResponse system_close(const StubPtr& stub, const nidevice_grpc::Session& system_ref);
SystemOpenResponse system_open(const StubPtr& stub);
WaitResponse wait(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<WaitCondition, pb::uint32>& condition, const pb::uint32& param_in, const double& timeout);
WriteSignalSinglePointResponse write_signal_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const std::vector<double>& value_buffer);
WriteSignalWaveformResponse write_signal_waveform(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TimeOut, double>& timeout, const std::vector<double>& value_buffer);
WriteSignalXYResponse write_signal_xy(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TimeOut, double>& timeout, const std::vector<double>& value_buffer, const std::vector<pb::uint64>& timestamp_buffer, const std::vector<pb::uint32>& num_pairs_buffer);

} // namespace nixnet_grpc::experimental::client

#endif /* NIXNET_GRPC_CLIENT_H */
