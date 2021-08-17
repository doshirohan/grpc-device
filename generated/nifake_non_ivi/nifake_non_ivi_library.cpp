//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-FAKE-NON-IVI Metadata
//---------------------------------------------------------------------
#include "nifake_non_ivi_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "nifakenonivi_64.dll";
#else
static const char* kLibraryName = "libnifakenonivi.so";
#endif

namespace nifake_non_ivi_grpc {

NiFakeNonIviLibrary::NiFakeNonIviLibrary() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.Close = reinterpret_cast<ClosePtr>(shared_library_.get_function_pointer("niFakeNonIvi_Close"));
  function_pointers_.GetMarbleAttributeDouble = reinterpret_cast<GetMarbleAttributeDoublePtr>(shared_library_.get_function_pointer("niFakeNonIvi_GetMarbleAttributeDouble"));
  function_pointers_.GetMarbleAttributeInt32 = reinterpret_cast<GetMarbleAttributeInt32Ptr>(shared_library_.get_function_pointer("niFakeNonIvi_GetMarbleAttributeInt32"));
  function_pointers_.Init = reinterpret_cast<InitPtr>(shared_library_.get_function_pointer("niFakeNonIvi_Init"));
  function_pointers_.InitWithHandleNameAsSessionName = reinterpret_cast<InitWithHandleNameAsSessionNamePtr>(shared_library_.get_function_pointer("niFakeNonIvi_InitWithHandleNameAsSessionName"));
  function_pointers_.InputArraysWithNarrowIntegerTypes = reinterpret_cast<InputArraysWithNarrowIntegerTypesPtr>(shared_library_.get_function_pointer("niFakeNonIvi_InputArraysWithNarrowIntegerTypes"));
  function_pointers_.IotaWithCustomSize = reinterpret_cast<IotaWithCustomSizePtr>(shared_library_.get_function_pointer("niFakeNonIvi_IotaWithCustomSize"));
  function_pointers_.OutputArraysWithNarrowIntegerTypes = reinterpret_cast<OutputArraysWithNarrowIntegerTypesPtr>(shared_library_.get_function_pointer("niFakeNonIvi_OutputArraysWithNarrowIntegerTypes"));
  function_pointers_.InputArrayOfBytes = reinterpret_cast<InputArrayOfBytesPtr>(shared_library_.get_function_pointer("niFakeNonIvi_InputArrayOfBytes"));
  function_pointers_.OutputArrayOfBytes = reinterpret_cast<OutputArrayOfBytesPtr>(shared_library_.get_function_pointer("niFakeNonIvi_OutputArrayOfBytes"));
  function_pointers_.RegisterCallback = reinterpret_cast<RegisterCallbackPtr>(shared_library_.get_function_pointer("niFakeNonIvi_RegisterCallback"));
  function_pointers_.ReadStream = reinterpret_cast<ReadStreamPtr>(shared_library_.get_function_pointer("niFakeNonIvi_ReadStream"));
  function_pointers_.InputTimestamp = reinterpret_cast<InputTimestampPtr>(shared_library_.get_function_pointer("niFakeNonIvi_InputTimestamp"));
  function_pointers_.OutputTimestamp = reinterpret_cast<OutputTimestampPtr>(shared_library_.get_function_pointer("niFakeNonIvi_OutputTimestamp"));
  function_pointers_.InputVarArgs = reinterpret_cast<InputVarArgsPtr>(shared_library_.get_function_pointer("niFakeNonIvi_InputVarArgs"));
  function_pointers_.OutputVarArgs = reinterpret_cast<OutputVarArgsPtr>(shared_library_.get_function_pointer("niFakeNonIvi_OutputVarArgs"));
  function_pointers_.SetMarbleAttributeDouble = reinterpret_cast<SetMarbleAttributeDoublePtr>(shared_library_.get_function_pointer("niFakeNonIvi_SetMarbleAttributeDouble"));
  function_pointers_.SetMarbleAttributeInt32 = reinterpret_cast<SetMarbleAttributeInt32Ptr>(shared_library_.get_function_pointer("niFakeNonIvi_SetMarbleAttributeInt32"));
}

NiFakeNonIviLibrary::~NiFakeNonIviLibrary()
{
}

::grpc::Status NiFakeNonIviLibrary::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

int32 NiFakeNonIviLibrary::Close(FakeHandle handle)
{
  if (!function_pointers_.Close) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_Close.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_Close(handle);
#else
  return function_pointers_.Close(handle);
#endif
}

int32 NiFakeNonIviLibrary::GetMarbleAttributeDouble(FakeHandle handle, int32 attribute, double* value)
{
  if (!function_pointers_.GetMarbleAttributeDouble) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_GetMarbleAttributeDouble.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_GetMarbleAttributeDouble(handle, attribute, value);
#else
  return function_pointers_.GetMarbleAttributeDouble(handle, attribute, value);
#endif
}

int32 NiFakeNonIviLibrary::GetMarbleAttributeInt32(FakeHandle handle, int32 attribute, int32* value)
{
  if (!function_pointers_.GetMarbleAttributeInt32) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_GetMarbleAttributeInt32.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_GetMarbleAttributeInt32(handle, attribute, value);
#else
  return function_pointers_.GetMarbleAttributeInt32(handle, attribute, value);
#endif
}

int32 NiFakeNonIviLibrary::Init(const char sessionName[], FakeHandle* handle)
{
  if (!function_pointers_.Init) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_Init.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_Init(sessionName, handle);
#else
  return function_pointers_.Init(sessionName, handle);
#endif
}

int32 NiFakeNonIviLibrary::InitWithHandleNameAsSessionName(const char handleName[], FakeHandle* handle)
{
  if (!function_pointers_.InitWithHandleNameAsSessionName) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_InitWithHandleNameAsSessionName.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_InitWithHandleNameAsSessionName(handleName, handle);
#else
  return function_pointers_.InitWithHandleNameAsSessionName(handleName, handle);
#endif
}

int32 NiFakeNonIviLibrary::InputArraysWithNarrowIntegerTypes(const myUInt16 u16Array[], const myInt16 i16Array[], const myInt8 i8Array[])
{
  if (!function_pointers_.InputArraysWithNarrowIntegerTypes) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_InputArraysWithNarrowIntegerTypes.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_InputArraysWithNarrowIntegerTypes(u16Array, i16Array, i8Array);
#else
  return function_pointers_.InputArraysWithNarrowIntegerTypes(u16Array, i16Array, i8Array);
#endif
}

int32 NiFakeNonIviLibrary::IotaWithCustomSize(int32 sizeOne, int32 sizeTwo, int32 data[])
{
  if (!function_pointers_.IotaWithCustomSize) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_IotaWithCustomSize.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_IotaWithCustomSize(sizeOne, sizeTwo, data);
#else
  return function_pointers_.IotaWithCustomSize(sizeOne, sizeTwo, data);
#endif
}

int32 NiFakeNonIviLibrary::OutputArraysWithNarrowIntegerTypes(int32 numberOfU16Samples, myUInt16 u16Data[], int32 numberOfI16Samples, myInt16 i16Data[], int32 numberOfI8Samples, myInt8 i8Data[])
{
  if (!function_pointers_.OutputArraysWithNarrowIntegerTypes) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_OutputArraysWithNarrowIntegerTypes.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_OutputArraysWithNarrowIntegerTypes(numberOfU16Samples, u16Data, numberOfI16Samples, i16Data, numberOfI8Samples, i8Data);
#else
  return function_pointers_.OutputArraysWithNarrowIntegerTypes(numberOfU16Samples, u16Data, numberOfI16Samples, i16Data, numberOfI8Samples, i8Data);
#endif
}

int32 NiFakeNonIviLibrary::InputArrayOfBytes(const myUInt8 u8Array[])
{
  if (!function_pointers_.InputArrayOfBytes) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_InputArrayOfBytes.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_InputArrayOfBytes(u8Array);
#else
  return function_pointers_.InputArrayOfBytes(u8Array);
#endif
}

int32 NiFakeNonIviLibrary::OutputArrayOfBytes(int32 numberOfU8Samples, myUInt8 u8Data[])
{
  if (!function_pointers_.OutputArrayOfBytes) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_OutputArrayOfBytes.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_OutputArrayOfBytes(numberOfU8Samples, u8Data);
#else
  return function_pointers_.OutputArrayOfBytes(numberOfU8Samples, u8Data);
#endif
}

int32 NiFakeNonIviLibrary::RegisterCallback(myInt16 inputData, CallbackPtr callbackFunction, void* callbackData)
{
  if (!function_pointers_.RegisterCallback) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_RegisterCallback.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_RegisterCallback(inputData, callbackFunction, callbackData);
#else
  return function_pointers_.RegisterCallback(inputData, callbackFunction, callbackData);
#endif
}

int32 NiFakeNonIviLibrary::ReadStream(int32 start, int32 stop, int32* value)
{
  if (!function_pointers_.ReadStream) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_ReadStream.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_ReadStream(start, stop, value);
#else
  return function_pointers_.ReadStream(start, stop, value);
#endif
}

int32 NiFakeNonIviLibrary::InputTimestamp(CVIAbsoluteTime when)
{
  if (!function_pointers_.InputTimestamp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_InputTimestamp.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_InputTimestamp(when);
#else
  return function_pointers_.InputTimestamp(when);
#endif
}

int32 NiFakeNonIviLibrary::OutputTimestamp(CVIAbsoluteTime* when)
{
  if (!function_pointers_.OutputTimestamp) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_OutputTimestamp.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_OutputTimestamp(when);
#else
  return function_pointers_.OutputTimestamp(when);
#endif
}

int32 NiFakeNonIviLibrary::InputVarArgs(const char inputName[], const char channelName[], int32 color, double powerUpState, const char channelName0[], int32 color0, double powerUpState0, const char channelName1[], int32 color1, double powerUpState1, const char channelName2[], int32 color2, double powerUpState2)
{
  if (!function_pointers_.InputVarArgs) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_InputVarArgs.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_InputVarArgs(inputName, channelName, color, powerUpState, channelName0, color0, powerUpState0, channelName1, color1, powerUpState1, channelName2, color2, powerUpState2);
#else
  return function_pointers_.InputVarArgs(inputName, channelName, color, powerUpState, channelName0, color0, powerUpState0, channelName1, color1, powerUpState1, channelName2, color2, powerUpState2);
#endif
}

int32 NiFakeNonIviLibrary::OutputVarArgs(const char inputName[], const char channelName[], int32* color, const char channelName0[], int32* color0, const char channelName1[], int32* color1, const char channelName2[], int32* color2)
{
  if (!function_pointers_.OutputVarArgs) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_OutputVarArgs.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_OutputVarArgs(inputName, channelName, color, channelName0, color0, channelName1, color1, channelName2, color2);
#else
  return function_pointers_.OutputVarArgs(inputName, channelName, color, channelName0, color0, channelName1, color1, channelName2, color2);
#endif
}

int32 NiFakeNonIviLibrary::SetMarbleAttributeDouble(FakeHandle handle, int32 attribute, double value)
{
  if (!function_pointers_.SetMarbleAttributeDouble) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_SetMarbleAttributeDouble.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_SetMarbleAttributeDouble(handle, attribute, value);
#else
  return function_pointers_.SetMarbleAttributeDouble(handle, attribute, value);
#endif
}

int32 NiFakeNonIviLibrary::SetMarbleAttributeInt32(FakeHandle handle, int32 attribute, int32 value)
{
  if (!function_pointers_.SetMarbleAttributeInt32) {
    throw nidevice_grpc::LibraryLoadException("Could not find niFakeNonIvi_SetMarbleAttributeInt32.");
  }
#if defined(_MSC_VER)
  return niFakeNonIvi_SetMarbleAttributeInt32(handle, attribute, value);
#else
  return function_pointers_.SetMarbleAttributeInt32(handle, attribute, value);
#endif
}

}  // namespace nifake_non_ivi_grpc
