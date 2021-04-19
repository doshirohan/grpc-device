//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-DMM
//---------------------------------------------------------------------
#ifndef NIDMM_GRPC_MOCK_LIBRARY_H
#define NIDMM_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nidmm_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiDMMMockLibrary : public nidmm_grpc::NiDMMLibraryInterface {
 public:
  MOCK_METHOD(ViStatus, Abort, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, CalAdjustGain, (ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 inputResistance, ViReal64 expectedValue), (override));
  MOCK_METHOD(ViStatus, CalAdjustACFilter, (ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 frequency, ViReal64 expectedValue), (override));
  MOCK_METHOD(ViStatus, CalAdjustLC, (ViSession vi, ViInt32 type), (override));
  MOCK_METHOD(ViStatus, CalAdjustLinearization, (ViSession vi, ViInt32 function, ViReal64 range, ViReal64 inputResistance, ViReal64 expectedValue), (override));
  MOCK_METHOD(ViStatus, CalAdjustMisc, (ViSession vi, ViInt32 type), (override));
  MOCK_METHOD(ViStatus, CalAdjustOffset, (ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 inputResistance), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue), (override));
  MOCK_METHOD(ViStatus, ClearError, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ClearInterchangeWarnings, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, Close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, CloseExtCal, (ViSession vi, ViInt32 action), (override));
  MOCK_METHOD(ViStatus, ConfigureACBandwidth, (ViSession vi, ViReal64 acMinimumFrequencyHz, ViReal64 acMaximumFrequencyHz), (override));
  MOCK_METHOD(ViStatus, ConfigureADCCalibration, (ViSession vi, ViInt32 adcCalibration), (override));
  MOCK_METHOD(ViStatus, ConfigureAutoZeroMode, (ViSession vi, ViInt32 autoZeroMode), (override));
  MOCK_METHOD(ViStatus, ConfigureCableCompType, (ViSession vi, ViInt32 cableCompType), (override));
  MOCK_METHOD(ViStatus, ConfigureCurrentSource, (ViSession vi, ViReal64 currentSource), (override));
  MOCK_METHOD(ViStatus, ConfigureFixedRefJunction, (ViSession vi, ViReal64 fixedReferenceJunction), (override));
  MOCK_METHOD(ViStatus, ConfigureFrequencyVoltageRange, (ViSession vi, ViReal64 voltageRange), (override));
  MOCK_METHOD(ViStatus, ConfigureMeasCompleteDest, (ViSession vi, ViInt32 measCompleteDestination), (override));
  MOCK_METHOD(ViStatus, ConfigureMeasurementAbsolute, (ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionAbsolute), (override));
  MOCK_METHOD(ViStatus, ConfigureMeasCompleteSlope, (ViSession vi, ViInt32 measCompleteSlope), (override));
  MOCK_METHOD(ViStatus, ConfigureMeasurementDigits, (ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionDigits), (override));
  MOCK_METHOD(ViStatus, ConfigureMultiPoint, (ViSession vi, ViInt32 triggerCount, ViInt32 sampleCount, ViInt32 sampleTrigger, ViReal64 sampleInterval), (override));
  MOCK_METHOD(ViStatus, ConfigureOffsetCompOhms, (ViSession vi, ViInt32 offsetCompOhms), (override));
  MOCK_METHOD(ViStatus, ConfigureOpenCableCompValues, (ViSession vi, ViReal64 conductance, ViReal64 susceptance), (override));
  MOCK_METHOD(ViStatus, ConfigurePowerLineFrequency, (ViSession vi, ViReal64 powerLineFrequencyHz), (override));
  MOCK_METHOD(ViStatus, ConfigureRTDCustom, (ViSession vi, ViReal64 rtdA, ViReal64 rtdB, ViReal64 rtdC), (override));
  MOCK_METHOD(ViStatus, ConfigureRTDType, (ViSession vi, ViInt32 rtdType, ViReal64 rtdResistance), (override));
  MOCK_METHOD(ViStatus, ConfigureSampleTriggerSlope, (ViSession vi, ViInt32 sampleTriggerSlope), (override));
  MOCK_METHOD(ViStatus, ConfigureThermistorCustom, (ViSession vi, ViReal64 thermistorA, ViReal64 thermistorB, ViReal64 thermistorC), (override));
  MOCK_METHOD(ViStatus, ConfigureThermocouple, (ViSession vi, ViInt32 thermocoupleType, ViInt32 referenceJunctionType), (override));
  MOCK_METHOD(ViStatus, ConfigureThermistorType, (ViSession vi, ViInt32 thermistorType), (override));
  MOCK_METHOD(ViStatus, ConfigureTransducerType, (ViSession vi, ViInt32 transducerType), (override));
  MOCK_METHOD(ViStatus, ConfigureTrigger, (ViSession vi, ViInt32 triggerSource, ViReal64 triggerDelay), (override));
  MOCK_METHOD(ViStatus, ConfigureTriggerSlope, (ViSession vi, ViInt32 triggerSlope), (override));
  MOCK_METHOD(ViStatus, ConfigureWaveformAcquisition, (ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 rate, ViInt32 waveformPoints), (override));
  MOCK_METHOD(ViStatus, ConfigureWaveformCoupling, (ViSession vi, ViInt32 waveformCoupling), (override));
  MOCK_METHOD(ViStatus, Control, (ViSession vi, ViInt32 controlAction), (override));
  MOCK_METHOD(ViStatus, Disable, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationBuffer, (ViSession vi, ViInt32 size, ViInt8 configuration[]), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationFile, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, Fetch, (ViSession vi, ViInt32 maximumTime, ViReal64* reading), (override));
  MOCK_METHOD(ViStatus, FetchMultiPoint, (ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints), (override));
  MOCK_METHOD(ViStatus, FetchWaveform, (ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints), (override));
  MOCK_METHOD(ViStatus, GetApertureTimeInfo, (ViSession vi, ViReal64* apertureTime, ViInt32* apertureTimeUnits), (override));
  MOCK_METHOD(ViStatus, GetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]), (override));
  MOCK_METHOD(ViStatus, GetAutoRangeValue, (ViSession vi, ViReal64* actualRange), (override));
  MOCK_METHOD(ViStatus, GetCalCount, (ViSession vi, ViInt32 calType, ViInt32* count), (override));
  MOCK_METHOD(ViStatus, GetCalDateAndTime, (ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute), (override));
  MOCK_METHOD(ViStatus, GetCalUserDefinedInfo, (ViSession vi, ViInt32 bufferSize, ViChar info[256]), (override));
  MOCK_METHOD(ViStatus, GetCalUserDefinedInfoMaxSize, (ViSession vi, ViInt32* infoSize), (override));
  MOCK_METHOD(ViStatus, GetDevTemp, (ViSession vi, ViString options, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]), (override));
  MOCK_METHOD(ViStatus, GetErrorMessage, (ViSession vi, ViStatus errorCode, ViInt32 bufferSize, ViChar errorMessage[]), (override));
  MOCK_METHOD(ViStatus, GetExtCalRecommendedInterval, (ViSession vi, ViInt32* months), (override));
  MOCK_METHOD(ViStatus, GetLastCalTemp, (ViSession vi, ViInt32 calType, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, GetMeasurementPeriod, (ViSession vi, ViReal64* period), (override));
  MOCK_METHOD(ViStatus, GetSelfCalSupported, (ViSession vi, ViBoolean* selfCalSupported), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationBuffer, (ViSession vi, ViInt32 size, ViInt8 configuration[]), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationFile, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, Init, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, InitWithOptions, (ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViString optionString, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, Initiate, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, InvalidateAllAttributes, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, IsOverRange, (ViSession vi, ViReal64 measurementValue, ViBoolean* isOverRange), (override));
  MOCK_METHOD(ViStatus, IsUnderRange, (ViSession vi, ViReal64 measurementValue, ViBoolean* isUnderRange), (override));
  MOCK_METHOD(ViStatus, LockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, PerformOpenCableComp, (ViSession vi, ViReal64* conductance, ViReal64* susceptance), (override));
  MOCK_METHOD(ViStatus, PerformShortCableComp, (ViSession vi, ViReal64* resistance, ViReal64* reactance), (override));
  MOCK_METHOD(ViStatus, Read, (ViSession vi, ViInt32 maximumTime, ViReal64* reading), (override));
  MOCK_METHOD(ViStatus, ReadMultiPoint, (ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints), (override));
  MOCK_METHOD(ViStatus, ReadStatus, (ViSession vi, ViInt32* acquisitionBacklog, ViInt16* acquisitionStatus), (override));
  MOCK_METHOD(ViStatus, ReadWaveform, (ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints), (override));
  MOCK_METHOD(ViStatus, Reset, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetInterchangeCheck, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetWithDefaults, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, RestoreLastExtCalConstants, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SelfCal, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SelfTest, (ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]), (override));
  MOCK_METHOD(ViStatus, SendSoftwareTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViString attributeValue), (override));
  MOCK_METHOD(ViStatus, UnlockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIDMM_GRPC_MOCK_LIBRARY_H
