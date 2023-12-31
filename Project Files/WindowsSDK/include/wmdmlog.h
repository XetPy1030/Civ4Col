

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for wmdmlog.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wmdmlog_h__
#define __wmdmlog_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMDMLogger_FWD_DEFINED__
#define __IWMDMLogger_FWD_DEFINED__
typedef interface IWMDMLogger IWMDMLogger;
#endif 	/* __IWMDMLogger_FWD_DEFINED__ */


#ifndef __WMDMLogger_FWD_DEFINED__
#define __WMDMLogger_FWD_DEFINED__

#ifdef __cplusplus
typedef class WMDMLogger WMDMLogger;
#else
typedef struct WMDMLogger WMDMLogger;
#endif /* __cplusplus */

#endif 	/* __WMDMLogger_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wmdmlog_0000_0000 */
/* [local] */ 

#define WMDM_LOG_SEV_INFO             0x00000001 
#define WMDM_LOG_SEV_WARN             0x00000002 
#define WMDM_LOG_SEV_ERROR            0x00000004 
#define WMDM_LOG_NOTIMESTAMP          0x00000010 


extern RPC_IF_HANDLE __MIDL_itf_wmdmlog_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdmlog_0000_0000_v0_0_s_ifspec;

#ifndef __IWMDMLogger_INTERFACE_DEFINED__
#define __IWMDMLogger_INTERFACE_DEFINED__

/* interface IWMDMLogger */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWMDMLogger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("110A3200-5A79-11d3-8D78-444553540000")
    IWMDMLogger : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsEnabled( 
            /* [out] */ __RPC__out BOOL *pfEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enable( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLogFileName( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(nMaxChars) LPSTR pszFilename,
            /* [in] */ UINT nMaxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLogFileName( 
            /* [string][in] */ __RPC__in LPSTR pszFilename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogString( 
            /* [in] */ DWORD dwFlags,
            /* [string][in] */ __RPC__in LPSTR pszSrcName,
            /* [string][in] */ __RPC__in LPSTR pszLog) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogDword( 
            /* [in] */ DWORD dwFlags,
            /* [string][in] */ __RPC__in LPSTR pszSrcName,
            /* [string][in] */ __RPC__in LPSTR pszLogFormat,
            /* [in] */ DWORD dwLog) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeParams( 
            /* [out] */ __RPC__out LPDWORD pdwMaxSize,
            /* [out] */ __RPC__out LPDWORD pdwShrinkToSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeParams( 
            /* [in] */ DWORD dwMaxSize,
            /* [in] */ DWORD dwShrinkToSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMDMLoggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMDMLogger * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMDMLogger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMDMLogger * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )( 
            IWMDMLogger * This,
            /* [out] */ __RPC__out BOOL *pfEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IWMDMLogger * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *GetLogFileName )( 
            IWMDMLogger * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(nMaxChars) LPSTR pszFilename,
            /* [in] */ UINT nMaxChars);
        
        HRESULT ( STDMETHODCALLTYPE *SetLogFileName )( 
            IWMDMLogger * This,
            /* [string][in] */ __RPC__in LPSTR pszFilename);
        
        HRESULT ( STDMETHODCALLTYPE *LogString )( 
            IWMDMLogger * This,
            /* [in] */ DWORD dwFlags,
            /* [string][in] */ __RPC__in LPSTR pszSrcName,
            /* [string][in] */ __RPC__in LPSTR pszLog);
        
        HRESULT ( STDMETHODCALLTYPE *LogDword )( 
            IWMDMLogger * This,
            /* [in] */ DWORD dwFlags,
            /* [string][in] */ __RPC__in LPSTR pszSrcName,
            /* [string][in] */ __RPC__in LPSTR pszLogFormat,
            /* [in] */ DWORD dwLog);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IWMDMLogger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeParams )( 
            IWMDMLogger * This,
            /* [out] */ __RPC__out LPDWORD pdwMaxSize,
            /* [out] */ __RPC__out LPDWORD pdwShrinkToSize);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeParams )( 
            IWMDMLogger * This,
            /* [in] */ DWORD dwMaxSize,
            /* [in] */ DWORD dwShrinkToSize);
        
        END_INTERFACE
    } IWMDMLoggerVtbl;

    interface IWMDMLogger
    {
        CONST_VTBL struct IWMDMLoggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMDMLogger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMDMLogger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMDMLogger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMDMLogger_IsEnabled(This,pfEnabled)	\
    ( (This)->lpVtbl -> IsEnabled(This,pfEnabled) ) 

#define IWMDMLogger_Enable(This,fEnable)	\
    ( (This)->lpVtbl -> Enable(This,fEnable) ) 

#define IWMDMLogger_GetLogFileName(This,pszFilename,nMaxChars)	\
    ( (This)->lpVtbl -> GetLogFileName(This,pszFilename,nMaxChars) ) 

#define IWMDMLogger_SetLogFileName(This,pszFilename)	\
    ( (This)->lpVtbl -> SetLogFileName(This,pszFilename) ) 

#define IWMDMLogger_LogString(This,dwFlags,pszSrcName,pszLog)	\
    ( (This)->lpVtbl -> LogString(This,dwFlags,pszSrcName,pszLog) ) 

#define IWMDMLogger_LogDword(This,dwFlags,pszSrcName,pszLogFormat,dwLog)	\
    ( (This)->lpVtbl -> LogDword(This,dwFlags,pszSrcName,pszLogFormat,dwLog) ) 

#define IWMDMLogger_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IWMDMLogger_GetSizeParams(This,pdwMaxSize,pdwShrinkToSize)	\
    ( (This)->lpVtbl -> GetSizeParams(This,pdwMaxSize,pdwShrinkToSize) ) 

#define IWMDMLogger_SetSizeParams(This,dwMaxSize,dwShrinkToSize)	\
    ( (This)->lpVtbl -> SetSizeParams(This,dwMaxSize,dwShrinkToSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMDMLogger_INTERFACE_DEFINED__ */



#ifndef __WMDMLogLib_LIBRARY_DEFINED__
#define __WMDMLogLib_LIBRARY_DEFINED__

/* library WMDMLogLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WMDMLogLib;

EXTERN_C const CLSID CLSID_WMDMLogger;

#ifdef __cplusplus

class DECLSPEC_UUID("110A3202-5A79-11d3-8D78-444553540000")
WMDMLogger;
#endif
#endif /* __WMDMLogLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



