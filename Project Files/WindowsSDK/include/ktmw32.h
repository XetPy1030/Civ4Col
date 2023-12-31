/*++

Copyright (c) 2000  Microsoft Corporation

Module Name:

    ktmw32.h

Abstract:

    Public API include file for the TM subcomponent of the NTOS project

Author:

    Jon Cargille (jcargill) 5-Jun-2001

Revision History:

--*/

#ifndef _KTMUSER_
#define _KTMUSER_


#ifdef __cplusplus
extern "C" {
#endif


#include <ktmtypes.h>

//
// Win32-level transaction manager API calls
//

HANDLE
APIENTRY
CreateTransaction (
    IN LPSECURITY_ATTRIBUTES lpTransactionAttributes OPTIONAL,
    IN LPGUID UOW OPTIONAL,
    IN DWORD CreateOptions OPTIONAL,
    IN DWORD IsolationLevel OPTIONAL,
    IN DWORD IsolationFlags OPTIONAL,
    IN DWORD Timeout OPTIONAL,
    __in_opt LPWSTR Description
    );

HANDLE
APIENTRY
OpenTransaction (
    IN DWORD dwDesiredAccess,
    IN LPGUID TransactionId
    );

BOOL
APIENTRY
CommitTransaction (
    IN HANDLE TransactionHandle
    );

BOOL
APIENTRY
CommitTransactionAsync (
    IN HANDLE TransactionHandle
    );

BOOL
APIENTRY
RollbackTransaction (
    IN HANDLE TransactionHandle
    );

BOOL
APIENTRY
RollbackTransactionAsync (
    IN HANDLE TransactionHandle
    );

BOOL
APIENTRY
RollbackSavepoint (
    IN HANDLE  TransactionHandle,
    IN SAVEPOINT_ID SavepointId
    );

BOOL
APIENTRY
SavepointTransaction (
    IN HANDLE TransactionHandle,
    OUT PSAVEPOINT_ID SavepointId
    );

BOOL
APIENTRY
ClearSavepointTransaction (
    IN HANDLE       TransactionHandle,
    IN SAVEPOINT_ID SavepointId
    );

BOOL
APIENTRY
ClearAllSavepointsTransaction (
    IN HANDLE       TransactionHandle
    );


BOOL
APIENTRY
GetTransactionId (
    IN HANDLE TransactionHandle,
    OUT LPGUID TransactionId
    );


BOOL
APIENTRY
GetTransactionInformation (
    IN HANDLE TransactionHandle,
    OUT PDWORD Outcome OPTIONAL,
    OUT PDWORD IsolationLevel OPTIONAL,
    OUT PDWORD IsolationFlags OPTIONAL,
    OUT PDWORD Timeout OPTIONAL,
    __in DWORD BufferLength,
    __out_ecount_part_opt(BufferLength, return + 1) LPWSTR Description
    );

BOOL
APIENTRY
SetTransactionInformation (
    IN HANDLE TransactionHandle,
    IN DWORD IsolationLevel OPTIONAL,
    IN DWORD IsolationFlags OPTIONAL,
    IN DWORD Timeout OPTIONAL,
    __in_opt LPWSTR Description
    );

HANDLE
APIENTRY
CreateTransactionManager (
    IN LPSECURITY_ATTRIBUTES lpTransactionAttributes OPTIONAL,
    __in LPWSTR LogFileName,
    IN ULONG CreateOptions OPTIONAL,
    IN ULONG CommitStrength OPTIONAL
    );

HANDLE
APIENTRY
OpenTransactionManager (
    __in LPWSTR LogFileName,
    IN ACCESS_MASK DesiredAccess,
    IN ULONG OpenOptions OPTIONAL
    );

HANDLE
APIENTRY
OpenTransactionManagerById (
    __in LPGUID TransactionManagerId,
    IN ACCESS_MASK DesiredAccess,
    IN ULONG OpenOptions OPTIONAL
    );

BOOL
APIENTRY
RollforwardTransactionManager (
    IN HANDLE TransactionManagerHandle,
    IN PLARGE_INTEGER TmVirtualClock
    );

BOOL
APIENTRY
RecoverTransactionManager (
    IN HANDLE TransactionManagerHandle
    );

BOOL
GetCurrentClockTransactionManager(
    IN HANDLE TransactionManagerHandle,
    OUT PLARGE_INTEGER TmVirtualClock
    );

BOOL
GetTransactionManagerId(
    IN HANDLE TransactionManagerHandle,
    OUT LPGUID TransactionManagerId
    );

BOOL
IsLogWritableTransactionManager(
    IN HANDLE TransactionManagerHandle
    );

HANDLE
APIENTRY
CreateResourceManager (
    IN LPSECURITY_ATTRIBUTES lpResourceManagerAttributes OPTIONAL,
    IN LPGUID ResourceManagerId,
    IN DWORD CreateOptions OPTIONAL,
    IN HANDLE TmHandle,
    __in_opt LPWSTR Description
    );

HANDLE
APIENTRY
OpenResourceManager (
    IN DWORD dwDesiredAccess,
    IN HANDLE TmHandle,
    IN LPGUID ResourceManagerId
    );

BOOL
APIENTRY
RecoverResourceManager (
    IN HANDLE ResourceManagerHandle
    );

BOOL
APIENTRY
GetNotificationResourceManager (
    IN  HANDLE                          ResourceManagerHandle,
    OUT PTRANSACTION_NOTIFICATION       TransactionNotification,
    IN  ULONG                           NotificationLength,
    IN  DWORD                           dwMilliseconds OPTIONAL,
    OUT PULONG                          ReturnLength OPTIONAL
    );

BOOL
APIENTRY
GetNotificationResourceManagerAsync (
    IN  HANDLE                        ResourceManagerHandle,
    OUT PTRANSACTION_NOTIFICATION     TransactionNotification,
    IN  ULONG                         TransactionNotificationLength,
    OUT PULONG                        ReturnLength,
    IN  LPOVERLAPPED                  lpOverlapped
    );
    
BOOL
APIENTRY
SetResourceManagerCompletionPort(
    IN HANDLE    ResourceManagerHandle,
    IN HANDLE    IoCompletionPortHandle,
    IN ULONG_PTR CompletionKey
    );

HANDLE
APIENTRY
CreateEnlistment (
    IN LPSECURITY_ATTRIBUTES lpEnlistmentAttributes OPTIONAL,
    IN HANDLE            ResourceManagerHandle,
    IN HANDLE            TransactionHandle,
    IN NOTIFICATION_MASK NotificationMask,
    IN DWORD             CreateOptions OPTIONAL,
    IN PVOID             EnlistmentKey OPTIONAL
    );

HANDLE
APIENTRY
OpenEnlistment (
    IN DWORD              dwDesiredAccess,
    IN HANDLE             ResourceManagerHandle,
    IN LPGUID             EnlistmentId
    );


BOOL
APIENTRY
RecoverEnlistment (
    IN HANDLE EnlistmentHandle,
    IN PVOID EnlistmentKey OPTIONAL
    );


BOOL
APIENTRY
GetEnlistmentRecoveryInformation (
    IN  HANDLE EnlistmentHandle,
    IN  ULONG  BufferSize,
    OUT PVOID  Buffer,
    OUT PULONG BufferUsed OPTIONAL
    );

BOOL
APIENTRY
GetEnlistmentId (
    IN HANDLE EnlistmentHandle,
    OUT LPGUID EnlistmentId
    );

BOOL
APIENTRY
SetEnlistmentRecoveryInformation (
    IN HANDLE EnlistmentHandle,
    IN ULONG  BufferSize,
    IN PVOID  Buffer
    );

BOOL
APIENTRY
PrepareEnlistment (
    IN HANDLE EnlistmentHandle,
    IN PLARGE_INTEGER TmVirtualClock
    );

BOOL
APIENTRY
PrePrepareEnlistment (
    IN HANDLE EnlistmentHandle,
    IN PLARGE_INTEGER TmVirtualClock
    );

BOOL
APIENTRY
CommitEnlistment (
    IN HANDLE EnlistmentHandle,
    IN PLARGE_INTEGER TmVirtualClock
    );

BOOL
APIENTRY
RollbackEnlistment (
    IN HANDLE EnlistmentHandle,
    IN PLARGE_INTEGER TmVirtualClock
    );

BOOL
APIENTRY
PrePrepareComplete (
    IN  HANDLE            EnlistmentHandle,
    IN  PLARGE_INTEGER    TmVirtualClock
    );

BOOL
APIENTRY
PrepareComplete (
    IN  HANDLE            EnlistmentHandle,
    IN  PLARGE_INTEGER    TmVirtualClock
    );

BOOL
APIENTRY
ReadOnlyEnlistment (
    IN  HANDLE            EnlistmentHandle,
    IN  PLARGE_INTEGER    TmVirtualClock
    );

BOOL
APIENTRY
CommitComplete (
    IN  HANDLE            EnlistmentHandle,
    IN  PLARGE_INTEGER    TmVirtualClock
    );

BOOL
APIENTRY
RollbackComplete (
    IN  HANDLE            EnlistmentHandle,
    IN  PLARGE_INTEGER    TmVirtualClock
    );

BOOL
APIENTRY
SavepointComplete (
    IN  HANDLE            EnlistmentHandle,
    IN  PLARGE_INTEGER    TmVirtualClock
    );

BOOL
APIENTRY
SinglePhaseReject (
    IN  HANDLE            EnlistmentHandle,
    IN  PLARGE_INTEGER    TmVirtualClock
    );

//
// Propagation-related routines and types
//



BOOL
APIENTRY
RegisterProtocolAddressInformation(
    IN HANDLE           ResourceManagerHandle,
    IN PCRM_PROTOCOL_ID ProtocolId,
    IN ULONG            ProtocolInformationSize,
    IN PVOID            ProtocolInformation OPTIONAL,
    IN DWORD            CreateOptions OPTIONAL
    );


HANDLE
APIENTRY
PullTransaction(
    IN  ACCESS_MASK       DesiredAccess,
    IN  ULONG             NumberOfProtocols,
    IN  PCRM_PROTOCOL_ID  ProtocolArray,
    IN  ULONG             BufferLength,
    IN  PVOID             Buffer
    );


BOOL
APIENTRY
MarshalTransaction(
    IN  HANDLE            TransactionHandle,
    IN  ULONG             NumberOfProtocols,
    IN  PCRM_PROTOCOL_ID  ProtocolArray,
    IN  ULONG             BufferLength,
    IN  PVOID             Buffer,
    OUT PULONG            BufferUsed OPTIONAL
    );


BOOL
APIENTRY
MarshalComplete(
    IN  HANDLE            ResourceManagerHandle,
    IN  ULONG             PropagationCookie,
    IN  ULONG             BufferLength,
    IN  PVOID             Buffer
    );


BOOL
APIENTRY
PropagationComplete(
    IN  HANDLE            ResourceManagerHandle,
    IN  ULONG             PropagationCookie,
    IN  ULONG             BufferLength,
    IN  PVOID             Buffer
    );


BOOL
APIENTRY
PropagationFailed(
    IN  HANDLE            ResourceManagerHandle,
    IN  ULONG             PropagationCookie
    );

#ifdef __cplusplus
}
#endif


#endif // _KTMUSER_



