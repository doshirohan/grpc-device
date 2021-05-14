//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-FAKE
//---------------------------------------------------------------------
#ifndef NIFAKE_GRPC_MOCK_LIBRARY_H
#define NIFAKE_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nifake_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiFakeMockLibrary : public nifake_grpc::NiFakeLibraryInterface {
 public:
  MOCK_METHOD(ViStatus, Abort, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, AcceptListOfDurationsInSeconds, (ViSession vi, ViInt32 count, ViReal64 delays[]), (override));
  MOCK_METHOD(ViStatus, BoolArrayOutputFunction, (ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]), (override));
  MOCK_METHOD(ViStatus, BoolArrayInputFunction, (ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]), (override));
  MOCK_METHOD(ViStatus, DoubleAllTheNums, (ViSession vi, ViInt32 numberCount, ViReal64 numbers[]), (override));
  MOCK_METHOD(ViStatus, EnumArrayOutputFunction, (ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[]), (override));
  MOCK_METHOD(ViStatus, EnumInputFunctionWithDefaults, (ViSession vi, ViInt16 aTurtle), (override));
  MOCK_METHOD(ViStatus, ExportAttributeConfigurationBuffer, (ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]), (override));
  MOCK_METHOD(ViStatus, FetchWaveform, (ViSession vi, ViInt32 numberOfSamples, ViReal64 waveformData[], ViInt32* actualNumberOfSamples), (override));
  MOCK_METHOD(ViStatus, GetABoolean, (ViSession vi, ViBoolean* aBoolean), (override));
  MOCK_METHOD(ViStatus, GetANumber, (ViSession vi, ViInt16* aNumber), (override));
  MOCK_METHOD(ViStatus, GetAStringOfFixedMaximumSize, (ViSession vi, ViChar aString[256]), (override));
  MOCK_METHOD(ViStatus, GetAnIviDanceString, (ViSession vi, ViInt32 bufferSize, ViChar aString[]), (override));
  MOCK_METHOD(ViStatus, GetAnIviDanceWithATwistString, (ViSession vi, ViInt32 bufferSize, ViChar aString[], ViInt32* actualSize), (override));
  MOCK_METHOD(ViStatus, GetArraySizeForCustomCode, (ViSession vi, ViInt32* sizeOut), (override));
  MOCK_METHOD(ViStatus, GetArrayUsingIviDance, (ViSession vi, ViInt32 arraySize, ViReal64 arrayOut[]), (override));
  MOCK_METHOD(ViStatus, GetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue), (override));
  MOCK_METHOD(ViStatus, GetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]), (override));
  MOCK_METHOD(ViStatus, GetCalDateAndTime, (ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute), (override));
  MOCK_METHOD(ViStatus, GetCalInterval, (ViSession vi, ViInt32* months), (override));
  MOCK_METHOD(ViStatus, GetCustomTypeArray, (ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]), (override));
  MOCK_METHOD(ViStatus, GetEnumValue, (ViSession vi, ViInt32* aQuantity, ViInt16* aTurtle), (override));
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]), (override));
  MOCK_METHOD(ViStatus, GetViInt32Array, (ViSession vi, ViInt32 arrayLen, ViInt32 int32Arrat[]), (override));
  MOCK_METHOD(ViStatus, ImportAttributeConfigurationBuffer, (ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]), (override));
  MOCK_METHOD(ViStatus, InitWithOptions, (ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, Initiate, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, InitExtCal, (ViRsrc resourceName, ViString calibrationPassword, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, MultipleArrayTypes, (ViSession vi, ViInt32 outputArraySize, ViReal64 outputArray[], ViReal64 outputArrayOfFixedLength[3], ViInt32 inputArraySizes, ViReal64 inputArrayOfFloats[], ViInt16 inputArrayOfIntegers[]), (override));
  MOCK_METHOD(ViStatus, MultipleArraysSameSize, (ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], ViInt32 size), (override));
  MOCK_METHOD(ViStatus, OneInputFunction, (ViSession vi, ViInt32 aNumber), (override));
  MOCK_METHOD(ViStatus, ParametersAreMultipleTypes, (ViSession vi, ViBoolean aBoolean, ViInt32 anInt32, ViInt64 anInt64, ViInt16 anIntEnum, ViReal64 aFloat, ViReal64 aFloatEnum, ViInt32 stringSize, ViConstString aString), (override));
  MOCK_METHOD(ViStatus, PoorlyNamedSimpleFunction, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, Read, (ViSession vi, ViReal64 maximumTime, ViReal64* reading), (override));
  MOCK_METHOD(ViStatus, ReadFromChannel, (ViSession vi, ViConstString channelName, ViInt32 maximumTime, ViReal64* reading), (override));
  MOCK_METHOD(ViStatus, ReturnANumberAndAString, (ViSession vi, ViInt16* aNumber, ViChar aString[256]), (override));
  MOCK_METHOD(ViStatus, ReturnDurationInSeconds, (ViSession vi, ViReal64* timedelta), (override));
  MOCK_METHOD(ViStatus, ReturnListOfDurationsInSeconds, (ViSession vi, ViInt32 numberOfElements, ViReal64 timedeltas[]), (override));
  MOCK_METHOD(ViStatus, ReturnMultipleTypes, (ViSession vi, ViBoolean* aBoolean, ViInt32* anInt32, ViInt64* anInt64, ViInt16* anIntEnum, ViReal64* aFloat, ViReal64* aFloatEnum, ViInt32 arraySize, ViReal64 anArray[], ViInt32 stringSize, ViChar aString[]), (override));
  MOCK_METHOD(ViStatus, SetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue), (override));
  MOCK_METHOD(ViStatus, SetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue), (override));
  MOCK_METHOD(ViStatus, StringValuedEnumInputFunctionWithDefaults, (ViSession vi, ViConstString aMobileOSName), (override));
  MOCK_METHOD(ViStatus, TwoInputFunction, (ViSession vi, ViReal64 aNumber, ViString aString), (override));
  MOCK_METHOD(ViStatus, Use64BitNumber, (ViSession vi, ViInt64 input, ViInt64* output), (override));
  MOCK_METHOD(ViStatus, WriteWaveform, (ViSession vi, ViInt32 numberOfSamples, ViReal64 waveform[]), (override));
  MOCK_METHOD(ViStatus, close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, CloseExtCal, (ViSession vi, ViInt32 action), (override));
  MOCK_METHOD(ViStatus, error_message, (ViSession vi, ViStatus errorCode, ViChar errorMessage[256]), (override));
  MOCK_METHOD(ViStatus, self_test, (ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIFAKE_GRPC_MOCK_LIBRARY_H
