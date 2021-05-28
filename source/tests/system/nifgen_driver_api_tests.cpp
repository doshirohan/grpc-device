#include <gtest/gtest.h>

#include "nifgen/nifgen_library.h"
#include "nifgen/nifgen_service.h"

namespace ni {
namespace tests {
namespace system {

namespace fgen = nifgen_grpc;

const int kfgenDriverApiSuccess = 0;

class nifgenDriverApiTest : public ::testing::Test {
 protected:
  nifgenDriverApiTest()
  {
    ::grpc::ServerBuilder builder;
    session_repository_ = std::make_unique<nidevice_grpc::SessionRepository>();
    nifgen_library_ = std::make_unique<fgen::NiFgenLibrary>();
    nifgen_service_ = std::make_unique<fgen::NiFgenService>(nifgen_library_.get(), session_repository_.get());
    builder.RegisterService(nifgen_service_.get());

    server_ = builder.BuildAndStart();
    ResetStub();
  }

  virtual ~nifgenDriverApiTest() {}

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
    nifgen_stub_ = fgen::NiFgen::NewStub(channel_);
  }

  std::unique_ptr<fgen::NiFgen::Stub>& GetStub()
  {
    return nifgen_stub_;
  }

  int GetSessionId()
  {
    return driver_session_->id();
  }

  void initialize_driver_session()
  {
    ::grpc::ClientContext context;
    fgen::InitializeWithChannelsRequest request;
    request.set_channel_name("");
    request.set_resource_name("FakeDevice");
    request.set_option_string("Simulate=1, DriverSetup=Model:5421;BoardType:PXI");
    request.set_reset_device(false);
    fgen::InitializeWithChannelsResponse response;

    ::grpc::Status status = GetStub()->InitializeWithChannels(&context, request, &response);
    driver_session_ = std::make_unique<nidevice_grpc::Session>(response.vi());

    ASSERT_TRUE(status.ok());
    ASSERT_EQ(kfgenDriverApiSuccess, response.status());
  }

  void initiate()
  {
    fgen::InitiateGenerationRequest request;
    fgen::InitiateGenerationResponse response;
    ::grpc::ClientContext context;
    request.mutable_vi()->set_id(GetSessionId());

    ::grpc::Status status = GetStub()->InitiateGeneration(&context, request, &response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, response.status());
  }

  void close_driver_session()
  {
    ::grpc::ClientContext context;
    fgen::CloseRequest request;
    request.mutable_vi()->set_id(driver_session_->id());
    fgen::CloseResponse response;

    ::grpc::Status status = GetStub()->Close(&context, request, &response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, response.status());
  }

//   void measure_multiple(const char* channel_name, nifgen_grpc::MeasureMultipleResponse* response)
//   {
//     ::grpc::ClientContext context;
//     fgen::MeasureMultipleRequest request;
//     request.mutable_vi()->set_id(GetSessionId());
//     request.set_channel_name(channel_name);

//     ::grpc::Status status = GetStub()->MeasureMultiple(&context, request, response);

//     EXPECT_TRUE(status.ok());
//   }

  ViBoolean get_bool_attribute(const char* channel_list, fgen::NiFgenAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    fgen::GetAttributeViBooleanRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    fgen::GetAttributeViBooleanResponse response;

    ::grpc::Status status = GetStub()->GetAttributeViBoolean(&context, request, &response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, response.status());
    return response.attribute_value();
  }

  ViInt32 get_int32_attribute(const char* channel_list, fgen::NiFgenAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    fgen::GetAttributeViInt32Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    fgen::GetAttributeViInt32Response response;

    ::grpc::Status status = GetStub()->GetAttributeViInt32(&context, request, &response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, response.status());
    return response.attribute_value();
  }

  ViInt64 get_int64_attribute(const char* channel_list, fgen::NiFgenAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    fgen::GetAttributeViInt64Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    fgen::GetAttributeViInt64Response response;

    ::grpc::Status status = GetStub()->GetAttributeViInt64(&context, request, &response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, response.status());
    return response.attribute_value();
  }

  ViReal64 get_real64_attribute(const char* channel_list, fgen::NiFgenAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    fgen::GetAttributeViReal64Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    fgen::GetAttributeViReal64Response response;

    ::grpc::Status status = GetStub()->GetAttributeViReal64(&context, request, &response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, response.status());
    return response.attribute_value();
  }

  std::string get_string_attribute(const char* channel_list, fgen::NiFgenAttributes attribute_id)
  {
    ::grpc::ClientContext context;
    fgen::GetAttributeViStringRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_id);
    fgen::GetAttributeViStringResponse response;

    ::grpc::Status status = GetStub()->GetAttributeViString(&context, request, &response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, response.status());
    return response.attribute_value();
  }

  void set_int32_attribute(const char* channel_list, fgen::NiFgenAttributes attribute_id, fgen::TerminalConfiguration attribute_value)
  {
    ::grpc::ClientContext context;
    const fgen::NiFgenAttributes attribute_to_set = attribute_id;
    const ViInt32 value = attribute_value;
    fgen::SetAttributeViInt32Request request;
    request.mutable_vi()->set_id(GetSessionId());
    request.set_channel_name(channel_list);
    request.set_attribute_id(attribute_to_set);
    request.set_attribute_value(value);
    fgen::SetAttributeViInt32Response response;

    ::grpc::Status status = GetStub()->SetAttributeViInt32(&context, request, &response);

    // EXPECT_TRUE(status.ok());
    // EXPECT_EQ(kfgenDriverApiSuccess, response.status());
  }

//   void configure_output_function(const char* channel_name, fgen::OutputFunction function)
//   {
//     ::grpc::ClientContext context;
//     fgen::ConfigureOutputFunctionRequest request;
//     request.mutable_vi()->set_id(GetSessionId());
//     request.set_channel_name(channel_name);
//     request.set_function(function);
//     fgen::ConfigureOutputFunctionResponse response;

//     ::grpc::Status status = GetStub()->ConfigureOutputFunction(&context, request, &response);

//     EXPECT_TRUE(status.ok());
//     EXPECT_EQ(kfgenDriverApiSuccess, response.status());
//   }

//   void configure_voltage_level(const char* channel_name, ViReal64 level)
//   {
//     ::grpc::ClientContext context;
//     fgen::ConfigureVoltageLevelRequest request;
//     request.mutable_vi()->set_id(GetSessionId());
//     request.set_channel_name(channel_name);
//     request.set_level(level);
//     fgen::ConfigureVoltageLevelResponse response;

//     ::grpc::Status status = GetStub()->ConfigureVoltageLevel(&context, request, &response);

//     EXPECT_TRUE(status.ok());
//     EXPECT_EQ(kfgenDriverApiSuccess, response.status());
//   }

//   void configure_current_level(const char* channel_name, ViReal64 level)
//   {
//     ::grpc::ClientContext context;
//     fgen::ConfigureCurrentLevelRequest request;
//     request.mutable_vi()->set_id(GetSessionId());
//     request.set_channel_name(channel_name);
//     request.set_level(level);
//     fgen::ConfigureCurrentLevelResponse response;

//     ::grpc::Status status = GetStub()->ConfigureCurrentLevel(&context, request, &response);

//     EXPECT_TRUE(status.ok());
//     EXPECT_EQ(kfgenDriverApiSuccess, response.status());
//   }

  fgen::ExportAttributeConfigurationBufferResponse export_attribute_configuration_buffer()
  {
    ::grpc::ClientContext context;
    fgen::ExportAttributeConfigurationBufferRequest request;
    request.mutable_vi()->set_id(GetSessionId());
    fgen::ExportAttributeConfigurationBufferResponse response;

    ::grpc::Status status = GetStub()->ExportAttributeConfigurationBuffer(&context, request, &response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, response.status());
    return response;
  }

//   void reset_with_channels(const char* channel_name)
//   {
//     ::grpc::ClientContext context;
//     fgen::ResetWithChannelsRequest request;
//     request.mutable_vi()->set_id(GetSessionId());
//     request.set_channel_name(channel_name);
//     fgen::ResetWithChannelsResponse response;

//     ::grpc::Status status = GetStub()->ResetWithChannels(&context, request, &response);

//     EXPECT_TRUE(status.ok());
//     EXPECT_EQ(kfgenDriverApiSuccess, response.status());
//   }

//   void fetch_multiple(const char* channel_name, nifgen_grpc::FetchMultipleResponse* response)
//   {
//     ::grpc::ClientContext context;
//     fgen::FetchMultipleRequest request;
//     request.mutable_vi()->set_id(GetSessionId());
//     request.set_channel_name(channel_name);
//     request.set_timeout(5);
//     request.set_count(20);

//     ::grpc::Status status = GetStub()->FetchMultiple(&context, request, response);

//     EXPECT_TRUE(status.ok());
//   }

  void import_attribute_configuration_buffer(fgen::ExportAttributeConfigurationBufferResponse export_buffer_response)
  {
    ::grpc::ClientContext context;
    fgen::ImportAttributeConfigurationBufferRequest import_request;
    import_request.mutable_vi()->set_id(GetSessionId());
    auto exported_configuration = export_buffer_response.configuration();
    import_request.mutable_configuration()->Add(exported_configuration.begin(), exported_configuration.end());
    fgen::ImportAttributeConfigurationBufferResponse import_response;

    ::grpc::Status status = GetStub()->ImportAttributeConfigurationBuffer(&context, import_request, &import_response);

    EXPECT_TRUE(status.ok());
    EXPECT_EQ(kfgenDriverApiSuccess, import_response.status());
  }

 private:
  std::shared_ptr<::grpc::Channel> channel_;
  std::unique_ptr<::nidevice_grpc::Session> driver_session_;
  std::unique_ptr<fgen::NiFgen::Stub> nifgen_stub_;
  std::unique_ptr<nidevice_grpc::SessionRepository> session_repository_;
  std::unique_ptr<fgen::NiFgenLibrary> nifgen_library_;
  std::unique_ptr<fgen::NiFgenService> nifgen_service_;
  std::unique_ptr<::grpc::Server> server_;
};

TEST_F(nifgenDriverApiTest, PerformSelfTest_CompletesSuccessfuly)
{
  ::grpc::ClientContext context;
  fgen::SelfTestRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  fgen::SelfTestResponse response;
  ::grpc::Status status = GetStub()->SelfTest(&context, request, &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(kfgenDriverApiSuccess, response.status());
  EXPECT_EQ(0, response.self_test_result());
  EXPECT_LT(0, response.self_test_message().size());
}

TEST_F(nifgenDriverApiTest, PerformReset_CompletesSuccessfuly)
{
  ::grpc::ClientContext context;
  fgen::ResetRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  fgen::ResetResponse response;
  ::grpc::Status status = GetStub()->Reset(&context, request, &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(kfgenDriverApiSuccess, response.status());
}

TEST_F(nifgenDriverApiTest, SetAttributeViInt32_GetAttributeViInt32ReturnsSameValue)
{
  const char* channel_name = "";
  const fgen::NiFgenAttributes attribute_to_set = fgen::NiFgenAttributes::NIFGEN_ATTRIBUTE_OUTPUT_MODE;
  const ViInt32 expected_value = fgen::OutputMode::OUTPUT_MODE_NIFGEN_VAL_OUTPUT_ARB;
  ::grpc::ClientContext context;
  fgen::SetAttributeViInt32Request request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_to_set);
  request.set_attribute_value(expected_value);
  fgen::SetAttributeViInt32Response response;
  ::grpc::Status status = GetStub()->SetAttributeViInt32(&context, request, &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(kfgenDriverApiSuccess, response.status());
  ViInt32 get_attribute_value = get_int32_attribute(channel_name, attribute_to_set);
  EXPECT_EQ(expected_value, get_attribute_value);
}

TEST_F(nifgenDriverApiTest, SetAttributeViReal64_GetAttributeViReal64ReturnsSameValue)
{
  const char* channel_name = "0";
  set_int32_attribute(
      channel_name,
      fgen::NiFgenAttributes::NIFGEN_ATTRIBUTE_TERMINAL_CONFIGURATION,
      fgen::TerminalConfiguration::TERMINAL_CONFIGURATION_NIFGEN_VAL_DIFFERENTIAL);
  const fgen::NiFgenAttributes attribute_to_set = fgen::NiFgenAttributes::NIFGEN_ATTRIBUTE_COMMON_MODE_OFFSET;
  const ViReal64 expected_value = 0;
  ::grpc::ClientContext context;
  fgen::SetAttributeViReal64Request request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_to_set);
  request.set_attribute_value(expected_value);
  fgen::SetAttributeViReal64Response response;
  ::grpc::Status status = GetStub()->SetAttributeViReal64(&context, request, &response);

  EXPECT_EQ("", status.error_message());
  EXPECT_TRUE(status.ok());
  EXPECT_EQ(kfgenDriverApiSuccess, response.status());
  ViReal64 get_attribute_value_sourcedelay = get_real64_attribute(channel_name, attribute_to_set);
  EXPECT_EQ(expected_value, get_attribute_value_sourcedelay);
}

TEST_F(nifgenDriverApiTest, SetAttributeViBoolean_GetAttributeViBooleanReturnsSameValue)
{
  const char* channel_name = "0";
  // Attribute 'nifgen_ATTRIBUTE_MEASURE_WHEN' must be set to 'MEASURE_WHEN_nifgen_VAL_AUTOMATICALLY_AFTER_SOURCE_COMPLETE'
  // before setting attribute 'nifgen_ATTRIBUTE_MEASURE_RECORD_LENGTH_IS_FINITE'.
  // set_int32_attribute(
  //     channel_name,
  //     fgen::NiFgenAttributes::enabl,
  //     fgen::MeasureWhen::MEASURE_WHEN_nifgen_VAL_AUTOMATICALLY_AFTER_SOURCE_COMPLETE);
  const fgen::NiFgenAttributes attribute_to_set = fgen::NiFgenAttributes::NIFGEN_ATTRIBUTE_OUTPUT_ENABLED;
  const ViBoolean expected_value = true;
  ::grpc::ClientContext context;
  fgen::SetAttributeViBooleanRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_to_set);
  request.set_attribute_value(expected_value);
  fgen::SetAttributeViBooleanResponse response;
  ::grpc::Status status = GetStub()->SetAttributeViBoolean(&context, request, &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(kfgenDriverApiSuccess, response.status());
  ViBoolean get_attribute_value = get_bool_attribute(channel_name, attribute_to_set);
  EXPECT_EQ(expected_value, get_attribute_value);
}

TEST_F(nifgenDriverApiTest, SetAttributeViString_GetAttributeViStringReturnsSameValue)
{
  const char* channel_name = "";
  const fgen::NiFgenAttributes attribute_to_set = fgen::NiFgenAttributes::NIFGEN_ATTRIBUTE_MARKER_EVENT_OUTPUT_TERMINAL;
  const ViString expected_value = "sample";
  ::grpc::ClientContext context;
  fgen::SetAttributeViStringRequest request;
  request.mutable_vi()->set_id(GetSessionId());
  request.set_channel_name(channel_name);
  request.set_attribute_id(attribute_to_set);
  request.set_attribute_value(expected_value);
  fgen::SetAttributeViStringResponse response;
  ::grpc::Status status = GetStub()->SetAttributeViString(&context, request, &response);

  EXPECT_TRUE(status.ok());
  EXPECT_EQ(kfgenDriverApiSuccess, response.status());
  std::string get_attribute_value = get_string_attribute(channel_name, attribute_to_set);
  EXPECT_STREQ(expected_value, get_attribute_value.c_str());
}

// TEST_F(nifgenDriverApiTest, SetAttributeViInt64_GetAttributeViInt64ReturnsSameValue)
// {
//   const char* channel_name = "";
//   const fgen::NiFgenAttributes attribute_to_set = fgen::NiFgenAttributes::nifgen_ATTRIBUTE_ACTIVE_ADVANCED_SEQUENCE_STEP;
//   const ViInt64 expected_value = 1;
//   ::grpc::ClientContext context;
//   fgen::SetAttributeViInt64Request request;
//   request.mutable_vi()->set_id(GetSessionId());
//   request.set_channel_name(channel_name);
//   request.set_attribute_id(attribute_to_set);
//   request.set_attribute_value(expected_value);
//   fgen::SetAttributeViInt64Response response;
//   ::grpc::Status status = GetStub()->SetAttributeViInt64(&context, request, &response);

//   EXPECT_TRUE(status.ok());
//   EXPECT_EQ(kfgenDriverApiSuccess, response.status());
//   ViInt64 get_attribute_value = get_int64_attribute(channel_name, attribute_to_set);
//   EXPECT_EQ(expected_value, get_attribute_value);
// }

// TEST_F(nifgenDriverApiTest, ConfigureOutputFunctionAndVoltageLevel_ConfiguresSuccessfully)
// {
//   const char* channel_name = "0";
//   ViReal64 expected_voltage_level = 3.0;
//   auto expected_output_function_value = fgen::OutputFunction::OUTPUT_FUNCTION_nifgen_VAL_DC_VOLTAGE;
//   configure_output_function(channel_name, expected_output_function_value);
//   configure_voltage_level(channel_name, expected_voltage_level);

//   ViReal64 actual_voltage_level = get_real64_attribute(channel_name, fgen::NiFgenAttributes::nifgen_ATTRIBUTE_VOLTAGE_LEVEL);
//   ViInt32 actual_output_function_value = get_int32_attribute(channel_name, fgen::NiFgenAttributes::nifgen_ATTRIBUTE_OUTPUT_FUNCTION);
//   EXPECT_EQ(expected_voltage_level, actual_voltage_level);
//   EXPECT_EQ(expected_output_function_value, actual_output_function_value);
// }

// TEST_F(nifgenDriverApiTest, ConfigureOutputFunctionAndCurrentLevel_ConfiguresSuccessfully)
// {
//   const char* channel_name = "0";
//   ViReal64 expected_current_level = 3.0;
//   auto expected_output_function_value = fgen::OutputFunction::OUTPUT_FUNCTION_nifgen_VAL_DC_CURRENT;
//   configure_output_function(channel_name, expected_output_function_value);
//   configure_current_level(channel_name, expected_current_level);

//   ViReal64 actual_current_level = get_real64_attribute(channel_name, fgen::NiFgenAttributes::nifgen_ATTRIBUTE_CURRENT_LEVEL);
//   ViInt32 actual_output_function_value = get_int32_attribute(channel_name, fgen::NiFgenAttributes::nifgen_ATTRIBUTE_OUTPUT_FUNCTION);
//   EXPECT_EQ(expected_current_level, actual_current_level);
//   EXPECT_EQ(expected_output_function_value, actual_output_function_value);
// }

// TEST_F(nifgenDriverApiTest, SetMeasureWhenAndInitiate_MeasureMultiple_ReturnsSuccess)
// {
//   const char* channel_name = "";  // all channels in session
//   // Attribute 'nifgen_ATTRIBUTE_MEASURE_WHEN' must be set to On Demand before calling MeasureMultiple
//   set_int32_attribute(
//       channel_name,
//       fgen::NiFgenAttributes::nifgen_ATTRIBUTE_MEASURE_WHEN,
//       fgen::MeasureWhen::MEASURE_WHEN_nifgen_VAL_ON_DEMAND);
//   initiate();

//   fgen::MeasureMultipleResponse response;
//   measure_multiple(channel_name, &response);

//   EXPECT_EQ(kfgenDriverApiSuccess, response.status());
// }

// TEST_F(nifgenDriverApiTest, SetMeasureWhenAndInitiate_FetchMultiple_FetchesSuccessfully)
// {
//   const char* channel_name = "0";
//   // Attribute 'nifgen_ATTRIBUTE_MEASURE_WHEN' must be set before calling FetchMultiple
//   set_int32_attribute(
//       channel_name,
//       fgen::NiFgenAttributes::nifgen_ATTRIBUTE_MEASURE_WHEN,
//       fgen::MeasureWhen::MEASURE_WHEN_nifgen_VAL_AUTOMATICALLY_AFTER_SOURCE_COMPLETE);
//   initiate();

//   fgen::FetchMultipleResponse response;
//   fetch_multiple(channel_name, &response);

//   EXPECT_EQ(kfgenDriverApiSuccess, response.status());
// }

// TEST_F(nifgenDriverApiTest, VoltageLevelConfiguredAndExportedToBuffer_ResetAndImportConfigurationFromBuffer_ConfigurationIsImportedSuccessfully)
// {
//   const char* channel_name = "0";
//   auto expected_output_function = fgen::OutputFunction::OUTPUT_FUNCTION_nifgen_VAL_DC_VOLTAGE;
//   auto expected_voltage_level = 3.0;
//   configure_output_function(channel_name, expected_output_function);
//   configure_voltage_level(channel_name, expected_voltage_level);
//   auto export_buffer_response = export_attribute_configuration_buffer();

//   reset_with_channels(channel_name);
//   import_attribute_configuration_buffer(export_buffer_response);

//   auto actual_voltage_level = get_real64_attribute(channel_name, fgen::NiFgenAttributes::nifgen_ATTRIBUTE_VOLTAGE_LEVEL);
//   auto actual_output_function = get_int32_attribute(channel_name, fgen::NiFgenAttributes::nifgen_ATTRIBUTE_OUTPUT_FUNCTION);
//   EXPECT_EQ(expected_voltage_level, actual_voltage_level);
//   EXPECT_EQ(expected_output_function, actual_output_function);
// }

// TEST_F(nifgenDriverApiTest, CalSelfCalibrate_CompletesSuccessfully)
// {
//   const char* channel_name = "";
//   ::grpc::ClientContext context;
//   fgen::CalSelfCalibrateRequest request;
//   request.mutable_vi()->set_id(GetSessionId());
//   request.set_channel_name(channel_name);
//   fgen::CalSelfCalibrateResponse response;
//   ::grpc::Status status = GetStub()->CalSelfCalibrate(&context, request, &response);

//   EXPECT_TRUE(status.ok());
//   EXPECT_EQ(kfgenDriverApiSuccess, response.status());
// }

}  // namespace system
}  // namespace tests
}  // namespace ni