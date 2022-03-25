#define NOMINMAX

#include <custom/xnetsocket_converters.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <nixnetsocket/nixnetsocket_mock_library.h>

#include <string>

using namespace nixnetsocket_grpc;
using namespace ::testing;
namespace pb = ::google::protobuf;
using namespace std::string_literals;
using ni::tests::unit::NiXnetSocketMockLibrary;
using nidevice_grpc::converters::allocate_output_storage;
using nidevice_grpc::converters::convert_from_grpc;
using nidevice_grpc::converters::convert_to_grpc;

namespace ni {
namespace tests {
namespace unit {
namespace {
TEST(XnetConvertersTests, IPv4GrpcSockAddr_ConvertFromGrpc_CreatesIPv4NXSockAddr)
{
  constexpr auto PORT = 1234;
  constexpr auto ADDRESS = 0xAABBCCDD;
  auto grpc_sock_addr = SockAddr{};
  grpc_sock_addr.mutable_ipv4()->set_port(PORT);
  grpc_sock_addr.mutable_ipv4()->mutable_addr()->set_addr(ADDRESS);

  auto converted_addr = convert_from_grpc<nxsockaddr>(grpc_sock_addr);
  auto addr_ptr = static_cast<nxsockaddr*>(converted_addr);
  auto reinterpreted_ipv4_addr = reinterpret_cast<nxsockaddr_in*>(addr_ptr);

  EXPECT_EQ(sizeof(nxsockaddr_in), converted_addr.size());
  EXPECT_EQ(nxAF_INET, addr_ptr->sa_family);
  EXPECT_EQ(PORT, reinterpreted_ipv4_addr->sin_port);
  EXPECT_EQ(ADDRESS, reinterpreted_ipv4_addr->sin_addr.addr);
}

SockAddr create_addr_ipv6(pb::uint32 port, pb::uint32 flow_info, const std::vector<char>& address, pb::uint32 scope_id)
{
  auto grpc_sock_addr = SockAddr{};
  auto ipv6_addr = SockAddrIPv6{};
  ipv6_addr.set_port(port);
  ipv6_addr.set_flow_info(flow_info);
  ipv6_addr.mutable_addr()->set_addr({address.cbegin(), address.cend()});
  ipv6_addr.set_scope_id(scope_id);
  grpc_sock_addr.mutable_ipv6()->CopyFrom(ipv6_addr);
  return grpc_sock_addr;
}

void EXPECT_IPV6_ADDR(
    const SockAddrInputConverter& converted_addr,
    pb::uint32 port,
    pb::uint32 flow_info,
    const std::vector<char>& address,
    pb::uint32 scope_id)
{
  auto addr_ptr = static_cast<const nxsockaddr*>(converted_addr);
  auto reinterpreted_ipv6_addr = reinterpret_cast<const nxsockaddr_in6*>(addr_ptr);

  EXPECT_EQ(sizeof(nxsockaddr_in6), converted_addr.size());
  EXPECT_EQ(nxAF_INET6, addr_ptr->sa_family);
  EXPECT_EQ(port, reinterpreted_ipv6_addr->sin6_port);
  EXPECT_EQ(flow_info, reinterpreted_ipv6_addr->sin6_flowinfo);
  EXPECT_THAT(reinterpreted_ipv6_addr->sin6_addr.addr, ElementsAreArray(address.data(), address.size()));
  EXPECT_EQ(scope_id, reinterpreted_ipv6_addr->sin6_scope_id);
}

TEST(XnetConvertersTests, IPv6GrpcSockAddr_ConvertFromGrpc_CreatesIPv6NXSockAddr)
{
  constexpr auto PORT = 1234;
  constexpr auto FLOW_INFO = 9999;
  const auto ADDRESS = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
  constexpr auto SCOPE_ID = 8888;
  auto grpc_sock_addr = create_addr_ipv6(PORT, FLOW_INFO, ADDRESS, SCOPE_ID);

  auto converted_addr = convert_from_grpc<nxsockaddr>(grpc_sock_addr);

  EXPECT_IPV6_ADDR(converted_addr, PORT, FLOW_INFO, ADDRESS, SCOPE_ID);
}

TEST(XnetConvertersTests, IPv6GrpcSockAddrWithTooShortAddress_ConvertFromGrpc_CreatesAddrWithZeroesInMissingBytes)
{
  constexpr auto PORT = 1234;
  constexpr auto FLOW_INFO = 9999;
  const auto ADDRESS = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9};
  const auto ADDRESS_WITH_ZEROES = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};
  constexpr auto SCOPE_ID = 8888;
  auto grpc_sock_addr = create_addr_ipv6(PORT, FLOW_INFO, ADDRESS, SCOPE_ID);

  auto converted_addr = convert_from_grpc<nxsockaddr>(grpc_sock_addr);

  EXPECT_IPV6_ADDR(converted_addr, PORT, FLOW_INFO, ADDRESS_WITH_ZEROES, SCOPE_ID);
}

TEST(XnetConvertersTests, IPv6GrpcSockAddrTooLongAddress_ConvertFromGrpc_CreatesIPv6NXSockAddrWithExtraBytesTruncated)
{
  constexpr auto PORT = 1234;
  constexpr auto FLOW_INFO = 9999;
  const auto ADDRESS = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF, 0x10, 0x11};
  const auto TRUNCATED_ADDRESS = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
  constexpr auto SCOPE_ID = 8888;
  auto grpc_sock_addr = create_addr_ipv6(PORT, FLOW_INFO, ADDRESS, SCOPE_ID);

  auto converted_addr = convert_from_grpc<nxsockaddr>(grpc_sock_addr);

  EXPECT_IPV6_ADDR(converted_addr, PORT, FLOW_INFO, TRUNCATED_ADDRESS, SCOPE_ID);
}

TEST(XnetConvertersTests, UnsetGrpcSockAddr_ConvertFromGrpc_CreatesEmptySockAddrWithUnspecifiedAddressFamily)
{
  auto grpc_sock_addr = SockAddr{};

  auto converted_addr = convert_from_grpc<nxsockaddr>(grpc_sock_addr);
  auto addr_ptr = static_cast<nxsockaddr*>(converted_addr);

  // Note: these are the values for a zeroed out nxsockaddr struct from our initial std::memset.
  EXPECT_EQ(0, converted_addr.size());
  EXPECT_EQ(nxAF_UNSPEC, addr_ptr->sa_family);
}

using ResourceRepositorySharedPtr = ResourceRepositorySharedPtr_;
struct ResourceRepositoryHolder {
  ResourceRepositoryHolder()
      : session_repository(std::make_unique<nidevice_grpc::SessionRepository>()),
        resource_repository(std::make_shared<nidevice_grpc::SessionResourceRepository<nxSOCKET>>(session_repository.get()))
  {
  }
  operator ResourceRepositorySharedPtr()
  {
    return resource_repository;
  }
  std::unique_ptr<nidevice_grpc::SessionRepository> session_repository;
  ResourceRepositorySharedPtr resource_repository;
};

ResourceRepositoryHolder create_resource_repository(std::unordered_map<std::string, nxSOCKET> socket_sessions)
{
  auto repository = ResourceRepositoryHolder{};
  for (const auto pair : socket_sessions) {
    uint32_t session_id;
    repository.resource_repository->add_session(
        pair.first, [pair]() { return std::make_tuple(0, pair.second); }, nullptr, session_id);
  }

  return repository;
}

nidevice_grpc::Session create_session(std::string name)
{
  auto session = nidevice_grpc::Session{};
  session.set_name(name);
  return session;
}

TEST(XnetConvertersTests, EmptyListOfSockets_ConvertFromGrpc_CreatesZeroedOutSocketSet)
{
  auto resource_repository = create_resource_repository({});
  auto grpc_socket_list = pb::RepeatedPtrField<nidevice_grpc::Session>{};

  auto converted_set = convert_from_grpc<nxfd_set>(grpc_socket_list, resource_repository);
  auto set_ptr = static_cast<nxfd_set*>(converted_set);

  EXPECT_EQ(0, set_ptr->fd_count);
}

TEST(XnetConvertersTests, ListOfTwoSockets_ConvertFromGrpc_CreateSocketSetWithBothSockets)
{
  constexpr auto SESSION_NAME_1 = "one";
  constexpr auto SESSION_NAME_2 = "two";
  constexpr auto SOCKET_1 = 1001;
  constexpr auto SOCKET_2 = 2002;
  auto resource_repository = create_resource_repository({{SESSION_NAME_1, SOCKET_1}, {SESSION_NAME_2, SOCKET_2}});
  auto grpc_socket_list = pb::RepeatedPtrField<nidevice_grpc::Session>{};
  grpc_socket_list.Add(create_session(SESSION_NAME_1));
  grpc_socket_list.Add(create_session(SESSION_NAME_2));

  auto converted_set = convert_from_grpc<nxfd_set>(grpc_socket_list, resource_repository);
  auto set_ptr = static_cast<nxfd_set*>(converted_set);

  EXPECT_EQ(2, set_ptr->fd_count);
  EXPECT_EQ(SOCKET_1, set_ptr->fd_array[0]);
  EXPECT_EQ(SOCKET_2, set_ptr->fd_array[1]);
}

TEST(XnetConvertersTests, ListWithSocketNotInRepository_ConvertFromGrpc_CreatesListWithOneZeroValuedSocket)
{
  constexpr auto SESSION_NAME = "test";
  auto resource_repository = create_resource_repository({});
  auto grpc_socket_list = pb::RepeatedPtrField<nidevice_grpc::Session>{};
  grpc_socket_list.Add(create_session(SESSION_NAME));

  auto converted_set = convert_from_grpc<nxfd_set>(grpc_socket_list, resource_repository);
  auto set_ptr = static_cast<nxfd_set*>(converted_set);

  EXPECT_EQ(1, set_ptr->fd_count);
  EXPECT_EQ(0, set_ptr->fd_array[0]);
}

TEST(XnetConvertersTests, EmptyDuration_ConvertFromGrpc_CreatesEmptyTimeVal)
{
  const auto duration = pb::Duration{};

  auto converted_timeval = convert_from_grpc<nxtimeval>(duration);
  auto timeval_ptr = static_cast<nxtimeval*>(converted_timeval);

  EXPECT_EQ(0, timeval_ptr->tv_sec);
  EXPECT_EQ(0, timeval_ptr->tv_usec);
}

TEST(XnetConvertersTests, Duration_ConvertFromGrpc_CreatesCorrespondingTimeVal)
{
  constexpr auto SECONDS = 100;
  constexpr auto MICROS = 500;
  auto duration = pb::Duration{};
  duration.set_seconds(SECONDS);
  duration.set_nanos(MICROS * 1000);

  auto converted_timeval = convert_from_grpc<nxtimeval>(duration);
  auto timeval_ptr = static_cast<nxtimeval*>(converted_timeval);

  EXPECT_EQ(SECONDS, timeval_ptr->tv_sec);
  EXPECT_EQ(MICROS, timeval_ptr->tv_usec);
}

TEST(XnetConvertersTests, DurationWithSubMicroSecondResolution_ConvertFromGrpc_CreatesCorrespondingTimeValWithFlooredValue)
{
  constexpr auto SECONDS = 100;
  constexpr auto NANOS = 5555;
  constexpr auto MICROS = 5;
  auto duration = pb::Duration{};
  duration.set_seconds(SECONDS);
  duration.set_nanos(NANOS);

  auto converted_timeval = convert_from_grpc<nxtimeval>(duration);
  auto timeval_ptr = static_cast<nxtimeval*>(converted_timeval);

  EXPECT_EQ(SECONDS, timeval_ptr->tv_sec);
  EXPECT_EQ(MICROS, timeval_ptr->tv_usec);
}

TEST(XnetConvertersTests, IPv4Address_ConvertToGrpc_ConvertsToIPv4Address)
{
  constexpr auto PORT = 100;
  constexpr auto ADDR = 1234567;
  auto storage = allocate_output_storage<nxsockaddr, SockAddr>();
  auto ptr_to_storage = reinterpret_cast<nxsockaddr_in*>(&storage);
  ptr_to_storage->sin_family = nxAF_INET;
  ptr_to_storage->sin_port = PORT;
  ptr_to_storage->sin_addr.addr = ADDR;

  auto grpc_data = SockAddr{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockAddr::AddrCase::kIpv4, grpc_data.addr_case());
  EXPECT_EQ(PORT, grpc_data.ipv4().port());
  EXPECT_EQ(ADDR, grpc_data.ipv4().addr().addr());
}

void copy_ipv6_addr(unsigned char* dst, const char* src)
{
  std::memcpy(
      dst,
      src,
      sizeof(nxin6_addr::addr));
}

TEST(XnetConvertersTests, IPv6Address_ConvertToGrpc_ConvertsToIPv6Address)
{
  constexpr auto PORT = 100;
  constexpr auto FLOW_INFO = 999;
  const auto ADDRESS = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
  constexpr auto SCOPE_ID = 777;
  auto storage = allocate_output_storage<nxsockaddr, SockAddr>();
  auto ptr_to_storage = reinterpret_cast<nxsockaddr_in6*>(&storage);
  ptr_to_storage->sin6_family = nxAF_INET6;
  ptr_to_storage->sin6_port = PORT;
  copy_ipv6_addr(ptr_to_storage->sin6_addr.addr, ADDRESS.data());
  ptr_to_storage->sin6_flowinfo = FLOW_INFO;
  ptr_to_storage->sin6_scope_id = SCOPE_ID;

  auto grpc_data = SockAddr{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockAddr::AddrCase::kIpv6, grpc_data.addr_case());
  EXPECT_EQ(PORT, grpc_data.ipv6().port());
  EXPECT_EQ(FLOW_INFO, grpc_data.ipv6().flow_info());
  EXPECT_THAT(
      grpc_data.ipv6().addr().addr(),
      ElementsAreArray(ADDRESS.data(), ADDRESS.size()));
  EXPECT_EQ(SCOPE_ID, grpc_data.ipv6().scope_id());
}

TEST(XnetConvertersTests, UnknownAddress_ConvertToGrpc_ConvertsToUnsetAddress)
{
  auto storage = allocate_output_storage<nxsockaddr, SockAddr>();
  auto ptr_to_storage = &storage;
  ptr_to_storage->sa_family = nxAF_UNSPEC;

  auto grpc_data = SockAddr{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockAddr::AddrCase::ADDR_NOT_SET, grpc_data.addr_case());
}

TEST(XnetConvertersTests, SockOptDataWithInt_ConvertFromGrpc_DataLooksReasonable)
{
  const int32_t RCV_BUF_SIZE = 1000;
  SockOptData sock_opt_data = SockOptData{};
  sock_opt_data.set_data_int32(RCV_BUF_SIZE);

  auto opt_data = convert_from_grpc<SockOptDataInputConverter>(sock_opt_data);

  EXPECT_EQ(RCV_BUF_SIZE, opt_data.data_int);
  EXPECT_EQ(sizeof(int32_t), opt_data.size());
  EXPECT_EQ(&(opt_data.data_int), opt_data.data());
}

TEST(XnetConvertersTests, SockOptDataWithBool_ConvertFromGrpc_DataLooksReasonable)
{
  const bool REUSE_ADDR = true;
  SockOptData sock_opt_data = SockOptData{};
  sock_opt_data.set_data_bool(REUSE_ADDR);

  auto opt_data = convert_from_grpc<SockOptDataInputConverter>(sock_opt_data);

  // Bools get translated to ints for the API (0 for False, 1 for True)
  EXPECT_EQ(1, opt_data.data_int);
  EXPECT_EQ(sizeof(int32_t), opt_data.size());
  EXPECT_EQ(&(opt_data.data_int), opt_data.data());
}

TEST(XnetConvertersTests, SockOptDataWithString_ConvertFromGrpc_DataLooksReasonable)
{
  const std::string DEVICE_NAME = "I'm a Device";
  SockOptData sock_opt_data = SockOptData{};
  sock_opt_data.set_data_string(DEVICE_NAME);

  auto opt_data = convert_from_grpc<SockOptDataInputConverter>(sock_opt_data);

  EXPECT_EQ(DEVICE_NAME, opt_data.data_string);
  EXPECT_EQ(DEVICE_NAME.size(), opt_data.size());
  EXPECT_EQ(opt_data.data_string.data(), opt_data.data());
  char* dereferenced_data = (char*)(opt_data.data());
  EXPECT_STREQ(DEVICE_NAME.c_str(), dereferenced_data);
}

TEST(XnetConvertersTests, SockOptDataWithLinger_ConvertFromGrpc_DataLooksReasonable)
{
  constexpr auto L_LINGER = 42;
  constexpr auto L_ONOFF = 1;
  SockOptData sock_opt_data = SockOptData{};
  sock_opt_data.mutable_data_linger()->set_l_linger(L_LINGER);
  sock_opt_data.mutable_data_linger()->set_l_onoff(L_ONOFF);

  auto opt_data = convert_from_grpc<SockOptDataInputConverter>(sock_opt_data);

  EXPECT_EQ(sizeof(nxlinger), opt_data.size());
  EXPECT_EQ(&opt_data.data_linger, opt_data.data());
  nxlinger* dereferenced_data = (nxlinger*)(opt_data.data());
  EXPECT_EQ(L_LINGER, dereferenced_data->l_linger);
  EXPECT_EQ(L_ONOFF, dereferenced_data->l_onoff);
}

TEST(XnetConvertersTests, SockOptDataWithIPMReq_ConvertFromGrpc_DataLooksReasonable)
{
  constexpr auto IMR_MULTIADDR = 22;
  constexpr auto IMR_INTERFACE = 1;
  SockOptData sock_opt_data = SockOptData{};
  sock_opt_data.mutable_data_ip_mreq()->mutable_imr_multiaddr()->set_addr(IMR_MULTIADDR);
  sock_opt_data.mutable_data_ip_mreq()->mutable_imr_interface()->set_addr(IMR_INTERFACE);

  auto opt_data = convert_from_grpc<SockOptDataInputConverter>(sock_opt_data);

  EXPECT_EQ(sizeof(nxip_mreq), opt_data.size());
  EXPECT_EQ(&opt_data.data_ipmreq, opt_data.data());
  nxip_mreq* dereferenced_data = (nxip_mreq*)(opt_data.data());
  EXPECT_EQ(IMR_MULTIADDR, dereferenced_data->imr_multiaddr.addr);
  EXPECT_EQ(IMR_INTERFACE, dereferenced_data->imr_interface.addr);
}

TEST(XnetConvertersTests, SockOptDataWithIPV6MReq_ConvertFromGrpc_DataLooksReasonable)
{
  const auto IPV6MR_MULTIADDR = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
  constexpr auto IPV6MR_INTERFACE = 1;
  SockOptData sock_opt_data = SockOptData{};
  sock_opt_data.mutable_data_ipv6_mreq()->mutable_ipv6mr_multiaddr()->set_addr({IPV6MR_MULTIADDR.cbegin(), IPV6MR_MULTIADDR.cend()});
  sock_opt_data.mutable_data_ipv6_mreq()->set_ipv6mr_interface(IPV6MR_INTERFACE);

  auto opt_data = convert_from_grpc<SockOptDataInputConverter>(sock_opt_data);

  EXPECT_EQ(sizeof(nxipv6_mreq), opt_data.size());
  EXPECT_EQ(&opt_data.data_ipv6mreq, opt_data.data());
  nxipv6_mreq* dereferenced_data = (nxipv6_mreq*)(opt_data.data());
  EXPECT_THAT(dereferenced_data->ipv6mr_multiaddr.addr, ElementsAreArray(IPV6MR_MULTIADDR.data(), IPV6MR_MULTIADDR.size()));
  EXPECT_EQ(IPV6MR_INTERFACE, dereferenced_data->ipv6mr_interface);
}

TEST(XnetConvertersTests, SockOptDataWithDataUnset_ConvertFromGrpc_NullPtrDataAndZeroSize)
{
  SockOptData sock_opt_data = SockOptData{};
  // Avoid setting the oneof data field

  auto opt_data = convert_from_grpc<SockOptDataInputConverter>(sock_opt_data);

  EXPECT_EQ(0, opt_data.size());
  EXPECT_EQ(nullptr, opt_data.data());
}

TEST(XnetConvertersTests, Int32SockOptData_ConvertToGrpc_ConvertsToSockOptDataWithIntValue)
{
  constexpr auto RX_DATA = 100;
  auto storage = allocate_output_storage<void*, SockOptData>(OptName::OPT_NAME_SO_RX_DATA);
  void* data_pointer = storage.data();
  EXPECT_EQ(data_pointer, &(storage.data_int));
  auto int_pointer = reinterpret_cast<int32_t*>(data_pointer);
  *int_pointer = RX_DATA;

  auto grpc_data = SockOptData{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockOptData::DataCase::kDataInt32, grpc_data.data_case());
  EXPECT_EQ(RX_DATA, grpc_data.data_int32());
}

TEST(XnetConvertersTests, BoolSockOptData_ConvertToGrpc_ConvertsToSockOptDataWithBoolValue)
{
  constexpr auto REUSE_ADDR = 1;
  auto storage = allocate_output_storage<void*, SockOptData>(OptName::OPT_NAME_SO_REUSE_ADDR);
  void* data_pointer = storage.data();
  EXPECT_EQ(data_pointer, &(storage.data_int));
  auto int_pointer = reinterpret_cast<int32_t*>(data_pointer);
  *int_pointer = REUSE_ADDR;

  auto grpc_data = SockOptData{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockOptData::DataCase::kDataBool, grpc_data.data_case());
  // 1 from API is translated to true bool for gRPC.
  EXPECT_EQ(true, grpc_data.data_bool());
}

TEST(XnetConvertersTests, StringSockOptData_ConvertToGrpc_ConvertsToSockOptDataWithStringValue)
{
  const std::string DEVICE_NAME = "I'm a Device";
  constexpr auto MAX_SOCK_OPT_STRING_SIZE = 255;
  auto storage = allocate_output_storage<void*, SockOptData>(OptName::OPT_NAME_SO_BIND_TO_DEVICE);
  void* data_pointer = storage.data();
  EXPECT_EQ(MAX_SOCK_OPT_STRING_SIZE, storage.data_string.size());
  EXPECT_EQ(data_pointer, &(storage.data_string[0]));
  auto string_pointer = reinterpret_cast<char*>(data_pointer);
  strncpy(string_pointer, DEVICE_NAME.c_str(), DEVICE_NAME.size() + 1);

  auto grpc_data = SockOptData{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockOptData::DataCase::kDataString, grpc_data.data_case());
  EXPECT_EQ(DEVICE_NAME, grpc_data.data_string());
}

TEST(XnetConvertersTests, LingerSockOptData_ConvertToGrpc_ConvertsToSockOptDataWithLingerValue)
{
  constexpr auto L_LINGER = 42;
  constexpr auto L_ONOFF = 1;
  auto storage = allocate_output_storage<void*, SockOptData>(OptName::OPT_NAME_SO_LINGER);
  void* data_pointer = storage.data();
  EXPECT_EQ(data_pointer, &(storage.data_linger));
  auto linger_pointer = reinterpret_cast<nxlinger*>(data_pointer);
  linger_pointer->l_linger = L_LINGER;
  linger_pointer->l_onoff = L_ONOFF;

  auto grpc_data = SockOptData{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockOptData::DataCase::kDataLinger, grpc_data.data_case());
  EXPECT_EQ(L_LINGER, grpc_data.data_linger().l_linger());
  EXPECT_EQ(L_ONOFF, grpc_data.data_linger().l_onoff());
}

TEST(XnetConvertersTests, IPMReqSockOptData_ConvertToGrpc_ConvertsToSockOptDataWithIPMReqValue)
{
  constexpr auto IMR_MULTIADDR = 22;
  constexpr auto IMR_INTERFACE = 1;
  auto storage = allocate_output_storage<void*, SockOptData>(OptName::OPT_NAME_IP_ADD_MEMBERSHIP);
  void* data_pointer = storage.data();
  EXPECT_EQ(data_pointer, &(storage.data_ipmreq));
  auto ipmreq_pointer = reinterpret_cast<nxip_mreq*>(data_pointer);
  ipmreq_pointer->imr_multiaddr.addr = IMR_MULTIADDR;
  ipmreq_pointer->imr_interface.addr = IMR_INTERFACE;

  auto grpc_data = SockOptData{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockOptData::DataCase::kDataIpMreq, grpc_data.data_case());
  EXPECT_EQ(IMR_MULTIADDR, grpc_data.data_ip_mreq().imr_multiaddr().addr());
  EXPECT_EQ(IMR_INTERFACE, grpc_data.data_ip_mreq().imr_interface().addr());
}

TEST(XnetConvertersTests, IPV6MReqSockOptData_ConvertToGrpc_ConvertsToSockOptDataWithIPMReqValue)
{
  const auto IPV6MR_MULTIADDR = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
  constexpr auto IPV6MR_INTERFACE = 1;
  auto storage = allocate_output_storage<void*, SockOptData>(OptName::OPT_NAME_IPV6_ADD_MEMBERSHIP);
  void* data_pointer = storage.data();
  EXPECT_EQ(data_pointer, &(storage.data_ipv6mreq));
  auto ipv6mreq_pointer = reinterpret_cast<nxipv6_mreq*>(data_pointer);
  std::memcpy(
      ipv6mreq_pointer->ipv6mr_multiaddr.addr,
      IPV6MR_MULTIADDR.data(),
      sizeof(ipv6mreq_pointer->ipv6mr_multiaddr.addr));
  ipv6mreq_pointer->ipv6mr_interface = IPV6MR_INTERFACE;

  auto grpc_data = SockOptData{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockOptData::DataCase::kDataIpv6Mreq, grpc_data.data_case());
  EXPECT_EQ(grpc_data.data_ipv6_mreq().ipv6mr_multiaddr().addr().size(), IPV6MR_MULTIADDR.size());
  EXPECT_THAT(grpc_data.data_ipv6_mreq().ipv6mr_multiaddr().addr(), ElementsAreArray(IPV6MR_MULTIADDR.data(), IPV6MR_MULTIADDR.size()));
  EXPECT_EQ(IPV6MR_INTERFACE, grpc_data.data_ipv6_mreq().ipv6mr_interface());
}

TEST(XnetConvertersTests, SockOptDataWithUnknownOptName_ConvertToGrpc_ConvertsToUnsetSockOptData)
{
  constexpr auto UNKNOWN_OPT_NAME = -1;
  auto storage = allocate_output_storage<void*, SockOptData>(UNKNOWN_OPT_NAME);
  void* data_pointer = storage.data();
  EXPECT_EQ(nullptr, data_pointer);

  auto grpc_data = SockOptData{};
  convert_to_grpc(storage, &grpc_data);

  EXPECT_EQ(SockOptData::DataCase::DATA_NOT_SET, grpc_data.data_case());
}

TEST(XnetConvertersTests, AddrOutputConverterWithIPv4Address_ConvertToGrpc_ConvertsToIPv4Address)
{
  constexpr auto ADDRESS = 0x55667788;
  auto converter = allocate_output_storage<void, Addr>(nxAF_INET);
  auto data_ptr = reinterpret_cast<nxin_addr*>(static_cast<void*>(&converter));
  data_ptr->addr = ADDRESS;

  auto grpc_addr = nixnetsocket_grpc::Addr{};
  converter.to_grpc(grpc_addr);

  EXPECT_EQ(nixnetsocket_grpc::Addr::AddrCase::kIpv4, grpc_addr.addr_case());
  EXPECT_EQ(ADDRESS, grpc_addr.ipv4().addr());
}

TEST(XnetConvertersTests, AddrOutputConverterWithIPv6Address_ConvertToGrpc_ConvertsToIPv6Address)
{
  const auto ADDRESS = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
  auto converter = allocate_output_storage<void, Addr>(nxAF_INET6);
  auto data_ptr = reinterpret_cast<nxin6_addr*>(static_cast<void*>(&converter));
  copy_ipv6_addr(data_ptr->addr, ADDRESS.data());

  auto grpc_addr = nixnetsocket_grpc::Addr{};
  converter.to_grpc(grpc_addr);

  EXPECT_EQ(nixnetsocket_grpc::Addr::AddrCase::kIpv6, grpc_addr.addr_case());
  EXPECT_THAT(
      grpc_addr.ipv6().addr(),
      ElementsAreArray(ADDRESS.data(), ADDRESS.size()));
}

TEST(XnetConvertersTests, AddrOutputConverterWithUnspecifiedFamily_ConvertToGrpc_DoesNotSetAddrCase)
{
  auto converter = allocate_output_storage<void, Addr>(nxAF_UNSPEC);
  auto data_ptr = reinterpret_cast<nxin6_addr*>(static_cast<void*>(&converter));

  auto grpc_addr = nixnetsocket_grpc::Addr{};
  converter.to_grpc(grpc_addr);

  EXPECT_EQ(nixnetsocket_grpc::Addr::AddrCase::ADDR_NOT_SET, grpc_addr.addr_case());
}

TEST(XnetConvertersTests, AddrOutputConverterWithBogusFamily_ConvertToGrpc_DoesNotSetAddrCase)
{
  auto converter = allocate_output_storage<void, Addr>(42);
  auto data_ptr = reinterpret_cast<nxin6_addr*>(static_cast<void*>(&converter));

  auto grpc_addr = nixnetsocket_grpc::Addr{};
  converter.to_grpc(grpc_addr);

  EXPECT_EQ(nixnetsocket_grpc::Addr::AddrCase::ADDR_NOT_SET, grpc_addr.addr_case());
}

TEST(XnetConvertersTests, IPv4AddrOutputConverter_ConvertToGrpc_ConvertsToAddress)
{
  constexpr auto ADDRESS = 0x11001122;
  auto converter = allocate_output_storage<nxin_addr, IPv4Addr>();
  auto data_ptr = &converter;
  data_ptr->addr = ADDRESS;

  auto grpc_addr = nixnetsocket_grpc::IPv4Addr{};
  converter.to_grpc(grpc_addr);

  EXPECT_EQ(ADDRESS, grpc_addr.addr());
}

TEST(XnetConvertersTests, IpStackInfoStringOutputConverter_ConvertToGrpc_ConvertsToAndFreesInfoString)
{
  const auto IP_INFO_STRING = "This is the info about the driver!"s;
  // Copy to buffer including null terminator.
  auto IP_INFO_BUFFER = std::vector<char>{
      IP_INFO_STRING.c_str(),
      IP_INFO_STRING.c_str() + IP_INFO_STRING.length() + 1};
  NiXnetSocketMockLibrary library;
  auto converter = allocate_output_storage<nixnetsocket_grpc::IpStackInfoString, std::string>(&library);
  auto data_ptr = converter.data();
  *data_ptr = IP_INFO_BUFFER.data();

  EXPECT_CALL(library, IpStackFreeAllStacksInfoStr(IP_INFO_BUFFER.data()));
  auto converted_data = std::string{};
  converter.to_grpc(converted_data);

  EXPECT_EQ(IP_INFO_STRING, converted_data);
}

TEST(XnetConvertersTests, AddrWithIPv4Address_ConvertFromGrpc_ConvertsToNxInAddr)
{
  constexpr auto ADDRESS = 0x66778899;
  auto addr = nixnetsocket_grpc::Addr{};
  addr.mutable_ipv4()->set_addr(ADDRESS);

  const auto converted_data = convert_from_grpc<void>(addr);
  const auto data_ptr = reinterpret_cast<const nxin_addr*>(static_cast<const void*>(converted_data));

  EXPECT_EQ(ADDRESS, data_ptr->addr);
}

TEST(XnetConvertersTests, AddrWithIPv6Address_ConvertFromGrpc_ConvertsToNxIn6Addr)
{
  const auto ADDRESS = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
  auto addr = nixnetsocket_grpc::Addr{};
  addr.mutable_ipv6()->set_addr({ADDRESS.data(), ADDRESS.size()});

  const auto converted_data = convert_from_grpc<void>(addr);
  const auto data_ptr = reinterpret_cast<const nxin6_addr*>(static_cast<const void*>(converted_data));

  EXPECT_THAT(
      data_ptr->addr,
      ElementsAreArray(ADDRESS.data(), ADDRESS.size()));
}

TEST(XnetConvertersTests, AddrWithNoAddress_ConvertFromGrpc_ConvertsToNxIn6Addr)
{
  const auto ADDRESS = std::vector<char>{0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF};
  const auto ZERO_ADDRESS = std::vector<char>(ADDRESS.size(), 0x0);
  auto addr = nixnetsocket_grpc::Addr{};

  const auto converted_data = convert_from_grpc<void>(addr);
  const auto data_ptr = reinterpret_cast<const nxin6_addr*>(static_cast<const void*>(converted_data));

  EXPECT_THAT(
      data_ptr->addr,
      ElementsAreArray(ZERO_ADDRESS.data(), ZERO_ADDRESS.size()));
}

TEST(XnetConvertersTests, GrpcAddrCase_GetAddressFamily_ReturnsCorrectDriverFamily)
{
  using AddrCase = nixnetsocket_grpc::Addr::AddrCase;
  EXPECT_EQ(nxAF_UNSPEC, get_address_family(AddrCase::ADDR_NOT_SET));
  EXPECT_EQ(nxAF_INET, get_address_family(AddrCase::kIpv4));
  EXPECT_EQ(nxAF_INET6, get_address_family(AddrCase::kIpv6));
}

TEST(XnetConvertersTests, GrpcIpv4Addr_ConvertFromGrpc_ConvertsToCorrectNxInAddr)
{
  constexpr auto ADDRESS = 0x55443322;
  auto addr = nixnetsocket_grpc::IPv4Addr{};
  addr.set_addr(ADDRESS);

  const auto converted_data = convert_from_grpc<nxin_addr>(addr);

  EXPECT_EQ(ADDRESS, converted_data.addr);
}
}  // namespace
}  // namespace unit
}  // namespace tests
}  // namespace ni
