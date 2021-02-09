#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <server_utilities.grpc.pb.h>

#include "hardware/grpc/internal/session_repository.h"

namespace ni {
namespace hardware {
namespace grpc {

class CoreService final : public ServerUtilities::Service {
 public:
  CoreService(internal::SessionRepository* session_repository);

  ::grpc::Status Reserve(::grpc::ServerContext* context, const ReserveRequest* request, ReserveResponse* response) override;
  ::grpc::Status IsReservedByClient(::grpc::ServerContext* context, const IsReservedByClientRequest* request, IsReservedByClientResponse* response) override;
  ::grpc::Status Unreserve(::grpc::ServerContext* context, const UnreserveRequest* request, UnreserveResponse* response) override;
  ::grpc::Status ResetServer(::grpc::ServerContext* context, const ResetServerRequest* request, ResetServerResponse* response) override;

 private:
  internal::SessionRepository* session_repository_;
};

}  // namespace grpc
}  // namespace hardware
}  // namespace ni
