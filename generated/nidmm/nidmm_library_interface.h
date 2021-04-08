//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-DMM
//---------------------------------------------------------------------
#ifndef NIDMM_GRPC_LIBRARY_WRAPPER_H
#define NIDMM_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <nidmm.h>

namespace nidmm_grpc {

class NiDMMLibraryInterface {
 public:
  virtual ~NiDMMLibraryInterface() {}

  virtual ViStatus Abort(ViSession vi) = 0;
  virtual ViStatus ConfigureMeasurementAbsolute(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionAbsolute) = 0;
  virtual ViStatus ConfigureMeasurementDigits(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionDigits) = 0;
  virtual ViStatus ConfigureMultiPoint(ViSession vi, ViInt32 triggerCount, ViInt32 sampleCount, ViInt32 sampleTrigger, ViReal64 sampleInterval) = 0;
  virtual ViStatus ConfigureRTDCustom(ViSession vi, ViReal64 rtdA, ViReal64 rtdB, ViReal64 rtdC) = 0;
  virtual ViStatus ConfigureRTDType(ViSession vi, ViInt32 rtdType, ViReal64 rtdResistance) = 0;
  virtual ViStatus ConfigureThermistorCustom(ViSession vi, ViReal64 thermistorA, ViReal64 thermistorB, ViReal64 thermistorC) = 0;
  virtual ViStatus ConfigureThermocouple(ViSession vi, ViInt32 thermocoupleType, ViInt32 referenceJunctionType) = 0;
  virtual ViStatus ConfigureTrigger(ViSession vi, ViInt32 triggerSource, ViReal64 triggerDelay) = 0;
  virtual ViStatus ConfigureWaveformAcquisition(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 rate, ViInt32 waveformPoints) = 0;
  virtual ViStatus Disable(ViSession vi) = 0;
  virtual ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[]) = 0;
  virtual ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus Fetch(ViSession vi, ViInt32 maximumTime, ViReal64* reading) = 0;
  virtual ViStatus FetchMultiPoint(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints) = 0;
  virtual ViStatus FetchWaveform(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints) = 0;
  virtual ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue) = 0;
  virtual ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue) = 0;
  virtual ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]) = 0;
  virtual ViStatus GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetDevTemp(ViSession vi, ViString options, ViReal64* temperature) = 0;
  virtual ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]) = 0;
  virtual ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months) = 0;
  virtual ViStatus GetLastCalTemp(ViSession vi, ViInt32 calType, ViReal64* temperature) = 0;
  virtual ViStatus GetSelfCalSupported(ViSession vi, ViBoolean* selfCalSupported) = 0;
  virtual ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[]) = 0;
  virtual ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath) = 0;
  virtual ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi) = 0;
  virtual ViStatus InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViString optionString, ViSession* vi) = 0;
  virtual ViStatus Initiate(ViSession vi) = 0;
  virtual ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus PerformOpenCableComp(ViSession vi, ViReal64* conductance, ViReal64* susceptance) = 0;
  virtual ViStatus PerformShortCableComp(ViSession vi, ViReal64* resistance, ViReal64* reactance) = 0;
  virtual ViStatus Read(ViSession vi, ViInt32 maximumTime, ViReal64* reading) = 0;
  virtual ViStatus ReadMultiPoint(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints) = 0;
  virtual ViStatus ReadStatus(ViSession vi, ViInt32* acquisitionBacklog, ViInt16* acquisitionStatus) = 0;
  virtual ViStatus ReadWaveform(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints) = 0;
  virtual ViStatus ResetWithDefaults(ViSession vi) = 0;
  virtual ViStatus SelfCal(ViSession vi) = 0;
  virtual ViStatus SendSoftwareTrigger(ViSession vi) = 0;
  virtual ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue) = 0;
  virtual ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue) = 0;
  virtual ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue) = 0;
  virtual ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViString attributeValue) = 0;
  virtual ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock) = 0;
  virtual ViStatus close(ViSession vi) = 0;
  virtual ViStatus error_message(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus reset(ViSession vi) = 0;
  virtual ViStatus self_test(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]) = 0;
};

}  // namespace nidmm_grpc
#endif  // NIDMM_GRPC_LIBRARY_WRAPPER_H
