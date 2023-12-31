//////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Microsoft Corporation
//
// SYNOPSIS
//
//   Scenario-specific error codes, reported by EapHost and Eap Method DLLs.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef EAPHOSTERROR_H
#define EAPHOSTERROR_H
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define FACILITY_EAP                   0x0042  // 66L
#define FACILITY_EAP_MESSAGE           0x0842  // 66L + MessageId bit


// Errors common across different groups.

#define _EAP_CERT_FIRST     (+ 0x0)
#define _EAP_CERT_LAST      (+ 0xF)

#define _EAP_CERT_NOT_FOUND           (+ 0x1)
#define _EAP_CERT_INVALID             (+ 0x2)
#define _EAP_CERT_EXPIRED             (+ 0x3)
#define _EAP_CERT_REVOKED             (+ 0x4)
#define _EAP_CERT_OTHER_ERROR         (+ 0x5)
#define _EAP_CERT_REJECTED            (+ 0x6)
#define _EAP_CERT_NAME_REQUIRED       (+ 0x7)

#define _EAP_GENERAL_FIRST  (+ 0x10)   // (+16)
#define _EAP_GENERAL_LAST   (+ 0x3F)   // (+31)

//
// Individual groups of Eap-related Errors.
//

#define EAP_GROUP_MASK       0x0000FF00L

#define EAP_E_EAPHOST_FIRST  0x80420000L
#define EAP_E_EAPHOST_LAST   0x804200FFL
#define EAP_I_EAPHOST_FIRST  0x80420000L
#define EAP_I_EAPHOST_LAST   0x804200FFL

#define EAP_E_CERT_STORE_INACCESSIBLE               0x80420010  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 0)

#define EAP_E_EAPHOST_METHOD_NOT_INSTALLED          0x80420011  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 1)
#define EAP_E_EAPHOST_THIRDPARTY_METHOD_HOST_RESET  0x80420012  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 2)
#define EAP_E_EAPHOST_EAPQEC_INACCESSIBLE           0x80420013  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 3)

#define EAP_E_EAPHOST_IDENTITY_UNKNOWN              0x80420014  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 4)

#define EAP_E_AUTHENTICATION_FAILED                 0x80420015  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 5)

#define EAP_I_EAPHOST_EAP_NEGOTIATION_FAILED        0x40420016  // (EAP_I_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 6)
#define EAP_E_EAPHOST_METHOD_INVALID_PACKET         0x80420017  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 7)
#define EAP_E_EAPHOST_REMOTE_INVALID_PACKET         0x80420018  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 8)
#define EAP_E_EAPHOST_XML_MALFORMED                 0x80420019  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 9)
#define EAP_E_EAPHOST_METHOD_OPERATION_NOT_SUPPORTED                 0x80420020  // (EAP_E_EAPHOST_FIRST + _EAP_GENERAL_FIRST + 10)


#define EAP_E_USER_FIRST  0x80420100L
#define EAP_E_USER_LAST   0x804201FFL
#define EAP_I_USER_FIRST  0x40420100L
#define EAP_I_USER_LAST   0x404201FFL
    
#define EAP_E_USER_CERT_NOT_FOUND           0x80420100  // (EAP_E_USER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_NOT_FOUND)
#define EAP_E_USER_CERT_INVALID             0x80420101  // (EAP_E_USER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_INVALID)
#define EAP_E_USER_CERT_EXPIRED             0x80420102  // (EAP_E_USER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_EXPIRED)
#define EAP_E_USER_CERT_REVOKED             0x80420103  // (EAP_E_USER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_REVOKED)
#define EAP_E_USER_CERT_OTHER_ERROR         0x80420104  // (EAP_E_USER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_OTHER_ERROR)
#define EAP_E_USER_CERT_REJECTED            0x80420105  // (EAP_E_USER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_REJECTED)

#define EAP_I_USER_ACCOUNT_OTHER_ERROR      0x40420110  // (EAP_I_USER_FIRST + _EAP_GENERAL_FIRST + 0
#define EAP_E_USER_CREDENTIALS_REJECTED     0x80420111  // (EAP_E_USER_FIRST + _EAP_GENERAL_FIRST + 1)


#define EAP_E_SERVER_FIRST  0x80420200L
#define EAP_E_SERVER_LAST   0x804202FFL

#define EAP_E_SERVER_CERT_NOT_FOUND         0x80420200  // (EAP_E_SERVER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_NOT_FOUND)
#define EAP_E_SERVER_CERT_INVALID           0x80420201  // (EAP_E_SERVER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_INVALID)
#define EAP_E_SERVER_CERT_EXPIRED           0x80420202  // (EAP_E_SERVER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_EXPIRED)
#define EAP_E_SERVER_CERT_REVOKED           0x80420203  // (EAP_E_SERVER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_REVOKED)
#define EAP_E_SERVER_CERT_OTHER_ERROR       0x80420204  // (EAP_E_SERVER_FIRST + _EAP_CERT_FIRST + _EAP_CERT_OTHER_ERROR)


#define EAP_E_USER_ROOT_CERT_FIRST  0x80420300L
#define EAP_E_USER_ROOT_CERT_LAST   0x804203FFL

#define EAP_E_USER_ROOT_CERT_NOT_FOUND      0x80420300  // (EAP_E_USER_ROOT_CERT_FIRST + _EAP_CERT_FIRST + _EAP_CERT_NOT_FOUND)
#define EAP_E_USER_ROOT_CERT_INVALID        0x80420301  // (EAP_E_USER_ROOT_CERT_FIRST + _EAP_CERT_FIRST + _EAP_CERT_INVALID)
#define EAP_E_USER_ROOT_CERT_EXPIRED        0x80420302  // (EAP_E_USER_ROOT_CERT_FIRST + _EAP_CERT_FIRST + _EAP_CERT_EXPIRED)

#define EAP_E_SERVER_ROOT_CERT_FIRST  0x80420400L
#define EAP_E_SERVER_ROOT_CERT_LAST   0x804204FFL

#define EAP_E_SERVER_ROOT_CERT_NOT_FOUND        0x80420400  // (EAP_E_SERVER_ROOT_CERT_FIRST + _EAP_CERT_FIRST + _EAP_CERT_NOT_FOUND)
#define EAP_E_SERVER_ROOT_CERT_INVALID          0x80420401  // (EAP_E_SERVER_ROOT_CERT_FIRST + _EAP_CERT_FIRST + _EAP_CERT_INVALID)
#define EAP_E_SERVER_ROOT_CERT_NAME_REQUIRED    0x80420406  // (EAP_E_SERVER_ROOT_CERT_FIRST + _EAP_CERT_FIRST + _EAP_CERT_NAME_REQUIRED)


// Alternate names for certain errors.
#define EAP_METHOD_INVALID_PACKET  EAP_E_EAPHOST_METHOD_INVALID_PACKET
#define EAP_INVALID_PACKET         EAP_E_EAPHOST_REMOTE_INVALID_PACKET


#ifdef __cplusplus
}
#endif

#endif // EAPHOSTERROR_H


