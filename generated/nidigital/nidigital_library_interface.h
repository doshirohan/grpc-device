//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-Digital Pattern Driver
//---------------------------------------------------------------------
#ifndef NIDIGITAL_GRPC_LIBRARY_WRAPPER_H
#define NIDIGITAL_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niDigital.h>

namespace nidigital_grpc {

class NiDigitalLibraryInterface {
 public:
  virtual ~NiDigitalLibraryInterface() {}

  virtual ViStatus Abort(ViSession vi) = 0;
  virtual ViStatus AbortKeepAlive(ViSession vi) = 0;
  virtual ViStatus ApplyLevelsAndTiming(ViSession vi, ViConstString siteList, ViConstString levelsSheet, ViConstString timingSheet, ViConstString initialStateHighPins, ViConstString initialStateLowPins, ViConstString initialStateTristatePins) = 0;
  virtual ViStatus ApplyTDROffsets(ViSession vi, ViConstString channelList, ViInt32 numOffsets, ViReal64 offsets[]) = 0;
  virtual ViStatus BurstPattern(ViSession vi, ViConstString siteList, ViConstString startLabel, ViBoolean selectDigitalFunction, ViBoolean waitUntilDone, ViReal64 timeout) = 0;
  virtual ViStatus ClockGeneratorAbort(ViSession vi, ViConstString channelList) = 0;
  virtual ViStatus ClockGeneratorGenerateClock(ViSession vi, ViConstString channelList, ViReal64 frequency, ViBoolean selectDigitalFunction) = 0;
  virtual ViStatus ClockGeneratorInitiate(ViSession vi, ViConstString channelList) = 0;
  virtual ViStatus Close(ViSession vi) = 0;
  virtual ViStatus Commit(ViSession vi) = 0;
  virtual ViStatus ConfigureActiveLoadLevels(ViSession vi, ViConstString channelList, ViReal64 iol, ViReal64 ioh, ViReal64 vcom) = 0;
  virtual ViStatus ConfigureCycleNumberHistoryRAMTrigger(ViSession vi, ViInt64 cycleNumber, ViInt32 pretriggerSamples) = 0;
  virtual ViStatus ConfigureDigitalEdgeConditionalJumpTrigger(ViSession vi, ViConstString triggerIdentifier, ViConstString source, ViInt32 edge) = 0;
  virtual ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString source, ViInt32 edge) = 0;
  virtual ViStatus ConfigureFirstFailureHistoryRAMTrigger(ViSession vi, ViInt32 pretriggerSamples) = 0;
  virtual ViStatus ConfigureHistoryRAMCyclesToAcquire(ViSession vi, ViInt32 cyclesToAcquire) = 0;
  virtual ViStatus ConfigurePatternBurstSites(ViSession vi, ViConstString siteList) = 0;
  virtual ViStatus ConfigurePatternLabelHistoryRAMTrigger(ViSession vi, ViConstString label, ViInt64 vectorOffset, ViInt64 cycleOffset, ViInt32 pretriggerSamples) = 0;
  virtual ViStatus ConfigureStartLabel(ViSession vi, ViConstString label) = 0;
  virtual ViStatus ConfigureSoftwareEdgeConditionalJumpTrigger(ViSession vi, ViConstString triggerIdentifier) = 0;
  virtual ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi) = 0;
  virtual ViStatus ConfigureTerminationMode(ViSession vi, ViConstString channelList, ViInt32 mode) = 0;
  virtual ViStatus ConfigureTimeSetCompareEdgesStrobe(ViSession vi, ViConstString pinList, ViConstString timeSetName, ViReal64 strobeEdge) = 0;
  virtual ViStatus ConfigureTimeSetCompareEdgesStrobe2x(ViSession vi, ViConstString pinList, ViConstString timeSetName, ViReal64 strobeEdge, ViReal64 strobe2Edge) = 0;
  virtual ViStatus ConfigureTimeSetDriveEdges(ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 format, ViReal64 driveOnEdge, ViReal64 driveDataEdge, ViReal64 driveReturnEdge, ViReal64 driveOffEdge) = 0;
  virtual ViStatus ConfigureTimeSetDriveEdges2x(ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 format, ViReal64 driveOnEdge, ViReal64 driveDataEdge, ViReal64 driveReturnEdge, ViReal64 driveOffEdge, ViReal64 driveData2Edge, ViReal64 driveReturn2Edge) = 0;
  virtual ViStatus ConfigureTimeSetDriveFormat(ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 driveFormat) = 0;
  virtual ViStatus ConfigureTimeSetEdge(ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 edge, ViReal64 time) = 0;
  virtual ViStatus ConfigureTimeSetEdgeMultiplier(ViSession vi, ViConstString pinList, ViConstString timeSetName, ViInt32 edgeMultiplier) = 0;
  virtual ViStatus ConfigureTimeSetPeriod(ViSession vi, ViConstString timeSetName, ViReal64 period) = 0;
  virtual ViStatus ConfigureVoltageLevels(ViSession vi, ViConstString channelList, ViReal64 vil, ViReal64 vih, ViReal64 vol, ViReal64 voh, ViReal64 vterm) = 0;
  virtual ViStatus CreateCaptureWaveformFromFileDigicapture(ViSession vi, ViConstString waveformName, ViConstString waveformFilePath) = 0;
  virtual ViStatus CreateCaptureWaveformParallel(ViSession vi, ViConstString pinList, ViConstString waveformName) = 0;
  virtual ViStatus CreateCaptureWaveformSerial(ViSession vi, ViConstString pinList, ViConstString waveformName, ViUInt32 sampleWidth, ViInt32 bitOrder) = 0;
  virtual ViStatus CreateChannelMap(ViSession vi, ViInt32 numSites) = 0;
  virtual ViStatus CreateSourceWaveformFromFileTDMS(ViSession vi, ViConstString waveformName, ViConstString waveformFilePath, ViBoolean writeWaveformData) = 0;
  virtual ViStatus CreatePinMap(ViSession vi, ViConstString dutPinList, ViConstString systemPinList) = 0;
  virtual ViStatus CreatePinGroup(ViSession vi, ViConstString pinGroupName, ViConstString pinList) = 0;
  virtual ViStatus CreateSourceWaveformParallel(ViSession vi, ViConstString pinList, ViConstString waveformName, ViInt32 dataMapping) = 0;
  virtual ViStatus CreateSourceWaveformSerial(ViSession vi, ViConstString pinList, ViConstString waveformName, ViInt32 dataMapping, ViUInt32 sampleWidth, ViInt32 bitOrder) = 0;
  virtual ViStatus CreateTimeSet(ViSession vi, ViConstString name) = 0;
  virtual ViStatus DeleteAllTimeSets(ViSession vi) = 0;
  virtual ViStatus DisableConditionalJumpTrigger(ViSession vi, ViConstString triggerIdentifier) = 0;
  virtual ViStatus DisableSites(ViSession vi, ViConstString siteList) = 0;
  virtual ViStatus DisableStartTrigger(ViSession vi) = 0;
  virtual ViStatus EnableSites(ViSession vi, ViConstString siteList) = 0;
  virtual ViStatus EndChannelMap(ViSession vi) = 0;
  virtual ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal) = 0;
  virtual ViStatus FetchHistoryRAMCycleInformation(ViSession vi, ViConstString site, ViInt64 sampleIndex, ViInt32* patternIndex, ViInt32* timeSetIndex, ViInt64* vectorNumber, ViInt64* cycleNumber, ViInt32* numDutCycles) = 0;
  virtual ViStatus FetchHistoryRAMScanCycleNumber(ViSession vi, ViConstString site, ViInt64 sampleIndex, ViInt64* scanCycleNumber) = 0;
  virtual ViStatus FrequencyCounterConfigureMeasurementMode(ViSession vi, ViInt32 measurementMode) = 0;
  virtual ViStatus FrequencyCounterConfigureMeasurementTime(ViSession vi, ViConstString channelList, ViReal64 measurementTime) = 0;
  virtual ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean* value) = 0;
  virtual ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32* value) = 0;
  virtual ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt64* value) = 0;
  virtual ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64* value) = 0;
  virtual ViStatus GetAttributeViSession(ViSession vi, ViConstString channelList, ViAttr attribute, ViSession* value) = 0;
  virtual ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 bufferSize, ViChar value[]) = 0;
  virtual ViStatus GetChannelNameFromString(ViSession vi, ViConstString indices, ViInt32 nameBufferSize, ViChar names[]) = 0;
  virtual ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]) = 0;
  virtual ViStatus GetHistoryRAMSampleCount(ViSession vi, ViConstString site, ViInt64* sampleCount) = 0;
  virtual ViStatus GetPatternName(ViSession vi, ViInt32 patternIndex, ViInt32 nameBufferSize, ViChar name[]) = 0;
  virtual ViStatus GetPatternPinList(ViSession vi, ViConstString startLabel, ViInt32 pinListBufferSize, ViChar pinList[]) = 0;
  virtual ViStatus GetPinName(ViSession vi, ViInt32 pinIndex, ViInt32 nameBufferSize, ViChar name[]) = 0;
  virtual ViStatus GetTimeSetDriveFormat(ViSession vi, ViConstString pin, ViConstString timeSetName, ViInt32* format) = 0;
  virtual ViStatus GetTimeSetEdge(ViSession vi, ViConstString pin, ViConstString timeSetName, ViInt32 edge, ViReal64* time) = 0;
  virtual ViStatus GetTimeSetEdgeMultiplier(ViSession vi, ViConstString pin, ViConstString timeSetName, ViInt32* edgeMultiplier) = 0;
  virtual ViStatus GetTimeSetName(ViSession vi, ViInt32 timeSetIndex, ViInt32 nameBufferSize, ViChar name[]) = 0;
  virtual ViStatus GetTimeSetPeriod(ViSession vi, ViConstString timeSetName, ViReal64* period) = 0;
  virtual ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi) = 0;
  virtual ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus Initiate(ViSession vi) = 0;
  virtual ViStatus IsDone(ViSession vi, ViBoolean* done) = 0;
  virtual ViStatus IsSiteEnabled(ViSession vi, ViConstString site, ViBoolean* enable) = 0;
  virtual ViStatus LoadLevels(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus LoadPattern(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus LoadPinMap(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus LoadSpecifications(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus LoadTiming(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus MapPinToChannel(ViSession vi, ViConstString pin, ViInt32 site, ViConstString channel) = 0;
  virtual ViStatus PPMUConfigureApertureTime(ViSession vi, ViConstString channelList, ViReal64 apertureTime, ViInt32 units) = 0;
  virtual ViStatus PPMUConfigureCurrentLevel(ViSession vi, ViConstString channelList, ViReal64 currentLevel) = 0;
  virtual ViStatus PPMUConfigureCurrentLevelRange(ViSession vi, ViConstString channelList, ViReal64 range) = 0;
  virtual ViStatus PPMUConfigureCurrentLimit(ViSession vi, ViConstString channelList, ViInt32 behavior, ViReal64 limit) = 0;
  virtual ViStatus PPMUConfigureCurrentLimitRange(ViSession vi, ViConstString channelList, ViReal64 range) = 0;
  virtual ViStatus PPMUConfigureOutputFunction(ViSession vi, ViConstString channelList, ViInt32 outputFunction) = 0;
  virtual ViStatus PPMUConfigureVoltageLevel(ViSession vi, ViConstString channelList, ViReal64 voltageLevel) = 0;
  virtual ViStatus PPMUConfigureVoltageLimits(ViSession vi, ViConstString channelList, ViReal64 lowerVoltageLimit, ViReal64 upperVoltageLimit) = 0;
  virtual ViStatus PPMUSource(ViSession vi, ViConstString channelList) = 0;
  virtual ViStatus ReadSequencerFlag(ViSession vi, ViConstString flag, ViBoolean* value) = 0;
  virtual ViStatus ReadSequencerRegister(ViSession vi, ViConstString reg, ViInt32* value) = 0;
  virtual ViStatus Reset(ViSession vi) = 0;
  virtual ViStatus ResetDevice(ViSession vi) = 0;
  virtual ViStatus SelfCalibrate(ViSession vi) = 0;
  virtual ViStatus SelfTest(ViSession vi, ViInt16* testResult, ViChar testMessage[2048]) = 0;
  virtual ViStatus SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger, ViConstString triggerIdentifier) = 0;
  virtual ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean value) = 0;
  virtual ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 value) = 0;
  virtual ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attribute, ViInt64 value) = 0;
  virtual ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 value) = 0;
  virtual ViStatus SetAttributeViSession(ViSession vi, ViConstString channelList, ViAttr attribute, ViSession value) = 0;
  virtual ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attribute, ViConstString value) = 0;
  virtual ViStatus UnloadAllPatterns(ViSession vi, ViBoolean unloadKeepAlivePattern) = 0;
  virtual ViStatus UnloadSpecifications(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus WaitUntilDone(ViSession vi, ViReal64 timeout) = 0;
  virtual ViStatus WriteSequencerFlag(ViSession vi, ViConstString flag, ViBoolean value) = 0;
  virtual ViStatus WriteSequencerRegister(ViSession vi, ViConstString reg, ViInt32 value) = 0;
  virtual ViStatus WriteSourceWaveformDataFromFileTDMS(ViSession vi, ViConstString waveformName, ViConstString waveformFilePath) = 0;
};

}  // namespace nidigital_grpc
#endif  // NIDIGITAL_GRPC_LIBRARY_WRAPPER_H
