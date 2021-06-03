//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-FGEN
//---------------------------------------------------------------------
#ifndef NIFGEN_GRPC_MOCK_LIBRARY_H
#define NIFGEN_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nifgen_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiFgenMockLibrary : public nifgen_grpc::NiFgenLibraryInterface {
 public:
  MOCK_METHOD(ViStatus, AbortGeneration, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, AdjustSampleClockRelativeDelay, (ViSession vi, ViReal64 adjustmentTime), (override));
  MOCK_METHOD(ViStatus, AllocateNamedWaveform, (ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 waveformSize), (override));
  MOCK_METHOD(ViStatus, AllocateWaveform, (ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt32* waveformHandle), (override));
  MOCK_METHOD(ViStatus, CalAdjustDirectPathOutputImpedance, (ViSession vi, ViConstString channelName, ViInt32 configuration, ViReal64 loadImpedance, ViReal64 measuredSourceVoltage, ViReal64 measuredVoltageAcrossLoad), (override));
  MOCK_METHOD(ViStatus, CalAdjustMainPathOutputImpedance, (ViSession vi, ViConstString channelName, ViInt32 configuration, ViReal64 loadImpedance, ViReal64 measuredSourceVoltage, ViReal64 measuredVoltageAcrossLoad), (override));
  MOCK_METHOD(ViStatus, CalAdjustOscillatorFrequency, (ViSession vi, ViReal64 desiredFrequency, ViReal64 measuredFrequency), (override));
  MOCK_METHOD(ViStatus, ChangeExtCalPassword, (ViSession vi, ViConstString oldPassword, ViConstString newPassword), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue), (override));
  MOCK_METHOD(ViStatus, ClearArbMemory, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ClearArbSequence, (ViSession vi, ViInt32 sequenceHandle), (override));
  MOCK_METHOD(ViStatus, ClearArbWaveform, (ViSession vi, ViInt32 waveformHandle), (override));
  MOCK_METHOD(ViStatus, ClearError, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ClearFreqList, (ViSession vi, ViInt32 frequencyListHandle), (override));
  MOCK_METHOD(ViStatus, ClearInterchangeWarnings, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ClearUserStandardWaveform, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, Close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, CloseExtCal, (ViSession vi, ViInt32 action), (override));
  MOCK_METHOD(ViStatus, Commit, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureAmplitude, (ViSession vi, ViConstString channelName, ViReal64 amplitude), (override));
  MOCK_METHOD(ViStatus, ConfigureArbSequence, (ViSession vi, ViConstString channelName, ViInt32 sequenceHandle, ViReal64 gain, ViReal64 offset), (override));
  MOCK_METHOD(ViStatus, ConfigureArbWaveform, (ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViReal64 gain, ViReal64 offset), (override));
  MOCK_METHOD(ViStatus, ConfigureChannels, (ViSession vi, ViConstString channels), (override));
  MOCK_METHOD(ViStatus, ConfigureClockMode, (ViSession vi, ViInt32 clockMode), (override));
  MOCK_METHOD(ViStatus, ConfigureCustomFirFilterCoefficients, (ViSession vi, ViConstString channelName, ViInt32 numberOfCoefficients, ViReal64 coefficientsArray[]), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeScriptTrigger, (ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeStartTrigger, (ViSession vi, ViConstString source, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalLevelScriptTrigger, (ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 triggerWhen), (override));
  MOCK_METHOD(ViStatus, ConfigureFreqList, (ViSession vi, ViConstString channelName, ViInt32 frequencyListHandle, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 startPhase), (override));
  MOCK_METHOD(ViStatus, ConfigureFrequency, (ViSession vi, ViConstString channelName, ViReal64 frequency), (override));
  MOCK_METHOD(ViStatus, ConfigureGain, (ViSession vi, ViConstString channelName, ViReal64 gain), (override));
  MOCK_METHOD(ViStatus, ConfigureOperationMode, (ViSession vi, ViConstString channelName, ViInt32 operationMode), (override));
  MOCK_METHOD(ViStatus, ConfigureOutputEnabled, (ViSession vi, ViConstString channelName, ViBoolean enabled), (override));
  MOCK_METHOD(ViStatus, ConfigureOutputImpedance, (ViSession vi, ViConstString channelName, ViReal64 impedance), (override));
  MOCK_METHOD(ViStatus, ConfigureOutputMode, (ViSession vi, ViInt32 outputMode), (override));
  MOCK_METHOD(ViStatus, ConfigureP2pEndpointFullnessStartTrigger, (ViSession vi, ViInt32 p2pEndpointFullnessLevel), (override));
  MOCK_METHOD(ViStatus, ConfigureRefClockFrequency, (ViSession vi, ViReal64 referenceClockFrequency), (override));
  MOCK_METHOD(ViStatus, ConfigureRefClockSource, (ViSession vi, ViInt32 referenceClockSource), (override));
  MOCK_METHOD(ViStatus, ConfigureReferenceClock, (ViSession vi, ViConstString referenceClockSource, ViReal64 referenceClockFrequency), (override));
  MOCK_METHOD(ViStatus, ConfigureSampleClockSource, (ViSession vi, ViConstString sampleClockSource), (override));
  MOCK_METHOD(ViStatus, ConfigureSampleRate, (ViSession vi, ViReal64 sampleRate), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeScriptTrigger, (ViSession vi, ViConstString triggerId), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareEdgeStartTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureStandardWaveform, (ViSession vi, ViConstString channelName, ViInt32 waveform, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 frequency, ViReal64 startPhase), (override));
  MOCK_METHOD(ViStatus, ConfigureSynchronization, (ViSession vi, ViConstString channelName, ViInt32 synchronizationSource), (override));
  MOCK_METHOD(ViStatus, ConfigureTriggerMode, (ViSession vi, ViConstString channelName, ViInt32 triggerMode), (override));
  MOCK_METHOD(ViStatus, ConfigureTriggerSource, (ViSession vi, ViConstString channelName, ViInt32 triggerSource), (override));
  MOCK_METHOD(ViStatus, ConfigureUpdateClockSource, (ViSession vi, ViInt32 updateClockSource), (override));
  MOCK_METHOD(ViStatus, CreateArbSequence, (ViSession vi, ViInt32 sequenceLength, ViInt32 waveformHandlesArray[], ViInt32 loopCountsArray[], ViInt32* sequenceHandle), (override));
  MOCK_METHOD(ViStatus, CreateFreqList, (ViSession vi, ViInt32 waveform, ViInt32 frequencyListLength, ViReal64 frequencyArray[], ViReal64 durationArray[], ViInt32* frequencyListHandle), (override));
  MOCK_METHOD(ViStatus, CreateWaveformComplexF64, (ViSession vi, ViConstString channelName, ViInt32 numberOfSamples, NIComplexNumber_struct waveformDataArray[], ViInt32* waveformHandle), (override));
  MOCK_METHOD(ViStatus, CreateWaveformF64, (ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[], ViInt32* waveformHandle), (override));
  MOCK_METHOD(ViStatus, CreateWaveformFromFileF64, (ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle), (override));
  MOCK_METHOD(ViStatus, CreateWaveformFromFileHws, (ViSession vi, ViConstString channelName, ViConstString fileName, ViBoolean useRateFromWaveform, ViBoolean useGainAndOffsetFromWaveform, ViInt32* waveformHandle), (override));
  MOCK_METHOD(ViStatus, CreateWaveformFromFileI16, (ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle), (override));
  MOCK_METHOD(ViStatus, CreateWaveformI16, (ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt16 waveformDataArray[], ViInt32* waveformHandle), (override));
  MOCK_METHOD(ViStatus, DefineUserStandardWaveform, (ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[]), (override));
  MOCK_METHOD(ViStatus, DeleteNamedWaveform, (ViSession vi, ViConstString channelName, ViConstString waveformName), (override));
  MOCK_METHOD(ViStatus, DeleteScript, (ViSession vi, ViConstString channelName, ViConstString scriptName), (override));
  MOCK_METHOD(ViStatus, Disable, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisableAnalogFilter, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, DisableDigitalFilter, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, DisableDigitalPatterning, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, DisableScriptTrigger, (ViSession vi, ViConstString triggerId), (override));
  MOCK_METHOD(ViStatus, DisableStartTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, EnableAnalogFilter, (ViSession vi, ViConstString channelName, ViReal64 filterCorrectionFrequency), (override));
  MOCK_METHOD(ViStatus, EnableDigitalFilter, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, EnableDigitalPatterning, (ViSession vi, ViConstString channelName), (override));
  MOCK_METHOD(ViStatus, ErrorMessage, (ViSession vi, ViStatus errorCode, ViChar errorMessage[256]), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationBuffer, (ViSession vi, ViInt32 sizeInBytes, ViAddr configuration[]), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationFile, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, ExportSignal, (ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal), (override));
  MOCK_METHOD(ViStatus, GetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 arraySize, ViChar attributeValue[]), (override));
  MOCK_METHOD(ViStatus, GetCalUserDefinedInfo, (ViSession vi, ViChar info[256]), (override));
  MOCK_METHOD(ViStatus, GetCalUserDefinedInfoMaxSize, (ViSession vi, ViInt32* infoSize), (override));
  MOCK_METHOD(ViStatus, GetChannelName, (ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelString[]), (override));
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]), (override));
  MOCK_METHOD(ViStatus, GetExtCalLastDateAndTime, (ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute), (override));
  MOCK_METHOD(ViStatus, GetExtCalLastTemp, (ViSession vi, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, GetExtCalRecommendedInterval, (ViSession vi, ViInt32* months), (override));
  MOCK_METHOD(ViStatus, GetFirFilterCoefficients, (ViSession vi, ViConstString channelName, ViInt32 arraySize, ViReal64 coefficientsArray[], ViInt32* numberOfCoefficientsRead), (override));
  MOCK_METHOD(ViStatus, GetHardwareState, (ViSession vi, ViInt32* state), (override));
  MOCK_METHOD(ViStatus, GetSelfCalLastDateAndTime, (ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute), (override));
  MOCK_METHOD(ViStatus, GetSelfCalLastTemp, (ViSession vi, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, GetSelfCalSupported, (ViSession vi, ViBoolean* selfCalSupported), (override));
  MOCK_METHOD(ViStatus, GetStreamEndpointHandle, (ViSession vi, ViConstString streamEndpoint, ViUInt32* readerHandle), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationBuffer, (ViSession vi, ViInt32 sizeInBytes, ViAddr configuration[]), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationFile, (ViSession vi, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, InitExtCal, (ViRsrc resourceName, ViConstString password, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, InitWithOptions, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, InitializeWithChannels, (ViRsrc resourceName, ViConstString channelName, ViBoolean resetDevice, ViConstString optionString, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, InitializeAnalogOutputCalibration, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, InitializeCalAdcCalibration, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, InitializeFlatnessCalibration, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, InitializeOscillatorFrequencyCalibration, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, InitiateGeneration, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, InvalidateAllAttributes, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, IsDone, (ViSession vi, ViBoolean* done), (override));
  MOCK_METHOD(ViStatus, LockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, ManualEnableP2pStream, (ViSession vi, ViConstString endpointName), (override));
  MOCK_METHOD(ViStatus, QueryArbSeqCapabilities, (ViSession vi, ViInt32* maximumNumberOfSequences, ViInt32* minimumSequenceLength, ViInt32* maximumSequenceLength, ViInt32* maximumLoopCount), (override));
  MOCK_METHOD(ViStatus, QueryArbWfmCapabilities, (ViSession vi, ViInt32* maximumNumberOfWaveforms, ViInt32* waveformQuantum, ViInt32* minimumWaveformSize, ViInt32* maximumWaveformSize), (override));
  MOCK_METHOD(ViStatus, QueryFreqListCapabilities, (ViSession vi, ViInt32* maximumNumberOfFreqLists, ViInt32* minimumFrequencyListLength, ViInt32* maximumFrequencyListLength, ViReal64* minimumFrequencyListDuration, ViReal64* maximumFrequencyListDuration, ViReal64* frequencyListDurationQuantum), (override));
  MOCK_METHOD(ViStatus, ReadCalAdc, (ViSession vi, ViInt32 numberOfReadsToAverage, ViBoolean returnCalibratedValue, ViReal64* calAdcValue), (override));
  MOCK_METHOD(ViStatus, ReadCurrentTemperature, (ViSession vi, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, Reset, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetAttribute, (ViSession vi, ViConstString channelName, ViAttr attributeId), (override));
  MOCK_METHOD(ViStatus, ResetDevice, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetInterchangeCheck, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetWithDefaults, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, RestoreLastExtCalConstants, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, RouteSignalOut, (ViSession vi, ViConstString channelName, ViInt32 routeSignalFrom, ViInt32 routeSignalTo), (override));
  MOCK_METHOD(ViStatus, SelfCal, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SelfTest, (ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]), (override));
  MOCK_METHOD(ViStatus, SendSoftwareTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue), (override));
  MOCK_METHOD(ViStatus, SetCalUserDefinedInfo, (ViSession vi, ViConstString info), (override));
  MOCK_METHOD(ViStatus, SetNamedWaveformNextWritePosition, (ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 relativeTo, ViInt32 offset), (override));
  MOCK_METHOD(ViStatus, SetWaveformNextWritePosition, (ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 relativeTo, ViInt32 offset), (override));
  MOCK_METHOD(ViStatus, UnlockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, WaitUntilDone, (ViSession vi, ViInt32 maxTime), (override));
  MOCK_METHOD(ViStatus, WriteBinary16AnalogStaticValue, (ViSession vi, ViConstString channelName, ViInt16 value), (override));
  MOCK_METHOD(ViStatus, WriteBinary16Waveform, (ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViInt16 data[]), (override));
  MOCK_METHOD(ViStatus, WriteComplexBinary16Waveform, (ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, NIComplexI16_struct data[]), (override));
  MOCK_METHOD(ViStatus, WriteNamedWaveformF64, (ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViReal64 data[]), (override));
  MOCK_METHOD(ViStatus, WriteNamedWaveformI16, (ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViInt16 data[]), (override));
  MOCK_METHOD(ViStatus, WriteScript, (ViSession vi, ViConstString channelName, ViConstString script), (override));
  MOCK_METHOD(ViStatus, WriteWaveform, (ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViReal64 data[]), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIFGEN_GRPC_MOCK_LIBRARY_H
