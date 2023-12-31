

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for natupnp.idl:
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

#ifndef __natupnp_h__
#define __natupnp_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUPnPNAT_FWD_DEFINED__
#define __IUPnPNAT_FWD_DEFINED__
typedef interface IUPnPNAT IUPnPNAT;
#endif 	/* __IUPnPNAT_FWD_DEFINED__ */


#ifndef __INATEventManager_FWD_DEFINED__
#define __INATEventManager_FWD_DEFINED__
typedef interface INATEventManager INATEventManager;
#endif 	/* __INATEventManager_FWD_DEFINED__ */


#ifndef __INATExternalIPAddressCallback_FWD_DEFINED__
#define __INATExternalIPAddressCallback_FWD_DEFINED__
typedef interface INATExternalIPAddressCallback INATExternalIPAddressCallback;
#endif 	/* __INATExternalIPAddressCallback_FWD_DEFINED__ */


#ifndef __INATNumberOfEntriesCallback_FWD_DEFINED__
#define __INATNumberOfEntriesCallback_FWD_DEFINED__
typedef interface INATNumberOfEntriesCallback INATNumberOfEntriesCallback;
#endif 	/* __INATNumberOfEntriesCallback_FWD_DEFINED__ */


#ifndef __IDynamicPortMappingCollection_FWD_DEFINED__
#define __IDynamicPortMappingCollection_FWD_DEFINED__
typedef interface IDynamicPortMappingCollection IDynamicPortMappingCollection;
#endif 	/* __IDynamicPortMappingCollection_FWD_DEFINED__ */


#ifndef __IDynamicPortMapping_FWD_DEFINED__
#define __IDynamicPortMapping_FWD_DEFINED__
typedef interface IDynamicPortMapping IDynamicPortMapping;
#endif 	/* __IDynamicPortMapping_FWD_DEFINED__ */


#ifndef __IStaticPortMappingCollection_FWD_DEFINED__
#define __IStaticPortMappingCollection_FWD_DEFINED__
typedef interface IStaticPortMappingCollection IStaticPortMappingCollection;
#endif 	/* __IStaticPortMappingCollection_FWD_DEFINED__ */


#ifndef __IStaticPortMapping_FWD_DEFINED__
#define __IStaticPortMapping_FWD_DEFINED__
typedef interface IStaticPortMapping IStaticPortMapping;
#endif 	/* __IStaticPortMapping_FWD_DEFINED__ */


#ifndef __UPnPNAT_FWD_DEFINED__
#define __UPnPNAT_FWD_DEFINED__

#ifdef __cplusplus
typedef class UPnPNAT UPnPNAT;
#else
typedef struct UPnPNAT UPnPNAT;
#endif /* __cplusplus */

#endif 	/* __UPnPNAT_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_natupnp_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 1992-2001.
//
//--------------------------------------------------------------------------
//  MODULE: natupnp.h
//








extern RPC_IF_HANDLE __MIDL_itf_natupnp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_natupnp_0000_0000_v0_0_s_ifspec;

#ifndef __IUPnPNAT_INTERFACE_DEFINED__
#define __IUPnPNAT_INTERFACE_DEFINED__

/* interface IUPnPNAT */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IUPnPNAT;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B171C812-CC76-485A-94D8-B6B3A2794E99")
    IUPnPNAT : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StaticPortMappingCollection( 
            /* [retval][out] */ __RPC__deref_out_opt IStaticPortMappingCollection **ppSPMs) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DynamicPortMappingCollection( 
            /* [retval][out] */ __RPC__deref_out_opt IDynamicPortMappingCollection **ppDPMs) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NATEventManager( 
            /* [retval][out] */ __RPC__deref_out_opt INATEventManager **ppNEM) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUPnPNATVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUPnPNAT * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUPnPNAT * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUPnPNAT * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUPnPNAT * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUPnPNAT * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUPnPNAT * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUPnPNAT * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StaticPortMappingCollection )( 
            IUPnPNAT * This,
            /* [retval][out] */ __RPC__deref_out_opt IStaticPortMappingCollection **ppSPMs);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DynamicPortMappingCollection )( 
            IUPnPNAT * This,
            /* [retval][out] */ __RPC__deref_out_opt IDynamicPortMappingCollection **ppDPMs);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NATEventManager )( 
            IUPnPNAT * This,
            /* [retval][out] */ __RPC__deref_out_opt INATEventManager **ppNEM);
        
        END_INTERFACE
    } IUPnPNATVtbl;

    interface IUPnPNAT
    {
        CONST_VTBL struct IUPnPNATVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUPnPNAT_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUPnPNAT_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUPnPNAT_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUPnPNAT_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUPnPNAT_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUPnPNAT_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUPnPNAT_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUPnPNAT_get_StaticPortMappingCollection(This,ppSPMs)	\
    ( (This)->lpVtbl -> get_StaticPortMappingCollection(This,ppSPMs) ) 

#define IUPnPNAT_get_DynamicPortMappingCollection(This,ppDPMs)	\
    ( (This)->lpVtbl -> get_DynamicPortMappingCollection(This,ppDPMs) ) 

#define IUPnPNAT_get_NATEventManager(This,ppNEM)	\
    ( (This)->lpVtbl -> get_NATEventManager(This,ppNEM) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUPnPNAT_INTERFACE_DEFINED__ */


#ifndef __INATEventManager_INTERFACE_DEFINED__
#define __INATEventManager_INTERFACE_DEFINED__

/* interface INATEventManager */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_INATEventManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("624BD588-9060-4109-B0B0-1ADBBCAC32DF")
    INATEventManager : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ExternalIPAddressCallback( 
            /* [in] */ __RPC__in_opt IUnknown *pUnk) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_NumberOfEntriesCallback( 
            /* [in] */ __RPC__in_opt IUnknown *pUnk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INATEventManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INATEventManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INATEventManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INATEventManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INATEventManager * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INATEventManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INATEventManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INATEventManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalIPAddressCallback )( 
            INATEventManager * This,
            /* [in] */ __RPC__in_opt IUnknown *pUnk);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NumberOfEntriesCallback )( 
            INATEventManager * This,
            /* [in] */ __RPC__in_opt IUnknown *pUnk);
        
        END_INTERFACE
    } INATEventManagerVtbl;

    interface INATEventManager
    {
        CONST_VTBL struct INATEventManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INATEventManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INATEventManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INATEventManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INATEventManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INATEventManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INATEventManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INATEventManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INATEventManager_put_ExternalIPAddressCallback(This,pUnk)	\
    ( (This)->lpVtbl -> put_ExternalIPAddressCallback(This,pUnk) ) 

#define INATEventManager_put_NumberOfEntriesCallback(This,pUnk)	\
    ( (This)->lpVtbl -> put_NumberOfEntriesCallback(This,pUnk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INATEventManager_INTERFACE_DEFINED__ */


#ifndef __INATExternalIPAddressCallback_INTERFACE_DEFINED__
#define __INATExternalIPAddressCallback_INTERFACE_DEFINED__

/* interface INATExternalIPAddressCallback */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_INATExternalIPAddressCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9C416740-A34E-446F-BA06-ABD04C3149AE")
    INATExternalIPAddressCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewExternalIPAddress( 
            /* [in] */ __RPC__in BSTR bstrNewExternalIPAddress) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INATExternalIPAddressCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INATExternalIPAddressCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INATExternalIPAddressCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INATExternalIPAddressCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewExternalIPAddress )( 
            INATExternalIPAddressCallback * This,
            /* [in] */ __RPC__in BSTR bstrNewExternalIPAddress);
        
        END_INTERFACE
    } INATExternalIPAddressCallbackVtbl;

    interface INATExternalIPAddressCallback
    {
        CONST_VTBL struct INATExternalIPAddressCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INATExternalIPAddressCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INATExternalIPAddressCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INATExternalIPAddressCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INATExternalIPAddressCallback_NewExternalIPAddress(This,bstrNewExternalIPAddress)	\
    ( (This)->lpVtbl -> NewExternalIPAddress(This,bstrNewExternalIPAddress) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INATExternalIPAddressCallback_INTERFACE_DEFINED__ */


#ifndef __INATNumberOfEntriesCallback_INTERFACE_DEFINED__
#define __INATNumberOfEntriesCallback_INTERFACE_DEFINED__

/* interface INATNumberOfEntriesCallback */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_INATNumberOfEntriesCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C83A0A74-91EE-41B6-B67A-67E0F00BBD78")
    INATNumberOfEntriesCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NewNumberOfEntries( 
            /* [in] */ long lNewNumberOfEntries) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INATNumberOfEntriesCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INATNumberOfEntriesCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INATNumberOfEntriesCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INATNumberOfEntriesCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NewNumberOfEntries )( 
            INATNumberOfEntriesCallback * This,
            /* [in] */ long lNewNumberOfEntries);
        
        END_INTERFACE
    } INATNumberOfEntriesCallbackVtbl;

    interface INATNumberOfEntriesCallback
    {
        CONST_VTBL struct INATNumberOfEntriesCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INATNumberOfEntriesCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INATNumberOfEntriesCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INATNumberOfEntriesCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INATNumberOfEntriesCallback_NewNumberOfEntries(This,lNewNumberOfEntries)	\
    ( (This)->lpVtbl -> NewNumberOfEntries(This,lNewNumberOfEntries) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INATNumberOfEntriesCallback_INTERFACE_DEFINED__ */


#ifndef __IDynamicPortMappingCollection_INTERFACE_DEFINED__
#define __IDynamicPortMappingCollection_INTERFACE_DEFINED__

/* interface IDynamicPortMappingCollection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDynamicPortMappingCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B60DE00F-156E-4E8D-9EC1-3A2342C10899")
    IDynamicPortMappingCollection : public IDispatch
    {
    public:
        virtual /* [restricted][hidden][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ __RPC__in BSTR bstrRemoteHost,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol,
            /* [retval][out] */ __RPC__deref_out_opt IDynamicPortMapping **ppDPM) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ __RPC__in BSTR bstrRemoteHost,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in BSTR bstrRemoteHost,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol,
            /* [in] */ long lInternalPort,
            /* [in] */ __RPC__in BSTR bstrInternalClient,
            /* [in] */ VARIANT_BOOL bEnabled,
            /* [in] */ __RPC__in BSTR bstrDescription,
            /* [in] */ long lLeaseDuration,
            /* [retval][out] */ __RPC__deref_out_opt IDynamicPortMapping **ppDPM) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDynamicPortMappingCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDynamicPortMappingCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDynamicPortMappingCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDynamicPortMappingCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDynamicPortMappingCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDynamicPortMappingCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDynamicPortMappingCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDynamicPortMappingCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [restricted][hidden][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDynamicPortMappingCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDynamicPortMappingCollection * This,
            /* [in] */ __RPC__in BSTR bstrRemoteHost,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol,
            /* [retval][out] */ __RPC__deref_out_opt IDynamicPortMapping **ppDPM);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDynamicPortMappingCollection * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDynamicPortMappingCollection * This,
            /* [in] */ __RPC__in BSTR bstrRemoteHost,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IDynamicPortMappingCollection * This,
            /* [in] */ __RPC__in BSTR bstrRemoteHost,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol,
            /* [in] */ long lInternalPort,
            /* [in] */ __RPC__in BSTR bstrInternalClient,
            /* [in] */ VARIANT_BOOL bEnabled,
            /* [in] */ __RPC__in BSTR bstrDescription,
            /* [in] */ long lLeaseDuration,
            /* [retval][out] */ __RPC__deref_out_opt IDynamicPortMapping **ppDPM);
        
        END_INTERFACE
    } IDynamicPortMappingCollectionVtbl;

    interface IDynamicPortMappingCollection
    {
        CONST_VTBL struct IDynamicPortMappingCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDynamicPortMappingCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDynamicPortMappingCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDynamicPortMappingCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDynamicPortMappingCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDynamicPortMappingCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDynamicPortMappingCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDynamicPortMappingCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDynamicPortMappingCollection_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IDynamicPortMappingCollection_get_Item(This,bstrRemoteHost,lExternalPort,bstrProtocol,ppDPM)	\
    ( (This)->lpVtbl -> get_Item(This,bstrRemoteHost,lExternalPort,bstrProtocol,ppDPM) ) 

#define IDynamicPortMappingCollection_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IDynamicPortMappingCollection_Remove(This,bstrRemoteHost,lExternalPort,bstrProtocol)	\
    ( (This)->lpVtbl -> Remove(This,bstrRemoteHost,lExternalPort,bstrProtocol) ) 

#define IDynamicPortMappingCollection_Add(This,bstrRemoteHost,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,lLeaseDuration,ppDPM)	\
    ( (This)->lpVtbl -> Add(This,bstrRemoteHost,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,lLeaseDuration,ppDPM) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDynamicPortMappingCollection_INTERFACE_DEFINED__ */


#ifndef __IDynamicPortMapping_INTERFACE_DEFINED__
#define __IDynamicPortMapping_INTERFACE_DEFINED__

/* interface IDynamicPortMapping */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDynamicPortMapping;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4FC80282-23B6-4378-9A27-CD8F17C9400C")
    IDynamicPortMapping : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalIPAddress( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RemoteHost( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalPort( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Protocol( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InternalPort( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InternalClient( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LeaseDuration( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RenewLease( 
            /* [in] */ long lLeaseDurationDesired,
            /* [retval][out] */ __RPC__out long *pLeaseDurationReturned) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditInternalClient( 
            /* [in] */ __RPC__in BSTR bstrInternalClient) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Enable( 
            /* [in] */ VARIANT_BOOL vb) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditDescription( 
            /* [in] */ __RPC__in BSTR bstrDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditInternalPort( 
            /* [in] */ long lInternalPort) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDynamicPortMappingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDynamicPortMapping * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDynamicPortMapping * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDynamicPortMapping * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDynamicPortMapping * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDynamicPortMapping * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDynamicPortMapping * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDynamicPortMapping * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalIPAddress )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteHost )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalPort )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Protocol )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalPort )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalClient )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LeaseDuration )( 
            IDynamicPortMapping * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RenewLease )( 
            IDynamicPortMapping * This,
            /* [in] */ long lLeaseDurationDesired,
            /* [retval][out] */ __RPC__out long *pLeaseDurationReturned);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EditInternalClient )( 
            IDynamicPortMapping * This,
            /* [in] */ __RPC__in BSTR bstrInternalClient);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IDynamicPortMapping * This,
            /* [in] */ VARIANT_BOOL vb);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EditDescription )( 
            IDynamicPortMapping * This,
            /* [in] */ __RPC__in BSTR bstrDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EditInternalPort )( 
            IDynamicPortMapping * This,
            /* [in] */ long lInternalPort);
        
        END_INTERFACE
    } IDynamicPortMappingVtbl;

    interface IDynamicPortMapping
    {
        CONST_VTBL struct IDynamicPortMappingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDynamicPortMapping_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDynamicPortMapping_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDynamicPortMapping_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDynamicPortMapping_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDynamicPortMapping_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDynamicPortMapping_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDynamicPortMapping_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDynamicPortMapping_get_ExternalIPAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalIPAddress(This,pVal) ) 

#define IDynamicPortMapping_get_RemoteHost(This,pVal)	\
    ( (This)->lpVtbl -> get_RemoteHost(This,pVal) ) 

#define IDynamicPortMapping_get_ExternalPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalPort(This,pVal) ) 

#define IDynamicPortMapping_get_Protocol(This,pVal)	\
    ( (This)->lpVtbl -> get_Protocol(This,pVal) ) 

#define IDynamicPortMapping_get_InternalPort(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalPort(This,pVal) ) 

#define IDynamicPortMapping_get_InternalClient(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalClient(This,pVal) ) 

#define IDynamicPortMapping_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IDynamicPortMapping_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IDynamicPortMapping_get_LeaseDuration(This,pVal)	\
    ( (This)->lpVtbl -> get_LeaseDuration(This,pVal) ) 

#define IDynamicPortMapping_RenewLease(This,lLeaseDurationDesired,pLeaseDurationReturned)	\
    ( (This)->lpVtbl -> RenewLease(This,lLeaseDurationDesired,pLeaseDurationReturned) ) 

#define IDynamicPortMapping_EditInternalClient(This,bstrInternalClient)	\
    ( (This)->lpVtbl -> EditInternalClient(This,bstrInternalClient) ) 

#define IDynamicPortMapping_Enable(This,vb)	\
    ( (This)->lpVtbl -> Enable(This,vb) ) 

#define IDynamicPortMapping_EditDescription(This,bstrDescription)	\
    ( (This)->lpVtbl -> EditDescription(This,bstrDescription) ) 

#define IDynamicPortMapping_EditInternalPort(This,lInternalPort)	\
    ( (This)->lpVtbl -> EditInternalPort(This,lInternalPort) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDynamicPortMapping_INTERFACE_DEFINED__ */


#ifndef __IStaticPortMappingCollection_INTERFACE_DEFINED__
#define __IStaticPortMappingCollection_INTERFACE_DEFINED__

/* interface IStaticPortMappingCollection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStaticPortMappingCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CD1F3E77-66D6-4664-82C7-36DBB641D0F1")
    IStaticPortMappingCollection : public IDispatch
    {
    public:
        virtual /* [restricted][hidden][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol,
            /* [retval][out] */ __RPC__deref_out_opt IStaticPortMapping **ppSPM) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol,
            /* [in] */ long lInternalPort,
            /* [in] */ __RPC__in BSTR bstrInternalClient,
            /* [in] */ VARIANT_BOOL bEnabled,
            /* [in] */ __RPC__in BSTR bstrDescription,
            /* [retval][out] */ __RPC__deref_out_opt IStaticPortMapping **ppSPM) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStaticPortMappingCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStaticPortMappingCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStaticPortMappingCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStaticPortMappingCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStaticPortMappingCollection * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStaticPortMappingCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStaticPortMappingCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStaticPortMappingCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [restricted][hidden][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IStaticPortMappingCollection * This,
            /* [retval][out] */ __RPC__deref_out_opt IUnknown **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IStaticPortMappingCollection * This,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol,
            /* [retval][out] */ __RPC__deref_out_opt IStaticPortMapping **ppSPM);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IStaticPortMappingCollection * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IStaticPortMappingCollection * This,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IStaticPortMappingCollection * This,
            /* [in] */ long lExternalPort,
            /* [in] */ __RPC__in BSTR bstrProtocol,
            /* [in] */ long lInternalPort,
            /* [in] */ __RPC__in BSTR bstrInternalClient,
            /* [in] */ VARIANT_BOOL bEnabled,
            /* [in] */ __RPC__in BSTR bstrDescription,
            /* [retval][out] */ __RPC__deref_out_opt IStaticPortMapping **ppSPM);
        
        END_INTERFACE
    } IStaticPortMappingCollectionVtbl;

    interface IStaticPortMappingCollection
    {
        CONST_VTBL struct IStaticPortMappingCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStaticPortMappingCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStaticPortMappingCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStaticPortMappingCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStaticPortMappingCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStaticPortMappingCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStaticPortMappingCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStaticPortMappingCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStaticPortMappingCollection_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IStaticPortMappingCollection_get_Item(This,lExternalPort,bstrProtocol,ppSPM)	\
    ( (This)->lpVtbl -> get_Item(This,lExternalPort,bstrProtocol,ppSPM) ) 

#define IStaticPortMappingCollection_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IStaticPortMappingCollection_Remove(This,lExternalPort,bstrProtocol)	\
    ( (This)->lpVtbl -> Remove(This,lExternalPort,bstrProtocol) ) 

#define IStaticPortMappingCollection_Add(This,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,ppSPM)	\
    ( (This)->lpVtbl -> Add(This,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,ppSPM) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStaticPortMappingCollection_INTERFACE_DEFINED__ */


#ifndef __IStaticPortMapping_INTERFACE_DEFINED__
#define __IStaticPortMapping_INTERFACE_DEFINED__

/* interface IStaticPortMapping */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStaticPortMapping;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6F10711F-729B-41E5-93B8-F21D0F818DF1")
    IStaticPortMapping : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalIPAddress( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalPort( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InternalPort( 
            /* [retval][out] */ __RPC__out long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Protocol( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InternalClient( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditInternalClient( 
            /* [in] */ __RPC__in BSTR bstrInternalClient) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Enable( 
            /* [in] */ VARIANT_BOOL vb) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditDescription( 
            /* [in] */ __RPC__in BSTR bstrDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditInternalPort( 
            /* [in] */ long lInternalPort) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStaticPortMappingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStaticPortMapping * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStaticPortMapping * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStaticPortMapping * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStaticPortMapping * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStaticPortMapping * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStaticPortMapping * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStaticPortMapping * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalIPAddress )( 
            IStaticPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalPort )( 
            IStaticPortMapping * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalPort )( 
            IStaticPortMapping * This,
            /* [retval][out] */ __RPC__out long *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Protocol )( 
            IStaticPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalClient )( 
            IStaticPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IStaticPortMapping * This,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IStaticPortMapping * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EditInternalClient )( 
            IStaticPortMapping * This,
            /* [in] */ __RPC__in BSTR bstrInternalClient);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IStaticPortMapping * This,
            /* [in] */ VARIANT_BOOL vb);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EditDescription )( 
            IStaticPortMapping * This,
            /* [in] */ __RPC__in BSTR bstrDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EditInternalPort )( 
            IStaticPortMapping * This,
            /* [in] */ long lInternalPort);
        
        END_INTERFACE
    } IStaticPortMappingVtbl;

    interface IStaticPortMapping
    {
        CONST_VTBL struct IStaticPortMappingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStaticPortMapping_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStaticPortMapping_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStaticPortMapping_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStaticPortMapping_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStaticPortMapping_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStaticPortMapping_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStaticPortMapping_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStaticPortMapping_get_ExternalIPAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalIPAddress(This,pVal) ) 

#define IStaticPortMapping_get_ExternalPort(This,pVal)	\
    ( (This)->lpVtbl -> get_ExternalPort(This,pVal) ) 

#define IStaticPortMapping_get_InternalPort(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalPort(This,pVal) ) 

#define IStaticPortMapping_get_Protocol(This,pVal)	\
    ( (This)->lpVtbl -> get_Protocol(This,pVal) ) 

#define IStaticPortMapping_get_InternalClient(This,pVal)	\
    ( (This)->lpVtbl -> get_InternalClient(This,pVal) ) 

#define IStaticPortMapping_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IStaticPortMapping_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IStaticPortMapping_EditInternalClient(This,bstrInternalClient)	\
    ( (This)->lpVtbl -> EditInternalClient(This,bstrInternalClient) ) 

#define IStaticPortMapping_Enable(This,vb)	\
    ( (This)->lpVtbl -> Enable(This,vb) ) 

#define IStaticPortMapping_EditDescription(This,bstrDescription)	\
    ( (This)->lpVtbl -> EditDescription(This,bstrDescription) ) 

#define IStaticPortMapping_EditInternalPort(This,lInternalPort)	\
    ( (This)->lpVtbl -> EditInternalPort(This,lInternalPort) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStaticPortMapping_INTERFACE_DEFINED__ */



#ifndef __NATUPNPLib_LIBRARY_DEFINED__
#define __NATUPNPLib_LIBRARY_DEFINED__

/* library NATUPNPLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_NATUPNPLib;

EXTERN_C const CLSID CLSID_UPnPNAT;

#ifdef __cplusplus

class DECLSPEC_UUID("AE1E00AA-3FD5-403C-8A27-2BBDC30CD0E1")
UPnPNAT;
#endif
#endif /* __NATUPNPLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



