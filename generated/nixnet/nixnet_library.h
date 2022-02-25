//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-XNET
//---------------------------------------------------------------------
#ifndef NIXNET_GRPC_LIBRARY_H
#define NIXNET_GRPC_LIBRARY_H

#include "nixnet_library_interface.h"

#include <server/shared_library.h>

namespace nixnet_grpc {

class NiXnetLibrary : public nixnet_grpc::NiXnetLibraryInterface {
 public:
  NiXnetLibrary();
  virtual ~NiXnetLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  nxStatus_t Blink(nxSessionRef_t interfaceRef, u32 modifier);
  nxStatus_t Clear(nxSessionRef_t sessionRef);
  nxStatus_t ConnectTerminals(nxSessionRef_t sessionRef, const char source[], const char destination[]);
  nxStatus_t ConvertTimestamp100nsTo1ns(nxTimestamp100ns_t from, nxTimestamp1ns_t* to);
  nxStatus_t ConvertTimestamp1nsTo100ns(nxTimestamp1ns_t from, nxTimestamp100ns_t* to);
  nxStatus_t CreateSession(const char databaseName[], const char clusterName[], const char list[], const char interfaceParameter[], u32 mode, nxSessionRef_t* sessionRef);
  nxStatus_t CreateSessionByRef(u32 numberOfDatabaseRef, nxDatabaseRef_t arrayOfDatabaseRef[], const char interfaceParameter[], u32 mode, nxSessionRef_t* sessionRef);
  nxStatus_t DbAddAlias(const char databaseAlias[], const char databaseFilepath[], u32 defaultBaudRate);
  nxStatus_t DbAddAlias64(const char databaseAlias[], const char databaseFilepath[], u64 defaultBaudRate);
  nxStatus_t DbCloseDatabase(nxDatabaseRef_t databaseRef, u32 closeAllRefs);
  nxStatus_t DbDeleteObject(nxDatabaseRef_t dbObjectRef);
  nxStatus_t DbDeploy(const char ipAddress[], const char databaseAlias[], u32 waitForComplete, u32* percentComplete);
  nxStatus_t DbGetDatabaseListSizes(const char ipAddress[], u32* sizeofAliasBuffer, u32* sizeofFilepathBuffer);
  nxStatus_t DbGetPropertySize(nxDatabaseRef_t dbObjectRef, u32 propertyID, u32* propertySize);
  nxStatus_t DbMerge(nxDatabaseRef_t targetClusterRef, nxDatabaseRef_t sourceObjRef, u32 copyMode, char prefix[], u32 waitForComplete, u32* percentComplete);
  nxStatus_t DbOpenDatabase(const char databaseName[], nxDatabaseRef_t* databaseRef);
  nxStatus_t DbRemoveAlias(const char databaseAlias[]);
  nxStatus_t DbSaveDatabase(nxDatabaseRef_t databaseRef, const char dbFilepath[]);
  nxStatus_t DbUndeploy(const char ipAddress[], const char databaseAlias[]);
  nxStatus_t DisconnectTerminals(nxSessionRef_t sessionRef, const char source[], const char destination[]);
  nxStatus_t Flush(nxSessionRef_t sessionRef);
  nxStatus_t FutureTimeTrigger(nxSessionRef_t sessionRef, nxTimestamp1ns_t when, u32 timescale);
  nxStatus_t GetPropertySize(nxSessionRef_t sessionRef, u32 propertyID, u32* propertySize);
  nxStatus_t GetSubPropertySize(nxSessionRef_t sessionRef, u32 activeIndex, u32 propertyID, u32* propertySize);
  nxStatus_t ReadSignalSinglePoint(nxSessionRef_t sessionRef, f64 valueBuffer[], u32 sizeOfValueBuffer, nxTimestamp100ns_t timestampBuffer[], u32 sizeOfTimestampBuffer);
  nxStatus_t ReadSignalWaveform(nxSessionRef_t sessionRef, f64 timeout, nxTimestamp100ns_t* startTime, f64* deltaTime, f64 valueBuffer[], u32 sizeOfValueBuffer, u32* numberOfValuesReturned);
  nxStatus_t Start(nxSessionRef_t sessionRef, u32 scope);
  nxStatus_t Stop(nxSessionRef_t sessionRef, u32 scope);
  nxStatus_t SystemClose(nxSessionRef_t systemRef);
  nxStatus_t SystemOpen(nxSessionRef_t* systemRef);
  nxStatus_t Wait(nxSessionRef_t sessionRef, u32 condition, u32 paramIn, f64 timeout, u32* paramOut);
  nxStatus_t WriteSignalSinglePoint(nxSessionRef_t sessionRef, f64 valueBuffer[], u32 sizeOfValueBuffer);
  nxStatus_t WriteSignalWaveform(nxSessionRef_t sessionRef, f64 timeout, f64 valueBuffer[], u32 sizeOfValueBuffer);
  nxStatus_t WriteSignalXY(nxSessionRef_t sessionRef, f64 timeout, f64 valueBuffer[], u32 sizeOfValueBuffer, nxTimestamp100ns_t timestampBuffer[], u32 sizeOfTimestampBuffer, u32 numPairsBuffer[], u32 sizeOfNumPairsBuffer);

 private:
  using BlinkPtr = decltype(&nxBlink);
  using ClearPtr = decltype(&nxClear);
  using ConnectTerminalsPtr = decltype(&nxConnectTerminals);
  using ConvertTimestamp100nsTo1nsPtr = decltype(&nxConvertTimestamp100nsTo1ns);
  using ConvertTimestamp1nsTo100nsPtr = decltype(&nxConvertTimestamp1nsTo100ns);
  using CreateSessionPtr = decltype(&nxCreateSession);
  using CreateSessionByRefPtr = decltype(&nxCreateSessionByRef);
  using DbAddAliasPtr = decltype(&nxdbAddAlias);
  using DbAddAlias64Ptr = decltype(&nxdbAddAlias64);
  using DbCloseDatabasePtr = decltype(&nxdbCloseDatabase);
  using DbDeleteObjectPtr = decltype(&nxdbDeleteObject);
  using DbDeployPtr = decltype(&nxdbDeploy);
  using DbGetDatabaseListSizesPtr = decltype(&nxdbGetDatabaseListSizes);
  using DbGetPropertySizePtr = decltype(&nxdbGetPropertySize);
  using DbMergePtr = decltype(&nxdbMerge);
  using DbOpenDatabasePtr = decltype(&nxdbOpenDatabase);
  using DbRemoveAliasPtr = decltype(&nxdbRemoveAlias);
  using DbSaveDatabasePtr = decltype(&nxdbSaveDatabase);
  using DbUndeployPtr = decltype(&nxdbUndeploy);
  using DisconnectTerminalsPtr = decltype(&nxDisconnectTerminals);
  using FlushPtr = decltype(&nxFlush);
  using FutureTimeTriggerPtr = decltype(&nxFutureTimeTrigger);
  using GetPropertySizePtr = decltype(&nxGetPropertySize);
  using GetSubPropertySizePtr = decltype(&nxGetSubPropertySize);
  using ReadSignalSinglePointPtr = decltype(&nxReadSignalSinglePoint);
  using ReadSignalWaveformPtr = decltype(&nxReadSignalWaveform);
  using StartPtr = decltype(&nxStart);
  using StopPtr = decltype(&nxStop);
  using SystemClosePtr = decltype(&nxSystemClose);
  using SystemOpenPtr = decltype(&nxSystemOpen);
  using WaitPtr = decltype(&nxWait);
  using WriteSignalSinglePointPtr = decltype(&nxWriteSignalSinglePoint);
  using WriteSignalWaveformPtr = decltype(&nxWriteSignalWaveform);
  using WriteSignalXYPtr = decltype(&nxWriteSignalXY);

  typedef struct FunctionPointers {
    BlinkPtr Blink;
    ClearPtr Clear;
    ConnectTerminalsPtr ConnectTerminals;
    ConvertTimestamp100nsTo1nsPtr ConvertTimestamp100nsTo1ns;
    ConvertTimestamp1nsTo100nsPtr ConvertTimestamp1nsTo100ns;
    CreateSessionPtr CreateSession;
    CreateSessionByRefPtr CreateSessionByRef;
    DbAddAliasPtr DbAddAlias;
    DbAddAlias64Ptr DbAddAlias64;
    DbCloseDatabasePtr DbCloseDatabase;
    DbDeleteObjectPtr DbDeleteObject;
    DbDeployPtr DbDeploy;
    DbGetDatabaseListSizesPtr DbGetDatabaseListSizes;
    DbGetPropertySizePtr DbGetPropertySize;
    DbMergePtr DbMerge;
    DbOpenDatabasePtr DbOpenDatabase;
    DbRemoveAliasPtr DbRemoveAlias;
    DbSaveDatabasePtr DbSaveDatabase;
    DbUndeployPtr DbUndeploy;
    DisconnectTerminalsPtr DisconnectTerminals;
    FlushPtr Flush;
    FutureTimeTriggerPtr FutureTimeTrigger;
    GetPropertySizePtr GetPropertySize;
    GetSubPropertySizePtr GetSubPropertySize;
    ReadSignalSinglePointPtr ReadSignalSinglePoint;
    ReadSignalWaveformPtr ReadSignalWaveform;
    StartPtr Start;
    StopPtr Stop;
    SystemClosePtr SystemClose;
    SystemOpenPtr SystemOpen;
    WaitPtr Wait;
    WriteSignalSinglePointPtr WriteSignalSinglePoint;
    WriteSignalWaveformPtr WriteSignalWaveform;
    WriteSignalXYPtr WriteSignalXY;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nixnet_grpc

#endif  // NIXNET_GRPC_LIBRARY_H
