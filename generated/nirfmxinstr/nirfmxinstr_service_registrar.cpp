
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-RFMXINSTR Metadata
//---------------------------------------------------------------------
#include "nirfmxinstr_library.h"

#include <grpcpp/server_builder.h>

#include "nirfmxinstr_service.h"
#include "nirfmxinstr_service_registrar.h"

namespace nirfmxinstr_grpc {

namespace {
struct LibraryAndService {
  LibraryAndService(
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
    const NiRFmxInstrFeatureToggles& feature_toggles) 
      : library(), 
      service(
        &library, 
        resource_repository,
        vi_session_resource_repository,
        feature_toggles) {
  }
  NiRFmxInstrLibrary library;
  NiRFmxInstrService service;
};
}

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder, 
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiRFmxInstrFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library_and_service_ptr = std::make_shared<LibraryAndService>(
      resource_repository,
      vi_session_resource_repository,
      toggles);
    auto& service = library_and_service_ptr->service;
    builder.RegisterService(&service);
    return library_and_service_ptr;
  }

  return {};
}

} // nirfmxinstr_grpc
