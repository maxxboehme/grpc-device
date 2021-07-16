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
  function_pointers_.Init = reinterpret_cast<InitPtr>(shared_library_.get_function_pointer("niFakeNonIvi_Init"));
  function_pointers_.InitWithHandleNameAsSessionName = reinterpret_cast<InitWithHandleNameAsSessionNamePtr>(shared_library_.get_function_pointer("niFakeNonIvi_InitWithHandleNameAsSessionName"));
  function_pointers_.InputArraysWithNarrowIntegerTypes = reinterpret_cast<InputArraysWithNarrowIntegerTypesPtr>(shared_library_.get_function_pointer("niFakeNonIvi_InputArraysWithNarrowIntegerTypes"));
  function_pointers_.OutputArraysWithNarrowIntegerTypes = reinterpret_cast<OutputArraysWithNarrowIntegerTypesPtr>(shared_library_.get_function_pointer("niFakeNonIvi_OutputArraysWithNarrowIntegerTypes"));
  function_pointers_.InputArrayOfBytes = reinterpret_cast<InputArrayOfBytesPtr>(shared_library_.get_function_pointer("niFakeNonIvi_InputArrayOfBytes"));
  function_pointers_.OutputArrayOfBytes = reinterpret_cast<OutputArrayOfBytesPtr>(shared_library_.get_function_pointer("niFakeNonIvi_OutputArrayOfBytes"));
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

}  // namespace nifake_non_ivi_grpc