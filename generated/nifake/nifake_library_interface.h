//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-FAKE
//---------------------------------------------------------------------
#ifndef NIFAKE_GRPC_LIBRARY_WRAPPER_H
#define NIFAKE_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niFake.h>

namespace nifake_grpc {

class NiFakeLibraryInterface {
 public:
  virtual ~NiFakeLibraryInterface() {}

  virtual ViStatus Abort(ViSession vi) = 0;
  virtual ViStatus AcceptListOfDurationsInSeconds(ViSession vi, ViInt32 count, ViReal64 delays[]) = 0;
  virtual ViStatus AcceptViSessionArray(ViUInt32 sessionCount, ViSession sessionArray[]) = 0;
  virtual ViStatus AcceptViUInt32Array(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[]) = 0;
  virtual ViStatus BoolArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]) = 0;
  virtual ViStatus BoolArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViBoolean anArray[]) = 0;
  virtual ViStatus CommandWithReservedParam(ViSession vi, ViBoolean* reserved) = 0;
  virtual ViStatus CreateConfigurationList(ViInt32 numberOfListAttributes, ViAttr listAttributeIds[]) = 0;
  virtual ViStatus DoubleAllTheNums(ViSession vi, ViInt32 numberCount, ViReal64 numbers[]) = 0;
  virtual ViStatus EnumArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[]) = 0;
  virtual ViStatus EnumInputFunctionWithDefaults(ViSession vi, ViInt16 aTurtle) = 0;
  virtual ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]) = 0;
  virtual ViStatus FetchWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveformData[], ViInt32* actualNumberOfSamples) = 0;
  virtual ViStatus GetABoolean(ViSession vi, ViBoolean* aBoolean) = 0;
  virtual ViStatus GetANumber(ViSession vi, ViInt16* aNumber) = 0;
  virtual ViStatus GetAStringOfFixedMaximumSize(ViSession vi, ViChar aString[256]) = 0;
  virtual ViStatus GetBitfieldAsEnumArray(ViInt64* flags) = 0;
  virtual ViStatus GetAnIviDanceString(ViSession vi, ViInt32 bufferSize, ViChar aString[]) = 0;
  virtual ViStatus UseATwoDimensionParameter(ViSession vi, ViInt32 array[], ViInt32 arrayLengths[], ViInt32 arraySize) = 0;
  virtual ViStatus GetAnIviDanceWithATwistArray(ViSession vi, ViConstString aString, ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize) = 0;
  virtual ViStatus GetAnIviDanceWithATwistArrayOfCustomType(ViSession vi, ViInt32 bufferSize, CustomStruct arrayOut[], ViInt32* actualSize) = 0;
  virtual ViStatus GetAnIviDanceWithATwistArrayWithInputArray(ViInt32 dataIn[], ViInt32 arraySizeIn, ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize) = 0;
  virtual ViStatus GetAnIviDanceWithATwistByteArray(ViInt32 bufferSize, ViInt8 arrayOut[], ViInt32* actualSize) = 0;
  virtual ViStatus GetAnIviDanceWithATwistString(ViInt32 bufferSize, ViChar arrayOut[], ViInt32* actualSize) = 0;
  virtual ViStatus GetAnIviDanceWithATwistStringStrlenBug(ViInt32 bufferSize, ViChar stringOut[], ViInt32* actualSize) = 0;
  virtual ViStatus GetArraySizeForCustomCode(ViSession vi, ViInt32* sizeOut) = 0;
  virtual ViStatus GetArrayUsingIviDance(ViSession vi, ViInt32 arraySize, ViReal64 arrayOut[]) = 0;
  virtual ViStatus GetArrayViUInt8WithEnum(ViSession vi, ViInt32 arrayLen, ViUInt8 uInt8EnumArray[]) = 0;
  virtual ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue) = 0;
  virtual ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue) = 0;
  virtual ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue) = 0;
  virtual ViStatus GetAttributeViSession(ViSession vi, ViInt32 attributeId, ViSession* sessionOut) = 0;
  virtual ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufferSize, ViChar attributeValue[]) = 0;
  virtual ViStatus GetCalDateAndTime(ViSession vi, ViInt32 calType, ViInt32* month, ViInt32* day, ViInt32* year, ViInt32* hour, ViInt32* minute) = 0;
  virtual ViStatus GetCalInterval(ViSession vi, ViInt32* months) = 0;
  virtual ViStatus GetCustomType(ViSession vi, CustomStruct* cs) = 0;
  virtual ViStatus GetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]) = 0;
  virtual ViStatus GetEnumValue(ViSession vi, ViInt32* aQuantity, ViInt16* aTurtle) = 0;
  virtual ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]) = 0;
  virtual ViStatus GetViUInt8(ViSession vi, ViUInt8* aUint8Number) = 0;
  virtual ViStatus GetViInt32Array(ViSession vi, ViInt32 arrayLen, ViInt32 int32Array[]) = 0;
  virtual ViStatus GetViUInt32Array(ViSession vi, ViInt32 arrayLen, ViUInt32 uInt32Array[]) = 0;
  virtual ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]) = 0;
  virtual ViStatus InitWithOptions(ViString resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi) = 0;
  virtual ViStatus Initiate(ViSession vi) = 0;
  virtual ViStatus InitExtCal(ViRsrc resourceName, ViString calibrationPassword, ViSession* vi) = 0;
  virtual ViStatus InitWithVarArgs(ViRsrc resourceName, ViSession* vi, ViConstString stringArg, ViInt16 turtle, ViConstString stringArg0, ViInt16 turtle0, ViConstString stringArg1, ViInt16 turtle1, ViConstString stringArg2, ViInt16 turtle2) = 0;
  virtual ViStatus MultipleArrayTypes(ViSession vi, ViInt32 outputArraySize, ViReal64 outputArray[], ViReal64 outputArrayOfFixedLength[3], ViInt32 inputArraySizes, ViReal64 inputArrayOfFloats[], ViInt16 inputArrayOfIntegers[]) = 0;
  virtual ViStatus MultipleArraysSameSize(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], ViInt32 size) = 0;
  virtual ViStatus MultipleArraysSameSizeWithOptional(ViSession vi, ViReal64 values1[], ViReal64 values2[], ViReal64 values3[], ViReal64 values4[], CustomStruct values5[], ViInt32 size) = 0;
  virtual ViStatus OneInputFunction(ViSession vi, ViInt32 aNumber) = 0;
  virtual ViStatus ParametersAreMultipleTypes(ViSession vi, ViBoolean aBoolean, ViInt32 anInt32, ViInt64 anInt64, ViInt16 anIntEnum, ViReal64 aFloat, ViReal64 aFloatEnum, ViInt32 stringSize, ViConstString aString) = 0;
  virtual ViStatus PoorlyNamedSimpleFunction(ViSession vi) = 0;
  virtual ViStatus Read(ViSession vi, ViReal64 maximumTime, ViReal64* reading) = 0;
  virtual ViStatus ReadDataWithInOutIviTwist(ViInt32 data[], ViInt32* bufferSize) = 0;
  virtual ViStatus ReadDataWithMultpleIviTwistParamSets(ViInt32 bufferSize, ViInt32 arrayOut[], ViInt32* actualSize, ViInt32 otherBufferSize, ViInt32 otherArrayOut[], ViInt32* otherActualSize) = 0;
  virtual ViStatus ReadFromChannel(ViSession vi, ViConstString channelName, ViInt32 maximumTime, ViReal64* reading) = 0;
  virtual ViStatus ReturnANumberAndAString(ViSession vi, ViInt16* aNumber, ViChar aString[256]) = 0;
  virtual ViStatus ReturnDurationInSeconds(ViSession vi, ViReal64* timedelta) = 0;
  virtual ViStatus ReturnListOfDurationsInSeconds(ViSession vi, ViInt32 numberOfElements, ViReal64 timedeltas[]) = 0;
  virtual ViStatus ReturnMultipleTypes(ViSession vi, ViBoolean* aBoolean, ViInt32* anInt32, ViInt64* anInt64, ViInt16* anIntEnum, ViReal64* aFloat, ViReal64* aFloatEnum, ViInt32 arraySize, ViReal64 anArray[], ViInt32 stringSize, ViChar aString[]) = 0;
  virtual ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue) = 0;
  virtual ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue) = 0;
  virtual ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue) = 0;
  virtual ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue) = 0;
  virtual ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue) = 0;
  virtual ViStatus SetCustomType(ViSession vi, CustomStruct cs) = 0;
  virtual ViStatus SetCustomTypeArray(ViSession vi, ViInt32 numberOfElements, CustomStruct cs[]) = 0;
  virtual ViStatus StringValuedEnumInputFunctionWithDefaults(ViSession vi, ViConstString aMobileOSName) = 0;
  virtual ViStatus TwoInputFunction(ViSession vi, ViReal64 aNumber, ViString aString) = 0;
  virtual ViStatus Use64BitNumber(ViSession vi, ViInt64 input, ViInt64* output) = 0;
  virtual ViStatus WriteWaveform(ViSession vi, ViInt32 numberOfSamples, ViReal64 waveform[]) = 0;
  virtual ViStatus close(ViSession vi) = 0;
  virtual ViStatus CloseExtCal(ViSession vi, ViInt32 action) = 0;
  virtual ViStatus error_message(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]) = 0;
  virtual ViStatus self_test(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]) = 0;
  virtual ViStatus ViUInt8ArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[]) = 0;
  virtual ViStatus ViUInt8ArrayOutputFunction(ViSession vi, ViInt32 numberOfElements, ViUInt8 anArray[]) = 0;
  virtual ViStatus ViInt16ArrayInputFunction(ViSession vi, ViInt32 numberOfElements, ViInt16 anArray[]) = 0;
};

}  // namespace nifake_grpc
#endif  // NIFAKE_GRPC_LIBRARY_WRAPPER_H
