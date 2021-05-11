#include <gtest/gtest.h>

#include "nidigital/nidigital_library.h"
#include "nidigital/nidigital_service.h"

namespace ni {
namespace tests {
namespace system {

namespace digital = nidigital_grpc;

const int kDigitalDriverApiSuccess = 0;

class NiDigitalDriverApiTest : public ::testing::Test {
 protected:
  NiDigitalDriverApiTest()
  {
    ::grpc::ServerBuilder builder;
    session_repository_ = std::make_unique<nidevice_grpc::SessionRepository>();
    nidigital_library_ = std::make_unique<digital::NiDigitalLibrary>();
    nidigital_service_ = std::make_unique<digital::NiDigitalService>(nidigital_library_.get(), session_repository_.get());
    builder.RegisterService(nidigital_service_.get());

    server_ = builder.BuildAndStart();
    ResetStub();
  }

  virtual ~NiDigitalDriverApiTest() {}

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
    nidigital_stub_ = digital::NiDigital::NewStub(channel_);
  }

  std::unique_ptr<digital::NiDigital::Stub>& GetStub()
  {
    return nidigital_stub_;
  }

  int GetSessionId()
  {
    return driver_session_->id();
  }

  void initialize_driver_session()
  {
    ::grpc::ClientContext context;
    digital::InitWithOptionsRequest request;
    request.set_resource_name("FakeDevice");
    request.set_option_string("Simulate=1, DriverSetup=Model:6570; BoardType:PXIe");
    request.set_session_name("");
    request.set_reset_device(false);
    request.set_id_query(false);
    digital::InitWithOptionsResponse response;

    ::grpc::Status status = GetStub()->InitWithOptions(&context, request, &response);
    driver_session_ = std::make_unique<nidevice_grpc::Session>(response.vi());

    ASSERT_TRUE(status.ok());
    ASSERT_EQ(kDigitalDriverApiSuccess, response.status());
  }

  void close_driver_session()
  {
    ::grpc::ClientContext context;
    digital::CloseRequest request;
    request.mutable_vi()->set_id(driver_session_->id());
    digital::CloseResponse response;

    ::grpc::Status status = GetStub()->Close(&context, request, &response);

    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
  }

  void expect_api_success(int error_status)
  {
    EXPECT_EQ(kDigitalDriverApiSuccess, error_status) << get_error_message(error_status);
  }

  std::string get_error_message(int error_status)
  {
    ::grpc::ClientContext context;
    digital::ErrorMessageRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_error_code(error_status);
    digital::ErrorMessageResponse response;

    ::grpc::Status status = GetStub()->ErrorMessage(&context, request, &response);
    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kDigitalDriverApiSuccess, response.status());
    return response.error_message();
  }

ViBoolean get_bool_attribute(const char* channel_name, digital::NiDigitalAttributes attribute)
  {
    ::grpc::ClientContext context;
    digital::GetAttributeViBooleanRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_name);
    request.set_attribute(attribute);
    digital::GetAttributeViBooleanResponse response;
    ::grpc::Status status = GetStub()->GetAttributeViBoolean(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.value();
  }

  ViInt32 get_int32_attribute(const char* channel_name, digital::NiDigitalAttributes attribute)
  {
    ::grpc::ClientContext context;
    digital::GetAttributeViInt32Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_name);
    request.set_attribute(attribute);
    digital::GetAttributeViInt32Response response;
    ::grpc::Status status = GetStub()->GetAttributeViInt32(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.value();
  }

  ViInt64 get_int64_attribute(const char* channel_name, digital::NiDigitalAttributes attribute)
  {
    ::grpc::ClientContext context;
    digital::GetAttributeViInt64Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_name);
    request.set_attribute(attribute);
    digital::GetAttributeViInt64Response response;
    ::grpc::Status status = GetStub()->GetAttributeViInt64(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.value();
  }

  std::string get_string_attribute(const char* channel_name, digital::NiDigitalAttributes attribute)
  {
    ::grpc::ClientContext context;
    digital::GetAttributeViStringRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_name);
    request.set_attribute(attribute);
    digital::GetAttributeViStringResponse response;
    ::grpc::Status status = GetStub()->GetAttributeViString(&context, request, &response);
    EXPECT_TRUE(status.ok());
    expect_api_success(response.status());
    return response.value();
  }

 private:
  std::shared_ptr<::grpc::Channel> channel_;
  std::unique_ptr<::nidevice_grpc::Session> driver_session_;
  std::unique_ptr<digital::NiDigital::Stub> nidigital_stub_;
  std::unique_ptr<nidevice_grpc::SessionRepository> session_repository_;
  std::unique_ptr<digital::NiDigitalLibrary> nidigital_library_;
  std::unique_ptr<digital::NiDigitalService> nidigital_service_;
  std::unique_ptr<::grpc::Server> server_;
};

TEST_F(NiDigitalDriverApiTest, SelfTest_SelfTestCompletesSuccessfully)
{
  ::grpc::ClientContext context;
  digital::SelfTestRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  digital::SelfTestResponse response;
  ::grpc::Status status = GetStub()->SelfTest(&context, request, &response);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
  EXPECT_EQ(0, response.test_result());
  EXPECT_LT(0, strlen(response.test_message().c_str()));
}

TEST_F(NiDigitalDriverApiTest, Reset_ResetCompletesSuccessfully)
{
  ::grpc::ClientContext context;
  digital::ResetRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  digital::ResetResponse response;
  ::grpc::Status status = GetStub()->Reset(&context, request, &response);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
}

TEST_F(NiDigitalDriverApiTest, SetViInt32Attribute_GetViInt32Attribute_ValueMatchesSetValue)
{
  const char* channel_name = "";
  const digital::NiDigitalAttributes attribute_to_set = digital::NiDigitalAttributes::NIDIGITAL_ATTRIBUTE_SELECTED_FUNCTION;
  const ViInt32 expected_value = digital::SelectedFunction::SELECTED_FUNCTION_NIDIGITAL_VAL_PPMU;
  ::grpc::ClientContext context;
  digital::SetAttributeViInt32Request request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_attribute(attribute_to_set);
  request.set_value(expected_value);
  digital::SetAttributeViInt32Response response;
  ::grpc::Status status = GetStub()->SetAttributeViInt32(&context, request, &response);
  ViInt32 get_attribute_value = get_int32_attribute(channel_name, attribute_to_set);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
  EXPECT_EQ(expected_value, get_attribute_value);
}

TEST_F(NiDigitalDriverApiTest, SetViInt64Attribute_GetViInt64Attribute_ValueMatchesSetValue)
{
  const char* channel_name = "";
  const digital::NiDigitalAttributes attribute_to_set = digital::NiDigitalAttributes::NIDIGITAL_ATTRIBUTE_CYCLE_NUMBER_HISTORY_RAM_TRIGGER_CYCLE_NUMBER;
  const ViInt64 expected_value = 4;
  ::grpc::ClientContext context;
  digital::SetAttributeViInt64Request request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_attribute(attribute_to_set);
  request.set_value(expected_value);
  digital::SetAttributeViInt64Response response;
  ::grpc::Status status = GetStub()->SetAttributeViInt64(&context, request, &response);
  ViInt64 get_attribute_value = get_int64_attribute(channel_name, attribute_to_set);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
  EXPECT_EQ(expected_value, get_attribute_value);
}

TEST_F(NiDigitalDriverApiTest, SetViStringAttribute_GetViStringAttribute_ValueMatchesSetValue)
{
  const char* channel_name = "";
  const digital::NiDigitalAttributes attribute_to_set = digital::NiDigitalAttributes::NIDIGITAL_ATTRIBUTE_DIGITAL_EDGE_START_TRIGGER_SOURCE;
  const ViString expected_value = "Hello world!";
  ::grpc::ClientContext context;
  digital::SetAttributeViStringRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_attribute(attribute_to_set);
  request.set_value(expected_value);
  digital::SetAttributeViStringResponse response;
  ::grpc::Status status = GetStub()->SetAttributeViString(&context, request, &response);
  std::string get_attribute_value = get_string_attribute(channel_name, attribute_to_set);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
  EXPECT_STREQ(expected_value, get_attribute_value.c_str());
}

TEST_F(NiDigitalDriverApiTest, SetBoolAttribute_GetBoolAttribute_ValueMatchesSetValue)
{
  const char* channel_name = "";
  const digital::NiDigitalAttributes attribute_to_set = digital::NiDigitalAttributes::NIDIGITAL_ATTRIBUTE_CACHE;
  const ViBoolean expected_value = true;
  ::grpc::ClientContext context;
  digital::SetAttributeViBooleanRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_attribute(attribute_to_set);
  request.set_value(expected_value);
  digital::SetAttributeViBooleanResponse response;
  ::grpc::Status status = GetStub()->SetAttributeViBoolean(&context, request, &response);
  ViBoolean get_attribute_value = get_bool_attribute(channel_name, attribute_to_set);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
  EXPECT_EQ(expected_value, get_attribute_value);
}

TEST_F(NiDigitalDriverApiTest, SelfCalibrate_CompletesSuccessfully)
{
  ::grpc::ClientContext context;
  digital::SelfCalibrateRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  digital::SelfCalibrateResponse response;
  ::grpc::Status status = GetStub()->SelfCalibrate(&context, request, &response);

  EXPECT_TRUE(status.ok());
  expect_api_success(response.status());
}

}  // namespace system
}  // namespace tests
}  // namespace ni