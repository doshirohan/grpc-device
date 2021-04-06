//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-DCPower Metadata
//---------------------------------------------------------------------
#include "nidcpower_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "nidcpower_64.dll";
#else
static const char* kLibraryName = "libnidcpower.so";
#endif

namespace nidcpower_grpc {

NiDCPowerLibrary::NiDCPowerLibrary() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.Abort = reinterpret_cast<AbortPtr>(shared_library_.get_function_pointer("niDCPower_Abort"));
  function_pointers_.CalSelfCalibrate = reinterpret_cast<CalSelfCalibratePtr>(shared_library_.get_function_pointer("niDCPower_CalSelfCalibrate"));
  function_pointers_.Commit = reinterpret_cast<CommitPtr>(shared_library_.get_function_pointer("niDCPower_Commit"));
  function_pointers_.ConfigureApertureTime = reinterpret_cast<ConfigureApertureTimePtr>(shared_library_.get_function_pointer("niDCPower_ConfigureApertureTime"));
  function_pointers_.CreateAdvancedSequence = reinterpret_cast<CreateAdvancedSequencePtr>(shared_library_.get_function_pointer("niDCPower_CreateAdvancedSequence"));
  function_pointers_.CreateAdvancedSequenceStep = reinterpret_cast<CreateAdvancedSequenceStepPtr>(shared_library_.get_function_pointer("niDCPower_CreateAdvancedSequenceStep"));
  function_pointers_.DeleteAdvancedSequence = reinterpret_cast<DeleteAdvancedSequencePtr>(shared_library_.get_function_pointer("niDCPower_DeleteAdvancedSequence"));
  function_pointers_.Disable = reinterpret_cast<DisablePtr>(shared_library_.get_function_pointer("niDCPower_Disable"));
  function_pointers_.ExportAttributeConfigurationBuffer = reinterpret_cast<ExportAttributeConfigurationBufferPtr>(shared_library_.get_function_pointer("niDCPower_ExportAttributeConfigurationBuffer"));
  function_pointers_.ExportAttributeConfigurationFile = reinterpret_cast<ExportAttributeConfigurationFilePtr>(shared_library_.get_function_pointer("niDCPower_ExportAttributeConfigurationFile"));
  function_pointers_.FetchMultiple = reinterpret_cast<FetchMultiplePtr>(shared_library_.get_function_pointer("niDCPower_FetchMultiple"));
  function_pointers_.GetAttributeViBoolean = reinterpret_cast<GetAttributeViBooleanPtr>(shared_library_.get_function_pointer("niDCPower_GetAttributeViBoolean"));
  function_pointers_.GetAttributeViInt32 = reinterpret_cast<GetAttributeViInt32Ptr>(shared_library_.get_function_pointer("niDCPower_GetAttributeViInt32"));
  function_pointers_.GetAttributeViInt64 = reinterpret_cast<GetAttributeViInt64Ptr>(shared_library_.get_function_pointer("niDCPower_GetAttributeViInt64"));
  function_pointers_.GetAttributeViReal64 = reinterpret_cast<GetAttributeViReal64Ptr>(shared_library_.get_function_pointer("niDCPower_GetAttributeViReal64"));
  function_pointers_.GetAttributeViString = reinterpret_cast<GetAttributeViStringPtr>(shared_library_.get_function_pointer("niDCPower_GetAttributeViString"));
  function_pointers_.GetChannelName = reinterpret_cast<GetChannelNamePtr>(shared_library_.get_function_pointer("niDCPower_GetChannelName"));
  function_pointers_.GetError = reinterpret_cast<GetErrorPtr>(shared_library_.get_function_pointer("niDCPower_GetError"));
  function_pointers_.GetExtCalLastDateAndTime = reinterpret_cast<GetExtCalLastDateAndTimePtr>(shared_library_.get_function_pointer("niDCPower_GetExtCalLastDateAndTime"));
  function_pointers_.GetExtCalLastTemp = reinterpret_cast<GetExtCalLastTempPtr>(shared_library_.get_function_pointer("niDCPower_GetExtCalLastTemp"));
  function_pointers_.GetExtCalRecommendedInterval = reinterpret_cast<GetExtCalRecommendedIntervalPtr>(shared_library_.get_function_pointer("niDCPower_GetExtCalRecommendedInterval"));
  function_pointers_.GetSelfCalLastDateAndTime = reinterpret_cast<GetSelfCalLastDateAndTimePtr>(shared_library_.get_function_pointer("niDCPower_GetSelfCalLastDateAndTime"));
  function_pointers_.GetSelfCalLastTemp = reinterpret_cast<GetSelfCalLastTempPtr>(shared_library_.get_function_pointer("niDCPower_GetSelfCalLastTemp"));
  function_pointers_.ImportAttributeConfigurationBuffer = reinterpret_cast<ImportAttributeConfigurationBufferPtr>(shared_library_.get_function_pointer("niDCPower_ImportAttributeConfigurationBuffer"));
  function_pointers_.ImportAttributeConfigurationFile = reinterpret_cast<ImportAttributeConfigurationFilePtr>(shared_library_.get_function_pointer("niDCPower_ImportAttributeConfigurationFile"));
  function_pointers_.InitializeWithChannels = reinterpret_cast<InitializeWithChannelsPtr>(shared_library_.get_function_pointer("niDCPower_InitializeWithChannels"));
  function_pointers_.Initiate = reinterpret_cast<InitiatePtr>(shared_library_.get_function_pointer("niDCPower_Initiate"));
  function_pointers_.LockSession = reinterpret_cast<LockSessionPtr>(shared_library_.get_function_pointer("niDCPower_LockSession"));
  function_pointers_.Measure = reinterpret_cast<MeasurePtr>(shared_library_.get_function_pointer("niDCPower_Measure"));
  function_pointers_.MeasureMultiple = reinterpret_cast<MeasureMultiplePtr>(shared_library_.get_function_pointer("niDCPower_MeasureMultiple"));
  function_pointers_.QueryInCompliance = reinterpret_cast<QueryInCompliancePtr>(shared_library_.get_function_pointer("niDCPower_QueryInCompliance"));
  function_pointers_.QueryMaxCurrentLimit = reinterpret_cast<QueryMaxCurrentLimitPtr>(shared_library_.get_function_pointer("niDCPower_QueryMaxCurrentLimit"));
  function_pointers_.QueryMaxVoltageLevel = reinterpret_cast<QueryMaxVoltageLevelPtr>(shared_library_.get_function_pointer("niDCPower_QueryMaxVoltageLevel"));
  function_pointers_.QueryMinCurrentLimit = reinterpret_cast<QueryMinCurrentLimitPtr>(shared_library_.get_function_pointer("niDCPower_QueryMinCurrentLimit"));
  function_pointers_.QueryOutputState = reinterpret_cast<QueryOutputStatePtr>(shared_library_.get_function_pointer("niDCPower_QueryOutputState"));
  function_pointers_.ReadCurrentTemperature = reinterpret_cast<ReadCurrentTemperaturePtr>(shared_library_.get_function_pointer("niDCPower_ReadCurrentTemperature"));
  function_pointers_.ResetDevice = reinterpret_cast<ResetDevicePtr>(shared_library_.get_function_pointer("niDCPower_ResetDevice"));
  function_pointers_.ResetWithDefaults = reinterpret_cast<ResetWithDefaultsPtr>(shared_library_.get_function_pointer("niDCPower_ResetWithDefaults"));
  function_pointers_.SendSoftwareEdgeTrigger = reinterpret_cast<SendSoftwareEdgeTriggerPtr>(shared_library_.get_function_pointer("niDCPower_SendSoftwareEdgeTrigger"));
  function_pointers_.SetAttributeViBoolean = reinterpret_cast<SetAttributeViBooleanPtr>(shared_library_.get_function_pointer("niDCPower_SetAttributeViBoolean"));
  function_pointers_.SetAttributeViInt32 = reinterpret_cast<SetAttributeViInt32Ptr>(shared_library_.get_function_pointer("niDCPower_SetAttributeViInt32"));
  function_pointers_.SetAttributeViInt64 = reinterpret_cast<SetAttributeViInt64Ptr>(shared_library_.get_function_pointer("niDCPower_SetAttributeViInt64"));
  function_pointers_.SetAttributeViReal64 = reinterpret_cast<SetAttributeViReal64Ptr>(shared_library_.get_function_pointer("niDCPower_SetAttributeViReal64"));
  function_pointers_.SetAttributeViString = reinterpret_cast<SetAttributeViStringPtr>(shared_library_.get_function_pointer("niDCPower_SetAttributeViString"));
  function_pointers_.SetSequence = reinterpret_cast<SetSequencePtr>(shared_library_.get_function_pointer("niDCPower_SetSequence"));
  function_pointers_.UnlockSession = reinterpret_cast<UnlockSessionPtr>(shared_library_.get_function_pointer("niDCPower_UnlockSession"));
  function_pointers_.WaitForEvent = reinterpret_cast<WaitForEventPtr>(shared_library_.get_function_pointer("niDCPower_WaitForEvent"));
  function_pointers_.close = reinterpret_cast<closePtr>(shared_library_.get_function_pointer("niDCPower_close"));
  function_pointers_.error_message = reinterpret_cast<error_messagePtr>(shared_library_.get_function_pointer("niDCPower_error_message"));
  function_pointers_.self_test = reinterpret_cast<self_testPtr>(shared_library_.get_function_pointer("niDCPower_self_test"));
}

NiDCPowerLibrary::~NiDCPowerLibrary()
{
}

::grpc::Status NiDCPowerLibrary::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

ViStatus NiDCPowerLibrary::Abort(ViSession vi)
{
  if (!function_pointers_.Abort) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_Abort.");
  }
#if defined(_MSC_VER)
  return niDCPower_Abort(vi);
#else
  return function_pointers_.Abort(vi);
#endif
}

ViStatus NiDCPowerLibrary::CalSelfCalibrate(ViSession vi, ViConstString channelName)
{
  if (!function_pointers_.CalSelfCalibrate) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_CalSelfCalibrate.");
  }
#if defined(_MSC_VER)
  return niDCPower_CalSelfCalibrate(vi, channelName);
#else
  return function_pointers_.CalSelfCalibrate(vi, channelName);
#endif
}

ViStatus NiDCPowerLibrary::Commit(ViSession vi)
{
  if (!function_pointers_.Commit) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_Commit.");
  }
#if defined(_MSC_VER)
  return niDCPower_Commit(vi);
#else
  return function_pointers_.Commit(vi);
#endif
}

ViStatus NiDCPowerLibrary::ConfigureApertureTime(ViSession vi, ViConstString channelName, ViReal64 apertureTime, ViInt32 units)
{
  if (!function_pointers_.ConfigureApertureTime) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_ConfigureApertureTime.");
  }
#if defined(_MSC_VER)
  return niDCPower_ConfigureApertureTime(vi, channelName, apertureTime, units);
#else
  return function_pointers_.ConfigureApertureTime(vi, channelName, apertureTime, units);
#endif
}

ViStatus NiDCPowerLibrary::CreateAdvancedSequence(ViSession vi, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence)
{
  if (!function_pointers_.CreateAdvancedSequence) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_CreateAdvancedSequence.");
  }
#if defined(_MSC_VER)
  return niDCPower_CreateAdvancedSequence(vi, sequenceName, attributeIdCount, attributeIds, setAsActiveSequence);
#else
  return function_pointers_.CreateAdvancedSequence(vi, sequenceName, attributeIdCount, attributeIds, setAsActiveSequence);
#endif
}

ViStatus NiDCPowerLibrary::CreateAdvancedSequenceStep(ViSession vi, ViBoolean setAsActiveStep)
{
  if (!function_pointers_.CreateAdvancedSequenceStep) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_CreateAdvancedSequenceStep.");
  }
#if defined(_MSC_VER)
  return niDCPower_CreateAdvancedSequenceStep(vi, setAsActiveStep);
#else
  return function_pointers_.CreateAdvancedSequenceStep(vi, setAsActiveStep);
#endif
}

ViStatus NiDCPowerLibrary::DeleteAdvancedSequence(ViSession vi, ViConstString sequenceName)
{
  if (!function_pointers_.DeleteAdvancedSequence) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_DeleteAdvancedSequence.");
  }
#if defined(_MSC_VER)
  return niDCPower_DeleteAdvancedSequence(vi, sequenceName);
#else
  return function_pointers_.DeleteAdvancedSequence(vi, sequenceName);
#endif
}

ViStatus NiDCPowerLibrary::Disable(ViSession vi)
{
  if (!function_pointers_.Disable) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_Disable.");
  }
#if defined(_MSC_VER)
  return niDCPower_Disable(vi);
#else
  return function_pointers_.Disable(vi);
#endif
}

ViStatus NiDCPowerLibrary::ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[])
{
  if (!function_pointers_.ExportAttributeConfigurationBuffer) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_ExportAttributeConfigurationBuffer.");
  }
#if defined(_MSC_VER)
  return niDCPower_ExportAttributeConfigurationBuffer(vi, size, configuration);
#else
  return function_pointers_.ExportAttributeConfigurationBuffer(vi, size, configuration);
#endif
}

ViStatus NiDCPowerLibrary::ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath)
{
  if (!function_pointers_.ExportAttributeConfigurationFile) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_ExportAttributeConfigurationFile.");
  }
#if defined(_MSC_VER)
  return niDCPower_ExportAttributeConfigurationFile(vi, filePath);
#else
  return function_pointers_.ExportAttributeConfigurationFile(vi, filePath);
#endif
}

ViStatus NiDCPowerLibrary::FetchMultiple(ViSession vi, ViConstString channelName, ViReal64 timeout, ViInt32 count, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[], ViBoolean inCompliance[], ViInt32* actualCount)
{
  if (!function_pointers_.FetchMultiple) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_FetchMultiple.");
  }
#if defined(_MSC_VER)
  return niDCPower_FetchMultiple(vi, channelName, timeout, count, voltageMeasurements, currentMeasurements, inCompliance, actualCount);
#else
  return function_pointers_.FetchMultiple(vi, channelName, timeout, count, voltageMeasurements, currentMeasurements, inCompliance, actualCount);
#endif
}

ViStatus NiDCPowerLibrary::GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue)
{
  if (!function_pointers_.GetAttributeViBoolean) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetAttributeViBoolean.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.GetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue)
{
  if (!function_pointers_.GetAttributeViInt32) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetAttributeViInt32.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetAttributeViInt32(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.GetAttributeViInt32(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue)
{
  if (!function_pointers_.GetAttributeViInt64) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetAttributeViInt64.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetAttributeViInt64(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.GetAttributeViInt64(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue)
{
  if (!function_pointers_.GetAttributeViReal64) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetAttributeViReal64.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetAttributeViReal64(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.GetAttributeViReal64(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[])
{
  if (!function_pointers_.GetAttributeViString) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetAttributeViString.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetAttributeViString(vi, channelName, attributeId, bufferSize, attributeValue);
#else
  return function_pointers_.GetAttributeViString(vi, channelName, attributeId, bufferSize, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelName[])
{
  if (!function_pointers_.GetChannelName) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetChannelName.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetChannelName(vi, index, bufferSize, channelName);
#else
  return function_pointers_.GetChannelName(vi, index, bufferSize, channelName);
#endif
}

ViStatus NiDCPowerLibrary::GetError(ViSession vi, ViStatus* code, ViInt32 bufferSize, ViChar description[])
{
  if (!function_pointers_.GetError) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetError.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetError(vi, code, bufferSize, description);
#else
  return function_pointers_.GetError(vi, code, bufferSize, description);
#endif
}

ViStatus NiDCPowerLibrary::GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute)
{
  if (!function_pointers_.GetExtCalLastDateAndTime) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetExtCalLastDateAndTime.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetExtCalLastDateAndTime(vi, year, month, day, hour, minute);
#else
  return function_pointers_.GetExtCalLastDateAndTime(vi, year, month, day, hour, minute);
#endif
}

ViStatus NiDCPowerLibrary::GetExtCalLastTemp(ViSession vi, ViReal64* temperature)
{
  if (!function_pointers_.GetExtCalLastTemp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetExtCalLastTemp.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetExtCalLastTemp(vi, temperature);
#else
  return function_pointers_.GetExtCalLastTemp(vi, temperature);
#endif
}

ViStatus NiDCPowerLibrary::GetExtCalRecommendedInterval(ViSession vi, ViInt32* months)
{
  if (!function_pointers_.GetExtCalRecommendedInterval) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetExtCalRecommendedInterval.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetExtCalRecommendedInterval(vi, months);
#else
  return function_pointers_.GetExtCalRecommendedInterval(vi, months);
#endif
}

ViStatus NiDCPowerLibrary::GetSelfCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute)
{
  if (!function_pointers_.GetSelfCalLastDateAndTime) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetSelfCalLastDateAndTime.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetSelfCalLastDateAndTime(vi, year, month, day, hour, minute);
#else
  return function_pointers_.GetSelfCalLastDateAndTime(vi, year, month, day, hour, minute);
#endif
}

ViStatus NiDCPowerLibrary::GetSelfCalLastTemp(ViSession vi, ViReal64* temperature)
{
  if (!function_pointers_.GetSelfCalLastTemp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_GetSelfCalLastTemp.");
  }
#if defined(_MSC_VER)
  return niDCPower_GetSelfCalLastTemp(vi, temperature);
#else
  return function_pointers_.GetSelfCalLastTemp(vi, temperature);
#endif
}

ViStatus NiDCPowerLibrary::ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[])
{
  if (!function_pointers_.ImportAttributeConfigurationBuffer) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_ImportAttributeConfigurationBuffer.");
  }
#if defined(_MSC_VER)
  return niDCPower_ImportAttributeConfigurationBuffer(vi, size, configuration);
#else
  return function_pointers_.ImportAttributeConfigurationBuffer(vi, size, configuration);
#endif
}

ViStatus NiDCPowerLibrary::ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath)
{
  if (!function_pointers_.ImportAttributeConfigurationFile) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_ImportAttributeConfigurationFile.");
  }
#if defined(_MSC_VER)
  return niDCPower_ImportAttributeConfigurationFile(vi, filePath);
#else
  return function_pointers_.ImportAttributeConfigurationFile(vi, filePath);
#endif
}

ViStatus NiDCPowerLibrary::InitializeWithChannels(ViRsrc resourceName, ViConstString channels, ViBoolean reset, ViConstString optionString, ViSession* vi)
{
  if (!function_pointers_.InitializeWithChannels) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_InitializeWithChannels.");
  }
#if defined(_MSC_VER)
  return niDCPower_InitializeWithChannels(resourceName, channels, reset, optionString, vi);
#else
  return function_pointers_.InitializeWithChannels(resourceName, channels, reset, optionString, vi);
#endif
}

ViStatus NiDCPowerLibrary::Initiate(ViSession vi)
{
  if (!function_pointers_.Initiate) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_Initiate.");
  }
#if defined(_MSC_VER)
  return niDCPower_Initiate(vi);
#else
  return function_pointers_.Initiate(vi);
#endif
}

ViStatus NiDCPowerLibrary::LockSession(ViSession vi, ViBoolean* callerHasLock)
{
  if (!function_pointers_.LockSession) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_LockSession.");
  }
#if defined(_MSC_VER)
  return niDCPower_LockSession(vi, callerHasLock);
#else
  return function_pointers_.LockSession(vi, callerHasLock);
#endif
}

ViStatus NiDCPowerLibrary::Measure(ViSession vi, ViConstString channelName, ViInt32 measurementType, ViReal64* measurement)
{
  if (!function_pointers_.Measure) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_Measure.");
  }
#if defined(_MSC_VER)
  return niDCPower_Measure(vi, channelName, measurementType, measurement);
#else
  return function_pointers_.Measure(vi, channelName, measurementType, measurement);
#endif
}

ViStatus NiDCPowerLibrary::MeasureMultiple(ViSession vi, ViConstString channelName, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[])
{
  if (!function_pointers_.MeasureMultiple) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_MeasureMultiple.");
  }
#if defined(_MSC_VER)
  return niDCPower_MeasureMultiple(vi, channelName, voltageMeasurements, currentMeasurements);
#else
  return function_pointers_.MeasureMultiple(vi, channelName, voltageMeasurements, currentMeasurements);
#endif
}

ViStatus NiDCPowerLibrary::QueryInCompliance(ViSession vi, ViConstString channelName, ViBoolean* inCompliance)
{
  if (!function_pointers_.QueryInCompliance) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_QueryInCompliance.");
  }
#if defined(_MSC_VER)
  return niDCPower_QueryInCompliance(vi, channelName, inCompliance);
#else
  return function_pointers_.QueryInCompliance(vi, channelName, inCompliance);
#endif
}

ViStatus NiDCPowerLibrary::QueryMaxCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* maxCurrentLimit)
{
  if (!function_pointers_.QueryMaxCurrentLimit) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_QueryMaxCurrentLimit.");
  }
#if defined(_MSC_VER)
  return niDCPower_QueryMaxCurrentLimit(vi, channelName, voltageLevel, maxCurrentLimit);
#else
  return function_pointers_.QueryMaxCurrentLimit(vi, channelName, voltageLevel, maxCurrentLimit);
#endif
}

ViStatus NiDCPowerLibrary::QueryMaxVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 currentLimit, ViReal64* maxVoltageLevel)
{
  if (!function_pointers_.QueryMaxVoltageLevel) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_QueryMaxVoltageLevel.");
  }
#if defined(_MSC_VER)
  return niDCPower_QueryMaxVoltageLevel(vi, channelName, currentLimit, maxVoltageLevel);
#else
  return function_pointers_.QueryMaxVoltageLevel(vi, channelName, currentLimit, maxVoltageLevel);
#endif
}

ViStatus NiDCPowerLibrary::QueryMinCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* minCurrentLimit)
{
  if (!function_pointers_.QueryMinCurrentLimit) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_QueryMinCurrentLimit.");
  }
#if defined(_MSC_VER)
  return niDCPower_QueryMinCurrentLimit(vi, channelName, voltageLevel, minCurrentLimit);
#else
  return function_pointers_.QueryMinCurrentLimit(vi, channelName, voltageLevel, minCurrentLimit);
#endif
}

ViStatus NiDCPowerLibrary::QueryOutputState(ViSession vi, ViConstString channelName, ViInt32 outputState, ViBoolean* inState)
{
  if (!function_pointers_.QueryOutputState) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_QueryOutputState.");
  }
#if defined(_MSC_VER)
  return niDCPower_QueryOutputState(vi, channelName, outputState, inState);
#else
  return function_pointers_.QueryOutputState(vi, channelName, outputState, inState);
#endif
}

ViStatus NiDCPowerLibrary::ReadCurrentTemperature(ViSession vi, ViReal64* temperature)
{
  if (!function_pointers_.ReadCurrentTemperature) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_ReadCurrentTemperature.");
  }
#if defined(_MSC_VER)
  return niDCPower_ReadCurrentTemperature(vi, temperature);
#else
  return function_pointers_.ReadCurrentTemperature(vi, temperature);
#endif
}

ViStatus NiDCPowerLibrary::ResetDevice(ViSession vi)
{
  if (!function_pointers_.ResetDevice) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_ResetDevice.");
  }
#if defined(_MSC_VER)
  return niDCPower_ResetDevice(vi);
#else
  return function_pointers_.ResetDevice(vi);
#endif
}

ViStatus NiDCPowerLibrary::ResetWithDefaults(ViSession vi)
{
  if (!function_pointers_.ResetWithDefaults) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_ResetWithDefaults.");
  }
#if defined(_MSC_VER)
  return niDCPower_ResetWithDefaults(vi);
#else
  return function_pointers_.ResetWithDefaults(vi);
#endif
}

ViStatus NiDCPowerLibrary::SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger)
{
  if (!function_pointers_.SendSoftwareEdgeTrigger) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_SendSoftwareEdgeTrigger.");
  }
#if defined(_MSC_VER)
  return niDCPower_SendSoftwareEdgeTrigger(vi, trigger);
#else
  return function_pointers_.SendSoftwareEdgeTrigger(vi, trigger);
#endif
}

ViStatus NiDCPowerLibrary::SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue)
{
  if (!function_pointers_.SetAttributeViBoolean) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_SetAttributeViBoolean.");
  }
#if defined(_MSC_VER)
  return niDCPower_SetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViBoolean(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue)
{
  if (!function_pointers_.SetAttributeViInt32) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_SetAttributeViInt32.");
  }
#if defined(_MSC_VER)
  return niDCPower_SetAttributeViInt32(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViInt32(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue)
{
  if (!function_pointers_.SetAttributeViInt64) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_SetAttributeViInt64.");
  }
#if defined(_MSC_VER)
  return niDCPower_SetAttributeViInt64(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViInt64(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue)
{
  if (!function_pointers_.SetAttributeViReal64) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_SetAttributeViReal64.");
  }
#if defined(_MSC_VER)
  return niDCPower_SetAttributeViReal64(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViReal64(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue)
{
  if (!function_pointers_.SetAttributeViString) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_SetAttributeViString.");
  }
#if defined(_MSC_VER)
  return niDCPower_SetAttributeViString(vi, channelName, attributeId, attributeValue);
#else
  return function_pointers_.SetAttributeViString(vi, channelName, attributeId, attributeValue);
#endif
}

ViStatus NiDCPowerLibrary::SetSequence(ViSession vi, ViConstString channelName, ViReal64 values[], ViReal64 sourceDelays[], ViUInt32 size)
{
  if (!function_pointers_.SetSequence) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_SetSequence.");
  }
#if defined(_MSC_VER)
  return niDCPower_SetSequence(vi, channelName, values, sourceDelays, size);
#else
  return function_pointers_.SetSequence(vi, channelName, values, sourceDelays, size);
#endif
}

ViStatus NiDCPowerLibrary::UnlockSession(ViSession vi, ViBoolean* callerHasLock)
{
  if (!function_pointers_.UnlockSession) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_UnlockSession.");
  }
#if defined(_MSC_VER)
  return niDCPower_UnlockSession(vi, callerHasLock);
#else
  return function_pointers_.UnlockSession(vi, callerHasLock);
#endif
}

ViStatus NiDCPowerLibrary::WaitForEvent(ViSession vi, ViInt32 eventId, ViReal64 timeout)
{
  if (!function_pointers_.WaitForEvent) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_WaitForEvent.");
  }
#if defined(_MSC_VER)
  return niDCPower_WaitForEvent(vi, eventId, timeout);
#else
  return function_pointers_.WaitForEvent(vi, eventId, timeout);
#endif
}

ViStatus NiDCPowerLibrary::close(ViSession vi)
{
  if (!function_pointers_.close) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_close.");
  }
#if defined(_MSC_VER)
  return niDCPower_close(vi);
#else
  return function_pointers_.close(vi);
#endif
}

ViStatus NiDCPowerLibrary::error_message(ViSession vi, ViStatus errorCode, ViChar errorMessage[256])
{
  if (!function_pointers_.error_message) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_error_message.");
  }
#if defined(_MSC_VER)
  return niDCPower_error_message(vi, errorCode, errorMessage);
#else
  return function_pointers_.error_message(vi, errorCode, errorMessage);
#endif
}

ViStatus NiDCPowerLibrary::self_test(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256])
{
  if (!function_pointers_.self_test) {
    throw nidevice_grpc::LibraryLoadException("Could not find niDCPower_self_test.");
  }
#if defined(_MSC_VER)
  return niDCPower_self_test(vi, selfTestResult, selfTestMessage);
#else
  return function_pointers_.self_test(vi, selfTestResult, selfTestMessage);
#endif
}

}  // namespace nidcpower_grpc
