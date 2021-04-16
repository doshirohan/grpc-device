//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-DMM
//---------------------------------------------------------------------
#ifndef NIDMM_GRPC_LIBRARY_H
#define NIDMM_GRPC_LIBRARY_H

#include "nidmm_library_interface.h"

#include <server/shared_library.h>

namespace nidmm_grpc {

class NiDMMLibrary : public nidmm_grpc::NiDMMLibraryInterface {
 public:
  NiDMMLibrary();
  virtual ~NiDMMLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus Abort(ViSession vi);
  ViStatus CalAdjustGain(ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 inputResistance, ViReal64 expectedValue);
  ViStatus CalAdjustACFilter(ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 frequency, ViReal64 expectedValue);
  ViStatus CalAdjustLC(ViSession vi, ViInt32 type);
  ViStatus CalAdjustLinearization(ViSession vi, ViInt32 function, ViReal64 range, ViReal64 inputResistance, ViReal64 expectedValue);
  ViStatus CalAdjustMisc(ViSession vi, ViInt32 type);
  ViStatus CalAdjustOffset(ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 inputResistance);
  ViStatus CheckAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus CheckAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus CheckAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus CheckAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  ViStatus ClearError(ViSession vi);
  ViStatus ClearInterchangeWarnings(ViSession vi);
  ViStatus close(ViSession vi);
  ViStatus CloseExtCal(ViSession vi, ViInt32 action);
  ViStatus ConfigureACBandwidth(ViSession vi, ViReal64 acMinimumFrequencyHz, ViReal64 acMaximumFrequencyHz);
  ViStatus ConfigureADCCalibration(ViSession vi, ViInt32 adcCalibration);
  ViStatus ConfigureAutoZeroMode(ViSession vi, ViInt32 autoZeroMode);
  ViStatus ConfigureCableCompType(ViSession vi, ViInt32 cableCompType);
  ViStatus ConfigureCurrentSource(ViSession vi, ViReal64 currentSource);
  ViStatus ConfigureFixedRefJunction(ViSession vi, ViReal64 fixedReferenceJunction);
  ViStatus ConfigureFrequencyVoltageRange(ViSession vi, ViReal64 voltageRange);
  ViStatus ConfigureMeasCompleteDest(ViSession vi, ViInt32 measCompleteDestination);
  ViStatus ConfigureMeasurementAbsolute(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionAbsolute);
  ViStatus ConfigureMeasCompleteSlope(ViSession vi, ViInt32 measCompleteSlope);
  ViStatus ConfigureMeasurementDigits(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionDigits);
  ViStatus ConfigureMultiPoint(ViSession vi, ViInt32 triggerCount, ViInt32 sampleCount, ViInt32 sampleTrigger, ViReal64 sampleInterval);
  ViStatus ConfigureOffsetCompOhms(ViSession vi, ViInt32 offsetCompOhms);
  ViStatus ConfigureOpenCableCompValues(ViSession vi, ViReal64 conductance, ViReal64 susceptance);
  ViStatus ConfigurePowerLineFrequency(ViSession vi, ViReal64 powerLineFrequencyHz);
  ViStatus ConfigureRTDCustom(ViSession vi, ViReal64 rtdA, ViReal64 rtdB, ViReal64 rtdC);
  ViStatus ConfigureRTDType(ViSession vi, ViInt32 rtdType, ViReal64 rtdResistance);
  ViStatus ConfigureSampleTriggerSlope(ViSession vi, ViInt32 sampleTriggerSlope);
  ViStatus ConfigureThermistorCustom(ViSession vi, ViReal64 thermistorA, ViReal64 thermistorB, ViReal64 thermistorC);
  ViStatus ConfigureThermocouple(ViSession vi, ViInt32 thermocoupleType, ViInt32 referenceJunctionType);
  ViStatus ConfigureThermistorType(ViSession vi, ViInt32 thermistorType);
  ViStatus ConfigureTransducerType(ViSession vi, ViInt32 transducerType);
  ViStatus ConfigureTrigger(ViSession vi, ViInt32 triggerSource, ViReal64 triggerDelay);
  ViStatus ConfigureTriggerSlope(ViSession vi, ViInt32 triggerSlope);
  ViStatus ConfigureWaveformAcquisition(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 rate, ViInt32 waveformPoints);
  ViStatus ConfigureWaveformCoupling(ViSession vi, ViInt32 waveformCoupling);
  ViStatus Control(ViSession vi, ViInt32 controlAction);
  ViStatus Disable(ViSession vi);
  ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[]);
  ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus Fetch(ViSession vi, ViInt32 maximumTime, ViReal64* reading);
  ViStatus FetchMultiPoint(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints);
  ViStatus FetchWaveform(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints);
  ViStatus GetApertureTimeInfo(ViSession vi, ViReal64* apertureTime, ViInt32* apertureTimeUnits);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]);
  ViStatus GetAutoRangeValue(ViSession vi, ViReal64* actualRange);
  ViStatus GetCalCount(ViSession vi, ViInt32 calType, ViInt32* count);
  ViStatus GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute);
  ViStatus GetCalUserDefinedInfo(ViSession vi, ViInt32 bufferSize, ViChar info[256]);
  ViStatus GetCalUserDefinedInfoMaxSize(ViSession vi, ViInt32* infoSize);
  ViStatus GetDevTemp(ViSession vi, ViString options, ViReal64* temperature);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months);
  ViStatus GetLastCalTemp(ViSession vi, ViInt32 calType, ViReal64* temperature);
  ViStatus GetMeasurementPeriod(ViSession vi, ViReal64* period);
  ViStatus GetSelfCalSupported(ViSession vi, ViBoolean* selfCalSupported);
  ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 size, ViInt8 configuration[]);
  ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  ViStatus InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViString optionString, ViSession* vi);
  ViStatus Initiate(ViSession vi);
  ViStatus InvalidateAllAttributes(ViSession vi);
  ViStatus IsOverRange(ViSession vi, ViReal64 measurementValue, ViBoolean* isOverRange);
  ViStatus IsUnderRange(ViSession vi, ViReal64 measurementValue, ViBoolean* isUnderRange);
  ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus PerformOpenCableComp(ViSession vi, ViReal64* conductance, ViReal64* susceptance);
  ViStatus PerformShortCableComp(ViSession vi, ViReal64* resistance, ViReal64* reactance);
  ViStatus Read(ViSession vi, ViInt32 maximumTime, ViReal64* reading);
  ViStatus ReadMultiPoint(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints);
  ViStatus ReadStatus(ViSession vi, ViInt32* acquisitionBacklog, ViInt16* acquisitionStatus);
  ViStatus ReadWaveform(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints);
  ViStatus reset(ViSession vi);
  ViStatus ResetInterchangeCheck(ViSession vi);
  ViStatus ResetWithDefaults(ViSession vi);
  ViStatus RestoreLastExtCalConstants(ViSession vi);
  ViStatus SelfCal(ViSession vi);
  ViStatus self_test(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus SendSoftwareTrigger(ViSession vi);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViString attributeValue);
  ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock);

 private:
  using AbortPtr = ViStatus (*)(ViSession vi);
  using CalAdjustGainPtr = ViStatus (*)(ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 inputResistance, ViReal64 expectedValue);
  using CalAdjustACFilterPtr = ViStatus (*)(ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 frequency, ViReal64 expectedValue);
  using CalAdjustLCPtr = ViStatus (*)(ViSession vi, ViInt32 type);
  using CalAdjustLinearizationPtr = ViStatus (*)(ViSession vi, ViInt32 function, ViReal64 range, ViReal64 inputResistance, ViReal64 expectedValue);
  using CalAdjustMiscPtr = ViStatus (*)(ViSession vi, ViInt32 type);
  using CalAdjustOffsetPtr = ViStatus (*)(ViSession vi, ViInt32 mode, ViReal64 range, ViReal64 inputResistance);
  using CheckAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  using CheckAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  using CheckAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  using CheckAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  using ClearErrorPtr = ViStatus (*)(ViSession vi);
  using ClearInterchangeWarningsPtr = ViStatus (*)(ViSession vi);
  using closePtr = ViStatus (*)(ViSession vi);
  using CloseExtCalPtr = ViStatus (*)(ViSession vi, ViInt32 action);
  using ConfigureACBandwidthPtr = ViStatus (*)(ViSession vi, ViReal64 acMinimumFrequencyHz, ViReal64 acMaximumFrequencyHz);
  using ConfigureADCCalibrationPtr = ViStatus (*)(ViSession vi, ViInt32 adcCalibration);
  using ConfigureAutoZeroModePtr = ViStatus (*)(ViSession vi, ViInt32 autoZeroMode);
  using ConfigureCableCompTypePtr = ViStatus (*)(ViSession vi, ViInt32 cableCompType);
  using ConfigureCurrentSourcePtr = ViStatus (*)(ViSession vi, ViReal64 currentSource);
  using ConfigureFixedRefJunctionPtr = ViStatus (*)(ViSession vi, ViReal64 fixedReferenceJunction);
  using ConfigureFrequencyVoltageRangePtr = ViStatus (*)(ViSession vi, ViReal64 voltageRange);
  using ConfigureMeasCompleteDestPtr = ViStatus (*)(ViSession vi, ViInt32 measCompleteDestination);
  using ConfigureMeasurementAbsolutePtr = ViStatus (*)(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionAbsolute);
  using ConfigureMeasCompleteSlopePtr = ViStatus (*)(ViSession vi, ViInt32 measCompleteSlope);
  using ConfigureMeasurementDigitsPtr = ViStatus (*)(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 resolutionDigits);
  using ConfigureMultiPointPtr = ViStatus (*)(ViSession vi, ViInt32 triggerCount, ViInt32 sampleCount, ViInt32 sampleTrigger, ViReal64 sampleInterval);
  using ConfigureOffsetCompOhmsPtr = ViStatus (*)(ViSession vi, ViInt32 offsetCompOhms);
  using ConfigureOpenCableCompValuesPtr = ViStatus (*)(ViSession vi, ViReal64 conductance, ViReal64 susceptance);
  using ConfigurePowerLineFrequencyPtr = ViStatus (*)(ViSession vi, ViReal64 powerLineFrequencyHz);
  using ConfigureRTDCustomPtr = ViStatus (*)(ViSession vi, ViReal64 rtdA, ViReal64 rtdB, ViReal64 rtdC);
  using ConfigureRTDTypePtr = ViStatus (*)(ViSession vi, ViInt32 rtdType, ViReal64 rtdResistance);
  using ConfigureSampleTriggerSlopePtr = ViStatus (*)(ViSession vi, ViInt32 sampleTriggerSlope);
  using ConfigureThermistorCustomPtr = ViStatus (*)(ViSession vi, ViReal64 thermistorA, ViReal64 thermistorB, ViReal64 thermistorC);
  using ConfigureThermocouplePtr = ViStatus (*)(ViSession vi, ViInt32 thermocoupleType, ViInt32 referenceJunctionType);
  using ConfigureThermistorTypePtr = ViStatus (*)(ViSession vi, ViInt32 thermistorType);
  using ConfigureTransducerTypePtr = ViStatus (*)(ViSession vi, ViInt32 transducerType);
  using ConfigureTriggerPtr = ViStatus (*)(ViSession vi, ViInt32 triggerSource, ViReal64 triggerDelay);
  using ConfigureTriggerSlopePtr = ViStatus (*)(ViSession vi, ViInt32 triggerSlope);
  using ConfigureWaveformAcquisitionPtr = ViStatus (*)(ViSession vi, ViInt32 measurementFunction, ViReal64 range, ViReal64 rate, ViInt32 waveformPoints);
  using ConfigureWaveformCouplingPtr = ViStatus (*)(ViSession vi, ViInt32 waveformCoupling);
  using ControlPtr = ViStatus (*)(ViSession vi, ViInt32 controlAction);
  using DisablePtr = ViStatus (*)(ViSession vi);
  using ExportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 size, ViInt8 configuration[]);
  using ExportAttributeConfigurationFilePtr = ViStatus (*)(ViSession vi, ViConstString filePath);
  using FetchPtr = ViStatus (*)(ViSession vi, ViInt32 maximumTime, ViReal64* reading);
  using FetchMultiPointPtr = ViStatus (*)(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints);
  using FetchWaveformPtr = ViStatus (*)(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints);
  using GetApertureTimeInfoPtr = ViStatus (*)(ViSession vi, ViReal64* apertureTime, ViInt32* apertureTimeUnits);
  using GetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  using GetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  using GetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  using GetAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue);
  using GetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]);
  using GetAutoRangeValuePtr = ViStatus (*)(ViSession vi, ViReal64* actualRange);
  using GetCalCountPtr = ViStatus (*)(ViSession vi, ViInt32 calType, ViInt32* count);
  using GetCalDateAndTimePtr = ViStatus (*)(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute);
  using GetCalUserDefinedInfoPtr = ViStatus (*)(ViSession vi, ViInt32 bufferSize, ViChar info[256]);
  using GetCalUserDefinedInfoMaxSizePtr = ViStatus (*)(ViSession vi, ViInt32* infoSize);
  using GetDevTempPtr = ViStatus (*)(ViSession vi, ViString options, ViReal64* temperature);
  using GetErrorPtr = ViStatus (*)(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]);
  using GetExtCalRecommendedIntervalPtr = ViStatus (*)(ViSession vi, ViInt32* months);
  using GetLastCalTempPtr = ViStatus (*)(ViSession vi, ViInt32 calType, ViReal64* temperature);
  using GetMeasurementPeriodPtr = ViStatus (*)(ViSession vi, ViReal64* period);
  using GetSelfCalSupportedPtr = ViStatus (*)(ViSession vi, ViBoolean* selfCalSupported);
  using ImportAttributeConfigurationBufferPtr = ViStatus (*)(ViSession vi, ViInt32 size, ViInt8 configuration[]);
  using ImportAttributeConfigurationFilePtr = ViStatus (*)(ViSession vi, ViConstString filePath);
  using initPtr = ViStatus (*)(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  using InitWithOptionsPtr = ViStatus (*)(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViString optionString, ViSession* vi);
  using InitiatePtr = ViStatus (*)(ViSession vi);
  using InvalidateAllAttributesPtr = ViStatus (*)(ViSession vi);
  using IsOverRangePtr = ViStatus (*)(ViSession vi, ViReal64 measurementValue, ViBoolean* isOverRange);
  using IsUnderRangePtr = ViStatus (*)(ViSession vi, ViReal64 measurementValue, ViBoolean* isUnderRange);
  using LockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using PerformOpenCableCompPtr = ViStatus (*)(ViSession vi, ViReal64* conductance, ViReal64* susceptance);
  using PerformShortCableCompPtr = ViStatus (*)(ViSession vi, ViReal64* resistance, ViReal64* reactance);
  using ReadPtr = ViStatus (*)(ViSession vi, ViInt32 maximumTime, ViReal64* reading);
  using ReadMultiPointPtr = ViStatus (*)(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 readingArray[], ViInt32* actualNumberOfPoints);
  using ReadStatusPtr = ViStatus (*)(ViSession vi, ViInt32* acquisitionBacklog, ViInt16* acquisitionStatus);
  using ReadWaveformPtr = ViStatus (*)(ViSession vi, ViInt32 maximumTime, ViInt32 arraySize, ViReal64 waveformArray[], ViInt32* actualNumberOfPoints);
  using resetPtr = ViStatus (*)(ViSession vi);
  using ResetInterchangeCheckPtr = ViStatus (*)(ViSession vi);
  using ResetWithDefaultsPtr = ViStatus (*)(ViSession vi);
  using RestoreLastExtCalConstantsPtr = ViStatus (*)(ViSession vi);
  using SelfCalPtr = ViStatus (*)(ViSession vi);
  using self_testPtr = ViStatus (*)(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  using SendSoftwareTriggerPtr = ViStatus (*)(ViSession vi);
  using SetAttributeViBooleanPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  using SetAttributeViInt32Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  using SetAttributeViReal64Ptr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  using SetAttributeViSessionPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  using SetAttributeViStringPtr = ViStatus (*)(ViSession vi, ViConstString channelName, ViAttr attributeId, ViString attributeValue);
  using UnlockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);

  typedef struct FunctionPointers {
    AbortPtr Abort;
    CalAdjustGainPtr CalAdjustGain;
    CalAdjustACFilterPtr CalAdjustACFilter;
    CalAdjustLCPtr CalAdjustLC;
    CalAdjustLinearizationPtr CalAdjustLinearization;
    CalAdjustMiscPtr CalAdjustMisc;
    CalAdjustOffsetPtr CalAdjustOffset;
    CheckAttributeViBooleanPtr CheckAttributeViBoolean;
    CheckAttributeViInt32Ptr CheckAttributeViInt32;
    CheckAttributeViReal64Ptr CheckAttributeViReal64;
    CheckAttributeViSessionPtr CheckAttributeViSession;
    ClearErrorPtr ClearError;
    ClearInterchangeWarningsPtr ClearInterchangeWarnings;
    closePtr close;
    CloseExtCalPtr CloseExtCal;
    ConfigureACBandwidthPtr ConfigureACBandwidth;
    ConfigureADCCalibrationPtr ConfigureADCCalibration;
    ConfigureAutoZeroModePtr ConfigureAutoZeroMode;
    ConfigureCableCompTypePtr ConfigureCableCompType;
    ConfigureCurrentSourcePtr ConfigureCurrentSource;
    ConfigureFixedRefJunctionPtr ConfigureFixedRefJunction;
    ConfigureFrequencyVoltageRangePtr ConfigureFrequencyVoltageRange;
    ConfigureMeasCompleteDestPtr ConfigureMeasCompleteDest;
    ConfigureMeasurementAbsolutePtr ConfigureMeasurementAbsolute;
    ConfigureMeasCompleteSlopePtr ConfigureMeasCompleteSlope;
    ConfigureMeasurementDigitsPtr ConfigureMeasurementDigits;
    ConfigureMultiPointPtr ConfigureMultiPoint;
    ConfigureOffsetCompOhmsPtr ConfigureOffsetCompOhms;
    ConfigureOpenCableCompValuesPtr ConfigureOpenCableCompValues;
    ConfigurePowerLineFrequencyPtr ConfigurePowerLineFrequency;
    ConfigureRTDCustomPtr ConfigureRTDCustom;
    ConfigureRTDTypePtr ConfigureRTDType;
    ConfigureSampleTriggerSlopePtr ConfigureSampleTriggerSlope;
    ConfigureThermistorCustomPtr ConfigureThermistorCustom;
    ConfigureThermocouplePtr ConfigureThermocouple;
    ConfigureThermistorTypePtr ConfigureThermistorType;
    ConfigureTransducerTypePtr ConfigureTransducerType;
    ConfigureTriggerPtr ConfigureTrigger;
    ConfigureTriggerSlopePtr ConfigureTriggerSlope;
    ConfigureWaveformAcquisitionPtr ConfigureWaveformAcquisition;
    ConfigureWaveformCouplingPtr ConfigureWaveformCoupling;
    ControlPtr Control;
    DisablePtr Disable;
    ExportAttributeConfigurationBufferPtr ExportAttributeConfigurationBuffer;
    ExportAttributeConfigurationFilePtr ExportAttributeConfigurationFile;
    FetchPtr Fetch;
    FetchMultiPointPtr FetchMultiPoint;
    FetchWaveformPtr FetchWaveform;
    GetApertureTimeInfoPtr GetApertureTimeInfo;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViSessionPtr GetAttributeViSession;
    GetAttributeViStringPtr GetAttributeViString;
    GetAutoRangeValuePtr GetAutoRangeValue;
    GetCalCountPtr GetCalCount;
    GetCalDateAndTimePtr GetCalDateAndTime;
    GetCalUserDefinedInfoPtr GetCalUserDefinedInfo;
    GetCalUserDefinedInfoMaxSizePtr GetCalUserDefinedInfoMaxSize;
    GetDevTempPtr GetDevTemp;
    GetErrorPtr GetError;
    GetExtCalRecommendedIntervalPtr GetExtCalRecommendedInterval;
    GetLastCalTempPtr GetLastCalTemp;
    GetMeasurementPeriodPtr GetMeasurementPeriod;
    GetSelfCalSupportedPtr GetSelfCalSupported;
    ImportAttributeConfigurationBufferPtr ImportAttributeConfigurationBuffer;
    ImportAttributeConfigurationFilePtr ImportAttributeConfigurationFile;
    initPtr init;
    InitWithOptionsPtr InitWithOptions;
    InitiatePtr Initiate;
    InvalidateAllAttributesPtr InvalidateAllAttributes;
    IsOverRangePtr IsOverRange;
    IsUnderRangePtr IsUnderRange;
    LockSessionPtr LockSession;
    PerformOpenCableCompPtr PerformOpenCableComp;
    PerformShortCableCompPtr PerformShortCableComp;
    ReadPtr Read;
    ReadMultiPointPtr ReadMultiPoint;
    ReadStatusPtr ReadStatus;
    ReadWaveformPtr ReadWaveform;
    resetPtr reset;
    ResetInterchangeCheckPtr ResetInterchangeCheck;
    ResetWithDefaultsPtr ResetWithDefaults;
    RestoreLastExtCalConstantsPtr RestoreLastExtCalConstants;
    SelfCalPtr SelfCal;
    self_testPtr self_test;
    SendSoftwareTriggerPtr SendSoftwareTrigger;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViSessionPtr SetAttributeViSession;
    SetAttributeViStringPtr SetAttributeViString;
    UnlockSessionPtr UnlockSession;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nidmm_grpc

#endif  // NIDMM_GRPC_LIBRARY_H
