//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-DCPower
//---------------------------------------------------------------------
#ifndef NIDCPOWER_GRPC_LIBRARY_H
#define NIDCPOWER_GRPC_LIBRARY_H

#include "nidcpower_library_interface.h"

#include <server/shared_library.h>

namespace nidcpower_grpc {

class NiDCPowerLibrary : public nidcpower_grpc::NiDCPowerLibraryInterface {
 public:
  NiDCPowerLibrary();
  virtual ~NiDCPowerLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus AbortWithChannels(ViSession vi, ViConstString channelName);
  ViStatus CommitWithChannels(ViSession vi, ViConstString channelName);
  ViStatus ConfigureDigitalEdgeMeasureTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgePulseTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeShutdownTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeSourceTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeStartTriggerWithChannels(ViSession vi, ViConstString channelName, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureOvp(ViSession vi, ViConstString channelName, ViBoolean enabled, ViReal64 limit);
  ViStatus ConfigureSoftwareEdgeMeasureTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus ConfigureSoftwareEdgePulseTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus ConfigureSoftwareEdgeShutdownTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus ConfigureSoftwareEdgeSourceTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus ConfigureSoftwareEdgeStartTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus ConfigureSourceModeWithChannels(ViSession vi, ViConstString channelName, ViInt32 sourceMode);
  ViStatus CreateAdvancedSequenceCommitStepWithChannels(ViSession vi, ViConstString channelName, ViBoolean setAsActiveStep);
  ViStatus CreateAdvancedSequenceStepWithChannels(ViSession vi, ViConstString channelName, ViBoolean setAsActiveStep);
  ViStatus CreateAdvancedSequenceWithChannels(ViSession vi, ViConstString channelName, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence);
  ViStatus CreateAdvancedSequence(ViSession vi, ViConstString sequenceName, ViInt32 attributeIdCount, ViInt32 attributeIds[], ViBoolean setAsActiveSequence);
  ViStatus DeleteAdvancedSequenceWithChannels(ViSession vi, ViConstString channelName, ViConstString sequenceName);
  ViStatus DisablePulseTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus DisableSequenceAdvanceTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus DisableShutdownTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus DisableSourceTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus DisableStartTriggerWithChannels(ViSession vi, ViConstString channelName);
  ViStatus ErrorQuery(ViSession vi, ViInt32* errorCode, ViChar errorMessage[256]);
  ViStatus ExportSignalWithChannels(ViSession vi, ViConstString channelName, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  ViStatus InitializeWithIndependentChannels(ViRsrc resourceName, ViBoolean reset, ViConstString optionString, ViSession* vi);
  ViStatus InitiateWithChannels(ViSession vi, ViConstString channelName);
  ViStatus InvalidateAllAttributes(ViSession vi);
  ViStatus ResetWithChannels(ViSession vi, ViConstString channelName);
  ViStatus SendSoftwareEdgeTriggerWithChannels(ViSession vi, ViConstString channelName, ViInt32 trigger);
  ViStatus WaitForEventWithChannels(ViSession vi, ViConstString channelName, ViInt32 eventId, ViReal64 timeout);
  ViStatus Abort(ViSession vi);
  ViStatus CalSelfCalibrate(ViSession vi, ViConstString channelName);
  ViStatus ClearError(ViSession vi);
  ViStatus ClearInterchangeWarnings(ViSession vi);
  ViStatus Close(ViSession vi);
  ViStatus Commit(ViSession vi);
  ViStatus ConfigureApertureTime(ViSession vi, ViConstString channelName, ViReal64 apertureTime, ViInt32 units);
  ViStatus ConfigureAutoZero(ViSession vi, ViConstString channelName, ViInt32 autoZero);
  ViStatus ConfigureCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level);
  ViStatus ConfigureCurrentLevelRange(ViSession vi, ViConstString channelName, ViReal64 range);
  ViStatus ConfigureCurrentLimit(ViSession vi, ViConstString channelName, ViInt32 behavior, ViReal64 limit);
  ViStatus ConfigureCurrentLimitRange(ViSession vi, ViConstString channelName, ViReal64 range);
  ViStatus ConfigureDigitalEdgeMeasureTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgePulseTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeSequenceAdvanceTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeSourceTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString inputTerminal, ViInt32 edge);
  ViStatus ConfigureOutputEnabled(ViSession vi, ViConstString channelName, ViBoolean enabled);
  ViStatus ConfigureOutputFunction(ViSession vi, ViConstString channelName, ViInt32 function);
  ViStatus ConfigureOutputResistance(ViSession vi, ViConstString channelName, ViReal64 resistance);
  ViStatus ConfigurePowerLineFrequency(ViSession vi, ViReal64 powerlineFrequency);
  ViStatus ConfigurePulseBiasCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level);
  ViStatus ConfigurePulseBiasCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 limit);
  ViStatus ConfigurePulseBiasVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level);
  ViStatus ConfigurePulseBiasVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit);
  ViStatus ConfigurePulseCurrentLevel(ViSession vi, ViConstString channelName, ViReal64 level);
  ViStatus ConfigurePulseCurrentLevelRange(ViSession vi, ViConstString channelName, ViReal64 range);
  ViStatus ConfigurePulseCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 limit);
  ViStatus ConfigurePulseCurrentLimitRange(ViSession vi, ViConstString channelName, ViReal64 range);
  ViStatus ConfigurePulseVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level);
  ViStatus ConfigurePulseVoltageLevelRange(ViSession vi, ViConstString channelName, ViReal64 range);
  ViStatus ConfigurePulseVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit);
  ViStatus ConfigurePulseVoltageLimitRange(ViSession vi, ViConstString channelName, ViReal64 range);
  ViStatus ConfigureSense(ViSession vi, ViConstString channelName, ViInt32 sense);
  ViStatus ConfigureSoftwareEdgeMeasureTrigger(ViSession vi);
  ViStatus ConfigureSoftwareEdgePulseTrigger(ViSession vi);
  ViStatus ConfigureSoftwareEdgeSequenceAdvanceTrigger(ViSession vi);
  ViStatus ConfigureSoftwareEdgeSourceTrigger(ViSession vi);
  ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi);
  ViStatus ConfigureSourceMode(ViSession vi, ViInt32 sourceMode);
  ViStatus ConfigureVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 level);
  ViStatus ConfigureVoltageLevelRange(ViSession vi, ViConstString channelName, ViReal64 range);
  ViStatus ConfigureVoltageLimit(ViSession vi, ViConstString channelName, ViReal64 limit);
  ViStatus ConfigureVoltageLimitRange(ViSession vi, ViConstString channelName, ViReal64 range);
  ViStatus CreateAdvancedSequenceStep(ViSession vi, ViBoolean setAsActiveStep);
  ViStatus DeleteAdvancedSequence(ViSession vi, ViConstString sequenceName);
  ViStatus Disable(ViSession vi);
  ViStatus DisablePulseTrigger(ViSession vi);
  ViStatus DisableSequenceAdvanceTrigger(ViSession vi);
  ViStatus DisableSourceTrigger(ViSession vi);
  ViStatus DisableStartTrigger(ViSession vi);
  ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViAddr configuration[]);
  ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  ViStatus FetchMultiple(ViSession vi, ViConstString channelName, ViReal64 timeout, ViInt32 count, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[], ViBoolean inCompliance[], ViInt32* actualCount);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]);
  ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelName[]);
  ViStatus GetChannelNameFromString(ViSession vi, ViConstString index, ViInt32 bufferSize, ViChar channelName[]);
  ViStatus GetError(ViSession vi, ViStatus* code, ViInt32 bufferSize, ViChar description[]);
  ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temperature);
  ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months);
  ViStatus GetNextCoercionRecord(ViSession vi, ViInt32 bufferSize, ViChar coercionRecord[]);
  ViStatus GetNextInterchangeWarning(ViSession vi, ViInt32 bufferSize, ViChar interchangeWarning[]);
  ViStatus GetSelfCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetSelfCalLastTemp(ViSession vi, ViReal64* temperature);
  ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViAddr configuration[]);
  ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus InitializeWithChannels(ViRsrc resourceName, ViConstString channels, ViBoolean reset, ViConstString optionString, ViSession* vi);
  ViStatus Initiate(ViSession vi);
  ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus Measure(ViSession vi, ViConstString channelName, ViInt32 measurementType, ViReal64* measurement);
  ViStatus MeasureMultiple(ViSession vi, ViConstString channelName, ViReal64 voltageMeasurements[], ViReal64 currentMeasurements[]);
  ViStatus ParseChannelCount(ViSession vi, ViConstString channelsString, ViUInt32* numberOfChannels);
  ViStatus QueryInCompliance(ViSession vi, ViConstString channelName, ViBoolean* inCompliance);
  ViStatus QueryMaxCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* maxCurrentLimit);
  ViStatus QueryMaxVoltageLevel(ViSession vi, ViConstString channelName, ViReal64 currentLimit, ViReal64* maxVoltageLevel);
  ViStatus QueryMinCurrentLimit(ViSession vi, ViConstString channelName, ViReal64 voltageLevel, ViReal64* minCurrentLimit);
  ViStatus QueryOutputState(ViSession vi, ViConstString channelName, ViInt32 outputState, ViBoolean* inState);
  ViStatus ReadCurrentTemperature(ViSession vi, ViReal64* temperature);
  ViStatus Reset(ViSession vi);
  ViStatus ResetDevice(ViSession vi);
  ViStatus ResetInterchangeCheck(ViSession vi);
  ViStatus ResetWithDefaults(ViSession vi);
  ViStatus RevisionQuery(ViSession vi, ViChar instrumentDriverRevision[256], ViChar firmwareRevision[256]);
  ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  ViStatus SetSequence(ViSession vi, ViConstString channelName, ViReal64 values[], ViReal64 sourceDelays[], ViUInt32 size);
  ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus WaitForEvent(ViSession vi, ViInt32 eventId, ViReal64 timeout);

 private:
  using AbortWithChannelsPtr = decltype(&niDCPower_AbortWithChannels);
  using CommitWithChannelsPtr = decltype(&niDCPower_CommitWithChannels);
  using ConfigureDigitalEdgeMeasureTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureDigitalEdgeMeasureTriggerWithChannels);
  using ConfigureDigitalEdgePulseTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureDigitalEdgePulseTriggerWithChannels);
  using ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannels);
  using ConfigureDigitalEdgeShutdownTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureDigitalEdgeShutdownTriggerWithChannels);
  using ConfigureDigitalEdgeSourceTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureDigitalEdgeSourceTriggerWithChannels);
  using ConfigureDigitalEdgeStartTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureDigitalEdgeStartTriggerWithChannels);
  using ConfigureOvpPtr = decltype(&niDCPower_ConfigureOVP);
  using ConfigureSoftwareEdgeMeasureTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureSoftwareEdgeMeasureTriggerWithChannels);
  using ConfigureSoftwareEdgePulseTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureSoftwareEdgePulseTriggerWithChannels);
  using ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannels);
  using ConfigureSoftwareEdgeShutdownTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureSoftwareEdgeShutdownTriggerWithChannels);
  using ConfigureSoftwareEdgeSourceTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureSoftwareEdgeSourceTriggerWithChannels);
  using ConfigureSoftwareEdgeStartTriggerWithChannelsPtr = decltype(&niDCPower_ConfigureSoftwareEdgeStartTriggerWithChannels);
  using ConfigureSourceModeWithChannelsPtr = decltype(&niDCPower_ConfigureSourceModeWithChannels);
  using CreateAdvancedSequenceCommitStepWithChannelsPtr = decltype(&niDCPower_CreateAdvancedSequenceCommitStepWithChannels);
  using CreateAdvancedSequenceStepWithChannelsPtr = decltype(&niDCPower_CreateAdvancedSequenceStepWithChannels);
  using CreateAdvancedSequenceWithChannelsPtr = decltype(&niDCPower_CreateAdvancedSequenceWithChannels);
  using CreateAdvancedSequencePtr = decltype(&niDCPower_CreateAdvancedSequence);
  using DeleteAdvancedSequenceWithChannelsPtr = decltype(&niDCPower_DeleteAdvancedSequenceWithChannels);
  using DisablePulseTriggerWithChannelsPtr = decltype(&niDCPower_DisablePulseTriggerWithChannels);
  using DisableSequenceAdvanceTriggerWithChannelsPtr = decltype(&niDCPower_DisableSequenceAdvanceTriggerWithChannels);
  using DisableShutdownTriggerWithChannelsPtr = decltype(&niDCPower_DisableShutdownTriggerWithChannels);
  using DisableSourceTriggerWithChannelsPtr = decltype(&niDCPower_DisableSourceTriggerWithChannels);
  using DisableStartTriggerWithChannelsPtr = decltype(&niDCPower_DisableStartTriggerWithChannels);
  using ErrorQueryPtr = decltype(&niDCPower_error_query);
  using ExportSignalWithChannelsPtr = decltype(&niDCPower_ExportSignalWithChannels);
  using InitializeWithIndependentChannelsPtr = decltype(&niDCPower_InitializeWithIndependentChannels);
  using InitiateWithChannelsPtr = decltype(&niDCPower_InitiateWithChannels);
  using InvalidateAllAttributesPtr = decltype(&niDCPower_InvalidateAllAttributes);
  using ResetWithChannelsPtr = decltype(&niDCPower_ResetWithChannels);
  using SendSoftwareEdgeTriggerWithChannelsPtr = decltype(&niDCPower_SendSoftwareEdgeTriggerWithChannels);
  using WaitForEventWithChannelsPtr = decltype(&niDCPower_WaitForEventWithChannels);
  using AbortPtr = decltype(&niDCPower_Abort);
  using CalSelfCalibratePtr = decltype(&niDCPower_CalSelfCalibrate);
  using ClearErrorPtr = decltype(&niDCPower_ClearError);
  using ClearInterchangeWarningsPtr = decltype(&niDCPower_ClearInterchangeWarnings);
  using ClosePtr = decltype(&niDCPower_close);
  using CommitPtr = decltype(&niDCPower_Commit);
  using ConfigureApertureTimePtr = decltype(&niDCPower_ConfigureApertureTime);
  using ConfigureAutoZeroPtr = decltype(&niDCPower_ConfigureAutoZero);
  using ConfigureCurrentLevelPtr = decltype(&niDCPower_ConfigureCurrentLevel);
  using ConfigureCurrentLevelRangePtr = decltype(&niDCPower_ConfigureCurrentLevelRange);
  using ConfigureCurrentLimitPtr = decltype(&niDCPower_ConfigureCurrentLimit);
  using ConfigureCurrentLimitRangePtr = decltype(&niDCPower_ConfigureCurrentLimitRange);
  using ConfigureDigitalEdgeMeasureTriggerPtr = decltype(&niDCPower_ConfigureDigitalEdgeMeasureTrigger);
  using ConfigureDigitalEdgePulseTriggerPtr = decltype(&niDCPower_ConfigureDigitalEdgePulseTrigger);
  using ConfigureDigitalEdgeSequenceAdvanceTriggerPtr = decltype(&niDCPower_ConfigureDigitalEdgeSequenceAdvanceTrigger);
  using ConfigureDigitalEdgeSourceTriggerPtr = decltype(&niDCPower_ConfigureDigitalEdgeSourceTrigger);
  using ConfigureDigitalEdgeStartTriggerPtr = decltype(&niDCPower_ConfigureDigitalEdgeStartTrigger);
  using ConfigureOutputEnabledPtr = decltype(&niDCPower_ConfigureOutputEnabled);
  using ConfigureOutputFunctionPtr = decltype(&niDCPower_ConfigureOutputFunction);
  using ConfigureOutputResistancePtr = decltype(&niDCPower_ConfigureOutputResistance);
  using ConfigurePowerLineFrequencyPtr = decltype(&niDCPower_ConfigurePowerLineFrequency);
  using ConfigurePulseBiasCurrentLevelPtr = decltype(&niDCPower_ConfigurePulseBiasCurrentLevel);
  using ConfigurePulseBiasCurrentLimitPtr = decltype(&niDCPower_ConfigurePulseBiasCurrentLimit);
  using ConfigurePulseBiasVoltageLevelPtr = decltype(&niDCPower_ConfigurePulseBiasVoltageLevel);
  using ConfigurePulseBiasVoltageLimitPtr = decltype(&niDCPower_ConfigurePulseBiasVoltageLimit);
  using ConfigurePulseCurrentLevelPtr = decltype(&niDCPower_ConfigurePulseCurrentLevel);
  using ConfigurePulseCurrentLevelRangePtr = decltype(&niDCPower_ConfigurePulseCurrentLevelRange);
  using ConfigurePulseCurrentLimitPtr = decltype(&niDCPower_ConfigurePulseCurrentLimit);
  using ConfigurePulseCurrentLimitRangePtr = decltype(&niDCPower_ConfigurePulseCurrentLimitRange);
  using ConfigurePulseVoltageLevelPtr = decltype(&niDCPower_ConfigurePulseVoltageLevel);
  using ConfigurePulseVoltageLevelRangePtr = decltype(&niDCPower_ConfigurePulseVoltageLevelRange);
  using ConfigurePulseVoltageLimitPtr = decltype(&niDCPower_ConfigurePulseVoltageLimit);
  using ConfigurePulseVoltageLimitRangePtr = decltype(&niDCPower_ConfigurePulseVoltageLimitRange);
  using ConfigureSensePtr = decltype(&niDCPower_ConfigureSense);
  using ConfigureSoftwareEdgeMeasureTriggerPtr = decltype(&niDCPower_ConfigureSoftwareEdgeMeasureTrigger);
  using ConfigureSoftwareEdgePulseTriggerPtr = decltype(&niDCPower_ConfigureSoftwareEdgePulseTrigger);
  using ConfigureSoftwareEdgeSequenceAdvanceTriggerPtr = decltype(&niDCPower_ConfigureSoftwareEdgeSequenceAdvanceTrigger);
  using ConfigureSoftwareEdgeSourceTriggerPtr = decltype(&niDCPower_ConfigureSoftwareEdgeSourceTrigger);
  using ConfigureSoftwareEdgeStartTriggerPtr = decltype(&niDCPower_ConfigureSoftwareEdgeStartTrigger);
  using ConfigureSourceModePtr = decltype(&niDCPower_ConfigureSourceMode);
  using ConfigureVoltageLevelPtr = decltype(&niDCPower_ConfigureVoltageLevel);
  using ConfigureVoltageLevelRangePtr = decltype(&niDCPower_ConfigureVoltageLevelRange);
  using ConfigureVoltageLimitPtr = decltype(&niDCPower_ConfigureVoltageLimit);
  using ConfigureVoltageLimitRangePtr = decltype(&niDCPower_ConfigureVoltageLimitRange);
  using CreateAdvancedSequenceStepPtr = decltype(&niDCPower_CreateAdvancedSequenceStep);
  using DeleteAdvancedSequencePtr = decltype(&niDCPower_DeleteAdvancedSequence);
  using DisablePtr = decltype(&niDCPower_Disable);
  using DisablePulseTriggerPtr = decltype(&niDCPower_DisablePulseTrigger);
  using DisableSequenceAdvanceTriggerPtr = decltype(&niDCPower_DisableSequenceAdvanceTrigger);
  using DisableSourceTriggerPtr = decltype(&niDCPower_DisableSourceTrigger);
  using DisableStartTriggerPtr = decltype(&niDCPower_DisableStartTrigger);
  using ErrorMessagePtr = decltype(&niDCPower_error_message);
  using ExportAttributeConfigurationBufferPtr = decltype(&niDCPower_ExportAttributeConfigurationBuffer);
  using ExportAttributeConfigurationFilePtr = decltype(&niDCPower_ExportAttributeConfigurationFile);
  using ExportSignalPtr = decltype(&niDCPower_ExportSignal);
  using FetchMultiplePtr = decltype(&niDCPower_FetchMultiple);
  using GetAttributeViBooleanPtr = decltype(&niDCPower_GetAttributeViBoolean);
  using GetAttributeViInt32Ptr = decltype(&niDCPower_GetAttributeViInt32);
  using GetAttributeViInt64Ptr = decltype(&niDCPower_GetAttributeViInt64);
  using GetAttributeViReal64Ptr = decltype(&niDCPower_GetAttributeViReal64);
  using GetAttributeViSessionPtr = decltype(&niDCPower_GetAttributeViSession);
  using GetAttributeViStringPtr = decltype(&niDCPower_GetAttributeViString);
  using GetChannelNamePtr = decltype(&niDCPower_GetChannelName);
  using GetChannelNameFromStringPtr = decltype(&niDCPower_GetChannelNameFromString);
  using GetErrorPtr = decltype(&niDCPower_GetError);
  using GetExtCalLastDateAndTimePtr = decltype(&niDCPower_GetExtCalLastDateAndTime);
  using GetExtCalLastTempPtr = decltype(&niDCPower_GetExtCalLastTemp);
  using GetExtCalRecommendedIntervalPtr = decltype(&niDCPower_GetExtCalRecommendedInterval);
  using GetNextCoercionRecordPtr = decltype(&niDCPower_GetNextCoercionRecord);
  using GetNextInterchangeWarningPtr = decltype(&niDCPower_GetNextInterchangeWarning);
  using GetSelfCalLastDateAndTimePtr = decltype(&niDCPower_GetSelfCalLastDateAndTime);
  using GetSelfCalLastTempPtr = decltype(&niDCPower_GetSelfCalLastTemp);
  using ImportAttributeConfigurationBufferPtr = decltype(&niDCPower_ImportAttributeConfigurationBuffer);
  using ImportAttributeConfigurationFilePtr = decltype(&niDCPower_ImportAttributeConfigurationFile);
  using InitializeWithChannelsPtr = decltype(&niDCPower_InitializeWithChannels);
  using InitiatePtr = decltype(&niDCPower_Initiate);
  using LockSessionPtr = decltype(&niDCPower_LockSession);
  using MeasurePtr = decltype(&niDCPower_Measure);
  using MeasureMultiplePtr = decltype(&niDCPower_MeasureMultiple);
  using ParseChannelCountPtr = ViStatus (*)(ViSession vi, ViConstString channelsString, ViUInt32* numberOfChannels);
  using QueryInCompliancePtr = decltype(&niDCPower_QueryInCompliance);
  using QueryMaxCurrentLimitPtr = decltype(&niDCPower_QueryMaxCurrentLimit);
  using QueryMaxVoltageLevelPtr = decltype(&niDCPower_QueryMaxVoltageLevel);
  using QueryMinCurrentLimitPtr = decltype(&niDCPower_QueryMinCurrentLimit);
  using QueryOutputStatePtr = decltype(&niDCPower_QueryOutputState);
  using ReadCurrentTemperaturePtr = decltype(&niDCPower_ReadCurrentTemperature);
  using ResetPtr = decltype(&niDCPower_reset);
  using ResetDevicePtr = decltype(&niDCPower_ResetDevice);
  using ResetInterchangeCheckPtr = decltype(&niDCPower_ResetInterchangeCheck);
  using ResetWithDefaultsPtr = decltype(&niDCPower_ResetWithDefaults);
  using RevisionQueryPtr = decltype(&niDCPower_revision_query);
  using SelfTestPtr = decltype(&niDCPower_self_test);
  using SendSoftwareEdgeTriggerPtr = decltype(&niDCPower_SendSoftwareEdgeTrigger);
  using SetAttributeViBooleanPtr = decltype(&niDCPower_SetAttributeViBoolean);
  using SetAttributeViInt32Ptr = decltype(&niDCPower_SetAttributeViInt32);
  using SetAttributeViInt64Ptr = decltype(&niDCPower_SetAttributeViInt64);
  using SetAttributeViReal64Ptr = decltype(&niDCPower_SetAttributeViReal64);
  using SetAttributeViSessionPtr = decltype(&niDCPower_SetAttributeViSession);
  using SetAttributeViStringPtr = decltype(&niDCPower_SetAttributeViString);
  using SetSequencePtr = decltype(&niDCPower_SetSequence);
  using UnlockSessionPtr = decltype(&niDCPower_UnlockSession);
  using WaitForEventPtr = decltype(&niDCPower_WaitForEvent);

  typedef struct FunctionPointers {
    AbortWithChannelsPtr AbortWithChannels;
    CommitWithChannelsPtr CommitWithChannels;
    ConfigureDigitalEdgeMeasureTriggerWithChannelsPtr ConfigureDigitalEdgeMeasureTriggerWithChannels;
    ConfigureDigitalEdgePulseTriggerWithChannelsPtr ConfigureDigitalEdgePulseTriggerWithChannels;
    ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannelsPtr ConfigureDigitalEdgeSequenceAdvanceTriggerWithChannels;
    ConfigureDigitalEdgeShutdownTriggerWithChannelsPtr ConfigureDigitalEdgeShutdownTriggerWithChannels;
    ConfigureDigitalEdgeSourceTriggerWithChannelsPtr ConfigureDigitalEdgeSourceTriggerWithChannels;
    ConfigureDigitalEdgeStartTriggerWithChannelsPtr ConfigureDigitalEdgeStartTriggerWithChannels;
    ConfigureOvpPtr ConfigureOvp;
    ConfigureSoftwareEdgeMeasureTriggerWithChannelsPtr ConfigureSoftwareEdgeMeasureTriggerWithChannels;
    ConfigureSoftwareEdgePulseTriggerWithChannelsPtr ConfigureSoftwareEdgePulseTriggerWithChannels;
    ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannelsPtr ConfigureSoftwareEdgeSequenceAdvanceTriggerWithChannels;
    ConfigureSoftwareEdgeShutdownTriggerWithChannelsPtr ConfigureSoftwareEdgeShutdownTriggerWithChannels;
    ConfigureSoftwareEdgeSourceTriggerWithChannelsPtr ConfigureSoftwareEdgeSourceTriggerWithChannels;
    ConfigureSoftwareEdgeStartTriggerWithChannelsPtr ConfigureSoftwareEdgeStartTriggerWithChannels;
    ConfigureSourceModeWithChannelsPtr ConfigureSourceModeWithChannels;
    CreateAdvancedSequenceCommitStepWithChannelsPtr CreateAdvancedSequenceCommitStepWithChannels;
    CreateAdvancedSequenceStepWithChannelsPtr CreateAdvancedSequenceStepWithChannels;
    CreateAdvancedSequenceWithChannelsPtr CreateAdvancedSequenceWithChannels;
    CreateAdvancedSequencePtr CreateAdvancedSequence;
    DeleteAdvancedSequenceWithChannelsPtr DeleteAdvancedSequenceWithChannels;
    DisablePulseTriggerWithChannelsPtr DisablePulseTriggerWithChannels;
    DisableSequenceAdvanceTriggerWithChannelsPtr DisableSequenceAdvanceTriggerWithChannels;
    DisableShutdownTriggerWithChannelsPtr DisableShutdownTriggerWithChannels;
    DisableSourceTriggerWithChannelsPtr DisableSourceTriggerWithChannels;
    DisableStartTriggerWithChannelsPtr DisableStartTriggerWithChannels;
    ErrorQueryPtr ErrorQuery;
    ExportSignalWithChannelsPtr ExportSignalWithChannels;
    InitializeWithIndependentChannelsPtr InitializeWithIndependentChannels;
    InitiateWithChannelsPtr InitiateWithChannels;
    InvalidateAllAttributesPtr InvalidateAllAttributes;
    ResetWithChannelsPtr ResetWithChannels;
    SendSoftwareEdgeTriggerWithChannelsPtr SendSoftwareEdgeTriggerWithChannels;
    WaitForEventWithChannelsPtr WaitForEventWithChannels;
    AbortPtr Abort;
    CalSelfCalibratePtr CalSelfCalibrate;
    ClearErrorPtr ClearError;
    ClearInterchangeWarningsPtr ClearInterchangeWarnings;
    ClosePtr Close;
    CommitPtr Commit;
    ConfigureApertureTimePtr ConfigureApertureTime;
    ConfigureAutoZeroPtr ConfigureAutoZero;
    ConfigureCurrentLevelPtr ConfigureCurrentLevel;
    ConfigureCurrentLevelRangePtr ConfigureCurrentLevelRange;
    ConfigureCurrentLimitPtr ConfigureCurrentLimit;
    ConfigureCurrentLimitRangePtr ConfigureCurrentLimitRange;
    ConfigureDigitalEdgeMeasureTriggerPtr ConfigureDigitalEdgeMeasureTrigger;
    ConfigureDigitalEdgePulseTriggerPtr ConfigureDigitalEdgePulseTrigger;
    ConfigureDigitalEdgeSequenceAdvanceTriggerPtr ConfigureDigitalEdgeSequenceAdvanceTrigger;
    ConfigureDigitalEdgeSourceTriggerPtr ConfigureDigitalEdgeSourceTrigger;
    ConfigureDigitalEdgeStartTriggerPtr ConfigureDigitalEdgeStartTrigger;
    ConfigureOutputEnabledPtr ConfigureOutputEnabled;
    ConfigureOutputFunctionPtr ConfigureOutputFunction;
    ConfigureOutputResistancePtr ConfigureOutputResistance;
    ConfigurePowerLineFrequencyPtr ConfigurePowerLineFrequency;
    ConfigurePulseBiasCurrentLevelPtr ConfigurePulseBiasCurrentLevel;
    ConfigurePulseBiasCurrentLimitPtr ConfigurePulseBiasCurrentLimit;
    ConfigurePulseBiasVoltageLevelPtr ConfigurePulseBiasVoltageLevel;
    ConfigurePulseBiasVoltageLimitPtr ConfigurePulseBiasVoltageLimit;
    ConfigurePulseCurrentLevelPtr ConfigurePulseCurrentLevel;
    ConfigurePulseCurrentLevelRangePtr ConfigurePulseCurrentLevelRange;
    ConfigurePulseCurrentLimitPtr ConfigurePulseCurrentLimit;
    ConfigurePulseCurrentLimitRangePtr ConfigurePulseCurrentLimitRange;
    ConfigurePulseVoltageLevelPtr ConfigurePulseVoltageLevel;
    ConfigurePulseVoltageLevelRangePtr ConfigurePulseVoltageLevelRange;
    ConfigurePulseVoltageLimitPtr ConfigurePulseVoltageLimit;
    ConfigurePulseVoltageLimitRangePtr ConfigurePulseVoltageLimitRange;
    ConfigureSensePtr ConfigureSense;
    ConfigureSoftwareEdgeMeasureTriggerPtr ConfigureSoftwareEdgeMeasureTrigger;
    ConfigureSoftwareEdgePulseTriggerPtr ConfigureSoftwareEdgePulseTrigger;
    ConfigureSoftwareEdgeSequenceAdvanceTriggerPtr ConfigureSoftwareEdgeSequenceAdvanceTrigger;
    ConfigureSoftwareEdgeSourceTriggerPtr ConfigureSoftwareEdgeSourceTrigger;
    ConfigureSoftwareEdgeStartTriggerPtr ConfigureSoftwareEdgeStartTrigger;
    ConfigureSourceModePtr ConfigureSourceMode;
    ConfigureVoltageLevelPtr ConfigureVoltageLevel;
    ConfigureVoltageLevelRangePtr ConfigureVoltageLevelRange;
    ConfigureVoltageLimitPtr ConfigureVoltageLimit;
    ConfigureVoltageLimitRangePtr ConfigureVoltageLimitRange;
    CreateAdvancedSequenceStepPtr CreateAdvancedSequenceStep;
    DeleteAdvancedSequencePtr DeleteAdvancedSequence;
    DisablePtr Disable;
    DisablePulseTriggerPtr DisablePulseTrigger;
    DisableSequenceAdvanceTriggerPtr DisableSequenceAdvanceTrigger;
    DisableSourceTriggerPtr DisableSourceTrigger;
    DisableStartTriggerPtr DisableStartTrigger;
    ErrorMessagePtr ErrorMessage;
    ExportAttributeConfigurationBufferPtr ExportAttributeConfigurationBuffer;
    ExportAttributeConfigurationFilePtr ExportAttributeConfigurationFile;
    ExportSignalPtr ExportSignal;
    FetchMultiplePtr FetchMultiple;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViSessionPtr GetAttributeViSession;
    GetAttributeViStringPtr GetAttributeViString;
    GetChannelNamePtr GetChannelName;
    GetChannelNameFromStringPtr GetChannelNameFromString;
    GetErrorPtr GetError;
    GetExtCalLastDateAndTimePtr GetExtCalLastDateAndTime;
    GetExtCalLastTempPtr GetExtCalLastTemp;
    GetExtCalRecommendedIntervalPtr GetExtCalRecommendedInterval;
    GetNextCoercionRecordPtr GetNextCoercionRecord;
    GetNextInterchangeWarningPtr GetNextInterchangeWarning;
    GetSelfCalLastDateAndTimePtr GetSelfCalLastDateAndTime;
    GetSelfCalLastTempPtr GetSelfCalLastTemp;
    ImportAttributeConfigurationBufferPtr ImportAttributeConfigurationBuffer;
    ImportAttributeConfigurationFilePtr ImportAttributeConfigurationFile;
    InitializeWithChannelsPtr InitializeWithChannels;
    InitiatePtr Initiate;
    LockSessionPtr LockSession;
    MeasurePtr Measure;
    MeasureMultiplePtr MeasureMultiple;
    ParseChannelCountPtr ParseChannelCount;
    QueryInCompliancePtr QueryInCompliance;
    QueryMaxCurrentLimitPtr QueryMaxCurrentLimit;
    QueryMaxVoltageLevelPtr QueryMaxVoltageLevel;
    QueryMinCurrentLimitPtr QueryMinCurrentLimit;
    QueryOutputStatePtr QueryOutputState;
    ReadCurrentTemperaturePtr ReadCurrentTemperature;
    ResetPtr Reset;
    ResetDevicePtr ResetDevice;
    ResetInterchangeCheckPtr ResetInterchangeCheck;
    ResetWithDefaultsPtr ResetWithDefaults;
    RevisionQueryPtr RevisionQuery;
    SelfTestPtr SelfTest;
    SendSoftwareEdgeTriggerPtr SendSoftwareEdgeTrigger;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViSessionPtr SetAttributeViSession;
    SetAttributeViStringPtr SetAttributeViString;
    SetSequencePtr SetSequence;
    UnlockSessionPtr UnlockSession;
    WaitForEventPtr WaitForEvent;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nidcpower_grpc

#endif  // NIDCPOWER_GRPC_LIBRARY_H
