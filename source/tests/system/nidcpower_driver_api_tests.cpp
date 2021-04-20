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

  void configure_output_function(const char* channel_name, ViInt32 function)
  {
    ::grpc::ClientContext context;
    dcpower::ConfigureOutputFunctionRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_name);
    request.set_function(function);
    dcpower::ConfigureOutputFunctionResponse response;

    ::grpc::Status status = GetStub()->ConfigureOutputFunction(&context, request, &response);

    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
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

TEST_F(NiDCPowerDriverApiTest, ConfigureOutputFunctionAndVoltageLevel_ConfiguresSuccessfully)
{
  const char* channel_name = "0";
  ViReal64 expected_voltage_level = 3.0;
  ViInt32 expected_output_function_value = dcpower::OutputFunction::OUTPUT_FUNCTION_NIDCPOWER_VAL_DC_VOLTAGE;
  configure_output_function(channel_name, expected_output_function_value);
  ::grpc::ClientContext context;
  dcpower::ConfigureVoltageLevelRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_level(expected_voltage_level);
  dcpower::ConfigureVoltageLevelResponse response;
  ::grpc::Status status = GetStub()->ConfigureVoltageLevel(&context, request, &response);
  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());

  ViReal64 actual_voltage_level = get_real64_attribute(channel_name, dcpower::NiDCPowerAttributes::NIDCPOWER_ATTRIBUTE_VOLTAGE_LEVEL);
  ViInt32 actual_output_function_value = get_int32_attribute(channel_name, dcpower::NiDCPowerAttributes::NIDCPOWER_ATTRIBUTE_OUTPUT_FUNCTION);
  EXPECT_EQ(expected_voltage_level, actual_voltage_level);
  EXPECT_EQ(expected_output_function_value, actual_output_function_value);
}

TEST_F(NiDCPowerDriverApiTest, ConfiguresOutputFunctionAndCurrentLevel_ConfiguresSuccessfully)
{
  const char* channel_name = "0";
  ViReal64 expected_current_level = 3.0;
  ViInt32 expected_output_function_value = dcpower::OutputFunction::OUTPUT_FUNCTION_NIDCPOWER_VAL_DC_CURRENT;
  configure_output_function(channel_name, expected_output_function_value);
  ::grpc::ClientContext context;
  dcpower::ConfigureCurrentLevelRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_level(expected_current_level);
  dcpower::ConfigureCurrentLevelResponse response;
  ::grpc::Status status = GetStub()->ConfigureCurrentLevel(&context, request, &response);
  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());

  ViReal64 actual_current_level = get_real64_attribute(channel_name, dcpower::NiDCPowerAttributes::NIDCPOWER_ATTRIBUTE_CURRENT_LEVEL);
  ViInt32 actual_output_function_value = get_int32_attribute(channel_name, dcpower::NiDCPowerAttributes::NIDCPOWER_ATTRIBUTE_OUTPUT_FUNCTION);
  EXPECT_EQ(expected_current_level, actual_current_level);
  EXPECT_EQ(expected_output_function_value, actual_output_function_value);
}

}  // namespace system
}  // namespace tests
}  // namespace ni