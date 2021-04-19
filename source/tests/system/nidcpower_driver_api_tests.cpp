#include <gtest/gtest.h>

#include "nidcpower/nidcpower_library.h"
#include "nidcpower/nidcpower_service.h"

namespace ni {
namespace tests {
namespace system {

namespace dcpower = nidcpower_grpc;

const int kdcpowerDriverApiSuccess = 0;

class NiDCPowerDriverApiTest : public ::testing::Test {
 protected:
  NiDCPowerDriverApiTest()
  {
    ::grpc::ServerBuilder builder;
    session_repository_ = std::make_unique<nidevice_grpc::SessionRepository>();
    nidcpower_library_ = std::make_unique<dcpower::NiDCPowerLibrary>();
    nidcpower_service_ = std::make_unique<dcpower::NiDCPowerService>(nidcpower_library_.get(), session_repository_.get());
    builder.RegisterService(nidcpower_service_.get());

    server_ = builder.BuildAndStart();
    ResetStub();
  }

  virtual ~NiDCPowerDriverApiTest() {}

  void SetUp() override
  {
    initialize_driver_session();
  }

  void TearDown() override
  {
    close_driver_session();
  }

  void ResetStub()
  {
    channel_ = server_->InProcessChannel(::grpc::ChannelArguments());
    nidcpower_stub_ = dcpower::NiDCPower::NewStub(channel_);
  }

  std::unique_ptr<dcpower::NiDCPower::Stub>& GetStub()
  {
    return nidcpower_stub_;
  }

  int GetSessionId()
  {
    return driver_session_->id();
  }

  void initialize_driver_session()
  {
    ::grpc::ClientContext context;
    dcpower::InitializeWithIndependentChannelsRequest request;
    request.set_resource_name("FakeDevice");
    request.set_option_string("Simulate=1, DriverSetup=Model:4147; BoardType:PXIe");
    request.set_session_name("");
    request.set_reset(false);
    dcpower::InitializeWithIndependentChannelsResponse response;

    ::grpc::Status status = GetStub()->InitializeWithIndependentChannels(&context, request, &response);
    driver_session_ = std::make_unique<nidevice_grpc::Session>(response.vi());

    ASSERT_TRUE(status.ok());
    ASSERT_EQ(kdcpowerDriverApiSuccess, response.status());
  }

  void close_driver_session()
  {
    ::grpc::ClientContext context;
    dcpower::CloseRequest request;
    request.mutable_vi()->set_id(driver_session_->id());
    dcpower::CloseResponse response;

    ::grpc::Status status = GetStub()->Close(&context, request, &response);

    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
  }

  void expect_api_success(int error_status)
  {
    EXPECT_EQ(kdcpowerDriverApiSuccess, error_status) << get_error_message(error_status);
  }

  std::string get_error_message(int error_status)
  {
    ::grpc::ClientContext context;
    dcpower::ErrorMessageRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_error_code(error_status);
    dcpower::ErrorMessageResponse response;

    ::grpc::Status status = GetStub()->ErrorMessage(&context, request, &response);
    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kdcpowerDriverApiSuccess, response.status());
    return response.error_message();
  }

  ViBoolean get_bool_attribute(const char* channel_list, dcpower::NiDCPowerAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    dcpower::GetAttributeViBooleanRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    dcpower::GetAttributeViBooleanResponse response;
    ::grpc::Status status = GetStub()->GetAttributeViBoolean(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.attribute_value();
  }

  ViInt32 get_int32_attribute(const char* channel_list, dcpower::NiDCPowerAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    dcpower::GetAttributeViInt32Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    dcpower::GetAttributeViInt32Response response;
    ::grpc::Status status = GetStub()->GetAttributeViInt32(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.attribute_value();
  }

  ViInt64 get_int64_attribute(const char* channel_list, dcpower::NiDCPowerAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    dcpower::GetAttributeViInt64Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    dcpower::GetAttributeViInt64Response response;
    ::grpc::Status status = GetStub()->GetAttributeViInt64(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.attribute_value();
  }

  ViReal64 get_real64_attribute(const char* channel_list, dcpower::NiDCPowerAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    dcpower::GetAttributeViReal64Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    dcpower::GetAttributeViReal64Response response;
    ::grpc::Status status = GetStub()->GetAttributeViReal64(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.attribute_value();
  }

  std::string get_string_attribute(const char* channel_list, dcpower::NiDCPowerAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    dcpower::GetAttributeViStringRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    dcpower::GetAttributeViStringResponse response;
    ::grpc::Status status = GetStub()->GetAttributeViString(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.attribute_value();
  }

 private:
  std::shared_ptr<::grpc::Channel> channel_;
  std::unique_ptr<::nidevice_grpc::Session> driver_session_;
  std::unique_ptr<dcpower::NiDCPower::Stub> nidcpower_stub_;
  std::unique_ptr<nidevice_grpc::SessionRepository> session_repository_;
  std::unique_ptr<dcpower::NiDCPowerLibrary> nidcpower_library_;
  std::unique_ptr<dcpower::NiDCPowerService> nidcpower_service_;
  std::unique_ptr<::grpc::Server> server_;
};

TEST_F(NiDCPowerDriverApiTest, NiDCPowerSelfTest_SendRequest_SelfTestCompletesSuccessfully)
{
  ::grpc::ClientContext context;
  dcpower::SelfTestRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  dcpower::SelfTestResponse response;

  ::grpc::Status status = GetStub()->SelfTest(&context, request, &response);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
  EXPECT_EQ(0, response.self_test_result());
  EXPECT_LT(0, strlen(response.self_test_message().c_str()));
}

TEST_F(NiDCPowerDriverApiTest, NiDCPowerReset_SendRequest_ResetCompletesSuccessfully)
{
  ::grpc::ClientContext context;
  dcpower::ResetRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  dcpower::ResetResponse response;

  ::grpc::Status status = GetStub()->Reset(&context, request, &response);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
}

TEST_F(NiDCPowerDriverApiTest, NiDCPowerSetViInt32Attribute_SendRequest_GetViInt32AttributeMatches)
{
  const char* channel_list = "";
  const dcpower::NiDCPowerAttributes attribute_to_set = dcpower::NiDCPowerAttributes::NIDCPOWER_ATTRIBUTE_MEASURE_WHEN;
  const ViInt32 expected_value = dcpower::MeasureWhen::MEASURE_WHEN_NIDCPOWER_VAL_AUTOMATICALLY_AFTER_SOURCE_COMPLETE;
  ::grpc::ClientContext context;
  dcpower::SetAttributeViInt32Request request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_list);
  request.set_attribute_id(attribute_to_set);
  request.set_attribute_value(expected_value);
  dcpower::SetAttributeViInt32Response response;

  ::grpc::Status status = GetStub()->SetAttributeViInt32(&context, request, &response);
  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());

  ViInt32 get_attribute_value = get_int32_attribute(channel_list, attribute_to_set);
  EXPECT_EQ(expected_value, get_attribute_value);
}

TEST_F(NiDCPowerDriverApiTest, NiDCPowerSetViReal64Attribute_SendRequest_GetViReal64AttributeMatches)
{
  // Attribute 'NIDCPOWER_ATTRIBUTE_MEASURE_WHEN' is set to 'MEASURE_WHEN_NIDCPOWER_VAL_AUTOMATICALLY_AFTER_SOURCE_COMPLETE' 
  // before setting attribute 'NIDCPOWER_ATTRIBUTE_SOURCE_DELAY'.
  
  const char* channel_list = "0";
  const dcpower::NiDCPowerAttributes attribute_to_set_measurewhen = dcpower::NiDCPowerAttributes::NIDCPOWER_ATTRIBUTE_MEASURE_WHEN;
  const ViInt32 expected_value_measurewhen = dcpower::MeasureWhen::MEASURE_WHEN_NIDCPOWER_VAL_AUTOMATICALLY_AFTER_SOURCE_COMPLETE;
  ::grpc::ClientContext context_ViInt32;
  dcpower::SetAttributeViInt32Request request_ViInt32;
  request_ViInt32.mutable_vi()->set_id(GetSessionId());
  request_ViInt32.set_channel_name(channel_list);
  request_ViInt32.set_attribute_id(attribute_to_set_measurewhen);
  request_ViInt32.set_attribute_value(expected_value_measurewhen);
  dcpower::SetAttributeViInt32Response response_ViInt32;
  ::grpc::Status status_ViInt32 = GetStub()->SetAttributeViInt32(&context_ViInt32, request_ViInt32, &response_ViInt32);
  EXPECT_TRUE(status_ViInt32.ok());
  expect_api_success(response_ViInt32.status());

  const dcpower::NiDCPowerAttributes attribute_to_set_sourcedelay = dcpower::NiDCPowerAttributes::NIDCPOWER_ATTRIBUTE_SOURCE_DELAY;
  const ViReal64 expected_value_sourcedelay = 2.516;
  ::grpc::ClientContext context_ViReal64;
  dcpower::SetAttributeViReal64Request request_ViReal64;
  request_ViReal64.mutable_vi()->set_id(GetSessionId());
  request_ViReal64.set_channel_name(channel_list);
  request_ViReal64.set_attribute_id(attribute_to_set_sourcedelay);
  request_ViReal64.set_attribute_value(expected_value_sourcedelay);
  dcpower::SetAttributeViReal64Response response_ViReal64;
  ::grpc::Status status_ViReal64 = GetStub()->SetAttributeViReal64(&context_ViReal64, request_ViReal64, &response_ViReal64);
  EXPECT_TRUE(status_ViReal64.ok());
  expect_api_success(response_ViReal64.status());
  
  ViReal64 get_attribute_value_sourcedelay = get_real64_attribute(channel_list, attribute_to_set_sourcedelay);
  EXPECT_EQ(expected_value_sourcedelay, get_attribute_value_sourcedelay);
}

}  // namespace system
}  // namespace tests
}  // namespace ni