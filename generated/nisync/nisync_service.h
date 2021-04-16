
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-SYNC Metadata
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_SERVICE_H
#define NISYNC_GRPC_SERVICE_H

#include <nisync.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/session_repository.h>
#include <server/shared_library.h>

#include "nisync_library_interface.h"

namespace nisync_grpc {

class NiSyncService final : public NiSync::Service {
public:
  NiSyncService(NiSyncLibraryInterface* library, nidevice_grpc::SessionRepository* session_repository);
  virtual ~NiSyncService();
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
private:
  NiSyncLibraryInterface* library_;
  nidevice_grpc::SessionRepository* session_repository_;
};

} // namespace nisync_grpc

#endif  // NISYNC_GRPC_SERVICE_H