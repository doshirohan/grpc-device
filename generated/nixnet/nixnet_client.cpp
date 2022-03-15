
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-XNET.
//---------------------------------------------------------------------
#include "nixnet_client.h"

#include <grpcpp/grpcpp.h>

#include <nixnet.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nixnet_grpc::experimental::client {

BlinkResponse
blink(const StubPtr& stub, const nidevice_grpc::Session& interface_ref, const simple_variant<BlinkMode, pb::uint32>& modifier)
{
  ::grpc::ClientContext context;

  auto request = BlinkRequest{};
  request.mutable_interface_ref()->CopyFrom(interface_ref);
  const auto modifier_ptr = modifier.get_if<BlinkMode>();
  const auto modifier_raw_ptr = modifier.get_if<pb::uint32>();
  if (modifier_ptr) {
    request.set_modifier(*modifier_ptr);
  }
  else if (modifier_raw_ptr) {
    request.set_modifier_raw(*modifier_raw_ptr);
  }

  auto response = BlinkResponse{};

  raise_if_error(
      stub->Blink(&context, request, &response));

  return response;
}

ClearResponse
clear(const StubPtr& stub, const nidevice_grpc::Session& session_ref)
{
  ::grpc::ClientContext context;

  auto request = ClearRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);

  auto response = ClearResponse{};

  raise_if_error(
      stub->Clear(&context, request, &response));

  return response;
}

ConnectTerminalsResponse
connect_terminals(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TerminalName, std::string>& source, const simple_variant<TerminalName, std::string>& destination)
{
  ::grpc::ClientContext context;

  auto request = ConnectTerminalsRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto source_ptr = source.get_if<TerminalName>();
  const auto source_raw_ptr = source.get_if<std::string>();
  if (source_ptr) {
    request.set_source_mapped(*source_ptr);
  }
  else if (source_raw_ptr) {
    request.set_source_raw(*source_raw_ptr);
  }
  const auto destination_ptr = destination.get_if<TerminalName>();
  const auto destination_raw_ptr = destination.get_if<std::string>();
  if (destination_ptr) {
    request.set_destination_mapped(*destination_ptr);
  }
  else if (destination_raw_ptr) {
    request.set_destination_raw(*destination_raw_ptr);
  }

  auto response = ConnectTerminalsResponse{};

  raise_if_error(
      stub->ConnectTerminals(&context, request, &response));

  return response;
}

ConvertByteArrayToFramesSinglePointResponse
convert_byte_array_to_frames_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const pb::string& value_buffer, const pb::uint32& size_of_buffer, const simple_variant<FrameType, pb::uint32>& frame_type)
{
  ::grpc::ClientContext context;

  auto request = ConvertByteArrayToFramesSinglePointRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  request.set_value_buffer(value_buffer);
  request.set_size_of_buffer(size_of_buffer);
  const auto frame_type_ptr = frame_type.get_if<FrameType>();
  const auto frame_type_raw_ptr = frame_type.get_if<pb::uint32>();
  if (frame_type_ptr) {
    request.set_frame_type(*frame_type_ptr);
  }
  else if (frame_type_raw_ptr) {
    request.set_frame_type_raw(*frame_type_raw_ptr);
  }

  auto response = ConvertByteArrayToFramesSinglePointResponse{};

  raise_if_error(
      stub->ConvertByteArrayToFramesSinglePoint(&context, request, &response));

  return response;
}

ConvertFramesToSignalsSinglePointResponse
convert_frames_to_signals_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const std::vector<FrameBuffer>& frame_buffer, const pb::uint32& size_of_value_buffer, const pb::uint32& size_of_timestamp_buffer)
{
  ::grpc::ClientContext context;

  auto request = ConvertFramesToSignalsSinglePointRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  copy_array(frame_buffer, request.mutable_frame_buffer());
  request.set_size_of_value_buffer(size_of_value_buffer);
  request.set_size_of_timestamp_buffer(size_of_timestamp_buffer);

  auto response = ConvertFramesToSignalsSinglePointResponse{};

  raise_if_error(
      stub->ConvertFramesToSignalsSinglePoint(&context, request, &response));

  return response;
}

ConvertSignalsToFramesSinglePointResponse
convert_signals_to_frames_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const std::vector<double>& value_buffer, const pb::uint32& size_of_buffer, const simple_variant<FrameType, pb::uint32>& frame_type)
{
  ::grpc::ClientContext context;

  auto request = ConvertSignalsToFramesSinglePointRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  copy_array(value_buffer, request.mutable_value_buffer());
  request.set_size_of_buffer(size_of_buffer);
  const auto frame_type_ptr = frame_type.get_if<FrameType>();
  const auto frame_type_raw_ptr = frame_type.get_if<pb::uint32>();
  if (frame_type_ptr) {
    request.set_frame_type(*frame_type_ptr);
  }
  else if (frame_type_raw_ptr) {
    request.set_frame_type_raw(*frame_type_raw_ptr);
  }

  auto response = ConvertSignalsToFramesSinglePointResponse{};

  raise_if_error(
      stub->ConvertSignalsToFramesSinglePoint(&context, request, &response));

  return response;
}

ConvertTimestamp100nsTo1nsResponse
convert_timestamp100ns_to1ns(const StubPtr& stub, const pb::uint64& from)
{
  ::grpc::ClientContext context;

  auto request = ConvertTimestamp100nsTo1nsRequest{};
  request.set_from(from);

  auto response = ConvertTimestamp100nsTo1nsResponse{};

  raise_if_error(
      stub->ConvertTimestamp100nsTo1ns(&context, request, &response));

  return response;
}

ConvertTimestamp1nsTo100nsResponse
convert_timestamp1ns_to100ns(const StubPtr& stub, const pb::uint64& from)
{
  ::grpc::ClientContext context;

  auto request = ConvertTimestamp1nsTo100nsRequest{};
  request.set_from(from);

  auto response = ConvertTimestamp1nsTo100nsResponse{};

  raise_if_error(
      stub->ConvertTimestamp1nsTo100ns(&context, request, &response));

  return response;
}

CreateSessionResponse
create_session(const StubPtr& stub, const pb::string& database_name, const pb::string& cluster_name, const pb::string& list, const pb::string& interface, const simple_variant<CreateSessionMode, pb::uint32>& mode)
{
  ::grpc::ClientContext context;

  auto request = CreateSessionRequest{};
  request.set_database_name(database_name);
  request.set_cluster_name(cluster_name);
  request.set_list(list);
  request.set_interface(interface);
  const auto mode_ptr = mode.get_if<CreateSessionMode>();
  const auto mode_raw_ptr = mode.get_if<pb::uint32>();
  if (mode_ptr) {
    request.set_mode(*mode_ptr);
  }
  else if (mode_raw_ptr) {
    request.set_mode_raw(*mode_raw_ptr);
  }

  auto response = CreateSessionResponse{};

  raise_if_error(
      stub->CreateSession(&context, request, &response));

  return response;
}

CreateSessionByRefResponse
create_session_by_ref(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& array_of_database_ref, const pb::string& interface, const simple_variant<CreateSessionMode, pb::uint32>& mode)
{
  ::grpc::ClientContext context;

  auto request = CreateSessionByRefRequest{};
  copy_array(array_of_database_ref, request.mutable_array_of_database_ref());
  request.set_interface(interface);
  const auto mode_ptr = mode.get_if<CreateSessionMode>();
  const auto mode_raw_ptr = mode.get_if<pb::uint32>();
  if (mode_ptr) {
    request.set_mode(*mode_ptr);
  }
  else if (mode_raw_ptr) {
    request.set_mode_raw(*mode_raw_ptr);
  }

  auto response = CreateSessionByRefResponse{};

  raise_if_error(
      stub->CreateSessionByRef(&context, request, &response));

  return response;
}

DbAddAliasResponse
db_add_alias(const StubPtr& stub, const pb::string& database_alias, const pb::string& database_filepath, const pb::uint32& default_baud_rate)
{
  ::grpc::ClientContext context;

  auto request = DbAddAliasRequest{};
  request.set_database_alias(database_alias);
  request.set_database_filepath(database_filepath);
  request.set_default_baud_rate(default_baud_rate);

  auto response = DbAddAliasResponse{};

  raise_if_error(
      stub->DbAddAlias(&context, request, &response));

  return response;
}

DbAddAlias64Response
db_add_alias64(const StubPtr& stub, const pb::string& database_alias, const pb::string& database_filepath, const pb::uint64& default_baud_rate)
{
  ::grpc::ClientContext context;

  auto request = DbAddAlias64Request{};
  request.set_database_alias(database_alias);
  request.set_database_filepath(database_filepath);
  request.set_default_baud_rate(default_baud_rate);

  auto response = DbAddAlias64Response{};

  raise_if_error(
      stub->DbAddAlias64(&context, request, &response));

  return response;
}

DbCloseDatabaseResponse
db_close_database(const StubPtr& stub, const nidevice_grpc::Session& database_ref, const pb::uint32& close_all_refs)
{
  ::grpc::ClientContext context;

  auto request = DbCloseDatabaseRequest{};
  request.mutable_database_ref()->CopyFrom(database_ref);
  request.set_close_all_refs(close_all_refs);

  auto response = DbCloseDatabaseResponse{};

  raise_if_error(
      stub->DbCloseDatabase(&context, request, &response));

  return response;
}

DbCreateObjectResponse
db_create_object(const StubPtr& stub, const nidevice_grpc::Session& parent_object_ref, const pb::uint32& object_class, const pb::string& object_name)
{
  ::grpc::ClientContext context;

  auto request = DbCreateObjectRequest{};
  request.mutable_parent_object_ref()->CopyFrom(parent_object_ref);
  request.set_object_class(object_class);
  request.set_object_name(object_name);

  auto response = DbCreateObjectResponse{};

  raise_if_error(
      stub->DbCreateObject(&context, request, &response));

  return response;
}

DbDeleteObjectResponse
db_delete_object(const StubPtr& stub, const nidevice_grpc::Session& db_object_ref)
{
  ::grpc::ClientContext context;

  auto request = DbDeleteObjectRequest{};
  request.mutable_db_object_ref()->CopyFrom(db_object_ref);

  auto response = DbDeleteObjectResponse{};

  raise_if_error(
      stub->DbDeleteObject(&context, request, &response));

  return response;
}

DbDeployResponse
db_deploy(const StubPtr& stub, const pb::string& ip_address, const pb::string& database_alias, const pb::uint32& wait_for_complete)
{
  ::grpc::ClientContext context;

  auto request = DbDeployRequest{};
  request.set_ip_address(ip_address);
  request.set_database_alias(database_alias);
  request.set_wait_for_complete(wait_for_complete);

  auto response = DbDeployResponse{};

  raise_if_error(
      stub->DbDeploy(&context, request, &response));

  return response;
}

DbFindObjectResponse
db_find_object(const StubPtr& stub, const nidevice_grpc::Session& parent_object_ref, const pb::uint32& object_class, const pb::string& object_name)
{
  ::grpc::ClientContext context;

  auto request = DbFindObjectRequest{};
  request.mutable_parent_object_ref()->CopyFrom(parent_object_ref);
  request.set_object_class(object_class);
  request.set_object_name(object_name);

  auto response = DbFindObjectResponse{};

  raise_if_error(
      stub->DbFindObject(&context, request, &response));

  return response;
}

DbGetDatabaseListSizesResponse
db_get_database_list_sizes(const StubPtr& stub, const pb::string& ip_address)
{
  ::grpc::ClientContext context;

  auto request = DbGetDatabaseListSizesRequest{};
  request.set_ip_address(ip_address);

  auto response = DbGetDatabaseListSizesResponse{};

  raise_if_error(
      stub->DbGetDatabaseListSizes(&context, request, &response));

  return response;
}

DbGetPropertySizeResponse
db_get_property_size(const StubPtr& stub, const nidevice_grpc::Session& db_object_ref, const simple_variant<DBProperty, pb::uint32>& property_id)
{
  ::grpc::ClientContext context;

  auto request = DbGetPropertySizeRequest{};
  request.mutable_db_object_ref()->CopyFrom(db_object_ref);
  const auto property_id_ptr = property_id.get_if<DBProperty>();
  const auto property_id_raw_ptr = property_id.get_if<pb::uint32>();
  if (property_id_ptr) {
    request.set_property_id(*property_id_ptr);
  }
  else if (property_id_raw_ptr) {
    request.set_property_id_raw(*property_id_raw_ptr);
  }

  auto response = DbGetPropertySizeResponse{};

  raise_if_error(
      stub->DbGetPropertySize(&context, request, &response));

  return response;
}

DbMergeResponse
db_merge(const StubPtr& stub, const nidevice_grpc::Session& target_cluster_ref, const nidevice_grpc::Session& source_obj_ref, const simple_variant<CopyMode, pb::uint32>& copy_mode, const pb::string& prefix, const pb::uint32& wait_for_complete)
{
  ::grpc::ClientContext context;

  auto request = DbMergeRequest{};
  request.mutable_target_cluster_ref()->CopyFrom(target_cluster_ref);
  request.mutable_source_obj_ref()->CopyFrom(source_obj_ref);
  const auto copy_mode_ptr = copy_mode.get_if<CopyMode>();
  const auto copy_mode_raw_ptr = copy_mode.get_if<pb::uint32>();
  if (copy_mode_ptr) {
    request.set_copy_mode(*copy_mode_ptr);
  }
  else if (copy_mode_raw_ptr) {
    request.set_copy_mode_raw(*copy_mode_raw_ptr);
  }
  request.set_prefix(prefix);
  request.set_wait_for_complete(wait_for_complete);

  auto response = DbMergeResponse{};

  raise_if_error(
      stub->DbMerge(&context, request, &response));

  return response;
}

DbOpenDatabaseResponse
db_open_database(const StubPtr& stub, const pb::string& database_name)
{
  ::grpc::ClientContext context;

  auto request = DbOpenDatabaseRequest{};
  request.set_database_name(database_name);

  auto response = DbOpenDatabaseResponse{};

  raise_if_error(
      stub->DbOpenDatabase(&context, request, &response));

  return response;
}

DbRemoveAliasResponse
db_remove_alias(const StubPtr& stub, const pb::string& database_alias)
{
  ::grpc::ClientContext context;

  auto request = DbRemoveAliasRequest{};
  request.set_database_alias(database_alias);

  auto response = DbRemoveAliasResponse{};

  raise_if_error(
      stub->DbRemoveAlias(&context, request, &response));

  return response;
}

DbSaveDatabaseResponse
db_save_database(const StubPtr& stub, const nidevice_grpc::Session& database_ref, const pb::string& db_filepath)
{
  ::grpc::ClientContext context;

  auto request = DbSaveDatabaseRequest{};
  request.mutable_database_ref()->CopyFrom(database_ref);
  request.set_db_filepath(db_filepath);

  auto response = DbSaveDatabaseResponse{};

  raise_if_error(
      stub->DbSaveDatabase(&context, request, &response));

  return response;
}

DbUndeployResponse
db_undeploy(const StubPtr& stub, const pb::string& ip_address, const pb::string& database_alias)
{
  ::grpc::ClientContext context;

  auto request = DbUndeployRequest{};
  request.set_ip_address(ip_address);
  request.set_database_alias(database_alias);

  auto response = DbUndeployResponse{};

  raise_if_error(
      stub->DbUndeploy(&context, request, &response));

  return response;
}

DisconnectTerminalsResponse
disconnect_terminals(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TerminalName, std::string>& source, const simple_variant<TerminalName, std::string>& destination)
{
  ::grpc::ClientContext context;

  auto request = DisconnectTerminalsRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto source_ptr = source.get_if<TerminalName>();
  const auto source_raw_ptr = source.get_if<std::string>();
  if (source_ptr) {
    request.set_source_mapped(*source_ptr);
  }
  else if (source_raw_ptr) {
    request.set_source_raw(*source_raw_ptr);
  }
  const auto destination_ptr = destination.get_if<TerminalName>();
  const auto destination_raw_ptr = destination.get_if<std::string>();
  if (destination_ptr) {
    request.set_destination_mapped(*destination_ptr);
  }
  else if (destination_raw_ptr) {
    request.set_destination_raw(*destination_raw_ptr);
  }

  auto response = DisconnectTerminalsResponse{};

  raise_if_error(
      stub->DisconnectTerminals(&context, request, &response));

  return response;
}

FlushResponse
flush(const StubPtr& stub, const nidevice_grpc::Session& session_ref)
{
  ::grpc::ClientContext context;

  auto request = FlushRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);

  auto response = FlushResponse{};

  raise_if_error(
      stub->Flush(&context, request, &response));

  return response;
}

FutureTimeTriggerResponse
future_time_trigger(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const pb::uint64& when, const simple_variant<TimeScale, pb::uint32>& timescale)
{
  ::grpc::ClientContext context;

  auto request = FutureTimeTriggerRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  request.set_when(when);
  const auto timescale_ptr = timescale.get_if<TimeScale>();
  const auto timescale_raw_ptr = timescale.get_if<pb::uint32>();
  if (timescale_ptr) {
    request.set_timescale(*timescale_ptr);
  }
  else if (timescale_raw_ptr) {
    request.set_timescale_raw(*timescale_raw_ptr);
  }

  auto response = FutureTimeTriggerResponse{};

  raise_if_error(
      stub->FutureTimeTrigger(&context, request, &response));

  return response;
}

GetPropertySizeResponse
get_property_size(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<Property, pb::uint32>& property_id)
{
  ::grpc::ClientContext context;

  auto request = GetPropertySizeRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto property_id_ptr = property_id.get_if<Property>();
  const auto property_id_raw_ptr = property_id.get_if<pb::uint32>();
  if (property_id_ptr) {
    request.set_property_id(*property_id_ptr);
  }
  else if (property_id_raw_ptr) {
    request.set_property_id_raw(*property_id_raw_ptr);
  }

  auto response = GetPropertySizeResponse{};

  raise_if_error(
      stub->GetPropertySize(&context, request, &response));

  return response;
}

GetSubPropertySizeResponse
get_sub_property_size(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const pb::uint32& active_index, const simple_variant<SubProperty, pb::uint32>& property_id)
{
  ::grpc::ClientContext context;

  auto request = GetSubPropertySizeRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  request.set_active_index(active_index);
  const auto property_id_ptr = property_id.get_if<SubProperty>();
  const auto property_id_raw_ptr = property_id.get_if<pb::uint32>();
  if (property_id_ptr) {
    request.set_property_id(*property_id_ptr);
  }
  else if (property_id_raw_ptr) {
    request.set_property_id_raw(*property_id_raw_ptr);
  }

  auto response = GetSubPropertySizeResponse{};

  raise_if_error(
      stub->GetSubPropertySize(&context, request, &response));

  return response;
}

ReadSignalSinglePointResponse
read_signal_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const pb::uint32& size_of_value_buffer, const pb::uint32& size_of_timestamp_buffer)
{
  ::grpc::ClientContext context;

  auto request = ReadSignalSinglePointRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  request.set_size_of_value_buffer(size_of_value_buffer);
  request.set_size_of_timestamp_buffer(size_of_timestamp_buffer);

  auto response = ReadSignalSinglePointResponse{};

  raise_if_error(
      stub->ReadSignalSinglePoint(&context, request, &response));

  return response;
}

ReadSignalWaveformResponse
read_signal_waveform(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TimeOut, double>& timeout, const pb::uint32& size_of_value_buffer)
{
  ::grpc::ClientContext context;

  auto request = ReadSignalWaveformRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto timeout_ptr = timeout.get_if<TimeOut>();
  const auto timeout_raw_ptr = timeout.get_if<double>();
  if (timeout_ptr) {
    request.set_timeout(*timeout_ptr);
  }
  else if (timeout_raw_ptr) {
    request.set_timeout_raw(*timeout_raw_ptr);
  }
  request.set_size_of_value_buffer(size_of_value_buffer);

  auto response = ReadSignalWaveformResponse{};

  raise_if_error(
      stub->ReadSignalWaveform(&context, request, &response));

  return response;
}

StartResponse
start(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<StartStopScope, pb::uint32>& scope)
{
  ::grpc::ClientContext context;

  auto request = StartRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto scope_ptr = scope.get_if<StartStopScope>();
  const auto scope_raw_ptr = scope.get_if<pb::uint32>();
  if (scope_ptr) {
    request.set_scope(*scope_ptr);
  }
  else if (scope_raw_ptr) {
    request.set_scope_raw(*scope_raw_ptr);
  }

  auto response = StartResponse{};

  raise_if_error(
      stub->Start(&context, request, &response));

  return response;
}

StopResponse
stop(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<StartStopScope, pb::uint32>& scope)
{
  ::grpc::ClientContext context;

  auto request = StopRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto scope_ptr = scope.get_if<StartStopScope>();
  const auto scope_raw_ptr = scope.get_if<pb::uint32>();
  if (scope_ptr) {
    request.set_scope(*scope_ptr);
  }
  else if (scope_raw_ptr) {
    request.set_scope_raw(*scope_raw_ptr);
  }

  auto response = StopResponse{};

  raise_if_error(
      stub->Stop(&context, request, &response));

  return response;
}

SystemCloseResponse
system_close(const StubPtr& stub, const nidevice_grpc::Session& system_ref)
{
  ::grpc::ClientContext context;

  auto request = SystemCloseRequest{};
  request.mutable_system_ref()->CopyFrom(system_ref);

  auto response = SystemCloseResponse{};

  raise_if_error(
      stub->SystemClose(&context, request, &response));

  return response;
}

SystemOpenResponse
system_open(const StubPtr& stub)
{
  ::grpc::ClientContext context;

  auto request = SystemOpenRequest{};

  auto response = SystemOpenResponse{};

  raise_if_error(
      stub->SystemOpen(&context, request, &response));

  return response;
}

WaitResponse
wait(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<WaitCondition, pb::uint32>& condition, const pb::uint32& param_in, const double& timeout)
{
  ::grpc::ClientContext context;

  auto request = WaitRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto condition_ptr = condition.get_if<WaitCondition>();
  const auto condition_raw_ptr = condition.get_if<pb::uint32>();
  if (condition_ptr) {
    request.set_condition(*condition_ptr);
  }
  else if (condition_raw_ptr) {
    request.set_condition_raw(*condition_raw_ptr);
  }
  request.set_param_in(param_in);
  request.set_timeout(timeout);

  auto response = WaitResponse{};

  raise_if_error(
      stub->Wait(&context, request, &response));

  return response;
}

WriteSignalSinglePointResponse
write_signal_single_point(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const std::vector<double>& value_buffer)
{
  ::grpc::ClientContext context;

  auto request = WriteSignalSinglePointRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  copy_array(value_buffer, request.mutable_value_buffer());

  auto response = WriteSignalSinglePointResponse{};

  raise_if_error(
      stub->WriteSignalSinglePoint(&context, request, &response));

  return response;
}

WriteSignalWaveformResponse
write_signal_waveform(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TimeOut, double>& timeout, const std::vector<double>& value_buffer)
{
  ::grpc::ClientContext context;

  auto request = WriteSignalWaveformRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto timeout_ptr = timeout.get_if<TimeOut>();
  const auto timeout_raw_ptr = timeout.get_if<double>();
  if (timeout_ptr) {
    request.set_timeout(*timeout_ptr);
  }
  else if (timeout_raw_ptr) {
    request.set_timeout_raw(*timeout_raw_ptr);
  }
  copy_array(value_buffer, request.mutable_value_buffer());

  auto response = WriteSignalWaveformResponse{};

  raise_if_error(
      stub->WriteSignalWaveform(&context, request, &response));

  return response;
}

WriteSignalXYResponse
write_signal_xy(const StubPtr& stub, const nidevice_grpc::Session& session_ref, const simple_variant<TimeOut, double>& timeout, const std::vector<double>& value_buffer, const std::vector<pb::uint64>& timestamp_buffer, const std::vector<pb::uint32>& num_pairs_buffer)
{
  ::grpc::ClientContext context;

  auto request = WriteSignalXYRequest{};
  request.mutable_session_ref()->CopyFrom(session_ref);
  const auto timeout_ptr = timeout.get_if<TimeOut>();
  const auto timeout_raw_ptr = timeout.get_if<double>();
  if (timeout_ptr) {
    request.set_timeout(*timeout_ptr);
  }
  else if (timeout_raw_ptr) {
    request.set_timeout_raw(*timeout_raw_ptr);
  }
  copy_array(value_buffer, request.mutable_value_buffer());
  copy_array(timestamp_buffer, request.mutable_timestamp_buffer());
  copy_array(num_pairs_buffer, request.mutable_num_pairs_buffer());

  auto response = WriteSignalXYResponse{};

  raise_if_error(
      stub->WriteSignalXY(&context, request, &response));

  return response;
}


} // namespace nixnet_grpc::experimental::client
