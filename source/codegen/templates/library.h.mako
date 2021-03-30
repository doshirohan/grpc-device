<%
import service_helpers

config = data['config']
functions = data['functions']

service_class_prefix = config["service_class_prefix"]
namespace_prefix = "grpc::" + config["namespace_component"]
include_guard_name = service_helpers.get_include_guard_name(config, "_LIBRARY_H")
%>\
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for ${config["driver_name"]}
//---------------------------------------------------------------------
#ifndef ${include_guard_name}
#define ${include_guard_name}

#include "${config["module_name"]}_library_interface.h"

#include <server/shared_library.h>

namespace grpc {
namespace ${config["namespace_component"]} {

class ${service_class_prefix}Library : public ${namespace_prefix}::${service_class_prefix}LibraryInterface {
 public:
  ${service_class_prefix}Library();
  virtual ~${service_class_prefix}Library();

  ::grpc::Status check_function_exists(std::string functionName);
% for method_name in service_helpers.filter_api_functions(functions):
<%
  f = functions[method_name]
  parameters = f['parameters']
  service_helpers.sanitize_names(parameters)
  return_type = f['returns']
%>\
  ${return_type} ${method_name}(${service_helpers.create_params(parameters)});
% endfor

 private:
 % for method_name in service_helpers.filter_api_functions(functions):
<%
  f = functions[method_name]
  parameters = f['parameters']
  return_type = f['returns']
%>\
  using ${method_name}Ptr = ${return_type} (*)(${service_helpers.create_params(parameters)});
% endfor

  typedef struct FunctionPointers {
% for method_name in service_helpers.filter_api_functions(functions):
    ${method_name}Ptr ${method_name};
% endfor
  } FunctionLoadStatus;

  grpc::nidevice::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace ${config["namespace_component"]}
}  // namespace grpc

#endif  // ${include_guard_name}