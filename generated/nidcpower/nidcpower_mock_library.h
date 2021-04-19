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
  MOCK_METHOD(ViStatus, AbortWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, CommitWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeMeasureTriggerWithChannels, (ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgePulseTriggerWithChannels, (ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannels, (ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeShutdownTriggerWithChannels, (ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeSourceTriggerWithChannels, (ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeStartTriggerWithChannels, (ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureOvp, (ViSession vi, ViConstString channelName, ViBoolean enabled, ViReal64 limit), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeMeasureTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgePulseTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeShutdownTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeSourceTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeStartTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ConfigureSourceModeWithChannels, (ViSession vi, ViConstString channelName, ViInt32 sourceMode), (override));
  MOCK_METHOD(ViStatus, CreateAdvancedSequenceCommitStepWithChannels, (ViSession vi, ViConstString channelName, ViBoolean setAsActiveStep), (override));
  MOCK_METHOD(ViStatus, CreateAdvancedSequenceStepWithChannels, (ViSession vi, ViConstString channelName, ViBoolean setAsActiveStep), (override));
  MOCK_METHOD(ViStatus, CreateAdvancedSequenceWithChannels, (ViSession vi, ViConstString channelName, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence), (override));
  MOCK_METHOD(ViStatus, CreateAdvancedSequence, (ViSession vi, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence), (override));
  MOCK_METHOD(ViStatus, DeleteAdvancedSequenceWithChannels, (ViSession vi, ViConstString channelName, ViConstString sequenceName), (override));
  MOCK_METHOD(ViStatus, DisablePulseTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, DisableSequenceAdvanceTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, DisableShutdownTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, DisableSourceTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, DisableStartTriggerWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ErrorQuery, (ViSession vi, ViInt32* errorCode, ViChar errorMessage[256]), (override));
  MOCK_METHOD(ViStatus, ExportSignalWithChannels, (ViSession vi, ViConstString channelName, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal), (override));
  MOCK_METHOD(ViStatus, InitializeWithIndependentChannels, (ViRsrc resourceName, ViBoolean reset, ViConstString optionString, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, InitiateWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, InvalidateAllAttributes, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetWithChannels, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, SendSoftwareEdgeTriggerWithChannels, (ViSession vi, ViConstString channelName, ViInt32 trigger), (override));
  MOCK_METHOD(ViStatus, WaitForEventWithChannels, (ViSession vi, ViConstString channelName, ViInt32 eventId, ViReal64 timeout), (override));
  MOCK_METHOD(ViStatus, Abort, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, CalAdjustCurrentLimit, (ViSession vi, ViConstString channelName, ViReal64 range, ViUInt32 numberOfMeasurements, ViReal64 requestedOutputs[], ViReal64 measuredOutputs[]), (override));
  MOCK_METHOD(ViStatus, CalAdjustCurrentMeasurement, (ViSession vi, ViConstString channelName, ViReal64 range, ViUInt32 numberOfMeasurements, ViReal64 reportedOutputs[], ViReal64 measuredOutputs[]), (override));
  MOCK_METHOD(ViStatus, CalAdjustInternalReference, (ViSession vi, ViInt32 internalReference, ViReal64 adjustedInternalReference), (override));
  MOCK_METHOD(ViStatus, CalAdjustOutputResistance, (ViSession vi, ViConstString channelName, ViUInt32 numberOfMeasurements, ViReal64 requestedOutputs[], ViReal64 measuredOutputs[]), (override));
  MOCK_METHOD(ViStatus, CalAdjustResidualCurrentOffset, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, CalAdjustResidualVoltageOffset, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, CalAdjustVoltageLevel, (ViSession vi, ViConstString channelName, ViReal64 range, ViUInt32 numberOfMeasurements, ViReal64 requestedOutputs[], ViReal64 measuredOutputs[]), (override));
  MOCK_METHOD(ViStatus, CalAdjustVoltageMeasurement, (ViSession vi, ViConstString channelName, ViReal64 range, ViUInt32 numberOfMeasurements, ViReal64 reportedOutputs[], ViReal64 measuredOutputs[]), (override));
  MOCK_METHOD(ViStatus, CalSelfCalibrate, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ChangeExtCalPassword, (ViSession vi, ViConstString oldPassword, ViConstString newPassword), (override));
  MOCK_METHOD(ViStatus, ClearError, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ClearInterchangeWarnings, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, Close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, CloseExtCal, (ViSession vi, ViInt32 action), (override));
  MOCK_METHOD(ViStatus, Commit, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureApertureTime, (ViSession vi, ViConstString channelName, ViReal64 apertureTime, ViInt32 units), (override));
  MOCK_METHOD(ViStatus, ConfigureAutoZero, (ViSession vi, ViConstString channelName, ViInt32 autoZero), (override));
  MOCK_METHOD(ViStatus, ConfigureCurrentLevel, (ViSession vi, ViConstString channelName, ViReal64 level), (override));
  MOCK_METHOD(ViStatus, ConfigureCurrentLevelRange, (ViSession vi, ViConstString channelName, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, ConfigureCurrentLimit, (ViSession vi, ViConstString channelName, ViInt32 behavior, ViReal64 limit), (override));
  MOCK_METHOD(ViStatus, ConfigureCurrentLimitRange, (ViSession vi, ViConstString channelName, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeMeasureTrigger, (ViSession vi, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgePulseTrigger, (ViSession vi, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeSequenceAdvanceTrigger, (ViSession vi, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeSourceTrigger, (ViSession vi, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeStartTrigger, (ViSession vi, ViConstString inputTerminal, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureOutputEnabled, (ViSession vi, ViConstString channelName, ViBoolean enabled), (override));
  MOCK_METHOD(ViStatus, ConfigureOutputFunction, (ViSession vi, ViConstString channelName, ViInt32 function), (override));
  MOCK_METHOD(ViStatus, ConfigureOutputResistance, (ViSession vi, ViConstString channelName, ViReal64 resistance), (override));
  MOCK_METHOD(ViStatus, ConfigurePowerLineFrequency, (ViSession vi, ViReal64 powerlineFrequency), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseBiasCurrentLevel, (ViSession vi, ViConstString channelName, ViReal64 level), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseBiasCurrentLimit, (ViSession vi, ViConstString channelName, ViReal64 limit), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseBiasVoltageLevel, (ViSession vi, ViConstString channelName, ViReal64 level), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseBiasVoltageLimit, (ViSession vi, ViConstString channelName, ViReal64 limit), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseCurrentLevel, (ViSession vi, ViConstString channelName, ViReal64 level), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseCurrentLevelRange, (ViSession vi, ViConstString channelName, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseCurrentLimit, (ViSession vi, ViConstString channelName, ViReal64 limit), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseCurrentLimitRange, (ViSession vi, ViConstString channelName, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseVoltageLevel, (ViSession vi, ViConstString channelName, ViReal64 level), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseVoltageLevelRange, (ViSession vi, ViConstString channelName, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseVoltageLimit, (ViSession vi, ViConstString channelName, ViReal64 limit), (override));
  MOCK_METHOD(ViStatus, ConfigurePulseVoltageLimitRange, (ViSession vi, ViConstString channelName, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, ConfigureSense, (ViSession vi, ViConstString channelName, ViInt32 sense), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeMeasureTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgePulseTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeSequenceAdvanceTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeSourceTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeStartTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureSourceMode, (ViSession vi, ViInt32 sourceMode), (override));
  MOCK_METHOD(ViStatus, ConfigureVoltageLevel, (ViSession vi, ViConstString channelName, ViReal64 level), (override));
  MOCK_METHOD(ViStatus, ConfigureVoltageLevelRange, (ViSession vi, ViConstString channelName, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, ConfigureVoltageLimit, (ViSession vi, ViConstString channelName, ViReal64 limit), (override));
  MOCK_METHOD(ViStatus, ConfigureVoltageLimitRange, (ViSession vi, ViConstString channelName, ViReal64 range), (override));
  MOCK_METHOD(ViStatus, ConnectInternalReference, (ViSession vi, ViInt32 internalReference), (override));
  MOCK_METHOD(ViStatus, CreateAdvancedSequenceStep, (ViSession vi, ViBoolean setAsActiveStep), (override));
  MOCK_METHOD(ViStatus, DeleteAdvancedSequence, (ViSession vi, ViConstString sequenceName), (override));
  MOCK_METHOD(ViStatus, Disable, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisablePulseTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisableSequenceAdvanceTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisableSourceTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisableStartTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ErrorMessage, (ViSession vi, ViStatus errorCode, ViChar errorMessage[256]), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationBuffer, (ViSession vi, ViInt32 size, ViAddr configuration[]), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationFile, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, ExportSignal, (ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal), (override));
  MOCK_METHOD(ViStatus, FetchMultiple, (ViSession vi, ViConstString channelName, ViReal64 timeout, ViInt32 count, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[], ViBoolean inCompliance[], ViInt32* actualCount), (override));
  MOCK_METHOD(ViStatus, GetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]), (override));
  MOCK_METHOD(ViStatus, GetCalUserDefinedInfo, (ViSession vi, ViChar info[256]), (override));
  MOCK_METHOD(ViStatus, GetCalUserDefinedInfoMaxSize, (ViSession vi, ViInt32* infoSize), (override));
  MOCK_METHOD(ViStatus, GetChannelName, (ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelName[]), (override));
  MOCK_METHOD(ViStatus, GetChannelNameFromString, (ViSession vi, ViConstString index, ViInt32 bufferSize, ViChar channelName[]), (override));
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* code, ViInt32 bufferSize, ViChar description[]), (override));
  MOCK_METHOD(ViStatus, GetExtCalLastDateAndTime, (ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute), (override));
  MOCK_METHOD(ViStatus, GetExtCalLastTemp, (ViSession vi, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, GetExtCalRecommendedInterval, (ViSession vi, ViInt32* months), (override));
  MOCK_METHOD(ViStatus, GetNextCoercionRecord, (ViSession vi, ViInt32 bufferSize, ViChar coercionRecord[]), (override));
  MOCK_METHOD(ViStatus, GetNextInterchangeWarning, (ViSession vi, ViInt32 bufferSize, ViChar interchangeWarning[]), (override));
  MOCK_METHOD(ViStatus, GetSelfCalLastDateAndTime, (ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute), (override));
  MOCK_METHOD(ViStatus, GetSelfCalLastTemp, (ViSession vi, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationBuffer, (ViSession vi, ViInt32 size, ViAddr configuration[]), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationFile, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, InitExtCal, (ViRsrc resourceName, ViConstString password, ViSession* vi), (override));
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
  MOCK_METHOD(ViStatus, Reset, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetDevice, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetInterchangeCheck, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetWithDefaults, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, RevisionQuery, (ViSession vi, ViChar instrumentDriverRevision[256], ViChar firmwareRevision[256]), (override));
  MOCK_METHOD(ViStatus, SelfTest, (ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]), (override));
  MOCK_METHOD(ViStatus, SendSoftwareEdgeTrigger, (ViSession vi, ViInt32 trigger), (override));
  MOCK_METHOD(ViStatus, SetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue), (override));
  MOCK_METHOD(ViStatus, SetCalUserDefinedInfo, (ViSession vi, ViConstString info), (override));
  MOCK_METHOD(ViStatus, SetSequence, (ViSession vi, ViConstString channelName, ViReal64 values[], ViReal64 sourceDelays[], ViUInt32 size), (override));
  MOCK_METHOD(ViStatus, UnlockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, WaitForEvent, (ViSession vi, ViInt32 eventId, ViReal64 timeout), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIDCPOWER_GRPC_MOCK_LIBRARY_H
