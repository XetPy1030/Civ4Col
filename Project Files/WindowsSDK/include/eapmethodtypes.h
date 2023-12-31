///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Microsoft Corporation
//
// SYNOPSIS
//
//   Declares datastructures that executes the peer eap state machine.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef EAPMETHODAPIS_H
#define EAPMETHODAPIS_H
#pragma once

#ifdef __cplusplus
extern "C" {
#endif


typedef struct tagEapPacket
{
   BYTE Code;
   BYTE Id;
   BYTE Length[2];
   BYTE Data[1];
   // Any additional data following the first byte. The length of
   // the data can be deduced by the length fields.
} EapPacket;

//
// EAP packet codes from EAP spec.
//
typedef
#ifdef __midl
   [v1_enum]
#endif
enum tagEapCode
{
   EapCodeMinimum = 1,
   EapCodeRequest = 1,
   EapCodeResponse,
   EapCodeSuccess,
   EapCodeFailure,
   EapCodeMaximum = EapCodeFailure
} EapCode;

// This is a handle to an eap session owned by the individual eap methods.
typedef VOID* EAP_SESSION_HANDLE;

   
#ifdef __cplusplus
}
#endif

#endif // EAPMETHODAPIS_H


