<%
import common_helpers
import service_helpers

config = data['config']
functions = data['functions']

service_class_prefix = config["service_class_prefix"]
namespace_prefix = config["namespace_component"] + "_grpc::"
module_name = config["module_name"]
if len(config["custom_types"]) > 0:
  custom_types = config["custom_types"]
%>\
<%namespace name="mako_helper" file="/service_helpers.mako"/>\

//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the ${config["driver_name"]} Metadata
//---------------------------------------------------------------------
#include "${module_name}_service.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <atomic>
#include <vector>

namespace ${config["namespace_component"]}_grpc {

  ${service_class_prefix}Service::${service_class_prefix}Service(${service_class_prefix}LibraryInterface* library, nidevice_grpc::SessionRepository* session_repository)
      : library_(library), session_repository_(session_repository)
  {
  }

  ${service_class_prefix}Service::~${service_class_prefix}Service()
  {
  }

% if common_helpers.has_viboolean_array_param(functions):
  void ${service_class_prefix}Service::Copy(const std::vector<ViBoolean>& input, google::protobuf::RepeatedField<bool>* output) 
  {
    for (auto item : input) {
      output->Add(item != VI_FALSE);
    }
  }
% endif
% if 'custom_types' in locals():
%   for custom_type in custom_types:
% if common_helpers.has_output_param_of_type_struct(functions, custom_type):
  void ${service_class_prefix}Service::Copy(const ${custom_type["name"]}& input, ${namespace_prefix}${custom_type["grpc_name"]}* output) 
  {
%     for field in custom_type["fields"]: 
    output->set_${field["grpc_name"]}(input.${field["name"]});
%     endfor
  }

  void ${service_class_prefix}Service::Copy(const std::vector<${custom_type["name"]}>& input, google::protobuf::RepeatedPtrField<${namespace_prefix}${custom_type["grpc_name"]}>* output) 
  {
    for (auto item : input) {
      auto message = new ${namespace_prefix}${custom_type["grpc_name"]}();
      Copy(item, message);
      output->AddAllocated(message);
    }
  }
% endif
% if common_helpers.has_input_param_of_type_struct(functions, custom_type):
   ${custom_type["name"]} ${service_class_prefix}Service::get_custom_type_from_grpc_repeated_type(const ${namespace_prefix}${custom_type["grpc_name"]}& input) 
  {
    ${custom_type["name"]}* output = new ${custom_type["name"]}();  
%     for field in custom_type["fields"]: 
    output->${common_helpers.pascal_to_camel(common_helpers.snake_to_pascal(field["grpc_name"]))} = input.${common_helpers.camel_to_snake(field["name"])}();
%     endfor
    return *output;
  }
% endif

%   endfor
% endif
% for function_name in service_helpers.filter_proto_rpc_functions_to_generate(functions):
<%
    function_data = functions[function_name]
    method_name = common_helpers.snake_to_pascal(function_name)
    parameters = function_data['parameters']
%>\
  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status ${service_class_prefix}Service::${method_name}(::grpc::ServerContext* context, const ${method_name}Request* request, ${method_name}Response* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
%   if common_helpers.has_unsupported_parameter(function_data):
      return ::grpc::Status(::grpc::UNIMPLEMENTED, "TODO: This server handler has not been implemented.");
%   elif common_helpers.is_init_method(function_data):
${mako_helper.define_init_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   elif common_helpers.has_ivi_dance_param(parameters):
${mako_helper.define_ivi_dance_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   elif common_helpers.has_ivi_dance_with_a_twist_param(parameters):
${mako_helper.define_ivi_dance_with_a_twist_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   else:
${mako_helper.define_simple_method_body(function_name=function_name, function_data=function_data, parameters=parameters)}
%   endif
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

% endfor
} // namespace ${config["namespace_component"]}_grpc

