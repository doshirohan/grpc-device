#include <nidcpower/nidcpower_service.h>

namespace nidcpower_grpc {
  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiDCPowerService::FetchMultiple(::grpc::ServerContext* context, const FetchMultipleRequest* request, FetchMultipleResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto vi_grpc_session = request->vi();
      ViSession vi = session_repository_->access_session(vi_grpc_session.id(), vi_grpc_session.name());
      ViConstString channel_name = request->channel_name().c_str();
      ViReal64 timeout = request->timeout();
      ViInt32 count = request->count();
      response->mutable_voltage_measurements()->Resize(count, 0);
      ViReal64* voltage_measurements = response->mutable_voltage_measurements()->mutable_data();
      response->mutable_current_measurements()->Resize(count, 0);
      ViReal64* current_measurements = response->mutable_current_measurements()->mutable_data();
      response->mutable_in_compliance()->Resize(count, 0);
      std::vector<ViBoolean> in_compliance_grpc_bool(count, ViBoolean());
      ViInt32 actual_count {};
      auto status = library_->FetchMultiple(vi, channel_name, timeout, count, voltage_measurements, current_measurements, in_compliance_grpc_bool.data(), &actual_count);
      response->set_status(status);
      if (status == 0) {
        response->set_actual_count(actual_count);
        Copy(in_compliance_grpc_bool, response->mutable_in_compliance());
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  void NiDCPowerService::Copy(const std::vector<ViBoolean>& input, google::protobuf::RepeatedField<bool>* output) 
  {
    for (auto item : input) {
        item = !item;
        output->Add(&item);
    }
  }

}  // namespace nidcpower_grpc
