//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-FGEN
//---------------------------------------------------------------------
#ifndef NIFGEN_GRPC_LIBRARY_WRAPPER_H
#define NIFGEN_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niFgen.h>

namespace nifgen_grpc {

class NiFgenLibraryInterface {
 public:
  virtual ~NiFgenLibraryInterface() {}

  virtual ViStatus AbortGeneration(ViSession vi) = 0;
  virtual ViStatus AdjustSampleClockRelativeDelay(ViSession vi, ViReal64 adjustmentTime) = 0;
  virtual ViStatus AllocateNamedWaveform(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 waveformSize) = 0;
  virtual ViStatus AllocateWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt32* waveformHandle) = 0;
  virtual ViStatus CalAdjustDirectPathOutputImpedance(ViSession vi, ViConstString channelName, ViInt32 configuration, ViReal64 loadImpedance, ViReal64 measuredSourceVoltage, ViReal64 measuredVoltageAcrossLoad) = 0;
  virtual ViStatus CalAdjustMainPathOutputImpedance(ViSession vi, ViConstString channelName, ViInt32 configuration, ViReal64 loadImpedance, ViReal64 measuredSourceVoltage, ViReal64 measuredVoltageAcrossLoad) = 0;
  virtual ViStatus CalAdjustOscillatorFrequency(ViSession vi, ViReal64 desiredFrequency, ViReal64 measuredFrequency) = 0;
  virtual ViStatus ChangeExtCalPassword(ViSession vi, ViConstString oldPassword, ViConstString newPassword) = 0;
  virtual ViStatus CheckAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue) = 0;
  virtual ViStatus CheckAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue) = 0;
  virtual ViStatus CheckAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue) = 0;
  virtual ViStatus CheckAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue) = 0;
  virtual ViStatus CheckAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue) = 0;
  virtual ViStatus CheckAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue) = 0;
  virtual ViStatus ClearArbMemory(ViSession vi) = 0;
  virtual ViStatus ClearArbSequence(ViSession vi, ViInt32 sequenceHandle) = 0;
  virtual ViStatus ClearArbWaveform(ViSession vi, ViInt32 waveformHandle) = 0;
  virtual ViStatus ClearError(ViSession vi) = 0;
  virtual ViStatus ClearFreqList(ViSession vi, ViInt32 frequencyListHandle) = 0;
  virtual ViStatus ClearInterchangeWarnings(ViSession vi) = 0;
  virtual ViStatus ClearUserStandardWaveform(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus Close(ViSession vi) = 0;
  virtual ViStatus CloseExtCal(ViSession vi, ViInt32 action) = 0;
  virtual ViStatus Commit(ViSession vi) = 0;
  virtual ViStatus ConfigureAmplitude(ViSession vi, ViConstString channelName, ViReal64 amplitude) = 0;
  virtual ViStatus ConfigureArbSequence(ViSession vi, ViConstString channelName, ViInt32 sequenceHandle, ViReal64 gain, ViReal64 offset) = 0;
  virtual ViStatus ConfigureArbWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViReal64 gain, ViReal64 offset) = 0;
  virtual ViStatus ConfigureChannels(ViSession vi, ViConstString channels) = 0;
  virtual ViStatus ConfigureClockMode(ViSession vi, ViInt32 clockMode) = 0;
  virtual ViStatus ConfigureCustomFirFilterCoefficients(ViSession vi, ViConstString channelName, ViInt32 numberOfCoefficients, ViReal64 coefficientsArray[]) = 0;
  virtual ViStatus ConfigureDigitalEdgeScriptTrigger(ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString source, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalLevelScriptTrigger(ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 triggerWhen) = 0;
  virtual ViStatus ConfigureFreqList(ViSession vi, ViConstString channelName, ViInt32 frequencyListHandle, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 startPhase) = 0;
  virtual ViStatus ConfigureFrequency(ViSession vi, ViConstString channelName, ViReal64 frequency) = 0;
  virtual ViStatus ConfigureGain(ViSession vi, ViConstString channelName, ViReal64 gain) = 0;
  virtual ViStatus ConfigureOperationMode(ViSession vi, ViConstString channelName, ViInt32 operationMode) = 0;
  virtual ViStatus ConfigureOutputEnabled(ViSession vi, ViConstString channelName, ViBoolean enabled) = 0;
  virtual ViStatus ConfigureOutputImpedance(ViSession vi, ViConstString channelName, ViReal64 impedance) = 0;
  virtual ViStatus ConfigureOutputMode(ViSession vi, ViInt32 outputMode) = 0;
  virtual ViStatus ConfigureP2pEndpointFullnessStartTrigger(ViSession vi, ViInt32 p2pEndpointFullnessLevel) = 0;
  virtual ViStatus ConfigureRefClockFrequency(ViSession vi, ViReal64 referenceClockFrequency) = 0;
  virtual ViStatus ConfigureRefClockSource(ViSession vi, ViInt32 referenceClockSource) = 0;
  virtual ViStatus ConfigureReferenceClock(ViSession vi, ViConstString referenceClockSource, ViReal64 referenceClockFrequency) = 0;
  virtual ViStatus ConfigureSampleClockSource(ViSession vi, ViConstString sampleClockSource) = 0;
  virtual ViStatus ConfigureSampleRate(ViSession vi, ViReal64 sampleRate) = 0;
  virtual ViStatus ConfigureSoftwareEdgeScriptTrigger(ViSession vi, ViConstString triggerId) = 0;
  virtual ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureStandardWaveform(ViSession vi, ViConstString channelName, ViInt32 waveform, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 frequency, ViReal64 startPhase) = 0;
  virtual ViStatus ConfigureSynchronization(ViSession vi, ViConstString channelName, ViInt32 synchronizationSource) = 0;
  virtual ViStatus ConfigureTriggerMode(ViSession vi, ViConstString channelName, ViInt32 triggerMode) = 0;
  virtual ViStatus ConfigureTriggerSource(ViSession vi, ViConstString channelName, ViInt32 triggerSource) = 0;
  virtual ViStatus ConfigureUpdateClockSource(ViSession vi, ViInt32 updateClockSource) = 0;
  virtual ViStatus CreateArbSequence(ViSession vi, ViInt32 sequenceLength, ViInt32 waveformHandlesArray[], ViInt32 loopCountsArray[], ViInt32* sequenceHandle) = 0;
  virtual ViStatus CreateFreqList(ViSession vi, ViInt32 waveform, ViInt32 frequencyListLength, ViReal64 frequencyArray[], ViReal64 durationArray[], ViInt32* frequencyListHandle) = 0;
  virtual ViStatus CreateWaveformF64(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[], ViInt32* waveformHandle) = 0;
  virtual ViStatus CreateWaveformFromFileF64(ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle) = 0;
  virtual ViStatus CreateWaveformFromFileHws(ViSession vi, ViConstString channelName, ViConstString fileName, ViBoolean useRateFromWaveform, ViBoolean useGainAndOffsetFromWaveform, ViInt32* waveformHandle) = 0;
  virtual ViStatus CreateWaveformFromFileI16(ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle) = 0;
  virtual ViStatus DefineUserStandardWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[]) = 0;
  virtual ViStatus DeleteNamedWaveform(ViSession vi, ViConstString channelName, ViConstString waveformName) = 0;
  virtual ViStatus DeleteScript(ViSession vi, ViConstString channelName, ViConstString scriptName) = 0;
  virtual ViStatus Disable(ViSession vi) = 0;
  virtual ViStatus DisableAnalogFilter(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus DisableDigitalFilter(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus DisableDigitalPatterning(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus DisableScriptTrigger(ViSession vi, ViConstString triggerId) = 0;
  virtual ViStatus DisableStartTrigger(ViSession vi) = 0;
  virtual ViStatus EnableAnalogFilter(ViSession vi, ViConstString channelName, ViReal64 filterCorrectionFrequency) = 0;
  virtual ViStatus EnableDigitalFilter(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus EnableDigitalPatterning(ViSession vi, ViConstString channelName) = 0;
  virtual ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViAddr configuration[]) = 0;
  virtual ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal) = 0;
  virtual ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue) = 0;
  virtual ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue) = 0;
  virtual ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue) = 0;
  virtual ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 arraySize, ViChar attributeValue[]) = 0;
  virtual ViStatus GetCalUserDefinedInfo(ViSession vi, ViChar info[256]) = 0;
  virtual ViStatus GetCalUserDefinedInfoMaxSize(ViSession vi, ViInt32* infoSize) = 0;
  virtual ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelString[]) = 0;
  virtual ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]) = 0;
  virtual ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temperature) = 0;
  virtual ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months) = 0;
  virtual ViStatus GetFirFilterCoefficients(ViSession vi, ViConstString channelName, ViInt32 arraySize, ViReal64 coefficientsArray[], ViInt32* numberOfCoefficientsRead) = 0;
  virtual ViStatus GetHardwareState(ViSession vi, ViInt32* state) = 0;
  virtual ViStatus GetSelfCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetSelfCalLastTemp(ViSession vi, ViReal64* temperature) = 0;
  virtual ViStatus GetSelfCalSupported(ViSession vi, ViBoolean* selfCalSupported) = 0;
  virtual ViStatus GetStreamEndpointHandle(ViSession vi, ViConstString streamEndpoint, ViUInt32* readerHandle) = 0;
  virtual ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViAddr configuration[]) = 0;
  virtual ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus InitExtCal(ViRsrc resourceName, ViConstString password, ViSession* vi) = 0;
  virtual ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus InitializeWithChannels(ViRsrc resourceName, ViConstString channelName, ViBoolean resetDevice, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus InitializeAnalogOutputCalibration(ViSession vi) = 0;
  virtual ViStatus InitializeCalAdcCalibration(ViSession vi) = 0;
  virtual ViStatus InitializeFlatnessCalibration(ViSession vi) = 0;
  virtual ViStatus InitializeOscillatorFrequencyCalibration(ViSession vi) = 0;
  virtual ViStatus InitiateGeneration(ViSession vi) = 0;
  virtual ViStatus InvalidateAllAttributes(ViSession vi) = 0;
  virtual ViStatus IsDone(ViSession vi, ViBoolean* done) = 0;
  virtual ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus ManualEnableP2pStream(ViSession vi, ViConstString endpointName) = 0;
  virtual ViStatus QueryArbSeqCapabilities(ViSession vi, ViInt32* maximumNumberOfSequences, ViInt32* minimumSequenceLength, ViInt32* maximumSequenceLength, ViInt32* maximumLoopCount) = 0;
  virtual ViStatus QueryArbWfmCapabilities(ViSession vi, ViInt32* maximumNumberOfWaveforms, ViInt32* waveformQuantum, ViInt32* minimumWaveformSize, ViInt32* maximumWaveformSize) = 0;
  virtual ViStatus QueryFreqListCapabilities(ViSession vi, ViInt32* maximumNumberOfFreqLists, ViInt32* minimumFrequencyListLength, ViInt32* maximumFrequencyListLength, ViReal64* minimumFrequencyListDuration, ViReal64* maximumFrequencyListDuration, ViReal64* frequencyListDurationQuantum) = 0;
  virtual ViStatus ReadCalAdc(ViSession vi, ViInt32 numberOfReadsToAverage, ViBoolean returnCalibratedValue, ViReal64* calAdcValue) = 0;
  virtual ViStatus ReadCurrentTemperature(ViSession vi, ViReal64* temperature) = 0;
  virtual ViStatus Reset(ViSession vi) = 0;
  virtual ViStatus ResetAttribute(ViSession vi, ViConstString channelName, ViAttr attributeId) = 0;
  virtual ViStatus ResetDevice(ViSession vi) = 0;
  virtual ViStatus ResetInterchangeCheck(ViSession vi) = 0;
  virtual ViStatus ResetWithDefaults(ViSession vi) = 0;
  virtual ViStatus RestoreLastExtCalConstants(ViSession vi) = 0;
  virtual ViStatus RouteSignalOut(ViSession vi, ViConstString channelName, ViInt32 routeSignalFrom, ViInt32 routeSignalTo) = 0;
  virtual ViStatus SelfCal(ViSession vi) = 0;
  virtual ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]) = 0;
  virtual ViStatus SendSoftwareTrigger(ViSession vi) = 0;
  virtual ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue) = 0;
  virtual ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue) = 0;
  virtual ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue) = 0;
  virtual ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue) = 0;
  virtual ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue) = 0;
  virtual ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue) = 0;
  virtual ViStatus SetCalUserDefinedInfo(ViSession vi, ViConstString info) = 0;
  virtual ViStatus SetNamedWaveformNextWritePosition(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 relativeTo, ViInt32 offset) = 0;
  virtual ViStatus SetWaveformNextWritePosition(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 relativeTo, ViInt32 offset) = 0;
  virtual ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus WaitUntilDone(ViSession vi, ViInt32 maxTime) = 0;
  virtual ViStatus WriteBinary16AnalogStaticValue(ViSession vi, ViConstString channelName, ViInt16 value) = 0;
  virtual ViStatus WriteNamedWaveformF64(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViReal64 data[]) = 0;
  virtual ViStatus WriteScript(ViSession vi, ViConstString channelName, ViConstString script) = 0;
  virtual ViStatus WriteWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViReal64 data[]) = 0;
};

}  // namespace nifgen_grpc
#endif  // NIFGEN_GRPC_LIBRARY_WRAPPER_H
