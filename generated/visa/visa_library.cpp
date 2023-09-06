//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the VISA Metadata
//---------------------------------------------------------------------
#include "visa_library.h"
#include <server/shared_library.h>

#include <memory>

#if defined(_MSC_VER)
static const char* kLibraryName = "visa64.dll";
#else
static const char* kLibraryName = "libvisa.so";
#endif

namespace visa_grpc {

VisaLibrary::VisaLibrary() : VisaLibrary(std::make_shared<nidevice_grpc::SharedLibrary>()) {}

VisaLibrary::VisaLibrary(std::shared_ptr<nidevice_grpc::SharedLibraryInterface> shared_library) : shared_library_(shared_library)
{
  shared_library_->set_library_name(kLibraryName);
  shared_library_->load();
  bool loaded = shared_library_->is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.AssertIntrSignal = reinterpret_cast<AssertIntrSignalPtr>(shared_library_->get_function_pointer("viAssertIntrSignal"));
  function_pointers_.AssertTrigger = reinterpret_cast<AssertTriggerPtr>(shared_library_->get_function_pointer("viAssertTrigger"));
  function_pointers_.AssertUtilSignal = reinterpret_cast<AssertUtilSignalPtr>(shared_library_->get_function_pointer("viAssertUtilSignal"));
  function_pointers_.Clear = reinterpret_cast<ClearPtr>(shared_library_->get_function_pointer("viClear"));
  function_pointers_.Close = reinterpret_cast<ClosePtr>(shared_library_->get_function_pointer("viClose"));
  function_pointers_.CloseEvent = reinterpret_cast<CloseEventPtr>(shared_library_->get_function_pointer("viClose"));
  function_pointers_.DisableEvent = reinterpret_cast<DisableEventPtr>(shared_library_->get_function_pointer("viDisableEvent"));
  function_pointers_.DiscardEvents = reinterpret_cast<DiscardEventsPtr>(shared_library_->get_function_pointer("viDiscardEvents"));
  function_pointers_.EnableEvent = reinterpret_cast<EnableEventPtr>(shared_library_->get_function_pointer("viEnableEvent"));
  function_pointers_.FindNext = reinterpret_cast<FindNextPtr>(shared_library_->get_function_pointer("viFindNext"));
  function_pointers_.FindRsrc = reinterpret_cast<FindRsrcPtr>(shared_library_->get_function_pointer("viFindRsrc"));
  function_pointers_.Flush = reinterpret_cast<FlushPtr>(shared_library_->get_function_pointer("viFlush"));
  function_pointers_.GetAttribute = reinterpret_cast<GetAttributePtr>(shared_library_->get_function_pointer("viGetAttribute"));
  function_pointers_.GetAttributeEvent = reinterpret_cast<GetAttributeEventPtr>(shared_library_->get_function_pointer("viGetAttribute"));
  function_pointers_.GpibCommand = reinterpret_cast<GpibCommandPtr>(shared_library_->get_function_pointer("viGpibCommand"));
  function_pointers_.GpibControlATN = reinterpret_cast<GpibControlATNPtr>(shared_library_->get_function_pointer("viGpibControlATN"));
  function_pointers_.GpibControlREN = reinterpret_cast<GpibControlRENPtr>(shared_library_->get_function_pointer("viGpibControlREN"));
  function_pointers_.GpibPassControl = reinterpret_cast<GpibPassControlPtr>(shared_library_->get_function_pointer("viGpibPassControl"));
  function_pointers_.GpibSendIFC = reinterpret_cast<GpibSendIFCPtr>(shared_library_->get_function_pointer("viGpibSendIFC"));
  function_pointers_.In16 = reinterpret_cast<In16Ptr>(shared_library_->get_function_pointer("viIn16Ex"));
  function_pointers_.In32 = reinterpret_cast<In32Ptr>(shared_library_->get_function_pointer("viIn32Ex"));
  function_pointers_.In64 = reinterpret_cast<In64Ptr>(shared_library_->get_function_pointer("viIn64Ex"));
  function_pointers_.In8 = reinterpret_cast<In8Ptr>(shared_library_->get_function_pointer("viIn8Ex"));
  function_pointers_.Lock = reinterpret_cast<LockPtr>(shared_library_->get_function_pointer("viLock"));
  function_pointers_.MapAddress = reinterpret_cast<MapAddressPtr>(shared_library_->get_function_pointer("viMapAddressEx"));
  function_pointers_.MapTrigger = reinterpret_cast<MapTriggerPtr>(shared_library_->get_function_pointer("viMapTrigger"));
  function_pointers_.MemAlloc = reinterpret_cast<MemAllocPtr>(shared_library_->get_function_pointer("viMemAlloc"));
  function_pointers_.MemAllocEx = reinterpret_cast<MemAllocExPtr>(shared_library_->get_function_pointer("viMemAllocEx"));
  function_pointers_.MemFree = reinterpret_cast<MemFreePtr>(shared_library_->get_function_pointer("viMemFreeEx"));
  function_pointers_.MoveIn16 = reinterpret_cast<MoveIn16Ptr>(shared_library_->get_function_pointer("viMoveIn16Ex"));
  function_pointers_.MoveIn32 = reinterpret_cast<MoveIn32Ptr>(shared_library_->get_function_pointer("viMoveIn32Ex"));
  function_pointers_.MoveIn64 = reinterpret_cast<MoveIn64Ptr>(shared_library_->get_function_pointer("viMoveIn64Ex"));
  function_pointers_.MoveIn8 = reinterpret_cast<MoveIn8Ptr>(shared_library_->get_function_pointer("viMoveIn8Ex"));
  function_pointers_.MoveOut16 = reinterpret_cast<MoveOut16Ptr>(shared_library_->get_function_pointer("viMoveOut16Ex"));
  function_pointers_.MoveOut32 = reinterpret_cast<MoveOut32Ptr>(shared_library_->get_function_pointer("viMoveOut32Ex"));
  function_pointers_.MoveOut64 = reinterpret_cast<MoveOut64Ptr>(shared_library_->get_function_pointer("viMoveOut64Ex"));
  function_pointers_.MoveOut8 = reinterpret_cast<MoveOut8Ptr>(shared_library_->get_function_pointer("viMoveOut8Ex"));
  function_pointers_.Open = reinterpret_cast<OpenPtr>(shared_library_->get_function_pointer("viOpen"));
  function_pointers_.OpenDefaultRM = reinterpret_cast<OpenDefaultRMPtr>(shared_library_->get_function_pointer("viOpenDefaultRM"));
  function_pointers_.Out16 = reinterpret_cast<Out16Ptr>(shared_library_->get_function_pointer("viOut16Ex"));
  function_pointers_.Out32 = reinterpret_cast<Out32Ptr>(shared_library_->get_function_pointer("viOut32Ex"));
  function_pointers_.Out64 = reinterpret_cast<Out64Ptr>(shared_library_->get_function_pointer("viOut64Ex"));
  function_pointers_.Out8 = reinterpret_cast<Out8Ptr>(shared_library_->get_function_pointer("viOut8Ex"));
  function_pointers_.ParseRsrc = reinterpret_cast<ParseRsrcPtr>(shared_library_->get_function_pointer("viParseRsrcEx"));
  function_pointers_.Peek16 = reinterpret_cast<Peek16Ptr>(shared_library_->get_function_pointer("viPeek16"));
  function_pointers_.Peek32 = reinterpret_cast<Peek32Ptr>(shared_library_->get_function_pointer("viPeek32"));
  function_pointers_.Peek64 = reinterpret_cast<Peek64Ptr>(shared_library_->get_function_pointer("viPeek64"));
  function_pointers_.Peek8 = reinterpret_cast<Peek8Ptr>(shared_library_->get_function_pointer("viPeek8"));
  function_pointers_.Poke16 = reinterpret_cast<Poke16Ptr>(shared_library_->get_function_pointer("viPoke16"));
  function_pointers_.Poke32 = reinterpret_cast<Poke32Ptr>(shared_library_->get_function_pointer("viPoke32"));
  function_pointers_.Poke64 = reinterpret_cast<Poke64Ptr>(shared_library_->get_function_pointer("viPoke64"));
  function_pointers_.Poke8 = reinterpret_cast<Poke8Ptr>(shared_library_->get_function_pointer("viPoke8"));
  function_pointers_.PxiReserveTriggers = reinterpret_cast<PxiReserveTriggersPtr>(shared_library_->get_function_pointer("viPxiReserveTriggers"));
  function_pointers_.Read = reinterpret_cast<ReadPtr>(shared_library_->get_function_pointer("viRead"));
  function_pointers_.ReadAsync = reinterpret_cast<ReadAsyncPtr>(shared_library_->get_function_pointer("viReadAsync"));
  function_pointers_.ReadSTB = reinterpret_cast<ReadSTBPtr>(shared_library_->get_function_pointer("viReadSTB"));
  function_pointers_.SetAttribute = reinterpret_cast<SetAttributePtr>(shared_library_->get_function_pointer("viSetAttribute"));
  function_pointers_.SetBuf = reinterpret_cast<SetBufPtr>(shared_library_->get_function_pointer("viSetBuf"));
  function_pointers_.StatusDesc = reinterpret_cast<StatusDescPtr>(shared_library_->get_function_pointer("viStatusDesc"));
  function_pointers_.Terminate = reinterpret_cast<TerminatePtr>(shared_library_->get_function_pointer("viTerminate"));
  function_pointers_.Unlock = reinterpret_cast<UnlockPtr>(shared_library_->get_function_pointer("viUnlock"));
  function_pointers_.UnmapAddress = reinterpret_cast<UnmapAddressPtr>(shared_library_->get_function_pointer("viUnmapAddress"));
  function_pointers_.UnmapTrigger = reinterpret_cast<UnmapTriggerPtr>(shared_library_->get_function_pointer("viUnmapTrigger"));
  function_pointers_.UsbControlIn = reinterpret_cast<UsbControlInPtr>(shared_library_->get_function_pointer("viUsbControlIn"));
  function_pointers_.UsbControlOut = reinterpret_cast<UsbControlOutPtr>(shared_library_->get_function_pointer("viUsbControlOut"));
  function_pointers_.VxiCommandQuery = reinterpret_cast<VxiCommandQueryPtr>(shared_library_->get_function_pointer("viVxiCommandQuery"));
  function_pointers_.WaitOnEvent = reinterpret_cast<WaitOnEventPtr>(shared_library_->get_function_pointer("viWaitOnEvent"));
  function_pointers_.Write = reinterpret_cast<WritePtr>(shared_library_->get_function_pointer("viWrite"));
  function_pointers_.WriteAsync = reinterpret_cast<WriteAsyncPtr>(shared_library_->get_function_pointer("viWriteAsync"));
}

VisaLibrary::~VisaLibrary()
{
}

::grpc::Status VisaLibrary::check_function_exists(std::string functionName)
{
  return shared_library_->function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

ViStatus VisaLibrary::AssertIntrSignal(ViSession vi, ViInt16 mode, ViUInt32 statusId)
{
  if (!function_pointers_.AssertIntrSignal) {
    throw nidevice_grpc::LibraryLoadException("Could not find viAssertIntrSignal.");
  }
  return function_pointers_.AssertIntrSignal(vi, mode, statusId);
}

ViStatus VisaLibrary::AssertTrigger(ViSession vi, ViUInt16 protocol)
{
  if (!function_pointers_.AssertTrigger) {
    throw nidevice_grpc::LibraryLoadException("Could not find viAssertTrigger.");
  }
  return function_pointers_.AssertTrigger(vi, protocol);
}

ViStatus VisaLibrary::AssertUtilSignal(ViSession vi, ViUInt16 mode)
{
  if (!function_pointers_.AssertUtilSignal) {
    throw nidevice_grpc::LibraryLoadException("Could not find viAssertUtilSignal.");
  }
  return function_pointers_.AssertUtilSignal(vi, mode);
}

ViStatus VisaLibrary::Clear(ViSession vi)
{
  if (!function_pointers_.Clear) {
    throw nidevice_grpc::LibraryLoadException("Could not find viClear.");
  }
  return function_pointers_.Clear(vi);
}

ViStatus VisaLibrary::Close(ViSession vi)
{
  if (!function_pointers_.Close) {
    throw nidevice_grpc::LibraryLoadException("Could not find viClose.");
  }
  return function_pointers_.Close(vi);
}

ViStatus VisaLibrary::CloseEvent(ViEvent eventHandle)
{
  if (!function_pointers_.CloseEvent) {
    throw nidevice_grpc::LibraryLoadException("Could not find viClose.");
  }
  return function_pointers_.CloseEvent(eventHandle);
}

ViStatus VisaLibrary::DisableEvent(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism)
{
  if (!function_pointers_.DisableEvent) {
    throw nidevice_grpc::LibraryLoadException("Could not find viDisableEvent.");
  }
  return function_pointers_.DisableEvent(vi, eventType, eventMechanism);
}

ViStatus VisaLibrary::DiscardEvents(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism)
{
  if (!function_pointers_.DiscardEvents) {
    throw nidevice_grpc::LibraryLoadException("Could not find viDiscardEvents.");
  }
  return function_pointers_.DiscardEvents(vi, eventType, eventMechanism);
}

ViStatus VisaLibrary::EnableEvent(ViSession vi, ViEventType eventType, ViUInt16 eventMechanism, ViEventFilter filterContext)
{
  if (!function_pointers_.EnableEvent) {
    throw nidevice_grpc::LibraryLoadException("Could not find viEnableEvent.");
  }
  return function_pointers_.EnableEvent(vi, eventType, eventMechanism, filterContext);
}

ViStatus VisaLibrary::FindNext(ViFindList findHandle, ViChar instrumentDescriptor[256])
{
  if (!function_pointers_.FindNext) {
    throw nidevice_grpc::LibraryLoadException("Could not find viFindNext.");
  }
  return function_pointers_.FindNext(findHandle, instrumentDescriptor);
}

ViStatus VisaLibrary::FindRsrc(ViSession rsrcManagerHandle, ViConstString expression, ViFindList* findHandle, ViUInt32* returnCount, ViChar instrumentDescriptor[256])
{
  if (!function_pointers_.FindRsrc) {
    throw nidevice_grpc::LibraryLoadException("Could not find viFindRsrc.");
  }
  return function_pointers_.FindRsrc(rsrcManagerHandle, expression, findHandle, returnCount, instrumentDescriptor);
}

ViStatus VisaLibrary::Flush(ViSession vi, ViUInt16 mask)
{
  if (!function_pointers_.Flush) {
    throw nidevice_grpc::LibraryLoadException("Could not find viFlush.");
  }
  return function_pointers_.Flush(vi, mask);
}

ViStatus VisaLibrary::GetAttribute(ViSession vi, ViAttr attributeName, void* attributeValue)
{
  if (!function_pointers_.GetAttribute) {
    throw nidevice_grpc::LibraryLoadException("Could not find viGetAttribute.");
  }
  return function_pointers_.GetAttribute(vi, attributeName, attributeValue);
}

ViStatus VisaLibrary::GetAttributeEvent(ViEvent eventHandle, ViAttr attributeName, void* attributeValue)
{
  if (!function_pointers_.GetAttributeEvent) {
    throw nidevice_grpc::LibraryLoadException("Could not find viGetAttribute.");
  }
  return function_pointers_.GetAttributeEvent(eventHandle, attributeName, attributeValue);
}

ViStatus VisaLibrary::GpibCommand(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount)
{
  if (!function_pointers_.GpibCommand) {
    throw nidevice_grpc::LibraryLoadException("Could not find viGpibCommand.");
  }
  return function_pointers_.GpibCommand(vi, buffer, count, returnCount);
}

ViStatus VisaLibrary::GpibControlATN(ViSession vi, ViUInt16 mode)
{
  if (!function_pointers_.GpibControlATN) {
    throw nidevice_grpc::LibraryLoadException("Could not find viGpibControlATN.");
  }
  return function_pointers_.GpibControlATN(vi, mode);
}

ViStatus VisaLibrary::GpibControlREN(ViSession vi, ViUInt16 mode)
{
  if (!function_pointers_.GpibControlREN) {
    throw nidevice_grpc::LibraryLoadException("Could not find viGpibControlREN.");
  }
  return function_pointers_.GpibControlREN(vi, mode);
}

ViStatus VisaLibrary::GpibPassControl(ViSession vi, ViUInt16 primaryAddress, ViUInt16 secondaryAddress)
{
  if (!function_pointers_.GpibPassControl) {
    throw nidevice_grpc::LibraryLoadException("Could not find viGpibPassControl.");
  }
  return function_pointers_.GpibPassControl(vi, primaryAddress, secondaryAddress);
}

ViStatus VisaLibrary::GpibSendIFC(ViSession vi)
{
  if (!function_pointers_.GpibSendIFC) {
    throw nidevice_grpc::LibraryLoadException("Could not find viGpibSendIFC.");
  }
  return function_pointers_.GpibSendIFC(vi);
}

ViStatus VisaLibrary::In16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt16* value)
{
  if (!function_pointers_.In16) {
    throw nidevice_grpc::LibraryLoadException("Could not find viIn16Ex.");
  }
  return function_pointers_.In16(vi, addressSpace, offset, value);
}

ViStatus VisaLibrary::In32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt32* value)
{
  if (!function_pointers_.In32) {
    throw nidevice_grpc::LibraryLoadException("Could not find viIn32Ex.");
  }
  return function_pointers_.In32(vi, addressSpace, offset, value);
}

ViStatus VisaLibrary::In64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt64* value)
{
  if (!function_pointers_.In64) {
    throw nidevice_grpc::LibraryLoadException("Could not find viIn64Ex.");
  }
  return function_pointers_.In64(vi, addressSpace, offset, value);
}

ViStatus VisaLibrary::In8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt8* value)
{
  if (!function_pointers_.In8) {
    throw nidevice_grpc::LibraryLoadException("Could not find viIn8Ex.");
  }
  return function_pointers_.In8(vi, addressSpace, offset, value);
}

ViStatus VisaLibrary::Lock(ViSession vi, ViAccessMode lockType, ViUInt32 timeout, ViConstKeyId requestedKey, ViChar accessKey[256])
{
  if (!function_pointers_.Lock) {
    throw nidevice_grpc::LibraryLoadException("Could not find viLock.");
  }
  return function_pointers_.Lock(vi, lockType, timeout, requestedKey, accessKey);
}

ViStatus VisaLibrary::MapAddress(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize mapSize, ViBoolean ownerAccess, ViAddr suggestedAddress, ViAddr* address)
{
  if (!function_pointers_.MapAddress) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMapAddressEx.");
  }
  return function_pointers_.MapAddress(vi, addressSpace, offset, mapSize, ownerAccess, suggestedAddress, address);
}

ViStatus VisaLibrary::MapTrigger(ViSession vi, ViInt16 triggerSource, ViInt16 triggerDestination, ViUInt16 mode)
{
  if (!function_pointers_.MapTrigger) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMapTrigger.");
  }
  return function_pointers_.MapTrigger(vi, triggerSource, triggerDestination, mode);
}

ViStatus VisaLibrary::MemAlloc(ViSession vi, ViUInt32 size, ViBusAddress* offset)
{
  if (!function_pointers_.MemAlloc) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMemAlloc.");
  }
  return function_pointers_.MemAlloc(vi, size, offset);
}

ViStatus VisaLibrary::MemAllocEx(ViSession vi, ViBusSize size, ViBusAddress64* offset)
{
  if (!function_pointers_.MemAllocEx) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMemAllocEx.");
  }
  return function_pointers_.MemAllocEx(vi, size, offset);
}

ViStatus VisaLibrary::MemFree(ViSession vi, ViBusAddress64 offset)
{
  if (!function_pointers_.MemFree) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMemFreeEx.");
  }
  return function_pointers_.MemFree(vi, offset);
}

ViStatus VisaLibrary::MoveIn16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt16 buffer[])
{
  if (!function_pointers_.MoveIn16) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMoveIn16Ex.");
  }
  return function_pointers_.MoveIn16(vi, addressSpace, offset, count, buffer);
}

ViStatus VisaLibrary::MoveIn32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt32 buffer[])
{
  if (!function_pointers_.MoveIn32) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMoveIn32Ex.");
  }
  return function_pointers_.MoveIn32(vi, addressSpace, offset, count, buffer);
}

ViStatus VisaLibrary::MoveIn64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt64 buffer[])
{
  if (!function_pointers_.MoveIn64) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMoveIn64Ex.");
  }
  return function_pointers_.MoveIn64(vi, addressSpace, offset, count, buffer);
}

ViStatus VisaLibrary::MoveIn8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt8 buffer[])
{
  if (!function_pointers_.MoveIn8) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMoveIn8Ex.");
  }
  return function_pointers_.MoveIn8(vi, addressSpace, offset, count, buffer);
}

ViStatus VisaLibrary::MoveOut16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt16 buffer[])
{
  if (!function_pointers_.MoveOut16) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMoveOut16Ex.");
  }
  return function_pointers_.MoveOut16(vi, addressSpace, offset, count, buffer);
}

ViStatus VisaLibrary::MoveOut32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt32 buffer[])
{
  if (!function_pointers_.MoveOut32) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMoveOut32Ex.");
  }
  return function_pointers_.MoveOut32(vi, addressSpace, offset, count, buffer);
}

ViStatus VisaLibrary::MoveOut64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt64 buffer[])
{
  if (!function_pointers_.MoveOut64) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMoveOut64Ex.");
  }
  return function_pointers_.MoveOut64(vi, addressSpace, offset, count, buffer);
}

ViStatus VisaLibrary::MoveOut8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViBusSize count, ViUInt8 buffer[])
{
  if (!function_pointers_.MoveOut8) {
    throw nidevice_grpc::LibraryLoadException("Could not find viMoveOut8Ex.");
  }
  return function_pointers_.MoveOut8(vi, addressSpace, offset, count, buffer);
}

ViStatus VisaLibrary::Open(ViSession rsrcManagerHandle, ViConstRsrc instrumentDescriptor, ViAccessMode accessMode, ViUInt32 openTimeout, ViSession* vi)
{
  if (!function_pointers_.Open) {
    throw nidevice_grpc::LibraryLoadException("Could not find viOpen.");
  }
  return function_pointers_.Open(rsrcManagerHandle, instrumentDescriptor, accessMode, openTimeout, vi);
}

ViStatus VisaLibrary::OpenDefaultRM(ViSession* rsrcManagerHandle)
{
  if (!function_pointers_.OpenDefaultRM) {
    throw nidevice_grpc::LibraryLoadException("Could not find viOpenDefaultRM.");
  }
  return function_pointers_.OpenDefaultRM(rsrcManagerHandle);
}

ViStatus VisaLibrary::Out16(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt16 value)
{
  if (!function_pointers_.Out16) {
    throw nidevice_grpc::LibraryLoadException("Could not find viOut16Ex.");
  }
  return function_pointers_.Out16(vi, addressSpace, offset, value);
}

ViStatus VisaLibrary::Out32(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt32 value)
{
  if (!function_pointers_.Out32) {
    throw nidevice_grpc::LibraryLoadException("Could not find viOut32Ex.");
  }
  return function_pointers_.Out32(vi, addressSpace, offset, value);
}

ViStatus VisaLibrary::Out64(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt64 value)
{
  if (!function_pointers_.Out64) {
    throw nidevice_grpc::LibraryLoadException("Could not find viOut64Ex.");
  }
  return function_pointers_.Out64(vi, addressSpace, offset, value);
}

ViStatus VisaLibrary::Out8(ViSession vi, ViUInt16 addressSpace, ViBusAddress64 offset, ViUInt8 value)
{
  if (!function_pointers_.Out8) {
    throw nidevice_grpc::LibraryLoadException("Could not find viOut8Ex.");
  }
  return function_pointers_.Out8(vi, addressSpace, offset, value);
}

ViStatus VisaLibrary::ParseRsrc(ViSession sessionHandle, ViConstRsrc resourceName, ViUInt16* interfaceType, ViUInt16* interfaceNumber, ViChar resourceClass[256], ViChar expandedUnaliasedName[256], ViChar aliasIfExists[256])
{
  if (!function_pointers_.ParseRsrc) {
    throw nidevice_grpc::LibraryLoadException("Could not find viParseRsrcEx.");
  }
  return function_pointers_.ParseRsrc(sessionHandle, resourceName, interfaceType, interfaceNumber, resourceClass, expandedUnaliasedName, aliasIfExists);
}

void VisaLibrary::Peek16(ViSession vi, ViAddr address, ViUInt16* value)
{
  if (!function_pointers_.Peek16) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPeek16.");
  }
  return function_pointers_.Peek16(vi, address, value);
}

void VisaLibrary::Peek32(ViSession vi, ViAddr address, ViUInt32* value)
{
  if (!function_pointers_.Peek32) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPeek32.");
  }
  return function_pointers_.Peek32(vi, address, value);
}

void VisaLibrary::Peek64(ViSession vi, ViAddr address, ViUInt64* value)
{
  if (!function_pointers_.Peek64) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPeek64.");
  }
  return function_pointers_.Peek64(vi, address, value);
}

void VisaLibrary::Peek8(ViSession vi, ViAddr address, ViUInt8* value)
{
  if (!function_pointers_.Peek8) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPeek8.");
  }
  return function_pointers_.Peek8(vi, address, value);
}

void VisaLibrary::Poke16(ViSession vi, ViAddr address, ViUInt16 value)
{
  if (!function_pointers_.Poke16) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPoke16.");
  }
  return function_pointers_.Poke16(vi, address, value);
}

void VisaLibrary::Poke32(ViSession vi, ViAddr address, ViUInt32 value)
{
  if (!function_pointers_.Poke32) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPoke32.");
  }
  return function_pointers_.Poke32(vi, address, value);
}

void VisaLibrary::Poke64(ViSession vi, ViAddr address, ViUInt64 value)
{
  if (!function_pointers_.Poke64) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPoke64.");
  }
  return function_pointers_.Poke64(vi, address, value);
}

void VisaLibrary::Poke8(ViSession vi, ViAddr address, ViUInt8 value)
{
  if (!function_pointers_.Poke8) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPoke8.");
  }
  return function_pointers_.Poke8(vi, address, value);
}

ViStatus VisaLibrary::PxiReserveTriggers(ViSession vi, ViInt16 cnt, ViInt16 trigBuses[], ViInt16 trigLines[], ViInt16* failureIndex)
{
  if (!function_pointers_.PxiReserveTriggers) {
    throw nidevice_grpc::LibraryLoadException("Could not find viPxiReserveTriggers.");
  }
  return function_pointers_.PxiReserveTriggers(vi, cnt, trigBuses, trigLines, failureIndex);
}

ViStatus VisaLibrary::Read(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount)
{
  if (!function_pointers_.Read) {
    throw nidevice_grpc::LibraryLoadException("Could not find viRead.");
  }
  return function_pointers_.Read(vi, buffer, count, returnCount);
}

ViStatus VisaLibrary::ReadAsync(ViSession vi, ViByte readBuffer[], ViUInt32 count, ViJobId* jobIdentifier)
{
  if (!function_pointers_.ReadAsync) {
    throw nidevice_grpc::LibraryLoadException("Could not find viReadAsync.");
  }
  return function_pointers_.ReadAsync(vi, readBuffer, count, jobIdentifier);
}

ViStatus VisaLibrary::ReadSTB(ViSession vi, ViUInt16* statusByte)
{
  if (!function_pointers_.ReadSTB) {
    throw nidevice_grpc::LibraryLoadException("Could not find viReadSTB.");
  }
  return function_pointers_.ReadSTB(vi, statusByte);
}

ViStatus VisaLibrary::SetAttribute(ViSession vi, ViAttr attributeName, ViAttrState attributeValue)
{
  if (!function_pointers_.SetAttribute) {
    throw nidevice_grpc::LibraryLoadException("Could not find viSetAttribute.");
  }
  return function_pointers_.SetAttribute(vi, attributeName, attributeValue);
}

ViStatus VisaLibrary::SetBuf(ViSession vi, ViUInt16 mask, ViUInt32 bufferSize)
{
  if (!function_pointers_.SetBuf) {
    throw nidevice_grpc::LibraryLoadException("Could not find viSetBuf.");
  }
  return function_pointers_.SetBuf(vi, mask, bufferSize);
}

ViStatus VisaLibrary::StatusDesc(ViSession vi, ViStatus statusValue, ViChar statusDescription[256])
{
  if (!function_pointers_.StatusDesc) {
    throw nidevice_grpc::LibraryLoadException("Could not find viStatusDesc.");
  }
  return function_pointers_.StatusDesc(vi, statusValue, statusDescription);
}

ViStatus VisaLibrary::Terminate(ViSession vi, ViUInt16 degree, ViJobId jobIdentifier)
{
  if (!function_pointers_.Terminate) {
    throw nidevice_grpc::LibraryLoadException("Could not find viTerminate.");
  }
  return function_pointers_.Terminate(vi, degree, jobIdentifier);
}

ViStatus VisaLibrary::Unlock(ViSession vi)
{
  if (!function_pointers_.Unlock) {
    throw nidevice_grpc::LibraryLoadException("Could not find viUnlock.");
  }
  return function_pointers_.Unlock(vi);
}

ViStatus VisaLibrary::UnmapAddress(ViSession vi)
{
  if (!function_pointers_.UnmapAddress) {
    throw nidevice_grpc::LibraryLoadException("Could not find viUnmapAddress.");
  }
  return function_pointers_.UnmapAddress(vi);
}

ViStatus VisaLibrary::UnmapTrigger(ViSession vi, ViInt16 triggerSource, ViInt16 triggerDestination)
{
  if (!function_pointers_.UnmapTrigger) {
    throw nidevice_grpc::LibraryLoadException("Could not find viUnmapTrigger.");
  }
  return function_pointers_.UnmapTrigger(vi, triggerSource, triggerDestination);
}

ViStatus VisaLibrary::UsbControlIn(ViSession vi, ViInt16 bmRequestType, ViInt16 bRequest, ViUInt16 wValue, ViUInt16 wIndex, ViUInt16 wLength, ViByte buffer[], ViUInt16* returnCount)
{
  if (!function_pointers_.UsbControlIn) {
    throw nidevice_grpc::LibraryLoadException("Could not find viUsbControlIn.");
  }
  return function_pointers_.UsbControlIn(vi, bmRequestType, bRequest, wValue, wIndex, wLength, buffer, returnCount);
}

ViStatus VisaLibrary::UsbControlOut(ViSession vi, ViInt16 bmRequestType, ViInt16 bRequest, ViUInt16 wValue, ViUInt16 wIndex, ViUInt16 wLength, ViByte buffer[])
{
  if (!function_pointers_.UsbControlOut) {
    throw nidevice_grpc::LibraryLoadException("Could not find viUsbControlOut.");
  }
  return function_pointers_.UsbControlOut(vi, bmRequestType, bRequest, wValue, wIndex, wLength, buffer);
}

ViStatus VisaLibrary::VxiCommandQuery(ViSession vi, ViUInt16 mode, ViUInt32 command, ViUInt32* commandResponse)
{
  if (!function_pointers_.VxiCommandQuery) {
    throw nidevice_grpc::LibraryLoadException("Could not find viVxiCommandQuery.");
  }
  return function_pointers_.VxiCommandQuery(vi, mode, command, commandResponse);
}

ViStatus VisaLibrary::WaitOnEvent(ViSession vi, ViEventType inEventType, ViUInt32 timeout, ViEventType* outEventType, ViEvent* eventHandle)
{
  if (!function_pointers_.WaitOnEvent) {
    throw nidevice_grpc::LibraryLoadException("Could not find viWaitOnEvent.");
  }
  return function_pointers_.WaitOnEvent(vi, inEventType, timeout, outEventType, eventHandle);
}

ViStatus VisaLibrary::Write(ViSession vi, ViByte buffer[], ViUInt32 count, ViUInt32* returnCount)
{
  if (!function_pointers_.Write) {
    throw nidevice_grpc::LibraryLoadException("Could not find viWrite.");
  }
  return function_pointers_.Write(vi, buffer, count, returnCount);
}

ViStatus VisaLibrary::WriteAsync(ViSession vi, ViByte buffer[], ViUInt32 count, ViJobId* jobIdentifier)
{
  if (!function_pointers_.WriteAsync) {
    throw nidevice_grpc::LibraryLoadException("Could not find viWriteAsync.");
  }
  return function_pointers_.WriteAsync(vi, buffer, count, jobIdentifier);
}

}  // namespace visa_grpc
