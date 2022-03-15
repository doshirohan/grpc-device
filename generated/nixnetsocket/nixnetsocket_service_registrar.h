
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar header for the NI-XNETSOCKET Metadata
//---------------------------------------------------------------------
#ifndef NIXNETSOCKET_GRPC_SERVICE_REGISTRAR_H
#define NIXNETSOCKET_GRPC_SERVICE_REGISTRAR_H
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>

#include <memory>

#include <nxsocket.h> // for nxSOCKET, nxIpStackRef_t

namespace grpc {
class ServerBuilder;
}

namespace nixnetsocket_grpc {
using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& server_builder, 
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxSOCKET>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<nxIpStackRef_t>>& nx_ip_stack_ref_t_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles);

} // nixnetsocket_grpc

#endif  // NIXNETSOCKET_GRPC_SERVICE_REGISTRAR_H
