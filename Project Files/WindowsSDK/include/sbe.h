

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for sbe.idl:
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

#ifndef __sbe_h__
#define __sbe_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IStreamBufferInitialize_FWD_DEFINED__
#define __IStreamBufferInitialize_FWD_DEFINED__
typedef interface IStreamBufferInitialize IStreamBufferInitialize;
#endif 	/* __IStreamBufferInitialize_FWD_DEFINED__ */


#ifndef __IStreamBufferSink_FWD_DEFINED__
#define __IStreamBufferSink_FWD_DEFINED__
typedef interface IStreamBufferSink IStreamBufferSink;
#endif 	/* __IStreamBufferSink_FWD_DEFINED__ */


#ifndef __IStreamBufferSink2_FWD_DEFINED__
#define __IStreamBufferSink2_FWD_DEFINED__
typedef interface IStreamBufferSink2 IStreamBufferSink2;
#endif 	/* __IStreamBufferSink2_FWD_DEFINED__ */


#ifndef __IStreamBufferSink3_FWD_DEFINED__
#define __IStreamBufferSink3_FWD_DEFINED__
typedef interface IStreamBufferSink3 IStreamBufferSink3;
#endif 	/* __IStreamBufferSink3_FWD_DEFINED__ */


#ifndef __IStreamBufferSource_FWD_DEFINED__
#define __IStreamBufferSource_FWD_DEFINED__
typedef interface IStreamBufferSource IStreamBufferSource;
#endif 	/* __IStreamBufferSource_FWD_DEFINED__ */


#ifndef __IStreamBufferRecordControl_FWD_DEFINED__
#define __IStreamBufferRecordControl_FWD_DEFINED__
typedef interface IStreamBufferRecordControl IStreamBufferRecordControl;
#endif 	/* __IStreamBufferRecordControl_FWD_DEFINED__ */


#ifndef __IStreamBufferRecComp_FWD_DEFINED__
#define __IStreamBufferRecComp_FWD_DEFINED__
typedef interface IStreamBufferRecComp IStreamBufferRecComp;
#endif 	/* __IStreamBufferRecComp_FWD_DEFINED__ */


#ifndef __IStreamBufferRecordingAttribute_FWD_DEFINED__
#define __IStreamBufferRecordingAttribute_FWD_DEFINED__
typedef interface IStreamBufferRecordingAttribute IStreamBufferRecordingAttribute;
#endif 	/* __IStreamBufferRecordingAttribute_FWD_DEFINED__ */


#ifndef __IEnumStreamBufferRecordingAttrib_FWD_DEFINED__
#define __IEnumStreamBufferRecordingAttrib_FWD_DEFINED__
typedef interface IEnumStreamBufferRecordingAttrib IEnumStreamBufferRecordingAttrib;
#endif 	/* __IEnumStreamBufferRecordingAttrib_FWD_DEFINED__ */


#ifndef __IStreamBufferConfigure_FWD_DEFINED__
#define __IStreamBufferConfigure_FWD_DEFINED__
typedef interface IStreamBufferConfigure IStreamBufferConfigure;
#endif 	/* __IStreamBufferConfigure_FWD_DEFINED__ */


#ifndef __IStreamBufferConfigure2_FWD_DEFINED__
#define __IStreamBufferConfigure2_FWD_DEFINED__
typedef interface IStreamBufferConfigure2 IStreamBufferConfigure2;
#endif 	/* __IStreamBufferConfigure2_FWD_DEFINED__ */


#ifndef __IStreamBufferConfigure3_FWD_DEFINED__
#define __IStreamBufferConfigure3_FWD_DEFINED__
typedef interface IStreamBufferConfigure3 IStreamBufferConfigure3;
#endif 	/* __IStreamBufferConfigure3_FWD_DEFINED__ */


#ifndef __IStreamBufferMediaSeeking_FWD_DEFINED__
#define __IStreamBufferMediaSeeking_FWD_DEFINED__
typedef interface IStreamBufferMediaSeeking IStreamBufferMediaSeeking;
#endif 	/* __IStreamBufferMediaSeeking_FWD_DEFINED__ */


#ifndef __IStreamBufferMediaSeeking2_FWD_DEFINED__
#define __IStreamBufferMediaSeeking2_FWD_DEFINED__
typedef interface IStreamBufferMediaSeeking2 IStreamBufferMediaSeeking2;
#endif 	/* __IStreamBufferMediaSeeking2_FWD_DEFINED__ */


#ifndef __IStreamBufferDataCounters_FWD_DEFINED__
#define __IStreamBufferDataCounters_FWD_DEFINED__
typedef interface IStreamBufferDataCounters IStreamBufferDataCounters;
#endif 	/* __IStreamBufferDataCounters_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "strmif.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sbe_0000_0000 */
/* [local] */ 


















extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0000_v0_0_s_ifspec;

#ifndef __IStreamBufferInitialize_INTERFACE_DEFINED__
#define __IStreamBufferInitialize_INTERFACE_DEFINED__

/* interface IStreamBufferInitialize */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferInitialize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9ce50f2d-6ba7-40fb-a034-50b1a674ec78")
    IStreamBufferInitialize : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetHKEY( 
            /* [in] */ HKEY hkeyRoot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSIDs( 
            /* [in] */ DWORD cSIDs,
            /* [size_is][in] */ PSID *ppSID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferInitializeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferInitialize * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferInitialize * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferInitialize * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetHKEY )( 
            IStreamBufferInitialize * This,
            /* [in] */ HKEY hkeyRoot);
        
        HRESULT ( STDMETHODCALLTYPE *SetSIDs )( 
            IStreamBufferInitialize * This,
            /* [in] */ DWORD cSIDs,
            /* [size_is][in] */ PSID *ppSID);
        
        END_INTERFACE
    } IStreamBufferInitializeVtbl;

    interface IStreamBufferInitialize
    {
        CONST_VTBL struct IStreamBufferInitializeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferInitialize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferInitialize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferInitialize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferInitialize_SetHKEY(This,hkeyRoot)	\
    ( (This)->lpVtbl -> SetHKEY(This,hkeyRoot) ) 

#define IStreamBufferInitialize_SetSIDs(This,cSIDs,ppSID)	\
    ( (This)->lpVtbl -> SetSIDs(This,cSIDs,ppSID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferInitialize_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sbe_0000_0001 */
/* [local] */ 


enum __MIDL___MIDL_itf_sbe_0000_0001_0001
    {	RECORDING_TYPE_CONTENT	= 0,
	RECORDING_TYPE_REFERENCE	= ( RECORDING_TYPE_CONTENT + 1 ) 
    } ;


extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0001_v0_0_s_ifspec;

#ifndef __IStreamBufferSink_INTERFACE_DEFINED__
#define __IStreamBufferSink_INTERFACE_DEFINED__

/* interface IStreamBufferSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("afd1f242-7efd-45ee-ba4e-407a25c9a77a")
    IStreamBufferSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LockProfile( 
            /* [in] */ __RPC__in LPCWSTR pszStreamBufferFilename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateRecorder( 
            /* [in] */ __RPC__in LPCWSTR pszFilename,
            /* [in] */ DWORD dwRecordType,
            /* [out] */ __RPC__deref_out_opt IUnknown **pRecordingIUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsProfileLocked( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferSink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *LockProfile )( 
            IStreamBufferSink * This,
            /* [in] */ __RPC__in LPCWSTR pszStreamBufferFilename);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRecorder )( 
            IStreamBufferSink * This,
            /* [in] */ __RPC__in LPCWSTR pszFilename,
            /* [in] */ DWORD dwRecordType,
            /* [out] */ __RPC__deref_out_opt IUnknown **pRecordingIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *IsProfileLocked )( 
            IStreamBufferSink * This);
        
        END_INTERFACE
    } IStreamBufferSinkVtbl;

    interface IStreamBufferSink
    {
        CONST_VTBL struct IStreamBufferSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferSink_LockProfile(This,pszStreamBufferFilename)	\
    ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) ) 

#define IStreamBufferSink_CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown)	\
    ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) ) 

#define IStreamBufferSink_IsProfileLocked(This)	\
    ( (This)->lpVtbl -> IsProfileLocked(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferSink_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferSink2_INTERFACE_DEFINED__
#define __IStreamBufferSink2_INTERFACE_DEFINED__

/* interface IStreamBufferSink2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferSink2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB94A660-F4FB-4bfa-BCC6-FE159A4EEA93")
    IStreamBufferSink2 : public IStreamBufferSink
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UnlockProfile( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferSink2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferSink2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferSink2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferSink2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *LockProfile )( 
            IStreamBufferSink2 * This,
            /* [in] */ __RPC__in LPCWSTR pszStreamBufferFilename);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRecorder )( 
            IStreamBufferSink2 * This,
            /* [in] */ __RPC__in LPCWSTR pszFilename,
            /* [in] */ DWORD dwRecordType,
            /* [out] */ __RPC__deref_out_opt IUnknown **pRecordingIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *IsProfileLocked )( 
            IStreamBufferSink2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockProfile )( 
            IStreamBufferSink2 * This);
        
        END_INTERFACE
    } IStreamBufferSink2Vtbl;

    interface IStreamBufferSink2
    {
        CONST_VTBL struct IStreamBufferSink2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferSink2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferSink2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferSink2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferSink2_LockProfile(This,pszStreamBufferFilename)	\
    ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) ) 

#define IStreamBufferSink2_CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown)	\
    ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) ) 

#define IStreamBufferSink2_IsProfileLocked(This)	\
    ( (This)->lpVtbl -> IsProfileLocked(This) ) 


#define IStreamBufferSink2_UnlockProfile(This)	\
    ( (This)->lpVtbl -> UnlockProfile(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferSink2_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferSink3_INTERFACE_DEFINED__
#define __IStreamBufferSink3_INTERFACE_DEFINED__

/* interface IStreamBufferSink3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferSink3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("974723f2-887a-4452-9366-2cff3057bc8f")
    IStreamBufferSink3 : public IStreamBufferSink2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAvailableFilter( 
            /* [out][in] */ __RPC__inout REFERENCE_TIME *prtMin) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferSink3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferSink3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferSink3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferSink3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *LockProfile )( 
            IStreamBufferSink3 * This,
            /* [in] */ __RPC__in LPCWSTR pszStreamBufferFilename);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRecorder )( 
            IStreamBufferSink3 * This,
            /* [in] */ __RPC__in LPCWSTR pszFilename,
            /* [in] */ DWORD dwRecordType,
            /* [out] */ __RPC__deref_out_opt IUnknown **pRecordingIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *IsProfileLocked )( 
            IStreamBufferSink3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockProfile )( 
            IStreamBufferSink3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAvailableFilter )( 
            IStreamBufferSink3 * This,
            /* [out][in] */ __RPC__inout REFERENCE_TIME *prtMin);
        
        END_INTERFACE
    } IStreamBufferSink3Vtbl;

    interface IStreamBufferSink3
    {
        CONST_VTBL struct IStreamBufferSink3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferSink3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferSink3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferSink3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferSink3_LockProfile(This,pszStreamBufferFilename)	\
    ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) ) 

#define IStreamBufferSink3_CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown)	\
    ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) ) 

#define IStreamBufferSink3_IsProfileLocked(This)	\
    ( (This)->lpVtbl -> IsProfileLocked(This) ) 


#define IStreamBufferSink3_UnlockProfile(This)	\
    ( (This)->lpVtbl -> UnlockProfile(This) ) 


#define IStreamBufferSink3_SetAvailableFilter(This,prtMin)	\
    ( (This)->lpVtbl -> SetAvailableFilter(This,prtMin) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferSink3_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferSource_INTERFACE_DEFINED__
#define __IStreamBufferSource_INTERFACE_DEFINED__

/* interface IStreamBufferSource */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1c5bd776-6ced-4f44-8164-5eab0e98db12")
    IStreamBufferSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStreamSink( 
            /* [in] */ __RPC__in_opt IStreamBufferSink *pIStreamBufferSink) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetStreamSink )( 
            IStreamBufferSource * This,
            /* [in] */ __RPC__in_opt IStreamBufferSink *pIStreamBufferSink);
        
        END_INTERFACE
    } IStreamBufferSourceVtbl;

    interface IStreamBufferSource
    {
        CONST_VTBL struct IStreamBufferSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferSource_SetStreamSink(This,pIStreamBufferSink)	\
    ( (This)->lpVtbl -> SetStreamSink(This,pIStreamBufferSink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferSource_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferRecordControl_INTERFACE_DEFINED__
#define __IStreamBufferRecordControl_INTERFACE_DEFINED__

/* interface IStreamBufferRecordControl */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferRecordControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba9b6c99-f3c7-4ff2-92db-cfdd4851bf31")
    IStreamBufferRecordControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Start( 
            /* [out][in] */ __RPC__inout REFERENCE_TIME *prtStart) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( 
            /* [in] */ REFERENCE_TIME rtStop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecordingStatus( 
            /* [out] */ __RPC__out HRESULT *phResult,
            /* [out] */ __RPC__out BOOL *pbStarted,
            /* [out] */ __RPC__out BOOL *pbStopped) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferRecordControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferRecordControl * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferRecordControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferRecordControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IStreamBufferRecordControl * This,
            /* [out][in] */ __RPC__inout REFERENCE_TIME *prtStart);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IStreamBufferRecordControl * This,
            /* [in] */ REFERENCE_TIME rtStop);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecordingStatus )( 
            IStreamBufferRecordControl * This,
            /* [out] */ __RPC__out HRESULT *phResult,
            /* [out] */ __RPC__out BOOL *pbStarted,
            /* [out] */ __RPC__out BOOL *pbStopped);
        
        END_INTERFACE
    } IStreamBufferRecordControlVtbl;

    interface IStreamBufferRecordControl
    {
        CONST_VTBL struct IStreamBufferRecordControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferRecordControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferRecordControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferRecordControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferRecordControl_Start(This,prtStart)	\
    ( (This)->lpVtbl -> Start(This,prtStart) ) 

#define IStreamBufferRecordControl_Stop(This,rtStop)	\
    ( (This)->lpVtbl -> Stop(This,rtStop) ) 

#define IStreamBufferRecordControl_GetRecordingStatus(This,phResult,pbStarted,pbStopped)	\
    ( (This)->lpVtbl -> GetRecordingStatus(This,phResult,pbStarted,pbStopped) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferRecordControl_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferRecComp_INTERFACE_DEFINED__
#define __IStreamBufferRecComp_INTERFACE_DEFINED__

/* interface IStreamBufferRecComp */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferRecComp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E259A9B-8815-42ae-B09F-221970B154FD")
    IStreamBufferRecComp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in LPCWSTR pszTargetFilename,
            /* [in] */ __RPC__in LPCWSTR pszSBRecProfileRef) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ __RPC__in LPCWSTR pszSBRecording) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendEx( 
            /* [in] */ __RPC__in LPCWSTR pszSBRecording,
            /* [in] */ REFERENCE_TIME rtStart,
            /* [in] */ REFERENCE_TIME rtStop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentLength( 
            /* [out] */ __RPC__out DWORD *pcSeconds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferRecCompVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferRecComp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferRecComp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferRecComp * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IStreamBufferRecComp * This,
            /* [in] */ __RPC__in LPCWSTR pszTargetFilename,
            /* [in] */ __RPC__in LPCWSTR pszSBRecProfileRef);
        
        HRESULT ( STDMETHODCALLTYPE *Append )( 
            IStreamBufferRecComp * This,
            /* [in] */ __RPC__in LPCWSTR pszSBRecording);
        
        HRESULT ( STDMETHODCALLTYPE *AppendEx )( 
            IStreamBufferRecComp * This,
            /* [in] */ __RPC__in LPCWSTR pszSBRecording,
            /* [in] */ REFERENCE_TIME rtStart,
            /* [in] */ REFERENCE_TIME rtStop);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLength )( 
            IStreamBufferRecComp * This,
            /* [out] */ __RPC__out DWORD *pcSeconds);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IStreamBufferRecComp * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IStreamBufferRecComp * This);
        
        END_INTERFACE
    } IStreamBufferRecCompVtbl;

    interface IStreamBufferRecComp
    {
        CONST_VTBL struct IStreamBufferRecCompVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferRecComp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferRecComp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferRecComp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferRecComp_Initialize(This,pszTargetFilename,pszSBRecProfileRef)	\
    ( (This)->lpVtbl -> Initialize(This,pszTargetFilename,pszSBRecProfileRef) ) 

#define IStreamBufferRecComp_Append(This,pszSBRecording)	\
    ( (This)->lpVtbl -> Append(This,pszSBRecording) ) 

#define IStreamBufferRecComp_AppendEx(This,pszSBRecording,rtStart,rtStop)	\
    ( (This)->lpVtbl -> AppendEx(This,pszSBRecording,rtStart,rtStop) ) 

#define IStreamBufferRecComp_GetCurrentLength(This,pcSeconds)	\
    ( (This)->lpVtbl -> GetCurrentLength(This,pcSeconds) ) 

#define IStreamBufferRecComp_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IStreamBufferRecComp_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferRecComp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sbe_0000_0007 */
/* [local] */ 

////////////////////////////////////////////////////////////////
//
// List of pre-defined attributes 
//
static const WCHAR g_wszStreamBufferRecordingDuration[] =L"Duration";
static const WCHAR g_wszStreamBufferRecordingBitrate[] =L"Bitrate";
static const WCHAR g_wszStreamBufferRecordingSeekable[] =L"Seekable";
static const WCHAR g_wszStreamBufferRecordingStridable[] =L"Stridable";
static const WCHAR g_wszStreamBufferRecordingBroadcast[] =L"Broadcast";
static const WCHAR g_wszStreamBufferRecordingProtected[] =L"Is_Protected";
static const WCHAR g_wszStreamBufferRecordingTrusted[] =L"Is_Trusted";
static const WCHAR g_wszStreamBufferRecordingSignature_Name[] =L"Signature_Name";
static const WCHAR g_wszStreamBufferRecordingHasAudio[] =L"HasAudio";
static const WCHAR g_wszStreamBufferRecordingHasImage[] =L"HasImage";
static const WCHAR g_wszStreamBufferRecordingHasScript[] =L"HasScript";
static const WCHAR g_wszStreamBufferRecordingHasVideo[] =L"HasVideo";
static const WCHAR g_wszStreamBufferRecordingCurrentBitrate[] =L"CurrentBitrate";
static const WCHAR g_wszStreamBufferRecordingOptimalBitrate[] =L"OptimalBitrate";
static const WCHAR g_wszStreamBufferRecordingHasAttachedImages[] =L"HasAttachedImages";
static const WCHAR g_wszStreamBufferRecordingSkipBackward[] =L"Can_Skip_Backward";
static const WCHAR g_wszStreamBufferRecordingSkipForward[] =L"Can_Skip_Forward";
static const WCHAR g_wszStreamBufferRecordingNumberOfFrames[] =L"NumberOfFrames";
static const WCHAR g_wszStreamBufferRecordingFileSize[] =L"FileSize";
static const WCHAR g_wszStreamBufferRecordingHasArbitraryDataStream[] =L"HasArbitraryDataStream";
static const WCHAR g_wszStreamBufferRecordingHasFileTransferStream[] =L"HasFileTransferStream";

////////////////////////////////////////////////////////////////
//
// The content description object supports 5 basic attributes.
//
static const WCHAR g_wszStreamBufferRecordingTitle[] =L"Title";
static const WCHAR g_wszStreamBufferRecordingAuthor[] =L"Author";
static const WCHAR g_wszStreamBufferRecordingDescription[] =L"Description";
static const WCHAR g_wszStreamBufferRecordingRating[] =L"Rating";
static const WCHAR g_wszStreamBufferRecordingCopyright[] =L"Copyright";

////////////////////////////////////////////////////////////////
//
// These attributes are used to configure DRM using IWMDRMWriter::SetDRMAttribute.
//
static const WCHAR *g_wszStreamBufferRecordingUse_DRM = L"Use_DRM";
static const WCHAR *g_wszStreamBufferRecordingDRM_Flags = L"DRM_Flags";
static const WCHAR *g_wszStreamBufferRecordingDRM_Level = L"DRM_Level";

////////////////////////////////////////////////////////////////
//
// These are the additional attributes defined in the WM attribute
// namespace that give information about the content.
//
static const WCHAR g_wszStreamBufferRecordingAlbumTitle[] =L"WM/AlbumTitle";
static const WCHAR g_wszStreamBufferRecordingTrack[] =L"WM/Track";
static const WCHAR g_wszStreamBufferRecordingPromotionURL[] =L"WM/PromotionURL";
static const WCHAR g_wszStreamBufferRecordingAlbumCoverURL[] =L"WM/AlbumCoverURL";
static const WCHAR g_wszStreamBufferRecordingGenre[] =L"WM/Genre";
static const WCHAR g_wszStreamBufferRecordingYear[] =L"WM/Year";
static const WCHAR g_wszStreamBufferRecordingGenreID[] =L"WM/GenreID";
static const WCHAR g_wszStreamBufferRecordingMCDI[] =L"WM/MCDI";
static const WCHAR g_wszStreamBufferRecordingComposer[] =L"WM/Composer";
static const WCHAR g_wszStreamBufferRecordingLyrics[] =L"WM/Lyrics";
static const WCHAR g_wszStreamBufferRecordingTrackNumber[] =L"WM/TrackNumber";
static const WCHAR g_wszStreamBufferRecordingToolName[] =L"WM/ToolName";
static const WCHAR g_wszStreamBufferRecordingToolVersion[] =L"WM/ToolVersion";
static const WCHAR g_wszStreamBufferRecordingIsVBR[] =L"IsVBR";
static const WCHAR g_wszStreamBufferRecordingAlbumArtist[] =L"WM/AlbumArtist";

////////////////////////////////////////////////////////////////
//
// These optional attributes may be used to give information 
// about the branding of the content.
//
static const WCHAR g_wszStreamBufferRecordingBannerImageType[] =L"BannerImageType";
static const WCHAR g_wszStreamBufferRecordingBannerImageData[] =L"BannerImageData";
static const WCHAR g_wszStreamBufferRecordingBannerImageURL[] =L"BannerImageURL";
static const WCHAR g_wszStreamBufferRecordingCopyrightURL[] =L"CopyrightURL";
////////////////////////////////////////////////////////////////
//
// Optional attributes, used to give information 
// about video stream properties.
//
static const WCHAR g_wszStreamBufferRecordingAspectRatioX[] =L"AspectRatioX";
static const WCHAR g_wszStreamBufferRecordingAspectRatioY[] =L"AspectRatioY";
////////////////////////////////////////////////////////////////
//
// The NSC file supports the following attributes.
//
static const WCHAR g_wszStreamBufferRecordingNSCName[] =L"NSC_Name";
static const WCHAR g_wszStreamBufferRecordingNSCAddress[] =L"NSC_Address";
static const WCHAR g_wszStreamBufferRecordingNSCPhone[] =L"NSC_Phone";
static const WCHAR g_wszStreamBufferRecordingNSCEmail[] =L"NSC_Email";
static const WCHAR g_wszStreamBufferRecordingNSCDescription[] =L"NSC_Description";

typedef /* [v1_enum][uuid] */  DECLSPEC_UUID("99038221-f409-4d44-8313-bff73269a85e") 
enum STREAMBUFFER_ATTR_DATATYPE
    {	STREAMBUFFER_TYPE_DWORD	= 0,
	STREAMBUFFER_TYPE_STRING	= 1,
	STREAMBUFFER_TYPE_BINARY	= 2,
	STREAMBUFFER_TYPE_BOOL	= 3,
	STREAMBUFFER_TYPE_QWORD	= 4,
	STREAMBUFFER_TYPE_WORD	= 5,
	STREAMBUFFER_TYPE_GUID	= 6
    } 	STREAMBUFFER_ATTR_DATATYPE;



extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0007_v0_0_s_ifspec;

#ifndef __IStreamBufferRecordingAttribute_INTERFACE_DEFINED__
#define __IStreamBufferRecordingAttribute_INTERFACE_DEFINED__

/* interface IStreamBufferRecordingAttribute */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferRecordingAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16CA4E03-FE69-4705-BD41-5B7DFC0C95F3")
    IStreamBufferRecordingAttribute : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAttribute( 
            /* [in] */ ULONG ulReserved,
            /* [in] */ __RPC__in LPCWSTR pszAttributeName,
            /* [in] */ STREAMBUFFER_ATTR_DATATYPE StreamBufferAttributeType,
            /* [size_is][in] */ __RPC__in_ecount_full(cbAttributeLength) BYTE *pbAttribute,
            /* [in] */ WORD cbAttributeLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributeCount( 
            /* [in] */ ULONG ulReserved,
            /* [out] */ __RPC__out WORD *pcAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributeByName( 
            /* [in] */ __RPC__in LPCWSTR pszAttributeName,
            /* [in] */ __RPC__in ULONG *pulReserved,
            /* [out] */ __RPC__out STREAMBUFFER_ATTR_DATATYPE *pStreamBufferAttributeType,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcbLength) BYTE *pbAttribute,
            /* [out][in] */ __RPC__inout WORD *pcbLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributeByIndex( 
            /* [in] */ WORD wIndex,
            /* [in] */ __RPC__in ULONG *pulReserved,
            /* [out] */ __RPC__out WCHAR *pszAttributeName,
            /* [out][in] */ __RPC__inout WORD *pcchNameLength,
            /* [out] */ __RPC__out STREAMBUFFER_ATTR_DATATYPE *pStreamBufferAttributeType,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcbLength) BYTE *pbAttribute,
            /* [out][in] */ __RPC__inout WORD *pcbLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAttributes( 
            /* [out] */ __RPC__deref_out_opt IEnumStreamBufferRecordingAttrib **ppIEnumStreamBufferAttrib) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferRecordingAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferRecordingAttribute * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferRecordingAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferRecordingAttribute * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttribute )( 
            IStreamBufferRecordingAttribute * This,
            /* [in] */ ULONG ulReserved,
            /* [in] */ __RPC__in LPCWSTR pszAttributeName,
            /* [in] */ STREAMBUFFER_ATTR_DATATYPE StreamBufferAttributeType,
            /* [size_is][in] */ __RPC__in_ecount_full(cbAttributeLength) BYTE *pbAttribute,
            /* [in] */ WORD cbAttributeLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributeCount )( 
            IStreamBufferRecordingAttribute * This,
            /* [in] */ ULONG ulReserved,
            /* [out] */ __RPC__out WORD *pcAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByName )( 
            IStreamBufferRecordingAttribute * This,
            /* [in] */ __RPC__in LPCWSTR pszAttributeName,
            /* [in] */ __RPC__in ULONG *pulReserved,
            /* [out] */ __RPC__out STREAMBUFFER_ATTR_DATATYPE *pStreamBufferAttributeType,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcbLength) BYTE *pbAttribute,
            /* [out][in] */ __RPC__inout WORD *pcbLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByIndex )( 
            IStreamBufferRecordingAttribute * This,
            /* [in] */ WORD wIndex,
            /* [in] */ __RPC__in ULONG *pulReserved,
            /* [out] */ __RPC__out WCHAR *pszAttributeName,
            /* [out][in] */ __RPC__inout WORD *pcchNameLength,
            /* [out] */ __RPC__out STREAMBUFFER_ATTR_DATATYPE *pStreamBufferAttributeType,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcbLength) BYTE *pbAttribute,
            /* [out][in] */ __RPC__inout WORD *pcbLength);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAttributes )( 
            IStreamBufferRecordingAttribute * This,
            /* [out] */ __RPC__deref_out_opt IEnumStreamBufferRecordingAttrib **ppIEnumStreamBufferAttrib);
        
        END_INTERFACE
    } IStreamBufferRecordingAttributeVtbl;

    interface IStreamBufferRecordingAttribute
    {
        CONST_VTBL struct IStreamBufferRecordingAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferRecordingAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferRecordingAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferRecordingAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferRecordingAttribute_SetAttribute(This,ulReserved,pszAttributeName,StreamBufferAttributeType,pbAttribute,cbAttributeLength)	\
    ( (This)->lpVtbl -> SetAttribute(This,ulReserved,pszAttributeName,StreamBufferAttributeType,pbAttribute,cbAttributeLength) ) 

#define IStreamBufferRecordingAttribute_GetAttributeCount(This,ulReserved,pcAttributes)	\
    ( (This)->lpVtbl -> GetAttributeCount(This,ulReserved,pcAttributes) ) 

#define IStreamBufferRecordingAttribute_GetAttributeByName(This,pszAttributeName,pulReserved,pStreamBufferAttributeType,pbAttribute,pcbLength)	\
    ( (This)->lpVtbl -> GetAttributeByName(This,pszAttributeName,pulReserved,pStreamBufferAttributeType,pbAttribute,pcbLength) ) 

#define IStreamBufferRecordingAttribute_GetAttributeByIndex(This,wIndex,pulReserved,pszAttributeName,pcchNameLength,pStreamBufferAttributeType,pbAttribute,pcbLength)	\
    ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pulReserved,pszAttributeName,pcchNameLength,pStreamBufferAttributeType,pbAttribute,pcbLength) ) 

#define IStreamBufferRecordingAttribute_EnumAttributes(This,ppIEnumStreamBufferAttrib)	\
    ( (This)->lpVtbl -> EnumAttributes(This,ppIEnumStreamBufferAttrib) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferRecordingAttribute_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sbe_0000_0008 */
/* [local] */ 

typedef /* [public][public] */ struct __MIDL___MIDL_itf_sbe_0000_0008_0001
    {
    LPWSTR pszName;
    STREAMBUFFER_ATTR_DATATYPE StreamBufferAttributeType;
    BYTE *pbAttribute;
    WORD cbLength;
    } 	STREAMBUFFER_ATTRIBUTE;



extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0008_v0_0_s_ifspec;

#ifndef __IEnumStreamBufferRecordingAttrib_INTERFACE_DEFINED__
#define __IEnumStreamBufferRecordingAttrib_INTERFACE_DEFINED__

/* interface IEnumStreamBufferRecordingAttrib */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumStreamBufferRecordingAttrib;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C18A9162-1E82-4142-8C73-5690FA62FE33")
    IEnumStreamBufferRecordingAttrib : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cRequest,
            /* [size_is][out][in] */ __RPC__inout_ecount_full(cRequest) STREAMBUFFER_ATTRIBUTE *pStreamBufferAttribute,
            /* [out] */ __RPC__out ULONG *pcReceived) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cRecords) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumStreamBufferRecordingAttrib **ppIEnumStreamBufferAttrib) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumStreamBufferRecordingAttribVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumStreamBufferRecordingAttrib * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumStreamBufferRecordingAttrib * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumStreamBufferRecordingAttrib * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumStreamBufferRecordingAttrib * This,
            /* [in] */ ULONG cRequest,
            /* [size_is][out][in] */ __RPC__inout_ecount_full(cRequest) STREAMBUFFER_ATTRIBUTE *pStreamBufferAttribute,
            /* [out] */ __RPC__out ULONG *pcReceived);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumStreamBufferRecordingAttrib * This,
            /* [in] */ ULONG cRecords);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumStreamBufferRecordingAttrib * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumStreamBufferRecordingAttrib * This,
            /* [out] */ __RPC__deref_out_opt IEnumStreamBufferRecordingAttrib **ppIEnumStreamBufferAttrib);
        
        END_INTERFACE
    } IEnumStreamBufferRecordingAttribVtbl;

    interface IEnumStreamBufferRecordingAttrib
    {
        CONST_VTBL struct IEnumStreamBufferRecordingAttribVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumStreamBufferRecordingAttrib_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumStreamBufferRecordingAttrib_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumStreamBufferRecordingAttrib_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumStreamBufferRecordingAttrib_Next(This,cRequest,pStreamBufferAttribute,pcReceived)	\
    ( (This)->lpVtbl -> Next(This,cRequest,pStreamBufferAttribute,pcReceived) ) 

#define IEnumStreamBufferRecordingAttrib_Skip(This,cRecords)	\
    ( (This)->lpVtbl -> Skip(This,cRecords) ) 

#define IEnumStreamBufferRecordingAttrib_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumStreamBufferRecordingAttrib_Clone(This,ppIEnumStreamBufferAttrib)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumStreamBufferAttrib) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumStreamBufferRecordingAttrib_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferConfigure_INTERFACE_DEFINED__
#define __IStreamBufferConfigure_INTERFACE_DEFINED__

/* interface IStreamBufferConfigure */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferConfigure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ce14dfae-4098-4af7-bbf7-d6511f835414")
    IStreamBufferConfigure : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDirectory( 
            /* [in] */ __RPC__in LPCWSTR pszDirectoryName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDirectory( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *ppszDirectoryName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBackingFileCount( 
            /* [in] */ DWORD dwMin,
            /* [in] */ DWORD dwMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBackingFileCount( 
            /* [out] */ __RPC__out DWORD *pdwMin,
            /* [out] */ __RPC__out DWORD *pdwMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBackingFileDuration( 
            /* [in] */ DWORD dwSeconds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBackingFileDuration( 
            /* [out] */ __RPC__out DWORD *pdwSeconds) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferConfigureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferConfigure * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferConfigure * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferConfigure * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetDirectory )( 
            IStreamBufferConfigure * This,
            /* [in] */ __RPC__in LPCWSTR pszDirectoryName);
        
        HRESULT ( STDMETHODCALLTYPE *GetDirectory )( 
            IStreamBufferConfigure * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *ppszDirectoryName);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileCount )( 
            IStreamBufferConfigure * This,
            /* [in] */ DWORD dwMin,
            /* [in] */ DWORD dwMax);
        
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileCount )( 
            IStreamBufferConfigure * This,
            /* [out] */ __RPC__out DWORD *pdwMin,
            /* [out] */ __RPC__out DWORD *pdwMax);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileDuration )( 
            IStreamBufferConfigure * This,
            /* [in] */ DWORD dwSeconds);
        
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileDuration )( 
            IStreamBufferConfigure * This,
            /* [out] */ __RPC__out DWORD *pdwSeconds);
        
        END_INTERFACE
    } IStreamBufferConfigureVtbl;

    interface IStreamBufferConfigure
    {
        CONST_VTBL struct IStreamBufferConfigureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferConfigure_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferConfigure_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferConfigure_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferConfigure_SetDirectory(This,pszDirectoryName)	\
    ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) ) 

#define IStreamBufferConfigure_GetDirectory(This,ppszDirectoryName)	\
    ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) ) 

#define IStreamBufferConfigure_SetBackingFileCount(This,dwMin,dwMax)	\
    ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) ) 

#define IStreamBufferConfigure_GetBackingFileCount(This,pdwMin,pdwMax)	\
    ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) ) 

#define IStreamBufferConfigure_SetBackingFileDuration(This,dwSeconds)	\
    ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) ) 

#define IStreamBufferConfigure_GetBackingFileDuration(This,pdwSeconds)	\
    ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferConfigure_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferConfigure2_INTERFACE_DEFINED__
#define __IStreamBufferConfigure2_INTERFACE_DEFINED__

/* interface IStreamBufferConfigure2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferConfigure2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53E037BF-3992-4282-AE34-2487B4DAE06B")
    IStreamBufferConfigure2 : public IStreamBufferConfigure
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetMultiplexedPacketSize( 
            /* [in] */ DWORD cbBytesPerPacket) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMultiplexedPacketSize( 
            /* [out] */ __RPC__out DWORD *pcbBytesPerPacket) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFFTransitionRates( 
            /* [in] */ DWORD dwMaxFullFrameRate,
            /* [in] */ DWORD dwMaxNonSkippingRate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFFTransitionRates( 
            /* [out] */ __RPC__out DWORD *pdwMaxFullFrameRate,
            /* [out] */ __RPC__out DWORD *pdwMaxNonSkippingRate) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferConfigure2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferConfigure2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferConfigure2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferConfigure2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetDirectory )( 
            IStreamBufferConfigure2 * This,
            /* [in] */ __RPC__in LPCWSTR pszDirectoryName);
        
        HRESULT ( STDMETHODCALLTYPE *GetDirectory )( 
            IStreamBufferConfigure2 * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *ppszDirectoryName);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileCount )( 
            IStreamBufferConfigure2 * This,
            /* [in] */ DWORD dwMin,
            /* [in] */ DWORD dwMax);
        
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileCount )( 
            IStreamBufferConfigure2 * This,
            /* [out] */ __RPC__out DWORD *pdwMin,
            /* [out] */ __RPC__out DWORD *pdwMax);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileDuration )( 
            IStreamBufferConfigure2 * This,
            /* [in] */ DWORD dwSeconds);
        
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileDuration )( 
            IStreamBufferConfigure2 * This,
            /* [out] */ __RPC__out DWORD *pdwSeconds);
        
        HRESULT ( STDMETHODCALLTYPE *SetMultiplexedPacketSize )( 
            IStreamBufferConfigure2 * This,
            /* [in] */ DWORD cbBytesPerPacket);
        
        HRESULT ( STDMETHODCALLTYPE *GetMultiplexedPacketSize )( 
            IStreamBufferConfigure2 * This,
            /* [out] */ __RPC__out DWORD *pcbBytesPerPacket);
        
        HRESULT ( STDMETHODCALLTYPE *SetFFTransitionRates )( 
            IStreamBufferConfigure2 * This,
            /* [in] */ DWORD dwMaxFullFrameRate,
            /* [in] */ DWORD dwMaxNonSkippingRate);
        
        HRESULT ( STDMETHODCALLTYPE *GetFFTransitionRates )( 
            IStreamBufferConfigure2 * This,
            /* [out] */ __RPC__out DWORD *pdwMaxFullFrameRate,
            /* [out] */ __RPC__out DWORD *pdwMaxNonSkippingRate);
        
        END_INTERFACE
    } IStreamBufferConfigure2Vtbl;

    interface IStreamBufferConfigure2
    {
        CONST_VTBL struct IStreamBufferConfigure2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferConfigure2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferConfigure2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferConfigure2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferConfigure2_SetDirectory(This,pszDirectoryName)	\
    ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) ) 

#define IStreamBufferConfigure2_GetDirectory(This,ppszDirectoryName)	\
    ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) ) 

#define IStreamBufferConfigure2_SetBackingFileCount(This,dwMin,dwMax)	\
    ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) ) 

#define IStreamBufferConfigure2_GetBackingFileCount(This,pdwMin,pdwMax)	\
    ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) ) 

#define IStreamBufferConfigure2_SetBackingFileDuration(This,dwSeconds)	\
    ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) ) 

#define IStreamBufferConfigure2_GetBackingFileDuration(This,pdwSeconds)	\
    ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) ) 


#define IStreamBufferConfigure2_SetMultiplexedPacketSize(This,cbBytesPerPacket)	\
    ( (This)->lpVtbl -> SetMultiplexedPacketSize(This,cbBytesPerPacket) ) 

#define IStreamBufferConfigure2_GetMultiplexedPacketSize(This,pcbBytesPerPacket)	\
    ( (This)->lpVtbl -> GetMultiplexedPacketSize(This,pcbBytesPerPacket) ) 

#define IStreamBufferConfigure2_SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate)	\
    ( (This)->lpVtbl -> SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate) ) 

#define IStreamBufferConfigure2_GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate)	\
    ( (This)->lpVtbl -> GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferConfigure2_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferConfigure3_INTERFACE_DEFINED__
#define __IStreamBufferConfigure3_INTERFACE_DEFINED__

/* interface IStreamBufferConfigure3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferConfigure3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E2D2A1E-7192-4bd7-80C1-061FD1D10402")
    IStreamBufferConfigure3 : public IStreamBufferConfigure2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetStartRecConfig( 
            /* [in] */ BOOL fStartStopsCur) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStartRecConfig( 
            /* [out] */ __RPC__out BOOL *pfStartStopsCur) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNamespace( 
            /* [in] */ __RPC__in LPWSTR pszNamespace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNamespace( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *ppszNamespace) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferConfigure3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferConfigure3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferConfigure3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferConfigure3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetDirectory )( 
            IStreamBufferConfigure3 * This,
            /* [in] */ __RPC__in LPCWSTR pszDirectoryName);
        
        HRESULT ( STDMETHODCALLTYPE *GetDirectory )( 
            IStreamBufferConfigure3 * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *ppszDirectoryName);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileCount )( 
            IStreamBufferConfigure3 * This,
            /* [in] */ DWORD dwMin,
            /* [in] */ DWORD dwMax);
        
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileCount )( 
            IStreamBufferConfigure3 * This,
            /* [out] */ __RPC__out DWORD *pdwMin,
            /* [out] */ __RPC__out DWORD *pdwMax);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileDuration )( 
            IStreamBufferConfigure3 * This,
            /* [in] */ DWORD dwSeconds);
        
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileDuration )( 
            IStreamBufferConfigure3 * This,
            /* [out] */ __RPC__out DWORD *pdwSeconds);
        
        HRESULT ( STDMETHODCALLTYPE *SetMultiplexedPacketSize )( 
            IStreamBufferConfigure3 * This,
            /* [in] */ DWORD cbBytesPerPacket);
        
        HRESULT ( STDMETHODCALLTYPE *GetMultiplexedPacketSize )( 
            IStreamBufferConfigure3 * This,
            /* [out] */ __RPC__out DWORD *pcbBytesPerPacket);
        
        HRESULT ( STDMETHODCALLTYPE *SetFFTransitionRates )( 
            IStreamBufferConfigure3 * This,
            /* [in] */ DWORD dwMaxFullFrameRate,
            /* [in] */ DWORD dwMaxNonSkippingRate);
        
        HRESULT ( STDMETHODCALLTYPE *GetFFTransitionRates )( 
            IStreamBufferConfigure3 * This,
            /* [out] */ __RPC__out DWORD *pdwMaxFullFrameRate,
            /* [out] */ __RPC__out DWORD *pdwMaxNonSkippingRate);
        
        HRESULT ( STDMETHODCALLTYPE *SetStartRecConfig )( 
            IStreamBufferConfigure3 * This,
            /* [in] */ BOOL fStartStopsCur);
        
        HRESULT ( STDMETHODCALLTYPE *GetStartRecConfig )( 
            IStreamBufferConfigure3 * This,
            /* [out] */ __RPC__out BOOL *pfStartStopsCur);
        
        HRESULT ( STDMETHODCALLTYPE *SetNamespace )( 
            IStreamBufferConfigure3 * This,
            /* [in] */ __RPC__in LPWSTR pszNamespace);
        
        HRESULT ( STDMETHODCALLTYPE *GetNamespace )( 
            IStreamBufferConfigure3 * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *ppszNamespace);
        
        END_INTERFACE
    } IStreamBufferConfigure3Vtbl;

    interface IStreamBufferConfigure3
    {
        CONST_VTBL struct IStreamBufferConfigure3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferConfigure3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferConfigure3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferConfigure3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferConfigure3_SetDirectory(This,pszDirectoryName)	\
    ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) ) 

#define IStreamBufferConfigure3_GetDirectory(This,ppszDirectoryName)	\
    ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) ) 

#define IStreamBufferConfigure3_SetBackingFileCount(This,dwMin,dwMax)	\
    ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) ) 

#define IStreamBufferConfigure3_GetBackingFileCount(This,pdwMin,pdwMax)	\
    ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) ) 

#define IStreamBufferConfigure3_SetBackingFileDuration(This,dwSeconds)	\
    ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) ) 

#define IStreamBufferConfigure3_GetBackingFileDuration(This,pdwSeconds)	\
    ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) ) 


#define IStreamBufferConfigure3_SetMultiplexedPacketSize(This,cbBytesPerPacket)	\
    ( (This)->lpVtbl -> SetMultiplexedPacketSize(This,cbBytesPerPacket) ) 

#define IStreamBufferConfigure3_GetMultiplexedPacketSize(This,pcbBytesPerPacket)	\
    ( (This)->lpVtbl -> GetMultiplexedPacketSize(This,pcbBytesPerPacket) ) 

#define IStreamBufferConfigure3_SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate)	\
    ( (This)->lpVtbl -> SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate) ) 

#define IStreamBufferConfigure3_GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate)	\
    ( (This)->lpVtbl -> GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate) ) 


#define IStreamBufferConfigure3_SetStartRecConfig(This,fStartStopsCur)	\
    ( (This)->lpVtbl -> SetStartRecConfig(This,fStartStopsCur) ) 

#define IStreamBufferConfigure3_GetStartRecConfig(This,pfStartStopsCur)	\
    ( (This)->lpVtbl -> GetStartRecConfig(This,pfStartStopsCur) ) 

#define IStreamBufferConfigure3_SetNamespace(This,pszNamespace)	\
    ( (This)->lpVtbl -> SetNamespace(This,pszNamespace) ) 

#define IStreamBufferConfigure3_GetNamespace(This,ppszNamespace)	\
    ( (This)->lpVtbl -> GetNamespace(This,ppszNamespace) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferConfigure3_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferMediaSeeking_INTERFACE_DEFINED__
#define __IStreamBufferMediaSeeking_INTERFACE_DEFINED__

/* interface IStreamBufferMediaSeeking */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferMediaSeeking;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f61f5c26-863d-4afa-b0ba-2f81dc978596")
    IStreamBufferMediaSeeking : public IMediaSeeking
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferMediaSeekingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferMediaSeeking * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferMediaSeeking * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferMediaSeeking * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  DWORD *pCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *CheckCapabilities )( 
            IStreamBufferMediaSeeking * This,
            /* [out][in] */ __RPC__inout DWORD *pCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )( 
            IStreamBufferMediaSeeking * This,
            /* [in] */ __RPC__in const GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *QueryPreferredFormat )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimeFormat )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *IsUsingTimeFormat )( 
            IStreamBufferMediaSeeking * This,
            /* [in] */ __RPC__in const GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *SetTimeFormat )( 
            IStreamBufferMediaSeeking * This,
            /* [in] */ __RPC__in const GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetDuration )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  LONGLONG *pDuration);
        
        HRESULT ( STDMETHODCALLTYPE *GetStopPosition )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  LONGLONG *pStop);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPosition )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  LONGLONG *pCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *ConvertTimeFormat )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  LONGLONG *pTarget,
            /* [in] */ 
            __in_opt  const GUID *pTargetFormat,
            /* [in] */ LONGLONG Source,
            /* [in] */ 
            __in_opt  const GUID *pSourceFormat);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositions )( 
            IStreamBufferMediaSeeking * This,
            /* [out][in] */ 
            __inout_opt  LONGLONG *pCurrent,
            /* [in] */ DWORD dwCurrentFlags,
            /* [out][in] */ 
            __inout_opt  LONGLONG *pStop,
            /* [in] */ DWORD dwStopFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositions )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out_opt  LONGLONG *pCurrent,
            /* [out] */ 
            __out_opt  LONGLONG *pStop);
        
        HRESULT ( STDMETHODCALLTYPE *GetAvailable )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out_opt  LONGLONG *pEarliest,
            /* [out] */ 
            __out_opt  LONGLONG *pLatest);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IStreamBufferMediaSeeking * This,
            /* [in] */ double dRate);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  double *pdRate);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreroll )( 
            IStreamBufferMediaSeeking * This,
            /* [out] */ 
            __out  LONGLONG *pllPreroll);
        
        END_INTERFACE
    } IStreamBufferMediaSeekingVtbl;

    interface IStreamBufferMediaSeeking
    {
        CONST_VTBL struct IStreamBufferMediaSeekingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferMediaSeeking_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferMediaSeeking_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferMediaSeeking_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferMediaSeeking_GetCapabilities(This,pCapabilities)	\
    ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) ) 

#define IStreamBufferMediaSeeking_CheckCapabilities(This,pCapabilities)	\
    ( (This)->lpVtbl -> CheckCapabilities(This,pCapabilities) ) 

#define IStreamBufferMediaSeeking_IsFormatSupported(This,pFormat)	\
    ( (This)->lpVtbl -> IsFormatSupported(This,pFormat) ) 

#define IStreamBufferMediaSeeking_QueryPreferredFormat(This,pFormat)	\
    ( (This)->lpVtbl -> QueryPreferredFormat(This,pFormat) ) 

#define IStreamBufferMediaSeeking_GetTimeFormat(This,pFormat)	\
    ( (This)->lpVtbl -> GetTimeFormat(This,pFormat) ) 

#define IStreamBufferMediaSeeking_IsUsingTimeFormat(This,pFormat)	\
    ( (This)->lpVtbl -> IsUsingTimeFormat(This,pFormat) ) 

#define IStreamBufferMediaSeeking_SetTimeFormat(This,pFormat)	\
    ( (This)->lpVtbl -> SetTimeFormat(This,pFormat) ) 

#define IStreamBufferMediaSeeking_GetDuration(This,pDuration)	\
    ( (This)->lpVtbl -> GetDuration(This,pDuration) ) 

#define IStreamBufferMediaSeeking_GetStopPosition(This,pStop)	\
    ( (This)->lpVtbl -> GetStopPosition(This,pStop) ) 

#define IStreamBufferMediaSeeking_GetCurrentPosition(This,pCurrent)	\
    ( (This)->lpVtbl -> GetCurrentPosition(This,pCurrent) ) 

#define IStreamBufferMediaSeeking_ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat)	\
    ( (This)->lpVtbl -> ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) ) 

#define IStreamBufferMediaSeeking_SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags)	\
    ( (This)->lpVtbl -> SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) ) 

#define IStreamBufferMediaSeeking_GetPositions(This,pCurrent,pStop)	\
    ( (This)->lpVtbl -> GetPositions(This,pCurrent,pStop) ) 

#define IStreamBufferMediaSeeking_GetAvailable(This,pEarliest,pLatest)	\
    ( (This)->lpVtbl -> GetAvailable(This,pEarliest,pLatest) ) 

#define IStreamBufferMediaSeeking_SetRate(This,dRate)	\
    ( (This)->lpVtbl -> SetRate(This,dRate) ) 

#define IStreamBufferMediaSeeking_GetRate(This,pdRate)	\
    ( (This)->lpVtbl -> GetRate(This,pdRate) ) 

#define IStreamBufferMediaSeeking_GetPreroll(This,pllPreroll)	\
    ( (This)->lpVtbl -> GetPreroll(This,pllPreroll) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferMediaSeeking_INTERFACE_DEFINED__ */


#ifndef __IStreamBufferMediaSeeking2_INTERFACE_DEFINED__
#define __IStreamBufferMediaSeeking2_INTERFACE_DEFINED__

/* interface IStreamBufferMediaSeeking2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferMediaSeeking2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3a439ab0-155f-470a-86a6-9ea54afd6eaf")
    IStreamBufferMediaSeeking2 : public IStreamBufferMediaSeeking
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetRateEx( 
            /* [in] */ double dRate,
            /* [in] */ DWORD dwFramesPerSec) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferMediaSeeking2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferMediaSeeking2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferMediaSeeking2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferMediaSeeking2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  DWORD *pCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *CheckCapabilities )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out][in] */ __RPC__inout DWORD *pCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )( 
            IStreamBufferMediaSeeking2 * This,
            /* [in] */ __RPC__in const GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *QueryPreferredFormat )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimeFormat )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *IsUsingTimeFormat )( 
            IStreamBufferMediaSeeking2 * This,
            /* [in] */ __RPC__in const GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *SetTimeFormat )( 
            IStreamBufferMediaSeeking2 * This,
            /* [in] */ __RPC__in const GUID *pFormat);
        
        HRESULT ( STDMETHODCALLTYPE *GetDuration )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  LONGLONG *pDuration);
        
        HRESULT ( STDMETHODCALLTYPE *GetStopPosition )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  LONGLONG *pStop);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPosition )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  LONGLONG *pCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *ConvertTimeFormat )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  LONGLONG *pTarget,
            /* [in] */ 
            __in_opt  const GUID *pTargetFormat,
            /* [in] */ LONGLONG Source,
            /* [in] */ 
            __in_opt  const GUID *pSourceFormat);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositions )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out][in] */ 
            __inout_opt  LONGLONG *pCurrent,
            /* [in] */ DWORD dwCurrentFlags,
            /* [out][in] */ 
            __inout_opt  LONGLONG *pStop,
            /* [in] */ DWORD dwStopFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositions )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out_opt  LONGLONG *pCurrent,
            /* [out] */ 
            __out_opt  LONGLONG *pStop);
        
        HRESULT ( STDMETHODCALLTYPE *GetAvailable )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out_opt  LONGLONG *pEarliest,
            /* [out] */ 
            __out_opt  LONGLONG *pLatest);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IStreamBufferMediaSeeking2 * This,
            /* [in] */ double dRate);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  double *pdRate);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreroll )( 
            IStreamBufferMediaSeeking2 * This,
            /* [out] */ 
            __out  LONGLONG *pllPreroll);
        
        HRESULT ( STDMETHODCALLTYPE *SetRateEx )( 
            IStreamBufferMediaSeeking2 * This,
            /* [in] */ double dRate,
            /* [in] */ DWORD dwFramesPerSec);
        
        END_INTERFACE
    } IStreamBufferMediaSeeking2Vtbl;

    interface IStreamBufferMediaSeeking2
    {
        CONST_VTBL struct IStreamBufferMediaSeeking2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferMediaSeeking2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferMediaSeeking2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferMediaSeeking2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferMediaSeeking2_GetCapabilities(This,pCapabilities)	\
    ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) ) 

#define IStreamBufferMediaSeeking2_CheckCapabilities(This,pCapabilities)	\
    ( (This)->lpVtbl -> CheckCapabilities(This,pCapabilities) ) 

#define IStreamBufferMediaSeeking2_IsFormatSupported(This,pFormat)	\
    ( (This)->lpVtbl -> IsFormatSupported(This,pFormat) ) 

#define IStreamBufferMediaSeeking2_QueryPreferredFormat(This,pFormat)	\
    ( (This)->lpVtbl -> QueryPreferredFormat(This,pFormat) ) 

#define IStreamBufferMediaSeeking2_GetTimeFormat(This,pFormat)	\
    ( (This)->lpVtbl -> GetTimeFormat(This,pFormat) ) 

#define IStreamBufferMediaSeeking2_IsUsingTimeFormat(This,pFormat)	\
    ( (This)->lpVtbl -> IsUsingTimeFormat(This,pFormat) ) 

#define IStreamBufferMediaSeeking2_SetTimeFormat(This,pFormat)	\
    ( (This)->lpVtbl -> SetTimeFormat(This,pFormat) ) 

#define IStreamBufferMediaSeeking2_GetDuration(This,pDuration)	\
    ( (This)->lpVtbl -> GetDuration(This,pDuration) ) 

#define IStreamBufferMediaSeeking2_GetStopPosition(This,pStop)	\
    ( (This)->lpVtbl -> GetStopPosition(This,pStop) ) 

#define IStreamBufferMediaSeeking2_GetCurrentPosition(This,pCurrent)	\
    ( (This)->lpVtbl -> GetCurrentPosition(This,pCurrent) ) 

#define IStreamBufferMediaSeeking2_ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat)	\
    ( (This)->lpVtbl -> ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) ) 

#define IStreamBufferMediaSeeking2_SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags)	\
    ( (This)->lpVtbl -> SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) ) 

#define IStreamBufferMediaSeeking2_GetPositions(This,pCurrent,pStop)	\
    ( (This)->lpVtbl -> GetPositions(This,pCurrent,pStop) ) 

#define IStreamBufferMediaSeeking2_GetAvailable(This,pEarliest,pLatest)	\
    ( (This)->lpVtbl -> GetAvailable(This,pEarliest,pLatest) ) 

#define IStreamBufferMediaSeeking2_SetRate(This,dRate)	\
    ( (This)->lpVtbl -> SetRate(This,dRate) ) 

#define IStreamBufferMediaSeeking2_GetRate(This,pdRate)	\
    ( (This)->lpVtbl -> GetRate(This,pdRate) ) 

#define IStreamBufferMediaSeeking2_GetPreroll(This,pllPreroll)	\
    ( (This)->lpVtbl -> GetPreroll(This,pllPreroll) ) 



#define IStreamBufferMediaSeeking2_SetRateEx(This,dRate,dwFramesPerSec)	\
    ( (This)->lpVtbl -> SetRateEx(This,dRate,dwFramesPerSec) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferMediaSeeking2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sbe_0000_0014 */
/* [local] */ 

typedef /* [public][public] */ struct __MIDL___MIDL_itf_sbe_0000_0014_0001
    {
    ULONGLONG cDataBytes;
    ULONGLONG cSamplesProcessed;
    ULONGLONG cDiscontinuities;
    ULONGLONG cSyncPoints;
    ULONGLONG cTimestamps;
    } 	SBE_PIN_DATA;



extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0014_v0_0_s_ifspec;

#ifndef __IStreamBufferDataCounters_INTERFACE_DEFINED__
#define __IStreamBufferDataCounters_INTERFACE_DEFINED__

/* interface IStreamBufferDataCounters */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamBufferDataCounters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9D2A2563-31AB-402e-9A6B-ADB903489440")
    IStreamBufferDataCounters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ __RPC__out SBE_PIN_DATA *pPinData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetData( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamBufferDataCountersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamBufferDataCounters * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamBufferDataCounters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamBufferDataCounters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            IStreamBufferDataCounters * This,
            /* [out] */ __RPC__out SBE_PIN_DATA *pPinData);
        
        HRESULT ( STDMETHODCALLTYPE *ResetData )( 
            IStreamBufferDataCounters * This);
        
        END_INTERFACE
    } IStreamBufferDataCountersVtbl;

    interface IStreamBufferDataCounters
    {
        CONST_VTBL struct IStreamBufferDataCountersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamBufferDataCounters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamBufferDataCounters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamBufferDataCounters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamBufferDataCounters_GetData(This,pPinData)	\
    ( (This)->lpVtbl -> GetData(This,pPinData) ) 

#define IStreamBufferDataCounters_ResetData(This)	\
    ( (This)->lpVtbl -> ResetData(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamBufferDataCounters_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_sbe_0000_0015 */
/* [local] */ 

#define STREAMBUFFER_EC_BASE                     0x0326
enum {
    //  timehole event
    //      param1 = timehole stream offset ms
    //      param1 = timehole size ms
    STREAMBUFFER_EC_TIMEHOLE = STREAMBUFFER_EC_BASE,
    
    STREAMBUFFER_EC_STALE_DATA_READ,
    
    STREAMBUFFER_EC_STALE_FILE_DELETED,
    STREAMBUFFER_EC_CONTENT_BECOMING_STALE,
    STREAMBUFFER_EC_WRITE_FAILURE,
    //
    //  unexpected read failure
    //      param1 = HRESULT failure
    //      param2 = undefined
    STREAMBUFFER_EC_READ_FAILURE,
    //
    //  playback rate change
    //      param1 = old_playback_rate * 10000 e.g. 2x is 20000
    //      param2 = new_playback_rate * 10000
    STREAMBUFFER_EC_RATE_CHANGED,
    //
    //  index frame insertion notification
    // 
    STREAMBUFFER_EC_PRIMARY_AUDIO,
} ;


extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0015_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



