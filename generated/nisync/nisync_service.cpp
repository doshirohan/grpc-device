
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-SYNC Metadata
//---------------------------------------------------------------------
#include "nisync_service.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <atomic>
#include <vector>

namespace nisync_grpc {

  NiSyncService::NiSyncService(NiSyncLibraryInterface* library, nidevice_grpc::SessionRepository* session_repository)
      : library_(library), session_repository_(session_repository)
  {
  }

  NiSyncService::~NiSyncService()
  {
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiSyncService::Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      ViRsrc resource_name = (ViRsrc)request->resource_name().c_str();
      ViBoolean id_query = request->id_query();
      ViBoolean reset_device = request->reset_device();

      auto init_lambda = [&] () -> std::tuple<int, uint32_t> {
        ViSession vi;
        int status = library_->init(resource_name, id_query, reset_device, &vi);
        return std::make_tuple(status, vi);
      };
      uint32_t session_id = 0;
      const std::string& session_name = request->session_name();
      auto cleanup_lambda = [&] (uint32_t id) { library_->close(id); };
      int status = session_repository_->add_session(session_name, init_lambda, cleanup_lambda, session_id);
      response->set_status(status);
      if (status == 0) {
        response->mutable_vi()->set_id(session_id);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiSyncService::Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto vi_grpc_session = request->vi();
      ViSession vi = session_repository_->access_session(vi_grpc_session.id(), vi_grpc_session.name());
      session_repository_->remove_session(vi);
      library_->close(vi);
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

} // namespace nisync_grpc

