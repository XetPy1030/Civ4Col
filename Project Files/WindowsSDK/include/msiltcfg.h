/*****************************************************************************\
*                                                                             *
* msiltcfg.h - - Interface for external access to Installer Service           *
*                                                                             *
* Version 4.0                                                                 *
*                                                                             *
* NOTES:  All buffers sizes are TCHAR count, null included only on input      *
*         Return argument pointers may be null if not interested in value     *
*                                                                             *
* Copyright (c) Microsoft Corporation. All rights reserved.                   *
*                                                                             *
\*****************************************************************************/

#ifdef _MSILTCFG_H_
#define _MSILTCFG_H_

// Send shutdown msi.dll message to all the processes

UINT WINAPI ShutdownMsi(DWORD dwReserved);

// Send restart msi.dll message to all the processes

UINT WINAPI RestartMsi(DWORD dwReserved);

#endif // _MSILTCFG_H_
