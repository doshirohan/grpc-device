//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-DCPower
//---------------------------------------------------------------------
#ifndef NIDCPOWER_GRPC_MOCK_LIBRARY_H
#define NIDCPOWER_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nidcpower_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiDCPowerMockLibrary : public nidcpower_grpc::NiDCPowerLibraryInterface {
 public:
  MOCK_METHOD(ViStatus, Abort, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, CalSelfCalibrate, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, Commit, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureApertureTime, (ViSession vi, ViConstString channelName, ViReal64 apertureTime, ViInt32 units), (override));
  MOCK_METHOD(ViStatus, CreateAdvancedSequenceStep, (ViSession vi, ViBoolean setAsActiveStep), (override));
  MOCK_METHOD(ViStatus, DeleteAdvancedSequence, (ViSession vi, ViConstString sequenceName), (override));
  MOCK_METHOD(ViStatus, Disable, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationBuffer, (ViSession vi, ViInt32 size, ViInt8 configuration[]), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationFile, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, FetchMultiple, (ViSession vi, ViConstString channelName, ViReal64 timeout, ViInt32 count, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[], ViBoolean inCompliance[], ViInt32* actualCount), (override));
  MOCK_METHOD(ViStatus, GetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]), (override));
  MOCK_METHOD(ViStatus, GetChannelName, (ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelName[]), (override));
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* code, ViInt32 bufferSize, ViChar description[]), (override));
  MOCK_METHOD(ViStatus, GetExtCalLastDateAndTime, (ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute), (override));
  MOCK_METHOD(ViStatus, GetExtCalLastTemp, (ViSession vi, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, GetExtCalRecommendedInterval, (ViSession vi, ViInt32* months), (override));
  MOCK_METHOD(ViStatus, GetSelfCalLastDateAndTime, (ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute), (override));
  MOCK_METHOD(ViStatus, GetSelfCalLastTemp, (ViSession vi, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationBuffer, (ViSession vi, ViInt32 size, ViInt8 configuration[]), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationFile, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, InitializeWithChannels, (ViRsrc resourceName, ViConstString channels, ViBoolean reset, ViConstString optionString, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, Initiate, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, LockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, Measure, (ViSession vi, ViConstString channelName, ViInt32 measurementType, ViReal64* measurement), (override));
  MOCK_METHOD(ViStatus, MeasureMultiple, (ViSession vi, ViConstString channelName, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[]), (override));
  MOCK_METHOD(ViStatus, QueryInCompliance, (ViSession vi, ViConstString channelName, ViBoolean* inCompliance), (override));
  MOCK_METHOD(ViStatus, QueryMaxCurrentLimit, (ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* maxCurrentLimit), (override));
  MOCK_METHOD(ViStatus, QueryMaxVoltageLevel, (ViSession vi, ViConstString channelName, ViReal64 currentLimit, ViReal64* maxVoltageLevel), (override));
  MOCK_METHOD(ViStatus, QueryMinCurrentLimit, (ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* minCurrentLimit), (override));
  MOCK_METHOD(ViStatus, QueryOutputState, (ViSession vi, ViConstString channelName, ViInt32 outputState, ViBoolean* inState), (override));
  MOCK_METHOD(ViStatus, ReadCurrentTemperature, (ViSession vi, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, ResetDevice, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetWithDefaults, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SendSoftwareEdgeTrigger, (ViSession vi, ViInt32 trigger), (override));
  MOCK_METHOD(ViStatus, SetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue), (override));
  MOCK_METHOD(ViStatus, SetSequence, (ViSession vi, ViConstString channelName, ViReal64 values[], ViReal64 sourceDelays[], ViUInt32 size), (override));
  MOCK_METHOD(ViStatus, UnlockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, WaitForEvent, (ViSession vi, ViInt32 eventId, ViReal64 timeout), (override));
  MOCK_METHOD(ViStatus, close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, error_message, (ViSession vi, ViStatus errorCode, ViChar errorMessage[256]), (override));
  MOCK_METHOD(ViStatus, reset, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, self_test, (ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIDCPOWER_GRPC_MOCK_LIBRARY_H
