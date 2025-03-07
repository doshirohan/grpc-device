//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Register all services implementation.
//---------------------------------------------------------------------
#include "register_all_services.h"

#include <string>
#include <vector>

#include <server/core_service_registrar.h>
#include <server/session_repository.h>

#include "nidaqmx/nidaqmx_service_registrar.h"
#include "nidcpower/nidcpower_service_registrar.h"
#include "nidigitalpattern/nidigitalpattern_service_registrar.h"
#include "nidmm/nidmm_service_registrar.h"
#include "nifgen/nifgen_service_registrar.h"
#if defined(_MSC_VER)
#include "nirfmxbluetooth/nirfmxbluetooth_service_registrar.h"
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
#include "nirfmxinstr/nirfmxinstr_service_registrar.h"
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
#include "nirfmxlte/nirfmxlte_service_registrar.h"
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
#include "nirfmxnr/nirfmxnr_service_registrar.h"
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
#include "nirfmxspecan/nirfmxspecan_service_registrar.h"
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
#include "nirfmxwlan/nirfmxwlan_service_registrar.h"
#endif // defined(_MSC_VER)
#include "nirfsa/nirfsa_service_registrar.h"
#include "nirfsg/nirfsg_service_registrar.h"
#include "niscope/niscope_service_registrar.h"
#include "niswitch/niswitch_service_registrar.h"
#include "nisync/nisync_service_registrar.h"
#include "nitclk/nitclk_service_registrar.h"
#include "nixnet/nixnet_service_registrar.h"
#include "nixnetsocket/nixnetsocket_service_registrar.h"

namespace nidevice_grpc {

std::shared_ptr<void> register_all_services(
  grpc::ServerBuilder& server_builder,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto service_vector = std::make_shared<std::vector<std::shared_ptr<void>>>();

  auto session_repository = std::make_shared<nidevice_grpc::SessionRepository>();
  auto core_service = nidevice_grpc::register_core_service(server_builder, session_repository);
  service_vector->insert(
    service_vector->end(), 
    {session_repository, core_service});

  auto task_handle_repository = std::make_shared<nidevice_grpc::SessionResourceRepository<TaskHandle>>(session_repository.get());
  auto vi_session_repository = std::make_shared<nidevice_grpc::SessionResourceRepository<ViSession>>(session_repository.get());
#if defined(_MSC_VER)
  auto ni_r_fmx_instr_handle_repository = std::make_shared<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>(session_repository.get());
#endif // defined(_MSC_VER)
  auto nx_session_ref_t_repository = std::make_shared<nidevice_grpc::SessionResourceRepository<nxSessionRef_t>>(session_repository.get());
  auto nx_database_ref_t_repository = std::make_shared<nidevice_grpc::SessionResourceRepository<nxDatabaseRef_t>>(session_repository.get());
  auto nx_socket_repository = std::make_shared<nidevice_grpc::SessionResourceRepository<nxSOCKET>>(session_repository.get());
  auto nx_ip_stack_ref_t_repository = std::make_shared<nidevice_grpc::SessionResourceRepository<nxIpStackRef_t>>(session_repository.get());

  service_vector->push_back(
    nidaqmx_grpc::register_service(
      server_builder, 
      task_handle_repository,
      feature_toggles));
  service_vector->push_back(
    nidcpower_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    nidigitalpattern_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    nidmm_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    nifgen_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
#if defined(_MSC_VER)
  service_vector->push_back(
    nirfmxbluetooth_grpc::register_service(
      server_builder, 
      ni_r_fmx_instr_handle_repository,
      vi_session_repository,
      feature_toggles));
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
  service_vector->push_back(
    nirfmxinstr_grpc::register_service(
      server_builder, 
      ni_r_fmx_instr_handle_repository,
      vi_session_repository,
      feature_toggles));
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
  service_vector->push_back(
    nirfmxlte_grpc::register_service(
      server_builder, 
      ni_r_fmx_instr_handle_repository,
      vi_session_repository,
      feature_toggles));
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
  service_vector->push_back(
    nirfmxnr_grpc::register_service(
      server_builder, 
      ni_r_fmx_instr_handle_repository,
      vi_session_repository,
      feature_toggles));
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
  service_vector->push_back(
    nirfmxspecan_grpc::register_service(
      server_builder, 
      ni_r_fmx_instr_handle_repository,
      vi_session_repository,
      feature_toggles));
#endif // defined(_MSC_VER)
#if defined(_MSC_VER)
  service_vector->push_back(
    nirfmxwlan_grpc::register_service(
      server_builder, 
      ni_r_fmx_instr_handle_repository,
      vi_session_repository,
      feature_toggles));
#endif // defined(_MSC_VER)
  service_vector->push_back(
    nirfsa_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    nirfsg_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    niscope_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    niswitch_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    nisync_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    nitclk_grpc::register_service(
      server_builder, 
      vi_session_repository,
      feature_toggles));
  service_vector->push_back(
    nixnet_grpc::register_service(
      server_builder, 
      nx_session_ref_t_repository,
      nx_database_ref_t_repository,
      feature_toggles));
  service_vector->push_back(
    nixnetsocket_grpc::register_service(
      server_builder, 
      nx_socket_repository,
      nx_ip_stack_ref_t_repository,
      feature_toggles));

  return service_vector;
}

} // nidevice_grpc
