

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for shobjidl.idl:
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

#ifndef __shobjidl_h__
#define __shobjidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IContextMenu_FWD_DEFINED__
#define __IContextMenu_FWD_DEFINED__
typedef interface IContextMenu IContextMenu;
#endif 	/* __IContextMenu_FWD_DEFINED__ */


#ifndef __IContextMenu2_FWD_DEFINED__
#define __IContextMenu2_FWD_DEFINED__
typedef interface IContextMenu2 IContextMenu2;
#endif 	/* __IContextMenu2_FWD_DEFINED__ */


#ifndef __IContextMenu3_FWD_DEFINED__
#define __IContextMenu3_FWD_DEFINED__
typedef interface IContextMenu3 IContextMenu3;
#endif 	/* __IContextMenu3_FWD_DEFINED__ */


#ifndef __IPersistFolder_FWD_DEFINED__
#define __IPersistFolder_FWD_DEFINED__
typedef interface IPersistFolder IPersistFolder;
#endif 	/* __IPersistFolder_FWD_DEFINED__ */


#ifndef __IRunnableTask_FWD_DEFINED__
#define __IRunnableTask_FWD_DEFINED__
typedef interface IRunnableTask IRunnableTask;
#endif 	/* __IRunnableTask_FWD_DEFINED__ */


#ifndef __IShellTaskScheduler_FWD_DEFINED__
#define __IShellTaskScheduler_FWD_DEFINED__
typedef interface IShellTaskScheduler IShellTaskScheduler;
#endif 	/* __IShellTaskScheduler_FWD_DEFINED__ */


#ifndef __IPersistFolder2_FWD_DEFINED__
#define __IPersistFolder2_FWD_DEFINED__
typedef interface IPersistFolder2 IPersistFolder2;
#endif 	/* __IPersistFolder2_FWD_DEFINED__ */


#ifndef __IPersistFolder3_FWD_DEFINED__
#define __IPersistFolder3_FWD_DEFINED__
typedef interface IPersistFolder3 IPersistFolder3;
#endif 	/* __IPersistFolder3_FWD_DEFINED__ */


#ifndef __IPersistIDList_FWD_DEFINED__
#define __IPersistIDList_FWD_DEFINED__
typedef interface IPersistIDList IPersistIDList;
#endif 	/* __IPersistIDList_FWD_DEFINED__ */


#ifndef __IEnumIDList_FWD_DEFINED__
#define __IEnumIDList_FWD_DEFINED__
typedef interface IEnumIDList IEnumIDList;
#endif 	/* __IEnumIDList_FWD_DEFINED__ */


#ifndef __IEnumFullIDList_FWD_DEFINED__
#define __IEnumFullIDList_FWD_DEFINED__
typedef interface IEnumFullIDList IEnumFullIDList;
#endif 	/* __IEnumFullIDList_FWD_DEFINED__ */


#ifndef __IShellFolder_FWD_DEFINED__
#define __IShellFolder_FWD_DEFINED__
typedef interface IShellFolder IShellFolder;
#endif 	/* __IShellFolder_FWD_DEFINED__ */


#ifndef __IEnumExtraSearch_FWD_DEFINED__
#define __IEnumExtraSearch_FWD_DEFINED__
typedef interface IEnumExtraSearch IEnumExtraSearch;
#endif 	/* __IEnumExtraSearch_FWD_DEFINED__ */


#ifndef __IShellFolder2_FWD_DEFINED__
#define __IShellFolder2_FWD_DEFINED__
typedef interface IShellFolder2 IShellFolder2;
#endif 	/* __IShellFolder2_FWD_DEFINED__ */


#ifndef __IShellView_FWD_DEFINED__
#define __IShellView_FWD_DEFINED__
typedef interface IShellView IShellView;
#endif 	/* __IShellView_FWD_DEFINED__ */


#ifndef __IShellView2_FWD_DEFINED__
#define __IShellView2_FWD_DEFINED__
typedef interface IShellView2 IShellView2;
#endif 	/* __IShellView2_FWD_DEFINED__ */


#ifndef __IShellView3_FWD_DEFINED__
#define __IShellView3_FWD_DEFINED__
typedef interface IShellView3 IShellView3;
#endif 	/* __IShellView3_FWD_DEFINED__ */


#ifndef __IFolderView_FWD_DEFINED__
#define __IFolderView_FWD_DEFINED__
typedef interface IFolderView IFolderView;
#endif 	/* __IFolderView_FWD_DEFINED__ */


#ifndef __IFolderView2_FWD_DEFINED__
#define __IFolderView2_FWD_DEFINED__
typedef interface IFolderView2 IFolderView2;
#endif 	/* __IFolderView2_FWD_DEFINED__ */


#ifndef __IFolderViewSettings_FWD_DEFINED__
#define __IFolderViewSettings_FWD_DEFINED__
typedef interface IFolderViewSettings IFolderViewSettings;
#endif 	/* __IFolderViewSettings_FWD_DEFINED__ */


#ifndef __IPreviewHandlerVisuals_FWD_DEFINED__
#define __IPreviewHandlerVisuals_FWD_DEFINED__
typedef interface IPreviewHandlerVisuals IPreviewHandlerVisuals;
#endif 	/* __IPreviewHandlerVisuals_FWD_DEFINED__ */


#ifndef __IVisualProperties_FWD_DEFINED__
#define __IVisualProperties_FWD_DEFINED__
typedef interface IVisualProperties IVisualProperties;
#endif 	/* __IVisualProperties_FWD_DEFINED__ */


#ifndef __ICommDlgBrowser_FWD_DEFINED__
#define __ICommDlgBrowser_FWD_DEFINED__
typedef interface ICommDlgBrowser ICommDlgBrowser;
#endif 	/* __ICommDlgBrowser_FWD_DEFINED__ */


#ifndef __ICommDlgBrowser2_FWD_DEFINED__
#define __ICommDlgBrowser2_FWD_DEFINED__
typedef interface ICommDlgBrowser2 ICommDlgBrowser2;
#endif 	/* __ICommDlgBrowser2_FWD_DEFINED__ */


#ifndef __ICommDlgBrowser3_FWD_DEFINED__
#define __ICommDlgBrowser3_FWD_DEFINED__
typedef interface ICommDlgBrowser3 ICommDlgBrowser3;
#endif 	/* __ICommDlgBrowser3_FWD_DEFINED__ */


#ifndef __IColumnManager_FWD_DEFINED__
#define __IColumnManager_FWD_DEFINED__
typedef interface IColumnManager IColumnManager;
#endif 	/* __IColumnManager_FWD_DEFINED__ */


#ifndef __IFolderFilterSite_FWD_DEFINED__
#define __IFolderFilterSite_FWD_DEFINED__
typedef interface IFolderFilterSite IFolderFilterSite;
#endif 	/* __IFolderFilterSite_FWD_DEFINED__ */


#ifndef __IFolderFilter_FWD_DEFINED__
#define __IFolderFilter_FWD_DEFINED__
typedef interface IFolderFilter IFolderFilter;
#endif 	/* __IFolderFilter_FWD_DEFINED__ */


#ifndef __IInputObjectSite_FWD_DEFINED__
#define __IInputObjectSite_FWD_DEFINED__
typedef interface IInputObjectSite IInputObjectSite;
#endif 	/* __IInputObjectSite_FWD_DEFINED__ */


#ifndef __IInputObject_FWD_DEFINED__
#define __IInputObject_FWD_DEFINED__
typedef interface IInputObject IInputObject;
#endif 	/* __IInputObject_FWD_DEFINED__ */


#ifndef __IInputObject2_FWD_DEFINED__
#define __IInputObject2_FWD_DEFINED__
typedef interface IInputObject2 IInputObject2;
#endif 	/* __IInputObject2_FWD_DEFINED__ */


#ifndef __IShellIcon_FWD_DEFINED__
#define __IShellIcon_FWD_DEFINED__
typedef interface IShellIcon IShellIcon;
#endif 	/* __IShellIcon_FWD_DEFINED__ */


#ifndef __IShellBrowser_FWD_DEFINED__
#define __IShellBrowser_FWD_DEFINED__
typedef interface IShellBrowser IShellBrowser;
#endif 	/* __IShellBrowser_FWD_DEFINED__ */


#ifndef __IProfferService_FWD_DEFINED__
#define __IProfferService_FWD_DEFINED__
typedef interface IProfferService IProfferService;
#endif 	/* __IProfferService_FWD_DEFINED__ */


#ifndef __IShellItem_FWD_DEFINED__
#define __IShellItem_FWD_DEFINED__
typedef interface IShellItem IShellItem;
#endif 	/* __IShellItem_FWD_DEFINED__ */


#ifndef __IShellItem2_FWD_DEFINED__
#define __IShellItem2_FWD_DEFINED__
typedef interface IShellItem2 IShellItem2;
#endif 	/* __IShellItem2_FWD_DEFINED__ */


#ifndef __IShellItemImageFactory_FWD_DEFINED__
#define __IShellItemImageFactory_FWD_DEFINED__
typedef interface IShellItemImageFactory IShellItemImageFactory;
#endif 	/* __IShellItemImageFactory_FWD_DEFINED__ */


#ifndef __IEnumShellItems_FWD_DEFINED__
#define __IEnumShellItems_FWD_DEFINED__
typedef interface IEnumShellItems IEnumShellItems;
#endif 	/* __IEnumShellItems_FWD_DEFINED__ */


#ifndef __ITransferAdviseSink_FWD_DEFINED__
#define __ITransferAdviseSink_FWD_DEFINED__
typedef interface ITransferAdviseSink ITransferAdviseSink;
#endif 	/* __ITransferAdviseSink_FWD_DEFINED__ */


#ifndef __ITransferSource_FWD_DEFINED__
#define __ITransferSource_FWD_DEFINED__
typedef interface ITransferSource ITransferSource;
#endif 	/* __ITransferSource_FWD_DEFINED__ */


#ifndef __IEnumResources_FWD_DEFINED__
#define __IEnumResources_FWD_DEFINED__
typedef interface IEnumResources IEnumResources;
#endif 	/* __IEnumResources_FWD_DEFINED__ */


#ifndef __IShellItemResources_FWD_DEFINED__
#define __IShellItemResources_FWD_DEFINED__
typedef interface IShellItemResources IShellItemResources;
#endif 	/* __IShellItemResources_FWD_DEFINED__ */


#ifndef __ITransferDestination_FWD_DEFINED__
#define __ITransferDestination_FWD_DEFINED__
typedef interface ITransferDestination ITransferDestination;
#endif 	/* __ITransferDestination_FWD_DEFINED__ */


#ifndef __IStreamAsync_FWD_DEFINED__
#define __IStreamAsync_FWD_DEFINED__
typedef interface IStreamAsync IStreamAsync;
#endif 	/* __IStreamAsync_FWD_DEFINED__ */


#ifndef __IStreamUnbufferedInfo_FWD_DEFINED__
#define __IStreamUnbufferedInfo_FWD_DEFINED__
typedef interface IStreamUnbufferedInfo IStreamUnbufferedInfo;
#endif 	/* __IStreamUnbufferedInfo_FWD_DEFINED__ */


#ifndef __IFileOperationProgressSink_FWD_DEFINED__
#define __IFileOperationProgressSink_FWD_DEFINED__
typedef interface IFileOperationProgressSink IFileOperationProgressSink;
#endif 	/* __IFileOperationProgressSink_FWD_DEFINED__ */


#ifndef __IShellItemArray_FWD_DEFINED__
#define __IShellItemArray_FWD_DEFINED__
typedef interface IShellItemArray IShellItemArray;
#endif 	/* __IShellItemArray_FWD_DEFINED__ */


#ifndef __IInitializeWithItem_FWD_DEFINED__
#define __IInitializeWithItem_FWD_DEFINED__
typedef interface IInitializeWithItem IInitializeWithItem;
#endif 	/* __IInitializeWithItem_FWD_DEFINED__ */


#ifndef __IPropertyUI_FWD_DEFINED__
#define __IPropertyUI_FWD_DEFINED__
typedef interface IPropertyUI IPropertyUI;
#endif 	/* __IPropertyUI_FWD_DEFINED__ */


#ifndef __ICategoryProvider_FWD_DEFINED__
#define __ICategoryProvider_FWD_DEFINED__
typedef interface ICategoryProvider ICategoryProvider;
#endif 	/* __ICategoryProvider_FWD_DEFINED__ */


#ifndef __ICategorizer_FWD_DEFINED__
#define __ICategorizer_FWD_DEFINED__
typedef interface ICategorizer ICategorizer;
#endif 	/* __ICategorizer_FWD_DEFINED__ */


#ifndef __IDropTargetHelper_FWD_DEFINED__
#define __IDropTargetHelper_FWD_DEFINED__
typedef interface IDropTargetHelper IDropTargetHelper;
#endif 	/* __IDropTargetHelper_FWD_DEFINED__ */


#ifndef __IDragSourceHelper_FWD_DEFINED__
#define __IDragSourceHelper_FWD_DEFINED__
typedef interface IDragSourceHelper IDragSourceHelper;
#endif 	/* __IDragSourceHelper_FWD_DEFINED__ */


#ifndef __IDragSourceHelper2_FWD_DEFINED__
#define __IDragSourceHelper2_FWD_DEFINED__
typedef interface IDragSourceHelper2 IDragSourceHelper2;
#endif 	/* __IDragSourceHelper2_FWD_DEFINED__ */


#ifndef __IShellLinkA_FWD_DEFINED__
#define __IShellLinkA_FWD_DEFINED__
typedef interface IShellLinkA IShellLinkA;
#endif 	/* __IShellLinkA_FWD_DEFINED__ */


#ifndef __IShellLinkW_FWD_DEFINED__
#define __IShellLinkW_FWD_DEFINED__
typedef interface IShellLinkW IShellLinkW;
#endif 	/* __IShellLinkW_FWD_DEFINED__ */


#ifndef __IShellLinkDataList_FWD_DEFINED__
#define __IShellLinkDataList_FWD_DEFINED__
typedef interface IShellLinkDataList IShellLinkDataList;
#endif 	/* __IShellLinkDataList_FWD_DEFINED__ */


#ifndef __IResolveShellLink_FWD_DEFINED__
#define __IResolveShellLink_FWD_DEFINED__
typedef interface IResolveShellLink IResolveShellLink;
#endif 	/* __IResolveShellLink_FWD_DEFINED__ */


#ifndef __IActionProgressDialog_FWD_DEFINED__
#define __IActionProgressDialog_FWD_DEFINED__
typedef interface IActionProgressDialog IActionProgressDialog;
#endif 	/* __IActionProgressDialog_FWD_DEFINED__ */


#ifndef __IHWEventHandler_FWD_DEFINED__
#define __IHWEventHandler_FWD_DEFINED__
typedef interface IHWEventHandler IHWEventHandler;
#endif 	/* __IHWEventHandler_FWD_DEFINED__ */


#ifndef __IHWEventHandler2_FWD_DEFINED__
#define __IHWEventHandler2_FWD_DEFINED__
typedef interface IHWEventHandler2 IHWEventHandler2;
#endif 	/* __IHWEventHandler2_FWD_DEFINED__ */


#ifndef __IQueryCancelAutoPlay_FWD_DEFINED__
#define __IQueryCancelAutoPlay_FWD_DEFINED__
typedef interface IQueryCancelAutoPlay IQueryCancelAutoPlay;
#endif 	/* __IQueryCancelAutoPlay_FWD_DEFINED__ */


#ifndef __IDynamicHWHandler_FWD_DEFINED__
#define __IDynamicHWHandler_FWD_DEFINED__
typedef interface IDynamicHWHandler IDynamicHWHandler;
#endif 	/* __IDynamicHWHandler_FWD_DEFINED__ */


#ifndef __IActionProgress_FWD_DEFINED__
#define __IActionProgress_FWD_DEFINED__
typedef interface IActionProgress IActionProgress;
#endif 	/* __IActionProgress_FWD_DEFINED__ */


#ifndef __IShellExtInit_FWD_DEFINED__
#define __IShellExtInit_FWD_DEFINED__
typedef interface IShellExtInit IShellExtInit;
#endif 	/* __IShellExtInit_FWD_DEFINED__ */


#ifndef __IShellPropSheetExt_FWD_DEFINED__
#define __IShellPropSheetExt_FWD_DEFINED__
typedef interface IShellPropSheetExt IShellPropSheetExt;
#endif 	/* __IShellPropSheetExt_FWD_DEFINED__ */


#ifndef __IRemoteComputer_FWD_DEFINED__
#define __IRemoteComputer_FWD_DEFINED__
typedef interface IRemoteComputer IRemoteComputer;
#endif 	/* __IRemoteComputer_FWD_DEFINED__ */


#ifndef __IQueryContinue_FWD_DEFINED__
#define __IQueryContinue_FWD_DEFINED__
typedef interface IQueryContinue IQueryContinue;
#endif 	/* __IQueryContinue_FWD_DEFINED__ */


#ifndef __IUserNotification_FWD_DEFINED__
#define __IUserNotification_FWD_DEFINED__
typedef interface IUserNotification IUserNotification;
#endif 	/* __IUserNotification_FWD_DEFINED__ */


#ifndef __IUserNotificationCallback_FWD_DEFINED__
#define __IUserNotificationCallback_FWD_DEFINED__
typedef interface IUserNotificationCallback IUserNotificationCallback;
#endif 	/* __IUserNotificationCallback_FWD_DEFINED__ */


#ifndef __IUserNotification2_FWD_DEFINED__
#define __IUserNotification2_FWD_DEFINED__
typedef interface IUserNotification2 IUserNotification2;
#endif 	/* __IUserNotification2_FWD_DEFINED__ */


#ifndef __IItemNameLimits_FWD_DEFINED__
#define __IItemNameLimits_FWD_DEFINED__
typedef interface IItemNameLimits IItemNameLimits;
#endif 	/* __IItemNameLimits_FWD_DEFINED__ */


#ifndef __ISearchFolderItemFactory_FWD_DEFINED__
#define __ISearchFolderItemFactory_FWD_DEFINED__
typedef interface ISearchFolderItemFactory ISearchFolderItemFactory;
#endif 	/* __ISearchFolderItemFactory_FWD_DEFINED__ */


#ifndef __IExtractImage_FWD_DEFINED__
#define __IExtractImage_FWD_DEFINED__
typedef interface IExtractImage IExtractImage;
#endif 	/* __IExtractImage_FWD_DEFINED__ */


#ifndef __IExtractImage2_FWD_DEFINED__
#define __IExtractImage2_FWD_DEFINED__
typedef interface IExtractImage2 IExtractImage2;
#endif 	/* __IExtractImage2_FWD_DEFINED__ */


#ifndef __IThumbnailHandlerFactory_FWD_DEFINED__
#define __IThumbnailHandlerFactory_FWD_DEFINED__
typedef interface IThumbnailHandlerFactory IThumbnailHandlerFactory;
#endif 	/* __IThumbnailHandlerFactory_FWD_DEFINED__ */


#ifndef __IParentAndItem_FWD_DEFINED__
#define __IParentAndItem_FWD_DEFINED__
typedef interface IParentAndItem IParentAndItem;
#endif 	/* __IParentAndItem_FWD_DEFINED__ */


#ifndef __IDockingWindow_FWD_DEFINED__
#define __IDockingWindow_FWD_DEFINED__
typedef interface IDockingWindow IDockingWindow;
#endif 	/* __IDockingWindow_FWD_DEFINED__ */


#ifndef __IDeskBand_FWD_DEFINED__
#define __IDeskBand_FWD_DEFINED__
typedef interface IDeskBand IDeskBand;
#endif 	/* __IDeskBand_FWD_DEFINED__ */


#ifndef __IDeskBandInfo_FWD_DEFINED__
#define __IDeskBandInfo_FWD_DEFINED__
typedef interface IDeskBandInfo IDeskBandInfo;
#endif 	/* __IDeskBandInfo_FWD_DEFINED__ */


#ifndef __IDeskBand2_FWD_DEFINED__
#define __IDeskBand2_FWD_DEFINED__
typedef interface IDeskBand2 IDeskBand2;
#endif 	/* __IDeskBand2_FWD_DEFINED__ */


#ifndef __ITaskbarList_FWD_DEFINED__
#define __ITaskbarList_FWD_DEFINED__
typedef interface ITaskbarList ITaskbarList;
#endif 	/* __ITaskbarList_FWD_DEFINED__ */


#ifndef __ITaskbarList2_FWD_DEFINED__
#define __ITaskbarList2_FWD_DEFINED__
typedef interface ITaskbarList2 ITaskbarList2;
#endif 	/* __ITaskbarList2_FWD_DEFINED__ */


#ifndef __IStartMenuPinnedList_FWD_DEFINED__
#define __IStartMenuPinnedList_FWD_DEFINED__
typedef interface IStartMenuPinnedList IStartMenuPinnedList;
#endif 	/* __IStartMenuPinnedList_FWD_DEFINED__ */


#ifndef __ICDBurn_FWD_DEFINED__
#define __ICDBurn_FWD_DEFINED__
typedef interface ICDBurn ICDBurn;
#endif 	/* __ICDBurn_FWD_DEFINED__ */


#ifndef __IWizardSite_FWD_DEFINED__
#define __IWizardSite_FWD_DEFINED__
typedef interface IWizardSite IWizardSite;
#endif 	/* __IWizardSite_FWD_DEFINED__ */


#ifndef __IWizardExtension_FWD_DEFINED__
#define __IWizardExtension_FWD_DEFINED__
typedef interface IWizardExtension IWizardExtension;
#endif 	/* __IWizardExtension_FWD_DEFINED__ */


#ifndef __IWebWizardExtension_FWD_DEFINED__
#define __IWebWizardExtension_FWD_DEFINED__
typedef interface IWebWizardExtension IWebWizardExtension;
#endif 	/* __IWebWizardExtension_FWD_DEFINED__ */


#ifndef __IPublishingWizard_FWD_DEFINED__
#define __IPublishingWizard_FWD_DEFINED__
typedef interface IPublishingWizard IPublishingWizard;
#endif 	/* __IPublishingWizard_FWD_DEFINED__ */


#ifndef __IFolderViewHost_FWD_DEFINED__
#define __IFolderViewHost_FWD_DEFINED__
typedef interface IFolderViewHost IFolderViewHost;
#endif 	/* __IFolderViewHost_FWD_DEFINED__ */


#ifndef __IExplorerBrowserEvents_FWD_DEFINED__
#define __IExplorerBrowserEvents_FWD_DEFINED__
typedef interface IExplorerBrowserEvents IExplorerBrowserEvents;
#endif 	/* __IExplorerBrowserEvents_FWD_DEFINED__ */


#ifndef __IExplorerBrowser_FWD_DEFINED__
#define __IExplorerBrowser_FWD_DEFINED__
typedef interface IExplorerBrowser IExplorerBrowser;
#endif 	/* __IExplorerBrowser_FWD_DEFINED__ */


#ifndef __IAccessibleObject_FWD_DEFINED__
#define __IAccessibleObject_FWD_DEFINED__
typedef interface IAccessibleObject IAccessibleObject;
#endif 	/* __IAccessibleObject_FWD_DEFINED__ */


#ifndef __IResultsFolder_FWD_DEFINED__
#define __IResultsFolder_FWD_DEFINED__
typedef interface IResultsFolder IResultsFolder;
#endif 	/* __IResultsFolder_FWD_DEFINED__ */


#ifndef __IEnumObjects_FWD_DEFINED__
#define __IEnumObjects_FWD_DEFINED__
typedef interface IEnumObjects IEnumObjects;
#endif 	/* __IEnumObjects_FWD_DEFINED__ */


#ifndef __IOperationsProgressDialog_FWD_DEFINED__
#define __IOperationsProgressDialog_FWD_DEFINED__
typedef interface IOperationsProgressDialog IOperationsProgressDialog;
#endif 	/* __IOperationsProgressDialog_FWD_DEFINED__ */


#ifndef __IOperationsUpdateProgress_FWD_DEFINED__
#define __IOperationsUpdateProgress_FWD_DEFINED__
typedef interface IOperationsUpdateProgress IOperationsUpdateProgress;
#endif 	/* __IOperationsUpdateProgress_FWD_DEFINED__ */


#ifndef __IIOCancelInformation_FWD_DEFINED__
#define __IIOCancelInformation_FWD_DEFINED__
typedef interface IIOCancelInformation IIOCancelInformation;
#endif 	/* __IIOCancelInformation_FWD_DEFINED__ */


#ifndef __IFileOperation_FWD_DEFINED__
#define __IFileOperation_FWD_DEFINED__
typedef interface IFileOperation IFileOperation;
#endif 	/* __IFileOperation_FWD_DEFINED__ */


#ifndef __IObjectProvider_FWD_DEFINED__
#define __IObjectProvider_FWD_DEFINED__
typedef interface IObjectProvider IObjectProvider;
#endif 	/* __IObjectProvider_FWD_DEFINED__ */


#ifndef __INamespaceWalkCB_FWD_DEFINED__
#define __INamespaceWalkCB_FWD_DEFINED__
typedef interface INamespaceWalkCB INamespaceWalkCB;
#endif 	/* __INamespaceWalkCB_FWD_DEFINED__ */


#ifndef __INamespaceWalkCB2_FWD_DEFINED__
#define __INamespaceWalkCB2_FWD_DEFINED__
typedef interface INamespaceWalkCB2 INamespaceWalkCB2;
#endif 	/* __INamespaceWalkCB2_FWD_DEFINED__ */


#ifndef __INamespaceWalk_FWD_DEFINED__
#define __INamespaceWalk_FWD_DEFINED__
typedef interface INamespaceWalk INamespaceWalk;
#endif 	/* __INamespaceWalk_FWD_DEFINED__ */


#ifndef __IAutoCompleteDropDown_FWD_DEFINED__
#define __IAutoCompleteDropDown_FWD_DEFINED__
typedef interface IAutoCompleteDropDown IAutoCompleteDropDown;
#endif 	/* __IAutoCompleteDropDown_FWD_DEFINED__ */


#ifndef __IBandSite_FWD_DEFINED__
#define __IBandSite_FWD_DEFINED__
typedef interface IBandSite IBandSite;
#endif 	/* __IBandSite_FWD_DEFINED__ */


#ifndef __IModalWindow_FWD_DEFINED__
#define __IModalWindow_FWD_DEFINED__
typedef interface IModalWindow IModalWindow;
#endif 	/* __IModalWindow_FWD_DEFINED__ */


#ifndef __ICDBurnExt_FWD_DEFINED__
#define __ICDBurnExt_FWD_DEFINED__
typedef interface ICDBurnExt ICDBurnExt;
#endif 	/* __ICDBurnExt_FWD_DEFINED__ */


#ifndef __IContextMenuSite_FWD_DEFINED__
#define __IContextMenuSite_FWD_DEFINED__
typedef interface IContextMenuSite IContextMenuSite;
#endif 	/* __IContextMenuSite_FWD_DEFINED__ */


#ifndef __IEnumReadyCallback_FWD_DEFINED__
#define __IEnumReadyCallback_FWD_DEFINED__
typedef interface IEnumReadyCallback IEnumReadyCallback;
#endif 	/* __IEnumReadyCallback_FWD_DEFINED__ */


#ifndef __IEnumerableView_FWD_DEFINED__
#define __IEnumerableView_FWD_DEFINED__
typedef interface IEnumerableView IEnumerableView;
#endif 	/* __IEnumerableView_FWD_DEFINED__ */


#ifndef __IInsertItem_FWD_DEFINED__
#define __IInsertItem_FWD_DEFINED__
typedef interface IInsertItem IInsertItem;
#endif 	/* __IInsertItem_FWD_DEFINED__ */


#ifndef __IMenuBand_FWD_DEFINED__
#define __IMenuBand_FWD_DEFINED__
typedef interface IMenuBand IMenuBand;
#endif 	/* __IMenuBand_FWD_DEFINED__ */


#ifndef __IFolderBandPriv_FWD_DEFINED__
#define __IFolderBandPriv_FWD_DEFINED__
typedef interface IFolderBandPriv IFolderBandPriv;
#endif 	/* __IFolderBandPriv_FWD_DEFINED__ */


#ifndef __IRegTreeItem_FWD_DEFINED__
#define __IRegTreeItem_FWD_DEFINED__
typedef interface IRegTreeItem IRegTreeItem;
#endif 	/* __IRegTreeItem_FWD_DEFINED__ */


#ifndef __IImageRecompress_FWD_DEFINED__
#define __IImageRecompress_FWD_DEFINED__
typedef interface IImageRecompress IImageRecompress;
#endif 	/* __IImageRecompress_FWD_DEFINED__ */


#ifndef __IDeskBar_FWD_DEFINED__
#define __IDeskBar_FWD_DEFINED__
typedef interface IDeskBar IDeskBar;
#endif 	/* __IDeskBar_FWD_DEFINED__ */


#ifndef __IMenuPopup_FWD_DEFINED__
#define __IMenuPopup_FWD_DEFINED__
typedef interface IMenuPopup IMenuPopup;
#endif 	/* __IMenuPopup_FWD_DEFINED__ */


#ifndef __IFileIsInUse_FWD_DEFINED__
#define __IFileIsInUse_FWD_DEFINED__
typedef interface IFileIsInUse IFileIsInUse;
#endif 	/* __IFileIsInUse_FWD_DEFINED__ */


#ifndef __IFileDialogEvents_FWD_DEFINED__
#define __IFileDialogEvents_FWD_DEFINED__
typedef interface IFileDialogEvents IFileDialogEvents;
#endif 	/* __IFileDialogEvents_FWD_DEFINED__ */


#ifndef __IFileDialog_FWD_DEFINED__
#define __IFileDialog_FWD_DEFINED__
typedef interface IFileDialog IFileDialog;
#endif 	/* __IFileDialog_FWD_DEFINED__ */


#ifndef __IFileSaveDialog_FWD_DEFINED__
#define __IFileSaveDialog_FWD_DEFINED__
typedef interface IFileSaveDialog IFileSaveDialog;
#endif 	/* __IFileSaveDialog_FWD_DEFINED__ */


#ifndef __IFileOpenDialog_FWD_DEFINED__
#define __IFileOpenDialog_FWD_DEFINED__
typedef interface IFileOpenDialog IFileOpenDialog;
#endif 	/* __IFileOpenDialog_FWD_DEFINED__ */


#ifndef __IFileDialogCustomize_FWD_DEFINED__
#define __IFileDialogCustomize_FWD_DEFINED__
typedef interface IFileDialogCustomize IFileDialogCustomize;
#endif 	/* __IFileDialogCustomize_FWD_DEFINED__ */


#ifndef __IFileDialogControlEvents_FWD_DEFINED__
#define __IFileDialogControlEvents_FWD_DEFINED__
typedef interface IFileDialogControlEvents IFileDialogControlEvents;
#endif 	/* __IFileDialogControlEvents_FWD_DEFINED__ */


#ifndef __IApplicationAssociationRegistration_FWD_DEFINED__
#define __IApplicationAssociationRegistration_FWD_DEFINED__
typedef interface IApplicationAssociationRegistration IApplicationAssociationRegistration;
#endif 	/* __IApplicationAssociationRegistration_FWD_DEFINED__ */


#ifndef __IApplicationAssociationRegistrationUI_FWD_DEFINED__
#define __IApplicationAssociationRegistrationUI_FWD_DEFINED__
typedef interface IApplicationAssociationRegistrationUI IApplicationAssociationRegistrationUI;
#endif 	/* __IApplicationAssociationRegistrationUI_FWD_DEFINED__ */


#ifndef __IDelegateFolder_FWD_DEFINED__
#define __IDelegateFolder_FWD_DEFINED__
typedef interface IDelegateFolder IDelegateFolder;
#endif 	/* __IDelegateFolder_FWD_DEFINED__ */


#ifndef __IBrowserFrameOptions_FWD_DEFINED__
#define __IBrowserFrameOptions_FWD_DEFINED__
typedef interface IBrowserFrameOptions IBrowserFrameOptions;
#endif 	/* __IBrowserFrameOptions_FWD_DEFINED__ */


#ifndef __INewWindowManager_FWD_DEFINED__
#define __INewWindowManager_FWD_DEFINED__
typedef interface INewWindowManager INewWindowManager;
#endif 	/* __INewWindowManager_FWD_DEFINED__ */


#ifndef __IAttachmentExecute_FWD_DEFINED__
#define __IAttachmentExecute_FWD_DEFINED__
typedef interface IAttachmentExecute IAttachmentExecute;
#endif 	/* __IAttachmentExecute_FWD_DEFINED__ */


#ifndef __IShellMenuCallback_FWD_DEFINED__
#define __IShellMenuCallback_FWD_DEFINED__
typedef interface IShellMenuCallback IShellMenuCallback;
#endif 	/* __IShellMenuCallback_FWD_DEFINED__ */


#ifndef __IShellMenu_FWD_DEFINED__
#define __IShellMenu_FWD_DEFINED__
typedef interface IShellMenu IShellMenu;
#endif 	/* __IShellMenu_FWD_DEFINED__ */


#ifndef __IShellRunDll_FWD_DEFINED__
#define __IShellRunDll_FWD_DEFINED__
typedef interface IShellRunDll IShellRunDll;
#endif 	/* __IShellRunDll_FWD_DEFINED__ */


#ifndef __IKnownFolder_FWD_DEFINED__
#define __IKnownFolder_FWD_DEFINED__
typedef interface IKnownFolder IKnownFolder;
#endif 	/* __IKnownFolder_FWD_DEFINED__ */


#ifndef __IKnownFolderManager_FWD_DEFINED__
#define __IKnownFolderManager_FWD_DEFINED__
typedef interface IKnownFolderManager IKnownFolderManager;
#endif 	/* __IKnownFolderManager_FWD_DEFINED__ */


#ifndef __ISharingConfigurationManager_FWD_DEFINED__
#define __ISharingConfigurationManager_FWD_DEFINED__
typedef interface ISharingConfigurationManager ISharingConfigurationManager;
#endif 	/* __ISharingConfigurationManager_FWD_DEFINED__ */


#ifndef __IPreviousVersionsInfo_FWD_DEFINED__
#define __IPreviousVersionsInfo_FWD_DEFINED__
typedef interface IPreviousVersionsInfo IPreviousVersionsInfo;
#endif 	/* __IPreviousVersionsInfo_FWD_DEFINED__ */


#ifndef __IRelatedItem_FWD_DEFINED__
#define __IRelatedItem_FWD_DEFINED__
typedef interface IRelatedItem IRelatedItem;
#endif 	/* __IRelatedItem_FWD_DEFINED__ */


#ifndef __IIdentityName_FWD_DEFINED__
#define __IIdentityName_FWD_DEFINED__
typedef interface IIdentityName IIdentityName;
#endif 	/* __IIdentityName_FWD_DEFINED__ */


#ifndef __ICurrentItem_FWD_DEFINED__
#define __ICurrentItem_FWD_DEFINED__
typedef interface ICurrentItem ICurrentItem;
#endif 	/* __ICurrentItem_FWD_DEFINED__ */


#ifndef __ITransferMediumItem_FWD_DEFINED__
#define __ITransferMediumItem_FWD_DEFINED__
typedef interface ITransferMediumItem ITransferMediumItem;
#endif 	/* __ITransferMediumItem_FWD_DEFINED__ */


#ifndef __IUseToBrowseItem_FWD_DEFINED__
#define __IUseToBrowseItem_FWD_DEFINED__
typedef interface IUseToBrowseItem IUseToBrowseItem;
#endif 	/* __IUseToBrowseItem_FWD_DEFINED__ */


#ifndef __IDisplayItem_FWD_DEFINED__
#define __IDisplayItem_FWD_DEFINED__
typedef interface IDisplayItem IDisplayItem;
#endif 	/* __IDisplayItem_FWD_DEFINED__ */


#ifndef __IDestinationStreamFactory_FWD_DEFINED__
#define __IDestinationStreamFactory_FWD_DEFINED__
typedef interface IDestinationStreamFactory IDestinationStreamFactory;
#endif 	/* __IDestinationStreamFactory_FWD_DEFINED__ */


#ifndef __IShellItemFilter_FWD_DEFINED__
#define __IShellItemFilter_FWD_DEFINED__
typedef interface IShellItemFilter IShellItemFilter;
#endif 	/* __IShellItemFilter_FWD_DEFINED__ */


#ifndef __INameSpaceTreeControl_FWD_DEFINED__
#define __INameSpaceTreeControl_FWD_DEFINED__
typedef interface INameSpaceTreeControl INameSpaceTreeControl;
#endif 	/* __INameSpaceTreeControl_FWD_DEFINED__ */


#ifndef __INameSpaceTreeControlEvents_FWD_DEFINED__
#define __INameSpaceTreeControlEvents_FWD_DEFINED__
typedef interface INameSpaceTreeControlEvents INameSpaceTreeControlEvents;
#endif 	/* __INameSpaceTreeControlEvents_FWD_DEFINED__ */


#ifndef __INameSpaceTreeControlDropHandler_FWD_DEFINED__
#define __INameSpaceTreeControlDropHandler_FWD_DEFINED__
typedef interface INameSpaceTreeControlDropHandler INameSpaceTreeControlDropHandler;
#endif 	/* __INameSpaceTreeControlDropHandler_FWD_DEFINED__ */


#ifndef __INameSpaceTreeAccessible_FWD_DEFINED__
#define __INameSpaceTreeAccessible_FWD_DEFINED__
typedef interface INameSpaceTreeAccessible INameSpaceTreeAccessible;
#endif 	/* __INameSpaceTreeAccessible_FWD_DEFINED__ */


#ifndef __INameSpaceTreeControlCustomDraw_FWD_DEFINED__
#define __INameSpaceTreeControlCustomDraw_FWD_DEFINED__
typedef interface INameSpaceTreeControlCustomDraw INameSpaceTreeControlCustomDraw;
#endif 	/* __INameSpaceTreeControlCustomDraw_FWD_DEFINED__ */


#ifndef __IPreviewHandler_FWD_DEFINED__
#define __IPreviewHandler_FWD_DEFINED__
typedef interface IPreviewHandler IPreviewHandler;
#endif 	/* __IPreviewHandler_FWD_DEFINED__ */


#ifndef __IPreviewHandlerFrame_FWD_DEFINED__
#define __IPreviewHandlerFrame_FWD_DEFINED__
typedef interface IPreviewHandlerFrame IPreviewHandlerFrame;
#endif 	/* __IPreviewHandlerFrame_FWD_DEFINED__ */


#ifndef __ITrayDeskBand_FWD_DEFINED__
#define __ITrayDeskBand_FWD_DEFINED__
typedef interface ITrayDeskBand ITrayDeskBand;
#endif 	/* __ITrayDeskBand_FWD_DEFINED__ */


#ifndef __IBandHost_FWD_DEFINED__
#define __IBandHost_FWD_DEFINED__
typedef interface IBandHost IBandHost;
#endif 	/* __IBandHost_FWD_DEFINED__ */


#ifndef __IExplorerPaneVisibility_FWD_DEFINED__
#define __IExplorerPaneVisibility_FWD_DEFINED__
typedef interface IExplorerPaneVisibility IExplorerPaneVisibility;
#endif 	/* __IExplorerPaneVisibility_FWD_DEFINED__ */


#ifndef __IContextMenuCB_FWD_DEFINED__
#define __IContextMenuCB_FWD_DEFINED__
typedef interface IContextMenuCB IContextMenuCB;
#endif 	/* __IContextMenuCB_FWD_DEFINED__ */


#ifndef __IDefaultExtractIconInit_FWD_DEFINED__
#define __IDefaultExtractIconInit_FWD_DEFINED__
typedef interface IDefaultExtractIconInit IDefaultExtractIconInit;
#endif 	/* __IDefaultExtractIconInit_FWD_DEFINED__ */


#ifndef __IExplorerCommand_FWD_DEFINED__
#define __IExplorerCommand_FWD_DEFINED__
typedef interface IExplorerCommand IExplorerCommand;
#endif 	/* __IExplorerCommand_FWD_DEFINED__ */


#ifndef __IEnumExplorerCommand_FWD_DEFINED__
#define __IEnumExplorerCommand_FWD_DEFINED__
typedef interface IEnumExplorerCommand IEnumExplorerCommand;
#endif 	/* __IEnumExplorerCommand_FWD_DEFINED__ */


#ifndef __IExplorerCommandProvider_FWD_DEFINED__
#define __IExplorerCommandProvider_FWD_DEFINED__
typedef interface IExplorerCommandProvider IExplorerCommandProvider;
#endif 	/* __IExplorerCommandProvider_FWD_DEFINED__ */


#ifndef __IMarkupCallback_FWD_DEFINED__
#define __IMarkupCallback_FWD_DEFINED__
typedef interface IMarkupCallback IMarkupCallback;
#endif 	/* __IMarkupCallback_FWD_DEFINED__ */


#ifndef __IControlMarkup_FWD_DEFINED__
#define __IControlMarkup_FWD_DEFINED__
typedef interface IControlMarkup IControlMarkup;
#endif 	/* __IControlMarkup_FWD_DEFINED__ */


#ifndef __IInitializeNetworkFolder_FWD_DEFINED__
#define __IInitializeNetworkFolder_FWD_DEFINED__
typedef interface IInitializeNetworkFolder IInitializeNetworkFolder;
#endif 	/* __IInitializeNetworkFolder_FWD_DEFINED__ */


#ifndef __IOpenControlPanel_FWD_DEFINED__
#define __IOpenControlPanel_FWD_DEFINED__
typedef interface IOpenControlPanel IOpenControlPanel;
#endif 	/* __IOpenControlPanel_FWD_DEFINED__ */


#ifndef __ISystemCPLUpdate_FWD_DEFINED__
#define __ISystemCPLUpdate_FWD_DEFINED__
typedef interface ISystemCPLUpdate ISystemCPLUpdate;
#endif 	/* __ISystemCPLUpdate_FWD_DEFINED__ */


#ifndef __IComputerInfoAdvise_FWD_DEFINED__
#define __IComputerInfoAdvise_FWD_DEFINED__
typedef interface IComputerInfoAdvise IComputerInfoAdvise;
#endif 	/* __IComputerInfoAdvise_FWD_DEFINED__ */


#ifndef __IComputerInfoChangeNotify_FWD_DEFINED__
#define __IComputerInfoChangeNotify_FWD_DEFINED__
typedef interface IComputerInfoChangeNotify IComputerInfoChangeNotify;
#endif 	/* __IComputerInfoChangeNotify_FWD_DEFINED__ */


#ifndef __IFileSystemBindData_FWD_DEFINED__
#define __IFileSystemBindData_FWD_DEFINED__
typedef interface IFileSystemBindData IFileSystemBindData;
#endif 	/* __IFileSystemBindData_FWD_DEFINED__ */


#ifndef __IFileSystemBindData2_FWD_DEFINED__
#define __IFileSystemBindData2_FWD_DEFINED__
typedef interface IFileSystemBindData2 IFileSystemBindData2;
#endif 	/* __IFileSystemBindData2_FWD_DEFINED__ */


#ifndef __ShellDesktop_FWD_DEFINED__
#define __ShellDesktop_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellDesktop ShellDesktop;
#else
typedef struct ShellDesktop ShellDesktop;
#endif /* __cplusplus */

#endif 	/* __ShellDesktop_FWD_DEFINED__ */


#ifndef __ShellFSFolder_FWD_DEFINED__
#define __ShellFSFolder_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellFSFolder ShellFSFolder;
#else
typedef struct ShellFSFolder ShellFSFolder;
#endif /* __cplusplus */

#endif 	/* __ShellFSFolder_FWD_DEFINED__ */


#ifndef __NetworkPlaces_FWD_DEFINED__
#define __NetworkPlaces_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetworkPlaces NetworkPlaces;
#else
typedef struct NetworkPlaces NetworkPlaces;
#endif /* __cplusplus */

#endif 	/* __NetworkPlaces_FWD_DEFINED__ */


#ifndef __ShellLink_FWD_DEFINED__
#define __ShellLink_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellLink ShellLink;
#else
typedef struct ShellLink ShellLink;
#endif /* __cplusplus */

#endif 	/* __ShellLink_FWD_DEFINED__ */


#ifndef __QueryCancelAutoPlay_FWD_DEFINED__
#define __QueryCancelAutoPlay_FWD_DEFINED__

#ifdef __cplusplus
typedef class QueryCancelAutoPlay QueryCancelAutoPlay;
#else
typedef struct QueryCancelAutoPlay QueryCancelAutoPlay;
#endif /* __cplusplus */

#endif 	/* __QueryCancelAutoPlay_FWD_DEFINED__ */


#ifndef __DriveSizeCategorizer_FWD_DEFINED__
#define __DriveSizeCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class DriveSizeCategorizer DriveSizeCategorizer;
#else
typedef struct DriveSizeCategorizer DriveSizeCategorizer;
#endif /* __cplusplus */

#endif 	/* __DriveSizeCategorizer_FWD_DEFINED__ */


#ifndef __DriveTypeCategorizer_FWD_DEFINED__
#define __DriveTypeCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class DriveTypeCategorizer DriveTypeCategorizer;
#else
typedef struct DriveTypeCategorizer DriveTypeCategorizer;
#endif /* __cplusplus */

#endif 	/* __DriveTypeCategorizer_FWD_DEFINED__ */


#ifndef __FreeSpaceCategorizer_FWD_DEFINED__
#define __FreeSpaceCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class FreeSpaceCategorizer FreeSpaceCategorizer;
#else
typedef struct FreeSpaceCategorizer FreeSpaceCategorizer;
#endif /* __cplusplus */

#endif 	/* __FreeSpaceCategorizer_FWD_DEFINED__ */


#ifndef __TimeCategorizer_FWD_DEFINED__
#define __TimeCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class TimeCategorizer TimeCategorizer;
#else
typedef struct TimeCategorizer TimeCategorizer;
#endif /* __cplusplus */

#endif 	/* __TimeCategorizer_FWD_DEFINED__ */


#ifndef __SizeCategorizer_FWD_DEFINED__
#define __SizeCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SizeCategorizer SizeCategorizer;
#else
typedef struct SizeCategorizer SizeCategorizer;
#endif /* __cplusplus */

#endif 	/* __SizeCategorizer_FWD_DEFINED__ */


#ifndef __AlphabeticalCategorizer_FWD_DEFINED__
#define __AlphabeticalCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class AlphabeticalCategorizer AlphabeticalCategorizer;
#else
typedef struct AlphabeticalCategorizer AlphabeticalCategorizer;
#endif /* __cplusplus */

#endif 	/* __AlphabeticalCategorizer_FWD_DEFINED__ */


#ifndef __MergedCategorizer_FWD_DEFINED__
#define __MergedCategorizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class MergedCategorizer MergedCategorizer;
#else
typedef struct MergedCategorizer MergedCategorizer;
#endif /* __cplusplus */

#endif 	/* __MergedCategorizer_FWD_DEFINED__ */


#ifndef __ImageProperties_FWD_DEFINED__
#define __ImageProperties_FWD_DEFINED__

#ifdef __cplusplus
typedef class ImageProperties ImageProperties;
#else
typedef struct ImageProperties ImageProperties;
#endif /* __cplusplus */

#endif 	/* __ImageProperties_FWD_DEFINED__ */


#ifndef __PropertiesUI_FWD_DEFINED__
#define __PropertiesUI_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertiesUI PropertiesUI;
#else
typedef struct PropertiesUI PropertiesUI;
#endif /* __cplusplus */

#endif 	/* __PropertiesUI_FWD_DEFINED__ */


#ifndef __UserNotification_FWD_DEFINED__
#define __UserNotification_FWD_DEFINED__

#ifdef __cplusplus
typedef class UserNotification UserNotification;
#else
typedef struct UserNotification UserNotification;
#endif /* __cplusplus */

#endif 	/* __UserNotification_FWD_DEFINED__ */


#ifndef __CDBurn_FWD_DEFINED__
#define __CDBurn_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDBurn CDBurn;
#else
typedef struct CDBurn CDBurn;
#endif /* __cplusplus */

#endif 	/* __CDBurn_FWD_DEFINED__ */


#ifndef __TaskbarList_FWD_DEFINED__
#define __TaskbarList_FWD_DEFINED__

#ifdef __cplusplus
typedef class TaskbarList TaskbarList;
#else
typedef struct TaskbarList TaskbarList;
#endif /* __cplusplus */

#endif 	/* __TaskbarList_FWD_DEFINED__ */


#ifndef __StartMenuPin_FWD_DEFINED__
#define __StartMenuPin_FWD_DEFINED__

#ifdef __cplusplus
typedef class StartMenuPin StartMenuPin;
#else
typedef struct StartMenuPin StartMenuPin;
#endif /* __cplusplus */

#endif 	/* __StartMenuPin_FWD_DEFINED__ */


#ifndef __WebWizardHost_FWD_DEFINED__
#define __WebWizardHost_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebWizardHost WebWizardHost;
#else
typedef struct WebWizardHost WebWizardHost;
#endif /* __cplusplus */

#endif 	/* __WebWizardHost_FWD_DEFINED__ */


#ifndef __PublishDropTarget_FWD_DEFINED__
#define __PublishDropTarget_FWD_DEFINED__

#ifdef __cplusplus
typedef class PublishDropTarget PublishDropTarget;
#else
typedef struct PublishDropTarget PublishDropTarget;
#endif /* __cplusplus */

#endif 	/* __PublishDropTarget_FWD_DEFINED__ */


#ifndef __PublishingWizard_FWD_DEFINED__
#define __PublishingWizard_FWD_DEFINED__

#ifdef __cplusplus
typedef class PublishingWizard PublishingWizard;
#else
typedef struct PublishingWizard PublishingWizard;
#endif /* __cplusplus */

#endif 	/* __PublishingWizard_FWD_DEFINED__ */


#ifndef __InternetPrintOrdering_FWD_DEFINED__
#define __InternetPrintOrdering_FWD_DEFINED__

#ifdef __cplusplus
typedef class InternetPrintOrdering InternetPrintOrdering;
#else
typedef struct InternetPrintOrdering InternetPrintOrdering;
#endif /* __cplusplus */

#endif 	/* __InternetPrintOrdering_FWD_DEFINED__ */


#ifndef __FolderViewHost_FWD_DEFINED__
#define __FolderViewHost_FWD_DEFINED__

#ifdef __cplusplus
typedef class FolderViewHost FolderViewHost;
#else
typedef struct FolderViewHost FolderViewHost;
#endif /* __cplusplus */

#endif 	/* __FolderViewHost_FWD_DEFINED__ */


#ifndef __ExplorerBrowser_FWD_DEFINED__
#define __ExplorerBrowser_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExplorerBrowser ExplorerBrowser;
#else
typedef struct ExplorerBrowser ExplorerBrowser;
#endif /* __cplusplus */

#endif 	/* __ExplorerBrowser_FWD_DEFINED__ */


#ifndef __ImageRecompress_FWD_DEFINED__
#define __ImageRecompress_FWD_DEFINED__

#ifdef __cplusplus
typedef class ImageRecompress ImageRecompress;
#else
typedef struct ImageRecompress ImageRecompress;
#endif /* __cplusplus */

#endif 	/* __ImageRecompress_FWD_DEFINED__ */


#ifndef __TrayBandSiteService_FWD_DEFINED__
#define __TrayBandSiteService_FWD_DEFINED__

#ifdef __cplusplus
typedef class TrayBandSiteService TrayBandSiteService;
#else
typedef struct TrayBandSiteService TrayBandSiteService;
#endif /* __cplusplus */

#endif 	/* __TrayBandSiteService_FWD_DEFINED__ */


#ifndef __TrayDeskBand_FWD_DEFINED__
#define __TrayDeskBand_FWD_DEFINED__

#ifdef __cplusplus
typedef class TrayDeskBand TrayDeskBand;
#else
typedef struct TrayDeskBand TrayDeskBand;
#endif /* __cplusplus */

#endif 	/* __TrayDeskBand_FWD_DEFINED__ */


#ifndef __AttachmentServices_FWD_DEFINED__
#define __AttachmentServices_FWD_DEFINED__

#ifdef __cplusplus
typedef class AttachmentServices AttachmentServices;
#else
typedef struct AttachmentServices AttachmentServices;
#endif /* __cplusplus */

#endif 	/* __AttachmentServices_FWD_DEFINED__ */


#ifndef __DocPropShellExtension_FWD_DEFINED__
#define __DocPropShellExtension_FWD_DEFINED__

#ifdef __cplusplus
typedef class DocPropShellExtension DocPropShellExtension;
#else
typedef struct DocPropShellExtension DocPropShellExtension;
#endif /* __cplusplus */

#endif 	/* __DocPropShellExtension_FWD_DEFINED__ */


#ifndef __ShellItem_FWD_DEFINED__
#define __ShellItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellItem ShellItem;
#else
typedef struct ShellItem ShellItem;
#endif /* __cplusplus */

#endif 	/* __ShellItem_FWD_DEFINED__ */


#ifndef __NamespaceWalker_FWD_DEFINED__
#define __NamespaceWalker_FWD_DEFINED__

#ifdef __cplusplus
typedef class NamespaceWalker NamespaceWalker;
#else
typedef struct NamespaceWalker NamespaceWalker;
#endif /* __cplusplus */

#endif 	/* __NamespaceWalker_FWD_DEFINED__ */


#ifndef __FileOperation_FWD_DEFINED__
#define __FileOperation_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileOperation FileOperation;
#else
typedef struct FileOperation FileOperation;
#endif /* __cplusplus */

#endif 	/* __FileOperation_FWD_DEFINED__ */


#ifndef __FileOpenDialog_FWD_DEFINED__
#define __FileOpenDialog_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileOpenDialog FileOpenDialog;
#else
typedef struct FileOpenDialog FileOpenDialog;
#endif /* __cplusplus */

#endif 	/* __FileOpenDialog_FWD_DEFINED__ */


#ifndef __FileSaveDialog_FWD_DEFINED__
#define __FileSaveDialog_FWD_DEFINED__

#ifdef __cplusplus
typedef class FileSaveDialog FileSaveDialog;
#else
typedef struct FileSaveDialog FileSaveDialog;
#endif /* __cplusplus */

#endif 	/* __FileSaveDialog_FWD_DEFINED__ */


#ifndef __KnownFolderManager_FWD_DEFINED__
#define __KnownFolderManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class KnownFolderManager KnownFolderManager;
#else
typedef struct KnownFolderManager KnownFolderManager;
#endif /* __cplusplus */

#endif 	/* __KnownFolderManager_FWD_DEFINED__ */


#ifndef __FSCopyHandler_FWD_DEFINED__
#define __FSCopyHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class FSCopyHandler FSCopyHandler;
#else
typedef struct FSCopyHandler FSCopyHandler;
#endif /* __cplusplus */

#endif 	/* __FSCopyHandler_FWD_DEFINED__ */


#ifndef __SharingConfigurationManager_FWD_DEFINED__
#define __SharingConfigurationManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SharingConfigurationManager SharingConfigurationManager;
#else
typedef struct SharingConfigurationManager SharingConfigurationManager;
#endif /* __cplusplus */

#endif 	/* __SharingConfigurationManager_FWD_DEFINED__ */


#ifndef __PreviousVersions_FWD_DEFINED__
#define __PreviousVersions_FWD_DEFINED__

#ifdef __cplusplus
typedef class PreviousVersions PreviousVersions;
#else
typedef struct PreviousVersions PreviousVersions;
#endif /* __cplusplus */

#endif 	/* __PreviousVersions_FWD_DEFINED__ */


#ifndef __NetworkConnections_FWD_DEFINED__
#define __NetworkConnections_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetworkConnections NetworkConnections;
#else
typedef struct NetworkConnections NetworkConnections;
#endif /* __cplusplus */

#endif 	/* __NetworkConnections_FWD_DEFINED__ */


#ifndef __NamespaceTreeControl_FWD_DEFINED__
#define __NamespaceTreeControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class NamespaceTreeControl NamespaceTreeControl;
#else
typedef struct NamespaceTreeControl NamespaceTreeControl;
#endif /* __cplusplus */

#endif 	/* __NamespaceTreeControl_FWD_DEFINED__ */


#ifndef __IENamespaceTreeControl_FWD_DEFINED__
#define __IENamespaceTreeControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class IENamespaceTreeControl IENamespaceTreeControl;
#else
typedef struct IENamespaceTreeControl IENamespaceTreeControl;
#endif /* __cplusplus */

#endif 	/* __IENamespaceTreeControl_FWD_DEFINED__ */


#ifndef __ScheduledTasks_FWD_DEFINED__
#define __ScheduledTasks_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScheduledTasks ScheduledTasks;
#else
typedef struct ScheduledTasks ScheduledTasks;
#endif /* __cplusplus */

#endif 	/* __ScheduledTasks_FWD_DEFINED__ */


#ifndef __ApplicationAssociationRegistration_FWD_DEFINED__
#define __ApplicationAssociationRegistration_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationAssociationRegistration ApplicationAssociationRegistration;
#else
typedef struct ApplicationAssociationRegistration ApplicationAssociationRegistration;
#endif /* __cplusplus */

#endif 	/* __ApplicationAssociationRegistration_FWD_DEFINED__ */


#ifndef __ApplicationAssociationRegistrationUI_FWD_DEFINED__
#define __ApplicationAssociationRegistrationUI_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationAssociationRegistrationUI ApplicationAssociationRegistrationUI;
#else
typedef struct ApplicationAssociationRegistrationUI ApplicationAssociationRegistrationUI;
#endif /* __cplusplus */

#endif 	/* __ApplicationAssociationRegistrationUI_FWD_DEFINED__ */


#ifndef __SearchFolderItemFactory_FWD_DEFINED__
#define __SearchFolderItemFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class SearchFolderItemFactory SearchFolderItemFactory;
#else
typedef struct SearchFolderItemFactory SearchFolderItemFactory;
#endif /* __cplusplus */

#endif 	/* __SearchFolderItemFactory_FWD_DEFINED__ */


#ifndef __OpenControlPanel_FWD_DEFINED__
#define __OpenControlPanel_FWD_DEFINED__

#ifdef __cplusplus
typedef class OpenControlPanel OpenControlPanel;
#else
typedef struct OpenControlPanel OpenControlPanel;
#endif /* __cplusplus */

#endif 	/* __OpenControlPanel_FWD_DEFINED__ */


#ifndef __ComputerInfoAdvise_FWD_DEFINED__
#define __ComputerInfoAdvise_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComputerInfoAdvise ComputerInfoAdvise;
#else
typedef struct ComputerInfoAdvise ComputerInfoAdvise;
#endif /* __cplusplus */

#endif 	/* __ComputerInfoAdvise_FWD_DEFINED__ */


#ifndef __NetworkExplorerFolder_FWD_DEFINED__
#define __NetworkExplorerFolder_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetworkExplorerFolder NetworkExplorerFolder;
#else
typedef struct NetworkExplorerFolder NetworkExplorerFolder;
#endif /* __cplusplus */

#endif 	/* __NetworkExplorerFolder_FWD_DEFINED__ */


#ifndef __IAssocHandlerInvoker_FWD_DEFINED__
#define __IAssocHandlerInvoker_FWD_DEFINED__
typedef interface IAssocHandlerInvoker IAssocHandlerInvoker;
#endif 	/* __IAssocHandlerInvoker_FWD_DEFINED__ */


#ifndef __IAssocHandler_FWD_DEFINED__
#define __IAssocHandler_FWD_DEFINED__
typedef interface IAssocHandler IAssocHandler;
#endif 	/* __IAssocHandler_FWD_DEFINED__ */


#ifndef __IEnumAssocHandlers_FWD_DEFINED__
#define __IEnumAssocHandlers_FWD_DEFINED__
typedef interface IEnumAssocHandlers IEnumAssocHandlers;
#endif 	/* __IEnumAssocHandlers_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "docobj.h"
#include "shtypes.h"
#include "comcat.h"
#include "propidl.h"
#include "prsht.h"
#include "propsys.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_shobjidl_0000_0000 */
/* [local] */ 

#include <sherrors.h>
#ifndef SHSTDAPI
#if defined(_SHELL32_)
#define SHSTDAPI          STDAPI
#define SHSTDAPI_(type)   STDAPI_(type)
#else
#define SHSTDAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHSTDAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#endif
#endif // SHSTDAPI

//===========================================================================
//
// IContextMenu interface
//
// [OverView]
//
//  The shell uses the IContextMenu interface in following three cases.
//
// case-1: The shell is loading context menu extensions.
//
//   When the user clicks the right mouse button on an item within the shell's
//  name space (i.g., file, directory, server, work-group, etc.), it creates
//  the default context menu for its type, then loads context menu extensions
//  that are registered for that type (and its base type) so that they can
//  add extra menu items. Those context menu extensions are registered at
//  HKCR\{ProgID}\shellex\ContextMenuHandlers.
//
// case-2: The shell is retrieving a context menu of sub-folders in extended
//   name-space.
//
//   When the explorer's name space is extended by name space extensions,
//  the shell calls their IShellFolder::GetUIObjectOf to get the IContextMenu
//  objects when it creates context menus for folders under those extended
//  name spaces.
//
// case-3: The shell is loading non-default drag and drop handler for directories.
//
//   When the user performed a non-default drag and drop onto one of file
//  system folders (i.e., directories), it loads shell extensions that are
//  registered at HKCR\{ProgID}\DragDropHandlers.
//
//
// [Member functions]
//
//
// IContextMenu::QueryContextMenu
//
//   This member function may insert one or more menuitems to the specified
//  menu (hmenu) at the specified location (indexMenu which is never be -1).
//  The IDs of those menuitem must be in the specified range (idCmdFirst and
//  idCmdLast). It returns the maximum menuitem ID offset (ushort) in the
//  'code' field (low word) of the scode.
//
//   The uFlags specify the context. It may have one or more of following
//  flags.
//
//  CMF_DEFAULTONLY: This flag is passed if the user is invoking the default
//   action (typically by double-clicking, case 1 and 2 only). Context menu
//   extensions (case 1) should not add any menu items, and returns S_OK.
//
//  CMF_VERBSONLY: The explorer passes this flag if it is constructing
//   a context menu for a short-cut object (case 1 and case 2 only). If this
//   flag is passed, it should not add any menu-items that is not appropriate
//   from a short-cut.
//    A good example is the Delete menuitem, which confuses the user
//   because it is not clear whether it deletes the link source item or the
//   link itself.
//
//  CMF_EXPLORER: The explorer passes this flag if it has the left-side pane
//   (case 1 and 2 only). Context menu extensions should ignore this flag.
//
//   High word (16-bit) are reserved for context specific communications
//  and the rest of flags (13-bit) are reserved by the system.
//
//
// IContextMenu::InvokeCommand
//
//   This member is called when the user has selected one of menuitems that
//  are inserted by previous QueryContextMenu member. In this case, the
//  LOWORD(lpici->lpVerb) contains the menuitem ID offset (menuitem ID -
//  idCmdFirst).
//
//   This member function may also be called programmatically. In such a case,
//  lpici->lpVerb specifies the canonical name of the command to be invoked,
//  which is typically retrieved by GetCommandString member previously.
//
//  Parameters in lpci:
//    cbSize -- Specifies the size of this structure (sizeof(*lpci))
//    hwnd   -- Specifies the owner window for any message/dialog box.
//    fMask  -- Specifies whether or not dwHotkey/hIcon paramter is valid.
//    lpVerb -- Specifies the command to be invoked.
//    lpParameters -- Parameters (optional)
//    lpDirectory  -- Working directory (optional)
//    nShow -- Specifies the flag to be passed to ShowWindow (SW_*).
//    dwHotKey -- Hot key to be assigned to the app after invoked (optional).
//    hIcon -- Specifies the icon (optional).
//    hMonitor -- Specifies the default monitor (optional).
//
//
// IContextMenu::GetCommandString
//
//   This member function is called by the explorer either to get the
//  canonical (language independent) command name (uFlags == GCS_VERB) or
//  the help text ((uFlags & GCS_HELPTEXT) != 0) for the specified command.
//  The retrieved canonical string may be passed to its InvokeCommand
//  member function to invoke a command programmatically. The explorer
//  displays the help texts in its status bar; therefore, the length of
//  the help text should be reasonably short (<40 characters).
//
//  Parameters:
//   idCmd -- Specifies menuitem ID offset (from idCmdFirst)
//   uFlags -- Either GCS_VERB or GCS_HELPTEXT
//   pwReserved -- Reserved (must pass NULL when calling, must ignore when called)
//   pszName -- Specifies the string buffer.
//   cchMax -- Specifies the size of the string buffer.
//
//===========================================================================

// QueryContextMenu uFlags
#define CMF_NORMAL              0x00000000
#define CMF_DEFAULTONLY         0x00000001
#define CMF_VERBSONLY           0x00000002
#define CMF_EXPLORE             0x00000004
#define CMF_NOVERBS             0x00000008
#define CMF_CANRENAME           0x00000010
#define CMF_NODEFAULT           0x00000020
#if (NTDDI_VERSION < NTDDI_LONGHORN)
#define CMF_INCLUDESTATIC       0x00000040
#endif
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
#define CMF_ITEMMENU            0x00000080
#endif
#define CMF_EXTENDEDVERBS       0x00000100
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
#define CMF_DISABLEDVERBS       0x00000200
#endif
#define CMF_RESERVED            0xffff0000

// GetCommandString uFlags
#define GCS_VERBA        0x00000000     // canonical verb
#define GCS_HELPTEXTA    0x00000001     // help text (for status bar)
#define GCS_VALIDATEA    0x00000002     // validate command exists
#define GCS_VERBW        0x00000004     // canonical verb (unicode)
#define GCS_HELPTEXTW    0x00000005     // help text (unicode version)
#define GCS_VALIDATEW    0x00000006     // validate command exists (unicode)
#define GCS_VERBICONW    0x00000014     // icon string (unicode)
#define GCS_UNICODE      0x00000004     // for bit testing - Unicode string

#ifdef UNICODE
#define GCS_VERB        GCS_VERBW
#define GCS_HELPTEXT    GCS_HELPTEXTW
#define GCS_VALIDATE    GCS_VALIDATEW
#else
#define GCS_VERB        GCS_VERBA
#define GCS_HELPTEXT    GCS_HELPTEXTA
#define GCS_VALIDATE    GCS_VALIDATEA
#endif

#define CMDSTR_NEWFOLDERA   "NewFolder"
#define CMDSTR_VIEWLISTA    "ViewList"
#define CMDSTR_VIEWDETAILSA "ViewDetails"
#define CMDSTR_NEWFOLDERW   L"NewFolder"
#define CMDSTR_VIEWLISTW    L"ViewList"
#define CMDSTR_VIEWDETAILSW L"ViewDetails"

#ifdef UNICODE
#define CMDSTR_NEWFOLDER    CMDSTR_NEWFOLDERW
#define CMDSTR_VIEWLIST     CMDSTR_VIEWLISTW
#define CMDSTR_VIEWDETAILS  CMDSTR_VIEWDETAILSW
#else
#define CMDSTR_NEWFOLDER    CMDSTR_NEWFOLDERA
#define CMDSTR_VIEWLIST     CMDSTR_VIEWLISTA
#define CMDSTR_VIEWDETAILS  CMDSTR_VIEWDETAILSA
#endif

#define CMIC_MASK_HOTKEY        SEE_MASK_HOTKEY
#define CMIC_MASK_ICON          SEE_MASK_ICON
#define CMIC_MASK_FLAG_NO_UI    SEE_MASK_FLAG_NO_UI
#define CMIC_MASK_UNICODE       SEE_MASK_UNICODE
#define CMIC_MASK_NO_CONSOLE    SEE_MASK_NO_CONSOLE
#if (NTDDI_VERSION < NTDDI_LONGHORN)
#define CMIC_MASK_HASLINKNAME   SEE_MASK_HASLINKNAME
#define CMIC_MASK_HASTITLE      SEE_MASK_HASTITLE
#endif  // NTDDI_LONGHORN
#define CMIC_MASK_FLAG_SEP_VDM  SEE_MASK_FLAG_SEPVDM
#define CMIC_MASK_ASYNCOK       SEE_MASK_ASYNCOK
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
#define CMIC_MASK_NOASYNC       SEE_MASK_NOASYNC
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)
#define CMIC_MASK_SHIFT_DOWN    0x10000000
#define CMIC_MASK_CONTROL_DOWN  0x40000000
#endif  // _WIN32_IE_IE501
#if (_WIN32_IE >= 0x0560)
#define CMIC_MASK_FLAG_LOG_USAGE SEE_MASK_FLAG_LOG_USAGE
#define CMIC_MASK_NOZONECHECKS  SEE_MASK_NOZONECHECKS
#endif // (_WIN32_IE >= 0x560)

#if (_WIN32_IE >= _WIN32_IE_IE40)
#define CMIC_MASK_PTINVOKE      0x20000000
#endif  // _WIN32_IE_IE40

#include <pshpack8.h>

typedef struct _CMINVOKECOMMANDINFO
    {
    DWORD cbSize;
    DWORD fMask;
    HWND hwnd;
    LPCSTR lpVerb;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    DWORD dwHotKey;
    HANDLE hIcon;
    } 	CMINVOKECOMMANDINFO;

typedef CMINVOKECOMMANDINFO *LPCMINVOKECOMMANDINFO;

#if (_WIN32_IE >= _WIN32_IE_IE40)
typedef struct _CMINVOKECOMMANDINFOEX
    {
    DWORD cbSize;
    DWORD fMask;
    HWND hwnd;
    LPCSTR lpVerb;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    DWORD dwHotKey;
    HANDLE hIcon;
    LPCSTR lpTitle;
    LPCWSTR lpVerbW;
    LPCWSTR lpParametersW;
    LPCWSTR lpDirectoryW;
    LPCWSTR lpTitleW;
    POINT ptInvoke;
    } 	CMINVOKECOMMANDINFOEX;

#else
typedef struct _PRE_IE4_CMINVOKECOMMANDINFOEX
{
    DWORD cbSize;            // must be sizeof(CMINVOKECOMMANDINFOEX)
    DWORD fMask;             // any combination of CMIC_MASK_*
    HWND hwnd;               // might be NULL (indicating no owner window)
    LPCSTR lpVerb;           // either a string or MAKEINTRESOURCE(idOffset)
    LPCSTR lpParameters;     // might be NULL (indicating no parameter)
    LPCSTR lpDirectory;      // might be NULL (indicating no specific directory)
    int nShow;               // one of SW_ values for ShowWindow() API
    DWORD dwHotKey;
    HANDLE hIcon;
    LPCSTR lpTitle;         // For CreateProcess-StartupInfo.lpTitle
    LPCWSTR lpVerbW;        // Unicode verb (for those who can use it)
    LPCWSTR lpParametersW;  // Unicode parameters (for those who can use it)
    LPCWSTR lpDirectoryW;   // Unicode directory (for those who can use it)
    LPCWSTR lpTitleW;       // Unicode title (for those who can use it)
} CMINVOKECOMMANDINFOEX;
#endif   // _WIN32_IE_IE40
typedef CMINVOKECOMMANDINFOEX *LPCMINVOKECOMMANDINFOEX;

typedef const CMINVOKECOMMANDINFOEX *PCCMINVOKECOMMANDINFOEX;

#include <poppack.h>


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0000_v0_0_s_ifspec;

#ifndef __IContextMenu_INTERFACE_DEFINED__
#define __IContextMenu_INTERFACE_DEFINED__

/* interface IContextMenu */
/* [object][unique][uuid][local] */ 


EXTERN_C const IID IID_IContextMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214e4-0000-0000-c000-000000000046")
    IContextMenu : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryContextMenu( 
            /* [in] */ 
            __in  HMENU hmenu,
            /* [in] */ 
            __in  UINT indexMenu,
            /* [in] */ 
            __in  UINT idCmdFirst,
            /* [in] */ 
            __in  UINT idCmdLast,
            /* [in] */ 
            __in  UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeCommand( 
            /* [in] */ 
            __in  CMINVOKECOMMANDINFO *pici) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCommandString( 
            /* [in] */ 
            __in  UINT_PTR idCmd,
            /* [in] */ 
            __in  UINT uType,
            /* [in] */ 
            __reserved  UINT *pReserved,
            /* [out] */ 
            __out_awcount(!(uType & GCS_UNICODE), cchMax)  LPSTR pszName,
            /* [in] */ 
            __in  UINT cchMax) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContextMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenu * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenu * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenu * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContextMenu )( 
            IContextMenu * This,
            /* [in] */ 
            __in  HMENU hmenu,
            /* [in] */ 
            __in  UINT indexMenu,
            /* [in] */ 
            __in  UINT idCmdFirst,
            /* [in] */ 
            __in  UINT idCmdLast,
            /* [in] */ 
            __in  UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )( 
            IContextMenu * This,
            /* [in] */ 
            __in  CMINVOKECOMMANDINFO *pici);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommandString )( 
            IContextMenu * This,
            /* [in] */ 
            __in  UINT_PTR idCmd,
            /* [in] */ 
            __in  UINT uType,
            /* [in] */ 
            __reserved  UINT *pReserved,
            /* [out] */ 
            __out_awcount(!(uType & GCS_UNICODE), cchMax)  LPSTR pszName,
            /* [in] */ 
            __in  UINT cchMax);
        
        END_INTERFACE
    } IContextMenuVtbl;

    interface IContextMenu
    {
        CONST_VTBL struct IContextMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenu_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenu_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenu_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenu_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)	\
    ( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) ) 

#define IContextMenu_InvokeCommand(This,pici)	\
    ( (This)->lpVtbl -> InvokeCommand(This,pici) ) 

#define IContextMenu_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)	\
    ( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenu_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0001 */
/* [local] */ 

typedef IContextMenu *LPCONTEXTMENU;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0001_v0_0_s_ifspec;

#ifndef __IContextMenu2_INTERFACE_DEFINED__
#define __IContextMenu2_INTERFACE_DEFINED__

/* interface IContextMenu2 */
/* [object][unique][uuid][local] */ 


EXTERN_C const IID IID_IContextMenu2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214f4-0000-0000-c000-000000000046")
    IContextMenu2 : public IContextMenu
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleMenuMsg( 
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContextMenu2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenu2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenu2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenu2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContextMenu )( 
            IContextMenu2 * This,
            /* [in] */ 
            __in  HMENU hmenu,
            /* [in] */ 
            __in  UINT indexMenu,
            /* [in] */ 
            __in  UINT idCmdFirst,
            /* [in] */ 
            __in  UINT idCmdLast,
            /* [in] */ 
            __in  UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )( 
            IContextMenu2 * This,
            /* [in] */ 
            __in  CMINVOKECOMMANDINFO *pici);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommandString )( 
            IContextMenu2 * This,
            /* [in] */ 
            __in  UINT_PTR idCmd,
            /* [in] */ 
            __in  UINT uType,
            /* [in] */ 
            __reserved  UINT *pReserved,
            /* [out] */ 
            __out_awcount(!(uType & GCS_UNICODE), cchMax)  LPSTR pszName,
            /* [in] */ 
            __in  UINT cchMax);
        
        HRESULT ( STDMETHODCALLTYPE *HandleMenuMsg )( 
            IContextMenu2 * This,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam);
        
        END_INTERFACE
    } IContextMenu2Vtbl;

    interface IContextMenu2
    {
        CONST_VTBL struct IContextMenu2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenu2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenu2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenu2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenu2_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)	\
    ( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) ) 

#define IContextMenu2_InvokeCommand(This,pici)	\
    ( (This)->lpVtbl -> InvokeCommand(This,pici) ) 

#define IContextMenu2_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)	\
    ( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) ) 


#define IContextMenu2_HandleMenuMsg(This,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> HandleMenuMsg(This,uMsg,wParam,lParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenu2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0002 */
/* [local] */ 

typedef IContextMenu2 *LPCONTEXTMENU2;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0002_v0_0_s_ifspec;

#ifndef __IContextMenu3_INTERFACE_DEFINED__
#define __IContextMenu3_INTERFACE_DEFINED__

/* interface IContextMenu3 */
/* [object][unique][uuid][local] */ 


EXTERN_C const IID IID_IContextMenu3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCFCE0A0-EC17-11d0-8D10-00A0C90F2719")
    IContextMenu3 : public IContextMenu2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleMenuMsg2( 
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam,
            /* [out] */ 
            __out_opt  LRESULT *plResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContextMenu3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenu3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenu3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenu3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContextMenu )( 
            IContextMenu3 * This,
            /* [in] */ 
            __in  HMENU hmenu,
            /* [in] */ 
            __in  UINT indexMenu,
            /* [in] */ 
            __in  UINT idCmdFirst,
            /* [in] */ 
            __in  UINT idCmdLast,
            /* [in] */ 
            __in  UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )( 
            IContextMenu3 * This,
            /* [in] */ 
            __in  CMINVOKECOMMANDINFO *pici);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommandString )( 
            IContextMenu3 * This,
            /* [in] */ 
            __in  UINT_PTR idCmd,
            /* [in] */ 
            __in  UINT uType,
            /* [in] */ 
            __reserved  UINT *pReserved,
            /* [out] */ 
            __out_awcount(!(uType & GCS_UNICODE), cchMax)  LPSTR pszName,
            /* [in] */ 
            __in  UINT cchMax);
        
        HRESULT ( STDMETHODCALLTYPE *HandleMenuMsg )( 
            IContextMenu3 * This,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *HandleMenuMsg2 )( 
            IContextMenu3 * This,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam,
            /* [out] */ 
            __out_opt  LRESULT *plResult);
        
        END_INTERFACE
    } IContextMenu3Vtbl;

    interface IContextMenu3
    {
        CONST_VTBL struct IContextMenu3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenu3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenu3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenu3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenu3_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)	\
    ( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) ) 

#define IContextMenu3_InvokeCommand(This,pici)	\
    ( (This)->lpVtbl -> InvokeCommand(This,pici) ) 

#define IContextMenu3_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)	\
    ( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) ) 


#define IContextMenu3_HandleMenuMsg(This,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> HandleMenuMsg(This,uMsg,wParam,lParam) ) 


#define IContextMenu3_HandleMenuMsg2(This,uMsg,wParam,lParam,plResult)	\
    ( (This)->lpVtbl -> HandleMenuMsg2(This,uMsg,wParam,lParam,plResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenu3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0003 */
/* [local] */ 

typedef IContextMenu3 *LPCONTEXTMENU3;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0003_v0_0_s_ifspec;

#ifndef __IPersistFolder_INTERFACE_DEFINED__
#define __IPersistFolder_INTERFACE_DEFINED__

/* interface IPersistFolder */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPersistFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214EA-0000-0000-C000-000000000046")
    IPersistFolder : public IPersist
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPersistFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPersistFolder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPersistFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPersistFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IPersistFolder * This,
            /* [out] */ __RPC__out CLSID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPersistFolder * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        END_INTERFACE
    } IPersistFolderVtbl;

    interface IPersistFolder
    {
        CONST_VTBL struct IPersistFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistFolder_GetClassID(This,pClassID)	\
    ( (This)->lpVtbl -> GetClassID(This,pClassID) ) 


#define IPersistFolder_Initialize(This,pidl)	\
    ( (This)->lpVtbl -> Initialize(This,pidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0004 */
/* [local] */ 

typedef IPersistFolder *LPPERSISTFOLDER;

#if (_WIN32_IE >= 0x0400)
#define IRTIR_TASK_NOT_RUNNING   0
#define IRTIR_TASK_RUNNING       1
#define IRTIR_TASK_SUSPENDED     2
#define IRTIR_TASK_PENDING       3
#define IRTIR_TASK_FINISHED      4


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0004_v0_0_s_ifspec;

#ifndef __IRunnableTask_INTERFACE_DEFINED__
#define __IRunnableTask_INTERFACE_DEFINED__

/* interface IRunnableTask */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IRunnableTask;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85788d00-6807-11d0-b810-00c04fd706ec")
    IRunnableTask : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Kill( 
            /* [in] */ 
            __in  BOOL bWait) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Suspend( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual ULONG STDMETHODCALLTYPE IsRunning( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRunnableTaskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRunnableTask * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRunnableTask * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRunnableTask * This);
        
        HRESULT ( STDMETHODCALLTYPE *Run )( 
            IRunnableTask * This);
        
        HRESULT ( STDMETHODCALLTYPE *Kill )( 
            IRunnableTask * This,
            /* [in] */ 
            __in  BOOL bWait);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            IRunnableTask * This);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IRunnableTask * This);
        
        ULONG ( STDMETHODCALLTYPE *IsRunning )( 
            IRunnableTask * This);
        
        END_INTERFACE
    } IRunnableTaskVtbl;

    interface IRunnableTask
    {
        CONST_VTBL struct IRunnableTaskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRunnableTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRunnableTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRunnableTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRunnableTask_Run(This)	\
    ( (This)->lpVtbl -> Run(This) ) 

#define IRunnableTask_Kill(This,bWait)	\
    ( (This)->lpVtbl -> Kill(This,bWait) ) 

#define IRunnableTask_Suspend(This)	\
    ( (This)->lpVtbl -> Suspend(This) ) 

#define IRunnableTask_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IRunnableTask_IsRunning(This)	\
    ( (This)->lpVtbl -> IsRunning(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRunnableTask_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0005 */
/* [local] */ 

#define TOID_NULL                    GUID_NULL
#define ITSAT_DEFAULT_LPARAM         ((DWORD_PTR)-1)
#define ITSAT_DEFAULT_PRIORITY       0x10000000
#define ITSAT_MAX_PRIORITY           0x7fffffff
#define ITSAT_MIN_PRIORITY           0x00000000
#define ITSSFLAG_COMPLETE_ON_DESTROY 0x0000 // wait for the current task to complete before deleting the scheduler
#define ITSSFLAG_KILL_ON_DESTROY     0x0001 // kill the current task (if there is one) when the task scheduler is deleted
#define ITSSFLAG_FLAGS_MASK          0x0003
#define ITSS_THREAD_DESTROY_DEFAULT_TIMEOUT  (10*1000)       // default milliseconds until a sleeping worker thread is released
#define ITSS_THREAD_TERMINATE_TIMEOUT        (INFINITE)      // set sleeping worker threads to never be released
#define ITSS_THREAD_TIMEOUT_NO_CHANGE        (INFINITE - 1)  // no change to the thread timeout


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0005_v0_0_s_ifspec;

#ifndef __IShellTaskScheduler_INTERFACE_DEFINED__
#define __IShellTaskScheduler_INTERFACE_DEFINED__

/* interface IShellTaskScheduler */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IShellTaskScheduler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6CCB7BE0-6807-11d0-B810-00C04FD706EC")
    IShellTaskScheduler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTask( 
            /* [in] */ 
            __in  IRunnableTask *prt,
            /* [in] */ 
            __in  REFTASKOWNERID rtoid,
            /* [in] */ 
            __in  DWORD_PTR lParam,
            /* [in] */ 
            __in  DWORD dwPriority) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveTasks( 
            /* [in] */ 
            __in  REFTASKOWNERID rtoid,
            /* [in] */ 
            __in  DWORD_PTR lParam,
            /* [in] */ 
            __in  BOOL bWaitIfRunning) = 0;
        
        virtual UINT STDMETHODCALLTYPE CountTasks( 
            /* [in] */ 
            __in  REFTASKOWNERID rtoid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Status( 
            /* [in] */ 
            __in  DWORD dwReleaseStatus,
            /* [in] */ 
            __in  DWORD dwThreadTimeout) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellTaskSchedulerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellTaskScheduler * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellTaskScheduler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellTaskScheduler * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            IShellTaskScheduler * This,
            /* [in] */ 
            __in  IRunnableTask *prt,
            /* [in] */ 
            __in  REFTASKOWNERID rtoid,
            /* [in] */ 
            __in  DWORD_PTR lParam,
            /* [in] */ 
            __in  DWORD dwPriority);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveTasks )( 
            IShellTaskScheduler * This,
            /* [in] */ 
            __in  REFTASKOWNERID rtoid,
            /* [in] */ 
            __in  DWORD_PTR lParam,
            /* [in] */ 
            __in  BOOL bWaitIfRunning);
        
        UINT ( STDMETHODCALLTYPE *CountTasks )( 
            IShellTaskScheduler * This,
            /* [in] */ 
            __in  REFTASKOWNERID rtoid);
        
        HRESULT ( STDMETHODCALLTYPE *Status )( 
            IShellTaskScheduler * This,
            /* [in] */ 
            __in  DWORD dwReleaseStatus,
            /* [in] */ 
            __in  DWORD dwThreadTimeout);
        
        END_INTERFACE
    } IShellTaskSchedulerVtbl;

    interface IShellTaskScheduler
    {
        CONST_VTBL struct IShellTaskSchedulerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellTaskScheduler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellTaskScheduler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellTaskScheduler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellTaskScheduler_AddTask(This,prt,rtoid,lParam,dwPriority)	\
    ( (This)->lpVtbl -> AddTask(This,prt,rtoid,lParam,dwPriority) ) 

#define IShellTaskScheduler_RemoveTasks(This,rtoid,lParam,bWaitIfRunning)	\
    ( (This)->lpVtbl -> RemoveTasks(This,rtoid,lParam,bWaitIfRunning) ) 

#define IShellTaskScheduler_CountTasks(This,rtoid)	\
    ( (This)->lpVtbl -> CountTasks(This,rtoid) ) 

#define IShellTaskScheduler_Status(This,dwReleaseStatus,dwThreadTimeout)	\
    ( (This)->lpVtbl -> Status(This,dwReleaseStatus,dwThreadTimeout) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellTaskScheduler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0006 */
/* [local] */ 

#define SID_ShellTaskScheduler IID_IShellTaskScheduler


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0006_v0_0_s_ifspec;

#ifndef __IPersistFolder2_INTERFACE_DEFINED__
#define __IPersistFolder2_INTERFACE_DEFINED__

/* interface IPersistFolder2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPersistFolder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1AC3D9F0-175C-11d1-95BE-00609797EA4F")
    IPersistFolder2 : public IPersistFolder
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurFolder( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPersistFolder2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPersistFolder2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPersistFolder2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPersistFolder2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IPersistFolder2 * This,
            /* [out] */ __RPC__out CLSID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPersistFolder2 * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurFolder )( 
            IPersistFolder2 * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        END_INTERFACE
    } IPersistFolder2Vtbl;

    interface IPersistFolder2
    {
        CONST_VTBL struct IPersistFolder2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistFolder2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistFolder2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistFolder2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistFolder2_GetClassID(This,pClassID)	\
    ( (This)->lpVtbl -> GetClassID(This,pClassID) ) 


#define IPersistFolder2_Initialize(This,pidl)	\
    ( (This)->lpVtbl -> Initialize(This,pidl) ) 


#define IPersistFolder2_GetCurFolder(This,ppidl)	\
    ( (This)->lpVtbl -> GetCurFolder(This,ppidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistFolder2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0007 */
/* [local] */ 

#endif
#if (_WIN32_IE >= 0x0500)
#define CSIDL_FLAG_PFTI_TRACKTARGET CSIDL_FLAG_DONT_VERIFY
#include <pshpack8.h>
typedef struct _PERSIST_FOLDER_TARGET_INFO
    {
    PIDLIST_ABSOLUTE pidlTargetFolder;
    WCHAR szTargetParsingName[ 260 ];
    WCHAR szNetworkProvider[ 260 ];
    DWORD dwAttributes;
    int csidl;
    } 	PERSIST_FOLDER_TARGET_INFO;

#include <poppack.h>


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0007_v0_0_s_ifspec;

#ifndef __IPersistFolder3_INTERFACE_DEFINED__
#define __IPersistFolder3_INTERFACE_DEFINED__

/* interface IPersistFolder3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPersistFolder3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CEF04FDF-FE72-11d2-87A5-00C04F6837CF")
    IPersistFolder3 : public IPersistFolder2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeEx( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlRoot,
            /* [unique][in] */ __RPC__in_opt const PERSIST_FOLDER_TARGET_INFO *ppfti) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderTargetInfo( 
            /* [out] */ __RPC__out PERSIST_FOLDER_TARGET_INFO *ppfti) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPersistFolder3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPersistFolder3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPersistFolder3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPersistFolder3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IPersistFolder3 * This,
            /* [out] */ __RPC__out CLSID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPersistFolder3 * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurFolder )( 
            IPersistFolder3 * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeEx )( 
            IPersistFolder3 * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlRoot,
            /* [unique][in] */ __RPC__in_opt const PERSIST_FOLDER_TARGET_INFO *ppfti);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderTargetInfo )( 
            IPersistFolder3 * This,
            /* [out] */ __RPC__out PERSIST_FOLDER_TARGET_INFO *ppfti);
        
        END_INTERFACE
    } IPersistFolder3Vtbl;

    interface IPersistFolder3
    {
        CONST_VTBL struct IPersistFolder3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistFolder3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistFolder3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistFolder3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistFolder3_GetClassID(This,pClassID)	\
    ( (This)->lpVtbl -> GetClassID(This,pClassID) ) 


#define IPersistFolder3_Initialize(This,pidl)	\
    ( (This)->lpVtbl -> Initialize(This,pidl) ) 


#define IPersistFolder3_GetCurFolder(This,ppidl)	\
    ( (This)->lpVtbl -> GetCurFolder(This,ppidl) ) 


#define IPersistFolder3_InitializeEx(This,pbc,pidlRoot,ppfti)	\
    ( (This)->lpVtbl -> InitializeEx(This,pbc,pidlRoot,ppfti) ) 

#define IPersistFolder3_GetFolderTargetInfo(This,ppfti)	\
    ( (This)->lpVtbl -> GetFolderTargetInfo(This,ppfti) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistFolder3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0008 */
/* [local] */ 

#endif
#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0008_v0_0_s_ifspec;

#ifndef __IPersistIDList_INTERFACE_DEFINED__
#define __IPersistIDList_INTERFACE_DEFINED__

/* interface IPersistIDList */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPersistIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1079acfc-29bd-11d3-8e0d-00c04f6837d5")
    IPersistIDList : public IPersist
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetIDList( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPersistIDListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPersistIDList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPersistIDList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPersistIDList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IPersistIDList * This,
            /* [out] */ __RPC__out CLSID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *SetIDList )( 
            IPersistIDList * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            IPersistIDList * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        END_INTERFACE
    } IPersistIDListVtbl;

    interface IPersistIDList
    {
        CONST_VTBL struct IPersistIDListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistIDList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistIDList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistIDList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistIDList_GetClassID(This,pClassID)	\
    ( (This)->lpVtbl -> GetClassID(This,pClassID) ) 


#define IPersistIDList_SetIDList(This,pidl)	\
    ( (This)->lpVtbl -> SetIDList(This,pidl) ) 

#define IPersistIDList_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistIDList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0009 */
/* [local] */ 

#endif  // NTDDI_WINXP|| (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0009_v0_0_s_ifspec;

#ifndef __IEnumIDList_INTERFACE_DEFINED__
#define __IEnumIDList_INTERFACE_DEFINED__

/* interface IEnumIDList */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214F2-0000-0000-C000-000000000046")
    IEnumIDList : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ 
            __in  ULONG celt,
            /* [length_is][size_is][out] */ 
            __out_ecount_part(celt, *pceltFetched)  PITEMID_CHILD *rgelt,
            /* [out] */ 
            __out_opt  ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumIDListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumIDList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumIDList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumIDList * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumIDList * This,
            /* [in] */ 
            __in  ULONG celt,
            /* [length_is][size_is][out] */ 
            __out_ecount_part(celt, *pceltFetched)  PITEMID_CHILD *rgelt,
            /* [out] */ 
            __out_opt  ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumIDList * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumIDList * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumIDList * This,
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenum);
        
        END_INTERFACE
    } IEnumIDListVtbl;

    interface IEnumIDList
    {
        CONST_VTBL struct IEnumIDListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumIDList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumIDList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumIDList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumIDList_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumIDList_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumIDList_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumIDList_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumIDList_RemoteNext_Proxy( 
    IEnumIDList * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) PITEMID_CHILD *rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);


void __RPC_STUB IEnumIDList_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumIDList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0010 */
/* [local] */ 

typedef IEnumIDList *LPENUMIDLIST;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0010_v0_0_s_ifspec;

#ifndef __IEnumFullIDList_INTERFACE_DEFINED__
#define __IEnumFullIDList_INTERFACE_DEFINED__

/* interface IEnumFullIDList */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumFullIDList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d0191542-7954-4908-bc06-b2360bbe45ba")
    IEnumFullIDList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) PIDLIST_ABSOLUTE *rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumFullIDList **ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumFullIDListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumFullIDList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumFullIDList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumFullIDList * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumFullIDList * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) PIDLIST_ABSOLUTE *rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumFullIDList * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumFullIDList * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumFullIDList * This,
            /* [out] */ __RPC__deref_out_opt IEnumFullIDList **ppenum);
        
        END_INTERFACE
    } IEnumFullIDListVtbl;

    interface IEnumFullIDList
    {
        CONST_VTBL struct IEnumFullIDListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumFullIDList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumFullIDList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumFullIDList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumFullIDList_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumFullIDList_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumFullIDList_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumFullIDList_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumFullIDList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0011 */
/* [local] */ 

typedef 
enum tagSHGDN
    {	SHGDN_NORMAL	= 0,
	SHGDN_INFOLDER	= 0x1,
	SHGDN_FOREDITING	= 0x1000,
	SHGDN_FORADDRESSBAR	= 0x4000,
	SHGDN_FORPARSING	= 0x8000
    } 	SHGNO;

typedef DWORD SHGDNF;

typedef 
enum tagSHCONTF
    {	SHCONTF_FOLDERS	= 0x20,
	SHCONTF_NONFOLDERS	= 0x40,
	SHCONTF_INCLUDEHIDDEN	= 0x80,
	SHCONTF_INIT_ON_FIRST_NEXT	= 0x100,
	SHCONTF_NETPRINTERSRCH	= 0x200,
	SHCONTF_SHAREABLE	= 0x400,
	SHCONTF_STORAGE	= 0x800,
	SHCONTF_FASTITEMS	= 0x2000,
	SHCONTF_FLATLIST	= 0x4000,
	SHCONTF_ENABLE_ASYNC	= 0x8000
    } 	SHCONT;

typedef DWORD SHCONTF;

#define SHCIDS_ALLFIELDS        0x80000000L
#define SHCIDS_CANONICALONLY    0x10000000L
#define SHCIDS_BITMASK          0xFFFF0000L
#define SHCIDS_COLUMNMASK       0x0000FFFFL
#define SFGAO_CANCOPY           DROPEFFECT_COPY // Objects can be copied    (0x1)
#define SFGAO_CANMOVE           DROPEFFECT_MOVE // Objects can be moved     (0x2)
#define SFGAO_CANLINK           DROPEFFECT_LINK // Objects can be linked    (0x4)
#define SFGAO_STORAGE           0x00000008L     // supports BindToObject(IID_IStorage)
#define SFGAO_CANRENAME         0x00000010L     // Objects can be renamed
#define SFGAO_CANDELETE         0x00000020L     // Objects can be deleted
#define SFGAO_HASPROPSHEET      0x00000040L     // Objects have property sheets
#define SFGAO_DROPTARGET        0x00000100L     // Objects are drop target
#define SFGAO_CAPABILITYMASK    0x00000177L
#define SFGAO_ENCRYPTED         0x00002000L     // Object is encrypted (use alt color)
#define SFGAO_ISSLOW            0x00004000L     // 'Slow' object
#define SFGAO_GHOSTED           0x00008000L     // Ghosted icon
#define SFGAO_LINK              0x00010000L     // Shortcut (link)
#define SFGAO_SHARE             0x00020000L     // Shared
#define SFGAO_READONLY          0x00040000L     // Read-only
#define SFGAO_HIDDEN            0x00080000L     // Hidden object
#define SFGAO_DISPLAYATTRMASK   0x000FC000L
#define SFGAO_FILESYSANCESTOR   0x10000000L     // May contain children with SFGAO_FILESYSTEM
#define SFGAO_FOLDER            0x20000000L     // Support BindToObject(IID_IShellFolder)
#define SFGAO_FILESYSTEM        0x40000000L     // Is a win32 file system object (file/folder/root)
#define SFGAO_HASSUBFOLDER      0x80000000L     // May contain children with SFGAO_FOLDER (may be slow)
#define SFGAO_CONTENTSMASK      0x80000000L
#define SFGAO_VALIDATE          0x01000000L     // Invalidate cached information (may be slow)
#define SFGAO_REMOVABLE         0x02000000L     // Is this removeable media?
#define SFGAO_COMPRESSED        0x04000000L     // Object is compressed (use alt color)
#define SFGAO_BROWSABLE         0x08000000L     // Supports IShellFolder, but only implements CreateViewObject() (non-folder view)
#define SFGAO_NONENUMERATED     0x00100000L     // Is a non-enumerated object (should be hidden)
#define SFGAO_NEWCONTENT        0x00200000L     // Should show bold in explorer tree
#define SFGAO_CANMONIKER        0x00400000L     // Obsolete
#define SFGAO_HASSTORAGE        0x00400000L     // Obsolete
#define SFGAO_STREAM            0x00400000L     // Supports BindToObject(IID_IStream)
#define SFGAO_STORAGEANCESTOR   0x00800000L     // May contain children with SFGAO_STORAGE or SFGAO_STREAM
#define SFGAO_STORAGECAPMASK    0x70C50008L     // For determining storage capabilities, ie for open/save semantics
#define SFGAO_PKEYSFGAOMASK     0x81044010L     // Attributes that are masked out for PKEY_SFGAOFlags because they are considered to cause slow calculations or lack context (SFGAO_VALIDATE | SFGAO_ISSLOW | SFGAO_HASSUBFOLDER and others)
typedef ULONG SFGAOF;

#define STR_BIND_FORCE_FOLDER_SHORTCUT_RESOLVE   L"Force Folder Shortcut Resolve"
#define STR_AVOID_DRIVE_RESTRICTION_POLICY   L"Avoid Drive Restriction Policy"
#define STR_AVOID_DRIVE_RESTRICTION_POLICY   L"Avoid Drive Restriction Policy"
#define STR_SKIP_BINDING_CLSID      L"Skip Binding CLSID"
#define STR_PARSE_PREFER_FOLDER_BROWSING     L"Parse Prefer Folder Browsing"
#define STR_DONT_PARSE_RELATIVE              L"Don't Parse Relative"
#define STR_PARSE_TRANSLATE_ALIASES          L"Parse Translate Aliases"
#define STR_PARSE_SKIP_NET_CACHE             L"Skip Net Resource Cache"
#define STR_PARSE_SHELL_PROTOCOL_TO_FILE_OBJECTS     L"Parse Shell Protocol To File Objects"
#if (_WIN32_IE >= 0x0700)
#define STR_TRACK_CLSID                      L"Track the CLSID"
#define STR_INTERNAL_NAVIGATE                L"Internal Navigation"
#define STR_PARSE_PROPERTYSTORE             L"DelegateNamedProperties"
#define STR_NO_VALIDATE_FILENAME_CHARS      L"NoValidateFilenameChars"
#define STR_IFILTER_LOAD_DEFINED_FILTER   L"Only bind registered persistent handlers"
#define STR_IFILTER_FORCE_TEXT_FILTER_FALLBACK   L"Always bind persistent handlers"
#define STR_BIND_DELEGATE_CREATE_OBJECT L"Delegate Object Creation"
#define STR_PARSE_ALLOW_INTERNET_SHELL_FOLDERS   L"Allow binding to Internet shell folder handlers and negate STR_PARSE_PREFER_WEB_BROWSING"
#define STR_PARSE_PREFER_WEB_BROWSING   L"Do not bind to Internet shell folder handlers"
#define STR_PARSE_SHOW_NET_DIAGNOSTICS_UI  L"Show network diagnostics UI"
#define STR_PARSE_DONT_REQUIRE_VALIDATED_URLS  L"Do not require validated URLs"
#endif // _WIN32_IE >= 0x0700



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0011_v0_0_s_ifspec;

#ifndef __IShellFolder_INTERFACE_DEFINED__
#define __IShellFolder_INTERFACE_DEFINED__

/* interface IShellFolder */
/* [unique][object][uuid] */ 






EXTERN_C const IID IID_IShellFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E6-0000-0000-C000-000000000046")
    IShellFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParseDisplayName( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [string][in] */ __RPC__in LPWSTR pszDisplayName,
            /* [unique][out][in] */ 
            __reserved  ULONG *pchEaten,
            /* [out] */ __RPC__deref_out_opt PIDLIST_RELATIVE *ppidl,
            /* [unique][out][in] */ __RPC__inout_opt ULONG *pdwAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumObjects( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ SHCONTF grfFlags,
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenumIDList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindToObject( 
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindToStorage( 
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareIDs( 
            /* [in] */ LPARAM lParam,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl1,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateViewObject( 
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributesOf( 
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [out][in] */ __RPC__inout SFGAOF *rgfInOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIObjectOf( 
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [in] */ __RPC__in REFIID riid,
            /* [unique][out][in] */ 
            __reserved  UINT *rgfReserved,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayNameOf( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__out STRRET *pName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNameOf( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellFolder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *ParseDisplayName )( 
            IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [string][in] */ __RPC__in LPWSTR pszDisplayName,
            /* [unique][out][in] */ 
            __reserved  ULONG *pchEaten,
            /* [out] */ __RPC__deref_out_opt PIDLIST_RELATIVE *ppidl,
            /* [unique][out][in] */ __RPC__inout_opt ULONG *pdwAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *EnumObjects )( 
            IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ SHCONTF grfFlags,
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenumIDList);
        
        HRESULT ( STDMETHODCALLTYPE *BindToObject )( 
            IShellFolder * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *BindToStorage )( 
            IShellFolder * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *CompareIDs )( 
            IShellFolder * This,
            /* [in] */ LPARAM lParam,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl1,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl2);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewObject )( 
            IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributesOf )( 
            IShellFolder * This,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [out][in] */ __RPC__inout SFGAOF *rgfInOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIObjectOf )( 
            IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [in] */ __RPC__in REFIID riid,
            /* [unique][out][in] */ 
            __reserved  UINT *rgfReserved,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayNameOf )( 
            IShellFolder * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__out STRRET *pName);
        
        HRESULT ( STDMETHODCALLTYPE *SetNameOf )( 
            IShellFolder * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlOut);
        
        END_INTERFACE
    } IShellFolderVtbl;

    interface IShellFolder
    {
        CONST_VTBL struct IShellFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellFolder_ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes)	\
    ( (This)->lpVtbl -> ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes) ) 

#define IShellFolder_EnumObjects(This,hwnd,grfFlags,ppenumIDList)	\
    ( (This)->lpVtbl -> EnumObjects(This,hwnd,grfFlags,ppenumIDList) ) 

#define IShellFolder_BindToObject(This,pidl,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> BindToObject(This,pidl,pbc,riid,ppv) ) 

#define IShellFolder_BindToStorage(This,pidl,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> BindToStorage(This,pidl,pbc,riid,ppv) ) 

#define IShellFolder_CompareIDs(This,lParam,pidl1,pidl2)	\
    ( (This)->lpVtbl -> CompareIDs(This,lParam,pidl1,pidl2) ) 

#define IShellFolder_CreateViewObject(This,hwndOwner,riid,ppv)	\
    ( (This)->lpVtbl -> CreateViewObject(This,hwndOwner,riid,ppv) ) 

#define IShellFolder_GetAttributesOf(This,cidl,apidl,rgfInOut)	\
    ( (This)->lpVtbl -> GetAttributesOf(This,cidl,apidl,rgfInOut) ) 

#define IShellFolder_GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv)	\
    ( (This)->lpVtbl -> GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv) ) 

#define IShellFolder_GetDisplayNameOf(This,pidl,uFlags,pName)	\
    ( (This)->lpVtbl -> GetDisplayNameOf(This,pidl,uFlags,pName) ) 

#define IShellFolder_SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut)	\
    ( (This)->lpVtbl -> SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0012 */
/* [local] */ 

typedef IShellFolder *LPSHELLFOLDER;

typedef struct tagEXTRASEARCH
    {
    GUID guidSearch;
    WCHAR wszFriendlyName[ 80 ];
    WCHAR wszUrl[ 2084 ];
    } 	EXTRASEARCH;

typedef struct tagEXTRASEARCH *LPEXTRASEARCH;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0012_v0_0_s_ifspec;

#ifndef __IEnumExtraSearch_INTERFACE_DEFINED__
#define __IEnumExtraSearch_INTERFACE_DEFINED__

/* interface IEnumExtraSearch */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumExtraSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0E700BE1-9DB6-11d1-A1CE-00C04FD75D13")
    IEnumExtraSearch : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) EXTRASEARCH *rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumExtraSearch **ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumExtraSearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumExtraSearch * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumExtraSearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumExtraSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumExtraSearch * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) EXTRASEARCH *rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumExtraSearch * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumExtraSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumExtraSearch * This,
            /* [out] */ __RPC__deref_out_opt IEnumExtraSearch **ppenum);
        
        END_INTERFACE
    } IEnumExtraSearchVtbl;

    interface IEnumExtraSearch
    {
        CONST_VTBL struct IEnumExtraSearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumExtraSearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumExtraSearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumExtraSearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumExtraSearch_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumExtraSearch_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumExtraSearch_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumExtraSearch_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumExtraSearch_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0013 */
/* [local] */ 

typedef IEnumExtraSearch *LPENUMEXTRASEARCH;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0013_v0_0_s_ifspec;

#ifndef __IShellFolder2_INTERFACE_DEFINED__
#define __IShellFolder2_INTERFACE_DEFINED__

/* interface IShellFolder2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellFolder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93F2F68C-1D1B-11d3-A30E-00C04F79ABD1")
    IShellFolder2 : public IShellFolder
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDefaultSearchGUID( 
            /* [out] */ __RPC__out GUID *pguid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSearches( 
            /* [out] */ __RPC__deref_out_opt IEnumExtraSearch **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultColumn( 
            /* [in] */ DWORD dwRes,
            /* [out] */ __RPC__out ULONG *pSort,
            /* [out] */ __RPC__out ULONG *pDisplay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultColumnState( 
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHCOLSTATEF *pcsFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDetailsEx( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in const SHCOLUMNID *pscid,
            /* [out] */ __RPC__out VARIANT *pv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDetailsOf( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHELLDETAILS *psd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapColumnToSCID( 
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHCOLUMNID *pscid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellFolder2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellFolder2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellFolder2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellFolder2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ParseDisplayName )( 
            IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [string][in] */ __RPC__in LPWSTR pszDisplayName,
            /* [unique][out][in] */ 
            __reserved  ULONG *pchEaten,
            /* [out] */ __RPC__deref_out_opt PIDLIST_RELATIVE *ppidl,
            /* [unique][out][in] */ __RPC__inout_opt ULONG *pdwAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *EnumObjects )( 
            IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ SHCONTF grfFlags,
            /* [out] */ __RPC__deref_out_opt IEnumIDList **ppenumIDList);
        
        HRESULT ( STDMETHODCALLTYPE *BindToObject )( 
            IShellFolder2 * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *BindToStorage )( 
            IShellFolder2 * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *CompareIDs )( 
            IShellFolder2 * This,
            /* [in] */ LPARAM lParam,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl1,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl2);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewObject )( 
            IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributesOf )( 
            IShellFolder2 * This,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [out][in] */ __RPC__inout SFGAOF *rgfInOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIObjectOf )( 
            IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndOwner,
            /* [in] */ UINT cidl,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [in] */ __RPC__in REFIID riid,
            /* [unique][out][in] */ 
            __reserved  UINT *rgfReserved,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayNameOf )( 
            IShellFolder2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__out STRRET *pName);
        
        HRESULT ( STDMETHODCALLTYPE *SetNameOf )( 
            IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [in] */ SHGDNF uFlags,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSearchGUID )( 
            IShellFolder2 * This,
            /* [out] */ __RPC__out GUID *pguid);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSearches )( 
            IShellFolder2 * This,
            /* [out] */ __RPC__deref_out_opt IEnumExtraSearch **ppenum);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumn )( 
            IShellFolder2 * This,
            /* [in] */ DWORD dwRes,
            /* [out] */ __RPC__out ULONG *pSort,
            /* [out] */ __RPC__out ULONG *pDisplay);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumnState )( 
            IShellFolder2 * This,
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHCOLSTATEF *pcsFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetDetailsEx )( 
            IShellFolder2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in const SHCOLUMNID *pscid,
            /* [out] */ __RPC__out VARIANT *pv);
        
        HRESULT ( STDMETHODCALLTYPE *GetDetailsOf )( 
            IShellFolder2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidl,
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHELLDETAILS *psd);
        
        HRESULT ( STDMETHODCALLTYPE *MapColumnToSCID )( 
            IShellFolder2 * This,
            /* [in] */ UINT iColumn,
            /* [out] */ __RPC__out SHCOLUMNID *pscid);
        
        END_INTERFACE
    } IShellFolder2Vtbl;

    interface IShellFolder2
    {
        CONST_VTBL struct IShellFolder2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellFolder2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellFolder2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellFolder2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellFolder2_ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes)	\
    ( (This)->lpVtbl -> ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes) ) 

#define IShellFolder2_EnumObjects(This,hwnd,grfFlags,ppenumIDList)	\
    ( (This)->lpVtbl -> EnumObjects(This,hwnd,grfFlags,ppenumIDList) ) 

#define IShellFolder2_BindToObject(This,pidl,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> BindToObject(This,pidl,pbc,riid,ppv) ) 

#define IShellFolder2_BindToStorage(This,pidl,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> BindToStorage(This,pidl,pbc,riid,ppv) ) 

#define IShellFolder2_CompareIDs(This,lParam,pidl1,pidl2)	\
    ( (This)->lpVtbl -> CompareIDs(This,lParam,pidl1,pidl2) ) 

#define IShellFolder2_CreateViewObject(This,hwndOwner,riid,ppv)	\
    ( (This)->lpVtbl -> CreateViewObject(This,hwndOwner,riid,ppv) ) 

#define IShellFolder2_GetAttributesOf(This,cidl,apidl,rgfInOut)	\
    ( (This)->lpVtbl -> GetAttributesOf(This,cidl,apidl,rgfInOut) ) 

#define IShellFolder2_GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv)	\
    ( (This)->lpVtbl -> GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv) ) 

#define IShellFolder2_GetDisplayNameOf(This,pidl,uFlags,pName)	\
    ( (This)->lpVtbl -> GetDisplayNameOf(This,pidl,uFlags,pName) ) 

#define IShellFolder2_SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut)	\
    ( (This)->lpVtbl -> SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut) ) 


#define IShellFolder2_GetDefaultSearchGUID(This,pguid)	\
    ( (This)->lpVtbl -> GetDefaultSearchGUID(This,pguid) ) 

#define IShellFolder2_EnumSearches(This,ppenum)	\
    ( (This)->lpVtbl -> EnumSearches(This,ppenum) ) 

#define IShellFolder2_GetDefaultColumn(This,dwRes,pSort,pDisplay)	\
    ( (This)->lpVtbl -> GetDefaultColumn(This,dwRes,pSort,pDisplay) ) 

#define IShellFolder2_GetDefaultColumnState(This,iColumn,pcsFlags)	\
    ( (This)->lpVtbl -> GetDefaultColumnState(This,iColumn,pcsFlags) ) 

#define IShellFolder2_GetDetailsEx(This,pidl,pscid,pv)	\
    ( (This)->lpVtbl -> GetDetailsEx(This,pidl,pscid,pv) ) 

#define IShellFolder2_GetDetailsOf(This,pidl,iColumn,psd)	\
    ( (This)->lpVtbl -> GetDetailsOf(This,pidl,iColumn,psd) ) 

#define IShellFolder2_MapColumnToSCID(This,iColumn,pscid)	\
    ( (This)->lpVtbl -> MapColumnToSCID(This,iColumn,pscid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellFolder2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0014 */
/* [local] */ 

typedef char *LPVIEWSETTINGS;

typedef /* [v1_enum] */ 
enum tagFOLDERFLAGS
    {	FWF_AUTOARRANGE	= 0x1,
	FWF_ABBREVIATEDNAMES	= 0x2,
	FWF_SNAPTOGRID	= 0x4,
	FWF_OWNERDATA	= 0x8,
	FWF_BESTFITWINDOW	= 0x10,
	FWF_DESKTOP	= 0x20,
	FWF_SINGLESEL	= 0x40,
	FWF_NOSUBFOLDERS	= 0x80,
	FWF_TRANSPARENT	= 0x100,
	FWF_NOCLIENTEDGE	= 0x200,
	FWF_NOSCROLL	= 0x400,
	FWF_ALIGNLEFT	= 0x800,
	FWF_NOICONS	= 0x1000,
	FWF_SHOWSELALWAYS	= 0x2000,
	FWF_NOVISIBLE	= 0x4000,
	FWF_SINGLECLICKACTIVATE	= 0x8000,
	FWF_NOWEBVIEW	= 0x10000,
	FWF_HIDEFILENAMES	= 0x20000,
	FWF_CHECKSELECT	= 0x40000,
	FWF_NOENUMREFRESH	= 0x80000,
	FWF_NOGROUPING	= 0x100000,
	FWF_FULLROWSELECT	= 0x200000,
	FWF_NOFILTERS	= 0x400000,
	FWF_NOCOLUMNHEADER	= 0x800000,
	FWF_NOHEADERINALLVIEWS	= 0x1000000,
	FWF_EXTENDEDTILES	= 0x2000000,
	FWF_TRICHECKSELECT	= 0x4000000,
	FWF_AUTOCHECKSELECT	= 0x8000000,
	FWF_NOBROWSERVIEWSTATE	= 0x10000000,
	FWF_SUBSETGROUPS	= 0x20000000,
	FWF_USESEARCHFOLDER	= 0x40000000,
	FWF_ALLOWRTLREADING	= 0x80000000
    } 	FOLDERFLAGS;

typedef /* [v1_enum] */ 
enum tagFOLDERVIEWMODE
    {	FVM_AUTO	= -1,
	FVM_FIRST	= 1,
	FVM_ICON	= 1,
	FVM_SMALLICON	= 2,
	FVM_LIST	= 3,
	FVM_DETAILS	= 4,
	FVM_THUMBNAIL	= 5,
	FVM_TILE	= 6,
	FVM_THUMBSTRIP	= 7,
	FVM_LAST	= 7
    } 	FOLDERVIEWMODE;

#if (NTDDI_VERSION >= NTDDI_LONGHORN)
typedef /* [v1_enum] */ 
enum tagFOLDERLOGICALVIEWMODE
    {	FLVM_UNSPECIFIED	= -1,
	FLVM_FIRST	= 1,
	FLVM_DETAILS	= 1,
	FLVM_TILES	= 2,
	FLVM_ICONS	= 3,
	FLVM_LAST	= 3
    } 	FOLDERLOGICALVIEWMODE;

#endif  // NTDDI_LONGHORN
typedef struct tagFOLDERSETTINGS
    {
    UINT ViewMode;
    UINT fFlags;
    } 	FOLDERSETTINGS;

typedef FOLDERSETTINGS *LPFOLDERSETTINGS;

typedef const FOLDERSETTINGS *LPCFOLDERSETTINGS;

typedef FOLDERSETTINGS *PFOLDERSETTINGS;

#define SVSI_DESELECT       0x00000000
#define SVSI_SELECT         0x00000001
#define SVSI_EDIT           0x00000003  // includes select
#define SVSI_DESELECTOTHERS 0x00000004
#define SVSI_ENSUREVISIBLE  0x00000008
#define SVSI_FOCUSED        0x00000010
#define SVSI_TRANSLATEPT    0x00000020
#define SVSI_SELECTIONMARK  0x00000040
#define SVSI_POSITIONITEM   0x00000080
#define SVSI_CHECK          0x00000100
#define SVSI_CHECK2         0x00000200
#define SVSI_KEYBOARDSELECT 0x00000401  // includes select
#define SVSI_NOTAKEFOCUS    0x40000000
#define SVSI_NOSTATECHANGE  0x80000000
typedef UINT SVSIF;

/* [v1_enum] */ 
enum tagSVGIO
    {	SVGIO_BACKGROUND	= 0,
	SVGIO_SELECTION	= 0x1,
	SVGIO_ALLVIEW	= 0x2,
	SVGIO_CHECKED	= 0x3,
	SVGIO_TYPE_MASK	= 0xf,
	SVGIO_FLAG_VIEWORDER	= 0x80000000
    } ;
typedef int SVGIO;

typedef /* [v1_enum] */ 
enum tagSVUIA_STATUS
    {	SVUIA_DEACTIVATE	= 0,
	SVUIA_ACTIVATE_NOFOCUS	= 1,
	SVUIA_ACTIVATE_FOCUS	= 2,
	SVUIA_INPLACEACTIVATE	= 3
    } 	SVUIA_STATUS;

#ifdef _FIX_ENABLEMODELESS_CONFLICT
#define    EnableModeless EnableModelessSV
#endif
#ifdef _NEVER_
typedef LPARAM LPFNSVADDPROPSHEETPAGE;

#else //!_NEVER_
#include <prsht.h>
typedef LPFNADDPROPSHEETPAGE LPFNSVADDPROPSHEETPAGE;
#endif //_NEVER_



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0014_v0_0_s_ifspec;

#ifndef __IShellView_INTERFACE_DEFINED__
#define __IShellView_INTERFACE_DEFINED__

/* interface IShellView */
/* [unique][object][uuid] */ 

typedef IShellView *LPSHELLVIEW;


EXTERN_C const IID IID_IShellView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E3-0000-0000-C000-000000000046")
    IShellView : public IOleWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ __RPC__in MSG *pmsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableModeless( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UIActivate( 
            /* [in] */ UINT uState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateViewWindow( 
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrevious,
            /* [in] */ __RPC__in LPCFOLDERSETTINGS pfs,
            /* [in] */ __RPC__in_opt IShellBrowser *psb,
            /* [in] */ __RPC__in RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyViewWindow( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentInfo( 
            /* [out] */ __RPC__out LPFOLDERSETTINGS pfs) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE AddPropertySheetPages( 
            /* [in] */ 
            __in  DWORD dwReserved,
            /* [in] */ 
            __in  LPFNSVADDPROPSHEETPAGE pfn,
            /* [in] */ 
            __in  LPARAM lparam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveViewState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectItem( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ SVSIF uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemObject( 
            /* [in] */ UINT uItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellView * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellView * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IShellView * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IShellView * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            IShellView * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )( 
            IShellView * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivate )( 
            IShellView * This,
            /* [in] */ UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IShellView * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )( 
            IShellView * This,
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrevious,
            /* [in] */ __RPC__in LPCFOLDERSETTINGS pfs,
            /* [in] */ __RPC__in_opt IShellBrowser *psb,
            /* [in] */ __RPC__in RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phWnd);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyViewWindow )( 
            IShellView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentInfo )( 
            IShellView * This,
            /* [out] */ __RPC__out LPFOLDERSETTINGS pfs);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *AddPropertySheetPages )( 
            IShellView * This,
            /* [in] */ 
            __in  DWORD dwReserved,
            /* [in] */ 
            __in  LPFNSVADDPROPSHEETPAGE pfn,
            /* [in] */ 
            __in  LPARAM lparam);
        
        HRESULT ( STDMETHODCALLTYPE *SaveViewState )( 
            IShellView * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            IShellView * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ SVSIF uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemObject )( 
            IShellView * This,
            /* [in] */ UINT uItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IShellViewVtbl;

    interface IShellView
    {
        CONST_VTBL struct IShellViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellView_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IShellView_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IShellView_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#define IShellView_EnableModeless(This,fEnable)	\
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) ) 

#define IShellView_UIActivate(This,uState)	\
    ( (This)->lpVtbl -> UIActivate(This,uState) ) 

#define IShellView_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IShellView_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd)	\
    ( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) ) 

#define IShellView_DestroyViewWindow(This)	\
    ( (This)->lpVtbl -> DestroyViewWindow(This) ) 

#define IShellView_GetCurrentInfo(This,pfs)	\
    ( (This)->lpVtbl -> GetCurrentInfo(This,pfs) ) 

#define IShellView_AddPropertySheetPages(This,dwReserved,pfn,lparam)	\
    ( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) ) 

#define IShellView_SaveViewState(This)	\
    ( (This)->lpVtbl -> SaveViewState(This) ) 

#define IShellView_SelectItem(This,pidlItem,uFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) ) 

#define IShellView_GetItemObject(This,uItem,riid,ppv)	\
    ( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellView_INTERFACE_DEFINED__ */


#ifndef __IShellView2_INTERFACE_DEFINED__
#define __IShellView2_INTERFACE_DEFINED__

/* interface IShellView2 */
/* [unique][object][uuid] */ 

typedef GUID SHELLVIEWID;

#define SV2GV_CURRENTVIEW ((UINT)-1)
#define SV2GV_DEFAULTVIEW ((UINT)-2)
#include <pshpack8.h>
typedef struct _SV2CVW2_PARAMS
    {
    DWORD cbSize;
    IShellView *psvPrev;
    LPCFOLDERSETTINGS pfs;
    IShellBrowser *psbOwner;
    RECT *prcView;
    const SHELLVIEWID *pvid;
    HWND hwndView;
    } 	SV2CVW2_PARAMS;

typedef struct _SV2CVW2_PARAMS *LPSV2CVW2_PARAMS;

#include <poppack.h>

EXTERN_C const IID IID_IShellView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88E39E80-3578-11CF-AE69-08002B2E1262")
    IShellView2 : public IShellView
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetView( 
            /* [out][in] */ __RPC__inout SHELLVIEWID *pvid,
            /* [in] */ ULONG uView) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateViewWindow2( 
            /* [in] */ __RPC__in LPSV2CVW2_PARAMS lpParams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleRename( 
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectAndPositionItem( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlItem,
            /* [in] */ UINT uFlags,
            /* [unique][in] */ __RPC__in_opt POINT *ppt) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellView2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellView2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellView2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellView2 * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IShellView2 * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IShellView2 * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            IShellView2 * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )( 
            IShellView2 * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivate )( 
            IShellView2 * This,
            /* [in] */ UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IShellView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )( 
            IShellView2 * This,
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrevious,
            /* [in] */ __RPC__in LPCFOLDERSETTINGS pfs,
            /* [in] */ __RPC__in_opt IShellBrowser *psb,
            /* [in] */ __RPC__in RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phWnd);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyViewWindow )( 
            IShellView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentInfo )( 
            IShellView2 * This,
            /* [out] */ __RPC__out LPFOLDERSETTINGS pfs);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *AddPropertySheetPages )( 
            IShellView2 * This,
            /* [in] */ 
            __in  DWORD dwReserved,
            /* [in] */ 
            __in  LPFNSVADDPROPSHEETPAGE pfn,
            /* [in] */ 
            __in  LPARAM lparam);
        
        HRESULT ( STDMETHODCALLTYPE *SaveViewState )( 
            IShellView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            IShellView2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ SVSIF uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemObject )( 
            IShellView2 * This,
            /* [in] */ UINT uItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetView )( 
            IShellView2 * This,
            /* [out][in] */ __RPC__inout SHELLVIEWID *pvid,
            /* [in] */ ULONG uView);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow2 )( 
            IShellView2 * This,
            /* [in] */ __RPC__in LPSV2CVW2_PARAMS lpParams);
        
        HRESULT ( STDMETHODCALLTYPE *HandleRename )( 
            IShellView2 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlNew);
        
        HRESULT ( STDMETHODCALLTYPE *SelectAndPositionItem )( 
            IShellView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlItem,
            /* [in] */ UINT uFlags,
            /* [unique][in] */ __RPC__in_opt POINT *ppt);
        
        END_INTERFACE
    } IShellView2Vtbl;

    interface IShellView2
    {
        CONST_VTBL struct IShellView2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellView2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellView2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellView2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellView2_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IShellView2_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IShellView2_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#define IShellView2_EnableModeless(This,fEnable)	\
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) ) 

#define IShellView2_UIActivate(This,uState)	\
    ( (This)->lpVtbl -> UIActivate(This,uState) ) 

#define IShellView2_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IShellView2_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd)	\
    ( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) ) 

#define IShellView2_DestroyViewWindow(This)	\
    ( (This)->lpVtbl -> DestroyViewWindow(This) ) 

#define IShellView2_GetCurrentInfo(This,pfs)	\
    ( (This)->lpVtbl -> GetCurrentInfo(This,pfs) ) 

#define IShellView2_AddPropertySheetPages(This,dwReserved,pfn,lparam)	\
    ( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) ) 

#define IShellView2_SaveViewState(This)	\
    ( (This)->lpVtbl -> SaveViewState(This) ) 

#define IShellView2_SelectItem(This,pidlItem,uFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) ) 

#define IShellView2_GetItemObject(This,uItem,riid,ppv)	\
    ( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) ) 


#define IShellView2_GetView(This,pvid,uView)	\
    ( (This)->lpVtbl -> GetView(This,pvid,uView) ) 

#define IShellView2_CreateViewWindow2(This,lpParams)	\
    ( (This)->lpVtbl -> CreateViewWindow2(This,lpParams) ) 

#define IShellView2_HandleRename(This,pidlNew)	\
    ( (This)->lpVtbl -> HandleRename(This,pidlNew) ) 

#define IShellView2_SelectAndPositionItem(This,pidlItem,uFlags,ppt)	\
    ( (This)->lpVtbl -> SelectAndPositionItem(This,pidlItem,uFlags,ppt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellView2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0016 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0016_v0_0_s_ifspec;

#ifndef __IShellView3_INTERFACE_DEFINED__
#define __IShellView3_INTERFACE_DEFINED__

/* interface IShellView3 */
/* [unique][object][uuid] */ 

/* [v1_enum] */ 
enum tagSV3CVW3
    {	SV3CVW3_DEFAULT	= 0,
	SV3CVW3_NONINTERACTIVE	= 0x1,
	SV3CVW3_FORCEVIEWMODE	= 0x2,
	SV3CVW3_FORCEFOLDERFLAGS	= 0x4
    } ;
typedef DWORD SV3CVW3_FLAGS;


EXTERN_C const IID IID_IShellView3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ec39fa88-f8af-41c5-8421-38bed28f4673")
    IShellView3 : public IShellView2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateViewWindow3( 
            /* [in] */ __RPC__in_opt IShellBrowser *psbOwner,
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrev,
            /* [in] */ SV3CVW3_FLAGS dwViewFlags,
            /* [in] */ FOLDERFLAGS dwMask,
            /* [in] */ FOLDERFLAGS dwFlags,
            /* [in] */ FOLDERVIEWMODE fvMode,
            /* [unique][in] */ __RPC__in_opt const SHELLVIEWID *pvid,
            /* [in] */ __RPC__in const RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phwndView) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellView3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellView3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellView3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellView3 * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IShellView3 * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IShellView3 * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            IShellView3 * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )( 
            IShellView3 * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivate )( 
            IShellView3 * This,
            /* [in] */ UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IShellView3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )( 
            IShellView3 * This,
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrevious,
            /* [in] */ __RPC__in LPCFOLDERSETTINGS pfs,
            /* [in] */ __RPC__in_opt IShellBrowser *psb,
            /* [in] */ __RPC__in RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phWnd);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyViewWindow )( 
            IShellView3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentInfo )( 
            IShellView3 * This,
            /* [out] */ __RPC__out LPFOLDERSETTINGS pfs);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *AddPropertySheetPages )( 
            IShellView3 * This,
            /* [in] */ 
            __in  DWORD dwReserved,
            /* [in] */ 
            __in  LPFNSVADDPROPSHEETPAGE pfn,
            /* [in] */ 
            __in  LPARAM lparam);
        
        HRESULT ( STDMETHODCALLTYPE *SaveViewState )( 
            IShellView3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            IShellView3 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlItem,
            /* [in] */ SVSIF uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemObject )( 
            IShellView3 * This,
            /* [in] */ UINT uItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetView )( 
            IShellView3 * This,
            /* [out][in] */ __RPC__inout SHELLVIEWID *pvid,
            /* [in] */ ULONG uView);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow2 )( 
            IShellView3 * This,
            /* [in] */ __RPC__in LPSV2CVW2_PARAMS lpParams);
        
        HRESULT ( STDMETHODCALLTYPE *HandleRename )( 
            IShellView3 * This,
            /* [unique][in] */ __RPC__in_opt PCUITEMID_CHILD pidlNew);
        
        HRESULT ( STDMETHODCALLTYPE *SelectAndPositionItem )( 
            IShellView3 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlItem,
            /* [in] */ UINT uFlags,
            /* [unique][in] */ __RPC__in_opt POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow3 )( 
            IShellView3 * This,
            /* [in] */ __RPC__in_opt IShellBrowser *psbOwner,
            /* [unique][in] */ __RPC__in_opt IShellView *psvPrev,
            /* [in] */ SV3CVW3_FLAGS dwViewFlags,
            /* [in] */ FOLDERFLAGS dwMask,
            /* [in] */ FOLDERFLAGS dwFlags,
            /* [in] */ FOLDERVIEWMODE fvMode,
            /* [unique][in] */ __RPC__in_opt const SHELLVIEWID *pvid,
            /* [in] */ __RPC__in const RECT *prcView,
            /* [out] */ __RPC__deref_out_opt HWND *phwndView);
        
        END_INTERFACE
    } IShellView3Vtbl;

    interface IShellView3
    {
        CONST_VTBL struct IShellView3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellView3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellView3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellView3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellView3_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IShellView3_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IShellView3_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#define IShellView3_EnableModeless(This,fEnable)	\
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) ) 

#define IShellView3_UIActivate(This,uState)	\
    ( (This)->lpVtbl -> UIActivate(This,uState) ) 

#define IShellView3_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IShellView3_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd)	\
    ( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) ) 

#define IShellView3_DestroyViewWindow(This)	\
    ( (This)->lpVtbl -> DestroyViewWindow(This) ) 

#define IShellView3_GetCurrentInfo(This,pfs)	\
    ( (This)->lpVtbl -> GetCurrentInfo(This,pfs) ) 

#define IShellView3_AddPropertySheetPages(This,dwReserved,pfn,lparam)	\
    ( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) ) 

#define IShellView3_SaveViewState(This)	\
    ( (This)->lpVtbl -> SaveViewState(This) ) 

#define IShellView3_SelectItem(This,pidlItem,uFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) ) 

#define IShellView3_GetItemObject(This,uItem,riid,ppv)	\
    ( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) ) 


#define IShellView3_GetView(This,pvid,uView)	\
    ( (This)->lpVtbl -> GetView(This,pvid,uView) ) 

#define IShellView3_CreateViewWindow2(This,lpParams)	\
    ( (This)->lpVtbl -> CreateViewWindow2(This,lpParams) ) 

#define IShellView3_HandleRename(This,pidlNew)	\
    ( (This)->lpVtbl -> HandleRename(This,pidlNew) ) 

#define IShellView3_SelectAndPositionItem(This,pidlItem,uFlags,ppt)	\
    ( (This)->lpVtbl -> SelectAndPositionItem(This,pidlItem,uFlags,ppt) ) 


#define IShellView3_CreateViewWindow3(This,psbOwner,psvPrev,dwViewFlags,dwMask,dwFlags,fvMode,pvid,prcView,phwndView)	\
    ( (This)->lpVtbl -> CreateViewWindow3(This,psbOwner,psvPrev,dwViewFlags,dwMask,dwFlags,fvMode,pvid,prcView,phwndView) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellView3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0017 */
/* [local] */ 

#endif  // NTDDI_LONGHORN
#ifdef _FIX_ENABLEMODELESS_CONFLICT
#undef    EnableModeless 
#endif


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0017_v0_0_s_ifspec;

#ifndef __IFolderView_INTERFACE_DEFINED__
#define __IFolderView_INTERFACE_DEFINED__

/* interface IFolderView */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFolderView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cde725b0-ccc9-4519-917e-325d72fab4ce")
    IFolderView : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentViewMode( 
            /* [out][in] */ __RPC__inout UINT *pViewMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentViewMode( 
            /* [in] */ UINT ViewMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ int iItemIndex,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemCount( 
            /* [in] */ UINT uFlags,
            /* [out] */ __RPC__out int *pcItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Items( 
            /* [in] */ UINT uFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectionMarkedItem( 
            /* [out] */ __RPC__out int *piItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFocusedItem( 
            /* [out] */ __RPC__out int *piItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemPosition( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out POINT *ppt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpacing( 
            /* [unique][out][in] */ __RPC__inout_opt POINT *ppt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultSpacing( 
            /* [out] */ __RPC__out POINT *ppt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAutoArrange( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectItem( 
            /* [in] */ int iItem,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectAndPositionItems( 
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(cidl) POINT *apt,
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFolderViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolderView * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolderView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolderView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentViewMode )( 
            IFolderView * This,
            /* [out][in] */ __RPC__inout UINT *pViewMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentViewMode )( 
            IFolderView * This,
            /* [in] */ UINT ViewMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IFolderView * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IFolderView * This,
            /* [in] */ int iItemIndex,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *ItemCount )( 
            IFolderView * This,
            /* [in] */ UINT uFlags,
            /* [out] */ __RPC__out int *pcItems);
        
        HRESULT ( STDMETHODCALLTYPE *Items )( 
            IFolderView * This,
            /* [in] */ UINT uFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectionMarkedItem )( 
            IFolderView * This,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedItem )( 
            IFolderView * This,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemPosition )( 
            IFolderView * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpacing )( 
            IFolderView * This,
            /* [unique][out][in] */ __RPC__inout_opt POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSpacing )( 
            IFolderView * This,
            /* [out] */ __RPC__out POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutoArrange )( 
            IFolderView * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            IFolderView * This,
            /* [in] */ int iItem,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SelectAndPositionItems )( 
            IFolderView * This,
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(cidl) POINT *apt,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IFolderViewVtbl;

    interface IFolderView
    {
        CONST_VTBL struct IFolderViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderView_GetCurrentViewMode(This,pViewMode)	\
    ( (This)->lpVtbl -> GetCurrentViewMode(This,pViewMode) ) 

#define IFolderView_SetCurrentViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> SetCurrentViewMode(This,ViewMode) ) 

#define IFolderView_GetFolder(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetFolder(This,riid,ppv) ) 

#define IFolderView_Item(This,iItemIndex,ppidl)	\
    ( (This)->lpVtbl -> Item(This,iItemIndex,ppidl) ) 

#define IFolderView_ItemCount(This,uFlags,pcItems)	\
    ( (This)->lpVtbl -> ItemCount(This,uFlags,pcItems) ) 

#define IFolderView_Items(This,uFlags,riid,ppv)	\
    ( (This)->lpVtbl -> Items(This,uFlags,riid,ppv) ) 

#define IFolderView_GetSelectionMarkedItem(This,piItem)	\
    ( (This)->lpVtbl -> GetSelectionMarkedItem(This,piItem) ) 

#define IFolderView_GetFocusedItem(This,piItem)	\
    ( (This)->lpVtbl -> GetFocusedItem(This,piItem) ) 

#define IFolderView_GetItemPosition(This,pidl,ppt)	\
    ( (This)->lpVtbl -> GetItemPosition(This,pidl,ppt) ) 

#define IFolderView_GetSpacing(This,ppt)	\
    ( (This)->lpVtbl -> GetSpacing(This,ppt) ) 

#define IFolderView_GetDefaultSpacing(This,ppt)	\
    ( (This)->lpVtbl -> GetDefaultSpacing(This,ppt) ) 

#define IFolderView_GetAutoArrange(This)	\
    ( (This)->lpVtbl -> GetAutoArrange(This) ) 

#define IFolderView_SelectItem(This,iItem,dwFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,iItem,dwFlags) ) 

#define IFolderView_SelectAndPositionItems(This,cidl,apidl,apt,dwFlags)	\
    ( (This)->lpVtbl -> SelectAndPositionItems(This,cidl,apidl,apt,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderView_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0018 */
/* [local] */ 

#define SID_SFolderView IID_IFolderView    // folder view, usually IFolderView
#if (NTDDI_VERSION >= NTDDI_LONGHORN) || (_WIN32_IE >= _WIN32_IE_IE70)
#ifndef NO_SHOBJIDL_SORTDIRECTION
/* [v1_enum] */ 
enum tagSORTDIRECTION
    {	SORT_DESCENDING	= -1,
	SORT_ASCENDING	= 1
    } ;
#endif  // NO_SHOBJIDL_SORTDIRECTION
typedef int SORTDIRECTION;

typedef struct tagSORTCOLUMN
    {
    PROPERTYKEY propkey;
    SORTDIRECTION direction;
    } 	SORTCOLUMN;

typedef /* [v1_enum] */ 
enum tagFVTEXTTYPE
    {	FVST_EMPTYTEXT	= 0
    } 	FVTEXTTYPE;




extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0018_v0_0_s_ifspec;

#ifndef __IFolderView2_INTERFACE_DEFINED__
#define __IFolderView2_INTERFACE_DEFINED__

/* interface IFolderView2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFolderView2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1af3a467-214f-4298-908e-06b03e0b39f9")
    IFolderView2 : public IFolderView
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetGroupBy( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [in] */ BOOL fAscending) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGroupBy( 
            /* [out] */ __RPC__out PROPERTYKEY *pkey,
            /* [out] */ __RPC__out BOOL *pfAscending) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetViewProperty( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [in] */ __RPC__in REFPROPVARIANT propvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewProperty( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTileViewProperties( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in LPCWSTR pszPropList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExtendedTileViewProperties( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in LPCWSTR pszPropList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetText( 
            /* [in] */ FVTEXTTYPE iType,
            /* [in] */ __RPC__in LPCWSTR pwszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentFolderFlags( 
            /* [in] */ DWORD dwMask,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentFolderFlags( 
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortColumnCount( 
            /* [out] */ __RPC__out int *pcColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSortColumns( 
            /* [size_is][in] */ __RPC__in_ecount_full(cColumns) const SORTCOLUMN *rgSortColumns,
            /* [in] */ int cColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortColumns( 
            /* [size_is][out] */ __RPC__out_ecount_full(cColumns) SORTCOLUMN *rgSortColumns,
            /* [in] */ int cColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ int iItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVisibleItem( 
            /* [in] */ int iStart,
            /* [in] */ BOOL fPrevious,
            /* [out] */ __RPC__out int *piItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItem( 
            /* [in] */ int iStart,
            /* [out] */ __RPC__out int *piItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelection( 
            /* [in] */ BOOL fNoneImpliesFolder,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsia) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectionState( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeVerbOnSelection( 
            /* [string][unique][in] */ __RPC__in_opt LPCSTR pszVerb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetViewModeAndIconSize( 
            /* [in] */ FOLDERVIEWMODE uViewMode,
            /* [in] */ int iImageSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewModeAndIconSize( 
            /* [out] */ __RPC__out FOLDERVIEWMODE *puViewMode,
            /* [out] */ __RPC__out int *piImageSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGroupSubsetCount( 
            /* [in] */ UINT cVisibleRows) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGroupSubsetCount( 
            /* [out] */ __RPC__out UINT *pcVisibleRows) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRedraw( 
            /* [in] */ BOOL fRedrawOn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsMoveInSameFolder( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoRename( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFolderView2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolderView2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolderView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentViewMode )( 
            IFolderView2 * This,
            /* [out][in] */ __RPC__inout UINT *pViewMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentViewMode )( 
            IFolderView2 * This,
            /* [in] */ UINT ViewMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IFolderView2 * This,
            /* [in] */ int iItemIndex,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *ItemCount )( 
            IFolderView2 * This,
            /* [in] */ UINT uFlags,
            /* [out] */ __RPC__out int *pcItems);
        
        HRESULT ( STDMETHODCALLTYPE *Items )( 
            IFolderView2 * This,
            /* [in] */ UINT uFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectionMarkedItem )( 
            IFolderView2 * This,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusedItem )( 
            IFolderView2 * This,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemPosition )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpacing )( 
            IFolderView2 * This,
            /* [unique][out][in] */ __RPC__inout_opt POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSpacing )( 
            IFolderView2 * This,
            /* [out] */ __RPC__out POINT *ppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutoArrange )( 
            IFolderView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SelectItem )( 
            IFolderView2 * This,
            /* [in] */ int iItem,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SelectAndPositionItems )( 
            IFolderView2 * This,
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(cidl) POINT *apt,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetGroupBy )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [in] */ BOOL fAscending);
        
        HRESULT ( STDMETHODCALLTYPE *GetGroupBy )( 
            IFolderView2 * This,
            /* [out] */ __RPC__out PROPERTYKEY *pkey,
            /* [out] */ __RPC__out BOOL *pfAscending);
        
        HRESULT ( STDMETHODCALLTYPE *SetViewProperty )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [in] */ __RPC__in REFPROPVARIANT propvar);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewProperty )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE *SetTileViewProperties )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in LPCWSTR pszPropList);
        
        HRESULT ( STDMETHODCALLTYPE *SetExtendedTileViewProperties )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [string][in] */ __RPC__in LPCWSTR pszPropList);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            IFolderView2 * This,
            /* [in] */ FVTEXTTYPE iType,
            /* [in] */ __RPC__in LPCWSTR pwszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentFolderFlags )( 
            IFolderView2 * This,
            /* [in] */ DWORD dwMask,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentFolderFlags )( 
            IFolderView2 * This,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetSortColumnCount )( 
            IFolderView2 * This,
            /* [out] */ __RPC__out int *pcColumns);
        
        HRESULT ( STDMETHODCALLTYPE *SetSortColumns )( 
            IFolderView2 * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cColumns) const SORTCOLUMN *rgSortColumns,
            /* [in] */ int cColumns);
        
        HRESULT ( STDMETHODCALLTYPE *GetSortColumns )( 
            IFolderView2 * This,
            /* [size_is][out] */ __RPC__out_ecount_full(cColumns) SORTCOLUMN *rgSortColumns,
            /* [in] */ int cColumns);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IFolderView2 * This,
            /* [in] */ int iItem,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetVisibleItem )( 
            IFolderView2 * This,
            /* [in] */ int iStart,
            /* [in] */ BOOL fPrevious,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItem )( 
            IFolderView2 * This,
            /* [in] */ int iStart,
            /* [out] */ __RPC__out int *piItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            IFolderView2 * This,
            /* [in] */ BOOL fNoneImpliesFolder,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsia);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectionState )( 
            IFolderView2 * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeVerbOnSelection )( 
            IFolderView2 * This,
            /* [string][unique][in] */ __RPC__in_opt LPCSTR pszVerb);
        
        HRESULT ( STDMETHODCALLTYPE *SetViewModeAndIconSize )( 
            IFolderView2 * This,
            /* [in] */ FOLDERVIEWMODE uViewMode,
            /* [in] */ int iImageSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewModeAndIconSize )( 
            IFolderView2 * This,
            /* [out] */ __RPC__out FOLDERVIEWMODE *puViewMode,
            /* [out] */ __RPC__out int *piImageSize);
        
        HRESULT ( STDMETHODCALLTYPE *SetGroupSubsetCount )( 
            IFolderView2 * This,
            /* [in] */ UINT cVisibleRows);
        
        HRESULT ( STDMETHODCALLTYPE *GetGroupSubsetCount )( 
            IFolderView2 * This,
            /* [out] */ __RPC__out UINT *pcVisibleRows);
        
        HRESULT ( STDMETHODCALLTYPE *SetRedraw )( 
            IFolderView2 * This,
            /* [in] */ BOOL fRedrawOn);
        
        HRESULT ( STDMETHODCALLTYPE *IsMoveInSameFolder )( 
            IFolderView2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoRename )( 
            IFolderView2 * This);
        
        END_INTERFACE
    } IFolderView2Vtbl;

    interface IFolderView2
    {
        CONST_VTBL struct IFolderView2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderView2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderView2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderView2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderView2_GetCurrentViewMode(This,pViewMode)	\
    ( (This)->lpVtbl -> GetCurrentViewMode(This,pViewMode) ) 

#define IFolderView2_SetCurrentViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> SetCurrentViewMode(This,ViewMode) ) 

#define IFolderView2_GetFolder(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetFolder(This,riid,ppv) ) 

#define IFolderView2_Item(This,iItemIndex,ppidl)	\
    ( (This)->lpVtbl -> Item(This,iItemIndex,ppidl) ) 

#define IFolderView2_ItemCount(This,uFlags,pcItems)	\
    ( (This)->lpVtbl -> ItemCount(This,uFlags,pcItems) ) 

#define IFolderView2_Items(This,uFlags,riid,ppv)	\
    ( (This)->lpVtbl -> Items(This,uFlags,riid,ppv) ) 

#define IFolderView2_GetSelectionMarkedItem(This,piItem)	\
    ( (This)->lpVtbl -> GetSelectionMarkedItem(This,piItem) ) 

#define IFolderView2_GetFocusedItem(This,piItem)	\
    ( (This)->lpVtbl -> GetFocusedItem(This,piItem) ) 

#define IFolderView2_GetItemPosition(This,pidl,ppt)	\
    ( (This)->lpVtbl -> GetItemPosition(This,pidl,ppt) ) 

#define IFolderView2_GetSpacing(This,ppt)	\
    ( (This)->lpVtbl -> GetSpacing(This,ppt) ) 

#define IFolderView2_GetDefaultSpacing(This,ppt)	\
    ( (This)->lpVtbl -> GetDefaultSpacing(This,ppt) ) 

#define IFolderView2_GetAutoArrange(This)	\
    ( (This)->lpVtbl -> GetAutoArrange(This) ) 

#define IFolderView2_SelectItem(This,iItem,dwFlags)	\
    ( (This)->lpVtbl -> SelectItem(This,iItem,dwFlags) ) 

#define IFolderView2_SelectAndPositionItems(This,cidl,apidl,apt,dwFlags)	\
    ( (This)->lpVtbl -> SelectAndPositionItems(This,cidl,apidl,apt,dwFlags) ) 


#define IFolderView2_SetGroupBy(This,key,fAscending)	\
    ( (This)->lpVtbl -> SetGroupBy(This,key,fAscending) ) 

#define IFolderView2_GetGroupBy(This,pkey,pfAscending)	\
    ( (This)->lpVtbl -> GetGroupBy(This,pkey,pfAscending) ) 

#define IFolderView2_SetViewProperty(This,pidl,propkey,propvar)	\
    ( (This)->lpVtbl -> SetViewProperty(This,pidl,propkey,propvar) ) 

#define IFolderView2_GetViewProperty(This,pidl,propkey,ppropvar)	\
    ( (This)->lpVtbl -> GetViewProperty(This,pidl,propkey,ppropvar) ) 

#define IFolderView2_SetTileViewProperties(This,pidl,pszPropList)	\
    ( (This)->lpVtbl -> SetTileViewProperties(This,pidl,pszPropList) ) 

#define IFolderView2_SetExtendedTileViewProperties(This,pidl,pszPropList)	\
    ( (This)->lpVtbl -> SetExtendedTileViewProperties(This,pidl,pszPropList) ) 

#define IFolderView2_SetText(This,iType,pwszText)	\
    ( (This)->lpVtbl -> SetText(This,iType,pwszText) ) 

#define IFolderView2_SetCurrentFolderFlags(This,dwMask,dwFlags)	\
    ( (This)->lpVtbl -> SetCurrentFolderFlags(This,dwMask,dwFlags) ) 

#define IFolderView2_GetCurrentFolderFlags(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetCurrentFolderFlags(This,pdwFlags) ) 

#define IFolderView2_GetSortColumnCount(This,pcColumns)	\
    ( (This)->lpVtbl -> GetSortColumnCount(This,pcColumns) ) 

#define IFolderView2_SetSortColumns(This,rgSortColumns,cColumns)	\
    ( (This)->lpVtbl -> SetSortColumns(This,rgSortColumns,cColumns) ) 

#define IFolderView2_GetSortColumns(This,rgSortColumns,cColumns)	\
    ( (This)->lpVtbl -> GetSortColumns(This,rgSortColumns,cColumns) ) 

#define IFolderView2_GetItem(This,iItem,riid,ppv)	\
    ( (This)->lpVtbl -> GetItem(This,iItem,riid,ppv) ) 

#define IFolderView2_GetVisibleItem(This,iStart,fPrevious,piItem)	\
    ( (This)->lpVtbl -> GetVisibleItem(This,iStart,fPrevious,piItem) ) 

#define IFolderView2_GetSelectedItem(This,iStart,piItem)	\
    ( (This)->lpVtbl -> GetSelectedItem(This,iStart,piItem) ) 

#define IFolderView2_GetSelection(This,fNoneImpliesFolder,ppsia)	\
    ( (This)->lpVtbl -> GetSelection(This,fNoneImpliesFolder,ppsia) ) 

#define IFolderView2_GetSelectionState(This,pidl,pdwFlags)	\
    ( (This)->lpVtbl -> GetSelectionState(This,pidl,pdwFlags) ) 

#define IFolderView2_InvokeVerbOnSelection(This,pszVerb)	\
    ( (This)->lpVtbl -> InvokeVerbOnSelection(This,pszVerb) ) 

#define IFolderView2_SetViewModeAndIconSize(This,uViewMode,iImageSize)	\
    ( (This)->lpVtbl -> SetViewModeAndIconSize(This,uViewMode,iImageSize) ) 

#define IFolderView2_GetViewModeAndIconSize(This,puViewMode,piImageSize)	\
    ( (This)->lpVtbl -> GetViewModeAndIconSize(This,puViewMode,piImageSize) ) 

#define IFolderView2_SetGroupSubsetCount(This,cVisibleRows)	\
    ( (This)->lpVtbl -> SetGroupSubsetCount(This,cVisibleRows) ) 

#define IFolderView2_GetGroupSubsetCount(This,pcVisibleRows)	\
    ( (This)->lpVtbl -> GetGroupSubsetCount(This,pcVisibleRows) ) 

#define IFolderView2_SetRedraw(This,fRedrawOn)	\
    ( (This)->lpVtbl -> SetRedraw(This,fRedrawOn) ) 

#define IFolderView2_IsMoveInSameFolder(This)	\
    ( (This)->lpVtbl -> IsMoveInSameFolder(This) ) 

#define IFolderView2_DoRename(This)	\
    ( (This)->lpVtbl -> DoRename(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderView2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0019 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0019_v0_0_s_ifspec;

#ifndef __IFolderViewSettings_INTERFACE_DEFINED__
#define __IFolderViewSettings_INTERFACE_DEFINED__

/* interface IFolderViewSettings */
/* [object][uuid] */ 


EXTERN_C const IID IID_IFolderViewSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ae8c987d-8797-4ed3-be72-2a47dd938db0")
    IFolderViewSettings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetColumnPropertyList( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGroupByProperty( 
            /* [out] */ __RPC__out PROPERTYKEY *pkey,
            /* [out] */ __RPC__out BOOL *pfGroupAscending) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewMode( 
            /* [out] */ __RPC__out FOLDERLOGICALVIEWMODE *plvm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconSize( 
            /* [out] */ __RPC__out UINT *puIconSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderFlags( 
            /* [out] */ __RPC__out FOLDERFLAGS *pfolderMask,
            /* [out] */ __RPC__out FOLDERFLAGS *pfolderFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortColumns( 
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(cColumnsIn, *pcColumnsOut) SORTCOLUMN *rgSortColumns,
            /* [in] */ UINT cColumnsIn,
            /* [out] */ __RPC__out UINT *pcColumnsOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGroupSubsetCount( 
            /* [out] */ __RPC__out UINT *pcVisibleRows) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFolderViewSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolderViewSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolderViewSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolderViewSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetColumnPropertyList )( 
            IFolderViewSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetGroupByProperty )( 
            IFolderViewSettings * This,
            /* [out] */ __RPC__out PROPERTYKEY *pkey,
            /* [out] */ __RPC__out BOOL *pfGroupAscending);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewMode )( 
            IFolderViewSettings * This,
            /* [out] */ __RPC__out FOLDERLOGICALVIEWMODE *plvm);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconSize )( 
            IFolderViewSettings * This,
            /* [out] */ __RPC__out UINT *puIconSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderFlags )( 
            IFolderViewSettings * This,
            /* [out] */ __RPC__out FOLDERFLAGS *pfolderMask,
            /* [out] */ __RPC__out FOLDERFLAGS *pfolderFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetSortColumns )( 
            IFolderViewSettings * This,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(cColumnsIn, *pcColumnsOut) SORTCOLUMN *rgSortColumns,
            /* [in] */ UINT cColumnsIn,
            /* [out] */ __RPC__out UINT *pcColumnsOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetGroupSubsetCount )( 
            IFolderViewSettings * This,
            /* [out] */ __RPC__out UINT *pcVisibleRows);
        
        END_INTERFACE
    } IFolderViewSettingsVtbl;

    interface IFolderViewSettings
    {
        CONST_VTBL struct IFolderViewSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderViewSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderViewSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderViewSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderViewSettings_GetColumnPropertyList(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetColumnPropertyList(This,riid,ppv) ) 

#define IFolderViewSettings_GetGroupByProperty(This,pkey,pfGroupAscending)	\
    ( (This)->lpVtbl -> GetGroupByProperty(This,pkey,pfGroupAscending) ) 

#define IFolderViewSettings_GetViewMode(This,plvm)	\
    ( (This)->lpVtbl -> GetViewMode(This,plvm) ) 

#define IFolderViewSettings_GetIconSize(This,puIconSize)	\
    ( (This)->lpVtbl -> GetIconSize(This,puIconSize) ) 

#define IFolderViewSettings_GetFolderFlags(This,pfolderMask,pfolderFlags)	\
    ( (This)->lpVtbl -> GetFolderFlags(This,pfolderMask,pfolderFlags) ) 

#define IFolderViewSettings_GetSortColumns(This,rgSortColumns,cColumnsIn,pcColumnsOut)	\
    ( (This)->lpVtbl -> GetSortColumns(This,rgSortColumns,cColumnsIn,pcColumnsOut) ) 

#define IFolderViewSettings_GetGroupSubsetCount(This,pcVisibleRows)	\
    ( (This)->lpVtbl -> GetGroupSubsetCount(This,pcVisibleRows) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderViewSettings_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0020 */
/* [local] */ 

#endif  // NTDDI_LONGHORN
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)
#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0020_v0_0_s_ifspec;

#ifndef __IPreviewHandlerVisuals_INTERFACE_DEFINED__
#define __IPreviewHandlerVisuals_INTERFACE_DEFINED__

/* interface IPreviewHandlerVisuals */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPreviewHandlerVisuals;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("196bf9a5-b346-4ef0-aa1e-5dcdb76768b1")
    IPreviewHandlerVisuals : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBackgroundColor( 
            /* [in] */ COLORREF color) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFont( 
            /* [in] */ __RPC__in const LOGFONTW *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTextColor( 
            /* [in] */ COLORREF color) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPreviewHandlerVisualsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPreviewHandlerVisuals * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPreviewHandlerVisuals * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPreviewHandlerVisuals * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )( 
            IPreviewHandlerVisuals * This,
            /* [in] */ COLORREF color);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            IPreviewHandlerVisuals * This,
            /* [in] */ __RPC__in const LOGFONTW *plf);
        
        HRESULT ( STDMETHODCALLTYPE *SetTextColor )( 
            IPreviewHandlerVisuals * This,
            /* [in] */ COLORREF color);
        
        END_INTERFACE
    } IPreviewHandlerVisualsVtbl;

    interface IPreviewHandlerVisuals
    {
        CONST_VTBL struct IPreviewHandlerVisualsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreviewHandlerVisuals_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreviewHandlerVisuals_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreviewHandlerVisuals_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPreviewHandlerVisuals_SetBackgroundColor(This,color)	\
    ( (This)->lpVtbl -> SetBackgroundColor(This,color) ) 

#define IPreviewHandlerVisuals_SetFont(This,plf)	\
    ( (This)->lpVtbl -> SetFont(This,plf) ) 

#define IPreviewHandlerVisuals_SetTextColor(This,color)	\
    ( (This)->lpVtbl -> SetTextColor(This,color) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreviewHandlerVisuals_INTERFACE_DEFINED__ */


#ifndef __IVisualProperties_INTERFACE_DEFINED__
#define __IVisualProperties_INTERFACE_DEFINED__

/* interface IVisualProperties */
/* [unique][object][uuid] */ 

typedef /* [v1_enum] */ 
enum tagVPWATERMARKFLAGS
    {	VPWF_DEFAULT	= 0,
	VPWF_ALPHABLEND	= 0x1
    } 	VPWATERMARKFLAGS;

typedef /* [v1_enum] */ 
enum tagVPCOLORFLAGS
    {	VPCF_TEXT	= 0x1,
	VPCF_BACKGROUND	= 0x2,
	VPCF_SORTCOLUMN	= 0x3,
	VPCF_SUBTEXT	= 0x4
    } 	VPCOLORFLAGS;


EXTERN_C const IID IID_IVisualProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e693cf68-d967-4112-8763-99172aee5e5a")
    IVisualProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetWatermark( 
            /* [unique][in] */ __RPC__in_opt HBITMAP hbmp,
            /* [in] */ VPWATERMARKFLAGS vpwf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColor( 
            /* [in] */ VPCOLORFLAGS vpcf,
            /* [in] */ COLORREF cr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColor( 
            /* [in] */ VPCOLORFLAGS vpcf,
            /* [out] */ __RPC__out COLORREF *pcr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetItemHeight( 
            /* [in] */ int cyItemInPixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemHeight( 
            /* [out] */ __RPC__out int *cyItemInPixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFont( 
            /* [in] */ __RPC__in const LOGFONTW *plf,
            /* [in] */ BOOL bRedraw) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFont( 
            /* [out] */ __RPC__out LOGFONTW *plf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTheme( 
            /* [string][in] */ __RPC__in LPCWSTR pszSubAppName,
            /* [string][in] */ __RPC__in LPCWSTR pszSubIdList) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVisualPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisualProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisualProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisualProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetWatermark )( 
            IVisualProperties * This,
            /* [unique][in] */ __RPC__in_opt HBITMAP hbmp,
            /* [in] */ VPWATERMARKFLAGS vpwf);
        
        HRESULT ( STDMETHODCALLTYPE *SetColor )( 
            IVisualProperties * This,
            /* [in] */ VPCOLORFLAGS vpcf,
            /* [in] */ COLORREF cr);
        
        HRESULT ( STDMETHODCALLTYPE *GetColor )( 
            IVisualProperties * This,
            /* [in] */ VPCOLORFLAGS vpcf,
            /* [out] */ __RPC__out COLORREF *pcr);
        
        HRESULT ( STDMETHODCALLTYPE *SetItemHeight )( 
            IVisualProperties * This,
            /* [in] */ int cyItemInPixels);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemHeight )( 
            IVisualProperties * This,
            /* [out] */ __RPC__out int *cyItemInPixels);
        
        HRESULT ( STDMETHODCALLTYPE *SetFont )( 
            IVisualProperties * This,
            /* [in] */ __RPC__in const LOGFONTW *plf,
            /* [in] */ BOOL bRedraw);
        
        HRESULT ( STDMETHODCALLTYPE *GetFont )( 
            IVisualProperties * This,
            /* [out] */ __RPC__out LOGFONTW *plf);
        
        HRESULT ( STDMETHODCALLTYPE *SetTheme )( 
            IVisualProperties * This,
            /* [string][in] */ __RPC__in LPCWSTR pszSubAppName,
            /* [string][in] */ __RPC__in LPCWSTR pszSubIdList);
        
        END_INTERFACE
    } IVisualPropertiesVtbl;

    interface IVisualProperties
    {
        CONST_VTBL struct IVisualPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisualProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisualProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisualProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisualProperties_SetWatermark(This,hbmp,vpwf)	\
    ( (This)->lpVtbl -> SetWatermark(This,hbmp,vpwf) ) 

#define IVisualProperties_SetColor(This,vpcf,cr)	\
    ( (This)->lpVtbl -> SetColor(This,vpcf,cr) ) 

#define IVisualProperties_GetColor(This,vpcf,pcr)	\
    ( (This)->lpVtbl -> GetColor(This,vpcf,pcr) ) 

#define IVisualProperties_SetItemHeight(This,cyItemInPixels)	\
    ( (This)->lpVtbl -> SetItemHeight(This,cyItemInPixels) ) 

#define IVisualProperties_GetItemHeight(This,cyItemInPixels)	\
    ( (This)->lpVtbl -> GetItemHeight(This,cyItemInPixels) ) 

#define IVisualProperties_SetFont(This,plf,bRedraw)	\
    ( (This)->lpVtbl -> SetFont(This,plf,bRedraw) ) 

#define IVisualProperties_GetFont(This,plf)	\
    ( (This)->lpVtbl -> GetFont(This,plf) ) 

#define IVisualProperties_SetTheme(This,pszSubAppName,pszSubIdList)	\
    ( (This)->lpVtbl -> SetTheme(This,pszSubAppName,pszSubIdList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisualProperties_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0022 */
/* [local] */ 

#endif  // _WIN32_IE_IE70
#define CDBOSC_SETFOCUS     0x00000000
#define CDBOSC_KILLFOCUS    0x00000001
#define CDBOSC_SELCHANGE    0x00000002
#define CDBOSC_RENAME       0x00000003
#define CDBOSC_STATECHANGE  0x00000004


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0022_v0_0_s_ifspec;

#ifndef __ICommDlgBrowser_INTERFACE_DEFINED__
#define __ICommDlgBrowser_INTERFACE_DEFINED__

/* interface ICommDlgBrowser */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_ICommDlgBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214F1-0000-0000-C000-000000000046")
    ICommDlgBrowser : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnDefaultCommand( 
            /* [in] */ __RPC__in_opt IShellView *ppshv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnStateChange( 
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ ULONG uChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IncludeObject( 
            /* [unique][in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommDlgBrowserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICommDlgBrowser * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICommDlgBrowser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICommDlgBrowser * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDefaultCommand )( 
            ICommDlgBrowser * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv);
        
        HRESULT ( STDMETHODCALLTYPE *OnStateChange )( 
            ICommDlgBrowser * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ ULONG uChange);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeObject )( 
            ICommDlgBrowser * This,
            /* [unique][in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        END_INTERFACE
    } ICommDlgBrowserVtbl;

    interface ICommDlgBrowser
    {
        CONST_VTBL struct ICommDlgBrowserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommDlgBrowser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICommDlgBrowser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICommDlgBrowser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICommDlgBrowser_OnDefaultCommand(This,ppshv)	\
    ( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) ) 

#define ICommDlgBrowser_OnStateChange(This,ppshv,uChange)	\
    ( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) ) 

#define ICommDlgBrowser_IncludeObject(This,ppshv,pidl)	\
    ( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICommDlgBrowser_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0023 */
/* [local] */ 

typedef ICommDlgBrowser *LPCOMMDLGBROWSER;

#define SID_SExplorerBrowserFrame IID_ICommDlgBrowser
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define CDB2N_CONTEXTMENU_DONE  0x00000001
#define CDB2N_CONTEXTMENU_START 0x00000002
#define CDB2GVF_SHOWALLFILES        0x00000001
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
#define CDB2GVF_ISFILESAVE          0x00000002 // is file save, else file open
#define CDB2GVF_ALLOWPREVIEWPANE    0x00000004
#define CDB2GVF_NOSELECTVERB        0x00000008
#define CDB2GVF_NOINCLUDEITEM       0x00000010
#define CDB2GVF_ISFOLDERPICKER      0x00000020
#endif  // NTDDI_LONGHORN


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0023_v0_0_s_ifspec;

#ifndef __ICommDlgBrowser2_INTERFACE_DEFINED__
#define __ICommDlgBrowser2_INTERFACE_DEFINED__

/* interface ICommDlgBrowser2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_ICommDlgBrowser2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10339516-2894-11d2-9039-00C04F8EEB3E")
    ICommDlgBrowser2 : public ICommDlgBrowser
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ DWORD dwNotifyType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultMenuText( 
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchMax) LPWSTR pszText,
            /* [in] */ int cchMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewFlags( 
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommDlgBrowser2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICommDlgBrowser2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICommDlgBrowser2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDefaultCommand )( 
            ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv);
        
        HRESULT ( STDMETHODCALLTYPE *OnStateChange )( 
            ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ ULONG uChange);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeObject )( 
            ICommDlgBrowser2 * This,
            /* [unique][in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ DWORD dwNotifyType);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultMenuText )( 
            ICommDlgBrowser2 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchMax) LPWSTR pszText,
            /* [in] */ int cchMax);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )( 
            ICommDlgBrowser2 * This,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        END_INTERFACE
    } ICommDlgBrowser2Vtbl;

    interface ICommDlgBrowser2
    {
        CONST_VTBL struct ICommDlgBrowser2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommDlgBrowser2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICommDlgBrowser2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICommDlgBrowser2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICommDlgBrowser2_OnDefaultCommand(This,ppshv)	\
    ( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) ) 

#define ICommDlgBrowser2_OnStateChange(This,ppshv,uChange)	\
    ( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) ) 

#define ICommDlgBrowser2_IncludeObject(This,ppshv,pidl)	\
    ( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) ) 


#define ICommDlgBrowser2_Notify(This,ppshv,dwNotifyType)	\
    ( (This)->lpVtbl -> Notify(This,ppshv,dwNotifyType) ) 

#define ICommDlgBrowser2_GetDefaultMenuText(This,ppshv,pszText,cchMax)	\
    ( (This)->lpVtbl -> GetDefaultMenuText(This,ppshv,pszText,cchMax) ) 

#define ICommDlgBrowser2_GetViewFlags(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetViewFlags(This,pdwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICommDlgBrowser2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0024 */
/* [local] */ 

typedef ICommDlgBrowser2 *LPCOMMDLGBROWSER2;

#endif  // NTDDI_WIN2K
#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0024_v0_0_s_ifspec;

#ifndef __ICommDlgBrowser3_INTERFACE_DEFINED__
#define __ICommDlgBrowser3_INTERFACE_DEFINED__

/* interface ICommDlgBrowser3 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_ICommDlgBrowser3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8ad25a1-3294-41ee-8165-71174bd01c57")
    ICommDlgBrowser3 : public ICommDlgBrowser2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnColumnClicked( 
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ int iColumn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentFilter( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchFileSpec) LPWSTR pszFileSpec,
            /* [in] */ int cchFileSpec) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnPreViewCreated( 
            /* [in] */ __RPC__in_opt IShellView *ppshv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommDlgBrowser3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICommDlgBrowser3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICommDlgBrowser3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICommDlgBrowser3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDefaultCommand )( 
            ICommDlgBrowser3 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv);
        
        HRESULT ( STDMETHODCALLTYPE *OnStateChange )( 
            ICommDlgBrowser3 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ ULONG uChange);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeObject )( 
            ICommDlgBrowser3 * This,
            /* [unique][in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            ICommDlgBrowser3 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ DWORD dwNotifyType);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultMenuText )( 
            ICommDlgBrowser3 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchMax) LPWSTR pszText,
            /* [in] */ int cchMax);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )( 
            ICommDlgBrowser3 * This,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *OnColumnClicked )( 
            ICommDlgBrowser3 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv,
            /* [in] */ int iColumn);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentFilter )( 
            ICommDlgBrowser3 * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchFileSpec) LPWSTR pszFileSpec,
            /* [in] */ int cchFileSpec);
        
        HRESULT ( STDMETHODCALLTYPE *OnPreViewCreated )( 
            ICommDlgBrowser3 * This,
            /* [in] */ __RPC__in_opt IShellView *ppshv);
        
        END_INTERFACE
    } ICommDlgBrowser3Vtbl;

    interface ICommDlgBrowser3
    {
        CONST_VTBL struct ICommDlgBrowser3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommDlgBrowser3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICommDlgBrowser3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICommDlgBrowser3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICommDlgBrowser3_OnDefaultCommand(This,ppshv)	\
    ( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) ) 

#define ICommDlgBrowser3_OnStateChange(This,ppshv,uChange)	\
    ( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) ) 

#define ICommDlgBrowser3_IncludeObject(This,ppshv,pidl)	\
    ( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) ) 


#define ICommDlgBrowser3_Notify(This,ppshv,dwNotifyType)	\
    ( (This)->lpVtbl -> Notify(This,ppshv,dwNotifyType) ) 

#define ICommDlgBrowser3_GetDefaultMenuText(This,ppshv,pszText,cchMax)	\
    ( (This)->lpVtbl -> GetDefaultMenuText(This,ppshv,pszText,cchMax) ) 

#define ICommDlgBrowser3_GetViewFlags(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetViewFlags(This,pdwFlags) ) 


#define ICommDlgBrowser3_OnColumnClicked(This,ppshv,iColumn)	\
    ( (This)->lpVtbl -> OnColumnClicked(This,ppshv,iColumn) ) 

#define ICommDlgBrowser3_GetCurrentFilter(This,pszFileSpec,cchFileSpec)	\
    ( (This)->lpVtbl -> GetCurrentFilter(This,pszFileSpec,cchFileSpec) ) 

#define ICommDlgBrowser3_OnPreViewCreated(This,ppshv)	\
    ( (This)->lpVtbl -> OnPreViewCreated(This,ppshv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICommDlgBrowser3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0025 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum tagCM_MASK
    {	CM_MASK_WIDTH	= 0x1,
	CM_MASK_DEFAULTWIDTH	= 0x2,
	CM_MASK_IDEALWIDTH	= 0x4,
	CM_MASK_NAME	= 0x8,
	CM_MASK_STATE	= 0x10
    } 	CM_MASK;

typedef /* [v1_enum] */ 
enum tagCM_STATE
    {	CM_STATE_NONE	= 0,
	CM_STATE_VISIBLE	= 0x1,
	CM_STATE_FIXEDWIDTH	= 0x2,
	CM_STATE_NOSORTBYFOLDERNESS	= 0x4,
	CM_STATE_ALWAYSVISIBLE	= 0x8
    } 	CM_STATE;

typedef /* [v1_enum] */ 
enum tagCM_ENUM_FLAGS
    {	CM_ENUM_ALL	= 0x1,
	CM_ENUM_VISIBLE	= 0x2
    } 	CM_ENUM_FLAGS;

typedef /* [v1_enum] */ 
enum tagCM_SET_WIDTH_VALUE
    {	CM_WIDTH_USEDEFAULT	= -1,
	CM_WIDTH_AUTOSIZE	= -2
    } 	CM_SET_WIDTH_VALUE;

typedef struct tagCM_COLUMNINFO
    {
    DWORD cbSize;
    DWORD dwMask;
    DWORD dwState;
    UINT uWidth;
    UINT uDefaultWidth;
    UINT uIdealWidth;
    WCHAR wszName[ 80 ];
    } 	CM_COLUMNINFO;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0025_v0_0_s_ifspec;

#ifndef __IColumnManager_INTERFACE_DEFINED__
#define __IColumnManager_INTERFACE_DEFINED__

/* interface IColumnManager */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IColumnManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8ec27bb-3f3b-4042-b10a-4acfd924d453")
    IColumnManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetColumnInfo( 
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [in] */ __RPC__in const CM_COLUMNINFO *pcmci) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColumnInfo( 
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [out] */ __RPC__out CM_COLUMNINFO *pcmci) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColumnCount( 
            /* [in] */ CM_ENUM_FLAGS dwFlags,
            /* [out] */ __RPC__out UINT *puCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetColumns( 
            /* [in] */ CM_ENUM_FLAGS dwFlags,
            /* [size_is][out] */ __RPC__out_ecount_full(cColumns) PROPERTYKEY *rgkeyOrder,
            /* [in] */ UINT cColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColumns( 
            /* [size_is][in] */ __RPC__in_ecount_full(cVisible) const PROPERTYKEY *rgkeyOrder,
            /* [in] */ UINT cVisible) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IColumnManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IColumnManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IColumnManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IColumnManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetColumnInfo )( 
            IColumnManager * This,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [in] */ __RPC__in const CM_COLUMNINFO *pcmci);
        
        HRESULT ( STDMETHODCALLTYPE *GetColumnInfo )( 
            IColumnManager * This,
            /* [in] */ __RPC__in REFPROPERTYKEY propkey,
            /* [out] */ __RPC__out CM_COLUMNINFO *pcmci);
        
        HRESULT ( STDMETHODCALLTYPE *GetColumnCount )( 
            IColumnManager * This,
            /* [in] */ CM_ENUM_FLAGS dwFlags,
            /* [out] */ __RPC__out UINT *puCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetColumns )( 
            IColumnManager * This,
            /* [in] */ CM_ENUM_FLAGS dwFlags,
            /* [size_is][out] */ __RPC__out_ecount_full(cColumns) PROPERTYKEY *rgkeyOrder,
            /* [in] */ UINT cColumns);
        
        HRESULT ( STDMETHODCALLTYPE *SetColumns )( 
            IColumnManager * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cVisible) const PROPERTYKEY *rgkeyOrder,
            /* [in] */ UINT cVisible);
        
        END_INTERFACE
    } IColumnManagerVtbl;

    interface IColumnManager
    {
        CONST_VTBL struct IColumnManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IColumnManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IColumnManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IColumnManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IColumnManager_SetColumnInfo(This,propkey,pcmci)	\
    ( (This)->lpVtbl -> SetColumnInfo(This,propkey,pcmci) ) 

#define IColumnManager_GetColumnInfo(This,propkey,pcmci)	\
    ( (This)->lpVtbl -> GetColumnInfo(This,propkey,pcmci) ) 

#define IColumnManager_GetColumnCount(This,dwFlags,puCount)	\
    ( (This)->lpVtbl -> GetColumnCount(This,dwFlags,puCount) ) 

#define IColumnManager_GetColumns(This,dwFlags,rgkeyOrder,cColumns)	\
    ( (This)->lpVtbl -> GetColumns(This,dwFlags,rgkeyOrder,cColumns) ) 

#define IColumnManager_SetColumns(This,rgkeyOrder,cVisible)	\
    ( (This)->lpVtbl -> SetColumns(This,rgkeyOrder,cVisible) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IColumnManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0026 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0026_v0_0_s_ifspec;

#ifndef __IFolderFilterSite_INTERFACE_DEFINED__
#define __IFolderFilterSite_INTERFACE_DEFINED__

/* interface IFolderFilterSite */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFolderFilterSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C0A651F5-B48B-11d2-B5ED-006097C686F6")
    IFolderFilterSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFilter( 
            /* [in] */ __RPC__in_opt IUnknown *punk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFolderFilterSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolderFilterSite * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolderFilterSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolderFilterSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            IFolderFilterSite * This,
            /* [in] */ __RPC__in_opt IUnknown *punk);
        
        END_INTERFACE
    } IFolderFilterSiteVtbl;

    interface IFolderFilterSite
    {
        CONST_VTBL struct IFolderFilterSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderFilterSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderFilterSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderFilterSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderFilterSite_SetFilter(This,punk)	\
    ( (This)->lpVtbl -> SetFilter(This,punk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderFilterSite_INTERFACE_DEFINED__ */


#ifndef __IFolderFilter_INTERFACE_DEFINED__
#define __IFolderFilter_INTERFACE_DEFINED__

/* interface IFolderFilter */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFolderFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CC22886-DC8E-11d2-B1D0-00C04F8EEB3E")
    IFolderFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShouldShow( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlFolder,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumFlags( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd,
            /* [out][in] */ __RPC__inout DWORD *pgrfFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFolderFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolderFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolderFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolderFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShouldShow )( 
            IFolderFilter * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlFolder,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumFlags )( 
            IFolderFilter * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidlFolder,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd,
            /* [out][in] */ __RPC__inout DWORD *pgrfFlags);
        
        END_INTERFACE
    } IFolderFilterVtbl;

    interface IFolderFilter
    {
        CONST_VTBL struct IFolderFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderFilter_ShouldShow(This,psf,pidlFolder,pidlItem)	\
    ( (This)->lpVtbl -> ShouldShow(This,psf,pidlFolder,pidlItem) ) 

#define IFolderFilter_GetEnumFlags(This,psf,pidlFolder,phwnd,pgrfFlags)	\
    ( (This)->lpVtbl -> GetEnumFlags(This,psf,pidlFolder,phwnd,pgrfFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderFilter_INTERFACE_DEFINED__ */


#ifndef __IInputObjectSite_INTERFACE_DEFINED__
#define __IInputObjectSite_INTERFACE_DEFINED__

/* interface IInputObjectSite */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInputObjectSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F1DB8392-7331-11D0-8C99-00A0C92DBFE8")
    IInputObjectSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnFocusChangeIS( 
            /* [unique][in] */ __RPC__in_opt IUnknown *punkObj,
            /* [in] */ BOOL fSetFocus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInputObjectSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInputObjectSite * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInputObjectSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInputObjectSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFocusChangeIS )( 
            IInputObjectSite * This,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkObj,
            /* [in] */ BOOL fSetFocus);
        
        END_INTERFACE
    } IInputObjectSiteVtbl;

    interface IInputObjectSite
    {
        CONST_VTBL struct IInputObjectSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputObjectSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputObjectSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputObjectSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputObjectSite_OnFocusChangeIS(This,punkObj,fSetFocus)	\
    ( (This)->lpVtbl -> OnFocusChangeIS(This,punkObj,fSetFocus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInputObjectSite_INTERFACE_DEFINED__ */


#ifndef __IInputObject_INTERFACE_DEFINED__
#define __IInputObject_INTERFACE_DEFINED__

/* interface IInputObject */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInputObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68284fAA-6A48-11D0-8c78-00C04fd918b4")
    IInputObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UIActivateIO( 
            /* [in] */ BOOL fActivate,
            /* [unique][in] */ __RPC__in_opt MSG *pMsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasFocusIO( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAcceleratorIO( 
            /* [in] */ __RPC__in MSG *pMsg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInputObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInputObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInputObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInputObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivateIO )( 
            IInputObject * This,
            /* [in] */ BOOL fActivate,
            /* [unique][in] */ __RPC__in_opt MSG *pMsg);
        
        HRESULT ( STDMETHODCALLTYPE *HasFocusIO )( 
            IInputObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAcceleratorIO )( 
            IInputObject * This,
            /* [in] */ __RPC__in MSG *pMsg);
        
        END_INTERFACE
    } IInputObjectVtbl;

    interface IInputObject
    {
        CONST_VTBL struct IInputObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputObject_UIActivateIO(This,fActivate,pMsg)	\
    ( (This)->lpVtbl -> UIActivateIO(This,fActivate,pMsg) ) 

#define IInputObject_HasFocusIO(This)	\
    ( (This)->lpVtbl -> HasFocusIO(This) ) 

#define IInputObject_TranslateAcceleratorIO(This,pMsg)	\
    ( (This)->lpVtbl -> TranslateAcceleratorIO(This,pMsg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInputObject_INTERFACE_DEFINED__ */


#ifndef __IInputObject2_INTERFACE_DEFINED__
#define __IInputObject2_INTERFACE_DEFINED__

/* interface IInputObject2 */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IInputObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6915C085-510B-44cd-94AF-28DFA56CF92B")
    IInputObject2 : public IInputObject
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TranslateAcceleratorGlobal( 
            /* [in] */ 
            __in  MSG *pMsg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInputObject2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInputObject2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInputObject2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInputObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UIActivateIO )( 
            IInputObject2 * This,
            /* [in] */ BOOL fActivate,
            /* [unique][in] */ MSG *pMsg);
        
        HRESULT ( STDMETHODCALLTYPE *HasFocusIO )( 
            IInputObject2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAcceleratorIO )( 
            IInputObject2 * This,
            /* [in] */ MSG *pMsg);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAcceleratorGlobal )( 
            IInputObject2 * This,
            /* [in] */ 
            __in  MSG *pMsg);
        
        END_INTERFACE
    } IInputObject2Vtbl;

    interface IInputObject2
    {
        CONST_VTBL struct IInputObject2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInputObject2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInputObject2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInputObject2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInputObject2_UIActivateIO(This,fActivate,pMsg)	\
    ( (This)->lpVtbl -> UIActivateIO(This,fActivate,pMsg) ) 

#define IInputObject2_HasFocusIO(This)	\
    ( (This)->lpVtbl -> HasFocusIO(This) ) 

#define IInputObject2_TranslateAcceleratorIO(This,pMsg)	\
    ( (This)->lpVtbl -> TranslateAcceleratorIO(This,pMsg) ) 


#define IInputObject2_TranslateAcceleratorGlobal(This,pMsg)	\
    ( (This)->lpVtbl -> TranslateAcceleratorGlobal(This,pMsg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInputObject2_INTERFACE_DEFINED__ */


#ifndef __IShellIcon_INTERFACE_DEFINED__
#define __IShellIcon_INTERFACE_DEFINED__

/* interface IShellIcon */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellIcon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E5-0000-0000-C000-000000000046")
    IShellIcon : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIconOf( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ UINT flags,
            /* [out] */ __RPC__out int *pIconIndex) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellIconVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellIcon * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellIcon * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellIcon * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconOf )( 
            IShellIcon * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl,
            /* [in] */ UINT flags,
            /* [out] */ __RPC__out int *pIconIndex);
        
        END_INTERFACE
    } IShellIconVtbl;

    interface IShellIcon
    {
        CONST_VTBL struct IShellIconVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellIcon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellIcon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellIcon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellIcon_GetIconOf(This,pidl,flags,pIconIndex)	\
    ( (This)->lpVtbl -> GetIconOf(This,pidl,flags,pIconIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellIcon_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0032 */
/* [local] */ 

#define SBSP_DEFBROWSER         0x0000
#define SBSP_SAMEBROWSER        0x0001
#define SBSP_NEWBROWSER         0x0002
#define SBSP_DEFMODE            0x0000
#define SBSP_OPENMODE           0x0010
#define SBSP_EXPLOREMODE        0x0020
#define SBSP_HELPMODE           0x0040
#define SBSP_NOTRANSFERHIST     0x0080
#define SBSP_ABSOLUTE           0x0000
#define SBSP_RELATIVE           0x1000
#define SBSP_PARENT             0x2000
#define SBSP_NAVIGATEBACK       0x4000
#define SBSP_NAVIGATEFORWARD    0x8000
#define SBSP_ALLOW_AUTONAVIGATE   0x00010000
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
#define SBSP_KEEPSAMETEMPLATE     0x00020000
#define SBSP_KEEPWORDWHEELTEXT    0x00040000
#define SBSP_ACTIVATE_NOFOCUS     0x00080000
#endif  // (NTDDI_VERSION >= NTDDI_LONGHORN)
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SBSP_CALLERUNTRUSTED      0x00800000
#define SBSP_TRUSTFIRSTDOWNLOAD   0x01000000
#define SBSP_UNTRUSTEDFORDOWNLOAD 0x02000000
#endif  // _WIN32_IE_IE60SP2
#define SBSP_NOAUTOSELECT         0x04000000
#define SBSP_WRITENOHISTORY       0x08000000
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SBSP_TRUSTEDFORACTIVEX    0x10000000
#endif  // _WIN32_IE_IE60SP2
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SBSP_FEEDNAVIGATION       0x20000000
#endif  // _WIN32_IE_IE70
#define SBSP_REDIRECT                     0x40000000
#define SBSP_INITIATEDBYHLINKFRAME        0x80000000
#define FCW_STATUS         0x0001
#define FCW_TOOLBAR        0x0002
#define FCW_TREE           0x0003
#define FCW_INTERNETBAR    0x0006
#define FCW_PROGRESS       0x0008
#if (_WIN32_IE >= 0x0700)
#endif
#define FCT_MERGE       0x0001
#define FCT_CONFIGABLE  0x0002
#define FCT_ADDTOEND    0x0004
#ifdef _NEVER_
typedef LPARAM LPTBBUTTONSB;

#else //!_NEVER_
#include <commctrl.h>
typedef LPTBBUTTON LPTBBUTTONSB;
#endif //_NEVER_


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0032_v0_0_s_ifspec;

#ifndef __IShellBrowser_INTERFACE_DEFINED__
#define __IShellBrowser_INTERFACE_DEFINED__

/* interface IShellBrowser */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E2-0000-0000-C000-000000000046")
    IShellBrowser : public IOleWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InsertMenusSB( 
            /* [in] */ __RPC__in HMENU hmenuShared,
            /* [out][in] */ __RPC__inout LPOLEMENUGROUPWIDTHS lpMenuWidths) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMenuSB( 
            /* [unique][in] */ __RPC__in_opt HMENU hmenuShared,
            /* [unique][in] */ __RPC__in_opt HOLEMENU holemenuRes,
            /* [unique][in] */ __RPC__in_opt HWND hwndActiveObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveMenusSB( 
            /* [in] */ __RPC__in HMENU hmenuShared) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatusTextSB( 
            /* [unique][in] */ __RPC__in_opt LPCWSTR pszStatusText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableModelessSB( 
            /* [in] */ BOOL fEnable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAcceleratorSB( 
            /* [in] */ __RPC__in MSG *pmsg,
            /* [in] */ WORD wID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BrowseObject( 
            /* [unique][in] */ __RPC__in_opt PCUIDLIST_RELATIVE pidl,
            /* [in] */ UINT wFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewStateStream( 
            /* [in] */ DWORD grfMode,
            /* [out] */ __RPC__deref_out_opt IStream **ppStrm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetControlWindow( 
            /* [in] */ UINT id,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SendControlMsg( 
            /* [in] */ 
            __in  UINT id,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam,
            /* [out] */ 
            __out_opt  LRESULT *pret) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryActiveShellView( 
            /* [out] */ __RPC__deref_out_opt IShellView **ppshv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnViewWindowActive( 
            /* [in] */ __RPC__in_opt IShellView *pshv) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetToolbarItems( 
            /* [in] */ 
            __in_ecount_opt(nButtons)  LPTBBUTTONSB lpButtons,
            /* [in] */ 
            __in  UINT nButtons,
            /* [in] */ 
            __in  UINT uFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellBrowserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellBrowser * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellBrowser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellBrowser * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IShellBrowser * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IShellBrowser * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *InsertMenusSB )( 
            IShellBrowser * This,
            /* [in] */ __RPC__in HMENU hmenuShared,
            /* [out][in] */ __RPC__inout LPOLEMENUGROUPWIDTHS lpMenuWidths);
        
        HRESULT ( STDMETHODCALLTYPE *SetMenuSB )( 
            IShellBrowser * This,
            /* [unique][in] */ __RPC__in_opt HMENU hmenuShared,
            /* [unique][in] */ __RPC__in_opt HOLEMENU holemenuRes,
            /* [unique][in] */ __RPC__in_opt HWND hwndActiveObject);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveMenusSB )( 
            IShellBrowser * This,
            /* [in] */ __RPC__in HMENU hmenuShared);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatusTextSB )( 
            IShellBrowser * This,
            /* [unique][in] */ __RPC__in_opt LPCWSTR pszStatusText);
        
        HRESULT ( STDMETHODCALLTYPE *EnableModelessSB )( 
            IShellBrowser * This,
            /* [in] */ BOOL fEnable);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAcceleratorSB )( 
            IShellBrowser * This,
            /* [in] */ __RPC__in MSG *pmsg,
            /* [in] */ WORD wID);
        
        HRESULT ( STDMETHODCALLTYPE *BrowseObject )( 
            IShellBrowser * This,
            /* [unique][in] */ __RPC__in_opt PCUIDLIST_RELATIVE pidl,
            /* [in] */ UINT wFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewStateStream )( 
            IShellBrowser * This,
            /* [in] */ DWORD grfMode,
            /* [out] */ __RPC__deref_out_opt IStream **ppStrm);
        
        HRESULT ( STDMETHODCALLTYPE *GetControlWindow )( 
            IShellBrowser * This,
            /* [in] */ UINT id,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SendControlMsg )( 
            IShellBrowser * This,
            /* [in] */ 
            __in  UINT id,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam,
            /* [out] */ 
            __out_opt  LRESULT *pret);
        
        HRESULT ( STDMETHODCALLTYPE *QueryActiveShellView )( 
            IShellBrowser * This,
            /* [out] */ __RPC__deref_out_opt IShellView **ppshv);
        
        HRESULT ( STDMETHODCALLTYPE *OnViewWindowActive )( 
            IShellBrowser * This,
            /* [in] */ __RPC__in_opt IShellView *pshv);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetToolbarItems )( 
            IShellBrowser * This,
            /* [in] */ 
            __in_ecount_opt(nButtons)  LPTBBUTTONSB lpButtons,
            /* [in] */ 
            __in  UINT nButtons,
            /* [in] */ 
            __in  UINT uFlags);
        
        END_INTERFACE
    } IShellBrowserVtbl;

    interface IShellBrowser
    {
        CONST_VTBL struct IShellBrowserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellBrowser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellBrowser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellBrowser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellBrowser_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IShellBrowser_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IShellBrowser_InsertMenusSB(This,hmenuShared,lpMenuWidths)	\
    ( (This)->lpVtbl -> InsertMenusSB(This,hmenuShared,lpMenuWidths) ) 

#define IShellBrowser_SetMenuSB(This,hmenuShared,holemenuRes,hwndActiveObject)	\
    ( (This)->lpVtbl -> SetMenuSB(This,hmenuShared,holemenuRes,hwndActiveObject) ) 

#define IShellBrowser_RemoveMenusSB(This,hmenuShared)	\
    ( (This)->lpVtbl -> RemoveMenusSB(This,hmenuShared) ) 

#define IShellBrowser_SetStatusTextSB(This,pszStatusText)	\
    ( (This)->lpVtbl -> SetStatusTextSB(This,pszStatusText) ) 

#define IShellBrowser_EnableModelessSB(This,fEnable)	\
    ( (This)->lpVtbl -> EnableModelessSB(This,fEnable) ) 

#define IShellBrowser_TranslateAcceleratorSB(This,pmsg,wID)	\
    ( (This)->lpVtbl -> TranslateAcceleratorSB(This,pmsg,wID) ) 

#define IShellBrowser_BrowseObject(This,pidl,wFlags)	\
    ( (This)->lpVtbl -> BrowseObject(This,pidl,wFlags) ) 

#define IShellBrowser_GetViewStateStream(This,grfMode,ppStrm)	\
    ( (This)->lpVtbl -> GetViewStateStream(This,grfMode,ppStrm) ) 

#define IShellBrowser_GetControlWindow(This,id,phwnd)	\
    ( (This)->lpVtbl -> GetControlWindow(This,id,phwnd) ) 

#define IShellBrowser_SendControlMsg(This,id,uMsg,wParam,lParam,pret)	\
    ( (This)->lpVtbl -> SendControlMsg(This,id,uMsg,wParam,lParam,pret) ) 

#define IShellBrowser_QueryActiveShellView(This,ppshv)	\
    ( (This)->lpVtbl -> QueryActiveShellView(This,ppshv) ) 

#define IShellBrowser_OnViewWindowActive(This,pshv)	\
    ( (This)->lpVtbl -> OnViewWindowActive(This,pshv) ) 

#define IShellBrowser_SetToolbarItems(This,lpButtons,nButtons,uFlags)	\
    ( (This)->lpVtbl -> SetToolbarItems(This,lpButtons,nButtons,uFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellBrowser_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0033 */
/* [local] */ 

typedef IShellBrowser *LPSHELLBROWSER;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0033_v0_0_s_ifspec;

#ifndef __IProfferService_INTERFACE_DEFINED__
#define __IProfferService_INTERFACE_DEFINED__

/* interface IProfferService */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IProfferService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb728b20-f786-11ce-92ad-00aa00a74cd0")
    IProfferService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProfferService( 
            /* [in] */ __RPC__in REFGUID guidService,
            /* [in] */ __RPC__in_opt IServiceProvider *psp,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RevokeService( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProfferServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProfferService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IProfferService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IProfferService * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProfferService )( 
            IProfferService * This,
            /* [in] */ __RPC__in REFGUID guidService,
            /* [in] */ __RPC__in_opt IServiceProvider *psp,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *RevokeService )( 
            IProfferService * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IProfferServiceVtbl;

    interface IProfferService
    {
        CONST_VTBL struct IProfferServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProfferService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProfferService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProfferService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProfferService_ProfferService(This,guidService,psp,pdwCookie)	\
    ( (This)->lpVtbl -> ProfferService(This,guidService,psp,pdwCookie) ) 

#define IProfferService_RevokeService(This,dwCookie)	\
    ( (This)->lpVtbl -> RevokeService(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProfferService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0034 */
/* [local] */ 

#define SID_SProfferService IID_IProfferService    // nearest service that you can proffer to
#define STR_DONT_RESOLVE_LINK      L"Don't Resolve Link"
#define STR_PLAYLIST_EDITOR_UI  L"Static List In Dialog"


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0034_v0_0_s_ifspec;

#ifndef __IShellItem_INTERFACE_DEFINED__
#define __IShellItem_INTERFACE_DEFINED__

/* interface IShellItem */
/* [unique][object][uuid][helpstring] */ 

typedef /* [v1_enum] */ 
enum tagSIGDN
    {	SIGDN_NORMALDISPLAY	= 0,
	SIGDN_PARENTRELATIVEPARSING	= 0x80018001,
	SIGDN_DESKTOPABSOLUTEPARSING	= 0x80028000,
	SIGDN_PARENTRELATIVEEDITING	= 0x80031001,
	SIGDN_DESKTOPABSOLUTEEDITING	= 0x8004c000,
	SIGDN_FILESYSPATH	= 0x80058000,
	SIGDN_URL	= 0x80068000,
	SIGDN_PARENTRELATIVEFORADDRESSBAR	= 0x8007c001,
	SIGDN_PARENTRELATIVE	= 0x80080001
    } 	SIGDN;

/* [v1_enum] */ 
enum tagSHELLITEMCOMPAREHINTF
    {	SICHINT_DISPLAY	= 0,
	SICHINT_ALLFIELDS	= 0x80000000,
	SICHINT_CANONICAL	= 0x10000000
    } ;
typedef DWORD SICHINTF;


EXTERN_C const IID IID_IShellItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43826d1e-e718-42ee-bc55-a1e261c37bfe")
    IShellItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BindToHandler( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [in] */ SIGDN sigdnName,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Compare( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )( 
            IShellItem * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IShellItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            IShellItem * This,
            /* [in] */ SIGDN sigdnName,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IShellItem * This,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            IShellItem * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder);
        
        END_INTERFACE
    } IShellItemVtbl;

    interface IShellItem
    {
        CONST_VTBL struct IShellItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItem_BindToHandler(This,pbc,bhid,riid,ppv)	\
    ( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppv) ) 

#define IShellItem_GetParent(This,ppsi)	\
    ( (This)->lpVtbl -> GetParent(This,ppsi) ) 

#define IShellItem_GetDisplayName(This,sigdnName,ppszName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,sigdnName,ppszName) ) 

#define IShellItem_GetAttributes(This,sfgaoMask,psfgaoAttribs)	\
    ( (This)->lpVtbl -> GetAttributes(This,sfgaoMask,psfgaoAttribs) ) 

#define IShellItem_Compare(This,psi,hint,piOrder)	\
    ( (This)->lpVtbl -> Compare(This,psi,hint,piOrder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0035 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)
// CLSID_ShellItem create and init helper APIs. produce IShellItem derived interfaces from these different expressions of an item
SHSTDAPI SHCreateItemFromIDList(__in PCIDLIST_ABSOLUTE pidl, __in REFIID riid, __deref_out void **ppv);
SHSTDAPI SHCreateItemFromParsingName(__in PCWSTR pszPath, __in_opt IBindCtx *pbc, __in REFIID riid, __deref_out void **ppv);
SHSTDAPI SHCreateItemWithParent(__in_opt PCIDLIST_ABSOLUTE pidlParent, __in_opt IShellFolder *psfParent, __in PCUITEMID_CHILD pidl, __in REFIID riid, __deref_out void **ppvItem);
SHSTDAPI SHCreateItemFromRelativeName(__in IShellItem *psiParent, __in PCWSTR pszName, __in_opt IBindCtx* pbc, __in REFIID riid, __deref_out void **ppv);
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
SHSTDAPI SHCreateItemInKnownFolder(REFKNOWNFOLDERID kfid, DWORD dwKFFlags, __in_opt PCWSTR pszItem, REFIID riid, __deref_out void **ppv);
// get the IDList expression from an object, works with objects that support IPersistIDlist or IPersistIDlist like CLSID_ShellItem and most shell folders
SHSTDAPI SHGetIDListFromObject(__in_opt IUnknown *punk, __out PIDLIST_ABSOLUTE *ppidl);
// these APIs return object that support IPropertyStore or related interfaces
SHSTDAPI SHGetPropertyStoreFromIDList(__in PCIDLIST_ABSOLUTE pidl, GETPROPERTYSTOREFLAGS flags, REFIID riid, __out void **ppv);
SHSTDAPI SHGetPropertyStoreFromParsingName(__in PCWSTR pszPath, __in_opt IBindCtx *pbc, GETPROPERTYSTOREFLAGS flags, REFIID riid, __out void **ppv);
SHSTDAPI SHGetNameFromIDList(__in PCIDLIST_ABSOLUTE pidl, SIGDN sigdnName, __out PWSTR *ppszName);
#endif // (NTDDI_VERSION >= NTDDI_LONGHORN)
#define STR_GPS_HANDLERPROPERTIESONLY      L"GPS_HANDLERPROPERTIESONLY"
#define STR_GPS_FASTPROPERTIESONLY         L"GPS_FASTPROPERTIESONLY"
#define STR_GPS_OPENSLOWITEM               L"GPS_OPENSLOWITEM"
#define STR_GPS_DELAYCREATION              L"GPS_DELAYCREATION"
#define STR_GPS_BESTEFFORT                 L"GPS_BESTEFFORT"


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0035_v0_0_s_ifspec;

#ifndef __IShellItem2_INTERFACE_DEFINED__
#define __IShellItem2_INTERFACE_DEFINED__

/* interface IShellItem2 */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IShellItem2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7e9fb0d3-919f-4307-ab2e-9b1860310c93")
    IShellItem2 : public IShellItem
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStore( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStoreWithCreateObject( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in_opt IUnknown *punkCreateObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStoreForKeys( 
            /* [size_is][in] */ __RPC__in_ecount_full(cKeys) const PROPERTYKEY *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescriptionList( 
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Update( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCLSID( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out CLSID *pclsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileTime( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out FILETIME *pft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt32( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out int *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUInt32( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONG *pui) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUInt64( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONGLONG *pull) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBool( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out BOOL *pf) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellItem2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellItem2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellItem2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )( 
            IShellItem2 * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IShellItem2 * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            IShellItem2 * This,
            /* [in] */ SIGDN sigdnName,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IShellItem2 * This,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStore )( 
            IShellItem2 * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStoreWithCreateObject )( 
            IShellItem2 * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in_opt IUnknown *punkCreateObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStoreForKeys )( 
            IShellItem2 * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cKeys) const PROPERTYKEY *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescriptionList )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IShellItem2 * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out CLSID *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTime )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out FILETIME *pft);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt32 )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetUInt32 )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONG *pui);
        
        HRESULT ( STDMETHODCALLTYPE *GetUInt64 )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONGLONG *pull);
        
        HRESULT ( STDMETHODCALLTYPE *GetBool )( 
            IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out BOOL *pf);
        
        END_INTERFACE
    } IShellItem2Vtbl;

    interface IShellItem2
    {
        CONST_VTBL struct IShellItem2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItem2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItem2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItem2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItem2_BindToHandler(This,pbc,bhid,riid,ppv)	\
    ( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppv) ) 

#define IShellItem2_GetParent(This,ppsi)	\
    ( (This)->lpVtbl -> GetParent(This,ppsi) ) 

#define IShellItem2_GetDisplayName(This,sigdnName,ppszName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,sigdnName,ppszName) ) 

#define IShellItem2_GetAttributes(This,sfgaoMask,psfgaoAttribs)	\
    ( (This)->lpVtbl -> GetAttributes(This,sfgaoMask,psfgaoAttribs) ) 

#define IShellItem2_Compare(This,psi,hint,piOrder)	\
    ( (This)->lpVtbl -> Compare(This,psi,hint,piOrder) ) 


#define IShellItem2_GetPropertyStore(This,flags,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStore(This,flags,riid,ppv) ) 

#define IShellItem2_GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv) ) 

#define IShellItem2_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) ) 

#define IShellItem2_GetPropertyDescriptionList(This,keyType,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyDescriptionList(This,keyType,riid,ppv) ) 

#define IShellItem2_Update(This,pbc)	\
    ( (This)->lpVtbl -> Update(This,pbc) ) 

#define IShellItem2_GetProperty(This,key,ppropvar)	\
    ( (This)->lpVtbl -> GetProperty(This,key,ppropvar) ) 

#define IShellItem2_GetCLSID(This,key,pclsid)	\
    ( (This)->lpVtbl -> GetCLSID(This,key,pclsid) ) 

#define IShellItem2_GetFileTime(This,key,pft)	\
    ( (This)->lpVtbl -> GetFileTime(This,key,pft) ) 

#define IShellItem2_GetInt32(This,key,pi)	\
    ( (This)->lpVtbl -> GetInt32(This,key,pi) ) 

#define IShellItem2_GetString(This,key,ppsz)	\
    ( (This)->lpVtbl -> GetString(This,key,ppsz) ) 

#define IShellItem2_GetUInt32(This,key,pui)	\
    ( (This)->lpVtbl -> GetUInt32(This,key,pui) ) 

#define IShellItem2_GetUInt64(This,key,pull)	\
    ( (This)->lpVtbl -> GetUInt64(This,key,pull) ) 

#define IShellItem2_GetBool(This,key,pf)	\
    ( (This)->lpVtbl -> GetBool(This,key,pf) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItem2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0036 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum tagSIIGB
    {	SIIGBF_RESIZETOFIT	= 0,
	SIIGBF_BIGGERSIZEOK	= 0x1,
	SIIGBF_MEMORYONLY	= 0x2,
	SIIGBF_ICONONLY	= 0x4,
	SIIGBF_THUMBNAILONLY	= 0x8,
	SIIGBF_INCACHEONLY	= 0x10
    } 	SIIGB;

typedef int SIIGBF;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0036_v0_0_s_ifspec;

#ifndef __IShellItemImageFactory_INTERFACE_DEFINED__
#define __IShellItemImageFactory_INTERFACE_DEFINED__

/* interface IShellItemImageFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellItemImageFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bcc18b79-ba16-442f-80c4-8a59c30c463b")
    IShellItemImageFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetImage( 
            /* [in] */ SIZE size,
            /* [in] */ SIIGBF flags,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellItemImageFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellItemImageFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellItemImageFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellItemImageFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetImage )( 
            IShellItemImageFactory * This,
            /* [in] */ SIZE size,
            /* [in] */ SIIGBF flags,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm);
        
        END_INTERFACE
    } IShellItemImageFactoryVtbl;

    interface IShellItemImageFactory
    {
        CONST_VTBL struct IShellItemImageFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemImageFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemImageFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemImageFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemImageFactory_GetImage(This,size,flags,phbm)	\
    ( (This)->lpVtbl -> GetImage(This,size,flags,phbm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemImageFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0037 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINXP)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0037_v0_0_s_ifspec;

#ifndef __IEnumShellItems_INTERFACE_DEFINED__
#define __IEnumShellItems_INTERFACE_DEFINED__

/* interface IEnumShellItems */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IEnumShellItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70629033-e363-4a28-a567-0db78006e6d7")
    IEnumShellItems : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) IShellItem **rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumShellItems **ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumShellItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumShellItems * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumShellItems * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumShellItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumShellItems * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) IShellItem **rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumShellItems * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumShellItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumShellItems * This,
            /* [out] */ __RPC__deref_out_opt IEnumShellItems **ppenum);
        
        END_INTERFACE
    } IEnumShellItemsVtbl;

    interface IEnumShellItems
    {
        CONST_VTBL struct IEnumShellItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumShellItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumShellItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumShellItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumShellItems_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumShellItems_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumShellItems_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumShellItems_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumShellItems_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0038 */
/* [local] */ 

typedef GUID STGTRANSCONFIRMATION;

typedef GUID *LPSTGTRANSCONFIRMATION;

typedef /* [v1_enum] */ 
enum tagSTGOP
    {	STGOP_MOVE	= 1,
	STGOP_COPY	= 2,
	STGOP_SYNC	= 3,
	STGOP_REMOVE	= 5,
	STGOP_RENAME	= 6,
	STGOP_APPLYPROPERTIES	= 8,
	STGOP_NEW	= 10
    } 	STGOP;

#endif  // NTDDI_WINXP
#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0038_v0_0_s_ifspec;

#ifndef __ITransferAdviseSink_INTERFACE_DEFINED__
#define __ITransferAdviseSink_INTERFACE_DEFINED__

/* interface ITransferAdviseSink */
/* [object][local][unique][uuid] */ 

/* [v1_enum] */ 
enum tagTRANSFER_ADVISE_STATE
    {	TS_PERFORMING	= 0x1,
	TS_PREPARING	= 0x2,
	TS_INDETERMINATE	= 0x4
    } ;
typedef DWORD TRANSFER_ADVISE_STATE;


EXTERN_C const IID IID_ITransferAdviseSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d594d0d8-8da7-457b-b3b4-ce5dbaac0b88")
    ITransferAdviseSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            /* [in] */ 
            __in  ULONGLONG ullSizeCurrent,
            /* [in] */ 
            __in  ULONGLONG ullSizeTotal,
            /* [in] */ 
            __in  int nFilesCurrent,
            /* [in] */ 
            __in  int nFilesTotal,
            /* [in] */ 
            __in  int nFoldersCurrent,
            /* [in] */ 
            __in  int nFoldersTotal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateTransferState( 
            /* [in] */ 
            __in  TRANSFER_ADVISE_STATE ts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfirmOverwrite( 
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  IShellItem *psiDestParent,
            /* [string][in] */ 
            __in  LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfirmEncryptionLoss( 
            /* [in] */ 
            __in  IShellItem *psiSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FileFailure( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [string][unique][in] */ 
            __in_opt  LPCWSTR pszItem,
            /* [in] */ 
            __in  HRESULT hrError,
            /* [size_is][unique][out] */ 
            __out_ecount_opt(cchRename)  LPWSTR pszRename,
            /* [in] */ 
            __in  ULONG cchRename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubStreamFailure( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [string][in] */ 
            __in  LPCWSTR pszStreamName,
            /* [in] */ 
            __in  HRESULT hrError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PropertyFailure( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [unique][in] */ 
            __in_opt  const PROPERTYKEY *pkey,
            /* [in] */ 
            __in  HRESULT hrError) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITransferAdviseSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransferAdviseSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransferAdviseSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransferAdviseSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            ITransferAdviseSink * This,
            /* [in] */ 
            __in  ULONGLONG ullSizeCurrent,
            /* [in] */ 
            __in  ULONGLONG ullSizeTotal,
            /* [in] */ 
            __in  int nFilesCurrent,
            /* [in] */ 
            __in  int nFilesTotal,
            /* [in] */ 
            __in  int nFoldersCurrent,
            /* [in] */ 
            __in  int nFoldersTotal);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateTransferState )( 
            ITransferAdviseSink * This,
            /* [in] */ 
            __in  TRANSFER_ADVISE_STATE ts);
        
        HRESULT ( STDMETHODCALLTYPE *ConfirmOverwrite )( 
            ITransferAdviseSink * This,
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  IShellItem *psiDestParent,
            /* [string][in] */ 
            __in  LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *ConfirmEncryptionLoss )( 
            ITransferAdviseSink * This,
            /* [in] */ 
            __in  IShellItem *psiSource);
        
        HRESULT ( STDMETHODCALLTYPE *FileFailure )( 
            ITransferAdviseSink * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [string][unique][in] */ 
            __in_opt  LPCWSTR pszItem,
            /* [in] */ 
            __in  HRESULT hrError,
            /* [size_is][unique][out] */ 
            __out_ecount_opt(cchRename)  LPWSTR pszRename,
            /* [in] */ 
            __in  ULONG cchRename);
        
        HRESULT ( STDMETHODCALLTYPE *SubStreamFailure )( 
            ITransferAdviseSink * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [string][in] */ 
            __in  LPCWSTR pszStreamName,
            /* [in] */ 
            __in  HRESULT hrError);
        
        HRESULT ( STDMETHODCALLTYPE *PropertyFailure )( 
            ITransferAdviseSink * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [unique][in] */ 
            __in_opt  const PROPERTYKEY *pkey,
            /* [in] */ 
            __in  HRESULT hrError);
        
        END_INTERFACE
    } ITransferAdviseSinkVtbl;

    interface ITransferAdviseSink
    {
        CONST_VTBL struct ITransferAdviseSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransferAdviseSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransferAdviseSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransferAdviseSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransferAdviseSink_UpdateProgress(This,ullSizeCurrent,ullSizeTotal,nFilesCurrent,nFilesTotal,nFoldersCurrent,nFoldersTotal)	\
    ( (This)->lpVtbl -> UpdateProgress(This,ullSizeCurrent,ullSizeTotal,nFilesCurrent,nFilesTotal,nFoldersCurrent,nFoldersTotal) ) 

#define ITransferAdviseSink_UpdateTransferState(This,ts)	\
    ( (This)->lpVtbl -> UpdateTransferState(This,ts) ) 

#define ITransferAdviseSink_ConfirmOverwrite(This,psiSource,psiDestParent,pszName)	\
    ( (This)->lpVtbl -> ConfirmOverwrite(This,psiSource,psiDestParent,pszName) ) 

#define ITransferAdviseSink_ConfirmEncryptionLoss(This,psiSource)	\
    ( (This)->lpVtbl -> ConfirmEncryptionLoss(This,psiSource) ) 

#define ITransferAdviseSink_FileFailure(This,psi,pszItem,hrError,pszRename,cchRename)	\
    ( (This)->lpVtbl -> FileFailure(This,psi,pszItem,hrError,pszRename,cchRename) ) 

#define ITransferAdviseSink_SubStreamFailure(This,psi,pszStreamName,hrError)	\
    ( (This)->lpVtbl -> SubStreamFailure(This,psi,pszStreamName,hrError) ) 

#define ITransferAdviseSink_PropertyFailure(This,psi,pkey,hrError)	\
    ( (This)->lpVtbl -> PropertyFailure(This,psi,pkey,hrError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransferAdviseSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0039 */
/* [local] */ 

#define TSF_NORMAL                      0x0000
#define TSF_FAIL_EXIST                  0x0000      // Fail if destination already exists
#define TSF_RENAME_EXIST                0x0001      // Rename with auto-name generation if destination already exists
#define TSF_OVERWRITE_EXIST             0x0002      // Overwrite/Merge with destination
#define TSF_ALLOW_DECRYPTION            0x0004      // Allow creation of decrypted destination
#define TSF_NO_SECURITY                 0x0008      // Without DACL/SACL/Owner
#define TSF_COPY_CREATION_TIME          0x0010      // Copy the creation time as part of the copy (useful for move as copy/delete)
#define TSF_COPY_WRITE_TIME             0x0020      // Copy the last write time as part of the copy
#define TSF_USE_FULL_ACCESS             0x0040      // Open a file with write, read, or delete as share mode
#define TSF_DELETE_RECYCLE_IF_POSSIBLE  0x0080      // Recycle if possible
#define TSF_COPY_HARD_LINK              0x0100      // Hard link desired (not required)
#define TSF_COPY_LOCALIZED_NAME         0x0200      // Copy localized name
#define TSF_MOVE_AS_COPY_DELETE         0x0400      // We are doing a move operation, but we are doing it as a copy/delete
#define TSF_SUSPEND_SHELLEVENTS         0x0800      // suspend shell events
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)
#if (NTDDI_VERSION >= NTDDI_LONGHORN)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0039_v0_0_s_ifspec;

#ifndef __ITransferSource_INTERFACE_DEFINED__
#define __ITransferSource_INTERFACE_DEFINED__

/* interface ITransferSource */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ITransferSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00adb003-bde9-45c6-8e29-d09f9353e108")
    ITransferSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ 
            __in  ITransferAdviseSink *psink,
            /* [out] */ 
            __out  DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ 
            __in  DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperties( 
            /* [in] */ 
            __in  IPropertyChangeArray *pproparray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenItem( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  DWORD dwFlags,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveItem( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  IShellItem *psiParentDst,
            /* [string][in] */ 
            __in  LPCWSTR pszNameDst,
            /* [in] */ DWORD dwFlags,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RecycleItem( 
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  IShellItem *psiParentDest,
            /* [in] */ 
            __in  DWORD dwFlags,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNewDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveItem( 
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenameItem( 
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [string][in] */ 
            __in  LPCWSTR pszNewName,
            /* [in] */ 
            __in  DWORD dwFlags,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNewDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LinkItem( 
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  IShellItem *psiParentDest,
            /* [string][unique][in] */ 
            __in_opt  LPCWSTR pszNewName,
            /* [in] */ 
            __in  DWORD dwLinkFlags,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNewDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyPropertiesToItem( 
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultDestinationName( 
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  IShellItem *psiParentDest,
            /* [string][out] */ 
            __deref_out  LPWSTR *ppszDestinationName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnterFolder( 
            /* [in] */ 
            __in  IShellItem *psiChildFolderDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LeaveFolder( 
            /* [in] */ 
            __in  IShellItem *psiChildFolderDest) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITransferSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransferSource * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransferSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransferSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITransferSource * This,
            /* [in] */ 
            __in  ITransferAdviseSink *psink,
            /* [out] */ 
            __out  DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITransferSource * This,
            /* [in] */ 
            __in  DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperties )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IPropertyChangeArray *pproparray);
        
        HRESULT ( STDMETHODCALLTYPE *OpenItem )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  DWORD dwFlags,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *MoveItem )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  IShellItem *psiParentDst,
            /* [string][in] */ 
            __in  LPCWSTR pszNameDst,
            /* [in] */ DWORD dwFlags,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNew);
        
        HRESULT ( STDMETHODCALLTYPE *RecycleItem )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  IShellItem *psiParentDest,
            /* [in] */ 
            __in  DWORD dwFlags,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNewDest);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveItem )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *RenameItem )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [string][in] */ 
            __in  LPCWSTR pszNewName,
            /* [in] */ 
            __in  DWORD dwFlags,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNewDest);
        
        HRESULT ( STDMETHODCALLTYPE *LinkItem )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  IShellItem *psiParentDest,
            /* [string][unique][in] */ 
            __in_opt  LPCWSTR pszNewName,
            /* [in] */ 
            __in  DWORD dwLinkFlags,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNewDest);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyPropertiesToItem )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNew);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultDestinationName )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psiSource,
            /* [in] */ 
            __in  IShellItem *psiParentDest,
            /* [string][out] */ 
            __deref_out  LPWSTR *ppszDestinationName);
        
        HRESULT ( STDMETHODCALLTYPE *EnterFolder )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psiChildFolderDest);
        
        HRESULT ( STDMETHODCALLTYPE *LeaveFolder )( 
            ITransferSource * This,
            /* [in] */ 
            __in  IShellItem *psiChildFolderDest);
        
        END_INTERFACE
    } ITransferSourceVtbl;

    interface ITransferSource
    {
        CONST_VTBL struct ITransferSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransferSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransferSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransferSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransferSource_Advise(This,psink,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,psink,pdwCookie) ) 

#define ITransferSource_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define ITransferSource_SetProperties(This,pproparray)	\
    ( (This)->lpVtbl -> SetProperties(This,pproparray) ) 

#define ITransferSource_OpenItem(This,psi,dwFlags,riid,ppv)	\
    ( (This)->lpVtbl -> OpenItem(This,psi,dwFlags,riid,ppv) ) 

#define ITransferSource_MoveItem(This,psi,psiParentDst,pszNameDst,dwFlags,ppsiNew)	\
    ( (This)->lpVtbl -> MoveItem(This,psi,psiParentDst,pszNameDst,dwFlags,ppsiNew) ) 

#define ITransferSource_RecycleItem(This,psiSource,psiParentDest,dwFlags,ppsiNewDest)	\
    ( (This)->lpVtbl -> RecycleItem(This,psiSource,psiParentDest,dwFlags,ppsiNewDest) ) 

#define ITransferSource_RemoveItem(This,psiSource,dwFlags)	\
    ( (This)->lpVtbl -> RemoveItem(This,psiSource,dwFlags) ) 

#define ITransferSource_RenameItem(This,psiSource,pszNewName,dwFlags,ppsiNewDest)	\
    ( (This)->lpVtbl -> RenameItem(This,psiSource,pszNewName,dwFlags,ppsiNewDest) ) 

#define ITransferSource_LinkItem(This,psiSource,psiParentDest,pszNewName,dwLinkFlags,ppsiNewDest)	\
    ( (This)->lpVtbl -> LinkItem(This,psiSource,psiParentDest,pszNewName,dwLinkFlags,ppsiNewDest) ) 

#define ITransferSource_ApplyPropertiesToItem(This,psiSource,ppsiNew)	\
    ( (This)->lpVtbl -> ApplyPropertiesToItem(This,psiSource,ppsiNew) ) 

#define ITransferSource_GetDefaultDestinationName(This,psiSource,psiParentDest,ppszDestinationName)	\
    ( (This)->lpVtbl -> GetDefaultDestinationName(This,psiSource,psiParentDest,ppszDestinationName) ) 

#define ITransferSource_EnterFolder(This,psiChildFolderDest)	\
    ( (This)->lpVtbl -> EnterFolder(This,psiChildFolderDest) ) 

#define ITransferSource_LeaveFolder(This,psiChildFolderDest)	\
    ( (This)->lpVtbl -> LeaveFolder(This,psiChildFolderDest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransferSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0040 */
/* [local] */ 

#endif  // NTDDI_LONGHORN
typedef struct _shell_item_resource_
    {
    GUID guidType;
    WCHAR szName[ 260 ];
    } 	SHELL_ITEM_RESOURCE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0040_v0_0_s_ifspec;

#ifndef __IEnumResources_INTERFACE_DEFINED__
#define __IEnumResources_INTERFACE_DEFINED__

/* interface IEnumResources */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumResources;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2dd81fe3-a83c-4da9-a330-47249d345ba1")
    IEnumResources : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [size_is][out] */ __RPC__out_ecount_full(celt) SHELL_ITEM_RESOURCE *psir,
            /* [out] */ __RPC__out ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumResources **ppenumr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumResourcesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumResources * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumResources * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumResources * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumResources * This,
            /* [in] */ ULONG celt,
            /* [size_is][out] */ __RPC__out_ecount_full(celt) SHELL_ITEM_RESOURCE *psir,
            /* [out] */ __RPC__out ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumResources * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumResources * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumResources * This,
            /* [out] */ __RPC__deref_out_opt IEnumResources **ppenumr);
        
        END_INTERFACE
    } IEnumResourcesVtbl;

    interface IEnumResources
    {
        CONST_VTBL struct IEnumResourcesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumResources_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumResources_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumResources_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumResources_Next(This,celt,psir,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,psir,pceltFetched) ) 

#define IEnumResources_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumResources_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumResources_Clone(This,ppenumr)	\
    ( (This)->lpVtbl -> Clone(This,ppenumr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumResources_INTERFACE_DEFINED__ */


#ifndef __IShellItemResources_INTERFACE_DEFINED__
#define __IShellItemResources_INTERFACE_DEFINED__

/* interface IShellItemResources */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IShellItemResources;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff5693be-2ce0-4d48-b5c5-40817d1acdb9")
    IShellItemResources : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [out] */ __RPC__out DWORD *pdwAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ __RPC__out ULONGLONG *pullSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimes( 
            /* [out] */ __RPC__out FILETIME *pftCreation,
            /* [out] */ __RPC__out FILETIME *pftWrite,
            /* [out] */ __RPC__out FILETIME *pftAccess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTimes( 
            /* [in] */ __RPC__in const FILETIME *pftCreation,
            /* [in] */ __RPC__in const FILETIME *pftWrite,
            /* [in] */ __RPC__in const FILETIME *pftAccess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResourceDescription( 
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumResources( 
            /* [out] */ __RPC__deref_out_opt IEnumResources **ppenumr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SupportsResource( 
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenResource( 
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateResource( 
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MarkForDelete( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellItemResourcesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellItemResources * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellItemResources * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellItemResources * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IShellItemResources * This,
            /* [out] */ __RPC__out DWORD *pdwAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IShellItemResources * This,
            /* [out] */ __RPC__out ULONGLONG *pullSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimes )( 
            IShellItemResources * This,
            /* [out] */ __RPC__out FILETIME *pftCreation,
            /* [out] */ __RPC__out FILETIME *pftWrite,
            /* [out] */ __RPC__out FILETIME *pftAccess);
        
        HRESULT ( STDMETHODCALLTYPE *SetTimes )( 
            IShellItemResources * This,
            /* [in] */ __RPC__in const FILETIME *pftCreation,
            /* [in] */ __RPC__in const FILETIME *pftWrite,
            /* [in] */ __RPC__in const FILETIME *pftAccess);
        
        HRESULT ( STDMETHODCALLTYPE *GetResourceDescription )( 
            IShellItemResources * This,
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszDescription);
        
        HRESULT ( STDMETHODCALLTYPE *EnumResources )( 
            IShellItemResources * This,
            /* [out] */ __RPC__deref_out_opt IEnumResources **ppenumr);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsResource )( 
            IShellItemResources * This,
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir);
        
        HRESULT ( STDMETHODCALLTYPE *OpenResource )( 
            IShellItemResources * This,
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *CreateResource )( 
            IShellItemResources * This,
            /* [in] */ __RPC__in const SHELL_ITEM_RESOURCE *pcsir,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *MarkForDelete )( 
            IShellItemResources * This);
        
        END_INTERFACE
    } IShellItemResourcesVtbl;

    interface IShellItemResources
    {
        CONST_VTBL struct IShellItemResourcesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemResources_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemResources_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemResources_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemResources_GetAttributes(This,pdwAttributes)	\
    ( (This)->lpVtbl -> GetAttributes(This,pdwAttributes) ) 

#define IShellItemResources_GetSize(This,pullSize)	\
    ( (This)->lpVtbl -> GetSize(This,pullSize) ) 

#define IShellItemResources_GetTimes(This,pftCreation,pftWrite,pftAccess)	\
    ( (This)->lpVtbl -> GetTimes(This,pftCreation,pftWrite,pftAccess) ) 

#define IShellItemResources_SetTimes(This,pftCreation,pftWrite,pftAccess)	\
    ( (This)->lpVtbl -> SetTimes(This,pftCreation,pftWrite,pftAccess) ) 

#define IShellItemResources_GetResourceDescription(This,pcsir,ppszDescription)	\
    ( (This)->lpVtbl -> GetResourceDescription(This,pcsir,ppszDescription) ) 

#define IShellItemResources_EnumResources(This,ppenumr)	\
    ( (This)->lpVtbl -> EnumResources(This,ppenumr) ) 

#define IShellItemResources_SupportsResource(This,pcsir)	\
    ( (This)->lpVtbl -> SupportsResource(This,pcsir) ) 

#define IShellItemResources_OpenResource(This,pcsir,riid,ppv)	\
    ( (This)->lpVtbl -> OpenResource(This,pcsir,riid,ppv) ) 

#define IShellItemResources_CreateResource(This,pcsir,riid,ppv)	\
    ( (This)->lpVtbl -> CreateResource(This,pcsir,riid,ppv) ) 

#define IShellItemResources_MarkForDelete(This)	\
    ( (This)->lpVtbl -> MarkForDelete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemResources_INTERFACE_DEFINED__ */


#ifndef __ITransferDestination_INTERFACE_DEFINED__
#define __ITransferDestination_INTERFACE_DEFINED__

/* interface ITransferDestination */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ITransferDestination;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48addd32-3ca5-4124-abe3-b5a72531b207")
    ITransferDestination : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ 
            __in  ITransferAdviseSink *psink,
            /* [out] */ 
            __out  DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateItem( 
            /* [string][in] */ 
            __in  LPCWSTR pszName,
            /* [in] */ 
            __in  DWORD dwAttributes,
            /* [in] */ 
            __in  ULONGLONG ullSize,
            /* [in] */ 
            __in  DWORD dwFlags,
            /* [in] */ 
            __in  REFIID riidItem,
            /* [iid_is][out] */ 
            __deref_out  void **ppvItem,
            /* [in] */ 
            __in  REFIID riidResources,
            /* [iid_is][out] */ 
            __deref_out  void **ppvResources) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITransferDestinationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransferDestination * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransferDestination * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransferDestination * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            ITransferDestination * This,
            /* [in] */ 
            __in  ITransferAdviseSink *psink,
            /* [out] */ 
            __out  DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            ITransferDestination * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *CreateItem )( 
            ITransferDestination * This,
            /* [string][in] */ 
            __in  LPCWSTR pszName,
            /* [in] */ 
            __in  DWORD dwAttributes,
            /* [in] */ 
            __in  ULONGLONG ullSize,
            /* [in] */ 
            __in  DWORD dwFlags,
            /* [in] */ 
            __in  REFIID riidItem,
            /* [iid_is][out] */ 
            __deref_out  void **ppvItem,
            /* [in] */ 
            __in  REFIID riidResources,
            /* [iid_is][out] */ 
            __deref_out  void **ppvResources);
        
        END_INTERFACE
    } ITransferDestinationVtbl;

    interface ITransferDestination
    {
        CONST_VTBL struct ITransferDestinationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransferDestination_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransferDestination_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransferDestination_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransferDestination_Advise(This,psink,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,psink,pdwCookie) ) 

#define ITransferDestination_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define ITransferDestination_CreateItem(This,pszName,dwAttributes,ullSize,dwFlags,riidItem,ppvItem,riidResources,ppvResources)	\
    ( (This)->lpVtbl -> CreateItem(This,pszName,dwAttributes,ullSize,dwFlags,riidItem,ppvItem,riidResources,ppvResources) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransferDestination_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0043 */
/* [local] */ 

#ifdef MIDL_PASS
typedef struct _OVERLAPPED
    {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union 
        {
        struct 
            {
            DWORD Offset;
            DWORD OffsetHigh;
            } 	;
        PVOID Pointer;
        } 	;
    HANDLE hEvent;
    } 	OVERLAPPED;

typedef struct _OVERLAPPED *LPOVERLAPPED;

#endif // MIDL_PASS


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0043_v0_0_s_ifspec;

#ifndef __IStreamAsync_INTERFACE_DEFINED__
#define __IStreamAsync_INTERFACE_DEFINED__

/* interface IStreamAsync */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamAsync;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe0b6665-e0ca-49b9-a178-2b5cb48d92a5")
    IStreamAsync : public IStream
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReadAsync( 
            /* [length_is][size_is][out] */ 
            __in_bcount(cb)  void *pv,
            /* [in] */ DWORD cb,
            /* [out] */ 
            __out  LPDWORD pcbRead,
            /* [in] */ 
            __in  LPOVERLAPPED lpOverlapped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteAsync( 
            /* [length_is][size_is][in] */ 
            __in_bcount(cb)  const void *lpBuffer,
            /* [in] */ DWORD cb,
            /* [out] */ 
            __out  LPDWORD pcbWritten,
            /* [in] */ 
            __in  LPOVERLAPPED lpOverlapped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverlappedResult( 
            /* [in] */ 
            __in  LPOVERLAPPED lpOverlapped,
            /* [out] */ 
            __out  LPDWORD lpNumberOfBytesTransferred,
            /* [in] */ 
            __in  BOOL bWait) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelIo( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamAsyncVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamAsync * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamAsync * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamAsync * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IStreamAsync * This,
            /* [length_is][size_is][out] */ void *pv,
            /* [in] */ ULONG cb,
            /* [out] */ ULONG *pcbRead);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            IStreamAsync * This,
            /* [size_is][in] */ const void *pv,
            /* [in] */ ULONG cb,
            /* [out] */ ULONG *pcbWritten);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Seek )( 
            IStreamAsync * This,
            /* [in] */ LARGE_INTEGER dlibMove,
            /* [in] */ DWORD dwOrigin,
            /* [out] */ ULARGE_INTEGER *plibNewPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            IStreamAsync * This,
            /* [in] */ ULARGE_INTEGER libNewSize);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            IStreamAsync * This,
            /* [unique][in] */ IStream *pstm,
            /* [in] */ ULARGE_INTEGER cb,
            /* [out] */ ULARGE_INTEGER *pcbRead,
            /* [out] */ ULARGE_INTEGER *pcbWritten);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IStreamAsync * This,
            /* [in] */ DWORD grfCommitFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Revert )( 
            IStreamAsync * This);
        
        HRESULT ( STDMETHODCALLTYPE *LockRegion )( 
            IStreamAsync * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )( 
            IStreamAsync * This,
            /* [in] */ ULARGE_INTEGER libOffset,
            /* [in] */ ULARGE_INTEGER cb,
            /* [in] */ DWORD dwLockType);
        
        HRESULT ( STDMETHODCALLTYPE *Stat )( 
            IStreamAsync * This,
            /* [out] */ STATSTG *pstatstg,
            /* [in] */ DWORD grfStatFlag);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IStreamAsync * This,
            /* [out] */ IStream **ppstm);
        
        HRESULT ( STDMETHODCALLTYPE *ReadAsync )( 
            IStreamAsync * This,
            /* [length_is][size_is][out] */ 
            __in_bcount(cb)  void *pv,
            /* [in] */ DWORD cb,
            /* [out] */ 
            __out  LPDWORD pcbRead,
            /* [in] */ 
            __in  LPOVERLAPPED lpOverlapped);
        
        HRESULT ( STDMETHODCALLTYPE *WriteAsync )( 
            IStreamAsync * This,
            /* [length_is][size_is][in] */ 
            __in_bcount(cb)  const void *lpBuffer,
            /* [in] */ DWORD cb,
            /* [out] */ 
            __out  LPDWORD pcbWritten,
            /* [in] */ 
            __in  LPOVERLAPPED lpOverlapped);
        
        HRESULT ( STDMETHODCALLTYPE *OverlappedResult )( 
            IStreamAsync * This,
            /* [in] */ 
            __in  LPOVERLAPPED lpOverlapped,
            /* [out] */ 
            __out  LPDWORD lpNumberOfBytesTransferred,
            /* [in] */ 
            __in  BOOL bWait);
        
        HRESULT ( STDMETHODCALLTYPE *CancelIo )( 
            IStreamAsync * This);
        
        END_INTERFACE
    } IStreamAsyncVtbl;

    interface IStreamAsync
    {
        CONST_VTBL struct IStreamAsyncVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamAsync_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamAsync_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamAsync_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamAsync_Read(This,pv,cb,pcbRead)	\
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) ) 

#define IStreamAsync_Write(This,pv,cb,pcbWritten)	\
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) ) 


#define IStreamAsync_Seek(This,dlibMove,dwOrigin,plibNewPosition)	\
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) ) 

#define IStreamAsync_SetSize(This,libNewSize)	\
    ( (This)->lpVtbl -> SetSize(This,libNewSize) ) 

#define IStreamAsync_CopyTo(This,pstm,cb,pcbRead,pcbWritten)	\
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) ) 

#define IStreamAsync_Commit(This,grfCommitFlags)	\
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) ) 

#define IStreamAsync_Revert(This)	\
    ( (This)->lpVtbl -> Revert(This) ) 

#define IStreamAsync_LockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) ) 

#define IStreamAsync_UnlockRegion(This,libOffset,cb,dwLockType)	\
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) ) 

#define IStreamAsync_Stat(This,pstatstg,grfStatFlag)	\
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) ) 

#define IStreamAsync_Clone(This,ppstm)	\
    ( (This)->lpVtbl -> Clone(This,ppstm) ) 


#define IStreamAsync_ReadAsync(This,pv,cb,pcbRead,lpOverlapped)	\
    ( (This)->lpVtbl -> ReadAsync(This,pv,cb,pcbRead,lpOverlapped) ) 

#define IStreamAsync_WriteAsync(This,lpBuffer,cb,pcbWritten,lpOverlapped)	\
    ( (This)->lpVtbl -> WriteAsync(This,lpBuffer,cb,pcbWritten,lpOverlapped) ) 

#define IStreamAsync_OverlappedResult(This,lpOverlapped,lpNumberOfBytesTransferred,bWait)	\
    ( (This)->lpVtbl -> OverlappedResult(This,lpOverlapped,lpNumberOfBytesTransferred,bWait) ) 

#define IStreamAsync_CancelIo(This)	\
    ( (This)->lpVtbl -> CancelIo(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamAsync_INTERFACE_DEFINED__ */


#ifndef __IStreamUnbufferedInfo_INTERFACE_DEFINED__
#define __IStreamUnbufferedInfo_INTERFACE_DEFINED__

/* interface IStreamUnbufferedInfo */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IStreamUnbufferedInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8a68fdda-1fdc-4c20-8ceb-416643b5a625")
    IStreamUnbufferedInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSectorSize( 
            /* [out] */ 
            __out  ULONG *pcbSectorSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStreamUnbufferedInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStreamUnbufferedInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStreamUnbufferedInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStreamUnbufferedInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSectorSize )( 
            IStreamUnbufferedInfo * This,
            /* [out] */ 
            __out  ULONG *pcbSectorSize);
        
        END_INTERFACE
    } IStreamUnbufferedInfoVtbl;

    interface IStreamUnbufferedInfo
    {
        CONST_VTBL struct IStreamUnbufferedInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStreamUnbufferedInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStreamUnbufferedInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStreamUnbufferedInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStreamUnbufferedInfo_GetSectorSize(This,pcbSectorSize)	\
    ( (This)->lpVtbl -> GetSectorSize(This,pcbSectorSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStreamUnbufferedInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0045 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0045_v0_0_s_ifspec;

#ifndef __IFileOperationProgressSink_INTERFACE_DEFINED__
#define __IFileOperationProgressSink_INTERFACE_DEFINED__

/* interface IFileOperationProgressSink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IFileOperationProgressSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04b0f1a7-9490-44bc-96e1-4296a31252e2")
    IFileOperationProgressSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartOperations( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FinishOperations( 
            /* [in] */ HRESULT hrResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreRenameItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostRenameItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][in] */ __RPC__in LPCWSTR pszNewName,
            /* [in] */ HRESULT hrRename,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreMoveItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostMoveItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName,
            /* [in] */ HRESULT hrMove,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreCopyItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostCopyItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName,
            /* [in] */ HRESULT hrCopy,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreDeleteItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostDeleteItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ HRESULT hrDelete,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreNewItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostNewItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTemplateName,
            /* [in] */ DWORD dwFileAttributes,
            /* [in] */ HRESULT hrNew,
            /* [in] */ __RPC__in_opt IShellItem *psiNewItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            /* [in] */ UINT iWorkTotal,
            /* [in] */ UINT iWorkSoFar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PauseTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResumeTimer( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileOperationProgressSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileOperationProgressSink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileOperationProgressSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileOperationProgressSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartOperations )( 
            IFileOperationProgressSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *FinishOperations )( 
            IFileOperationProgressSink * This,
            /* [in] */ HRESULT hrResult);
        
        HRESULT ( STDMETHODCALLTYPE *PreRenameItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *PostRenameItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][in] */ __RPC__in LPCWSTR pszNewName,
            /* [in] */ HRESULT hrRename,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated);
        
        HRESULT ( STDMETHODCALLTYPE *PreMoveItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *PostMoveItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName,
            /* [in] */ HRESULT hrMove,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated);
        
        HRESULT ( STDMETHODCALLTYPE *PreCopyItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *PostCopyItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName,
            /* [in] */ HRESULT hrCopy,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated);
        
        HRESULT ( STDMETHODCALLTYPE *PreDeleteItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem);
        
        HRESULT ( STDMETHODCALLTYPE *PostDeleteItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ HRESULT hrDelete,
            /* [in] */ __RPC__in_opt IShellItem *psiNewlyCreated);
        
        HRESULT ( STDMETHODCALLTYPE *PreNewItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *PostNewItem )( 
            IFileOperationProgressSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTemplateName,
            /* [in] */ DWORD dwFileAttributes,
            /* [in] */ HRESULT hrNew,
            /* [in] */ __RPC__in_opt IShellItem *psiNewItem);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            IFileOperationProgressSink * This,
            /* [in] */ UINT iWorkTotal,
            /* [in] */ UINT iWorkSoFar);
        
        HRESULT ( STDMETHODCALLTYPE *ResetTimer )( 
            IFileOperationProgressSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *PauseTimer )( 
            IFileOperationProgressSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResumeTimer )( 
            IFileOperationProgressSink * This);
        
        END_INTERFACE
    } IFileOperationProgressSinkVtbl;

    interface IFileOperationProgressSink
    {
        CONST_VTBL struct IFileOperationProgressSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileOperationProgressSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileOperationProgressSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileOperationProgressSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileOperationProgressSink_StartOperations(This)	\
    ( (This)->lpVtbl -> StartOperations(This) ) 

#define IFileOperationProgressSink_FinishOperations(This,hrResult)	\
    ( (This)->lpVtbl -> FinishOperations(This,hrResult) ) 

#define IFileOperationProgressSink_PreRenameItem(This,dwFlags,psiItem,pszNewName)	\
    ( (This)->lpVtbl -> PreRenameItem(This,dwFlags,psiItem,pszNewName) ) 

#define IFileOperationProgressSink_PostRenameItem(This,dwFlags,psiItem,pszNewName,hrRename,psiNewlyCreated)	\
    ( (This)->lpVtbl -> PostRenameItem(This,dwFlags,psiItem,pszNewName,hrRename,psiNewlyCreated) ) 

#define IFileOperationProgressSink_PreMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName)	\
    ( (This)->lpVtbl -> PreMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName) ) 

#define IFileOperationProgressSink_PostMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrMove,psiNewlyCreated)	\
    ( (This)->lpVtbl -> PostMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrMove,psiNewlyCreated) ) 

#define IFileOperationProgressSink_PreCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName)	\
    ( (This)->lpVtbl -> PreCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName) ) 

#define IFileOperationProgressSink_PostCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrCopy,psiNewlyCreated)	\
    ( (This)->lpVtbl -> PostCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrCopy,psiNewlyCreated) ) 

#define IFileOperationProgressSink_PreDeleteItem(This,dwFlags,psiItem)	\
    ( (This)->lpVtbl -> PreDeleteItem(This,dwFlags,psiItem) ) 

#define IFileOperationProgressSink_PostDeleteItem(This,dwFlags,psiItem,hrDelete,psiNewlyCreated)	\
    ( (This)->lpVtbl -> PostDeleteItem(This,dwFlags,psiItem,hrDelete,psiNewlyCreated) ) 

#define IFileOperationProgressSink_PreNewItem(This,dwFlags,psiDestinationFolder,pszNewName)	\
    ( (This)->lpVtbl -> PreNewItem(This,dwFlags,psiDestinationFolder,pszNewName) ) 

#define IFileOperationProgressSink_PostNewItem(This,dwFlags,psiDestinationFolder,pszNewName,pszTemplateName,dwFileAttributes,hrNew,psiNewItem)	\
    ( (This)->lpVtbl -> PostNewItem(This,dwFlags,psiDestinationFolder,pszNewName,pszTemplateName,dwFileAttributes,hrNew,psiNewItem) ) 

#define IFileOperationProgressSink_UpdateProgress(This,iWorkTotal,iWorkSoFar)	\
    ( (This)->lpVtbl -> UpdateProgress(This,iWorkTotal,iWorkSoFar) ) 

#define IFileOperationProgressSink_ResetTimer(This)	\
    ( (This)->lpVtbl -> ResetTimer(This) ) 

#define IFileOperationProgressSink_PauseTimer(This)	\
    ( (This)->lpVtbl -> PauseTimer(This) ) 

#define IFileOperationProgressSink_ResumeTimer(This)	\
    ( (This)->lpVtbl -> ResumeTimer(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileOperationProgressSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0046 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0046_v0_0_s_ifspec;

#ifndef __IShellItemArray_INTERFACE_DEFINED__
#define __IShellItemArray_INTERFACE_DEFINED__

/* interface IShellItemArray */
/* [unique][object][uuid][helpstring] */ 

typedef /* [v1_enum] */ 
enum tagSIATTRIBFLAGS
    {	SIATTRIBFLAGS_AND	= 0x1,
	SIATTRIBFLAGS_OR	= 0x2,
	SIATTRIBFLAGS_APPCOMPAT	= 0x3,
	SIATTRIBFLAGS_MASK	= 0x3
    } 	SIATTRIBFLAGS;


EXTERN_C const IID IID_IShellItemArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b63ea76d-1f85-456f-a19c-48159efa858b")
    IShellItemArray : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BindToHandler( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID rbhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStore( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescriptionList( 
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [in] */ SIATTRIBFLAGS dwAttribFlags,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ __RPC__out DWORD *pdwNumItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemAt( 
            /* [in] */ DWORD dwIndex,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumItems( 
            /* [out] */ __RPC__deref_out_opt IEnumShellItems **ppenumShellItems) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellItemArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellItemArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellItemArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellItemArray * This);
        
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )( 
            IShellItemArray * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID rbhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStore )( 
            IShellItemArray * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescriptionList )( 
            IShellItemArray * This,
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            IShellItemArray * This,
            /* [in] */ SIATTRIBFLAGS dwAttribFlags,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IShellItemArray * This,
            /* [out] */ __RPC__out DWORD *pdwNumItems);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemAt )( 
            IShellItemArray * This,
            /* [in] */ DWORD dwIndex,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *EnumItems )( 
            IShellItemArray * This,
            /* [out] */ __RPC__deref_out_opt IEnumShellItems **ppenumShellItems);
        
        END_INTERFACE
    } IShellItemArrayVtbl;

    interface IShellItemArray
    {
        CONST_VTBL struct IShellItemArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemArray_BindToHandler(This,pbc,rbhid,riid,ppvOut)	\
    ( (This)->lpVtbl -> BindToHandler(This,pbc,rbhid,riid,ppvOut) ) 

#define IShellItemArray_GetPropertyStore(This,flags,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStore(This,flags,riid,ppv) ) 

#define IShellItemArray_GetPropertyDescriptionList(This,keyType,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyDescriptionList(This,keyType,riid,ppv) ) 

#define IShellItemArray_GetAttributes(This,dwAttribFlags,sfgaoMask,psfgaoAttribs)	\
    ( (This)->lpVtbl -> GetAttributes(This,dwAttribFlags,sfgaoMask,psfgaoAttribs) ) 

#define IShellItemArray_GetCount(This,pdwNumItems)	\
    ( (This)->lpVtbl -> GetCount(This,pdwNumItems) ) 

#define IShellItemArray_GetItemAt(This,dwIndex,ppsi)	\
    ( (This)->lpVtbl -> GetItemAt(This,dwIndex,ppsi) ) 

#define IShellItemArray_EnumItems(This,ppenumShellItems)	\
    ( (This)->lpVtbl -> EnumItems(This,ppenumShellItems) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemArray_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0047 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)
SHSTDAPI SHCreateShellItemArray(__in_opt PCIDLIST_ABSOLUTE pidlParent, __in_opt IShellFolder *psf, UINT cidl, __in_ecount(cidl) PCUITEMID_CHILD_ARRAY ppidl, __deref_out IShellItemArray **ppsiItemArray);
SHSTDAPI SHCreateShellItemArrayFromDataObject(IDataObject *pdo, REFIID riid, __deref_out void **ppv);
SHSTDAPI SHCreateShellItemArrayFromIDLists(UINT cidl, PCIDLIST_ABSOLUTE_ARRAY rgpidl, __deref_out IShellItemArray **ppsiItemArray);
SHSTDAPI SHCreateShellItemArrayFromShellItem(__in IShellItem *psi, REFIID riid, __deref_out void **ppv);
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0047_v0_0_s_ifspec;

#ifndef __IInitializeWithItem_INTERFACE_DEFINED__
#define __IInitializeWithItem_INTERFACE_DEFINED__

/* interface IInitializeWithItem */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IInitializeWithItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7f73be3f-fb79-493c-a6c7-7ee14e245841")
    IInitializeWithItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ DWORD grfMode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInitializeWithItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInitializeWithItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInitializeWithItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInitializeWithItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IInitializeWithItem * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ DWORD grfMode);
        
        END_INTERFACE
    } IInitializeWithItemVtbl;

    interface IInitializeWithItem
    {
        CONST_VTBL struct IInitializeWithItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeWithItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializeWithItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializeWithItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializeWithItem_Initialize(This,psi,grfMode)	\
    ( (This)->lpVtbl -> Initialize(This,psi,grfMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializeWithItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0048 */
/* [local] */ 

/* [v1_enum] */ 
enum tagPROPERTYUI_NAME_FLAGS
    {	PUIFNF_DEFAULT	= 0,
	PUIFNF_MNEMONIC	= 0x1
    } ;
typedef DWORD PROPERTYUI_NAME_FLAGS;

/* [v1_enum] */ 
enum tagPROPERTYUI_FLAGS
    {	PUIF_DEFAULT	= 0,
	PUIF_RIGHTALIGN	= 0x1,
	PUIF_NOLABELININFOTIP	= 0x2
    } ;
typedef DWORD PROPERTYUI_FLAGS;

/* [v1_enum] */ 
enum tagPROPERTYUI_FORMAT_FLAGS
    {	PUIFFDF_DEFAULT	= 0,
	PUIFFDF_RIGHTTOLEFT	= 0x1,
	PUIFFDF_SHORTFORMAT	= 0x2,
	PUIFFDF_NOTIME	= 0x4,
	PUIFFDF_FRIENDLYDATE	= 0x8
    } ;
typedef DWORD PROPERTYUI_FORMAT_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0048_v0_0_s_ifspec;

#ifndef __IPropertyUI_INTERFACE_DEFINED__
#define __IPropertyUI_INTERFACE_DEFINED__

/* interface IPropertyUI */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IPropertyUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("757a7d9f-919a-4118-99d7-dbb208c8cc66")
    IPropertyUI : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParsePropertyName( 
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [out] */ __RPC__out FMTID *pfmtid,
            /* [out] */ __RPC__out PROPID *ppid,
            /* [out][in] */ __RPC__inout ULONG *pchEaten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCannonicalName( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [in] */ PROPERTYUI_NAME_FLAGS flags,
            /* [size_is][out] */ __RPC__out_ecount_full(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescription( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][out] */ __RPC__out_ecount_full(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultWidth( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [out] */ __RPC__out ULONG *pcxChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [out] */ __RPC__out PROPERTYUI_FLAGS *pflags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FormatForDisplay( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [in] */ __RPC__in const PROPVARIANT *ppropvar,
            /* [in] */ PROPERTYUI_FORMAT_FLAGS puiff,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHelpInfo( 
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pwszHelpFile,
            /* [in] */ DWORD cch,
            /* [out] */ __RPC__out UINT *puHelpID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPropertyUIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyUI * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyUI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyUI * This);
        
        HRESULT ( STDMETHODCALLTYPE *ParsePropertyName )( 
            IPropertyUI * This,
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [out] */ __RPC__out FMTID *pfmtid,
            /* [out] */ __RPC__out PROPID *ppid,
            /* [out][in] */ __RPC__inout ULONG *pchEaten);
        
        HRESULT ( STDMETHODCALLTYPE *GetCannonicalName )( 
            IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [in] */ PROPERTYUI_NAME_FLAGS flags,
            /* [size_is][out] */ __RPC__out_ecount_full(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescription )( 
            IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][out] */ __RPC__out_ecount_full(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultWidth )( 
            IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [out] */ __RPC__out ULONG *pcxChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [out] */ __RPC__out PROPERTYUI_FLAGS *pflags);
        
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplay )( 
            IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [in] */ __RPC__in const PROPVARIANT *ppropvar,
            /* [in] */ PROPERTYUI_FORMAT_FLAGS puiff,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchText) LPWSTR pwszText,
            /* [in] */ DWORD cchText);
        
        HRESULT ( STDMETHODCALLTYPE *GetHelpInfo )( 
            IPropertyUI * This,
            /* [in] */ __RPC__in REFFMTID fmtid,
            /* [in] */ PROPID pid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pwszHelpFile,
            /* [in] */ DWORD cch,
            /* [out] */ __RPC__out UINT *puHelpID);
        
        END_INTERFACE
    } IPropertyUIVtbl;

    interface IPropertyUI
    {
        CONST_VTBL struct IPropertyUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyUI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyUI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyUI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyUI_ParsePropertyName(This,pszName,pfmtid,ppid,pchEaten)	\
    ( (This)->lpVtbl -> ParsePropertyName(This,pszName,pfmtid,ppid,pchEaten) ) 

#define IPropertyUI_GetCannonicalName(This,fmtid,pid,pwszText,cchText)	\
    ( (This)->lpVtbl -> GetCannonicalName(This,fmtid,pid,pwszText,cchText) ) 

#define IPropertyUI_GetDisplayName(This,fmtid,pid,flags,pwszText,cchText)	\
    ( (This)->lpVtbl -> GetDisplayName(This,fmtid,pid,flags,pwszText,cchText) ) 

#define IPropertyUI_GetPropertyDescription(This,fmtid,pid,pwszText,cchText)	\
    ( (This)->lpVtbl -> GetPropertyDescription(This,fmtid,pid,pwszText,cchText) ) 

#define IPropertyUI_GetDefaultWidth(This,fmtid,pid,pcxChars)	\
    ( (This)->lpVtbl -> GetDefaultWidth(This,fmtid,pid,pcxChars) ) 

#define IPropertyUI_GetFlags(This,fmtid,pid,pflags)	\
    ( (This)->lpVtbl -> GetFlags(This,fmtid,pid,pflags) ) 

#define IPropertyUI_FormatForDisplay(This,fmtid,pid,ppropvar,puiff,pwszText,cchText)	\
    ( (This)->lpVtbl -> FormatForDisplay(This,fmtid,pid,ppropvar,puiff,pwszText,cchText) ) 

#define IPropertyUI_GetHelpInfo(This,fmtid,pid,pwszHelpFile,cch,puHelpID)	\
    ( (This)->lpVtbl -> GetHelpInfo(This,fmtid,pid,pwszHelpFile,cch,puHelpID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyUI_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0049 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)
SHSTDAPI SHRemovePersonalPropertyValues(__in IShellItemArray *psia);
SHSTDAPI SHAddDefaultPropertiesByExt(PCWSTR pszExt, IPropertyStore *pPropStore);
SHSTDAPI SHCreateDefaultPropertiesOp(IShellItem *psi, __out IFileOperation **ppFileOp);
SHSTDAPI SHSetDefaultProperties(__in_opt HWND hwndParent, IShellItem *psi, DWORD dwFileOpFlags, __in_opt IFileOperationProgressSink *pfops);
#endif  // (_WIN32_IE >= _WIN32_IE_IE70)
#if (_WIN32_IE >= 0x0500)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0049_v0_0_s_ifspec;

#ifndef __ICategoryProvider_INTERFACE_DEFINED__
#define __ICategoryProvider_INTERFACE_DEFINED__

/* interface ICategoryProvider */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_ICategoryProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9af64809-5864-4c26-a720-c1f78c086ee3")
    ICategoryProvider : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CanCategorizeOnSCID( 
            /* [in] */ __RPC__in const SHCOLUMNID *pscid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefaultCategory( 
            /* [out] */ __RPC__out GUID *pguid,
            /* [out] */ __RPC__out SHCOLUMNID *pscid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCategoryForSCID( 
            /* [in] */ __RPC__in const SHCOLUMNID *pscid,
            /* [out] */ __RPC__out GUID *pguid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumCategories( 
            /* [out] */ __RPC__deref_out_opt IEnumGUID **penum) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCategoryName( 
            /* [in] */ __RPC__in const GUID *pguid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            /* [in] */ UINT cch) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateCategory( 
            /* [in] */ __RPC__in const GUID *pguid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICategoryProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICategoryProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICategoryProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICategoryProvider * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CanCategorizeOnSCID )( 
            ICategoryProvider * This,
            /* [in] */ __RPC__in const SHCOLUMNID *pscid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultCategory )( 
            ICategoryProvider * This,
            /* [out] */ __RPC__out GUID *pguid,
            /* [out] */ __RPC__out SHCOLUMNID *pscid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCategoryForSCID )( 
            ICategoryProvider * This,
            /* [in] */ __RPC__in const SHCOLUMNID *pscid,
            /* [out] */ __RPC__out GUID *pguid);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnumCategories )( 
            ICategoryProvider * This,
            /* [out] */ __RPC__deref_out_opt IEnumGUID **penum);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCategoryName )( 
            ICategoryProvider * This,
            /* [in] */ __RPC__in const GUID *pguid,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            /* [in] */ UINT cch);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCategory )( 
            ICategoryProvider * This,
            /* [in] */ __RPC__in const GUID *pguid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } ICategoryProviderVtbl;

    interface ICategoryProvider
    {
        CONST_VTBL struct ICategoryProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategoryProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICategoryProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICategoryProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICategoryProvider_CanCategorizeOnSCID(This,pscid)	\
    ( (This)->lpVtbl -> CanCategorizeOnSCID(This,pscid) ) 

#define ICategoryProvider_GetDefaultCategory(This,pguid,pscid)	\
    ( (This)->lpVtbl -> GetDefaultCategory(This,pguid,pscid) ) 

#define ICategoryProvider_GetCategoryForSCID(This,pscid,pguid)	\
    ( (This)->lpVtbl -> GetCategoryForSCID(This,pscid,pguid) ) 

#define ICategoryProvider_EnumCategories(This,penum)	\
    ( (This)->lpVtbl -> EnumCategories(This,penum) ) 

#define ICategoryProvider_GetCategoryName(This,pguid,pszName,cch)	\
    ( (This)->lpVtbl -> GetCategoryName(This,pguid,pszName,cch) ) 

#define ICategoryProvider_CreateCategory(This,pguid,riid,ppv)	\
    ( (This)->lpVtbl -> CreateCategory(This,pguid,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICategoryProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0050 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum tagCATEGORYINFO_FLAGS
    {	CATINFO_NORMAL	= 0,
	CATINFO_COLLAPSED	= 0x1,
	CATINFO_HIDDEN	= 0x2,
	CATINFO_EXPANDED	= 0x4,
	CATINFO_NOHEADER	= 0x8,
	CATINFO_NOTCOLLAPSIBLE	= 0x10,
	CATINFO_NOHEADERCOUNT	= 0x20
    } 	CATEGORYINFO_FLAGS;

typedef /* [v1_enum] */ 
enum tagCATSORT_FLAGS
    {	CATSORT_DEFAULT	= 0,
	CATSORT_NAME	= 0x1
    } 	CATSORT_FLAGS;

typedef struct tagCATEGORY_INFO
    {
    CATEGORYINFO_FLAGS cif;
    WCHAR wszName[ 260 ];
    } 	CATEGORY_INFO;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0050_v0_0_s_ifspec;

#ifndef __ICategorizer_INTERFACE_DEFINED__
#define __ICategorizer_INTERFACE_DEFINED__

/* interface ICategorizer */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_ICategorizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a3b14589-9174-49a8-89a3-06a1ae2b9ba7")
    ICategorizer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDesc,
            /* [in] */ UINT cch) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCategory( 
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][out] */ __RPC__out_ecount_full(cidl) DWORD *rgCategoryIds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCategoryInfo( 
            /* [in] */ DWORD dwCategoryId,
            /* [out] */ __RPC__out CATEGORY_INFO *pci) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompareCategory( 
            /* [in] */ CATSORT_FLAGS csfFlags,
            /* [in] */ DWORD dwCategoryId1,
            /* [in] */ DWORD dwCategoryId2) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICategorizerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICategorizer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICategorizer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICategorizer * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            ICategorizer * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDesc,
            /* [in] */ UINT cch);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            ICategorizer * This,
            /* [in] */ UINT cidl,
            /* [size_is][in] */ __RPC__in_ecount_full(cidl) PCUITEMID_CHILD_ARRAY apidl,
            /* [size_is][out] */ __RPC__out_ecount_full(cidl) DWORD *rgCategoryIds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCategoryInfo )( 
            ICategorizer * This,
            /* [in] */ DWORD dwCategoryId,
            /* [out] */ __RPC__out CATEGORY_INFO *pci);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompareCategory )( 
            ICategorizer * This,
            /* [in] */ CATSORT_FLAGS csfFlags,
            /* [in] */ DWORD dwCategoryId1,
            /* [in] */ DWORD dwCategoryId2);
        
        END_INTERFACE
    } ICategorizerVtbl;

    interface ICategorizer
    {
        CONST_VTBL struct ICategorizerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICategorizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICategorizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICategorizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICategorizer_GetDescription(This,pszDesc,cch)	\
    ( (This)->lpVtbl -> GetDescription(This,pszDesc,cch) ) 

#define ICategorizer_GetCategory(This,cidl,apidl,rgCategoryIds)	\
    ( (This)->lpVtbl -> GetCategory(This,cidl,apidl,rgCategoryIds) ) 

#define ICategorizer_GetCategoryInfo(This,dwCategoryId,pci)	\
    ( (This)->lpVtbl -> GetCategoryInfo(This,dwCategoryId,pci) ) 

#define ICategorizer_CompareCategory(This,csfFlags,dwCategoryId1,dwCategoryId2)	\
    ( (This)->lpVtbl -> CompareCategory(This,csfFlags,dwCategoryId1,dwCategoryId2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICategorizer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0051 */
/* [local] */ 

#endif // (_WIN32_IE >= 0x0500)
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#include <pshpack8.h>
typedef struct tagSHDRAGIMAGE
    {
    SIZE sizeDragImage;
    POINT ptOffset;
    HBITMAP hbmpDragImage;
    COLORREF crColorKey;
    } 	SHDRAGIMAGE;

typedef struct tagSHDRAGIMAGE *LPSHDRAGIMAGE;

#include <poppack.h> // Return to byte packing
#define DI_GETDRAGIMAGE     TEXT("ShellGetDragImage")


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0051_v0_0_s_ifspec;

#ifndef __IDropTargetHelper_INTERFACE_DEFINED__
#define __IDropTargetHelper_INTERFACE_DEFINED__

/* interface IDropTargetHelper */
/* [object][unique][local][uuid] */ 


EXTERN_C const IID IID_IDropTargetHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4657278B-411B-11D2-839A-00C04FD918D0")
    IDropTargetHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DragEnter( 
            /* [in] */ 
            __in  HWND hwndTarget,
            /* [in] */ 
            __in  IDataObject *pDataObject,
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  DWORD dwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragLeave( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DragOver( 
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  DWORD dwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Drop( 
            /* [in] */ 
            __in  IDataObject *pDataObject,
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  DWORD dwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ 
            __in  BOOL fShow) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDropTargetHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDropTargetHelper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDropTargetHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDropTargetHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *DragEnter )( 
            IDropTargetHelper * This,
            /* [in] */ 
            __in  HWND hwndTarget,
            /* [in] */ 
            __in  IDataObject *pDataObject,
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  DWORD dwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *DragLeave )( 
            IDropTargetHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *DragOver )( 
            IDropTargetHelper * This,
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  DWORD dwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *Drop )( 
            IDropTargetHelper * This,
            /* [in] */ 
            __in  IDataObject *pDataObject,
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  DWORD dwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IDropTargetHelper * This,
            /* [in] */ 
            __in  BOOL fShow);
        
        END_INTERFACE
    } IDropTargetHelperVtbl;

    interface IDropTargetHelper
    {
        CONST_VTBL struct IDropTargetHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDropTargetHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDropTargetHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDropTargetHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDropTargetHelper_DragEnter(This,hwndTarget,pDataObject,ppt,dwEffect)	\
    ( (This)->lpVtbl -> DragEnter(This,hwndTarget,pDataObject,ppt,dwEffect) ) 

#define IDropTargetHelper_DragLeave(This)	\
    ( (This)->lpVtbl -> DragLeave(This) ) 

#define IDropTargetHelper_DragOver(This,ppt,dwEffect)	\
    ( (This)->lpVtbl -> DragOver(This,ppt,dwEffect) ) 

#define IDropTargetHelper_Drop(This,pDataObject,ppt,dwEffect)	\
    ( (This)->lpVtbl -> Drop(This,pDataObject,ppt,dwEffect) ) 

#define IDropTargetHelper_Show(This,fShow)	\
    ( (This)->lpVtbl -> Show(This,fShow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDropTargetHelper_INTERFACE_DEFINED__ */


#ifndef __IDragSourceHelper_INTERFACE_DEFINED__
#define __IDragSourceHelper_INTERFACE_DEFINED__

/* interface IDragSourceHelper */
/* [object][unique][local][uuid] */ 


EXTERN_C const IID IID_IDragSourceHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DE5BF786-477A-11D2-839D-00C04FD918D0")
    IDragSourceHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeFromBitmap( 
            /* [in] */ 
            __in  LPSHDRAGIMAGE pshdi,
            /* [in] */ 
            __in  IDataObject *pDataObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromWindow( 
            /* [in] */ 
            __in  HWND hwnd,
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  IDataObject *pDataObject) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDragSourceHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDragSourceHelper * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDragSourceHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDragSourceHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromBitmap )( 
            IDragSourceHelper * This,
            /* [in] */ 
            __in  LPSHDRAGIMAGE pshdi,
            /* [in] */ 
            __in  IDataObject *pDataObject);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromWindow )( 
            IDragSourceHelper * This,
            /* [in] */ 
            __in  HWND hwnd,
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  IDataObject *pDataObject);
        
        END_INTERFACE
    } IDragSourceHelperVtbl;

    interface IDragSourceHelper
    {
        CONST_VTBL struct IDragSourceHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDragSourceHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDragSourceHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDragSourceHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDragSourceHelper_InitializeFromBitmap(This,pshdi,pDataObject)	\
    ( (This)->lpVtbl -> InitializeFromBitmap(This,pshdi,pDataObject) ) 

#define IDragSourceHelper_InitializeFromWindow(This,hwnd,ppt,pDataObject)	\
    ( (This)->lpVtbl -> InitializeFromWindow(This,hwnd,ppt,pDataObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDragSourceHelper_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0053 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)
typedef 
enum tagDSH_FLAGS
    {	DSH_ALLOWDROPDESCRIPTIONTEXT	= 0x1
    } 	DSH_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0053_v0_0_s_ifspec;

#ifndef __IDragSourceHelper2_INTERFACE_DEFINED__
#define __IDragSourceHelper2_INTERFACE_DEFINED__

/* interface IDragSourceHelper2 */
/* [object][unique][local][uuid] */ 


EXTERN_C const IID IID_IDragSourceHelper2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83E07D0D-0C5F-4163-BF1A-60B274051E40")
    IDragSourceHelper2 : public IDragSourceHelper
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ 
            __in  DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDragSourceHelper2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDragSourceHelper2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDragSourceHelper2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDragSourceHelper2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromBitmap )( 
            IDragSourceHelper2 * This,
            /* [in] */ 
            __in  LPSHDRAGIMAGE pshdi,
            /* [in] */ 
            __in  IDataObject *pDataObject);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromWindow )( 
            IDragSourceHelper2 * This,
            /* [in] */ 
            __in  HWND hwnd,
            /* [in] */ 
            __in  POINT *ppt,
            /* [in] */ 
            __in  IDataObject *pDataObject);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IDragSourceHelper2 * This,
            /* [in] */ 
            __in  DWORD dwFlags);
        
        END_INTERFACE
    } IDragSourceHelper2Vtbl;

    interface IDragSourceHelper2
    {
        CONST_VTBL struct IDragSourceHelper2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDragSourceHelper2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDragSourceHelper2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDragSourceHelper2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDragSourceHelper2_InitializeFromBitmap(This,pshdi,pDataObject)	\
    ( (This)->lpVtbl -> InitializeFromBitmap(This,pshdi,pDataObject) ) 

#define IDragSourceHelper2_InitializeFromWindow(This,hwnd,ppt,pDataObject)	\
    ( (This)->lpVtbl -> InitializeFromWindow(This,hwnd,ppt,pDataObject) ) 


#define IDragSourceHelper2_SetFlags(This,dwFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDragSourceHelper2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0054 */
/* [local] */ 

#endif  // NTDDI_LONGHORN
#endif  // NTDDI_WIN2K
#ifdef UNICODE
#define IShellLink      IShellLinkW
#else
#define IShellLink      IShellLinkA
#endif
typedef 
enum tagSLR_FLAGS
    {	SLR_NO_UI	= 0x1,
	SLR_ANY_MATCH	= 0x2,
	SLR_UPDATE	= 0x4,
	SLR_NOUPDATE	= 0x8,
	SLR_NOSEARCH	= 0x10,
	SLR_NOTRACK	= 0x20,
	SLR_NOLINKINFO	= 0x40,
	SLR_INVOKE_MSI	= 0x80,
	SLR_NO_UI_WITH_MSG_PUMP	= 0x101
    } 	SLR_FLAGS;

typedef 
enum tagSLGP_FLAGS
    {	SLGP_SHORTPATH	= 0x1,
	SLGP_UNCPRIORITY	= 0x2,
	SLGP_RAWPATH	= 0x4,
	SLGP_RELATIVEPRIORITY	= 0x8
    } 	SLGP_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0054_v0_0_s_ifspec;

#ifndef __IShellLinkA_INTERFACE_DEFINED__
#define __IShellLinkA_INTERFACE_DEFINED__

/* interface IShellLinkA */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellLinkA;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214EE-0000-0000-C000-000000000046")
    IShellLinkA : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAA *pfd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIDList( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszName,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [string][in] */ __RPC__in LPCSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWorkingDirectory( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszDir,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWorkingDirectory( 
            /* [string][in] */ __RPC__in LPCSTR pszDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArguments( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszArgs,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetArguments( 
            /* [string][in] */ __RPC__in LPCSTR pszArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHotkey( 
            /* [out] */ __RPC__out WORD *pwHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHotkey( 
            /* [in] */ WORD wHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShowCmd( 
            /* [out] */ __RPC__out int *piShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShowCmd( 
            /* [in] */ int iShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconLocation( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconLocation( 
            /* [string][in] */ __RPC__in LPCSTR pszIconPath,
            /* [in] */ int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRelativePath( 
            /* [string][in] */ __RPC__in LPCSTR pszPathRel,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resolve( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPath( 
            /* [string][in] */ __RPC__in LPCSTR pszFile) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellLinkAVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellLinkA * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellLinkA * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellLinkA * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAA *pfd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            IShellLinkA * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *SetIDList )( 
            IShellLinkA * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszName,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            IShellLinkA * This,
            /* [string][in] */ __RPC__in LPCSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetWorkingDirectory )( 
            IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszDir,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetWorkingDirectory )( 
            IShellLinkA * This,
            /* [string][in] */ __RPC__in LPCSTR pszDir);
        
        HRESULT ( STDMETHODCALLTYPE *GetArguments )( 
            IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszArgs,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetArguments )( 
            IShellLinkA * This,
            /* [string][in] */ __RPC__in LPCSTR pszArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetHotkey )( 
            IShellLinkA * This,
            /* [out] */ __RPC__out WORD *pwHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *SetHotkey )( 
            IShellLinkA * This,
            /* [in] */ WORD wHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *GetShowCmd )( 
            IShellLinkA * This,
            /* [out] */ __RPC__out int *piShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *SetShowCmd )( 
            IShellLinkA * This,
            /* [in] */ int iShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconLocation )( 
            IShellLinkA * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconLocation )( 
            IShellLinkA * This,
            /* [string][in] */ __RPC__in LPCSTR pszIconPath,
            /* [in] */ int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetRelativePath )( 
            IShellLinkA * This,
            /* [string][in] */ __RPC__in LPCSTR pszPathRel,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *Resolve )( 
            IShellLinkA * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetPath )( 
            IShellLinkA * This,
            /* [string][in] */ __RPC__in LPCSTR pszFile);
        
        END_INTERFACE
    } IShellLinkAVtbl;

    interface IShellLinkA
    {
        CONST_VTBL struct IShellLinkAVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellLinkA_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellLinkA_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellLinkA_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellLinkA_GetPath(This,pszFile,cch,pfd,fFlags)	\
    ( (This)->lpVtbl -> GetPath(This,pszFile,cch,pfd,fFlags) ) 

#define IShellLinkA_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#define IShellLinkA_SetIDList(This,pidl)	\
    ( (This)->lpVtbl -> SetIDList(This,pidl) ) 

#define IShellLinkA_GetDescription(This,pszName,cch)	\
    ( (This)->lpVtbl -> GetDescription(This,pszName,cch) ) 

#define IShellLinkA_SetDescription(This,pszName)	\
    ( (This)->lpVtbl -> SetDescription(This,pszName) ) 

#define IShellLinkA_GetWorkingDirectory(This,pszDir,cch)	\
    ( (This)->lpVtbl -> GetWorkingDirectory(This,pszDir,cch) ) 

#define IShellLinkA_SetWorkingDirectory(This,pszDir)	\
    ( (This)->lpVtbl -> SetWorkingDirectory(This,pszDir) ) 

#define IShellLinkA_GetArguments(This,pszArgs,cch)	\
    ( (This)->lpVtbl -> GetArguments(This,pszArgs,cch) ) 

#define IShellLinkA_SetArguments(This,pszArgs)	\
    ( (This)->lpVtbl -> SetArguments(This,pszArgs) ) 

#define IShellLinkA_GetHotkey(This,pwHotkey)	\
    ( (This)->lpVtbl -> GetHotkey(This,pwHotkey) ) 

#define IShellLinkA_SetHotkey(This,wHotkey)	\
    ( (This)->lpVtbl -> SetHotkey(This,wHotkey) ) 

#define IShellLinkA_GetShowCmd(This,piShowCmd)	\
    ( (This)->lpVtbl -> GetShowCmd(This,piShowCmd) ) 

#define IShellLinkA_SetShowCmd(This,iShowCmd)	\
    ( (This)->lpVtbl -> SetShowCmd(This,iShowCmd) ) 

#define IShellLinkA_GetIconLocation(This,pszIconPath,cch,piIcon)	\
    ( (This)->lpVtbl -> GetIconLocation(This,pszIconPath,cch,piIcon) ) 

#define IShellLinkA_SetIconLocation(This,pszIconPath,iIcon)	\
    ( (This)->lpVtbl -> SetIconLocation(This,pszIconPath,iIcon) ) 

#define IShellLinkA_SetRelativePath(This,pszPathRel,dwReserved)	\
    ( (This)->lpVtbl -> SetRelativePath(This,pszPathRel,dwReserved) ) 

#define IShellLinkA_Resolve(This,hwnd,fFlags)	\
    ( (This)->lpVtbl -> Resolve(This,hwnd,fFlags) ) 

#define IShellLinkA_SetPath(This,pszFile)	\
    ( (This)->lpVtbl -> SetPath(This,pszFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellLinkA_INTERFACE_DEFINED__ */


#ifndef __IShellLinkW_INTERFACE_DEFINED__
#define __IShellLinkW_INTERFACE_DEFINED__

/* interface IShellLinkW */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellLinkW;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214F9-0000-0000-C000-000000000046")
    IShellLinkW : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAW *pfd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIDList( 
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [string][in] */ __RPC__in LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWorkingDirectory( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDir,
            int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWorkingDirectory( 
            /* [string][in] */ __RPC__in LPCWSTR pszDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArguments( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszArgs,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetArguments( 
            /* [string][in] */ __RPC__in LPCWSTR pszArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHotkey( 
            /* [out] */ __RPC__out WORD *pwHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHotkey( 
            /* [in] */ WORD wHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShowCmd( 
            /* [out] */ __RPC__out int *piShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShowCmd( 
            /* [in] */ int iShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconLocation( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconLocation( 
            /* [string][in] */ __RPC__in LPCWSTR pszIconPath,
            /* [in] */ int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRelativePath( 
            /* [string][in] */ __RPC__in LPCWSTR pszPathRel,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resolve( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPath( 
            /* [string][in] */ __RPC__in LPCWSTR pszFile) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellLinkWVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellLinkW * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellLinkW * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellLinkW * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAW *pfd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            IShellLinkW * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *SetIDList )( 
            IShellLinkW * This,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            IShellLinkW * This,
            /* [string][in] */ __RPC__in LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetWorkingDirectory )( 
            IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDir,
            int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetWorkingDirectory )( 
            IShellLinkW * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDir);
        
        HRESULT ( STDMETHODCALLTYPE *GetArguments )( 
            IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszArgs,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetArguments )( 
            IShellLinkW * This,
            /* [string][in] */ __RPC__in LPCWSTR pszArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetHotkey )( 
            IShellLinkW * This,
            /* [out] */ __RPC__out WORD *pwHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *SetHotkey )( 
            IShellLinkW * This,
            /* [in] */ WORD wHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *GetShowCmd )( 
            IShellLinkW * This,
            /* [out] */ __RPC__out int *piShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *SetShowCmd )( 
            IShellLinkW * This,
            /* [in] */ int iShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconLocation )( 
            IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconLocation )( 
            IShellLinkW * This,
            /* [string][in] */ __RPC__in LPCWSTR pszIconPath,
            /* [in] */ int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetRelativePath )( 
            IShellLinkW * This,
            /* [string][in] */ __RPC__in LPCWSTR pszPathRel,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *Resolve )( 
            IShellLinkW * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetPath )( 
            IShellLinkW * This,
            /* [string][in] */ __RPC__in LPCWSTR pszFile);
        
        END_INTERFACE
    } IShellLinkWVtbl;

    interface IShellLinkW
    {
        CONST_VTBL struct IShellLinkWVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellLinkW_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellLinkW_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellLinkW_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellLinkW_GetPath(This,pszFile,cch,pfd,fFlags)	\
    ( (This)->lpVtbl -> GetPath(This,pszFile,cch,pfd,fFlags) ) 

#define IShellLinkW_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#define IShellLinkW_SetIDList(This,pidl)	\
    ( (This)->lpVtbl -> SetIDList(This,pidl) ) 

#define IShellLinkW_GetDescription(This,pszName,cch)	\
    ( (This)->lpVtbl -> GetDescription(This,pszName,cch) ) 

#define IShellLinkW_SetDescription(This,pszName)	\
    ( (This)->lpVtbl -> SetDescription(This,pszName) ) 

#define IShellLinkW_GetWorkingDirectory(This,pszDir,cch)	\
    ( (This)->lpVtbl -> GetWorkingDirectory(This,pszDir,cch) ) 

#define IShellLinkW_SetWorkingDirectory(This,pszDir)	\
    ( (This)->lpVtbl -> SetWorkingDirectory(This,pszDir) ) 

#define IShellLinkW_GetArguments(This,pszArgs,cch)	\
    ( (This)->lpVtbl -> GetArguments(This,pszArgs,cch) ) 

#define IShellLinkW_SetArguments(This,pszArgs)	\
    ( (This)->lpVtbl -> SetArguments(This,pszArgs) ) 

#define IShellLinkW_GetHotkey(This,pwHotkey)	\
    ( (This)->lpVtbl -> GetHotkey(This,pwHotkey) ) 

#define IShellLinkW_SetHotkey(This,wHotkey)	\
    ( (This)->lpVtbl -> SetHotkey(This,wHotkey) ) 

#define IShellLinkW_GetShowCmd(This,piShowCmd)	\
    ( (This)->lpVtbl -> GetShowCmd(This,piShowCmd) ) 

#define IShellLinkW_SetShowCmd(This,iShowCmd)	\
    ( (This)->lpVtbl -> SetShowCmd(This,iShowCmd) ) 

#define IShellLinkW_GetIconLocation(This,pszIconPath,cch,piIcon)	\
    ( (This)->lpVtbl -> GetIconLocation(This,pszIconPath,cch,piIcon) ) 

#define IShellLinkW_SetIconLocation(This,pszIconPath,iIcon)	\
    ( (This)->lpVtbl -> SetIconLocation(This,pszIconPath,iIcon) ) 

#define IShellLinkW_SetRelativePath(This,pszPathRel,dwReserved)	\
    ( (This)->lpVtbl -> SetRelativePath(This,pszPathRel,dwReserved) ) 

#define IShellLinkW_Resolve(This,hwnd,fFlags)	\
    ( (This)->lpVtbl -> Resolve(This,hwnd,fFlags) ) 

#define IShellLinkW_SetPath(This,pszFile)	\
    ( (This)->lpVtbl -> SetPath(This,pszFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellLinkW_INTERFACE_DEFINED__ */


#ifndef __IShellLinkDataList_INTERFACE_DEFINED__
#define __IShellLinkDataList_INTERFACE_DEFINED__

/* interface IShellLinkDataList */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellLinkDataList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45e2b4ae-b1c3-11d0-b92f-00a0c90312e1")
    IShellLinkDataList : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE AddDataBlock( 
            /* [in] */ 
            __in  void *pDataBlock) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE CopyDataBlock( 
            /* [in] */ 
            __in  DWORD dwSig,
            /* [out] */ 
            __deref_out  void **ppDataBlock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveDataBlock( 
            /* [in] */ DWORD dwSig) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellLinkDataListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellLinkDataList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellLinkDataList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellLinkDataList * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *AddDataBlock )( 
            IShellLinkDataList * This,
            /* [in] */ 
            __in  void *pDataBlock);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *CopyDataBlock )( 
            IShellLinkDataList * This,
            /* [in] */ 
            __in  DWORD dwSig,
            /* [out] */ 
            __deref_out  void **ppDataBlock);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveDataBlock )( 
            IShellLinkDataList * This,
            /* [in] */ DWORD dwSig);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IShellLinkDataList * This,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IShellLinkDataList * This,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IShellLinkDataListVtbl;

    interface IShellLinkDataList
    {
        CONST_VTBL struct IShellLinkDataListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellLinkDataList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellLinkDataList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellLinkDataList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellLinkDataList_AddDataBlock(This,pDataBlock)	\
    ( (This)->lpVtbl -> AddDataBlock(This,pDataBlock) ) 

#define IShellLinkDataList_CopyDataBlock(This,dwSig,ppDataBlock)	\
    ( (This)->lpVtbl -> CopyDataBlock(This,dwSig,ppDataBlock) ) 

#define IShellLinkDataList_RemoveDataBlock(This,dwSig)	\
    ( (This)->lpVtbl -> RemoveDataBlock(This,dwSig) ) 

#define IShellLinkDataList_GetFlags(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) ) 

#define IShellLinkDataList_SetFlags(This,dwFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellLinkDataList_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0057 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WIN2K)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0057_v0_0_s_ifspec;

#ifndef __IResolveShellLink_INTERFACE_DEFINED__
#define __IResolveShellLink_INTERFACE_DEFINED__

/* interface IResolveShellLink */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IResolveShellLink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5cd52983-9449-11d2-963a-00c04f79adf0")
    IResolveShellLink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ResolveShellLink( 
            /* [in] */ __RPC__in_opt IUnknown *punkLink,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ DWORD fFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IResolveShellLinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IResolveShellLink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IResolveShellLink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IResolveShellLink * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResolveShellLink )( 
            IResolveShellLink * This,
            /* [in] */ __RPC__in_opt IUnknown *punkLink,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ DWORD fFlags);
        
        END_INTERFACE
    } IResolveShellLinkVtbl;

    interface IResolveShellLink
    {
        CONST_VTBL struct IResolveShellLinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IResolveShellLink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IResolveShellLink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IResolveShellLink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IResolveShellLink_ResolveShellLink(This,punkLink,hwnd,fFlags)	\
    ( (This)->lpVtbl -> ResolveShellLink(This,punkLink,hwnd,fFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IResolveShellLink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0058 */
/* [local] */ 

#endif  // NTDDI_WIN2K


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0058_v0_0_s_ifspec;

#ifndef __IActionProgressDialog_INTERFACE_DEFINED__
#define __IActionProgressDialog_INTERFACE_DEFINED__

/* interface IActionProgressDialog */
/* [unique][uuid][object] */ 

/* [v1_enum] */ 
enum tagSPINITF
    {	SPINITF_NORMAL	= 0,
	SPINITF_MODAL	= 0x1,
	SPINITF_NOMINIMIZE	= 0x8
    } ;
typedef DWORD SPINITF;


EXTERN_C const IID IID_IActionProgressDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49ff1172-eadc-446d-9285-156453a6431c")
    IActionProgressDialog : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ SPINITF flags,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszCancel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActionProgressDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActionProgressDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActionProgressDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActionProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IActionProgressDialog * This,
            /* [in] */ SPINITF flags,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszCancel);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IActionProgressDialog * This);
        
        END_INTERFACE
    } IActionProgressDialogVtbl;

    interface IActionProgressDialog
    {
        CONST_VTBL struct IActionProgressDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActionProgressDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActionProgressDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActionProgressDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActionProgressDialog_Initialize(This,flags,pszTitle,pszCancel)	\
    ( (This)->lpVtbl -> Initialize(This,flags,pszTitle,pszCancel) ) 

#define IActionProgressDialog_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActionProgressDialog_INTERFACE_DEFINED__ */


#ifndef __IHWEventHandler_INTERFACE_DEFINED__
#define __IHWEventHandler_INTERFACE_DEFINED__

/* interface IHWEventHandler */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IHWEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C1FB73D0-EC3A-4ba2-B512-8CDB9187B6D1")
    IHWEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [string][in] */ __RPC__in LPCWSTR pszParams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleEvent( 
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszAltDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszEventType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleEventWithContent( 
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszAltDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszEventType,
            /* [string][in] */ __RPC__in LPCWSTR pszContentTypeHandler,
            /* [in] */ __RPC__in_opt IDataObject *pdataobject) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHWEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHWEventHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHWEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHWEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IHWEventHandler * This,
            /* [string][in] */ __RPC__in LPCWSTR pszParams);
        
        HRESULT ( STDMETHODCALLTYPE *HandleEvent )( 
            IHWEventHandler * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszAltDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszEventType);
        
        HRESULT ( STDMETHODCALLTYPE *HandleEventWithContent )( 
            IHWEventHandler * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszAltDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszEventType,
            /* [string][in] */ __RPC__in LPCWSTR pszContentTypeHandler,
            /* [in] */ __RPC__in_opt IDataObject *pdataobject);
        
        END_INTERFACE
    } IHWEventHandlerVtbl;

    interface IHWEventHandler
    {
        CONST_VTBL struct IHWEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHWEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHWEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHWEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHWEventHandler_Initialize(This,pszParams)	\
    ( (This)->lpVtbl -> Initialize(This,pszParams) ) 

#define IHWEventHandler_HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType)	\
    ( (This)->lpVtbl -> HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType) ) 

#define IHWEventHandler_HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject)	\
    ( (This)->lpVtbl -> HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHWEventHandler_INTERFACE_DEFINED__ */


#ifndef __IHWEventHandler2_INTERFACE_DEFINED__
#define __IHWEventHandler2_INTERFACE_DEFINED__

/* interface IHWEventHandler2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IHWEventHandler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CFCC809F-295D-42e8-9FFC-424B33C487E6")
    IHWEventHandler2 : public IHWEventHandler
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleEventWithHWND( 
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszAltDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszEventType,
            /* [in] */ __RPC__in HWND hwndOwner) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHWEventHandler2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHWEventHandler2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHWEventHandler2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHWEventHandler2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IHWEventHandler2 * This,
            /* [string][in] */ __RPC__in LPCWSTR pszParams);
        
        HRESULT ( STDMETHODCALLTYPE *HandleEvent )( 
            IHWEventHandler2 * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszAltDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszEventType);
        
        HRESULT ( STDMETHODCALLTYPE *HandleEventWithContent )( 
            IHWEventHandler2 * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszAltDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszEventType,
            /* [string][in] */ __RPC__in LPCWSTR pszContentTypeHandler,
            /* [in] */ __RPC__in_opt IDataObject *pdataobject);
        
        HRESULT ( STDMETHODCALLTYPE *HandleEventWithHWND )( 
            IHWEventHandler2 * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszAltDeviceID,
            /* [string][in] */ __RPC__in LPCWSTR pszEventType,
            /* [in] */ __RPC__in HWND hwndOwner);
        
        END_INTERFACE
    } IHWEventHandler2Vtbl;

    interface IHWEventHandler2
    {
        CONST_VTBL struct IHWEventHandler2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHWEventHandler2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHWEventHandler2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHWEventHandler2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHWEventHandler2_Initialize(This,pszParams)	\
    ( (This)->lpVtbl -> Initialize(This,pszParams) ) 

#define IHWEventHandler2_HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType)	\
    ( (This)->lpVtbl -> HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType) ) 

#define IHWEventHandler2_HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject)	\
    ( (This)->lpVtbl -> HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject) ) 


#define IHWEventHandler2_HandleEventWithHWND(This,pszDeviceID,pszAltDeviceID,pszEventType,hwndOwner)	\
    ( (This)->lpVtbl -> HandleEventWithHWND(This,pszDeviceID,pszAltDeviceID,pszEventType,hwndOwner) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHWEventHandler2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0061 */
/* [local] */ 

#define ARCONTENT_AUTORUNINF             0x00000002   // That's the one we have today, and always had
#define ARCONTENT_AUDIOCD                0x00000004   // Audio CD (not MP3 and the like, the stuff you buy at the store)
#define ARCONTENT_DVDMOVIE               0x00000008   // DVD Movie (not MPEGs, the stuff you buy at the store)
#define ARCONTENT_BLANKCD                0x00000010   // Blank CD-R/CD-RW)
#define ARCONTENT_BLANKDVD               0x00000020   // Blank DVD-R/DVD-RW
#define ARCONTENT_UNKNOWNCONTENT         0x00000040   // Whatever files.  Mean that it's formatted.
#define ARCONTENT_AUTOPLAYPIX            0x00000080   // Any files classified by shell as image. (jpg, bmp, etc.)
#define ARCONTENT_AUTOPLAYMUSIC          0x00000100   // Any files classified by shell as music. (wma, mp3, etc.)
#define ARCONTENT_AUTOPLAYVIDEO          0x00000200   // Any files classified by shell as video. (mpg, avi, etc.)
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
#define ARCONTENT_VCD                    0x00000400   // VCD format
#define ARCONTENT_SVCD                   0x00000800   // Super-VCD format
#define ARCONTENT_DVDAUDIO               0x00001000   // DVD-Audio
#define ARCONTENT_HDDVD                  0x00002000   // HD DVD
#define ARCONTENT_BLURAY                 0x00004000   // Blu-ray Disc
#define ARCONTENT_NONE                   0x00000000   // Empty (but formatted)
#define ARCONTENT_MASK                   0x00007FFE   // Bits that denote valid content types
#define ARCONTENT_PHASE_UNKNOWN          0x00000000   // We can be in any phase.  This is XP behavior.
#define ARCONTENT_PHASE_PRESNIFF         0x10000000   // These are contents we know w/o scanning the media for complete data (e.g. Audio track, DVD Movie).
#define ARCONTENT_PHASE_SNIFFING         0x20000000   // We are in the middle of searching the media.  There could be more contents to be found than currently reported.
#define ARCONTENT_PHASE_FINAL            0x40000000   // We have finished searching; contents we report are final.
#define ARCONTENT_PHASE_MASK             0x70000000   // Bits that denote what phase we are in the Autoplay process.
#endif  // NTDDI_LONGHORN


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0061_v0_0_s_ifspec;

#ifndef __IQueryCancelAutoPlay_INTERFACE_DEFINED__
#define __IQueryCancelAutoPlay_INTERFACE_DEFINED__

/* interface IQueryCancelAutoPlay */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IQueryCancelAutoPlay;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DDEFE873-6997-4e68-BE26-39B633ADBE12")
    IQueryCancelAutoPlay : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AllowAutoPlay( 
            /* [string][in] */ __RPC__in LPCWSTR pszPath,
            /* [in] */ DWORD dwContentType,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel,
            /* [in] */ DWORD dwSerialNumber) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQueryCancelAutoPlayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueryCancelAutoPlay * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueryCancelAutoPlay * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueryCancelAutoPlay * This);
        
        HRESULT ( STDMETHODCALLTYPE *AllowAutoPlay )( 
            IQueryCancelAutoPlay * This,
            /* [string][in] */ __RPC__in LPCWSTR pszPath,
            /* [in] */ DWORD dwContentType,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel,
            /* [in] */ DWORD dwSerialNumber);
        
        END_INTERFACE
    } IQueryCancelAutoPlayVtbl;

    interface IQueryCancelAutoPlay
    {
        CONST_VTBL struct IQueryCancelAutoPlayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueryCancelAutoPlay_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueryCancelAutoPlay_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueryCancelAutoPlay_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueryCancelAutoPlay_AllowAutoPlay(This,pszPath,dwContentType,pszLabel,dwSerialNumber)	\
    ( (This)->lpVtbl -> AllowAutoPlay(This,pszPath,dwContentType,pszLabel,dwSerialNumber) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueryCancelAutoPlay_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0062 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0062_v0_0_s_ifspec;

#ifndef __IDynamicHWHandler_INTERFACE_DEFINED__
#define __IDynamicHWHandler_INTERFACE_DEFINED__

/* interface IDynamicHWHandler */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDynamicHWHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DC2601D7-059E-42fc-A09D-2AFD21B6D5F7")
    IDynamicHWHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDynamicInfo( 
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [in] */ DWORD dwContentType,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszAction) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDynamicHWHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDynamicHWHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDynamicHWHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDynamicHWHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDynamicInfo )( 
            IDynamicHWHandler * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDeviceID,
            /* [in] */ DWORD dwContentType,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszAction);
        
        END_INTERFACE
    } IDynamicHWHandlerVtbl;

    interface IDynamicHWHandler
    {
        CONST_VTBL struct IDynamicHWHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDynamicHWHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDynamicHWHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDynamicHWHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDynamicHWHandler_GetDynamicInfo(This,pszDeviceID,dwContentType,ppszAction)	\
    ( (This)->lpVtbl -> GetDynamicInfo(This,pszDeviceID,dwContentType,ppszAction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDynamicHWHandler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0063 */
/* [local] */ 

#endif  // NTDDI_LONGHORN


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0063_v0_0_s_ifspec;

#ifndef __IActionProgress_INTERFACE_DEFINED__
#define __IActionProgress_INTERFACE_DEFINED__

/* interface IActionProgress */
/* [unique][uuid][object] */ 

/* [v1_enum] */ 
enum tagSPBEGINF
    {	SPBEGINF_NORMAL	= 0,
	SPBEGINF_AUTOTIME	= 0x2,
	SPBEGINF_NOPROGRESSBAR	= 0x10,
	SPBEGINF_MARQUEEPROGRESS	= 0x20,
	SPBEGINF_NOCANCELBUTTON	= 0x40
    } ;
typedef DWORD SPBEGINF;

typedef /* [v1_enum] */ 
enum _SPACTION
    {	SPACTION_NONE	= 0,
	SPACTION_MOVING	= ( SPACTION_NONE + 1 ) ,
	SPACTION_COPYING	= ( SPACTION_MOVING + 1 ) ,
	SPACTION_RECYCLING	= ( SPACTION_COPYING + 1 ) ,
	SPACTION_APPLYINGATTRIBS	= ( SPACTION_RECYCLING + 1 ) ,
	SPACTION_DOWNLOADING	= ( SPACTION_APPLYINGATTRIBS + 1 ) ,
	SPACTION_SEARCHING_INTERNET	= ( SPACTION_DOWNLOADING + 1 ) ,
	SPACTION_CALCULATING	= ( SPACTION_SEARCHING_INTERNET + 1 ) ,
	SPACTION_UPLOADING	= ( SPACTION_CALCULATING + 1 ) ,
	SPACTION_SEARCHING_FILES	= ( SPACTION_UPLOADING + 1 ) ,
	SPACTION_DELETING	= ( SPACTION_SEARCHING_FILES + 1 ) ,
	SPACTION_RENAMING	= ( SPACTION_DELETING + 1 ) ,
	SPACTION_FORMATTING	= ( SPACTION_RENAMING + 1 ) 
    } 	SPACTION;

typedef /* [v1_enum] */ 
enum _SPTEXT
    {	SPTEXT_ACTIONDESCRIPTION	= 1,
	SPTEXT_ACTIONDETAIL	= ( SPTEXT_ACTIONDESCRIPTION + 1 ) 
    } 	SPTEXT;


EXTERN_C const IID IID_IActionProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49ff1173-eadc-446d-9285-156453a6431c")
    IActionProgress : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Begin( 
            /* [in] */ SPACTION action,
            /* [in] */ SPBEGINF flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            /* [in] */ ULONGLONG ulCompleted,
            /* [in] */ ULONGLONG ulTotal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateText( 
            /* [in] */ SPTEXT sptext,
            /* [string][in] */ __RPC__in LPCWSTR pszText,
            /* [in] */ BOOL fMayCompact) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryCancel( 
            /* [out] */ __RPC__out BOOL *pfCancelled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetCancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE End( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActionProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActionProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActionProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActionProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *Begin )( 
            IActionProgress * This,
            /* [in] */ SPACTION action,
            /* [in] */ SPBEGINF flags);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            IActionProgress * This,
            /* [in] */ ULONGLONG ulCompleted,
            /* [in] */ ULONGLONG ulTotal);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateText )( 
            IActionProgress * This,
            /* [in] */ SPTEXT sptext,
            /* [string][in] */ __RPC__in LPCWSTR pszText,
            /* [in] */ BOOL fMayCompact);
        
        HRESULT ( STDMETHODCALLTYPE *QueryCancel )( 
            IActionProgress * This,
            /* [out] */ __RPC__out BOOL *pfCancelled);
        
        HRESULT ( STDMETHODCALLTYPE *ResetCancel )( 
            IActionProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *End )( 
            IActionProgress * This);
        
        END_INTERFACE
    } IActionProgressVtbl;

    interface IActionProgress
    {
        CONST_VTBL struct IActionProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActionProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActionProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActionProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActionProgress_Begin(This,action,flags)	\
    ( (This)->lpVtbl -> Begin(This,action,flags) ) 

#define IActionProgress_UpdateProgress(This,ulCompleted,ulTotal)	\
    ( (This)->lpVtbl -> UpdateProgress(This,ulCompleted,ulTotal) ) 

#define IActionProgress_UpdateText(This,sptext,pszText,fMayCompact)	\
    ( (This)->lpVtbl -> UpdateText(This,sptext,pszText,fMayCompact) ) 

#define IActionProgress_QueryCancel(This,pfCancelled)	\
    ( (This)->lpVtbl -> QueryCancel(This,pfCancelled) ) 

#define IActionProgress_ResetCancel(This)	\
    ( (This)->lpVtbl -> ResetCancel(This) ) 

#define IActionProgress_End(This)	\
    ( (This)->lpVtbl -> End(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActionProgress_INTERFACE_DEFINED__ */


#ifndef __IShellExtInit_INTERFACE_DEFINED__
#define __IShellExtInit_INTERFACE_DEFINED__

/* interface IShellExtInit */
/* [unique][local][object][uuid] */ 


EXTERN_C const IID IID_IShellExtInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E8-0000-0000-C000-000000000046")
    IShellExtInit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [unique][in] */ 
            __in_opt  PCIDLIST_ABSOLUTE pidlFolder,
            /* [unique][in] */ 
            __in_opt  IDataObject *pdtobj,
            /* [unique][in] */ 
            __in_opt  HKEY hkeyProgID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellExtInitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellExtInit * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellExtInit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellExtInit * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IShellExtInit * This,
            /* [unique][in] */ 
            __in_opt  PCIDLIST_ABSOLUTE pidlFolder,
            /* [unique][in] */ 
            __in_opt  IDataObject *pdtobj,
            /* [unique][in] */ 
            __in_opt  HKEY hkeyProgID);
        
        END_INTERFACE
    } IShellExtInitVtbl;

    interface IShellExtInit
    {
        CONST_VTBL struct IShellExtInitVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellExtInit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellExtInit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellExtInit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellExtInit_Initialize(This,pidlFolder,pdtobj,hkeyProgID)	\
    ( (This)->lpVtbl -> Initialize(This,pidlFolder,pdtobj,hkeyProgID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellExtInit_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0065 */
/* [local] */ 

typedef IShellExtInit *LPSHELLEXTINIT;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0065_v0_0_s_ifspec;

#ifndef __IShellPropSheetExt_INTERFACE_DEFINED__
#define __IShellPropSheetExt_INTERFACE_DEFINED__

/* interface IShellPropSheetExt */
/* [unique][local][object][uuid] */ 


enum tagSHELLPROPSHEETEXTPAGEID
    {	EXPPS_FILETYPES	= 0x1
    } ;
typedef UINT EXPPS;


EXTERN_C const IID IID_IShellPropSheetExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214E9-0000-0000-C000-000000000046")
    IShellPropSheetExt : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPages( 
            /* [in] */ 
            __in  LPFNSVADDPROPSHEETPAGE pfnAddPage,
            /* [in] */ 
            __in  LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplacePage( 
            /* [in] */ 
            __in  EXPPS uPageID,
            /* [in] */ 
            __in  LPFNSVADDPROPSHEETPAGE pfnReplaceWith,
            /* [in] */ 
            __in  LPARAM lParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellPropSheetExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellPropSheetExt * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellPropSheetExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellPropSheetExt * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPages )( 
            IShellPropSheetExt * This,
            /* [in] */ 
            __in  LPFNSVADDPROPSHEETPAGE pfnAddPage,
            /* [in] */ 
            __in  LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *ReplacePage )( 
            IShellPropSheetExt * This,
            /* [in] */ 
            __in  EXPPS uPageID,
            /* [in] */ 
            __in  LPFNSVADDPROPSHEETPAGE pfnReplaceWith,
            /* [in] */ 
            __in  LPARAM lParam);
        
        END_INTERFACE
    } IShellPropSheetExtVtbl;

    interface IShellPropSheetExt
    {
        CONST_VTBL struct IShellPropSheetExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellPropSheetExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellPropSheetExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellPropSheetExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellPropSheetExt_AddPages(This,pfnAddPage,lParam)	\
    ( (This)->lpVtbl -> AddPages(This,pfnAddPage,lParam) ) 

#define IShellPropSheetExt_ReplacePage(This,uPageID,pfnReplaceWith,lParam)	\
    ( (This)->lpVtbl -> ReplacePage(This,uPageID,pfnReplaceWith,lParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellPropSheetExt_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0066 */
/* [local] */ 

typedef IShellPropSheetExt *LPSHELLPROPSHEETEXT;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0066_v0_0_s_ifspec;

#ifndef __IRemoteComputer_INTERFACE_DEFINED__
#define __IRemoteComputer_INTERFACE_DEFINED__

/* interface IRemoteComputer */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IRemoteComputer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214FE-0000-0000-C000-000000000046")
    IRemoteComputer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [string][in] */ __RPC__in LPCWSTR pszMachine,
            /* [in] */ BOOL bEnumerating) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRemoteComputerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRemoteComputer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRemoteComputer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRemoteComputer * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IRemoteComputer * This,
            /* [string][in] */ __RPC__in LPCWSTR pszMachine,
            /* [in] */ BOOL bEnumerating);
        
        END_INTERFACE
    } IRemoteComputerVtbl;

    interface IRemoteComputer
    {
        CONST_VTBL struct IRemoteComputerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRemoteComputer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRemoteComputer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRemoteComputer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRemoteComputer_Initialize(This,pszMachine,bEnumerating)	\
    ( (This)->lpVtbl -> Initialize(This,pszMachine,bEnumerating) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRemoteComputer_INTERFACE_DEFINED__ */


#ifndef __IQueryContinue_INTERFACE_DEFINED__
#define __IQueryContinue_INTERFACE_DEFINED__

/* interface IQueryContinue */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IQueryContinue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7307055c-b24a-486b-9f25-163e597a28a9")
    IQueryContinue : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryContinue( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IQueryContinueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQueryContinue * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQueryContinue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQueryContinue * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContinue )( 
            IQueryContinue * This);
        
        END_INTERFACE
    } IQueryContinueVtbl;

    interface IQueryContinue
    {
        CONST_VTBL struct IQueryContinueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueryContinue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueryContinue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueryContinue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueryContinue_QueryContinue(This)	\
    ( (This)->lpVtbl -> QueryContinue(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueryContinue_INTERFACE_DEFINED__ */


#ifndef __IUserNotification_INTERFACE_DEFINED__
#define __IUserNotification_INTERFACE_DEFINED__

/* interface IUserNotification */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IUserNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba9711ba-5893-4787-a7e1-41277151550b")
    IUserNotification : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBalloonInfo( 
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszText,
            /* [in] */ DWORD dwInfoFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBalloonRetry( 
            /* [in] */ DWORD dwShowTime,
            /* [in] */ DWORD dwInterval,
            /* [in] */ UINT cRetryCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconInfo( 
            /* [unique][in] */ __RPC__in_opt HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszToolTip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [unique][in] */ __RPC__in_opt IQueryContinue *pqc,
            /* [in] */ DWORD dwContinuePollInterval) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PlaySound( 
            /* [string][in] */ __RPC__in LPCWSTR pszSoundName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUserNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUserNotification * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUserNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUserNotification * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalloonInfo )( 
            IUserNotification * This,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszText,
            /* [in] */ DWORD dwInfoFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalloonRetry )( 
            IUserNotification * This,
            /* [in] */ DWORD dwShowTime,
            /* [in] */ DWORD dwInterval,
            /* [in] */ UINT cRetryCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconInfo )( 
            IUserNotification * This,
            /* [unique][in] */ __RPC__in_opt HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszToolTip);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IUserNotification * This,
            /* [unique][in] */ __RPC__in_opt IQueryContinue *pqc,
            /* [in] */ DWORD dwContinuePollInterval);
        
        HRESULT ( STDMETHODCALLTYPE *PlaySound )( 
            IUserNotification * This,
            /* [string][in] */ __RPC__in LPCWSTR pszSoundName);
        
        END_INTERFACE
    } IUserNotificationVtbl;

    interface IUserNotification
    {
        CONST_VTBL struct IUserNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUserNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUserNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUserNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUserNotification_SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags)	\
    ( (This)->lpVtbl -> SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags) ) 

#define IUserNotification_SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount)	\
    ( (This)->lpVtbl -> SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount) ) 

#define IUserNotification_SetIconInfo(This,hIcon,pszToolTip)	\
    ( (This)->lpVtbl -> SetIconInfo(This,hIcon,pszToolTip) ) 

#define IUserNotification_Show(This,pqc,dwContinuePollInterval)	\
    ( (This)->lpVtbl -> Show(This,pqc,dwContinuePollInterval) ) 

#define IUserNotification_PlaySound(This,pszSoundName)	\
    ( (This)->lpVtbl -> PlaySound(This,pszSoundName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUserNotification_INTERFACE_DEFINED__ */


#ifndef __IUserNotificationCallback_INTERFACE_DEFINED__
#define __IUserNotificationCallback_INTERFACE_DEFINED__

/* interface IUserNotificationCallback */
/* [object][uuid] */ 


EXTERN_C const IID IID_IUserNotificationCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19108294-0441-4AFF-8013-FA0A730B0BEA")
    IUserNotificationCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBalloonUserClick( 
            /* [in] */ __RPC__in POINT *pt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnLeftClick( 
            /* [in] */ __RPC__in POINT *pt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnContextMenu( 
            /* [in] */ __RPC__in POINT *pt) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUserNotificationCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUserNotificationCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUserNotificationCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUserNotificationCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBalloonUserClick )( 
            IUserNotificationCallback * This,
            /* [in] */ __RPC__in POINT *pt);
        
        HRESULT ( STDMETHODCALLTYPE *OnLeftClick )( 
            IUserNotificationCallback * This,
            /* [in] */ __RPC__in POINT *pt);
        
        HRESULT ( STDMETHODCALLTYPE *OnContextMenu )( 
            IUserNotificationCallback * This,
            /* [in] */ __RPC__in POINT *pt);
        
        END_INTERFACE
    } IUserNotificationCallbackVtbl;

    interface IUserNotificationCallback
    {
        CONST_VTBL struct IUserNotificationCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUserNotificationCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUserNotificationCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUserNotificationCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUserNotificationCallback_OnBalloonUserClick(This,pt)	\
    ( (This)->lpVtbl -> OnBalloonUserClick(This,pt) ) 

#define IUserNotificationCallback_OnLeftClick(This,pt)	\
    ( (This)->lpVtbl -> OnLeftClick(This,pt) ) 

#define IUserNotificationCallback_OnContextMenu(This,pt)	\
    ( (This)->lpVtbl -> OnContextMenu(This,pt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUserNotificationCallback_INTERFACE_DEFINED__ */


#ifndef __IUserNotification2_INTERFACE_DEFINED__
#define __IUserNotification2_INTERFACE_DEFINED__

/* interface IUserNotification2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IUserNotification2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("215913CC-57EB-4FAB-AB5A-E5FA7BEA2A6C")
    IUserNotification2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBalloonInfo( 
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszText,
            /* [in] */ DWORD dwInfoFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBalloonRetry( 
            /* [in] */ DWORD dwShowTime,
            /* [in] */ DWORD dwInterval,
            /* [in] */ UINT cRetryCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconInfo( 
            /* [unique][in] */ __RPC__in_opt HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszToolTip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [unique][in] */ __RPC__in_opt IQueryContinue *pqc,
            /* [in] */ DWORD dwContinuePollInterval,
            /* [unique][in] */ __RPC__in_opt IUserNotificationCallback *pSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PlaySound( 
            /* [string][in] */ __RPC__in LPCWSTR pszSoundName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IUserNotification2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUserNotification2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUserNotification2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUserNotification2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalloonInfo )( 
            IUserNotification2 * This,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTitle,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszText,
            /* [in] */ DWORD dwInfoFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalloonRetry )( 
            IUserNotification2 * This,
            /* [in] */ DWORD dwShowTime,
            /* [in] */ DWORD dwInterval,
            /* [in] */ UINT cRetryCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconInfo )( 
            IUserNotification2 * This,
            /* [unique][in] */ __RPC__in_opt HICON hIcon,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszToolTip);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IUserNotification2 * This,
            /* [unique][in] */ __RPC__in_opt IQueryContinue *pqc,
            /* [in] */ DWORD dwContinuePollInterval,
            /* [unique][in] */ __RPC__in_opt IUserNotificationCallback *pSink);
        
        HRESULT ( STDMETHODCALLTYPE *PlaySound )( 
            IUserNotification2 * This,
            /* [string][in] */ __RPC__in LPCWSTR pszSoundName);
        
        END_INTERFACE
    } IUserNotification2Vtbl;

    interface IUserNotification2
    {
        CONST_VTBL struct IUserNotification2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUserNotification2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUserNotification2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUserNotification2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUserNotification2_SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags)	\
    ( (This)->lpVtbl -> SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags) ) 

#define IUserNotification2_SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount)	\
    ( (This)->lpVtbl -> SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount) ) 

#define IUserNotification2_SetIconInfo(This,hIcon,pszToolTip)	\
    ( (This)->lpVtbl -> SetIconInfo(This,hIcon,pszToolTip) ) 

#define IUserNotification2_Show(This,pqc,dwContinuePollInterval,pSink)	\
    ( (This)->lpVtbl -> Show(This,pqc,dwContinuePollInterval,pSink) ) 

#define IUserNotification2_PlaySound(This,pszSoundName)	\
    ( (This)->lpVtbl -> PlaySound(This,pszSoundName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUserNotification2_INTERFACE_DEFINED__ */


#ifndef __IItemNameLimits_INTERFACE_DEFINED__
#define __IItemNameLimits_INTERFACE_DEFINED__

/* interface IItemNameLimits */
/* [object][uuid] */ 


EXTERN_C const IID IID_IItemNameLimits;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1df0d7f1-b267-4d28-8b10-12e23202a5c4")
    IItemNameLimits : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetValidCharacters( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszValidChars,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszInvalidChars) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxLength( 
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [out] */ __RPC__out int *piMaxNameLen) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IItemNameLimitsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IItemNameLimits * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IItemNameLimits * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IItemNameLimits * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetValidCharacters )( 
            IItemNameLimits * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszValidChars,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszInvalidChars);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )( 
            IItemNameLimits * This,
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [out] */ __RPC__out int *piMaxNameLen);
        
        END_INTERFACE
    } IItemNameLimitsVtbl;

    interface IItemNameLimits
    {
        CONST_VTBL struct IItemNameLimitsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IItemNameLimits_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IItemNameLimits_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IItemNameLimits_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IItemNameLimits_GetValidCharacters(This,ppwszValidChars,ppwszInvalidChars)	\
    ( (This)->lpVtbl -> GetValidCharacters(This,ppwszValidChars,ppwszInvalidChars) ) 

#define IItemNameLimits_GetMaxLength(This,pszName,piMaxNameLen)	\
    ( (This)->lpVtbl -> GetMaxLength(This,pszName,piMaxNameLen) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IItemNameLimits_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0072 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0072_v0_0_s_ifspec;

#ifndef __ISearchFolderItemFactory_INTERFACE_DEFINED__
#define __ISearchFolderItemFactory_INTERFACE_DEFINED__

/* interface ISearchFolderItemFactory */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISearchFolderItemFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a0ffbc28-5482-4366-be27-3e81e78e06c2")
    ISearchFolderItemFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetDisplayName( 
            /* [string][in] */ __RPC__in LPCWSTR pszDisplayName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolderTypeID( 
            /* [in] */ FOLDERTYPEID ftid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolderLogicalViewMode( 
            /* [in] */ FOLDERLOGICALVIEWMODE flvm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconSize( 
            /* [in] */ int iIconSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVisibleColumns( 
            /* [in] */ UINT cVisibleColumns,
            /* [size_is][in] */ __RPC__in_ecount_full(cVisibleColumns) PROPERTYKEY *rgKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSortColumns( 
            /* [in] */ UINT cSortColumns,
            /* [size_is][in] */ __RPC__in_ecount_full(cSortColumns) SORTCOLUMN *rgSortColumns) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGroupColumn( 
            /* [in] */ __RPC__in REFPROPERTYKEY keyGroup) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStacks( 
            /* [in] */ UINT cStackKeys,
            /* [size_is][in] */ __RPC__in_ecount_full(cStackKeys) PROPERTYKEY *rgStackKeys) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetScope( 
            /* [in] */ __RPC__in_opt IShellItemArray *psiaScope) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCondition( 
            /* [in] */ __RPC__in_opt ICondition *pCondition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShellItem( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISearchFolderItemFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISearchFolderItemFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISearchFolderItemFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )( 
            ISearchFolderItemFactory * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDisplayName);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolderTypeID )( 
            ISearchFolderItemFactory * This,
            /* [in] */ FOLDERTYPEID ftid);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolderLogicalViewMode )( 
            ISearchFolderItemFactory * This,
            /* [in] */ FOLDERLOGICALVIEWMODE flvm);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconSize )( 
            ISearchFolderItemFactory * This,
            /* [in] */ int iIconSize);
        
        HRESULT ( STDMETHODCALLTYPE *SetVisibleColumns )( 
            ISearchFolderItemFactory * This,
            /* [in] */ UINT cVisibleColumns,
            /* [size_is][in] */ __RPC__in_ecount_full(cVisibleColumns) PROPERTYKEY *rgKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetSortColumns )( 
            ISearchFolderItemFactory * This,
            /* [in] */ UINT cSortColumns,
            /* [size_is][in] */ __RPC__in_ecount_full(cSortColumns) SORTCOLUMN *rgSortColumns);
        
        HRESULT ( STDMETHODCALLTYPE *SetGroupColumn )( 
            ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in REFPROPERTYKEY keyGroup);
        
        HRESULT ( STDMETHODCALLTYPE *SetStacks )( 
            ISearchFolderItemFactory * This,
            /* [in] */ UINT cStackKeys,
            /* [size_is][in] */ __RPC__in_ecount_full(cStackKeys) PROPERTYKEY *rgStackKeys);
        
        HRESULT ( STDMETHODCALLTYPE *SetScope )( 
            ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in_opt IShellItemArray *psiaScope);
        
        HRESULT ( STDMETHODCALLTYPE *SetCondition )( 
            ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in_opt ICondition *pCondition);
        
        HRESULT ( STDMETHODCALLTYPE *GetShellItem )( 
            ISearchFolderItemFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            ISearchFolderItemFactory * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        END_INTERFACE
    } ISearchFolderItemFactoryVtbl;

    interface ISearchFolderItemFactory
    {
        CONST_VTBL struct ISearchFolderItemFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearchFolderItemFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISearchFolderItemFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISearchFolderItemFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISearchFolderItemFactory_SetDisplayName(This,pszDisplayName)	\
    ( (This)->lpVtbl -> SetDisplayName(This,pszDisplayName) ) 

#define ISearchFolderItemFactory_SetFolderTypeID(This,ftid)	\
    ( (This)->lpVtbl -> SetFolderTypeID(This,ftid) ) 

#define ISearchFolderItemFactory_SetFolderLogicalViewMode(This,flvm)	\
    ( (This)->lpVtbl -> SetFolderLogicalViewMode(This,flvm) ) 

#define ISearchFolderItemFactory_SetIconSize(This,iIconSize)	\
    ( (This)->lpVtbl -> SetIconSize(This,iIconSize) ) 

#define ISearchFolderItemFactory_SetVisibleColumns(This,cVisibleColumns,rgKey)	\
    ( (This)->lpVtbl -> SetVisibleColumns(This,cVisibleColumns,rgKey) ) 

#define ISearchFolderItemFactory_SetSortColumns(This,cSortColumns,rgSortColumns)	\
    ( (This)->lpVtbl -> SetSortColumns(This,cSortColumns,rgSortColumns) ) 

#define ISearchFolderItemFactory_SetGroupColumn(This,keyGroup)	\
    ( (This)->lpVtbl -> SetGroupColumn(This,keyGroup) ) 

#define ISearchFolderItemFactory_SetStacks(This,cStackKeys,rgStackKeys)	\
    ( (This)->lpVtbl -> SetStacks(This,cStackKeys,rgStackKeys) ) 

#define ISearchFolderItemFactory_SetScope(This,psiaScope)	\
    ( (This)->lpVtbl -> SetScope(This,psiaScope) ) 

#define ISearchFolderItemFactory_SetCondition(This,pCondition)	\
    ( (This)->lpVtbl -> SetCondition(This,pCondition) ) 

#define ISearchFolderItemFactory_GetShellItem(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetShellItem(This,riid,ppv) ) 

#define ISearchFolderItemFactory_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISearchFolderItemFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0073 */
/* [local] */ 

#endif  // NTDDI_LONGHORN
#if (_WIN32_IE >= 0x0400)
#define IEI_PRIORITY_MAX        ITSAT_MAX_PRIORITY
#define IEI_PRIORITY_MIN        ITSAT_MIN_PRIORITY
#define IEIT_PRIORITY_NORMAL     ITSAT_DEFAULT_PRIORITY
#define IEIFLAG_ASYNC       0x0001      // (deprecated) ask the extractor if it supports ASYNC extract (free threaded)
#define IEIFLAG_CACHE       0x0002      // returned from the extractor if it does NOT cache the thumbnail
#define IEIFLAG_ASPECT      0x0004      // passed to the extractor to beg it to render to the aspect ratio of the supplied rect
#define IEIFLAG_OFFLINE     0x0008      // if the extractor shouldn't hit the net to get any content neede for the rendering
#define IEIFLAG_GLEAM       0x0010      // does the image have a gleam ? this will be returned if it does
#define IEIFLAG_SCREEN      0x0020      // render as if for the screen  (this is exlusive with IEIFLAG_ASPECT )
#define IEIFLAG_ORIGSIZE    0x0040      // render to the approx size passed, but crop if neccessary
#define IEIFLAG_NOSTAMP     0x0080      // returned from the extractor if it does NOT want an icon stamp on the thumbnail
#define IEIFLAG_NOBORDER    0x0100      // returned from the extractor if it does NOT want an a border around the thumbnail
#define IEIFLAG_QUALITY     0x0200      // passed to the Extract method to indicate that a slower, higher quality image is desired, re-compute the thumbnail
#define IEIFLAG_REFRESH     0x0400      // returned from the extractor if it would like to have Refresh Thumbnail available


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0073_v0_0_s_ifspec;

#ifndef __IExtractImage_INTERFACE_DEFINED__
#define __IExtractImage_INTERFACE_DEFINED__

/* interface IExtractImage */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IExtractImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB2E617C-0920-11d1-9A0B-00C04FC2D6C1")
    IExtractImage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLocation( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszPathBuffer,
            /* [in] */ DWORD cch,
            /* [unique][out][in] */ __RPC__inout_opt DWORD *pdwPriority,
            /* [in] */ __RPC__in const SIZE *prgSize,
            /* [in] */ DWORD dwRecClrDepth,
            /* [out][in] */ __RPC__inout DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Extract( 
            /* [out] */ __RPC__deref_out_opt HBITMAP *phBmpThumbnail) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExtractImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtractImage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtractImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtractImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IExtractImage * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszPathBuffer,
            /* [in] */ DWORD cch,
            /* [unique][out][in] */ __RPC__inout_opt DWORD *pdwPriority,
            /* [in] */ __RPC__in const SIZE *prgSize,
            /* [in] */ DWORD dwRecClrDepth,
            /* [out][in] */ __RPC__inout DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Extract )( 
            IExtractImage * This,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phBmpThumbnail);
        
        END_INTERFACE
    } IExtractImageVtbl;

    interface IExtractImage
    {
        CONST_VTBL struct IExtractImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtractImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtractImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtractImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtractImage_GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags)	\
    ( (This)->lpVtbl -> GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags) ) 

#define IExtractImage_Extract(This,phBmpThumbnail)	\
    ( (This)->lpVtbl -> Extract(This,phBmpThumbnail) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtractImage_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0074 */
/* [local] */ 

typedef IExtractImage *LPEXTRACTIMAGE;

#endif
#if (_WIN32_IE >= 0x0500)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0074_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0074_v0_0_s_ifspec;

#ifndef __IExtractImage2_INTERFACE_DEFINED__
#define __IExtractImage2_INTERFACE_DEFINED__

/* interface IExtractImage2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IExtractImage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("953BB1EE-93B4-11d1-98A3-00C04FB687DA")
    IExtractImage2 : public IExtractImage
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDateStamp( 
            /* [out] */ __RPC__out FILETIME *pDateStamp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExtractImage2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtractImage2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtractImage2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtractImage2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IExtractImage2 * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszPathBuffer,
            /* [in] */ DWORD cch,
            /* [unique][out][in] */ __RPC__inout_opt DWORD *pdwPriority,
            /* [in] */ __RPC__in const SIZE *prgSize,
            /* [in] */ DWORD dwRecClrDepth,
            /* [out][in] */ __RPC__inout DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Extract )( 
            IExtractImage2 * This,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phBmpThumbnail);
        
        HRESULT ( STDMETHODCALLTYPE *GetDateStamp )( 
            IExtractImage2 * This,
            /* [out] */ __RPC__out FILETIME *pDateStamp);
        
        END_INTERFACE
    } IExtractImage2Vtbl;

    interface IExtractImage2
    {
        CONST_VTBL struct IExtractImage2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtractImage2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtractImage2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtractImage2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtractImage2_GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags)	\
    ( (This)->lpVtbl -> GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags) ) 

#define IExtractImage2_Extract(This,phBmpThumbnail)	\
    ( (This)->lpVtbl -> Extract(This,phBmpThumbnail) ) 


#define IExtractImage2_GetDateStamp(This,pDateStamp)	\
    ( (This)->lpVtbl -> GetDateStamp(This,pDateStamp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtractImage2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0075 */
/* [local] */ 

typedef IExtractImage2 *LPEXTRACTIMAGE2;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0075_v0_0_s_ifspec;

#ifndef __IThumbnailHandlerFactory_INTERFACE_DEFINED__
#define __IThumbnailHandlerFactory_INTERFACE_DEFINED__

/* interface IThumbnailHandlerFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IThumbnailHandlerFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e35b4b2e-00da-4bc1-9f13-38bc11f5d417")
    IThumbnailHandlerFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetThumbnailHandler( 
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlChild,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IThumbnailHandlerFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThumbnailHandlerFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThumbnailHandlerFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThumbnailHandlerFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetThumbnailHandler )( 
            IThumbnailHandlerFactory * This,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlChild,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IThumbnailHandlerFactoryVtbl;

    interface IThumbnailHandlerFactory
    {
        CONST_VTBL struct IThumbnailHandlerFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThumbnailHandlerFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThumbnailHandlerFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThumbnailHandlerFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThumbnailHandlerFactory_GetThumbnailHandler(This,pidlChild,pbc,riid,ppv)	\
    ( (This)->lpVtbl -> GetThumbnailHandler(This,pidlChild,pbc,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThumbnailHandlerFactory_INTERFACE_DEFINED__ */


#ifndef __IParentAndItem_INTERFACE_DEFINED__
#define __IParentAndItem_INTERFACE_DEFINED__

/* interface IParentAndItem */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IParentAndItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b3a4b685-b685-4805-99d9-5dead2873236")
    IParentAndItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetParentAndItem( 
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlParent,
            /* [unique][in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlChild) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParentAndItem( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidlParent,
            /* [out] */ __RPC__deref_out_opt IShellFolder **ppsf,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlChild) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IParentAndItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IParentAndItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IParentAndItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IParentAndItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetParentAndItem )( 
            IParentAndItem * This,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlParent,
            /* [unique][in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidlChild);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentAndItem )( 
            IParentAndItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidlParent,
            /* [out] */ __RPC__deref_out_opt IShellFolder **ppsf,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlChild);
        
        END_INTERFACE
    } IParentAndItemVtbl;

    interface IParentAndItem
    {
        CONST_VTBL struct IParentAndItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IParentAndItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IParentAndItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IParentAndItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IParentAndItem_SetParentAndItem(This,pidlParent,psf,pidlChild)	\
    ( (This)->lpVtbl -> SetParentAndItem(This,pidlParent,psf,pidlChild) ) 

#define IParentAndItem_GetParentAndItem(This,ppidlParent,ppsf,ppidlChild)	\
    ( (This)->lpVtbl -> GetParentAndItem(This,ppidlParent,ppsf,ppidlChild) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IParentAndItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0077 */
/* [local] */ 

#endif


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0077_v0_0_s_ifspec;

#ifndef __IDockingWindow_INTERFACE_DEFINED__
#define __IDockingWindow_INTERFACE_DEFINED__

/* interface IDockingWindow */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDockingWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("012dd920-7b26-11d0-8ca9-00a0c92dbfe8")
    IDockingWindow : public IOleWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowDW( 
            /* [in] */ BOOL fShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseDW( 
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResizeBorderDW( 
            /* [in] */ __RPC__in LPCRECT prcBorder,
            /* [in] */ __RPC__in_opt IUnknown *punkToolbarSite,
            /* [in] */ BOOL fReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDockingWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDockingWindow * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDockingWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDockingWindow * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IDockingWindow * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IDockingWindow * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *ShowDW )( 
            IDockingWindow * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *CloseDW )( 
            IDockingWindow * This,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *ResizeBorderDW )( 
            IDockingWindow * This,
            /* [in] */ __RPC__in LPCRECT prcBorder,
            /* [in] */ __RPC__in_opt IUnknown *punkToolbarSite,
            /* [in] */ BOOL fReserved);
        
        END_INTERFACE
    } IDockingWindowVtbl;

    interface IDockingWindow
    {
        CONST_VTBL struct IDockingWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDockingWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDockingWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDockingWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDockingWindow_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IDockingWindow_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IDockingWindow_ShowDW(This,fShow)	\
    ( (This)->lpVtbl -> ShowDW(This,fShow) ) 

#define IDockingWindow_CloseDW(This,dwReserved)	\
    ( (This)->lpVtbl -> CloseDW(This,dwReserved) ) 

#define IDockingWindow_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved)	\
    ( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDockingWindow_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0078 */
/* [local] */ 

#define DBIM_MINSIZE    0x0001
#define DBIM_MAXSIZE    0x0002
#define DBIM_INTEGRAL   0x0004
#define DBIM_ACTUAL     0x0008
#define DBIM_TITLE      0x0010
#define DBIM_MODEFLAGS  0x0020
#define DBIM_BKCOLOR    0x0040
#include <pshpack8.h>
typedef struct tagDESKBANDINFO
    {
    DWORD dwMask;
    POINTL ptMinSize;
    POINTL ptMaxSize;
    POINTL ptIntegral;
    POINTL ptActual;
    WCHAR wszTitle[ 256 ];
    DWORD dwModeFlags;
    COLORREF crBkgnd;
    } 	DESKBANDINFO;

#include <poppack.h>
#define DBIMF_NORMAL            0x0000
#define DBIMF_FIXED             0x0001
#define DBIMF_FIXEDBMP          0x0004   // a fixed background bitmap (if supported)
#define DBIMF_VARIABLEHEIGHT    0x0008
#define DBIMF_UNDELETEABLE      0x0010
#define DBIMF_DEBOSSED          0x0020
#define DBIMF_BKCOLOR           0x0040
#define DBIMF_USECHEVRON        0x0080
#define DBIMF_BREAK             0x0100
#define DBIMF_ADDTOFRONT        0x0200
#define DBIMF_TOPALIGN          0x0400
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
#define DBIMF_NOGRIPPER         0x0800
#define DBIMF_ALWAYSGRIPPER     0x1000
#define DBIMF_NOMARGINS         0x2000
#endif  // NTDDI_LONGHORN
#define DBIF_VIEWMODE_NORMAL         0x0000
#define DBIF_VIEWMODE_VERTICAL       0x0001
#define DBIF_VIEWMODE_FLOATING       0x0002
#define DBIF_VIEWMODE_TRANSPARENT    0x0004

enum tagDESKBANDCID
    {	DBID_BANDINFOCHANGED	= 0,
	DBID_SHOWONLY	= 1,
	DBID_MAXIMIZEBAND	= 2,
	DBID_PUSHCHEVRON	= 3,
	DBID_DELAYINIT	= 4,
	DBID_FINISHINIT	= 5,
	DBID_SETWINDOWTHEME	= 6,
	DBID_PERMITAUTOHIDE	= 7
    } ;
#define DBPC_SELECTFIRST    (DWORD)-1
#define DBPC_SELECTLAST     (DWORD)-2
#define CGID_DeskBand IID_IDeskBand


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0078_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0078_v0_0_s_ifspec;

#ifndef __IDeskBand_INTERFACE_DEFINED__
#define __IDeskBand_INTERFACE_DEFINED__

/* interface IDeskBand */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDeskBand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB0FE172-1A3A-11D0-89B3-00A0C90A90AC")
    IDeskBand : public IDockingWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBandInfo( 
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out][in] */ __RPC__inout DESKBANDINFO *pdbi) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDeskBandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeskBand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeskBand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeskBand * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IDeskBand * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IDeskBand * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *ShowDW )( 
            IDeskBand * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *CloseDW )( 
            IDeskBand * This,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *ResizeBorderDW )( 
            IDeskBand * This,
            /* [in] */ __RPC__in LPCRECT prcBorder,
            /* [in] */ __RPC__in_opt IUnknown *punkToolbarSite,
            /* [in] */ BOOL fReserved);
        
        HRESULT ( STDMETHODCALLTYPE *GetBandInfo )( 
            IDeskBand * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out][in] */ __RPC__inout DESKBANDINFO *pdbi);
        
        END_INTERFACE
    } IDeskBandVtbl;

    interface IDeskBand
    {
        CONST_VTBL struct IDeskBandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeskBand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeskBand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeskBand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeskBand_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IDeskBand_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IDeskBand_ShowDW(This,fShow)	\
    ( (This)->lpVtbl -> ShowDW(This,fShow) ) 

#define IDeskBand_CloseDW(This,dwReserved)	\
    ( (This)->lpVtbl -> CloseDW(This,dwReserved) ) 

#define IDeskBand_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved)	\
    ( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) ) 


#define IDeskBand_GetBandInfo(This,dwBandID,dwViewMode,pdbi)	\
    ( (This)->lpVtbl -> GetBandInfo(This,dwBandID,dwViewMode,pdbi) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeskBand_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0079 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0079_v0_0_s_ifspec;

#ifndef __IDeskBandInfo_INTERFACE_DEFINED__
#define __IDeskBandInfo_INTERFACE_DEFINED__

/* interface IDeskBandInfo */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDeskBandInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77E425FC-CBF9-4307-BA6A-BB5727745661")
    IDeskBandInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDefaultBandWidth( 
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out] */ __RPC__out int *pnWidth) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDeskBandInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeskBandInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeskBandInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeskBandInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultBandWidth )( 
            IDeskBandInfo * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out] */ __RPC__out int *pnWidth);
        
        END_INTERFACE
    } IDeskBandInfoVtbl;

    interface IDeskBandInfo
    {
        CONST_VTBL struct IDeskBandInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeskBandInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeskBandInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeskBandInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeskBandInfo_GetDefaultBandWidth(This,dwBandID,dwViewMode,pnWidth)	\
    ( (This)->lpVtbl -> GetDefaultBandWidth(This,dwBandID,dwViewMode,pnWidth) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeskBandInfo_INTERFACE_DEFINED__ */


#ifndef __IDeskBand2_INTERFACE_DEFINED__
#define __IDeskBand2_INTERFACE_DEFINED__

/* interface IDeskBand2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IDeskBand2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79D16DE4-ABEE-4021-8D9D-9169B261D657")
    IDeskBand2 : public IDeskBand
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanRenderComposited( 
            /* [out] */ __RPC__out BOOL *pfCanRenderComposited) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCompositionState( 
            /* [in] */ BOOL fCompositionEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCompositionState( 
            /* [out] */ __RPC__out BOOL *pfCompositionEnabled) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDeskBand2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeskBand2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeskBand2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeskBand2 * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IDeskBand2 * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IDeskBand2 * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *ShowDW )( 
            IDeskBand2 * This,
            /* [in] */ BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *CloseDW )( 
            IDeskBand2 * This,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *ResizeBorderDW )( 
            IDeskBand2 * This,
            /* [in] */ __RPC__in LPCRECT prcBorder,
            /* [in] */ __RPC__in_opt IUnknown *punkToolbarSite,
            /* [in] */ BOOL fReserved);
        
        HRESULT ( STDMETHODCALLTYPE *GetBandInfo )( 
            IDeskBand2 * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwViewMode,
            /* [out][in] */ __RPC__inout DESKBANDINFO *pdbi);
        
        HRESULT ( STDMETHODCALLTYPE *CanRenderComposited )( 
            IDeskBand2 * This,
            /* [out] */ __RPC__out BOOL *pfCanRenderComposited);
        
        HRESULT ( STDMETHODCALLTYPE *SetCompositionState )( 
            IDeskBand2 * This,
            /* [in] */ BOOL fCompositionEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetCompositionState )( 
            IDeskBand2 * This,
            /* [out] */ __RPC__out BOOL *pfCompositionEnabled);
        
        END_INTERFACE
    } IDeskBand2Vtbl;

    interface IDeskBand2
    {
        CONST_VTBL struct IDeskBand2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeskBand2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeskBand2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeskBand2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeskBand2_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IDeskBand2_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IDeskBand2_ShowDW(This,fShow)	\
    ( (This)->lpVtbl -> ShowDW(This,fShow) ) 

#define IDeskBand2_CloseDW(This,dwReserved)	\
    ( (This)->lpVtbl -> CloseDW(This,dwReserved) ) 

#define IDeskBand2_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved)	\
    ( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) ) 


#define IDeskBand2_GetBandInfo(This,dwBandID,dwViewMode,pdbi)	\
    ( (This)->lpVtbl -> GetBandInfo(This,dwBandID,dwViewMode,pdbi) ) 


#define IDeskBand2_CanRenderComposited(This,pfCanRenderComposited)	\
    ( (This)->lpVtbl -> CanRenderComposited(This,pfCanRenderComposited) ) 

#define IDeskBand2_SetCompositionState(This,fCompositionEnabled)	\
    ( (This)->lpVtbl -> SetCompositionState(This,fCompositionEnabled) ) 

#define IDeskBand2_GetCompositionState(This,pfCompositionEnabled)	\
    ( (This)->lpVtbl -> GetCompositionState(This,pfCompositionEnabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeskBand2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0081 */
/* [local] */ 

#endif  // NTDDI_LONGHORN


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0081_v0_0_s_ifspec;

#ifndef __ITaskbarList_INTERFACE_DEFINED__
#define __ITaskbarList_INTERFACE_DEFINED__

/* interface ITaskbarList */
/* [object][uuid] */ 


EXTERN_C const IID IID_ITaskbarList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56FDF342-FD6D-11d0-958A-006097C9A090")
    ITaskbarList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HrInit( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTab( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteTab( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActivateTab( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetActiveAlt( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITaskbarListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITaskbarList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITaskbarList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITaskbarList * This);
        
        HRESULT ( STDMETHODCALLTYPE *HrInit )( 
            ITaskbarList * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTab )( 
            ITaskbarList * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteTab )( 
            ITaskbarList * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateTab )( 
            ITaskbarList * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveAlt )( 
            ITaskbarList * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        END_INTERFACE
    } ITaskbarListVtbl;

    interface ITaskbarList
    {
        CONST_VTBL struct ITaskbarListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITaskbarList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITaskbarList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITaskbarList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITaskbarList_HrInit(This)	\
    ( (This)->lpVtbl -> HrInit(This) ) 

#define ITaskbarList_AddTab(This,hwnd)	\
    ( (This)->lpVtbl -> AddTab(This,hwnd) ) 

#define ITaskbarList_DeleteTab(This,hwnd)	\
    ( (This)->lpVtbl -> DeleteTab(This,hwnd) ) 

#define ITaskbarList_ActivateTab(This,hwnd)	\
    ( (This)->lpVtbl -> ActivateTab(This,hwnd) ) 

#define ITaskbarList_SetActiveAlt(This,hwnd)	\
    ( (This)->lpVtbl -> SetActiveAlt(This,hwnd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITaskbarList_INTERFACE_DEFINED__ */


#ifndef __ITaskbarList2_INTERFACE_DEFINED__
#define __ITaskbarList2_INTERFACE_DEFINED__

/* interface ITaskbarList2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_ITaskbarList2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("602D4995-B13A-429b-A66E-1935E44F4317")
    ITaskbarList2 : public ITaskbarList
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MarkFullscreenWindow( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ BOOL fFullscreen) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITaskbarList2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITaskbarList2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITaskbarList2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITaskbarList2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *HrInit )( 
            ITaskbarList2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTab )( 
            ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteTab )( 
            ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateTab )( 
            ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveAlt )( 
            ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *MarkFullscreenWindow )( 
            ITaskbarList2 * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ BOOL fFullscreen);
        
        END_INTERFACE
    } ITaskbarList2Vtbl;

    interface ITaskbarList2
    {
        CONST_VTBL struct ITaskbarList2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITaskbarList2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITaskbarList2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITaskbarList2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITaskbarList2_HrInit(This)	\
    ( (This)->lpVtbl -> HrInit(This) ) 

#define ITaskbarList2_AddTab(This,hwnd)	\
    ( (This)->lpVtbl -> AddTab(This,hwnd) ) 

#define ITaskbarList2_DeleteTab(This,hwnd)	\
    ( (This)->lpVtbl -> DeleteTab(This,hwnd) ) 

#define ITaskbarList2_ActivateTab(This,hwnd)	\
    ( (This)->lpVtbl -> ActivateTab(This,hwnd) ) 

#define ITaskbarList2_SetActiveAlt(This,hwnd)	\
    ( (This)->lpVtbl -> SetActiveAlt(This,hwnd) ) 


#define ITaskbarList2_MarkFullscreenWindow(This,hwnd,fFullscreen)	\
    ( (This)->lpVtbl -> MarkFullscreenWindow(This,hwnd,fFullscreen) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITaskbarList2_INTERFACE_DEFINED__ */


#ifndef __IStartMenuPinnedList_INTERFACE_DEFINED__
#define __IStartMenuPinnedList_INTERFACE_DEFINED__

/* interface IStartMenuPinnedList */
/* [object][uuid] */ 


EXTERN_C const IID IID_IStartMenuPinnedList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CD19ADA-25A5-4A32-B3B7-347BEE5BE36B")
    IStartMenuPinnedList : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RemoveFromList( 
            /* [in] */ __RPC__in_opt IShellItem *pitem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStartMenuPinnedListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStartMenuPinnedList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStartMenuPinnedList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStartMenuPinnedList * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromList )( 
            IStartMenuPinnedList * This,
            /* [in] */ __RPC__in_opt IShellItem *pitem);
        
        END_INTERFACE
    } IStartMenuPinnedListVtbl;

    interface IStartMenuPinnedList
    {
        CONST_VTBL struct IStartMenuPinnedListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStartMenuPinnedList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStartMenuPinnedList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStartMenuPinnedList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStartMenuPinnedList_RemoveFromList(This,pitem)	\
    ( (This)->lpVtbl -> RemoveFromList(This,pitem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStartMenuPinnedList_INTERFACE_DEFINED__ */


#ifndef __ICDBurn_INTERFACE_DEFINED__
#define __ICDBurn_INTERFACE_DEFINED__

/* interface ICDBurn */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ICDBurn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3d73a659-e5d0-4d42-afc0-5121ba425c8d")
    ICDBurn : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRecorderDriveLetter( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDrive,
            /* [in] */ UINT cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Burn( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasRecordableDrive( 
            /* [out] */ __RPC__out BOOL *pfHasRecorder) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICDBurnVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICDBurn * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICDBurn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICDBurn * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecorderDriveLetter )( 
            ICDBurn * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDrive,
            /* [in] */ UINT cch);
        
        HRESULT ( STDMETHODCALLTYPE *Burn )( 
            ICDBurn * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *HasRecordableDrive )( 
            ICDBurn * This,
            /* [out] */ __RPC__out BOOL *pfHasRecorder);
        
        END_INTERFACE
    } ICDBurnVtbl;

    interface ICDBurn
    {
        CONST_VTBL struct ICDBurnVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICDBurn_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICDBurn_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICDBurn_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICDBurn_GetRecorderDriveLetter(This,pszDrive,cch)	\
    ( (This)->lpVtbl -> GetRecorderDriveLetter(This,pszDrive,cch) ) 

#define ICDBurn_Burn(This,hwnd)	\
    ( (This)->lpVtbl -> Burn(This,hwnd) ) 

#define ICDBurn_HasRecordableDrive(This,pfHasRecorder)	\
    ( (This)->lpVtbl -> HasRecordableDrive(This,pfHasRecorder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICDBurn_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0085 */
/* [local] */ 

#define IDD_WIZEXTN_FIRST    0x5000
#define IDD_WIZEXTN_LAST     0x5100


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0085_v0_0_s_ifspec;

#ifndef __IWizardSite_INTERFACE_DEFINED__
#define __IWizardSite_INTERFACE_DEFINED__

/* interface IWizardSite */
/* [object][local][helpstring][uuid] */ 


EXTERN_C const IID IID_IWizardSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88960f5b-422f-4e7b-8013-73415381c3c3")
    IWizardSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPreviousPage( 
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextPage( 
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCancelledPage( 
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWizardSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWizardSite * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWizardSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWizardSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreviousPage )( 
            IWizardSite * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextPage )( 
            IWizardSite * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        HRESULT ( STDMETHODCALLTYPE *GetCancelledPage )( 
            IWizardSite * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        END_INTERFACE
    } IWizardSiteVtbl;

    interface IWizardSite
    {
        CONST_VTBL struct IWizardSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWizardSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWizardSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWizardSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWizardSite_GetPreviousPage(This,phpage)	\
    ( (This)->lpVtbl -> GetPreviousPage(This,phpage) ) 

#define IWizardSite_GetNextPage(This,phpage)	\
    ( (This)->lpVtbl -> GetNextPage(This,phpage) ) 

#define IWizardSite_GetCancelledPage(This,phpage)	\
    ( (This)->lpVtbl -> GetCancelledPage(This,phpage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWizardSite_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0086 */
/* [local] */ 

#define SID_WizardSite IID_IWizardSite


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0086_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0086_v0_0_s_ifspec;

#ifndef __IWizardExtension_INTERFACE_DEFINED__
#define __IWizardExtension_INTERFACE_DEFINED__

/* interface IWizardExtension */
/* [object][local][helpstring][uuid] */ 


EXTERN_C const IID IID_IWizardExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c02ea696-86cc-491e-9b23-74394a0444a8")
    IWizardExtension : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddPages( 
            /* [size_is][out][in] */ 
            __out_ecount_part(cPages, *pnPagesAdded)  HPROPSHEETPAGE *aPages,
            /* [in] */ 
            __in  UINT cPages,
            /* [out] */ 
            __out  UINT *pnPagesAdded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFirstPage( 
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastPage( 
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWizardExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWizardExtension * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWizardExtension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWizardExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPages )( 
            IWizardExtension * This,
            /* [size_is][out][in] */ 
            __out_ecount_part(cPages, *pnPagesAdded)  HPROPSHEETPAGE *aPages,
            /* [in] */ 
            __in  UINT cPages,
            /* [out] */ 
            __out  UINT *pnPagesAdded);
        
        HRESULT ( STDMETHODCALLTYPE *GetFirstPage )( 
            IWizardExtension * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastPage )( 
            IWizardExtension * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        END_INTERFACE
    } IWizardExtensionVtbl;

    interface IWizardExtension
    {
        CONST_VTBL struct IWizardExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWizardExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWizardExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWizardExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWizardExtension_AddPages(This,aPages,cPages,pnPagesAdded)	\
    ( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) ) 

#define IWizardExtension_GetFirstPage(This,phpage)	\
    ( (This)->lpVtbl -> GetFirstPage(This,phpage) ) 

#define IWizardExtension_GetLastPage(This,phpage)	\
    ( (This)->lpVtbl -> GetLastPage(This,phpage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWizardExtension_INTERFACE_DEFINED__ */


#ifndef __IWebWizardExtension_INTERFACE_DEFINED__
#define __IWebWizardExtension_INTERFACE_DEFINED__

/* interface IWebWizardExtension */
/* [object][unique][local][uuid][helpstring] */ 


EXTERN_C const IID IID_IWebWizardExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0e6b3f66-98d1-48c0-a222-fbde74e2fbc5")
    IWebWizardExtension : public IWizardExtension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetInitialURL( 
            /* [string][in] */ 
            __in  LPCWSTR pszURL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetErrorURL( 
            /* [string][in] */ 
            __in  LPCWSTR pszErrorURL) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWebWizardExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebWizardExtension * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebWizardExtension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebWizardExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPages )( 
            IWebWizardExtension * This,
            /* [size_is][out][in] */ 
            __out_ecount_part(cPages, *pnPagesAdded)  HPROPSHEETPAGE *aPages,
            /* [in] */ 
            __in  UINT cPages,
            /* [out] */ 
            __out  UINT *pnPagesAdded);
        
        HRESULT ( STDMETHODCALLTYPE *GetFirstPage )( 
            IWebWizardExtension * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastPage )( 
            IWebWizardExtension * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        HRESULT ( STDMETHODCALLTYPE *SetInitialURL )( 
            IWebWizardExtension * This,
            /* [string][in] */ 
            __in  LPCWSTR pszURL);
        
        HRESULT ( STDMETHODCALLTYPE *SetErrorURL )( 
            IWebWizardExtension * This,
            /* [string][in] */ 
            __in  LPCWSTR pszErrorURL);
        
        END_INTERFACE
    } IWebWizardExtensionVtbl;

    interface IWebWizardExtension
    {
        CONST_VTBL struct IWebWizardExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebWizardExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebWizardExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebWizardExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebWizardExtension_AddPages(This,aPages,cPages,pnPagesAdded)	\
    ( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) ) 

#define IWebWizardExtension_GetFirstPage(This,phpage)	\
    ( (This)->lpVtbl -> GetFirstPage(This,phpage) ) 

#define IWebWizardExtension_GetLastPage(This,phpage)	\
    ( (This)->lpVtbl -> GetLastPage(This,phpage) ) 


#define IWebWizardExtension_SetInitialURL(This,pszURL)	\
    ( (This)->lpVtbl -> SetInitialURL(This,pszURL) ) 

#define IWebWizardExtension_SetErrorURL(This,pszErrorURL)	\
    ( (This)->lpVtbl -> SetErrorURL(This,pszErrorURL) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebWizardExtension_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0088 */
/* [local] */ 

#define SID_WebWizardHost IID_IWebWizardExtension
#define SHPWHF_NORECOMPRESS             0x00000001  // don't allow/prompt for recompress of streams
#define SHPWHF_NONETPLACECREATE         0x00000002  // don't create a network place when transfer is complete
#define SHPWHF_NOFILESELECTOR           0x00000004  // don't show the file selector
#define SHPWHF_USEMRU                   0x00000008  // For OPW.  Use the Most-Recently-Used Print Provider
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
#define SHPWHF_ANYLOCATION              0x00000100  // allow publishing to any location
#endif  // NTDDI_LONGHORN
#define SHPWHF_VALIDATEVIAWEBFOLDERS    0x00010000  // enable web folders to validate network places (ANP support)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0088_v0_0_s_ifspec;

#ifndef __IPublishingWizard_INTERFACE_DEFINED__
#define __IPublishingWizard_INTERFACE_DEFINED__

/* interface IPublishingWizard */
/* [object][unique][local][uuid][helpstring] */ 


EXTERN_C const IID IID_IPublishingWizard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("aa9198bb-ccec-472d-beed-19a4f6733f7a")
    IPublishingWizard : public IWizardExtension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [unique][in] */ 
            __in_opt  IDataObject *pdo,
            /* [in] */ 
            __in  DWORD dwOptions,
            /* [string][in] */ 
            __in  LPCWSTR pszServiceScope) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransferManifest( 
            /* [out] */ 
            __out  HRESULT *phrFromTransfer,
            /* [out] */ 
            __deref_out  IXMLDOMDocument **pdocManifest) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPublishingWizardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPublishingWizard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPublishingWizard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPublishingWizard * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPages )( 
            IPublishingWizard * This,
            /* [size_is][out][in] */ 
            __out_ecount_part(cPages, *pnPagesAdded)  HPROPSHEETPAGE *aPages,
            /* [in] */ 
            __in  UINT cPages,
            /* [out] */ 
            __out  UINT *pnPagesAdded);
        
        HRESULT ( STDMETHODCALLTYPE *GetFirstPage )( 
            IPublishingWizard * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastPage )( 
            IPublishingWizard * This,
            /* [out] */ 
            __out  HPROPSHEETPAGE *phpage);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPublishingWizard * This,
            /* [unique][in] */ 
            __in_opt  IDataObject *pdo,
            /* [in] */ 
            __in  DWORD dwOptions,
            /* [string][in] */ 
            __in  LPCWSTR pszServiceScope);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransferManifest )( 
            IPublishingWizard * This,
            /* [out] */ 
            __out  HRESULT *phrFromTransfer,
            /* [out] */ 
            __deref_out  IXMLDOMDocument **pdocManifest);
        
        END_INTERFACE
    } IPublishingWizardVtbl;

    interface IPublishingWizard
    {
        CONST_VTBL struct IPublishingWizardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPublishingWizard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPublishingWizard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPublishingWizard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPublishingWizard_AddPages(This,aPages,cPages,pnPagesAdded)	\
    ( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) ) 

#define IPublishingWizard_GetFirstPage(This,phpage)	\
    ( (This)->lpVtbl -> GetFirstPage(This,phpage) ) 

#define IPublishingWizard_GetLastPage(This,phpage)	\
    ( (This)->lpVtbl -> GetLastPage(This,phpage) ) 


#define IPublishingWizard_Initialize(This,pdo,dwOptions,pszServiceScope)	\
    ( (This)->lpVtbl -> Initialize(This,pdo,dwOptions,pszServiceScope) ) 

#define IPublishingWizard_GetTransferManifest(This,phrFromTransfer,pdocManifest)	\
    ( (This)->lpVtbl -> GetTransferManifest(This,phrFromTransfer,pdocManifest) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPublishingWizard_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0089 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0089_v0_0_s_ifspec;

#ifndef __IFolderViewHost_INTERFACE_DEFINED__
#define __IFolderViewHost_INTERFACE_DEFINED__

/* interface IFolderViewHost */
/* [object][local][helpstring][uuid] */ 


EXTERN_C const IID IID_IFolderViewHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1ea58f02-d55a-411d-b09e-9e65ac21605b")
    IFolderViewHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ 
            __in  HWND hwndParent,
            /* [in] */ 
            __in  IDataObject *pdo,
            /* [in] */ 
            __in  RECT *prc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFolderViewHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolderViewHost * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolderViewHost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolderViewHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IFolderViewHost * This,
            /* [in] */ 
            __in  HWND hwndParent,
            /* [in] */ 
            __in  IDataObject *pdo,
            /* [in] */ 
            __in  RECT *prc);
        
        END_INTERFACE
    } IFolderViewHostVtbl;

    interface IFolderViewHost
    {
        CONST_VTBL struct IFolderViewHostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderViewHost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderViewHost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderViewHost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderViewHost_Initialize(This,hwndParent,pdo,prc)	\
    ( (This)->lpVtbl -> Initialize(This,hwndParent,pdo,prc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderViewHost_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0090 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0090_v0_0_s_ifspec;

#ifndef __IExplorerBrowserEvents_INTERFACE_DEFINED__
#define __IExplorerBrowserEvents_INTERFACE_DEFINED__

/* interface IExplorerBrowserEvents */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IExplorerBrowserEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("361bbdc7-e6ee-4e13-be58-58e2240c810f")
    IExplorerBrowserEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnNavigationPending( 
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnViewCreated( 
            /* [in] */ 
            __in  IShellView *psv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnNavigationComplete( 
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnNavigationFailed( 
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExplorerBrowserEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExplorerBrowserEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExplorerBrowserEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExplorerBrowserEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnNavigationPending )( 
            IExplorerBrowserEvents * This,
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder);
        
        HRESULT ( STDMETHODCALLTYPE *OnViewCreated )( 
            IExplorerBrowserEvents * This,
            /* [in] */ 
            __in  IShellView *psv);
        
        HRESULT ( STDMETHODCALLTYPE *OnNavigationComplete )( 
            IExplorerBrowserEvents * This,
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder);
        
        HRESULT ( STDMETHODCALLTYPE *OnNavigationFailed )( 
            IExplorerBrowserEvents * This,
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder);
        
        END_INTERFACE
    } IExplorerBrowserEventsVtbl;

    interface IExplorerBrowserEvents
    {
        CONST_VTBL struct IExplorerBrowserEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerBrowserEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerBrowserEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerBrowserEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerBrowserEvents_OnNavigationPending(This,pidlFolder)	\
    ( (This)->lpVtbl -> OnNavigationPending(This,pidlFolder) ) 

#define IExplorerBrowserEvents_OnViewCreated(This,psv)	\
    ( (This)->lpVtbl -> OnViewCreated(This,psv) ) 

#define IExplorerBrowserEvents_OnNavigationComplete(This,pidlFolder)	\
    ( (This)->lpVtbl -> OnNavigationComplete(This,pidlFolder) ) 

#define IExplorerBrowserEvents_OnNavigationFailed(This,pidlFolder)	\
    ( (This)->lpVtbl -> OnNavigationFailed(This,pidlFolder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerBrowserEvents_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0091 */
/* [local] */ 

/* [v1_enum] */ 
enum _EXPLORER_BROWSER_OPTIONS
    {	EBO_NONE	= 0,
	EBO_NAVIGATEONCE	= 0x1,
	EBO_SHOWFRAMES	= 0x2,
	EBO_ALWAYSNAVIGATE	= 0x4,
	EBO_NOTRAVELLOG	= 0x8,
	EBO_NOWRAPPERWINDOW	= 0x10,
	EBO_HTMLSHAREPOINTVIEW	= 0x20
    } ;
typedef DWORD EXPLORER_BROWSER_OPTIONS;

/* [v1_enum] */ 
enum _EXPLORER_BROWSER_FILL_FLAGS
    {	EBF_NONE	= 0,
	EBF_SELECTFROMDATAOBJECT	= 0x100,
	EBF_NODROPTARGET	= 0x200
    } ;
typedef DWORD EXPLORER_BROWSER_FILL_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0091_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0091_v0_0_s_ifspec;

#ifndef __IExplorerBrowser_INTERFACE_DEFINED__
#define __IExplorerBrowser_INTERFACE_DEFINED__

/* interface IExplorerBrowser */
/* [object][uuid] */ 


EXTERN_C const IID IID_IExplorerBrowser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("dfd3b6b5-c10c-4be9-85f6-a66969f402f6")
    IExplorerBrowser : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ 
            __in  HWND hwndParent,
            /* [in] */ 
            __in  const RECT *prc,
            /* [unique][in] */ 
            __in_opt  const FOLDERSETTINGS *pfs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetRect( 
            /* [unique][out][in] */ 
            __inout_opt  HDWP *phdwp,
            /* [in] */ 
            __in  RECT rcBrowser) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPropertyBag( 
            /* [string][in] */ __RPC__in LPCWSTR pszPropertyBag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEmptyText( 
            /* [string][in] */ __RPC__in LPCWSTR pszEmptyText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolderSettings( 
            /* [in] */ __RPC__in const FOLDERSETTINGS *pfs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IExplorerBrowserEvents *psbe,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptions( 
            /* [in] */ EXPLORER_BROWSER_OPTIONS dwFlag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptions( 
            /* [out] */ __RPC__out EXPLORER_BROWSER_OPTIONS *pdwFlag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BrowseToIDList( 
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [in] */ UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BrowseToObject( 
            /* [in] */ __RPC__in_opt IUnknown *punk,
            /* [in] */ UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FillFromObject( 
            /* [unique][in] */ __RPC__in_opt IUnknown *punk,
            /* [in] */ EXPLORER_BROWSER_FILL_FLAGS dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentView( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExplorerBrowserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExplorerBrowser * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExplorerBrowser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExplorerBrowser * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IExplorerBrowser * This,
            /* [in] */ 
            __in  HWND hwndParent,
            /* [in] */ 
            __in  const RECT *prc,
            /* [unique][in] */ 
            __in_opt  const FOLDERSETTINGS *pfs);
        
        HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IExplorerBrowser * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetRect )( 
            IExplorerBrowser * This,
            /* [unique][out][in] */ 
            __inout_opt  HDWP *phdwp,
            /* [in] */ 
            __in  RECT rcBrowser);
        
        HRESULT ( STDMETHODCALLTYPE *SetPropertyBag )( 
            IExplorerBrowser * This,
            /* [string][in] */ __RPC__in LPCWSTR pszPropertyBag);
        
        HRESULT ( STDMETHODCALLTYPE *SetEmptyText )( 
            IExplorerBrowser * This,
            /* [string][in] */ __RPC__in LPCWSTR pszEmptyText);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolderSettings )( 
            IExplorerBrowser * This,
            /* [in] */ __RPC__in const FOLDERSETTINGS *pfs);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IExplorerBrowser * This,
            /* [in] */ __RPC__in_opt IExplorerBrowserEvents *psbe,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IExplorerBrowser * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            IExplorerBrowser * This,
            /* [in] */ EXPLORER_BROWSER_OPTIONS dwFlag);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            IExplorerBrowser * This,
            /* [out] */ __RPC__out EXPLORER_BROWSER_OPTIONS *pdwFlag);
        
        HRESULT ( STDMETHODCALLTYPE *BrowseToIDList )( 
            IExplorerBrowser * This,
            /* [in] */ __RPC__in PCUIDLIST_RELATIVE pidl,
            /* [in] */ UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *BrowseToObject )( 
            IExplorerBrowser * This,
            /* [in] */ __RPC__in_opt IUnknown *punk,
            /* [in] */ UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *FillFromObject )( 
            IExplorerBrowser * This,
            /* [unique][in] */ __RPC__in_opt IUnknown *punk,
            /* [in] */ EXPLORER_BROWSER_FILL_FLAGS dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IExplorerBrowser * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentView )( 
            IExplorerBrowser * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IExplorerBrowserVtbl;

    interface IExplorerBrowser
    {
        CONST_VTBL struct IExplorerBrowserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerBrowser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerBrowser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerBrowser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerBrowser_Initialize(This,hwndParent,prc,pfs)	\
    ( (This)->lpVtbl -> Initialize(This,hwndParent,prc,pfs) ) 

#define IExplorerBrowser_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IExplorerBrowser_SetRect(This,phdwp,rcBrowser)	\
    ( (This)->lpVtbl -> SetRect(This,phdwp,rcBrowser) ) 

#define IExplorerBrowser_SetPropertyBag(This,pszPropertyBag)	\
    ( (This)->lpVtbl -> SetPropertyBag(This,pszPropertyBag) ) 

#define IExplorerBrowser_SetEmptyText(This,pszEmptyText)	\
    ( (This)->lpVtbl -> SetEmptyText(This,pszEmptyText) ) 

#define IExplorerBrowser_SetFolderSettings(This,pfs)	\
    ( (This)->lpVtbl -> SetFolderSettings(This,pfs) ) 

#define IExplorerBrowser_Advise(This,psbe,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,psbe,pdwCookie) ) 

#define IExplorerBrowser_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IExplorerBrowser_SetOptions(This,dwFlag)	\
    ( (This)->lpVtbl -> SetOptions(This,dwFlag) ) 

#define IExplorerBrowser_GetOptions(This,pdwFlag)	\
    ( (This)->lpVtbl -> GetOptions(This,pdwFlag) ) 

#define IExplorerBrowser_BrowseToIDList(This,pidl,uFlags)	\
    ( (This)->lpVtbl -> BrowseToIDList(This,pidl,uFlags) ) 

#define IExplorerBrowser_BrowseToObject(This,punk,uFlags)	\
    ( (This)->lpVtbl -> BrowseToObject(This,punk,uFlags) ) 

#define IExplorerBrowser_FillFromObject(This,punk,dwFlags)	\
    ( (This)->lpVtbl -> FillFromObject(This,punk,dwFlags) ) 

#define IExplorerBrowser_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IExplorerBrowser_GetCurrentView(This,riid,ppv)	\
    ( (This)->lpVtbl -> GetCurrentView(This,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerBrowser_INTERFACE_DEFINED__ */


#ifndef __IAccessibleObject_INTERFACE_DEFINED__
#define __IAccessibleObject_INTERFACE_DEFINED__

/* interface IAccessibleObject */
/* [object][uuid] */ 


EXTERN_C const IID IID_IAccessibleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95A391C5-9ED4-4c28-8401-AB9E06719E11")
    IAccessibleObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAccessibleName( 
            /* [string][in] */ __RPC__in LPCWSTR pszName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAccessibleObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAccessibleObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAccessibleObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAccessibleObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAccessibleName )( 
            IAccessibleObject * This,
            /* [string][in] */ __RPC__in LPCWSTR pszName);
        
        END_INTERFACE
    } IAccessibleObjectVtbl;

    interface IAccessibleObject
    {
        CONST_VTBL struct IAccessibleObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAccessibleObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAccessibleObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAccessibleObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAccessibleObject_SetAccessibleName(This,pszName)	\
    ( (This)->lpVtbl -> SetAccessibleName(This,pszName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAccessibleObject_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0093 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0093_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0093_v0_0_s_ifspec;

#ifndef __IResultsFolder_INTERFACE_DEFINED__
#define __IResultsFolder_INTERFACE_DEFINED__

/* interface IResultsFolder */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IResultsFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96E5AE6D-6AE1-4b1c-900C-C6480EAA8828")
    IResultsFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddItem( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddIDList( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlAdded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveItem( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveIDList( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IResultsFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IResultsFolder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IResultsFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IResultsFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddItem )( 
            IResultsFolder * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *AddIDList )( 
            IResultsFolder * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl,
            /* [out] */ __RPC__deref_out_opt PITEMID_CHILD *ppidlAdded);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveItem )( 
            IResultsFolder * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveIDList )( 
            IResultsFolder * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IResultsFolder * This);
        
        END_INTERFACE
    } IResultsFolderVtbl;

    interface IResultsFolder
    {
        CONST_VTBL struct IResultsFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IResultsFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IResultsFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IResultsFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IResultsFolder_AddItem(This,psi)	\
    ( (This)->lpVtbl -> AddItem(This,psi) ) 

#define IResultsFolder_AddIDList(This,pidl,ppidlAdded)	\
    ( (This)->lpVtbl -> AddIDList(This,pidl,ppidlAdded) ) 

#define IResultsFolder_RemoveItem(This,psi)	\
    ( (This)->lpVtbl -> RemoveItem(This,psi) ) 

#define IResultsFolder_RemoveIDList(This,pidl)	\
    ( (This)->lpVtbl -> RemoveIDList(This,pidl) ) 

#define IResultsFolder_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IResultsFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0094 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0094_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0094_v0_0_s_ifspec;

#ifndef __IEnumObjects_INTERFACE_DEFINED__
#define __IEnumObjects_INTERFACE_DEFINED__

/* interface IEnumObjects */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IEnumObjects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2c1c7e2e-2d0e-4059-831e-1e6f82335c2e")
    IEnumObjects : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ 
            __in  ULONG celt,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][length_is][size_is][out] */ 
            __out_ecount_part(celt, *pceltFetched)  void **rgelt,
            /* [out] */ 
            __out_opt  ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumObjects **ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumObjectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumObjects * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumObjects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumObjects * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumObjects * This,
            /* [in] */ 
            __in  ULONG celt,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][length_is][size_is][out] */ 
            __out_ecount_part(celt, *pceltFetched)  void **rgelt,
            /* [out] */ 
            __out_opt  ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumObjects * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumObjects * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumObjects * This,
            /* [out] */ __RPC__deref_out_opt IEnumObjects **ppenum);
        
        END_INTERFACE
    } IEnumObjectsVtbl;

    interface IEnumObjects
    {
        CONST_VTBL struct IEnumObjectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumObjects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumObjects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumObjects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumObjects_Next(This,celt,riid,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,riid,rgelt,pceltFetched) ) 

#define IEnumObjects_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumObjects_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumObjects_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumObjects_RemoteNext_Proxy( 
    IEnumObjects * This,
    /* [in] */ ULONG celt,
    /* [in] */ __RPC__in REFIID riid,
    /* [iid_is][size_is][out] */ __RPC__out_ecount_full(celt) void **rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);


void __RPC_STUB IEnumObjects_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumObjects_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0095 */
/* [local] */ 

#define OPPROGDLG_ENABLEPAUSE     0x00000080      // Add a pause button (operation can be paused)
#define OPPROGDLG_ALLOWUNDO       0x00000100      // The operation can be undone in the dialog.  (The Stop button becomes Undo)
#define OPPROGDLG_DONTDISPLAYSOURCEPATH   0x00000200  // Don't display the path of source file in progress dialog
#define OPPROGDLG_DONTDISPLAYDESTPATH     0x00000400  // Don't display the path of destination file in progress dialog


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0095_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0095_v0_0_s_ifspec;

#ifndef __IOperationsProgressDialog_INTERFACE_DEFINED__
#define __IOperationsProgressDialog_INTERFACE_DEFINED__

/* interface IOperationsProgressDialog */
/* [unique][object][uuid][helpstring] */ 

/* [v1_enum] */ 
enum tagPDMODE
    {	PDM_RUN	= 0x1,
	PDM_PREFLIGHT	= 0x2,
	PDM_UNDOING	= 0x4,
	PDM_ERRORSBLOCKING	= 0x8,
	PDM_INDETERMINATE	= 0x10
    } ;
typedef DWORD PDMODE;

typedef /* [v1_enum] */ 
enum tagPDOPSTATUS
    {	PDOPS_RUNNING	= 0x1,
	PDOPS_PAUSED	= 0x2,
	PDOPS_CANCELLED	= 0x3,
	PDOPS_STOPPED	= 0x4,
	PDOPS_ERRORS	= 0x5
    } 	PDOPSTATUS;


EXTERN_C const IID IID_IOperationsProgressDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C9FB851-E5C9-43EB-A370-F0677B13874C")
    IOperationsProgressDialog : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartProgressDialog( 
            /* [unique][in] */ __RPC__in_opt HWND hwndParent,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopProgressDialog( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOperation( 
            /* [in] */ SPACTION action) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMode( 
            /* [in] */ PDMODE mode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateProgress( 
            /* [in] */ ULONGLONG ullPointsCurrent,
            /* [in] */ ULONGLONG ullPointsTotal,
            /* [in] */ ULONGLONG ullSizeCurrent,
            /* [in] */ ULONGLONG ullSizeTotal,
            /* [in] */ ULONGLONG ullItemsCurrent,
            /* [in] */ ULONGLONG ullItemsTotal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateLocations( 
            /* [unique][in] */ __RPC__in_opt IShellItem *psiSource,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiTarget,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PauseTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResumeTimer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMilliseconds( 
            /* [out] */ __RPC__out ULONGLONG *pullElapsed,
            /* [out] */ __RPC__out ULONGLONG *pullRemaining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOperationStatus( 
            /* [out] */ __RPC__out PDOPSTATUS *popstatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOperationsProgressDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOperationsProgressDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOperationsProgressDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartProgressDialog )( 
            IOperationsProgressDialog * This,
            /* [unique][in] */ __RPC__in_opt HWND hwndParent,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *StopProgressDialog )( 
            IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetOperation )( 
            IOperationsProgressDialog * This,
            /* [in] */ SPACTION action);
        
        HRESULT ( STDMETHODCALLTYPE *SetMode )( 
            IOperationsProgressDialog * This,
            /* [in] */ PDMODE mode);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateProgress )( 
            IOperationsProgressDialog * This,
            /* [in] */ ULONGLONG ullPointsCurrent,
            /* [in] */ ULONGLONG ullPointsTotal,
            /* [in] */ ULONGLONG ullSizeCurrent,
            /* [in] */ ULONGLONG ullSizeTotal,
            /* [in] */ ULONGLONG ullItemsCurrent,
            /* [in] */ ULONGLONG ullItemsTotal);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateLocations )( 
            IOperationsProgressDialog * This,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiSource,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiTarget,
            /* [unique][in] */ __RPC__in_opt IShellItem *psiItem);
        
        HRESULT ( STDMETHODCALLTYPE *ResetTimer )( 
            IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *PauseTimer )( 
            IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResumeTimer )( 
            IOperationsProgressDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMilliseconds )( 
            IOperationsProgressDialog * This,
            /* [out] */ __RPC__out ULONGLONG *pullElapsed,
            /* [out] */ __RPC__out ULONGLONG *pullRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetOperationStatus )( 
            IOperationsProgressDialog * This,
            /* [out] */ __RPC__out PDOPSTATUS *popstatus);
        
        END_INTERFACE
    } IOperationsProgressDialogVtbl;

    interface IOperationsProgressDialog
    {
        CONST_VTBL struct IOperationsProgressDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOperationsProgressDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOperationsProgressDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOperationsProgressDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOperationsProgressDialog_StartProgressDialog(This,hwndParent,dwFlags)	\
    ( (This)->lpVtbl -> StartProgressDialog(This,hwndParent,dwFlags) ) 

#define IOperationsProgressDialog_StopProgressDialog(This)	\
    ( (This)->lpVtbl -> StopProgressDialog(This) ) 

#define IOperationsProgressDialog_SetOperation(This,action)	\
    ( (This)->lpVtbl -> SetOperation(This,action) ) 

#define IOperationsProgressDialog_SetMode(This,mode)	\
    ( (This)->lpVtbl -> SetMode(This,mode) ) 

#define IOperationsProgressDialog_UpdateProgress(This,ullPointsCurrent,ullPointsTotal,ullSizeCurrent,ullSizeTotal,ullItemsCurrent,ullItemsTotal)	\
    ( (This)->lpVtbl -> UpdateProgress(This,ullPointsCurrent,ullPointsTotal,ullSizeCurrent,ullSizeTotal,ullItemsCurrent,ullItemsTotal) ) 

#define IOperationsProgressDialog_UpdateLocations(This,psiSource,psiTarget,psiItem)	\
    ( (This)->lpVtbl -> UpdateLocations(This,psiSource,psiTarget,psiItem) ) 

#define IOperationsProgressDialog_ResetTimer(This)	\
    ( (This)->lpVtbl -> ResetTimer(This) ) 

#define IOperationsProgressDialog_PauseTimer(This)	\
    ( (This)->lpVtbl -> PauseTimer(This) ) 

#define IOperationsProgressDialog_ResumeTimer(This)	\
    ( (This)->lpVtbl -> ResumeTimer(This) ) 

#define IOperationsProgressDialog_GetMilliseconds(This,pullElapsed,pullRemaining)	\
    ( (This)->lpVtbl -> GetMilliseconds(This,pullElapsed,pullRemaining) ) 

#define IOperationsProgressDialog_GetOperationStatus(This,popstatus)	\
    ( (This)->lpVtbl -> GetOperationStatus(This,popstatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOperationsProgressDialog_INTERFACE_DEFINED__ */


#ifndef __IOperationsUpdateProgress_INTERFACE_DEFINED__
#define __IOperationsUpdateProgress_INTERFACE_DEFINED__

/* interface IOperationsUpdateProgress */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IOperationsUpdateProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5256C5C-F918-49E6-BBB7-A3C254C09FDF")
    IOperationsUpdateProgress : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTreeDone( 
            /* [in] */ int iFiles,
            /* [in] */ int iFolders,
            /* [in] */ LONGLONG llSize,
            /* [in] */ int iPoints) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTreeTotal( 
            /* [in] */ int iFiles,
            /* [in] */ int iFolders,
            /* [in] */ LONGLONG llSize,
            /* [in] */ int iPoints) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOperationsUpdateProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOperationsUpdateProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOperationsUpdateProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOperationsUpdateProgress * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTreeDone )( 
            IOperationsUpdateProgress * This,
            /* [in] */ int iFiles,
            /* [in] */ int iFolders,
            /* [in] */ LONGLONG llSize,
            /* [in] */ int iPoints);
        
        HRESULT ( STDMETHODCALLTYPE *AddTreeTotal )( 
            IOperationsUpdateProgress * This,
            /* [in] */ int iFiles,
            /* [in] */ int iFolders,
            /* [in] */ LONGLONG llSize,
            /* [in] */ int iPoints);
        
        END_INTERFACE
    } IOperationsUpdateProgressVtbl;

    interface IOperationsUpdateProgress
    {
        CONST_VTBL struct IOperationsUpdateProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOperationsUpdateProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOperationsUpdateProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOperationsUpdateProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOperationsUpdateProgress_AddTreeDone(This,iFiles,iFolders,llSize,iPoints)	\
    ( (This)->lpVtbl -> AddTreeDone(This,iFiles,iFolders,llSize,iPoints) ) 

#define IOperationsUpdateProgress_AddTreeTotal(This,iFiles,iFolders,llSize,iPoints)	\
    ( (This)->lpVtbl -> AddTreeTotal(This,iFiles,iFolders,llSize,iPoints) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOperationsUpdateProgress_INTERFACE_DEFINED__ */


#ifndef __IIOCancelInformation_INTERFACE_DEFINED__
#define __IIOCancelInformation_INTERFACE_DEFINED__

/* interface IIOCancelInformation */
/* [local][unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IIOCancelInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f5b0bf81-8cb5-4b1b-9449-1a159e0c733c")
    IIOCancelInformation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCancelInformation( 
            /* [in] */ DWORD dwThreadID,
            /* [in] */ UINT uMsgCancel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCancelInformation( 
            /* [out] */ 
            __out_opt  DWORD *pdwThreadID,
            /* [out] */ 
            __out_opt  UINT *puMsgCancel) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIOCancelInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIOCancelInformation * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIOCancelInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIOCancelInformation * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCancelInformation )( 
            IIOCancelInformation * This,
            /* [in] */ DWORD dwThreadID,
            /* [in] */ UINT uMsgCancel);
        
        HRESULT ( STDMETHODCALLTYPE *GetCancelInformation )( 
            IIOCancelInformation * This,
            /* [out] */ 
            __out_opt  DWORD *pdwThreadID,
            /* [out] */ 
            __out_opt  UINT *puMsgCancel);
        
        END_INTERFACE
    } IIOCancelInformationVtbl;

    interface IIOCancelInformation
    {
        CONST_VTBL struct IIOCancelInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIOCancelInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIOCancelInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIOCancelInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIOCancelInformation_SetCancelInformation(This,dwThreadID,uMsgCancel)	\
    ( (This)->lpVtbl -> SetCancelInformation(This,dwThreadID,uMsgCancel) ) 

#define IIOCancelInformation_GetCancelInformation(This,pdwThreadID,puMsgCancel)	\
    ( (This)->lpVtbl -> GetCancelInformation(This,pdwThreadID,puMsgCancel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIOCancelInformation_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0098 */
/* [local] */ 

#define FOFX_NOSKIPJUNCTIONS         0x00010000  // Don't avoid binding to junctions (like Task folder, Recycle-Bin)
#define FOFX_PREFERHARDLINK          0x00020000  // Create hard link if possible
#define FOFX_SHOWELEVATIONPROMPT     0x00040000  // Show elevation prompts when error UI is disabled (use with FOF_NOERRORUI)
#define FOFX_EARLYFAILURE            0x00100000  // Fail operation as soon as a single error occurs rather than trying to process other items (applies only when using FOF_NOERRORUI)
#define FOFX_PRESERVEFILEEXTENSIONS  0x00200000  // Rename collisions preserve file extns (use with FOF_RENAMEONCOLLISION)
#define FOFX_KEEPNEWERFILE           0x00400000  // Keep newer file on naming conflicts
#define FOFX_NOCOPYHOOKS             0x00800000  // Don't use copy hooks
#define FOFX_NOMINIMIZEBOX           0x01000000  // Don't allow minimizing the progress dialog
#define FOFX_MOVEACLSACROSSVOLUMES   0x02000000  // Copy security information when performing a cross-volume move operation
#define FOFX_DONTDISPLAYSOURCEPATH   0x04000000  // Don't display the path of source file in progress dialog
#define FOFX_DONTDISPLAYDESTPATH     0x08000000  // Don't display the path of destination file in progress dialog


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0098_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0098_v0_0_s_ifspec;

#ifndef __IFileOperation_INTERFACE_DEFINED__
#define __IFileOperation_INTERFACE_DEFINED__

/* interface IFileOperation */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IFileOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("947aab5f-0a5c-4c13-b4d6-4bf7836fc9f8")
    IFileOperation : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IFileOperationProgressSink *pfops,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOperationFlags( 
            /* [in] */ DWORD dwOperationFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressMessage( 
            /* [string][in] */ __RPC__in LPCWSTR pszMessage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressDialog( 
            /* [in] */ __RPC__in_opt IOperationsProgressDialog *popd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperties( 
            /* [in] */ __RPC__in_opt IPropertyChangeArray *pproparray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOwnerWindow( 
            /* [in] */ __RPC__in HWND hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyPropertiesToItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyPropertiesToItems( 
            /* [in] */ __RPC__in_opt IUnknown *punkItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenameItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][in] */ __RPC__in LPCWSTR pszNewName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenameItems( 
            /* [in] */ __RPC__in_opt IUnknown *pUnkItems,
            /* [string][in] */ __RPC__in LPCWSTR pszNewName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveItems( 
            /* [in] */ __RPC__in_opt IUnknown *punkItems,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszCopyName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyItems( 
            /* [in] */ __RPC__in_opt IUnknown *punkItems,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteItems( 
            /* [in] */ __RPC__in_opt IUnknown *punkItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NewItem( 
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [in] */ DWORD dwFileAttributes,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszName,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTemplateName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformOperations( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAnyOperationsAborted( 
            /* [out] */ __RPC__out BOOL *pfAnyOperationsAborted) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileOperation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IFileOperationProgressSink *pfops,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IFileOperation * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOperationFlags )( 
            IFileOperation * This,
            /* [in] */ DWORD dwOperationFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressMessage )( 
            IFileOperation * This,
            /* [string][in] */ __RPC__in LPCWSTR pszMessage);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressDialog )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IOperationsProgressDialog *popd);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperties )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IPropertyChangeArray *pproparray);
        
        HRESULT ( STDMETHODCALLTYPE *SetOwnerWindow )( 
            IFileOperation * This,
            /* [in] */ __RPC__in HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyPropertiesToItem )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyPropertiesToItems )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *punkItems);
        
        HRESULT ( STDMETHODCALLTYPE *RenameItem )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [string][in] */ __RPC__in LPCWSTR pszNewName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *RenameItems )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *pUnkItems,
            /* [string][in] */ __RPC__in LPCWSTR pszNewName);
        
        HRESULT ( STDMETHODCALLTYPE *MoveItem )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszNewName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *MoveItems )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *punkItems,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder);
        
        HRESULT ( STDMETHODCALLTYPE *CopyItem )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszCopyName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *CopyItems )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *punkItems,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiItem,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteItems )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IUnknown *punkItems);
        
        HRESULT ( STDMETHODCALLTYPE *NewItem )( 
            IFileOperation * This,
            /* [in] */ __RPC__in_opt IShellItem *psiDestinationFolder,
            /* [in] */ DWORD dwFileAttributes,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszName,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTemplateName,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pfopsItem);
        
        HRESULT ( STDMETHODCALLTYPE *PerformOperations )( 
            IFileOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAnyOperationsAborted )( 
            IFileOperation * This,
            /* [out] */ __RPC__out BOOL *pfAnyOperationsAborted);
        
        END_INTERFACE
    } IFileOperationVtbl;

    interface IFileOperation
    {
        CONST_VTBL struct IFileOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileOperation_Advise(This,pfops,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pfops,pdwCookie) ) 

#define IFileOperation_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFileOperation_SetOperationFlags(This,dwOperationFlags)	\
    ( (This)->lpVtbl -> SetOperationFlags(This,dwOperationFlags) ) 

#define IFileOperation_SetProgressMessage(This,pszMessage)	\
    ( (This)->lpVtbl -> SetProgressMessage(This,pszMessage) ) 

#define IFileOperation_SetProgressDialog(This,popd)	\
    ( (This)->lpVtbl -> SetProgressDialog(This,popd) ) 

#define IFileOperation_SetProperties(This,pproparray)	\
    ( (This)->lpVtbl -> SetProperties(This,pproparray) ) 

#define IFileOperation_SetOwnerWindow(This,hwndParent)	\
    ( (This)->lpVtbl -> SetOwnerWindow(This,hwndParent) ) 

#define IFileOperation_ApplyPropertiesToItem(This,psiItem)	\
    ( (This)->lpVtbl -> ApplyPropertiesToItem(This,psiItem) ) 

#define IFileOperation_ApplyPropertiesToItems(This,punkItems)	\
    ( (This)->lpVtbl -> ApplyPropertiesToItems(This,punkItems) ) 

#define IFileOperation_RenameItem(This,psiItem,pszNewName,pfopsItem)	\
    ( (This)->lpVtbl -> RenameItem(This,psiItem,pszNewName,pfopsItem) ) 

#define IFileOperation_RenameItems(This,pUnkItems,pszNewName)	\
    ( (This)->lpVtbl -> RenameItems(This,pUnkItems,pszNewName) ) 

#define IFileOperation_MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem)	\
    ( (This)->lpVtbl -> MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem) ) 

#define IFileOperation_MoveItems(This,punkItems,psiDestinationFolder)	\
    ( (This)->lpVtbl -> MoveItems(This,punkItems,psiDestinationFolder) ) 

#define IFileOperation_CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem)	\
    ( (This)->lpVtbl -> CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem) ) 

#define IFileOperation_CopyItems(This,punkItems,psiDestinationFolder)	\
    ( (This)->lpVtbl -> CopyItems(This,punkItems,psiDestinationFolder) ) 

#define IFileOperation_DeleteItem(This,psiItem,pfopsItem)	\
    ( (This)->lpVtbl -> DeleteItem(This,psiItem,pfopsItem) ) 

#define IFileOperation_DeleteItems(This,punkItems)	\
    ( (This)->lpVtbl -> DeleteItems(This,punkItems) ) 

#define IFileOperation_NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem)	\
    ( (This)->lpVtbl -> NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem) ) 

#define IFileOperation_PerformOperations(This)	\
    ( (This)->lpVtbl -> PerformOperations(This) ) 

#define IFileOperation_GetAnyOperationsAborted(This,pfAnyOperationsAborted)	\
    ( (This)->lpVtbl -> GetAnyOperationsAborted(This,pfAnyOperationsAborted) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileOperation_INTERFACE_DEFINED__ */


#ifndef __IObjectProvider_INTERFACE_DEFINED__
#define __IObjectProvider_INTERFACE_DEFINED__

/* interface IObjectProvider */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IObjectProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a6087428-3be3-4d73-b308-7c04a540bf1a")
    IObjectProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryObject( 
            /* [in] */ __RPC__in REFGUID guidObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObjectProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryObject )( 
            IObjectProvider * This,
            /* [in] */ __RPC__in REFGUID guidObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppvOut);
        
        END_INTERFACE
    } IObjectProviderVtbl;

    interface IObjectProvider
    {
        CONST_VTBL struct IObjectProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectProvider_QueryObject(This,guidObject,riid,ppvOut)	\
    ( (This)->lpVtbl -> QueryObject(This,guidObject,riid,ppvOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0100 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0100_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0100_v0_0_s_ifspec;

#ifndef __INamespaceWalkCB_INTERFACE_DEFINED__
#define __INamespaceWalkCB_INTERFACE_DEFINED__

/* interface INamespaceWalkCB */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_INamespaceWalkCB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d92995f8-cf5e-4a76-bf59-ead39ea2b97e")
    INamespaceWalkCB : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FoundItem( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnterFolder( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LeaveFolder( 
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeProgressDialog( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszTitle,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszCancel) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INamespaceWalkCBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INamespaceWalkCB * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INamespaceWalkCB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INamespaceWalkCB * This);
        
        HRESULT ( STDMETHODCALLTYPE *FoundItem )( 
            INamespaceWalkCB * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *EnterFolder )( 
            INamespaceWalkCB * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *LeaveFolder )( 
            INamespaceWalkCB * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeProgressDialog )( 
            INamespaceWalkCB * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszTitle,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszCancel);
        
        END_INTERFACE
    } INamespaceWalkCBVtbl;

    interface INamespaceWalkCB
    {
        CONST_VTBL struct INamespaceWalkCBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamespaceWalkCB_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INamespaceWalkCB_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INamespaceWalkCB_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INamespaceWalkCB_FoundItem(This,psf,pidl)	\
    ( (This)->lpVtbl -> FoundItem(This,psf,pidl) ) 

#define INamespaceWalkCB_EnterFolder(This,psf,pidl)	\
    ( (This)->lpVtbl -> EnterFolder(This,psf,pidl) ) 

#define INamespaceWalkCB_LeaveFolder(This,psf,pidl)	\
    ( (This)->lpVtbl -> LeaveFolder(This,psf,pidl) ) 

#define INamespaceWalkCB_InitializeProgressDialog(This,ppszTitle,ppszCancel)	\
    ( (This)->lpVtbl -> InitializeProgressDialog(This,ppszTitle,ppszCancel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INamespaceWalkCB_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0101 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0101_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0101_v0_0_s_ifspec;

#ifndef __INamespaceWalkCB2_INTERFACE_DEFINED__
#define __INamespaceWalkCB2_INTERFACE_DEFINED__

/* interface INamespaceWalkCB2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_INamespaceWalkCB2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7ac7492b-c38e-438a-87db-68737844ff70")
    INamespaceWalkCB2 : public INamespaceWalkCB
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE WalkComplete( 
            /* [in] */ HRESULT hr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INamespaceWalkCB2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INamespaceWalkCB2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INamespaceWalkCB2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INamespaceWalkCB2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *FoundItem )( 
            INamespaceWalkCB2 * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *EnterFolder )( 
            INamespaceWalkCB2 * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *LeaveFolder )( 
            INamespaceWalkCB2 * This,
            /* [in] */ __RPC__in_opt IShellFolder *psf,
            /* [in] */ __RPC__in PCUITEMID_CHILD pidl);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeProgressDialog )( 
            INamespaceWalkCB2 * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszTitle,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszCancel);
        
        HRESULT ( STDMETHODCALLTYPE *WalkComplete )( 
            INamespaceWalkCB2 * This,
            /* [in] */ HRESULT hr);
        
        END_INTERFACE
    } INamespaceWalkCB2Vtbl;

    interface INamespaceWalkCB2
    {
        CONST_VTBL struct INamespaceWalkCB2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamespaceWalkCB2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INamespaceWalkCB2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INamespaceWalkCB2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INamespaceWalkCB2_FoundItem(This,psf,pidl)	\
    ( (This)->lpVtbl -> FoundItem(This,psf,pidl) ) 

#define INamespaceWalkCB2_EnterFolder(This,psf,pidl)	\
    ( (This)->lpVtbl -> EnterFolder(This,psf,pidl) ) 

#define INamespaceWalkCB2_LeaveFolder(This,psf,pidl)	\
    ( (This)->lpVtbl -> LeaveFolder(This,psf,pidl) ) 

#define INamespaceWalkCB2_InitializeProgressDialog(This,ppszTitle,ppszCancel)	\
    ( (This)->lpVtbl -> InitializeProgressDialog(This,ppszTitle,ppszCancel) ) 


#define INamespaceWalkCB2_WalkComplete(This,hr)	\
    ( (This)->lpVtbl -> WalkComplete(This,hr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INamespaceWalkCB2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0102 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0102_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0102_v0_0_s_ifspec;

#ifndef __INamespaceWalk_INTERFACE_DEFINED__
#define __INamespaceWalk_INTERFACE_DEFINED__

/* interface INamespaceWalk */
/* [object][helpstring][uuid] */ 


enum tagNAMESPACEWALKFLAG
    {	NSWF_NONE_IMPLIES_ALL	= 0x1,
	NSWF_ONE_IMPLIES_ALL	= 0x2,
	NSWF_DONT_TRAVERSE_LINKS	= 0x4,
	NSWF_DONT_ACCUMULATE_RESULT	= 0x8,
	NSWF_TRAVERSE_STREAM_JUNCTIONS	= 0x10,
	NSWF_FILESYSTEM_ONLY	= 0x20,
	NSWF_SHOW_PROGRESS	= 0x40,
	NSWF_FLAG_VIEWORDER	= 0x80,
	NSWF_IGNORE_AUTOPLAY_HIDA	= 0x100,
	NSWF_ASYNC	= 0x200,
	NSWF_DONT_RESOLVE_LINKS	= 0x400,
	NSWF_ACCUMULATE_FOLDERS	= 0x800,
	NSWF_DONT_SORT	= 0x1000,
	NSWF_USE_TRANSFER_MEDIUM	= 0x2000
    } ;

EXTERN_C const IID IID_INamespaceWalk;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57ced8a7-3f4a-432c-9350-30f24483f74f")
    INamespaceWalk : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Walk( 
            /* [in] */ __RPC__in_opt IUnknown *punkToWalk,
            /* [in] */ DWORD dwFlags,
            /* [in] */ int cDepth,
            /* [unique][in] */ __RPC__in_opt INamespaceWalkCB *pnswcb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDArrayResult( 
            /* [out] */ __RPC__out UINT *pcItems,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcItems) PIDLIST_ABSOLUTE **prgpidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INamespaceWalkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INamespaceWalk * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INamespaceWalk * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INamespaceWalk * This);
        
        HRESULT ( STDMETHODCALLTYPE *Walk )( 
            INamespaceWalk * This,
            /* [in] */ __RPC__in_opt IUnknown *punkToWalk,
            /* [in] */ DWORD dwFlags,
            /* [in] */ int cDepth,
            /* [unique][in] */ __RPC__in_opt INamespaceWalkCB *pnswcb);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDArrayResult )( 
            INamespaceWalk * This,
            /* [out] */ __RPC__out UINT *pcItems,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcItems) PIDLIST_ABSOLUTE **prgpidl);
        
        END_INTERFACE
    } INamespaceWalkVtbl;

    interface INamespaceWalk
    {
        CONST_VTBL struct INamespaceWalkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INamespaceWalk_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INamespaceWalk_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INamespaceWalk_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INamespaceWalk_Walk(This,punkToWalk,dwFlags,cDepth,pnswcb)	\
    ( (This)->lpVtbl -> Walk(This,punkToWalk,dwFlags,cDepth,pnswcb) ) 

#define INamespaceWalk_GetIDArrayResult(This,pcItems,prgpidl)	\
    ( (This)->lpVtbl -> GetIDArrayResult(This,pcItems,prgpidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INamespaceWalk_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0103 */
/* [local] */ 

#endif  // NTDDI_WINXP || (_WIN32_IE >= _WIN32_IE_IE70)
_inline void FreeIDListArray(PIDLIST_RELATIVE *ppidls, UINT cItems)
{                                        
     UINT i;                             
     for (i = 0; i < cItems; i++)        
     {                                   
         CoTaskMemFree(ppidls[i]);       
     }                                   
     CoTaskMemFree(ppidls);              
}                                        
#if defined(STRICT_TYPED_ITEMIDS) && defined(__cplusplus)
_inline void FreeIDListArrayFull(PIDLIST_ABSOLUTE *ppidls, UINT cItems)
{                                        
     for (UINT i = 0; i < cItems; i++)   
     {                                   
         CoTaskMemFree(ppidls[i]);       
     }                                   
     CoTaskMemFree(ppidls);              
}                                        
_inline void FreeIDListArrayChild(PITEMID_CHILD *ppidls, UINT cItems)
{                                        
     for (UINT i = 0; i < cItems; i++)   
     {                                   
         CoTaskMemFree(ppidls[i]);       
     }                                   
     CoTaskMemFree(ppidls);              
}                                        
#else //  defined(STRICT_TYPED_ITEMIDS) && defined(__cplusplus)
#define FreeIDListArrayFull FreeIDListArray
#define FreeIDListArrayChild FreeIDListArray
#endif //  defined(STRICT_TYPED_ITEMIDS) && defined(__cplusplus)
#define ACDD_VISIBLE        0x0001


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0103_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0103_v0_0_s_ifspec;

#ifndef __IAutoCompleteDropDown_INTERFACE_DEFINED__
#define __IAutoCompleteDropDown_INTERFACE_DEFINED__

/* interface IAutoCompleteDropDown */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IAutoCompleteDropDown;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3CD141F4-3C6A-11d2-BCAA-00C04FD929DB")
    IAutoCompleteDropDown : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDropDownStatus( 
            /* [out] */ __RPC__out DWORD *pdwFlags,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetEnumerator( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAutoCompleteDropDownVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAutoCompleteDropDown * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAutoCompleteDropDown * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAutoCompleteDropDown * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDropDownStatus )( 
            IAutoCompleteDropDown * This,
            /* [out] */ __RPC__out DWORD *pdwFlags,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszString);
        
        HRESULT ( STDMETHODCALLTYPE *ResetEnumerator )( 
            IAutoCompleteDropDown * This);
        
        END_INTERFACE
    } IAutoCompleteDropDownVtbl;

    interface IAutoCompleteDropDown
    {
        CONST_VTBL struct IAutoCompleteDropDownVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAutoCompleteDropDown_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAutoCompleteDropDown_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAutoCompleteDropDown_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAutoCompleteDropDown_GetDropDownStatus(This,pdwFlags,ppwszString)	\
    ( (This)->lpVtbl -> GetDropDownStatus(This,pdwFlags,ppwszString) ) 

#define IAutoCompleteDropDown_ResetEnumerator(This)	\
    ( (This)->lpVtbl -> ResetEnumerator(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAutoCompleteDropDown_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0104 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE40)
#include <pshpack8.h>
typedef struct tagBANDSITEINFO
    {
    DWORD dwMask;
    DWORD dwState;
    DWORD dwStyle;
    } 	BANDSITEINFO;

#include <poppack.h>

enum tagBANDSITECID
    {	BSID_BANDADDED	= 0,
	BSID_BANDREMOVED	= ( BSID_BANDADDED + 1 ) 
    } ;
#define BSIM_STATE          0x00000001
#define BSIM_STYLE          0x00000002
#define BSSF_VISIBLE        0x00000001
#define BSSF_NOTITLE        0x00000002
#define BSSF_UNDELETEABLE   0x00001000
#define BSIS_AUTOGRIPPER               0x00000000
#define BSIS_NOGRIPPER                 0x00000001
#define BSIS_ALWAYSGRIPPER             0x00000002
#define BSIS_LEFTALIGN                 0x00000004
#define BSIS_SINGLECLICK               0x00000008
#define BSIS_NOCONTEXTMENU             0x00000010
#define BSIS_NODROPTARGET              0x00000020
#define BSIS_NOCAPTION                 0x00000040
#define BSIS_PREFERNOLINEBREAK         0x00000080
#define BSIS_LOCKED                    0x00000100
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define BSIS_PRESERVEORDERDURINGLAYOUT 0x00000200
#endif  // _WIN32_IE_IE70
#define SID_SBandSite IID_IBandSite
#define CGID_BandSite IID_IBandSite


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0104_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0104_v0_0_s_ifspec;

#ifndef __IBandSite_INTERFACE_DEFINED__
#define __IBandSite_INTERFACE_DEFINED__

/* interface IBandSite */
/* [uuid][object] */ 


EXTERN_C const IID IID_IBandSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CF504B0-DE96-11D0-8B3F-00A0C911E8E5")
    IBandSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddBand( 
            /* [in] */ __RPC__in_opt IUnknown *punk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumBands( 
            /* [in] */ UINT uBand,
            /* [out] */ __RPC__out DWORD *pdwBandID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryBand( 
            /* [in] */ DWORD dwBandID,
            /* [out] */ __RPC__deref_out_opt IDeskBand **ppstb,
            /* [out] */ __RPC__out DWORD *pdwState,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchName) LPWSTR pszName,
            /* [in] */ int cchName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBandState( 
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwMask,
            /* [in] */ DWORD dwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveBand( 
            /* [in] */ DWORD dwBandID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBandObject( 
            /* [in] */ DWORD dwBandID,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBandSiteInfo( 
            /* [in] */ __RPC__in const BANDSITEINFO *pbsinfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBandSiteInfo( 
            /* [out][in] */ __RPC__inout BANDSITEINFO *pbsinfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBandSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBandSite * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBandSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBandSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddBand )( 
            IBandSite * This,
            /* [in] */ __RPC__in_opt IUnknown *punk);
        
        HRESULT ( STDMETHODCALLTYPE *EnumBands )( 
            IBandSite * This,
            /* [in] */ UINT uBand,
            /* [out] */ __RPC__out DWORD *pdwBandID);
        
        HRESULT ( STDMETHODCALLTYPE *QueryBand )( 
            IBandSite * This,
            /* [in] */ DWORD dwBandID,
            /* [out] */ __RPC__deref_out_opt IDeskBand **ppstb,
            /* [out] */ __RPC__out DWORD *pdwState,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchName) LPWSTR pszName,
            /* [in] */ int cchName);
        
        HRESULT ( STDMETHODCALLTYPE *SetBandState )( 
            IBandSite * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ DWORD dwMask,
            /* [in] */ DWORD dwState);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveBand )( 
            IBandSite * This,
            /* [in] */ DWORD dwBandID);
        
        HRESULT ( STDMETHODCALLTYPE *GetBandObject )( 
            IBandSite * This,
            /* [in] */ DWORD dwBandID,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *SetBandSiteInfo )( 
            IBandSite * This,
            /* [in] */ __RPC__in const BANDSITEINFO *pbsinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetBandSiteInfo )( 
            IBandSite * This,
            /* [out][in] */ __RPC__inout BANDSITEINFO *pbsinfo);
        
        END_INTERFACE
    } IBandSiteVtbl;

    interface IBandSite
    {
        CONST_VTBL struct IBandSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBandSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBandSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBandSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBandSite_AddBand(This,punk)	\
    ( (This)->lpVtbl -> AddBand(This,punk) ) 

#define IBandSite_EnumBands(This,uBand,pdwBandID)	\
    ( (This)->lpVtbl -> EnumBands(This,uBand,pdwBandID) ) 

#define IBandSite_QueryBand(This,dwBandID,ppstb,pdwState,pszName,cchName)	\
    ( (This)->lpVtbl -> QueryBand(This,dwBandID,ppstb,pdwState,pszName,cchName) ) 

#define IBandSite_SetBandState(This,dwBandID,dwMask,dwState)	\
    ( (This)->lpVtbl -> SetBandState(This,dwBandID,dwMask,dwState) ) 

#define IBandSite_RemoveBand(This,dwBandID)	\
    ( (This)->lpVtbl -> RemoveBand(This,dwBandID) ) 

#define IBandSite_GetBandObject(This,dwBandID,riid,ppv)	\
    ( (This)->lpVtbl -> GetBandObject(This,dwBandID,riid,ppv) ) 

#define IBandSite_SetBandSiteInfo(This,pbsinfo)	\
    ( (This)->lpVtbl -> SetBandSiteInfo(This,pbsinfo) ) 

#define IBandSite_GetBandSiteInfo(This,pbsinfo)	\
    ( (This)->lpVtbl -> GetBandSiteInfo(This,pbsinfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBandSite_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0105 */
/* [local] */ 

#endif // _WIN32_IE_IE40
#if (NTDDI_VERSION >= NTDDI_WINXP)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0105_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0105_v0_0_s_ifspec;

#ifndef __IModalWindow_INTERFACE_DEFINED__
#define __IModalWindow_INTERFACE_DEFINED__

/* interface IModalWindow */
/* [unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IModalWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b4db1657-70d7-485e-8e3e-6fcb5a5c1802")
    IModalWindow : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ 
            __in  HWND hwndParent) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IModalWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IModalWindow * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IModalWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IModalWindow * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IModalWindow * This,
            /* [in] */ 
            __in  HWND hwndParent);
        
        END_INTERFACE
    } IModalWindowVtbl;

    interface IModalWindow
    {
        CONST_VTBL struct IModalWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IModalWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IModalWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IModalWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IModalWindow_Show(This,hwndParent)	\
    ( (This)->lpVtbl -> Show(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IModalWindow_RemoteShow_Proxy( 
    IModalWindow * This,
    /* [in] */ __RPC__in HWND hwndParent);


void __RPC_STUB IModalWindow_RemoteShow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IModalWindow_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0106 */
/* [local] */ 

#define PROPSTR_EXTENSIONCOMPLETIONSTATE L"ExtensionCompletionState"

enum tagCDBURNINGEXTENSIONRET
    {	CDBE_RET_DEFAULT	= 0,
	CDBE_RET_DONTRUNOTHEREXTS	= 0x1,
	CDBE_RET_STOPWIZARD	= 0x2
    } ;
#define SID_CDWizardHost IID_ICDBurnExt

enum tagCDBURNINGEXTENSIONACTION
    {	CDBE_TYPE_MUSIC	= 0x1,
	CDBE_TYPE_DATA	= 0x2,
	CDBE_TYPE_ALL	= 0xffffffff
    } ;
typedef DWORD CDBE_ACTIONS;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0106_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0106_v0_0_s_ifspec;

#ifndef __ICDBurnExt_INTERFACE_DEFINED__
#define __ICDBurnExt_INTERFACE_DEFINED__

/* interface ICDBurnExt */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ICDBurnExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2271dcca-74fc-4414-8fb7-c56b05ace2d7")
    ICDBurnExt : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSupportedActionTypes( 
            /* [out] */ __RPC__out CDBE_ACTIONS *pdwActions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICDBurnExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICDBurnExt * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICDBurnExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICDBurnExt * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedActionTypes )( 
            ICDBurnExt * This,
            /* [out] */ __RPC__out CDBE_ACTIONS *pdwActions);
        
        END_INTERFACE
    } ICDBurnExtVtbl;

    interface ICDBurnExt
    {
        CONST_VTBL struct ICDBurnExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICDBurnExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICDBurnExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICDBurnExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICDBurnExt_GetSupportedActionTypes(This,pdwActions)	\
    ( (This)->lpVtbl -> GetSupportedActionTypes(This,pdwActions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICDBurnExt_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0107 */
/* [local] */ 

#endif  // NTDDI_WINXP


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0107_v0_0_s_ifspec;

#ifndef __IContextMenuSite_INTERFACE_DEFINED__
#define __IContextMenuSite_INTERFACE_DEFINED__

/* interface IContextMenuSite */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IContextMenuSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0811AEBE-0B87-4C54-9E72-548CF649016B")
    IContextMenuSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DoContextMenuPopup( 
            /* [in] */ __RPC__in_opt IUnknown *punkContextMenu,
            /* [in] */ UINT fFlags,
            /* [in] */ POINT pt) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContextMenuSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenuSite * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenuSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenuSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoContextMenuPopup )( 
            IContextMenuSite * This,
            /* [in] */ __RPC__in_opt IUnknown *punkContextMenu,
            /* [in] */ UINT fFlags,
            /* [in] */ POINT pt);
        
        END_INTERFACE
    } IContextMenuSiteVtbl;

    interface IContextMenuSite
    {
        CONST_VTBL struct IContextMenuSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenuSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenuSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenuSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenuSite_DoContextMenuPopup(This,punkContextMenu,fFlags,pt)	\
    ( (This)->lpVtbl -> DoContextMenuPopup(This,punkContextMenu,fFlags,pt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenuSite_INTERFACE_DEFINED__ */


#ifndef __IEnumReadyCallback_INTERFACE_DEFINED__
#define __IEnumReadyCallback_INTERFACE_DEFINED__

/* interface IEnumReadyCallback */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumReadyCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("61E00D45-8FFF-4e60-924E-6537B61612DD")
    IEnumReadyCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumReady( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumReadyCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumReadyCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumReadyCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumReadyCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumReady )( 
            IEnumReadyCallback * This);
        
        END_INTERFACE
    } IEnumReadyCallbackVtbl;

    interface IEnumReadyCallback
    {
        CONST_VTBL struct IEnumReadyCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumReadyCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumReadyCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumReadyCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumReadyCallback_EnumReady(This)	\
    ( (This)->lpVtbl -> EnumReady(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumReadyCallback_INTERFACE_DEFINED__ */


#ifndef __IEnumerableView_INTERFACE_DEFINED__
#define __IEnumerableView_INTERFACE_DEFINED__

/* interface IEnumerableView */
/* [object][local][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnumerableView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C8BF236-1AEC-495f-9894-91D57C3C686F")
    IEnumerableView : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetEnumReadyCallback( 
            /* [in] */ 
            __in  IEnumReadyCallback *percb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateEnumIDListFromContents( 
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder,
            /* [in] */ 
            __in  DWORD dwEnumFlags,
            /* [out] */ 
            __deref_out  IEnumIDList **ppEnumIDList) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumerableViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumerableView * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumerableView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumerableView * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnumReadyCallback )( 
            IEnumerableView * This,
            /* [in] */ 
            __in  IEnumReadyCallback *percb);
        
        HRESULT ( STDMETHODCALLTYPE *CreateEnumIDListFromContents )( 
            IEnumerableView * This,
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder,
            /* [in] */ 
            __in  DWORD dwEnumFlags,
            /* [out] */ 
            __deref_out  IEnumIDList **ppEnumIDList);
        
        END_INTERFACE
    } IEnumerableViewVtbl;

    interface IEnumerableView
    {
        CONST_VTBL struct IEnumerableViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumerableView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumerableView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumerableView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumerableView_SetEnumReadyCallback(This,percb)	\
    ( (This)->lpVtbl -> SetEnumReadyCallback(This,percb) ) 

#define IEnumerableView_CreateEnumIDListFromContents(This,pidlFolder,dwEnumFlags,ppEnumIDList)	\
    ( (This)->lpVtbl -> CreateEnumIDListFromContents(This,pidlFolder,dwEnumFlags,ppEnumIDList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumerableView_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0110 */
/* [local] */ 

#define SID_EnumerableView IID_IEnumerableView
#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0110_v0_0_s_ifspec;

#ifndef __IInsertItem_INTERFACE_DEFINED__
#define __IInsertItem_INTERFACE_DEFINED__

/* interface IInsertItem */
/* [local][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IInsertItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D2B57227-3D23-4b95-93C0-492BD454C356")
    IInsertItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InsertItem( 
            /* [in] */ 
            __in  PCUIDLIST_RELATIVE pidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInsertItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInsertItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInsertItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInsertItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *InsertItem )( 
            IInsertItem * This,
            /* [in] */ 
            __in  PCUIDLIST_RELATIVE pidl);
        
        END_INTERFACE
    } IInsertItemVtbl;

    interface IInsertItem
    {
        CONST_VTBL struct IInsertItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInsertItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInsertItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInsertItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInsertItem_InsertItem(This,pidl)	\
    ( (This)->lpVtbl -> InsertItem(This,pidl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInsertItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0111 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINXP)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0111_v0_0_s_ifspec;

#ifndef __IMenuBand_INTERFACE_DEFINED__
#define __IMenuBand_INTERFACE_DEFINED__

/* interface IMenuBand */
/* [local][unique][object][uuid] */ 


enum tagMENUBANDHANDLERCID
    {	MBHANDCID_PIDLSELECT	= 0
    } ;

EXTERN_C const IID IID_IMenuBand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("568804CD-CBD7-11d0-9816-00C04FD91972")
    IMenuBand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsMenuMessage( 
            /* [in] */ 
            __in  MSG *pmsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateMenuMessage( 
            /* [out][in] */ 
            __inout  MSG *pmsg,
            /* [out] */ 
            __out  LRESULT *plRet) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMenuBandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMenuBand * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMenuBand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMenuBand * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsMenuMessage )( 
            IMenuBand * This,
            /* [in] */ 
            __in  MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateMenuMessage )( 
            IMenuBand * This,
            /* [out][in] */ 
            __inout  MSG *pmsg,
            /* [out] */ 
            __out  LRESULT *plRet);
        
        END_INTERFACE
    } IMenuBandVtbl;

    interface IMenuBand
    {
        CONST_VTBL struct IMenuBandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMenuBand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMenuBand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMenuBand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMenuBand_IsMenuMessage(This,pmsg)	\
    ( (This)->lpVtbl -> IsMenuMessage(This,pmsg) ) 

#define IMenuBand_TranslateMenuMessage(This,pmsg,plRet)	\
    ( (This)->lpVtbl -> TranslateMenuMessage(This,pmsg,plRet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMenuBand_INTERFACE_DEFINED__ */


#ifndef __IFolderBandPriv_INTERFACE_DEFINED__
#define __IFolderBandPriv_INTERFACE_DEFINED__

/* interface IFolderBandPriv */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IFolderBandPriv;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47c01f95-e185-412c-b5c5-4f27df965aea")
    IFolderBandPriv : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCascade( 
            /* [in] */ BOOL fCascade) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAccelerators( 
            /* [in] */ BOOL fAccelerators) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNoIcons( 
            /* [in] */ BOOL fNoIcons) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNoText( 
            /* [in] */ BOOL fNoText) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFolderBandPrivVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolderBandPriv * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolderBandPriv * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolderBandPriv * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCascade )( 
            IFolderBandPriv * This,
            /* [in] */ BOOL fCascade);
        
        HRESULT ( STDMETHODCALLTYPE *SetAccelerators )( 
            IFolderBandPriv * This,
            /* [in] */ BOOL fAccelerators);
        
        HRESULT ( STDMETHODCALLTYPE *SetNoIcons )( 
            IFolderBandPriv * This,
            /* [in] */ BOOL fNoIcons);
        
        HRESULT ( STDMETHODCALLTYPE *SetNoText )( 
            IFolderBandPriv * This,
            /* [in] */ BOOL fNoText);
        
        END_INTERFACE
    } IFolderBandPrivVtbl;

    interface IFolderBandPriv
    {
        CONST_VTBL struct IFolderBandPrivVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolderBandPriv_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolderBandPriv_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolderBandPriv_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolderBandPriv_SetCascade(This,fCascade)	\
    ( (This)->lpVtbl -> SetCascade(This,fCascade) ) 

#define IFolderBandPriv_SetAccelerators(This,fAccelerators)	\
    ( (This)->lpVtbl -> SetAccelerators(This,fAccelerators) ) 

#define IFolderBandPriv_SetNoIcons(This,fNoIcons)	\
    ( (This)->lpVtbl -> SetNoIcons(This,fNoIcons) ) 

#define IFolderBandPriv_SetNoText(This,fNoText)	\
    ( (This)->lpVtbl -> SetNoText(This,fNoText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFolderBandPriv_INTERFACE_DEFINED__ */


#ifndef __IRegTreeItem_INTERFACE_DEFINED__
#define __IRegTreeItem_INTERFACE_DEFINED__

/* interface IRegTreeItem */
/* [object][local][helpstring][uuid] */ 


EXTERN_C const IID IID_IRegTreeItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9521922-0812-4d44-9EC3-7FD38C726F3D")
    IRegTreeItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCheckState( 
            /* [out] */ 
            __out  BOOL *pbCheck) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCheckState( 
            /* [in] */ 
            __in  BOOL bCheck) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRegTreeItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRegTreeItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRegTreeItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRegTreeItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCheckState )( 
            IRegTreeItem * This,
            /* [out] */ 
            __out  BOOL *pbCheck);
        
        HRESULT ( STDMETHODCALLTYPE *SetCheckState )( 
            IRegTreeItem * This,
            /* [in] */ 
            __in  BOOL bCheck);
        
        END_INTERFACE
    } IRegTreeItemVtbl;

    interface IRegTreeItem
    {
        CONST_VTBL struct IRegTreeItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRegTreeItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRegTreeItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRegTreeItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRegTreeItem_GetCheckState(This,pbCheck)	\
    ( (This)->lpVtbl -> GetCheckState(This,pbCheck) ) 

#define IRegTreeItem_SetCheckState(This,bCheck)	\
    ( (This)->lpVtbl -> SetCheckState(This,bCheck) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRegTreeItem_INTERFACE_DEFINED__ */


#ifndef __IImageRecompress_INTERFACE_DEFINED__
#define __IImageRecompress_INTERFACE_DEFINED__

/* interface IImageRecompress */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IImageRecompress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("505f1513-6b3e-4892-a272-59f8889a4d3e")
    IImageRecompress : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RecompressImage( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ int cx,
            /* [in] */ int cy,
            /* [in] */ int iQuality,
            /* [in] */ __RPC__in_opt IStorage *pstg,
            /* [out] */ __RPC__deref_out_opt IStream **ppstrmOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IImageRecompressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImageRecompress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImageRecompress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImageRecompress * This);
        
        HRESULT ( STDMETHODCALLTYPE *RecompressImage )( 
            IImageRecompress * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ int cx,
            /* [in] */ int cy,
            /* [in] */ int iQuality,
            /* [in] */ __RPC__in_opt IStorage *pstg,
            /* [out] */ __RPC__deref_out_opt IStream **ppstrmOut);
        
        END_INTERFACE
    } IImageRecompressVtbl;

    interface IImageRecompress
    {
        CONST_VTBL struct IImageRecompressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImageRecompress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImageRecompress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImageRecompress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImageRecompress_RecompressImage(This,psi,cx,cy,iQuality,pstg,ppstrmOut)	\
    ( (This)->lpVtbl -> RecompressImage(This,psi,cx,cy,iQuality,pstg,ppstrmOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImageRecompress_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0115 */
/* [local] */ 

#endif  // NTDDI_WINXP
#endif  // NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)
#if (_WIN32_IE >= _WIN32_IE_IE60)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0115_v0_0_s_ifspec;

#ifndef __IDeskBar_INTERFACE_DEFINED__
#define __IDeskBar_INTERFACE_DEFINED__

/* interface IDeskBar */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IDeskBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB0FE173-1A3A-11D0-89B3-00A0C90A90AC")
    IDeskBar : public IOleWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetClient( 
            /* [in] */ 
            __in  IUnknown *punkClient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClient( 
            /* [out] */ 
            __deref_out  IUnknown **ppunkClient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnPosRectChangeDB( 
            /* [in] */ 
            __in  RECT *prc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDeskBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeskBar * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeskBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeskBar * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IDeskBar * This,
            /* [out] */ HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IDeskBar * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetClient )( 
            IDeskBar * This,
            /* [in] */ 
            __in  IUnknown *punkClient);
        
        HRESULT ( STDMETHODCALLTYPE *GetClient )( 
            IDeskBar * This,
            /* [out] */ 
            __deref_out  IUnknown **ppunkClient);
        
        HRESULT ( STDMETHODCALLTYPE *OnPosRectChangeDB )( 
            IDeskBar * This,
            /* [in] */ 
            __in  RECT *prc);
        
        END_INTERFACE
    } IDeskBarVtbl;

    interface IDeskBar
    {
        CONST_VTBL struct IDeskBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeskBar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeskBar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeskBar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeskBar_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IDeskBar_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IDeskBar_SetClient(This,punkClient)	\
    ( (This)->lpVtbl -> SetClient(This,punkClient) ) 

#define IDeskBar_GetClient(This,ppunkClient)	\
    ( (This)->lpVtbl -> GetClient(This,ppunkClient) ) 

#define IDeskBar_OnPosRectChangeDB(This,prc)	\
    ( (This)->lpVtbl -> OnPosRectChangeDB(This,prc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeskBar_INTERFACE_DEFINED__ */


#ifndef __IMenuPopup_INTERFACE_DEFINED__
#define __IMenuPopup_INTERFACE_DEFINED__

/* interface IMenuPopup */
/* [local][unique][object][uuid] */ 


enum tagMENUPOPUPSELECT
    {	MPOS_EXECUTE	= 0,
	MPOS_FULLCANCEL	= ( MPOS_EXECUTE + 1 ) ,
	MPOS_CANCELLEVEL	= ( MPOS_FULLCANCEL + 1 ) ,
	MPOS_SELECTLEFT	= ( MPOS_CANCELLEVEL + 1 ) ,
	MPOS_SELECTRIGHT	= ( MPOS_SELECTLEFT + 1 ) ,
	MPOS_CHILDTRACKING	= ( MPOS_SELECTRIGHT + 1 ) 
    } ;

enum tagMENUPOPUPPOPUPFLAGS
    {	MPPF_SETFOCUS	= 0x1,
	MPPF_INITIALSELECT	= 0x2,
	MPPF_NOANIMATE	= 0x4,
	MPPF_KEYBOARD	= 0x10,
	MPPF_REPOSITION	= 0x20,
	MPPF_FORCEZORDER	= 0x40,
	MPPF_FINALSELECT	= 0x80,
	MPPF_TOP	= 0x20000000,
	MPPF_LEFT	= 0x40000000,
	MPPF_RIGHT	= 0x60000000,
	MPPF_BOTTOM	= 0x80000000,
	MPPF_POS_MASK	= 0xe0000000,
	MPPF_ALIGN_LEFT	= 0x2000000,
	MPPF_ALIGN_RIGHT	= 0x4000000
    } ;
typedef int MP_POPUPFLAGS;


EXTERN_C const IID IID_IMenuPopup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1E7AFEB-6A2E-11d0-8C78-00C04FD918B4")
    IMenuPopup : public IDeskBar
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Popup( 
            /* [in] */ 
            __in  POINTL *ppt,
            /* [in] */ 
            __in  RECTL *prcExclude,
            /* [in] */ 
            __in  MP_POPUPFLAGS dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelect( 
            /* [in] */ 
            __in  DWORD dwSelectType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSubMenu( 
            /* [in] */ 
            __in  IMenuPopup *pmp,
            /* [in] */ 
            __in  BOOL fSet) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMenuPopupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMenuPopup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMenuPopup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMenuPopup * This);
        
        /* [input_sync] */ HRESULT ( STDMETHODCALLTYPE *GetWindow )( 
            IMenuPopup * This,
            /* [out] */ HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )( 
            IMenuPopup * This,
            /* [in] */ BOOL fEnterMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetClient )( 
            IMenuPopup * This,
            /* [in] */ 
            __in  IUnknown *punkClient);
        
        HRESULT ( STDMETHODCALLTYPE *GetClient )( 
            IMenuPopup * This,
            /* [out] */ 
            __deref_out  IUnknown **ppunkClient);
        
        HRESULT ( STDMETHODCALLTYPE *OnPosRectChangeDB )( 
            IMenuPopup * This,
            /* [in] */ 
            __in  RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *Popup )( 
            IMenuPopup * This,
            /* [in] */ 
            __in  POINTL *ppt,
            /* [in] */ 
            __in  RECTL *prcExclude,
            /* [in] */ 
            __in  MP_POPUPFLAGS dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelect )( 
            IMenuPopup * This,
            /* [in] */ 
            __in  DWORD dwSelectType);
        
        HRESULT ( STDMETHODCALLTYPE *SetSubMenu )( 
            IMenuPopup * This,
            /* [in] */ 
            __in  IMenuPopup *pmp,
            /* [in] */ 
            __in  BOOL fSet);
        
        END_INTERFACE
    } IMenuPopupVtbl;

    interface IMenuPopup
    {
        CONST_VTBL struct IMenuPopupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMenuPopup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMenuPopup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMenuPopup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMenuPopup_GetWindow(This,phwnd)	\
    ( (This)->lpVtbl -> GetWindow(This,phwnd) ) 

#define IMenuPopup_ContextSensitiveHelp(This,fEnterMode)	\
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) ) 


#define IMenuPopup_SetClient(This,punkClient)	\
    ( (This)->lpVtbl -> SetClient(This,punkClient) ) 

#define IMenuPopup_GetClient(This,ppunkClient)	\
    ( (This)->lpVtbl -> GetClient(This,ppunkClient) ) 

#define IMenuPopup_OnPosRectChangeDB(This,prc)	\
    ( (This)->lpVtbl -> OnPosRectChangeDB(This,prc) ) 


#define IMenuPopup_Popup(This,ppt,prcExclude,dwFlags)	\
    ( (This)->lpVtbl -> Popup(This,ppt,prcExclude,dwFlags) ) 

#define IMenuPopup_OnSelect(This,dwSelectType)	\
    ( (This)->lpVtbl -> OnSelect(This,dwSelectType) ) 

#define IMenuPopup_SetSubMenu(This,pmp,fSet)	\
    ( (This)->lpVtbl -> SetSubMenu(This,pmp,fSet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMenuPopup_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0117 */
/* [local] */ 

#endif  // _WIN32_IE_IE60
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
typedef /* [helpstring] */ 
enum tagFILE_USAGE_TYPE
    {	FUT_PLAYING	= 0,
	FUT_EDITING	= ( FUT_PLAYING + 1 ) ,
	FUT_GENERIC	= ( FUT_EDITING + 1 ) 
    } 	FILE_USAGE_TYPE;

#define OF_CAP_CANSWITCHTO     0x0001
#define OF_CAP_CANCLOSE        0x0002


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0117_v0_0_s_ifspec;

#ifndef __IFileIsInUse_INTERFACE_DEFINED__
#define __IFileIsInUse_INTERFACE_DEFINED__

/* interface IFileIsInUse */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IFileIsInUse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64a1cbf0-3a1a-4461-9158-376969693950")
    IFileIsInUse : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAppName( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUsage( 
            /* [out] */ __RPC__out FILE_USAGE_TYPE *pfut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [out] */ __RPC__out DWORD *pdwCapFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSwitchToHWND( 
            /* [out] */ __RPC__deref_out_opt HWND *phwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseFile( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileIsInUseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileIsInUse * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileIsInUse * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileIsInUse * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppName )( 
            IFileIsInUse * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetUsage )( 
            IFileIsInUse * This,
            /* [out] */ __RPC__out FILE_USAGE_TYPE *pfut);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IFileIsInUse * This,
            /* [out] */ __RPC__out DWORD *pdwCapFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetSwitchToHWND )( 
            IFileIsInUse * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *CloseFile )( 
            IFileIsInUse * This);
        
        END_INTERFACE
    } IFileIsInUseVtbl;

    interface IFileIsInUse
    {
        CONST_VTBL struct IFileIsInUseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileIsInUse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileIsInUse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileIsInUse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileIsInUse_GetAppName(This,ppszName)	\
    ( (This)->lpVtbl -> GetAppName(This,ppszName) ) 

#define IFileIsInUse_GetUsage(This,pfut)	\
    ( (This)->lpVtbl -> GetUsage(This,pfut) ) 

#define IFileIsInUse_GetCapabilities(This,pdwCapFlags)	\
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapFlags) ) 

#define IFileIsInUse_GetSwitchToHWND(This,phwnd)	\
    ( (This)->lpVtbl -> GetSwitchToHWND(This,phwnd) ) 

#define IFileIsInUse_CloseFile(This)	\
    ( (This)->lpVtbl -> CloseFile(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileIsInUse_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0118 */
/* [local] */ 


typedef /* [v1_enum] */ 
enum tagFDE_OVERWRITE_RESPONSE
    {	FDEOR_DEFAULT	= 0,
	FDEOR_ACCEPT	= 0x1,
	FDEOR_REFUSE	= 0x2
    } 	FDE_OVERWRITE_RESPONSE;

typedef /* [v1_enum] */ 
enum tagFDE_SHAREVIOLATION_RESPONSE
    {	FDESVR_DEFAULT	= 0,
	FDESVR_ACCEPT	= 0x1,
	FDESVR_REFUSE	= 0x2
    } 	FDE_SHAREVIOLATION_RESPONSE;

typedef /* [v1_enum] */ 
enum tagFDAP
    {	FDAP_BOTTOM	= 0,
	FDAP_TOP	= 0x1
    } 	FDAP;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0118_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0118_v0_0_s_ifspec;

#ifndef __IFileDialogEvents_INTERFACE_DEFINED__
#define __IFileDialogEvents_INTERFACE_DEFINED__

/* interface IFileDialogEvents */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileDialogEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("973510db-7d7f-452b-8975-74a85828d354")
    IFileDialogEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnFileOk( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFolderChanging( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psiFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFolderChange( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelectionChange( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnShareViolation( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out FDE_SHAREVIOLATION_RESPONSE *pResponse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnTypeChange( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnOverwrite( 
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out FDE_OVERWRITE_RESPONSE *pResponse) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileDialogEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileDialogEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileDialogEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileDialogEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFileOk )( 
            IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *OnFolderChanging )( 
            IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psiFolder);
        
        HRESULT ( STDMETHODCALLTYPE *OnFolderChange )( 
            IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelectionChange )( 
            IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *OnShareViolation )( 
            IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out FDE_SHAREVIOLATION_RESPONSE *pResponse);
        
        HRESULT ( STDMETHODCALLTYPE *OnTypeChange )( 
            IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *OnOverwrite )( 
            IFileDialogEvents * This,
            /* [in] */ __RPC__in_opt IFileDialog *pfd,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out FDE_OVERWRITE_RESPONSE *pResponse);
        
        END_INTERFACE
    } IFileDialogEventsVtbl;

    interface IFileDialogEvents
    {
        CONST_VTBL struct IFileDialogEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileDialogEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileDialogEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileDialogEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileDialogEvents_OnFileOk(This,pfd)	\
    ( (This)->lpVtbl -> OnFileOk(This,pfd) ) 

#define IFileDialogEvents_OnFolderChanging(This,pfd,psiFolder)	\
    ( (This)->lpVtbl -> OnFolderChanging(This,pfd,psiFolder) ) 

#define IFileDialogEvents_OnFolderChange(This,pfd)	\
    ( (This)->lpVtbl -> OnFolderChange(This,pfd) ) 

#define IFileDialogEvents_OnSelectionChange(This,pfd)	\
    ( (This)->lpVtbl -> OnSelectionChange(This,pfd) ) 

#define IFileDialogEvents_OnShareViolation(This,pfd,psi,pResponse)	\
    ( (This)->lpVtbl -> OnShareViolation(This,pfd,psi,pResponse) ) 

#define IFileDialogEvents_OnTypeChange(This,pfd)	\
    ( (This)->lpVtbl -> OnTypeChange(This,pfd) ) 

#define IFileDialogEvents_OnOverwrite(This,pfd,psi,pResponse)	\
    ( (This)->lpVtbl -> OnOverwrite(This,pfd,psi,pResponse) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileDialogEvents_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0119 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0119_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0119_v0_0_s_ifspec;

#ifndef __IFileDialog_INTERFACE_DEFINED__
#define __IFileDialog_INTERFACE_DEFINED__

/* interface IFileDialog */
/* [unique][object][uuid] */ 


enum tagFILEOPENDIALOGOPTIONS
    {	FOS_OVERWRITEPROMPT	= 0x2,
	FOS_STRICTFILETYPES	= 0x4,
	FOS_NOCHANGEDIR	= 0x8,
	FOS_PICKFOLDERS	= 0x20,
	FOS_FORCEFILESYSTEM	= 0x40,
	FOS_ALLNONSTORAGEITEMS	= 0x80,
	FOS_NOVALIDATE	= 0x100,
	FOS_ALLOWMULTISELECT	= 0x200,
	FOS_PATHMUSTEXIST	= 0x800,
	FOS_FILEMUSTEXIST	= 0x1000,
	FOS_CREATEPROMPT	= 0x2000,
	FOS_SHAREAWARE	= 0x4000,
	FOS_NOREADONLYRETURN	= 0x8000,
	FOS_NOTESTFILECREATE	= 0x10000,
	FOS_HIDEMRUPLACES	= 0x20000,
	FOS_HIDEPINNEDPLACES	= 0x40000,
	FOS_NODEREFERENCELINKS	= 0x100000,
	FOS_DONTADDTORECENT	= 0x2000000,
	FOS_FORCESHOWHIDDEN	= 0x10000000,
	FOS_DEFAULTNOMINIMODE	= 0x20000000,
	FOS_FORCEPREVIEWPANEON	= 0x40000000
    } ;

EXTERN_C const IID IID_IFileDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42f85136-db7e-439c-85f1-e4075d135fc8")
    IFileDialog : public IModalWindow
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFileTypes( 
            /* [in] */ UINT cFileTypes,
            /* [size_is][in] */ __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFileTypeIndex( 
            /* [in] */ UINT iFileType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileTypeIndex( 
            /* [out] */ __RPC__out UINT *piFileType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt IFileDialogEvents *pfde,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptions( 
            /* [in] */ DWORD fos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptions( 
            /* [out] */ __RPC__out DWORD *pfos) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultFolder( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolder( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentSelection( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFileName( 
            /* [string][in] */ __RPC__in LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTitle( 
            /* [string][in] */ __RPC__in LPCWSTR pszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOkButtonLabel( 
            /* [string][in] */ __RPC__in LPCWSTR pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFileNameLabel( 
            /* [string][in] */ __RPC__in LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResult( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPlace( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ FDAP fdap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultExtension( 
            /* [string][in] */ __RPC__in LPCWSTR pszDefaultExtension) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ HRESULT hr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClientGuid( 
            /* [in] */ __RPC__in REFGUID guid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearClientData( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFilter( 
            /* [in] */ __RPC__in_opt IShellItemFilter *pFilter) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileDialog * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IFileDialog * This,
            /* [in] */ 
            __in  HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypes )( 
            IFileDialog * This,
            /* [in] */ UINT cFileTypes,
            /* [size_is][in] */ __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypeIndex )( 
            IFileDialog * This,
            /* [in] */ UINT iFileType);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTypeIndex )( 
            IFileDialog * This,
            /* [out] */ __RPC__out UINT *piFileType);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IFileDialog * This,
            /* [in] */ __RPC__in_opt IFileDialogEvents *pfde,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IFileDialog * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            IFileDialog * This,
            /* [in] */ DWORD fos);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            IFileDialog * This,
            /* [out] */ __RPC__out DWORD *pfos);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultFolder )( 
            IFileDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolder )( 
            IFileDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IFileDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            IFileDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IFileDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IFileDialog * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IFileDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetOkButtonLabel )( 
            IFileDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileNameLabel )( 
            IFileDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetResult )( 
            IFileDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *AddPlace )( 
            IFileDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ FDAP fdap);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultExtension )( 
            IFileDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDefaultExtension);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IFileDialog * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )( 
            IFileDialog * This,
            /* [in] */ __RPC__in REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *ClearClientData )( 
            IFileDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            IFileDialog * This,
            /* [in] */ __RPC__in_opt IShellItemFilter *pFilter);
        
        END_INTERFACE
    } IFileDialogVtbl;

    interface IFileDialog
    {
        CONST_VTBL struct IFileDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileDialog_Show(This,hwndParent)	\
    ( (This)->lpVtbl -> Show(This,hwndParent) ) 


#define IFileDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)	\
    ( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) ) 

#define IFileDialog_SetFileTypeIndex(This,iFileType)	\
    ( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) ) 

#define IFileDialog_GetFileTypeIndex(This,piFileType)	\
    ( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) ) 

#define IFileDialog_Advise(This,pfde,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) ) 

#define IFileDialog_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFileDialog_SetOptions(This,fos)	\
    ( (This)->lpVtbl -> SetOptions(This,fos) ) 

#define IFileDialog_GetOptions(This,pfos)	\
    ( (This)->lpVtbl -> GetOptions(This,pfos) ) 

#define IFileDialog_SetDefaultFolder(This,psi)	\
    ( (This)->lpVtbl -> SetDefaultFolder(This,psi) ) 

#define IFileDialog_SetFolder(This,psi)	\
    ( (This)->lpVtbl -> SetFolder(This,psi) ) 

#define IFileDialog_GetFolder(This,ppsi)	\
    ( (This)->lpVtbl -> GetFolder(This,ppsi) ) 

#define IFileDialog_GetCurrentSelection(This,ppsi)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) ) 

#define IFileDialog_SetFileName(This,pszName)	\
    ( (This)->lpVtbl -> SetFileName(This,pszName) ) 

#define IFileDialog_GetFileName(This,pszName)	\
    ( (This)->lpVtbl -> GetFileName(This,pszName) ) 

#define IFileDialog_SetTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) ) 

#define IFileDialog_SetOkButtonLabel(This,pszText)	\
    ( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) ) 

#define IFileDialog_SetFileNameLabel(This,pszLabel)	\
    ( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) ) 

#define IFileDialog_GetResult(This,ppsi)	\
    ( (This)->lpVtbl -> GetResult(This,ppsi) ) 

#define IFileDialog_AddPlace(This,psi,fdap)	\
    ( (This)->lpVtbl -> AddPlace(This,psi,fdap) ) 

#define IFileDialog_SetDefaultExtension(This,pszDefaultExtension)	\
    ( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) ) 

#define IFileDialog_Close(This,hr)	\
    ( (This)->lpVtbl -> Close(This,hr) ) 

#define IFileDialog_SetClientGuid(This,guid)	\
    ( (This)->lpVtbl -> SetClientGuid(This,guid) ) 

#define IFileDialog_ClearClientData(This)	\
    ( (This)->lpVtbl -> ClearClientData(This) ) 

#define IFileDialog_SetFilter(This,pFilter)	\
    ( (This)->lpVtbl -> SetFilter(This,pFilter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileDialog_INTERFACE_DEFINED__ */


#ifndef __IFileSaveDialog_INTERFACE_DEFINED__
#define __IFileSaveDialog_INTERFACE_DEFINED__

/* interface IFileSaveDialog */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileSaveDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84bccd23-5fde-4cdb-aea4-af64b83d78ab")
    IFileSaveDialog : public IFileDialog
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSaveAsItem( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperties( 
            /* [in] */ __RPC__in_opt IPropertyStore *pStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCollectedProperties( 
            /* [in] */ __RPC__in_opt IPropertyDescriptionList *pList,
            /* [in] */ BOOL fAppendDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperties( 
            /* [out] */ __RPC__deref_out_opt IPropertyStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplyProperties( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ __RPC__in_opt IPropertyStore *pStore,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pSink) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileSaveDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileSaveDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileSaveDialog * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IFileSaveDialog * This,
            /* [in] */ 
            __in  HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypes )( 
            IFileSaveDialog * This,
            /* [in] */ UINT cFileTypes,
            /* [size_is][in] */ __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypeIndex )( 
            IFileSaveDialog * This,
            /* [in] */ UINT iFileType);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTypeIndex )( 
            IFileSaveDialog * This,
            /* [out] */ __RPC__out UINT *piFileType);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IFileDialogEvents *pfde,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IFileSaveDialog * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            IFileSaveDialog * This,
            /* [in] */ DWORD fos);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            IFileSaveDialog * This,
            /* [out] */ __RPC__out DWORD *pfos);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultFolder )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolder )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IFileSaveDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            IFileSaveDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IFileSaveDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IFileSaveDialog * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IFileSaveDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetOkButtonLabel )( 
            IFileSaveDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileNameLabel )( 
            IFileSaveDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetResult )( 
            IFileSaveDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *AddPlace )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ FDAP fdap);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultExtension )( 
            IFileSaveDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDefaultExtension);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IFileSaveDialog * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *ClearClientData )( 
            IFileSaveDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItemFilter *pFilter);
        
        HRESULT ( STDMETHODCALLTYPE *SetSaveAsItem )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperties )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IPropertyStore *pStore);
        
        HRESULT ( STDMETHODCALLTYPE *SetCollectedProperties )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IPropertyDescriptionList *pList,
            /* [in] */ BOOL fAppendDefault);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperties )( 
            IFileSaveDialog * This,
            /* [out] */ __RPC__deref_out_opt IPropertyStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *ApplyProperties )( 
            IFileSaveDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ __RPC__in_opt IPropertyStore *pStore,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [unique][in] */ __RPC__in_opt IFileOperationProgressSink *pSink);
        
        END_INTERFACE
    } IFileSaveDialogVtbl;

    interface IFileSaveDialog
    {
        CONST_VTBL struct IFileSaveDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileSaveDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileSaveDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileSaveDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileSaveDialog_Show(This,hwndParent)	\
    ( (This)->lpVtbl -> Show(This,hwndParent) ) 


#define IFileSaveDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)	\
    ( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) ) 

#define IFileSaveDialog_SetFileTypeIndex(This,iFileType)	\
    ( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) ) 

#define IFileSaveDialog_GetFileTypeIndex(This,piFileType)	\
    ( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) ) 

#define IFileSaveDialog_Advise(This,pfde,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) ) 

#define IFileSaveDialog_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFileSaveDialog_SetOptions(This,fos)	\
    ( (This)->lpVtbl -> SetOptions(This,fos) ) 

#define IFileSaveDialog_GetOptions(This,pfos)	\
    ( (This)->lpVtbl -> GetOptions(This,pfos) ) 

#define IFileSaveDialog_SetDefaultFolder(This,psi)	\
    ( (This)->lpVtbl -> SetDefaultFolder(This,psi) ) 

#define IFileSaveDialog_SetFolder(This,psi)	\
    ( (This)->lpVtbl -> SetFolder(This,psi) ) 

#define IFileSaveDialog_GetFolder(This,ppsi)	\
    ( (This)->lpVtbl -> GetFolder(This,ppsi) ) 

#define IFileSaveDialog_GetCurrentSelection(This,ppsi)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) ) 

#define IFileSaveDialog_SetFileName(This,pszName)	\
    ( (This)->lpVtbl -> SetFileName(This,pszName) ) 

#define IFileSaveDialog_GetFileName(This,pszName)	\
    ( (This)->lpVtbl -> GetFileName(This,pszName) ) 

#define IFileSaveDialog_SetTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) ) 

#define IFileSaveDialog_SetOkButtonLabel(This,pszText)	\
    ( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) ) 

#define IFileSaveDialog_SetFileNameLabel(This,pszLabel)	\
    ( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) ) 

#define IFileSaveDialog_GetResult(This,ppsi)	\
    ( (This)->lpVtbl -> GetResult(This,ppsi) ) 

#define IFileSaveDialog_AddPlace(This,psi,fdap)	\
    ( (This)->lpVtbl -> AddPlace(This,psi,fdap) ) 

#define IFileSaveDialog_SetDefaultExtension(This,pszDefaultExtension)	\
    ( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) ) 

#define IFileSaveDialog_Close(This,hr)	\
    ( (This)->lpVtbl -> Close(This,hr) ) 

#define IFileSaveDialog_SetClientGuid(This,guid)	\
    ( (This)->lpVtbl -> SetClientGuid(This,guid) ) 

#define IFileSaveDialog_ClearClientData(This)	\
    ( (This)->lpVtbl -> ClearClientData(This) ) 

#define IFileSaveDialog_SetFilter(This,pFilter)	\
    ( (This)->lpVtbl -> SetFilter(This,pFilter) ) 


#define IFileSaveDialog_SetSaveAsItem(This,psi)	\
    ( (This)->lpVtbl -> SetSaveAsItem(This,psi) ) 

#define IFileSaveDialog_SetProperties(This,pStore)	\
    ( (This)->lpVtbl -> SetProperties(This,pStore) ) 

#define IFileSaveDialog_SetCollectedProperties(This,pList,fAppendDefault)	\
    ( (This)->lpVtbl -> SetCollectedProperties(This,pList,fAppendDefault) ) 

#define IFileSaveDialog_GetProperties(This,ppStore)	\
    ( (This)->lpVtbl -> GetProperties(This,ppStore) ) 

#define IFileSaveDialog_ApplyProperties(This,psi,pStore,hwnd,pSink)	\
    ( (This)->lpVtbl -> ApplyProperties(This,psi,pStore,hwnd,pSink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileSaveDialog_INTERFACE_DEFINED__ */


#ifndef __IFileOpenDialog_INTERFACE_DEFINED__
#define __IFileOpenDialog_INTERFACE_DEFINED__

/* interface IFileOpenDialog */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileOpenDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d57c7288-d4ad-4768-be02-9d969532d960")
    IFileOpenDialog : public IFileDialog
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItems( 
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsai) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileOpenDialogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileOpenDialog * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileOpenDialog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileOpenDialog * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            IFileOpenDialog * This,
            /* [in] */ 
            __in  HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypes )( 
            IFileOpenDialog * This,
            /* [in] */ UINT cFileTypes,
            /* [size_is][in] */ __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileTypeIndex )( 
            IFileOpenDialog * This,
            /* [in] */ UINT iFileType);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTypeIndex )( 
            IFileOpenDialog * This,
            /* [out] */ __RPC__out UINT *piFileType);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IFileDialogEvents *pfde,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IFileOpenDialog * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptions )( 
            IFileOpenDialog * This,
            /* [in] */ DWORD fos);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptions )( 
            IFileOpenDialog * This,
            /* [out] */ __RPC__out DWORD *pfos);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultFolder )( 
            IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolder )( 
            IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IFileOpenDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IFileOpenDialog * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IFileOpenDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetOkButtonLabel )( 
            IFileOpenDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileNameLabel )( 
            IFileOpenDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetResult )( 
            IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *AddPlace )( 
            IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ FDAP fdap);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultExtension )( 
            IFileOpenDialog * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDefaultExtension);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IFileOpenDialog * This,
            /* [in] */ HRESULT hr);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )( 
            IFileOpenDialog * This,
            /* [in] */ __RPC__in REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *ClearClientData )( 
            IFileOpenDialog * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFilter )( 
            IFileOpenDialog * This,
            /* [in] */ __RPC__in_opt IShellItemFilter *pFilter);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppenum);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItems )( 
            IFileOpenDialog * This,
            /* [out] */ __RPC__deref_out_opt IShellItemArray **ppsai);
        
        END_INTERFACE
    } IFileOpenDialogVtbl;

    interface IFileOpenDialog
    {
        CONST_VTBL struct IFileOpenDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileOpenDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileOpenDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileOpenDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileOpenDialog_Show(This,hwndParent)	\
    ( (This)->lpVtbl -> Show(This,hwndParent) ) 


#define IFileOpenDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)	\
    ( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) ) 

#define IFileOpenDialog_SetFileTypeIndex(This,iFileType)	\
    ( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) ) 

#define IFileOpenDialog_GetFileTypeIndex(This,piFileType)	\
    ( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) ) 

#define IFileOpenDialog_Advise(This,pfde,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) ) 

#define IFileOpenDialog_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IFileOpenDialog_SetOptions(This,fos)	\
    ( (This)->lpVtbl -> SetOptions(This,fos) ) 

#define IFileOpenDialog_GetOptions(This,pfos)	\
    ( (This)->lpVtbl -> GetOptions(This,pfos) ) 

#define IFileOpenDialog_SetDefaultFolder(This,psi)	\
    ( (This)->lpVtbl -> SetDefaultFolder(This,psi) ) 

#define IFileOpenDialog_SetFolder(This,psi)	\
    ( (This)->lpVtbl -> SetFolder(This,psi) ) 

#define IFileOpenDialog_GetFolder(This,ppsi)	\
    ( (This)->lpVtbl -> GetFolder(This,ppsi) ) 

#define IFileOpenDialog_GetCurrentSelection(This,ppsi)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) ) 

#define IFileOpenDialog_SetFileName(This,pszName)	\
    ( (This)->lpVtbl -> SetFileName(This,pszName) ) 

#define IFileOpenDialog_GetFileName(This,pszName)	\
    ( (This)->lpVtbl -> GetFileName(This,pszName) ) 

#define IFileOpenDialog_SetTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) ) 

#define IFileOpenDialog_SetOkButtonLabel(This,pszText)	\
    ( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) ) 

#define IFileOpenDialog_SetFileNameLabel(This,pszLabel)	\
    ( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) ) 

#define IFileOpenDialog_GetResult(This,ppsi)	\
    ( (This)->lpVtbl -> GetResult(This,ppsi) ) 

#define IFileOpenDialog_AddPlace(This,psi,fdap)	\
    ( (This)->lpVtbl -> AddPlace(This,psi,fdap) ) 

#define IFileOpenDialog_SetDefaultExtension(This,pszDefaultExtension)	\
    ( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) ) 

#define IFileOpenDialog_Close(This,hr)	\
    ( (This)->lpVtbl -> Close(This,hr) ) 

#define IFileOpenDialog_SetClientGuid(This,guid)	\
    ( (This)->lpVtbl -> SetClientGuid(This,guid) ) 

#define IFileOpenDialog_ClearClientData(This)	\
    ( (This)->lpVtbl -> ClearClientData(This) ) 

#define IFileOpenDialog_SetFilter(This,pFilter)	\
    ( (This)->lpVtbl -> SetFilter(This,pFilter) ) 


#define IFileOpenDialog_GetResults(This,ppenum)	\
    ( (This)->lpVtbl -> GetResults(This,ppenum) ) 

#define IFileOpenDialog_GetSelectedItems(This,ppsai)	\
    ( (This)->lpVtbl -> GetSelectedItems(This,ppsai) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileOpenDialog_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0122 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum tagCDCONTROLSTATE
    {	CDCS_INACTIVE	= 0,
	CDCS_ENABLED	= 0x1,
	CDCS_VISIBLE	= 0x2
    } 	CDCONTROLSTATE;

typedef DWORD CDCONTROLSTATEF;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0122_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0122_v0_0_s_ifspec;

#ifndef __IFileDialogCustomize_INTERFACE_DEFINED__
#define __IFileDialogCustomize_INTERFACE_DEFINED__

/* interface IFileDialogCustomize */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileDialogCustomize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e6fdd21a-163f-4975-9c8c-a69f1ba37034")
    IFileDialogCustomize : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnableOpenDropDown( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddMenu( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPushButton( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddComboBox( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRadioButtonList( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCheckButton( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel,
            /* [in] */ BOOL bChecked) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddEditBox( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddSeparator( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddText( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetControlLabel( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetControlState( 
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out CDCONTROLSTATEF *pdwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetControlState( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ CDCONTROLSTATEF dwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEditBoxText( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][out] */ __RPC__deref_out_opt_string WCHAR **ppszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEditBoxText( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCheckButtonState( 
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out BOOL *pbChecked) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCheckButtonState( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ BOOL bChecked) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddControlItem( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [in] */ __RPC__in LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveControlItem( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllControlItems( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetControlItemState( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [out] */ __RPC__out CDCONTROLSTATEF *pdwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetControlItemState( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [in] */ CDCONTROLSTATEF dwState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedControlItem( 
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out DWORD *pdwIDItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSelectedControlItem( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartVisualGroup( 
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndVisualGroup( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MakeProminent( 
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetControlItemText( 
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileDialogCustomizeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileDialogCustomize * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileDialogCustomize * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileDialogCustomize * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnableOpenDropDown )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *AddMenu )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *AddPushButton )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *AddComboBox )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *AddRadioButtonList )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *AddCheckButton )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel,
            /* [in] */ BOOL bChecked);
        
        HRESULT ( STDMETHODCALLTYPE *AddEditBox )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *AddSeparator )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *AddText )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetControlLabel )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *GetControlState )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out CDCONTROLSTATEF *pdwState);
        
        HRESULT ( STDMETHODCALLTYPE *SetControlState )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ CDCONTROLSTATEF dwState);
        
        HRESULT ( STDMETHODCALLTYPE *GetEditBoxText )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][out] */ __RPC__deref_out_opt_string WCHAR **ppszText);
        
        HRESULT ( STDMETHODCALLTYPE *SetEditBoxText )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszText);
        
        HRESULT ( STDMETHODCALLTYPE *GetCheckButtonState )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out BOOL *pbChecked);
        
        HRESULT ( STDMETHODCALLTYPE *SetCheckButtonState )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ BOOL bChecked);
        
        HRESULT ( STDMETHODCALLTYPE *AddControlItem )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveControlItem )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllControlItems )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *GetControlItemState )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [out] */ __RPC__out CDCONTROLSTATEF *pdwState);
        
        HRESULT ( STDMETHODCALLTYPE *SetControlItemState )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [in] */ CDCONTROLSTATEF dwState);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedControlItem )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [out] */ __RPC__out DWORD *pdwIDItem);
        
        HRESULT ( STDMETHODCALLTYPE *SetSelectedControlItem )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem);
        
        HRESULT ( STDMETHODCALLTYPE *StartVisualGroup )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel);
        
        HRESULT ( STDMETHODCALLTYPE *EndVisualGroup )( 
            IFileDialogCustomize * This);
        
        HRESULT ( STDMETHODCALLTYPE *MakeProminent )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *SetControlItemText )( 
            IFileDialogCustomize * This,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem,
            /* [string][in] */ __RPC__in LPCWSTR pszLabel);
        
        END_INTERFACE
    } IFileDialogCustomizeVtbl;

    interface IFileDialogCustomize
    {
        CONST_VTBL struct IFileDialogCustomizeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileDialogCustomize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileDialogCustomize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileDialogCustomize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileDialogCustomize_EnableOpenDropDown(This,dwIDCtl)	\
    ( (This)->lpVtbl -> EnableOpenDropDown(This,dwIDCtl) ) 

#define IFileDialogCustomize_AddMenu(This,dwIDCtl,pszLabel)	\
    ( (This)->lpVtbl -> AddMenu(This,dwIDCtl,pszLabel) ) 

#define IFileDialogCustomize_AddPushButton(This,dwIDCtl,pszLabel)	\
    ( (This)->lpVtbl -> AddPushButton(This,dwIDCtl,pszLabel) ) 

#define IFileDialogCustomize_AddComboBox(This,dwIDCtl)	\
    ( (This)->lpVtbl -> AddComboBox(This,dwIDCtl) ) 

#define IFileDialogCustomize_AddRadioButtonList(This,dwIDCtl)	\
    ( (This)->lpVtbl -> AddRadioButtonList(This,dwIDCtl) ) 

#define IFileDialogCustomize_AddCheckButton(This,dwIDCtl,pszLabel,bChecked)	\
    ( (This)->lpVtbl -> AddCheckButton(This,dwIDCtl,pszLabel,bChecked) ) 

#define IFileDialogCustomize_AddEditBox(This,dwIDCtl,pszText)	\
    ( (This)->lpVtbl -> AddEditBox(This,dwIDCtl,pszText) ) 

#define IFileDialogCustomize_AddSeparator(This,dwIDCtl)	\
    ( (This)->lpVtbl -> AddSeparator(This,dwIDCtl) ) 

#define IFileDialogCustomize_AddText(This,dwIDCtl,pszText)	\
    ( (This)->lpVtbl -> AddText(This,dwIDCtl,pszText) ) 

#define IFileDialogCustomize_SetControlLabel(This,dwIDCtl,pszLabel)	\
    ( (This)->lpVtbl -> SetControlLabel(This,dwIDCtl,pszLabel) ) 

#define IFileDialogCustomize_GetControlState(This,dwIDCtl,pdwState)	\
    ( (This)->lpVtbl -> GetControlState(This,dwIDCtl,pdwState) ) 

#define IFileDialogCustomize_SetControlState(This,dwIDCtl,dwState)	\
    ( (This)->lpVtbl -> SetControlState(This,dwIDCtl,dwState) ) 

#define IFileDialogCustomize_GetEditBoxText(This,dwIDCtl,ppszText)	\
    ( (This)->lpVtbl -> GetEditBoxText(This,dwIDCtl,ppszText) ) 

#define IFileDialogCustomize_SetEditBoxText(This,dwIDCtl,pszText)	\
    ( (This)->lpVtbl -> SetEditBoxText(This,dwIDCtl,pszText) ) 

#define IFileDialogCustomize_GetCheckButtonState(This,dwIDCtl,pbChecked)	\
    ( (This)->lpVtbl -> GetCheckButtonState(This,dwIDCtl,pbChecked) ) 

#define IFileDialogCustomize_SetCheckButtonState(This,dwIDCtl,bChecked)	\
    ( (This)->lpVtbl -> SetCheckButtonState(This,dwIDCtl,bChecked) ) 

#define IFileDialogCustomize_AddControlItem(This,dwIDCtl,dwIDItem,pszLabel)	\
    ( (This)->lpVtbl -> AddControlItem(This,dwIDCtl,dwIDItem,pszLabel) ) 

#define IFileDialogCustomize_RemoveControlItem(This,dwIDCtl,dwIDItem)	\
    ( (This)->lpVtbl -> RemoveControlItem(This,dwIDCtl,dwIDItem) ) 

#define IFileDialogCustomize_RemoveAllControlItems(This,dwIDCtl)	\
    ( (This)->lpVtbl -> RemoveAllControlItems(This,dwIDCtl) ) 

#define IFileDialogCustomize_GetControlItemState(This,dwIDCtl,dwIDItem,pdwState)	\
    ( (This)->lpVtbl -> GetControlItemState(This,dwIDCtl,dwIDItem,pdwState) ) 

#define IFileDialogCustomize_SetControlItemState(This,dwIDCtl,dwIDItem,dwState)	\
    ( (This)->lpVtbl -> SetControlItemState(This,dwIDCtl,dwIDItem,dwState) ) 

#define IFileDialogCustomize_GetSelectedControlItem(This,dwIDCtl,pdwIDItem)	\
    ( (This)->lpVtbl -> GetSelectedControlItem(This,dwIDCtl,pdwIDItem) ) 

#define IFileDialogCustomize_SetSelectedControlItem(This,dwIDCtl,dwIDItem)	\
    ( (This)->lpVtbl -> SetSelectedControlItem(This,dwIDCtl,dwIDItem) ) 

#define IFileDialogCustomize_StartVisualGroup(This,dwIDCtl,pszLabel)	\
    ( (This)->lpVtbl -> StartVisualGroup(This,dwIDCtl,pszLabel) ) 

#define IFileDialogCustomize_EndVisualGroup(This)	\
    ( (This)->lpVtbl -> EndVisualGroup(This) ) 

#define IFileDialogCustomize_MakeProminent(This,dwIDCtl)	\
    ( (This)->lpVtbl -> MakeProminent(This,dwIDCtl) ) 

#define IFileDialogCustomize_SetControlItemText(This,dwIDCtl,dwIDItem,pszLabel)	\
    ( (This)->lpVtbl -> SetControlItemText(This,dwIDCtl,dwIDItem,pszLabel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileDialogCustomize_INTERFACE_DEFINED__ */


#ifndef __IFileDialogControlEvents_INTERFACE_DEFINED__
#define __IFileDialogControlEvents_INTERFACE_DEFINED__

/* interface IFileDialogControlEvents */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IFileDialogControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36116642-D713-4b97-9B83-7484A9D00433")
    IFileDialogControlEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnItemSelected( 
            /* [in] */ __RPC__in_opt IFileDialogCustomize *pfdc,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnButtonClicked( 
            /* [in] */ __RPC__in_opt IFileDialogCustomize *pfdc,
            /* [in] */ DWORD dwIDCtl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCheckButtonToggled( 
            /* [in] */ __RPC__in_opt IFileDialogCustomize *pfdc,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ BOOL bChecked) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnControlActivating( 
            /* [in] */ __RPC__in_opt IFileDialogCustomize *pfdc,
            /* [in] */ DWORD dwIDCtl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileDialogControlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileDialogControlEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileDialogControlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileDialogControlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnItemSelected )( 
            IFileDialogControlEvents * This,
            /* [in] */ __RPC__in_opt IFileDialogCustomize *pfdc,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ DWORD dwIDItem);
        
        HRESULT ( STDMETHODCALLTYPE *OnButtonClicked )( 
            IFileDialogControlEvents * This,
            /* [in] */ __RPC__in_opt IFileDialogCustomize *pfdc,
            /* [in] */ DWORD dwIDCtl);
        
        HRESULT ( STDMETHODCALLTYPE *OnCheckButtonToggled )( 
            IFileDialogControlEvents * This,
            /* [in] */ __RPC__in_opt IFileDialogCustomize *pfdc,
            /* [in] */ DWORD dwIDCtl,
            /* [in] */ BOOL bChecked);
        
        HRESULT ( STDMETHODCALLTYPE *OnControlActivating )( 
            IFileDialogControlEvents * This,
            /* [in] */ __RPC__in_opt IFileDialogCustomize *pfdc,
            /* [in] */ DWORD dwIDCtl);
        
        END_INTERFACE
    } IFileDialogControlEventsVtbl;

    interface IFileDialogControlEvents
    {
        CONST_VTBL struct IFileDialogControlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileDialogControlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileDialogControlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileDialogControlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileDialogControlEvents_OnItemSelected(This,pfdc,dwIDCtl,dwIDItem)	\
    ( (This)->lpVtbl -> OnItemSelected(This,pfdc,dwIDCtl,dwIDItem) ) 

#define IFileDialogControlEvents_OnButtonClicked(This,pfdc,dwIDCtl)	\
    ( (This)->lpVtbl -> OnButtonClicked(This,pfdc,dwIDCtl) ) 

#define IFileDialogControlEvents_OnCheckButtonToggled(This,pfdc,dwIDCtl,bChecked)	\
    ( (This)->lpVtbl -> OnCheckButtonToggled(This,pfdc,dwIDCtl,bChecked) ) 

#define IFileDialogControlEvents_OnControlActivating(This,pfdc,dwIDCtl)	\
    ( (This)->lpVtbl -> OnControlActivating(This,pfdc,dwIDCtl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileDialogControlEvents_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0124 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum tagASSOCIATIONLEVEL
    {	AL_MACHINE	= 0,
	AL_EFFECTIVE	= ( AL_MACHINE + 1 ) ,
	AL_USER	= ( AL_EFFECTIVE + 1 ) 
    } 	ASSOCIATIONLEVEL;

typedef /* [v1_enum] */ 
enum tagASSOCIATIONTYPE
    {	AT_FILEEXTENSION	= 0,
	AT_URLPROTOCOL	= ( AT_FILEEXTENSION + 1 ) ,
	AT_STARTMENUCLIENT	= ( AT_URLPROTOCOL + 1 ) ,
	AT_MIMETYPE	= ( AT_STARTMENUCLIENT + 1 ) 
    } 	ASSOCIATIONTYPE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0124_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0124_v0_0_s_ifspec;

#ifndef __IApplicationAssociationRegistration_INTERFACE_DEFINED__
#define __IApplicationAssociationRegistration_INTERFACE_DEFINED__

/* interface IApplicationAssociationRegistration */
/* [helpstring][unique][uuid][object] */ 


EXTERN_C const IID IID_IApplicationAssociationRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4e530b0a-e611-4c77-a3ac-9031d022281b")
    IApplicationAssociationRegistration : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryCurrentDefault( 
            /* [string][in] */ __RPC__in LPCWSTR pszQuery,
            /* [in] */ ASSOCIATIONTYPE atQueryType,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszAssociation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryAppIsDefault( 
            /* [string][in] */ __RPC__in LPCWSTR pszQuery,
            /* [in] */ ASSOCIATIONTYPE atQueryType,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName,
            /* [out] */ __RPC__out BOOL *pfDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryAppIsDefaultAll( 
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName,
            /* [out] */ __RPC__out BOOL *pfDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAppAsDefault( 
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName,
            /* [string][in] */ __RPC__in LPCWSTR pszSet,
            /* [in] */ ASSOCIATIONTYPE atSetType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAppAsDefaultAll( 
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearUserAssociations( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplicationAssociationRegistrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplicationAssociationRegistration * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplicationAssociationRegistration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplicationAssociationRegistration * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryCurrentDefault )( 
            IApplicationAssociationRegistration * This,
            /* [string][in] */ __RPC__in LPCWSTR pszQuery,
            /* [in] */ ASSOCIATIONTYPE atQueryType,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszAssociation);
        
        HRESULT ( STDMETHODCALLTYPE *QueryAppIsDefault )( 
            IApplicationAssociationRegistration * This,
            /* [string][in] */ __RPC__in LPCWSTR pszQuery,
            /* [in] */ ASSOCIATIONTYPE atQueryType,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName,
            /* [out] */ __RPC__out BOOL *pfDefault);
        
        HRESULT ( STDMETHODCALLTYPE *QueryAppIsDefaultAll )( 
            IApplicationAssociationRegistration * This,
            /* [in] */ ASSOCIATIONLEVEL alQueryLevel,
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName,
            /* [out] */ __RPC__out BOOL *pfDefault);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppAsDefault )( 
            IApplicationAssociationRegistration * This,
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName,
            /* [string][in] */ __RPC__in LPCWSTR pszSet,
            /* [in] */ ASSOCIATIONTYPE atSetType);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppAsDefaultAll )( 
            IApplicationAssociationRegistration * This,
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName);
        
        HRESULT ( STDMETHODCALLTYPE *ClearUserAssociations )( 
            IApplicationAssociationRegistration * This);
        
        END_INTERFACE
    } IApplicationAssociationRegistrationVtbl;

    interface IApplicationAssociationRegistration
    {
        CONST_VTBL struct IApplicationAssociationRegistrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationAssociationRegistration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationAssociationRegistration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationAssociationRegistration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationAssociationRegistration_QueryCurrentDefault(This,pszQuery,atQueryType,alQueryLevel,ppszAssociation)	\
    ( (This)->lpVtbl -> QueryCurrentDefault(This,pszQuery,atQueryType,alQueryLevel,ppszAssociation) ) 

#define IApplicationAssociationRegistration_QueryAppIsDefault(This,pszQuery,atQueryType,alQueryLevel,pszAppRegistryName,pfDefault)	\
    ( (This)->lpVtbl -> QueryAppIsDefault(This,pszQuery,atQueryType,alQueryLevel,pszAppRegistryName,pfDefault) ) 

#define IApplicationAssociationRegistration_QueryAppIsDefaultAll(This,alQueryLevel,pszAppRegistryName,pfDefault)	\
    ( (This)->lpVtbl -> QueryAppIsDefaultAll(This,alQueryLevel,pszAppRegistryName,pfDefault) ) 

#define IApplicationAssociationRegistration_SetAppAsDefault(This,pszAppRegistryName,pszSet,atSetType)	\
    ( (This)->lpVtbl -> SetAppAsDefault(This,pszAppRegistryName,pszSet,atSetType) ) 

#define IApplicationAssociationRegistration_SetAppAsDefaultAll(This,pszAppRegistryName)	\
    ( (This)->lpVtbl -> SetAppAsDefaultAll(This,pszAppRegistryName) ) 

#define IApplicationAssociationRegistration_ClearUserAssociations(This)	\
    ( (This)->lpVtbl -> ClearUserAssociations(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationAssociationRegistration_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0125 */
/* [local] */ 

SHSTDAPI SHCreateAssociationRegistration(__in REFIID riid, __deref_out void **ppv);


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0125_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0125_v0_0_s_ifspec;

#ifndef __IApplicationAssociationRegistrationUI_INTERFACE_DEFINED__
#define __IApplicationAssociationRegistrationUI_INTERFACE_DEFINED__

/* interface IApplicationAssociationRegistrationUI */
/* [helpstring][unique][uuid][object] */ 


EXTERN_C const IID IID_IApplicationAssociationRegistrationUI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1f76a169-f994-40ac-8fc8-0959e8874710")
    IApplicationAssociationRegistrationUI : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LaunchAdvancedAssociationUI( 
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplicationAssociationRegistrationUIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplicationAssociationRegistrationUI * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplicationAssociationRegistrationUI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplicationAssociationRegistrationUI * This);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchAdvancedAssociationUI )( 
            IApplicationAssociationRegistrationUI * This,
            /* [string][in] */ __RPC__in LPCWSTR pszAppRegistryName);
        
        END_INTERFACE
    } IApplicationAssociationRegistrationUIVtbl;

    interface IApplicationAssociationRegistrationUI
    {
        CONST_VTBL struct IApplicationAssociationRegistrationUIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationAssociationRegistrationUI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationAssociationRegistrationUI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationAssociationRegistrationUI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationAssociationRegistrationUI_LaunchAdvancedAssociationUI(This,pszAppRegistryName)	\
    ( (This)->lpVtbl -> LaunchAdvancedAssociationUI(This,pszAppRegistryName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationAssociationRegistrationUI_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0126 */
/* [local] */ 

#endif  // NTDDI_LONGHORN
#include <pshpack1.h>
typedef struct tagDELEGATEITEMID
    {
    WORD cbSize;
    WORD wOuter;
    WORD cbInner;
    BYTE rgb[ 1 ];
    } 	DELEGATEITEMID;

#include <poppack.h>
typedef const UNALIGNED DELEGATEITEMID *PCDELEGATEITEMID;
typedef UNALIGNED DELEGATEITEMID *PDELEGATEITEMID;


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0126_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0126_v0_0_s_ifspec;

#ifndef __IDelegateFolder_INTERFACE_DEFINED__
#define __IDelegateFolder_INTERFACE_DEFINED__

/* interface IDelegateFolder */
/* [unique][local][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IDelegateFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ADD8BA80-002B-11D0-8F0F-00C04FD7D062")
    IDelegateFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetItemAlloc( 
            /* [in] */ 
            __in  IMalloc *pmalloc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDelegateFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDelegateFolder * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDelegateFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDelegateFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetItemAlloc )( 
            IDelegateFolder * This,
            /* [in] */ 
            __in  IMalloc *pmalloc);
        
        END_INTERFACE
    } IDelegateFolderVtbl;

    interface IDelegateFolder
    {
        CONST_VTBL struct IDelegateFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDelegateFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDelegateFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDelegateFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDelegateFolder_SetItemAlloc(This,pmalloc)	\
    ( (This)->lpVtbl -> SetItemAlloc(This,pmalloc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDelegateFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0127 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE60)
// INTERFACE: IBrowserFrameOptions
//
// This interface was implemented so a browser or host can ask a ShellView/ShelNameSpace what
// kind of 'Behavior' is appropriate for that view.
//
//    IBrowserFrameOptions::GetBrowserOptions()
//       dwMask is the logical OR of bits to look for.  pdwOptions is not optional and
//       it's return value will always equal or will be a subset of dwMask.
//       If the function succeeds, the return value must be S_OK and pdwOptions needs to be filled in.
//       If the function fails, pdwOptions needs to be filled in with BFO_NONE.
//


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0127_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0127_v0_0_s_ifspec;

#ifndef __IBrowserFrameOptions_INTERFACE_DEFINED__
#define __IBrowserFrameOptions_INTERFACE_DEFINED__

/* interface IBrowserFrameOptions */
/* [local][object][uuid] */ 

typedef /* [unique] */ IBrowserFrameOptions *LPBROWSERFRAMEOPTIONS;


enum tagBROWSERFRAMEOPTIONS
    {	BFO_NONE	= 0,
	BFO_BROWSER_PERSIST_SETTINGS	= 0x1,
	BFO_RENAME_FOLDER_OPTIONS_TOINTERNET	= 0x2,
	BFO_BOTH_OPTIONS	= 0x4,
	BIF_PREFER_INTERNET_SHORTCUT	= 0x8,
	BFO_BROWSE_NO_IN_NEW_PROCESS	= 0x10,
	BFO_ENABLE_HYPERLINK_TRACKING	= 0x20,
	BFO_USE_IE_OFFLINE_SUPPORT	= 0x40,
	BFO_SUBSTITUE_INTERNET_START_PAGE	= 0x80,
	BFO_USE_IE_LOGOBANDING	= 0x100,
	BFO_ADD_IE_TOCAPTIONBAR	= 0x200,
	BFO_USE_DIALUP_REF	= 0x400,
	BFO_USE_IE_TOOLBAR	= 0x800,
	BFO_NO_PARENT_FOLDER_SUPPORT	= 0x1000,
	BFO_NO_REOPEN_NEXT_RESTART	= 0x2000,
	BFO_GO_HOME_PAGE	= 0x4000,
	BFO_PREFER_IEPROCESS	= 0x8000,
	BFO_SHOW_NAVIGATION_CANCELLED	= 0x10000,
	BFO_USE_IE_STATUSBAR	= 0x20000,
	BFO_QUERY_ALL	= 0xffffffff
    } ;
typedef DWORD BROWSERFRAMEOPTIONS;


EXTERN_C const IID IID_IBrowserFrameOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10DF43C8-1DBE-11d3-8B34-006097DF5BD4")
    IBrowserFrameOptions : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFrameOptions( 
            /* [in] */ 
            __in  BROWSERFRAMEOPTIONS dwMask,
            /* [out] */ 
            __out  BROWSERFRAMEOPTIONS *pdwOptions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBrowserFrameOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBrowserFrameOptions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBrowserFrameOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBrowserFrameOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameOptions )( 
            IBrowserFrameOptions * This,
            /* [in] */ 
            __in  BROWSERFRAMEOPTIONS dwMask,
            /* [out] */ 
            __out  BROWSERFRAMEOPTIONS *pdwOptions);
        
        END_INTERFACE
    } IBrowserFrameOptionsVtbl;

    interface IBrowserFrameOptions
    {
        CONST_VTBL struct IBrowserFrameOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBrowserFrameOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBrowserFrameOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBrowserFrameOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBrowserFrameOptions_GetFrameOptions(This,dwMask,pdwOptions)	\
    ( (This)->lpVtbl -> GetFrameOptions(This,dwMask,pdwOptions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBrowserFrameOptions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0128 */
/* [local] */ 

#endif  // _WIN32_IE_IE60
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
typedef 
enum tagNWMF
    {	NWMF_UNLOADING	= 0x1,
	NWMF_USERINITED	= 0x2,
	NWMF_FIRST	= 0x4,
	NWMF_OVERRIDEKEY	= 0x8,
	NWMF_SHOWHELP	= 0x10,
	NWMF_HTMLDIALOG	= 0x20,
	NWMF_FROMDIALOGCHILD	= 0x40,
	NWMF_USERREQUESTED	= 0x80,
	NWMF_USERALLOWED	= 0x100,
	NWMF_FORCEWINDOW	= 0x10000,
	NWMF_FORCETAB	= 0x20000,
	NWMF_SUGGESTWINDOW	= 0x40000,
	NWMF_SUGGESTTAB	= 0x80000,
	NWMF_INACTIVETAB	= 0x100000
    } 	NWMF;

#define SID_SNewWindowManager IID_INewWindowManager


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0128_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0128_v0_0_s_ifspec;

#ifndef __INewWindowManager_INTERFACE_DEFINED__
#define __INewWindowManager_INTERFACE_DEFINED__

/* interface INewWindowManager */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_INewWindowManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D2BC4C84-3F72-4a52-A604-7BCBF3982CBB")
    INewWindowManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EvaluateNewWindow( 
            /* [string][in] */ __RPC__in LPCWSTR pszUrl,
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [string][in] */ __RPC__in LPCWSTR pszUrlContext,
            /* [string][in] */ __RPC__in LPCWSTR pszFeatures,
            /* [in] */ BOOL fReplace,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwUserActionTime) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INewWindowManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INewWindowManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INewWindowManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INewWindowManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *EvaluateNewWindow )( 
            INewWindowManager * This,
            /* [string][in] */ __RPC__in LPCWSTR pszUrl,
            /* [string][in] */ __RPC__in LPCWSTR pszName,
            /* [string][in] */ __RPC__in LPCWSTR pszUrlContext,
            /* [string][in] */ __RPC__in LPCWSTR pszFeatures,
            /* [in] */ BOOL fReplace,
            /* [in] */ DWORD dwFlags,
            /* [in] */ DWORD dwUserActionTime);
        
        END_INTERFACE
    } INewWindowManagerVtbl;

    interface INewWindowManager
    {
        CONST_VTBL struct INewWindowManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INewWindowManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INewWindowManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INewWindowManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INewWindowManager_EvaluateNewWindow(This,pszUrl,pszName,pszUrlContext,pszFeatures,fReplace,dwFlags,dwUserActionTime)	\
    ( (This)->lpVtbl -> EvaluateNewWindow(This,pszUrl,pszName,pszUrlContext,pszFeatures,fReplace,dwFlags,dwUserActionTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INewWindowManager_INTERFACE_DEFINED__ */


#ifndef __IAttachmentExecute_INTERFACE_DEFINED__
#define __IAttachmentExecute_INTERFACE_DEFINED__

/* interface IAttachmentExecute */
/* [unique][local][uuid][object] */ 

typedef 
enum tagATTACHMENT_PROMPT
    {	ATTACHMENT_PROMPT_NONE	= 0,
	ATTACHMENT_PROMPT_SAVE	= 0x1,
	ATTACHMENT_PROMPT_EXEC	= 0x2,
	ATTACHMENT_PROMPT_EXEC_OR_SAVE	= 0x3
    } 	ATTACHMENT_PROMPT;

typedef 
enum tagATTACHMENT_ACTION
    {	ATTACHMENT_ACTION_CANCEL	= 0,
	ATTACHMENT_ACTION_SAVE	= 0x1,
	ATTACHMENT_ACTION_EXEC	= 0x2
    } 	ATTACHMENT_ACTION;


EXTERN_C const IID IID_IAttachmentExecute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73db1241-1e85-4581-8e4f-a81e1d0f8c57")
    IAttachmentExecute : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetClientTitle( 
            /* [string][in] */ 
            __in  LPCWSTR pszTitle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClientGuid( 
            /* [in] */ 
            __in  REFGUID guid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLocalPath( 
            /* [string][in] */ 
            __in  LPCWSTR pszLocalPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFileName( 
            /* [string][in] */ 
            __in  LPCWSTR pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSource( 
            /* [string][in] */ 
            __in  LPCWSTR pszSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReferrer( 
            /* [string][in] */ 
            __in  LPCWSTR pszReferrer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckPolicy( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Prompt( 
            /* [in] */ 
            __in  HWND hwnd,
            /* [in] */ 
            __in  ATTACHMENT_PROMPT prompt,
            /* [out] */ 
            __out  ATTACHMENT_ACTION *paction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ 
            __in  HWND hwnd,
            /* [string][in] */ 
            __in  LPCWSTR pszVerb,
            /* [out] */ 
            __out_opt  HANDLE *phProcess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveWithUI( 
            /* [in] */ 
            __in  HWND hwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearClientState( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAttachmentExecuteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAttachmentExecute * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAttachmentExecute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAttachmentExecute * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientTitle )( 
            IAttachmentExecute * This,
            /* [string][in] */ 
            __in  LPCWSTR pszTitle);
        
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )( 
            IAttachmentExecute * This,
            /* [in] */ 
            __in  REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *SetLocalPath )( 
            IAttachmentExecute * This,
            /* [string][in] */ 
            __in  LPCWSTR pszLocalPath);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAttachmentExecute * This,
            /* [string][in] */ 
            __in  LPCWSTR pszFileName);
        
        HRESULT ( STDMETHODCALLTYPE *SetSource )( 
            IAttachmentExecute * This,
            /* [string][in] */ 
            __in  LPCWSTR pszSource);
        
        HRESULT ( STDMETHODCALLTYPE *SetReferrer )( 
            IAttachmentExecute * This,
            /* [string][in] */ 
            __in  LPCWSTR pszReferrer);
        
        HRESULT ( STDMETHODCALLTYPE *CheckPolicy )( 
            IAttachmentExecute * This);
        
        HRESULT ( STDMETHODCALLTYPE *Prompt )( 
            IAttachmentExecute * This,
            /* [in] */ 
            __in  HWND hwnd,
            /* [in] */ 
            __in  ATTACHMENT_PROMPT prompt,
            /* [out] */ 
            __out  ATTACHMENT_ACTION *paction);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAttachmentExecute * This);
        
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IAttachmentExecute * This,
            /* [in] */ 
            __in  HWND hwnd,
            /* [string][in] */ 
            __in  LPCWSTR pszVerb,
            /* [out] */ 
            __out_opt  HANDLE *phProcess);
        
        HRESULT ( STDMETHODCALLTYPE *SaveWithUI )( 
            IAttachmentExecute * This,
            /* [in] */ 
            __in  HWND hwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ClearClientState )( 
            IAttachmentExecute * This);
        
        END_INTERFACE
    } IAttachmentExecuteVtbl;

    interface IAttachmentExecute
    {
        CONST_VTBL struct IAttachmentExecuteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAttachmentExecute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAttachmentExecute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAttachmentExecute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAttachmentExecute_SetClientTitle(This,pszTitle)	\
    ( (This)->lpVtbl -> SetClientTitle(This,pszTitle) ) 

#define IAttachmentExecute_SetClientGuid(This,guid)	\
    ( (This)->lpVtbl -> SetClientGuid(This,guid) ) 

#define IAttachmentExecute_SetLocalPath(This,pszLocalPath)	\
    ( (This)->lpVtbl -> SetLocalPath(This,pszLocalPath) ) 

#define IAttachmentExecute_SetFileName(This,pszFileName)	\
    ( (This)->lpVtbl -> SetFileName(This,pszFileName) ) 

#define IAttachmentExecute_SetSource(This,pszSource)	\
    ( (This)->lpVtbl -> SetSource(This,pszSource) ) 

#define IAttachmentExecute_SetReferrer(This,pszReferrer)	\
    ( (This)->lpVtbl -> SetReferrer(This,pszReferrer) ) 

#define IAttachmentExecute_CheckPolicy(This)	\
    ( (This)->lpVtbl -> CheckPolicy(This) ) 

#define IAttachmentExecute_Prompt(This,hwnd,prompt,paction)	\
    ( (This)->lpVtbl -> Prompt(This,hwnd,prompt,paction) ) 

#define IAttachmentExecute_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IAttachmentExecute_Execute(This,hwnd,pszVerb,phProcess)	\
    ( (This)->lpVtbl -> Execute(This,hwnd,pszVerb,phProcess) ) 

#define IAttachmentExecute_SaveWithUI(This,hwnd)	\
    ( (This)->lpVtbl -> SaveWithUI(This,hwnd) ) 

#define IAttachmentExecute_ClearClientState(This)	\
    ( (This)->lpVtbl -> ClearClientState(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAttachmentExecute_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0130 */
/* [local] */ 

#endif  // _WIN32_IE_IE60SP2
#if (_WIN32_IE >= _WIN32_IE_IE60)
#include <pshpack8.h>
typedef struct tagSMDATA
    {
    DWORD dwMask;
    DWORD dwFlags;
    HMENU hmenu;
    HWND hwnd;
    UINT uId;
    UINT uIdParent;
    UINT uIdAncestor;
    IUnknown *punk;
    PIDLIST_ABSOLUTE pidlFolder;
    PUITEMID_CHILD pidlItem;
    IShellFolder *psf;
    void *pvUserData;
    } 	SMDATA;

typedef struct tagSMDATA *LPSMDATA;

// Mask
#define SMDM_SHELLFOLDER               0x00000001  // This is for an item in the band
#define SMDM_HMENU                     0x00000002  // This is for the Band itself
#define SMDM_TOOLBAR                   0x00000004  // Plain toolbar, not associated with a shell folder or hmenu
// Flags (bitmask)
typedef struct tagSMINFO
    {
    DWORD dwMask;
    DWORD dwType;
    DWORD dwFlags;
    int iIcon;
    } 	SMINFO;

typedef struct tagSMINFO *PSMINFO;

typedef struct tagSHCSCHANGENOTIFYSTRUCT
    {
    LONG lEvent;
    PCIDLIST_ABSOLUTE pidl1;
    PCIDLIST_ABSOLUTE pidl2;
    } 	SMCSHCHANGENOTIFYSTRUCT;

typedef struct tagSHCSCHANGENOTIFYSTRUCT *PSMCSHCHANGENOTIFYSTRUCT;

#include <poppack.h>

enum tagSMINFOMASK
    {	SMIM_TYPE	= 0x1,
	SMIM_FLAGS	= 0x2,
	SMIM_ICON	= 0x4
    } ;

enum tagSMINFOTYPE
    {	SMIT_SEPARATOR	= 0x1,
	SMIT_STRING	= 0x2
    } ;

enum tagSMINFOFLAGS
    {	SMIF_ICON	= 0x1,
	SMIF_ACCELERATOR	= 0x2,
	SMIF_DROPTARGET	= 0x4,
	SMIF_SUBMENU	= 0x8,
	SMIF_CHECKED	= 0x20,
	SMIF_DROPCASCADE	= 0x40,
	SMIF_HIDDEN	= 0x80,
	SMIF_DISABLED	= 0x100,
	SMIF_TRACKPOPUP	= 0x200,
	SMIF_DEMOTED	= 0x400,
	SMIF_ALTSTATE	= 0x800,
	SMIF_DRAGNDROP	= 0x1000,
	SMIF_NEW	= 0x2000
    } ;
#define SMC_INITMENU            0x00000001  // The callback is called to init a menuband
#define SMC_CREATE              0x00000002
#define SMC_EXITMENU            0x00000003  // The callback is called when menu is collapsing
#define SMC_GETINFO             0x00000005  // The callback is called to return DWORD values
#define SMC_GETSFINFO           0x00000006  // The callback is called to return DWORD values
#define SMC_GETOBJECT           0x00000007  // The callback is called to get some object
#define SMC_GETSFOBJECT         0x00000008  // The callback is called to get some object
#define SMC_SFEXEC              0x00000009  // The callback is called to execute an shell folder item
#define SMC_SFSELECTITEM        0x0000000A  // The callback is called when an item is selected
#define SMC_REFRESH             0x00000010  // Menus have completely refreshed. Reset your state.
#define SMC_DEMOTE              0x00000011  // Demote an item
#define SMC_PROMOTE             0x00000012  // Promote an item, wParam = SMINV_* flag
#define SMC_DEFAULTICON         0x00000016  // Returns Default icon location in wParam, index in lParam
#define SMC_NEWITEM             0x00000017  // Notifies item is not in the order stream.
#define SMC_CHEVRONEXPAND       0x00000019  // Notifies of a expansion via the chevron
#define SMC_DISPLAYCHEVRONTIP   0x0000002A  // S_OK display, S_FALSE not.
#define SMC_SETSFOBJECT         0x0000002D  // Called to save the passed object
#define SMC_SHCHANGENOTIFY      0x0000002E  // Called when a Change notify is received. lParam points to SMCSHCHANGENOTIFYSTRUCT
#define SMC_CHEVRONGETTIP       0x0000002F  // Called to get the chevron tip text. wParam = Tip title, Lparam = TipText Both MAX_PATH
#define SMC_SFDDRESTRICTED      0x00000030  // Called requesting if it's ok to drop. wParam = IDropTarget.
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SMC_SFEXEC_MIDDLE       0x00000031  // Same as SFEXEC, but the middle mouse button caused the exec.
#define SMC_GETAUTOEXPANDSTATE  0x00000041  // callback returns the default autoexpand state lParam = LPDWORD to recieve flags
#define SMC_AUTOEXPANDCHANGE    0x00000042  // Notify that the menu is expanding/contracting
#define SMC_GETCONTEXTMENUMODIFIER 0x00000043  // Used to add items to a context menu
#define SMC_GETBKCONTEXTMENU    0x00000044  // used to get a context menu to display when user right clicks on the background
#define SMC_OPEN                0x00000045  // allows client to overwrite open/explore verb action on an item
// Flags for return value from SMC_GETAUTOEXPANDSTATE and SMC_AUTOEXPANDCHANGE:
#define SMAE_EXPANDED           0x00000001  // The menu is or should start expanded
#define SMAE_CONTRACTED         0x00000002  // The menu is or should start contracted
                                            // SMAE_EXPANDED and SMAE_CONTRACTED are mutually exclusive
#define SMAE_USER               0x00000004  // Indicates that the menu expansion/contraction is a reflection
                                            // of user choice
#define SMAE_VALID              0x00000007
#endif  // _WIN32_IE_IE70


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0130_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0130_v0_0_s_ifspec;

#ifndef __IShellMenuCallback_INTERFACE_DEFINED__
#define __IShellMenuCallback_INTERFACE_DEFINED__

/* interface IShellMenuCallback */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IShellMenuCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CA300A1-9B8D-11d1-8B22-00C04FD918D0")
    IShellMenuCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CallbackSM( 
            /* [out][in] */ 
            __inout  LPSMDATA psmd,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellMenuCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellMenuCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellMenuCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellMenuCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *CallbackSM )( 
            IShellMenuCallback * This,
            /* [out][in] */ 
            __inout  LPSMDATA psmd,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam);
        
        END_INTERFACE
    } IShellMenuCallbackVtbl;

    interface IShellMenuCallback
    {
        CONST_VTBL struct IShellMenuCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellMenuCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellMenuCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellMenuCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellMenuCallback_CallbackSM(This,psmd,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> CallbackSM(This,psmd,uMsg,wParam,lParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellMenuCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0131 */
/* [local] */ 

#define SMINIT_DEFAULT              0x00000000  // No Options
#define SMINIT_RESTRICT_DRAGDROP    0x00000002  // Don't allow Drag and Drop
#define SMINIT_TOPLEVEL             0x00000004  // This is the top band.
#define SMINIT_CACHED               0x00000010
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SMINIT_AUTOEXPAND           0x00000100  // automatically expand/contract menu band
#define SMINIT_AUTOTOOLTIP          0x00000200  // regular tooltip support
#define SMINIT_DROPONCONTAINER      0x00000400  // allow drop on a container
#endif  // _WIN32_IE_IE70
#define SMINIT_VERTICAL             0x10000000  // This is a vertical menu
#define SMINIT_HORIZONTAL           0x20000000  // This is a horizontal menu    (does not inherit)
#define ANCESTORDEFAULT      (UINT)-1
#define SMSET_TOP                   0x10000000    // Bias this namespace to the top of the menu
#define SMSET_BOTTOM                0x20000000    // Bias this namespace to the bottom of the menu
#define SMSET_DONTOWN               0x00000001    // The Menuband doesn't own the non-ref counted object
#define SMINV_REFRESH        0x00000001
#define SMINV_ID             0x00000008


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0131_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0131_v0_0_s_ifspec;

#ifndef __IShellMenu_INTERFACE_DEFINED__
#define __IShellMenu_INTERFACE_DEFINED__

/* interface IShellMenu */
/* [local][unique][object][uuid] */ 


EXTERN_C const IID IID_IShellMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE1F7637-E138-11d1-8379-00C04FD918D0")
    IShellMenu : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ 
            __in  IShellMenuCallback *psmc,
            /* [in] */ 
            __in  UINT uId,
            /* [in] */ 
            __in  UINT uIdAncestor,
            /* [in] */ 
            __in  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMenuInfo( 
            /* [out] */ 
            __deref_out  IShellMenuCallback **ppsmc,
            /* [out] */ 
            __out  UINT *puId,
            /* [out] */ 
            __out  UINT *puIdAncestor,
            /* [out] */ 
            __out  DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShellFolder( 
            /* [in] */ 
            __in  IShellFolder *psf,
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder,
            /* [in] */ 
            __in  HKEY hKey,
            /* [in] */ 
            __in  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShellFolder( 
            /* [out] */ 
            __out  DWORD *pdwFlags,
            /* [out] */ 
            __deref_out  PIDLIST_ABSOLUTE *ppidl,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMenu( 
            /* [in] */ 
            __in  HMENU hmenu,
            /* [in] */ 
            __in  HWND hwnd,
            /* [in] */ 
            __in  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMenu( 
            /* [out] */ 
            __out_opt  HMENU *phmenu,
            /* [out] */ 
            __out_opt  HWND *phwnd,
            /* [out] */ 
            __out_opt  DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvalidateItem( 
            /* [in] */ 
            __in_opt  LPSMDATA psmd,
            /* [in] */ 
            __in  DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [out] */ 
            __out  LPSMDATA psmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMenuToolbar( 
            /* [in] */ 
            __in  IUnknown *punk,
            /* [in] */ 
            __in  DWORD dwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellMenu * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellMenu * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellMenu * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IShellMenu * This,
            /* [in] */ 
            __in  IShellMenuCallback *psmc,
            /* [in] */ 
            __in  UINT uId,
            /* [in] */ 
            __in  UINT uIdAncestor,
            /* [in] */ 
            __in  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetMenuInfo )( 
            IShellMenu * This,
            /* [out] */ 
            __deref_out  IShellMenuCallback **ppsmc,
            /* [out] */ 
            __out  UINT *puId,
            /* [out] */ 
            __out  UINT *puIdAncestor,
            /* [out] */ 
            __out  DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetShellFolder )( 
            IShellMenu * This,
            /* [in] */ 
            __in  IShellFolder *psf,
            /* [in] */ 
            __in  PCIDLIST_ABSOLUTE pidlFolder,
            /* [in] */ 
            __in  HKEY hKey,
            /* [in] */ 
            __in  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetShellFolder )( 
            IShellMenu * This,
            /* [out] */ 
            __out  DWORD *pdwFlags,
            /* [out] */ 
            __deref_out  PIDLIST_ABSOLUTE *ppidl,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *SetMenu )( 
            IShellMenu * This,
            /* [in] */ 
            __in  HMENU hmenu,
            /* [in] */ 
            __in  HWND hwnd,
            /* [in] */ 
            __in  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetMenu )( 
            IShellMenu * This,
            /* [out] */ 
            __out_opt  HMENU *phmenu,
            /* [out] */ 
            __out_opt  HWND *phwnd,
            /* [out] */ 
            __out_opt  DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *InvalidateItem )( 
            IShellMenu * This,
            /* [in] */ 
            __in_opt  LPSMDATA psmd,
            /* [in] */ 
            __in  DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IShellMenu * This,
            /* [out] */ 
            __out  LPSMDATA psmd);
        
        HRESULT ( STDMETHODCALLTYPE *SetMenuToolbar )( 
            IShellMenu * This,
            /* [in] */ 
            __in  IUnknown *punk,
            /* [in] */ 
            __in  DWORD dwFlags);
        
        END_INTERFACE
    } IShellMenuVtbl;

    interface IShellMenu
    {
        CONST_VTBL struct IShellMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellMenu_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellMenu_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellMenu_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellMenu_Initialize(This,psmc,uId,uIdAncestor,dwFlags)	\
    ( (This)->lpVtbl -> Initialize(This,psmc,uId,uIdAncestor,dwFlags) ) 

#define IShellMenu_GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags)	\
    ( (This)->lpVtbl -> GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags) ) 

#define IShellMenu_SetShellFolder(This,psf,pidlFolder,hKey,dwFlags)	\
    ( (This)->lpVtbl -> SetShellFolder(This,psf,pidlFolder,hKey,dwFlags) ) 

#define IShellMenu_GetShellFolder(This,pdwFlags,ppidl,riid,ppv)	\
    ( (This)->lpVtbl -> GetShellFolder(This,pdwFlags,ppidl,riid,ppv) ) 

#define IShellMenu_SetMenu(This,hmenu,hwnd,dwFlags)	\
    ( (This)->lpVtbl -> SetMenu(This,hmenu,hwnd,dwFlags) ) 

#define IShellMenu_GetMenu(This,phmenu,phwnd,pdwFlags)	\
    ( (This)->lpVtbl -> GetMenu(This,phmenu,phwnd,pdwFlags) ) 

#define IShellMenu_InvalidateItem(This,psmd,dwFlags)	\
    ( (This)->lpVtbl -> InvalidateItem(This,psmd,dwFlags) ) 

#define IShellMenu_GetState(This,psmd)	\
    ( (This)->lpVtbl -> GetState(This,psmd) ) 

#define IShellMenu_SetMenuToolbar(This,punk,dwFlags)	\
    ( (This)->lpVtbl -> SetMenuToolbar(This,punk,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellMenu_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0132 */
/* [local] */ 

#endif  // _WIN32_IE_IE60


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0132_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0132_v0_0_s_ifspec;

#ifndef __IShellRunDll_INTERFACE_DEFINED__
#define __IShellRunDll_INTERFACE_DEFINED__

/* interface IShellRunDll */
/* [local][ref][object][uuid] */ 


EXTERN_C const IID IID_IShellRunDll;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fce4bde0-4b68-4b80-8e9c-7426315a7388")
    IShellRunDll : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Run( 
            /* [string][in] */ 
            __in  LPCWSTR pszArgs) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellRunDllVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellRunDll * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellRunDll * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellRunDll * This);
        
        HRESULT ( STDMETHODCALLTYPE *Run )( 
            IShellRunDll * This,
            /* [string][in] */ 
            __in  LPCWSTR pszArgs);
        
        END_INTERFACE
    } IShellRunDllVtbl;

    interface IShellRunDll
    {
        CONST_VTBL struct IShellRunDllVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellRunDll_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellRunDll_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellRunDll_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellRunDll_Run(This,pszArgs)	\
    ( (This)->lpVtbl -> Run(This,pszArgs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellRunDll_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0133 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)
/* [v1_enum] */ 
enum tagKF_CATEGORY
    {	KF_CATEGORY_VIRTUAL	= 0x1,
	KF_CATEGORY_FIXED	= 0x2,
	KF_CATEGORY_COMMON	= 0x3,
	KF_CATEGORY_PERUSER	= 0x4
    } ;
typedef enum tagKF_CATEGORY KF_CATEGORY;

/* [v1_enum] */ 
enum tagKF_DEFINITION_FLAGS
    {	KFDF_LOCAL_REDIRECT_ONLY	= 0x2,
	KFDF_ROAMABLE	= 0x4,
	KFDF_PRECREATE	= 0x8
    } ;
typedef DWORD KF_DEFINITION_FLAGS;

/* [v1_enum] */ 
enum tagKF_REDIRECT_FLAGS
    {	KF_REDIRECT_USER_EXCLUSIVE	= 0x1,
	KF_REDIRECT_COPY_SOURCE_DACL	= 0x2,
	KF_REDIRECT_OWNER_USER	= 0x4,
	KF_REDIRECT_SET_OWNER_EXPLICIT	= 0x8,
	KF_REDIRECT_CHECK_ONLY	= 0x10,
	KF_REDIRECT_WITH_UI	= 0x20,
	KF_REDIRECT_UNPIN	= 0x40,
	KF_REDIRECT_PIN	= 0x80,
	KF_REDIRECT_COPY_CONTENTS	= 0x200,
	KF_REDIRECT_DEL_SOURCE_CONTENTS	= 0x400,
	KF_REDIRECT_EXCLUDE_ALL_KNOWN_SUBFOLDERS	= 0x800
    } ;
typedef DWORD KF_REDIRECT_FLAGS;

/* [v1_enum] */ 
enum tagKF_REDIRECTION_CAPABILITIES
    {	KF_REDIRECTION_CAPABILITIES_ALLOW_ALL	= 0xff,
	KF_REDIRECTION_CAPABILITIES_REDIRECTABLE	= 0x1,
	KF_REDIRECTION_CAPABILITIES_DENY_ALL	= 0xfff00,
	KF_REDIRECTION_CAPABILITIES_DENY_POLICY_REDIRECTED	= 0x100,
	KF_REDIRECTION_CAPABILITIES_DENY_POLICY	= 0x200,
	KF_REDIRECTION_CAPABILITIES_DENY_PERMISSIONS	= 0x400
    } ;
typedef DWORD KF_REDIRECTION_CAPABILITIES;

typedef struct tagKNOWNFOLDER_DEFINITION
    {
    KF_CATEGORY category;
    LPWSTR pszName;
    LPWSTR pszDescription;
    KNOWNFOLDERID fidParent;
    LPWSTR pszRelativePath;
    LPWSTR pszParsingName;
    LPWSTR pszTooltip;
    LPWSTR pszLocalizedName;
    LPWSTR pszIcon;
    LPWSTR pszSecurity;
    DWORD dwAttributes;
    KF_DEFINITION_FLAGS kfdFlags;
    FOLDERTYPEID ftidType;
    } 	KNOWNFOLDER_DEFINITION;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0133_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0133_v0_0_s_ifspec;

#ifndef __IKnownFolder_INTERFACE_DEFINED__
#define __IKnownFolder_INTERFACE_DEFINED__

/* interface IKnownFolder */
/* [ref][version][object][helpstring][uuid] */ 


EXTERN_C const IID IID_IKnownFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3AA7AF7E-9B36-420c-A8E3-F77D4674A488")
    IKnownFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetId( 
            /* [out] */ __RPC__out KNOWNFOLDERID *pkfid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCategory( 
            /* [out] */ __RPC__out KF_CATEGORY *pCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShellItem( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [in] */ DWORD dwFlags,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPath( 
            /* [in] */ DWORD dwFlags,
            /* [string][in] */ __RPC__in LPCWSTR pszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [in] */ DWORD dwFlags,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderType( 
            /* [out] */ __RPC__out FOLDERTYPEID *pftid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRedirectionCapabilities( 
            /* [out] */ __RPC__out KF_REDIRECTION_CAPABILITIES *pCapabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderDefinition( 
            /* [out] */ __RPC__out KNOWNFOLDER_DEFINITION *pKFD) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IKnownFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKnownFolder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKnownFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKnownFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            IKnownFolder * This,
            /* [out] */ __RPC__out KNOWNFOLDERID *pkfid);
        
        HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            IKnownFolder * This,
            /* [out] */ __RPC__out KF_CATEGORY *pCategory);
        
        HRESULT ( STDMETHODCALLTYPE *GetShellItem )( 
            IKnownFolder * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            IKnownFolder * This,
            /* [in] */ DWORD dwFlags,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszPath);
        
        HRESULT ( STDMETHODCALLTYPE *SetPath )( 
            IKnownFolder * This,
            /* [in] */ DWORD dwFlags,
            /* [string][in] */ __RPC__in LPCWSTR pszPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            IKnownFolder * This,
            /* [in] */ DWORD dwFlags,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderType )( 
            IKnownFolder * This,
            /* [out] */ __RPC__out FOLDERTYPEID *pftid);
        
        HRESULT ( STDMETHODCALLTYPE *GetRedirectionCapabilities )( 
            IKnownFolder * This,
            /* [out] */ __RPC__out KF_REDIRECTION_CAPABILITIES *pCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderDefinition )( 
            IKnownFolder * This,
            /* [out] */ __RPC__out KNOWNFOLDER_DEFINITION *pKFD);
        
        END_INTERFACE
    } IKnownFolderVtbl;

    interface IKnownFolder
    {
        CONST_VTBL struct IKnownFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKnownFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKnownFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKnownFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKnownFolder_GetId(This,pkfid)	\
    ( (This)->lpVtbl -> GetId(This,pkfid) ) 

#define IKnownFolder_GetCategory(This,pCategory)	\
    ( (This)->lpVtbl -> GetCategory(This,pCategory) ) 

#define IKnownFolder_GetShellItem(This,dwFlags,riid,ppv)	\
    ( (This)->lpVtbl -> GetShellItem(This,dwFlags,riid,ppv) ) 

#define IKnownFolder_GetPath(This,dwFlags,ppszPath)	\
    ( (This)->lpVtbl -> GetPath(This,dwFlags,ppszPath) ) 

#define IKnownFolder_SetPath(This,dwFlags,pszPath)	\
    ( (This)->lpVtbl -> SetPath(This,dwFlags,pszPath) ) 

#define IKnownFolder_GetIDList(This,dwFlags,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,dwFlags,ppidl) ) 

#define IKnownFolder_GetFolderType(This,pftid)	\
    ( (This)->lpVtbl -> GetFolderType(This,pftid) ) 

#define IKnownFolder_GetRedirectionCapabilities(This,pCapabilities)	\
    ( (This)->lpVtbl -> GetRedirectionCapabilities(This,pCapabilities) ) 

#define IKnownFolder_GetFolderDefinition(This,pKFD)	\
    ( (This)->lpVtbl -> GetFolderDefinition(This,pKFD) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKnownFolder_INTERFACE_DEFINED__ */


#ifndef __IKnownFolderManager_INTERFACE_DEFINED__
#define __IKnownFolderManager_INTERFACE_DEFINED__

/* interface IKnownFolderManager */
/* [ref][version][object][helpstring][uuid] */ 

typedef /* [v1_enum] */ 
enum tagFFFP_MODE
    {	FFFP_EXACTMATCH	= 0,
	FFFP_NEARESTPARENTMATCH	= ( FFFP_EXACTMATCH + 1 ) 
    } 	FFFP_MODE;


EXTERN_C const IID IID_IKnownFolderManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8BE2D872-86AA-4d47-B776-32CCA40C7018")
    IKnownFolderManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FolderIdFromCsidl( 
            /* [in] */ int nCsidl,
            /* [out] */ __RPC__out KNOWNFOLDERID *pfid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FolderIdToCsidl( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [out] */ __RPC__out int *pnCsidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderIds( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) KNOWNFOLDERID **ppKFId,
            /* [out][in] */ __RPC__inout UINT *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderByName( 
            /* [string][in] */ __RPC__in LPCWSTR pszCanonicalName,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterFolder( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [in] */ __RPC__in const KNOWNFOLDER_DEFINITION *pKFD) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterFolder( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFolderFromPath( 
            /* [string][in] */ __RPC__in LPCWSTR pszPath,
            /* [in] */ FFFP_MODE mode,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindFolderFromIDList( 
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Redirect( 
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ KF_REDIRECT_FLAGS flags,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTargetPath,
            /* [in] */ UINT cFolders,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cFolders) const KNOWNFOLDERID *pExclusion,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszError) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IKnownFolderManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKnownFolderManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKnownFolderManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKnownFolderManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *FolderIdFromCsidl )( 
            IKnownFolderManager * This,
            /* [in] */ int nCsidl,
            /* [out] */ __RPC__out KNOWNFOLDERID *pfid);
        
        HRESULT ( STDMETHODCALLTYPE *FolderIdToCsidl )( 
            IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [out] */ __RPC__out int *pnCsidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderIds )( 
            IKnownFolderManager * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) KNOWNFOLDERID **ppKFId,
            /* [out][in] */ __RPC__inout UINT *pCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderByName )( 
            IKnownFolderManager * This,
            /* [string][in] */ __RPC__in LPCWSTR pszCanonicalName,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterFolder )( 
            IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [in] */ __RPC__in const KNOWNFOLDER_DEFINITION *pKFD);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterFolder )( 
            IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid);
        
        HRESULT ( STDMETHODCALLTYPE *FindFolderFromPath )( 
            IKnownFolderManager * This,
            /* [string][in] */ __RPC__in LPCWSTR pszPath,
            /* [in] */ FFFP_MODE mode,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf);
        
        HRESULT ( STDMETHODCALLTYPE *FindFolderFromIDList )( 
            IKnownFolderManager * This,
            /* [in] */ __RPC__in PCIDLIST_ABSOLUTE pidl,
            /* [out] */ __RPC__deref_out_opt IKnownFolder **ppkf);
        
        HRESULT ( STDMETHODCALLTYPE *Redirect )( 
            IKnownFolderManager * This,
            /* [in] */ __RPC__in REFKNOWNFOLDERID rfid,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ KF_REDIRECT_FLAGS flags,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszTargetPath,
            /* [in] */ UINT cFolders,
            /* [unique][size_is][in] */ __RPC__in_ecount_full_opt(cFolders) const KNOWNFOLDERID *pExclusion,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszError);
        
        END_INTERFACE
    } IKnownFolderManagerVtbl;

    interface IKnownFolderManager
    {
        CONST_VTBL struct IKnownFolderManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKnownFolderManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKnownFolderManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKnownFolderManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKnownFolderManager_FolderIdFromCsidl(This,nCsidl,pfid)	\
    ( (This)->lpVtbl -> FolderIdFromCsidl(This,nCsidl,pfid) ) 

#define IKnownFolderManager_FolderIdToCsidl(This,rfid,pnCsidl)	\
    ( (This)->lpVtbl -> FolderIdToCsidl(This,rfid,pnCsidl) ) 

#define IKnownFolderManager_GetFolderIds(This,ppKFId,pCount)	\
    ( (This)->lpVtbl -> GetFolderIds(This,ppKFId,pCount) ) 

#define IKnownFolderManager_GetFolder(This,rfid,ppkf)	\
    ( (This)->lpVtbl -> GetFolder(This,rfid,ppkf) ) 

#define IKnownFolderManager_GetFolderByName(This,pszCanonicalName,ppkf)	\
    ( (This)->lpVtbl -> GetFolderByName(This,pszCanonicalName,ppkf) ) 

#define IKnownFolderManager_RegisterFolder(This,rfid,pKFD)	\
    ( (This)->lpVtbl -> RegisterFolder(This,rfid,pKFD) ) 

#define IKnownFolderManager_UnregisterFolder(This,rfid)	\
    ( (This)->lpVtbl -> UnregisterFolder(This,rfid) ) 

#define IKnownFolderManager_FindFolderFromPath(This,pszPath,mode,ppkf)	\
    ( (This)->lpVtbl -> FindFolderFromPath(This,pszPath,mode,ppkf) ) 

#define IKnownFolderManager_FindFolderFromIDList(This,pidl,ppkf)	\
    ( (This)->lpVtbl -> FindFolderFromIDList(This,pidl,ppkf) ) 

#define IKnownFolderManager_Redirect(This,rfid,hwnd,flags,pszTargetPath,cFolders,pExclusion,ppszError)	\
    ( (This)->lpVtbl -> Redirect(This,rfid,hwnd,flags,pszTargetPath,cFolders,pExclusion,ppszError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKnownFolderManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0135 */
/* [local] */ 

_inline void FreeKnownFolderDefinitionFields(KNOWNFOLDER_DEFINITION *pKFD)
{
    CoTaskMemFree(pKFD->pszName);
    CoTaskMemFree(pKFD->pszDescription);
    CoTaskMemFree(pKFD->pszRelativePath);
    CoTaskMemFree(pKFD->pszParsingName);
    CoTaskMemFree(pKFD->pszTooltip);
    CoTaskMemFree(pKFD->pszLocalizedName);
    CoTaskMemFree(pKFD->pszIcon);
    CoTaskMemFree(pKFD->pszSecurity);
}
typedef /* [v1_enum] */ 
enum _tagSHARE_ROLE
    {	SHARE_ROLE_INVALID	= -1,
	SHARE_ROLE_READER	= 0,
	SHARE_ROLE_CONTRIBUTOR	= 1,
	SHARE_ROLE_CO_OWNER	= 2,
	SHARE_ROLE_OWNER	= 3,
	SHARE_ROLE_CUSTOM	= 4,
	SHARE_ROLE_MIXED	= 5
    } 	SHARE_ROLE;

typedef /* [v1_enum] */ 
enum _tagDEF_SHARE_ID
    {	DEFSHAREID_USERS	= 1,
	DEFSHAREID_PUBLIC	= 2
    } 	DEF_SHARE_ID;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0135_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0135_v0_0_s_ifspec;

#ifndef __ISharingConfigurationManager_INTERFACE_DEFINED__
#define __ISharingConfigurationManager_INTERFACE_DEFINED__

/* interface ISharingConfigurationManager */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISharingConfigurationManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4CD448A-9C86-4466-9201-2E62105B87AE")
    ISharingConfigurationManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateShare( 
            /* [in] */ DEF_SHARE_ID dsid,
            /* [in] */ SHARE_ROLE role) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteShare( 
            /* [in] */ DEF_SHARE_ID dsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShareExists( 
            /* [in] */ DEF_SHARE_ID dsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSharePermissions( 
            /* [in] */ DEF_SHARE_ID dsid,
            /* [out] */ __RPC__out SHARE_ROLE *pRole) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SharePrinters( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopSharingPrinters( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ArePrintersShared( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISharingConfigurationManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISharingConfigurationManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISharingConfigurationManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISharingConfigurationManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateShare )( 
            ISharingConfigurationManager * This,
            /* [in] */ DEF_SHARE_ID dsid,
            /* [in] */ SHARE_ROLE role);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteShare )( 
            ISharingConfigurationManager * This,
            /* [in] */ DEF_SHARE_ID dsid);
        
        HRESULT ( STDMETHODCALLTYPE *ShareExists )( 
            ISharingConfigurationManager * This,
            /* [in] */ DEF_SHARE_ID dsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetSharePermissions )( 
            ISharingConfigurationManager * This,
            /* [in] */ DEF_SHARE_ID dsid,
            /* [out] */ __RPC__out SHARE_ROLE *pRole);
        
        HRESULT ( STDMETHODCALLTYPE *SharePrinters )( 
            ISharingConfigurationManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *StopSharingPrinters )( 
            ISharingConfigurationManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *ArePrintersShared )( 
            ISharingConfigurationManager * This);
        
        END_INTERFACE
    } ISharingConfigurationManagerVtbl;

    interface ISharingConfigurationManager
    {
        CONST_VTBL struct ISharingConfigurationManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISharingConfigurationManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISharingConfigurationManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISharingConfigurationManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISharingConfigurationManager_CreateShare(This,dsid,role)	\
    ( (This)->lpVtbl -> CreateShare(This,dsid,role) ) 

#define ISharingConfigurationManager_DeleteShare(This,dsid)	\
    ( (This)->lpVtbl -> DeleteShare(This,dsid) ) 

#define ISharingConfigurationManager_ShareExists(This,dsid)	\
    ( (This)->lpVtbl -> ShareExists(This,dsid) ) 

#define ISharingConfigurationManager_GetSharePermissions(This,dsid,pRole)	\
    ( (This)->lpVtbl -> GetSharePermissions(This,dsid,pRole) ) 

#define ISharingConfigurationManager_SharePrinters(This)	\
    ( (This)->lpVtbl -> SharePrinters(This) ) 

#define ISharingConfigurationManager_StopSharingPrinters(This)	\
    ( (This)->lpVtbl -> StopSharingPrinters(This) ) 

#define ISharingConfigurationManager_ArePrintersShared(This)	\
    ( (This)->lpVtbl -> ArePrintersShared(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISharingConfigurationManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0136 */
/* [local] */ 

#endif  // NTDDI_LONGHORN


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0136_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0136_v0_0_s_ifspec;

#ifndef __IPreviousVersionsInfo_INTERFACE_DEFINED__
#define __IPreviousVersionsInfo_INTERFACE_DEFINED__

/* interface IPreviousVersionsInfo */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IPreviousVersionsInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("76e54780-ad74-48e3-a695-3ba9a0aff10d")
    IPreviousVersionsInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AreSnapshotsAvailable( 
            /* [string][in] */ 
            __in  LPCWSTR pszPath,
            /* [in] */ 
            __in  BOOL fOkToBeSlow,
            /* [out] */ 
            __out  BOOL *pfAvailable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPreviousVersionsInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPreviousVersionsInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPreviousVersionsInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPreviousVersionsInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *AreSnapshotsAvailable )( 
            IPreviousVersionsInfo * This,
            /* [string][in] */ 
            __in  LPCWSTR pszPath,
            /* [in] */ 
            __in  BOOL fOkToBeSlow,
            /* [out] */ 
            __out  BOOL *pfAvailable);
        
        END_INTERFACE
    } IPreviousVersionsInfoVtbl;

    interface IPreviousVersionsInfo
    {
        CONST_VTBL struct IPreviousVersionsInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreviousVersionsInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreviousVersionsInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreviousVersionsInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPreviousVersionsInfo_AreSnapshotsAvailable(This,pszPath,fOkToBeSlow,pfAvailable)	\
    ( (This)->lpVtbl -> AreSnapshotsAvailable(This,pszPath,fOkToBeSlow,pfAvailable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreviousVersionsInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0137 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0137_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0137_v0_0_s_ifspec;

#ifndef __IRelatedItem_INTERFACE_DEFINED__
#define __IRelatedItem_INTERFACE_DEFINED__

/* interface IRelatedItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IRelatedItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a73ce67a-8ab1-44f1-8d43-d2fcbf6b1cd0")
    IRelatedItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetItemIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRelatedItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRelatedItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRelatedItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRelatedItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            IRelatedItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IRelatedItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IRelatedItemVtbl;

    interface IRelatedItem
    {
        CONST_VTBL struct IRelatedItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRelatedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRelatedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRelatedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRelatedItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IRelatedItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRelatedItem_INTERFACE_DEFINED__ */


#ifndef __IIdentityName_INTERFACE_DEFINED__
#define __IIdentityName_INTERFACE_DEFINED__

/* interface IIdentityName */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IIdentityName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7d903fca-d6f9-4810-8332-946c0177e247")
    IIdentityName : public IRelatedItem
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IIdentityNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIdentityName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIdentityName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIdentityName * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            IIdentityName * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IIdentityName * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IIdentityNameVtbl;

    interface IIdentityName
    {
        CONST_VTBL struct IIdentityNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIdentityName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIdentityName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIdentityName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIdentityName_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IIdentityName_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIdentityName_INTERFACE_DEFINED__ */


#ifndef __ICurrentItem_INTERFACE_DEFINED__
#define __ICurrentItem_INTERFACE_DEFINED__

/* interface ICurrentItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ICurrentItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("240a7174-d653-4a1d-a6d3-d4943cfbfe3d")
    ICurrentItem : public IRelatedItem
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ICurrentItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICurrentItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICurrentItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICurrentItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            ICurrentItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            ICurrentItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } ICurrentItemVtbl;

    interface ICurrentItem
    {
        CONST_VTBL struct ICurrentItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICurrentItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICurrentItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICurrentItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICurrentItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define ICurrentItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICurrentItem_INTERFACE_DEFINED__ */


#ifndef __ITransferMediumItem_INTERFACE_DEFINED__
#define __ITransferMediumItem_INTERFACE_DEFINED__

/* interface ITransferMediumItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITransferMediumItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77f295d5-2d6f-4e19-b8ae-322f3e721ab5")
    ITransferMediumItem : public IRelatedItem
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITransferMediumItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransferMediumItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransferMediumItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransferMediumItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            ITransferMediumItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            ITransferMediumItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } ITransferMediumItemVtbl;

    interface ITransferMediumItem
    {
        CONST_VTBL struct ITransferMediumItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransferMediumItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransferMediumItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransferMediumItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransferMediumItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define ITransferMediumItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransferMediumItem_INTERFACE_DEFINED__ */


#ifndef __IUseToBrowseItem_INTERFACE_DEFINED__
#define __IUseToBrowseItem_INTERFACE_DEFINED__

/* interface IUseToBrowseItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IUseToBrowseItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05edda5c-98a3-4717-8adb-c5e7da991eb1")
    IUseToBrowseItem : public IRelatedItem
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IUseToBrowseItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUseToBrowseItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUseToBrowseItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUseToBrowseItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            IUseToBrowseItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IUseToBrowseItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IUseToBrowseItemVtbl;

    interface IUseToBrowseItem
    {
        CONST_VTBL struct IUseToBrowseItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUseToBrowseItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUseToBrowseItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUseToBrowseItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUseToBrowseItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IUseToBrowseItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUseToBrowseItem_INTERFACE_DEFINED__ */


#ifndef __IDisplayItem_INTERFACE_DEFINED__
#define __IDisplayItem_INTERFACE_DEFINED__

/* interface IDisplayItem */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IDisplayItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c6fd5997-9f6b-4888-8703-94e80e8cde3f")
    IDisplayItem : public IRelatedItem
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IDisplayItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDisplayItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDisplayItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDisplayItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )( 
            IDisplayItem * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IDisplayItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        END_INTERFACE
    } IDisplayItemVtbl;

    interface IDisplayItem
    {
        CONST_VTBL struct IDisplayItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDisplayItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDisplayItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDisplayItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDisplayItem_GetItemIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) ) 

#define IDisplayItem_GetItem(This,ppsi)	\
    ( (This)->lpVtbl -> GetItem(This,ppsi) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDisplayItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0143 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0143_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0143_v0_0_s_ifspec;

#ifndef __IDestinationStreamFactory_INTERFACE_DEFINED__
#define __IDestinationStreamFactory_INTERFACE_DEFINED__

/* interface IDestinationStreamFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IDestinationStreamFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8a87781b-39a7-4a1f-aab3-a39b9c34a7d9")
    IDestinationStreamFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDestinationStream( 
            /* [out] */ __RPC__deref_out_opt IStream **ppstm) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDestinationStreamFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDestinationStreamFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDestinationStreamFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDestinationStreamFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDestinationStream )( 
            IDestinationStreamFactory * This,
            /* [out] */ __RPC__deref_out_opt IStream **ppstm);
        
        END_INTERFACE
    } IDestinationStreamFactoryVtbl;

    interface IDestinationStreamFactory
    {
        CONST_VTBL struct IDestinationStreamFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDestinationStreamFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDestinationStreamFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDestinationStreamFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDestinationStreamFactory_GetDestinationStream(This,ppstm)	\
    ( (This)->lpVtbl -> GetDestinationStream(This,ppstm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDestinationStreamFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0144 */
/* [local] */ 

#if (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0144_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0144_v0_0_s_ifspec;

#ifndef __IShellItemFilter_INTERFACE_DEFINED__
#define __IShellItemFilter_INTERFACE_DEFINED__

/* interface IShellItemFilter */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IShellItemFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2659B475-EEB8-48b7-8F07-B378810F48CF")
    IShellItemFilter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IncludeItem( 
            /* [in] */ __RPC__in_opt IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumFlagsForItem( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out SHCONTF *pgrfFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellItemFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellItemFilter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellItemFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellItemFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeItem )( 
            IShellItemFilter * This,
            /* [in] */ __RPC__in_opt IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumFlagsForItem )( 
            IShellItemFilter * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [out] */ __RPC__out SHCONTF *pgrfFlags);
        
        END_INTERFACE
    } IShellItemFilterVtbl;

    interface IShellItemFilter
    {
        CONST_VTBL struct IShellItemFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemFilter_IncludeItem(This,psi)	\
    ( (This)->lpVtbl -> IncludeItem(This,psi) ) 

#define IShellItemFilter_GetEnumFlagsForItem(This,psi,pgrfFlags)	\
    ( (This)->lpVtbl -> GetEnumFlagsForItem(This,psi,pgrfFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemFilter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0145 */
/* [local] */ 

#endif  // (_WIN32_IE >= _WIN32_IE_IE70)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0145_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0145_v0_0_s_ifspec;

#ifndef __INameSpaceTreeControl_INTERFACE_DEFINED__
#define __INameSpaceTreeControl_INTERFACE_DEFINED__

/* interface INameSpaceTreeControl */
/* [local][uuid][object] */ 

typedef DWORD NSTCSTYLE;

/* [v1_enum] */ 
enum tagNSTCSTYLE
    {	NSTCS_HASEXPANDOS	= 0x1,
	NSTCS_HASLINES	= 0x2,
	NSTCS_SINGLECLICKEXPAND	= 0x4,
	NSTCS_FULLROWSELECT	= 0x8,
	NSTCS_SPRINGEXPAND	= 0x10,
	NSTCS_HORIZONTALSCROLL	= 0x20,
	NSTCS_ROOTHASEXPANDO	= 0x40,
	NSTCS_SHOWSELECTIONALWAYS	= 0x80,
	NSTCS_NOINFOTIP	= 0x200,
	NSTCS_EVENHEIGHT	= 0x400,
	NSTCS_NOREPLACEOPEN	= 0x800,
	NSTCS_DISABLEDRAGDROP	= 0x1000,
	NSTCS_NOORDERSTREAM	= 0x2000,
	NSTCS_RICHTOOLTIP	= 0x4000,
	NSTCS_BORDER	= 0x8000,
	NSTCS_NOEDITLABELS	= 0x10000,
	NSTCS_TABSTOP	= 0x20000,
	NSTCS_FAVORITESMODE	= 0x80000,
	NSTCS_AUTOHSCROLL	= 0x100000,
	NSTCS_FADEINOUTEXPANDOS	= 0x200000,
	NSTCS_EMPTYTEXT	= 0x400000,
	NSTCS_CHECKBOXES	= 0x800000,
	NSTCS_PARTIALCHECKBOXES	= 0x1000000,
	NSTCS_EXCLUSIONCHECKBOXES	= 0x2000000,
	NSTCS_DIMMEDCHECKBOXES	= 0x4000000,
	NSTCS_NOINDENTCHECKS	= 0x8000000,
	NSTCS_ALLOWJUNCTIONS	= 0x10000000,
	NSTCS_SHOWTABSBUTTON	= 0x20000000,
	NSTCS_SHOWDELETEBUTTON	= 0x40000000,
	NSTCS_SHOWREFRESHBUTTON	= 0x80000000
    } ;
typedef DWORD NSTCROOTSTYLE;

/* [v1_enum] */ 
enum tagNSTCROOTSTYLE
    {	NSTCRS_VISIBLE	= 0,
	NSTCRS_HIDDEN	= 0x1,
	NSTCRS_EXPANDED	= 0x2
    } ;
typedef DWORD NSTCITEMSTATE;

/* [v1_enum] */ 
enum tagNSTCITEMSTATE
    {	NSTCIS_NONE	= 0,
	NSTCIS_SELECTED	= 0x1,
	NSTCIS_EXPANDED	= 0x2,
	NSTCIS_BOLD	= 0x4,
	NSTCIS_DISABLED	= 0x8
    } ;
typedef DWORD NSTCGNI;

/* [v1_enum] */ 
enum tagNSTCGNI
    {	NSTCGNI_NEXT	= 0,
	NSTCGNI_NEXTVISIBLE	= 0x1,
	NSTCGNI_PREV	= 0x2,
	NSTCGNI_PREVVISIBLE	= 0x3,
	NSTCGNI_PARENT	= 0x4,
	NSTCGNI_CHILD	= 0x5,
	NSTCGNI_FIRSTVISIBLE	= 0x6,
	NSTCGNI_LASTVISIBLE	= 0x7
    } ;

EXTERN_C const IID IID_INameSpaceTreeControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("028212A3-B627-47e9-8856-C14265554E4F")
    INameSpaceTreeControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ 
            __in  HWND hwndParent,
            /* [unique][in] */ 
            __in_opt  RECT *prc,
            /* [in] */ 
            __in  NSTCSTYLE nsctsFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TreeAdvise( 
            /* [in] */ 
            __in  IUnknown *punk,
            /* [out] */ 
            __out  DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TreeUnadvise( 
            /* [in] */ 
            __in  DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendRoot( 
            /* [in] */ 
            __in  IShellItem *psiRoot,
            /* [in] */ 
            __in  SHCONTF grfEnumFlags,
            /* [in] */ 
            __in  NSTCROOTSTYLE grfRootStyle,
            /* [unique][in] */ 
            __in_opt  IShellItemFilter *pif) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertRoot( 
            /* [in] */ 
            __in  int iIndex,
            /* [in] */ 
            __in  IShellItem *psiRoot,
            /* [in] */ 
            __in  SHCONTF grfEnumFlags,
            /* [in] */ 
            __in  NSTCROOTSTYLE grfRootStyle,
            /* [unique][in] */ 
            __in_opt  IShellItemFilter *pif) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveRoot( 
            /* [in] */ 
            __in  IShellItem *psiRoot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllRoots( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRootItems( 
            /* [out] */ 
            __deref_out  IShellItemArray **ppsiaRootItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetItemState( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisMask,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemState( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisMask,
            /* [out] */ 
            __out  NSTCITEMSTATE *pnstcisFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedItems( 
            /* [out] */ 
            __deref_out  IShellItemArray **psiaItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemCustomState( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __out  int *piStateNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetItemCustomState( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  int iStateNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnsureItemVisible( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTheme( 
            /* [string][in] */ 
            __in  LPCWSTR pszTheme) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextItem( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCGNI nstcgi,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HitTest( 
            /* [in] */ 
            __in  POINT *ppt,
            /* [out] */ 
            __deref_out  IShellItem **ppsiOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemRect( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __out  RECT *prect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CollapseAll( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INameSpaceTreeControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INameSpaceTreeControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INameSpaceTreeControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INameSpaceTreeControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  HWND hwndParent,
            /* [unique][in] */ 
            __in_opt  RECT *prc,
            /* [in] */ 
            __in  NSTCSTYLE nsctsFlags);
        
        HRESULT ( STDMETHODCALLTYPE *TreeAdvise )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IUnknown *punk,
            /* [out] */ 
            __out  DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *TreeUnadvise )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *AppendRoot )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psiRoot,
            /* [in] */ 
            __in  SHCONTF grfEnumFlags,
            /* [in] */ 
            __in  NSTCROOTSTYLE grfRootStyle,
            /* [unique][in] */ 
            __in_opt  IShellItemFilter *pif);
        
        HRESULT ( STDMETHODCALLTYPE *InsertRoot )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  int iIndex,
            /* [in] */ 
            __in  IShellItem *psiRoot,
            /* [in] */ 
            __in  SHCONTF grfEnumFlags,
            /* [in] */ 
            __in  NSTCROOTSTYLE grfRootStyle,
            /* [unique][in] */ 
            __in_opt  IShellItemFilter *pif);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveRoot )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psiRoot);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllRoots )( 
            INameSpaceTreeControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRootItems )( 
            INameSpaceTreeControl * This,
            /* [out] */ 
            __deref_out  IShellItemArray **ppsiaRootItems);
        
        HRESULT ( STDMETHODCALLTYPE *SetItemState )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisMask,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemState )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisMask,
            /* [out] */ 
            __out  NSTCITEMSTATE *pnstcisFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItems )( 
            INameSpaceTreeControl * This,
            /* [out] */ 
            __deref_out  IShellItemArray **psiaItems);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemCustomState )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __out  int *piStateNumber);
        
        HRESULT ( STDMETHODCALLTYPE *SetItemCustomState )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  int iStateNumber);
        
        HRESULT ( STDMETHODCALLTYPE *EnsureItemVisible )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *SetTheme )( 
            INameSpaceTreeControl * This,
            /* [string][in] */ 
            __in  LPCWSTR pszTheme);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextItem )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCGNI nstcgi,
            /* [out] */ 
            __deref_out  IShellItem **ppsiNext);
        
        HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  POINT *ppt,
            /* [out] */ 
            __deref_out  IShellItem **ppsiOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemRect )( 
            INameSpaceTreeControl * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __out  RECT *prect);
        
        HRESULT ( STDMETHODCALLTYPE *CollapseAll )( 
            INameSpaceTreeControl * This);
        
        END_INTERFACE
    } INameSpaceTreeControlVtbl;

    interface INameSpaceTreeControl
    {
        CONST_VTBL struct INameSpaceTreeControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INameSpaceTreeControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INameSpaceTreeControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INameSpaceTreeControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INameSpaceTreeControl_Initialize(This,hwndParent,prc,nsctsFlags)	\
    ( (This)->lpVtbl -> Initialize(This,hwndParent,prc,nsctsFlags) ) 

#define INameSpaceTreeControl_TreeAdvise(This,punk,pdwCookie)	\
    ( (This)->lpVtbl -> TreeAdvise(This,punk,pdwCookie) ) 

#define INameSpaceTreeControl_TreeUnadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> TreeUnadvise(This,dwCookie) ) 

#define INameSpaceTreeControl_AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif)	\
    ( (This)->lpVtbl -> AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif) ) 

#define INameSpaceTreeControl_InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif)	\
    ( (This)->lpVtbl -> InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif) ) 

#define INameSpaceTreeControl_RemoveRoot(This,psiRoot)	\
    ( (This)->lpVtbl -> RemoveRoot(This,psiRoot) ) 

#define INameSpaceTreeControl_RemoveAllRoots(This)	\
    ( (This)->lpVtbl -> RemoveAllRoots(This) ) 

#define INameSpaceTreeControl_GetRootItems(This,ppsiaRootItems)	\
    ( (This)->lpVtbl -> GetRootItems(This,ppsiaRootItems) ) 

#define INameSpaceTreeControl_SetItemState(This,psi,nstcisMask,nstcisFlags)	\
    ( (This)->lpVtbl -> SetItemState(This,psi,nstcisMask,nstcisFlags) ) 

#define INameSpaceTreeControl_GetItemState(This,psi,nstcisMask,pnstcisFlags)	\
    ( (This)->lpVtbl -> GetItemState(This,psi,nstcisMask,pnstcisFlags) ) 

#define INameSpaceTreeControl_GetSelectedItems(This,psiaItems)	\
    ( (This)->lpVtbl -> GetSelectedItems(This,psiaItems) ) 

#define INameSpaceTreeControl_GetItemCustomState(This,psi,piStateNumber)	\
    ( (This)->lpVtbl -> GetItemCustomState(This,psi,piStateNumber) ) 

#define INameSpaceTreeControl_SetItemCustomState(This,psi,iStateNumber)	\
    ( (This)->lpVtbl -> SetItemCustomState(This,psi,iStateNumber) ) 

#define INameSpaceTreeControl_EnsureItemVisible(This,psi)	\
    ( (This)->lpVtbl -> EnsureItemVisible(This,psi) ) 

#define INameSpaceTreeControl_SetTheme(This,pszTheme)	\
    ( (This)->lpVtbl -> SetTheme(This,pszTheme) ) 

#define INameSpaceTreeControl_GetNextItem(This,psi,nstcgi,ppsiNext)	\
    ( (This)->lpVtbl -> GetNextItem(This,psi,nstcgi,ppsiNext) ) 

#define INameSpaceTreeControl_HitTest(This,ppt,ppsiOut)	\
    ( (This)->lpVtbl -> HitTest(This,ppt,ppsiOut) ) 

#define INameSpaceTreeControl_GetItemRect(This,psi,prect)	\
    ( (This)->lpVtbl -> GetItemRect(This,psi,prect) ) 

#define INameSpaceTreeControl_CollapseAll(This)	\
    ( (This)->lpVtbl -> CollapseAll(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INameSpaceTreeControl_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0146 */
/* [local] */ 

#define SID_SNavigationPane IID_INameSpaceTreeControl   // nearest service that you can proffer to
#define ISLBUTTON(x) (NSTCECT_LBUTTON == ((x) & NSTCECT_BUTTON))
#define ISMBUTTON(x) (NSTCECT_MBUTTON == ((x) & NSTCECT_BUTTON))
#define ISRBUTTON(x) (NSTCECT_RBUTTON == ((x) & NSTCECT_BUTTON))
#define ISDBLCLICK(x) (NSTCECT_DBLCLICK == ((x) & NSTCECT_DBLCLICK))


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0146_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0146_v0_0_s_ifspec;

#ifndef __INameSpaceTreeControlEvents_INTERFACE_DEFINED__
#define __INameSpaceTreeControlEvents_INTERFACE_DEFINED__

/* interface INameSpaceTreeControlEvents */
/* [local][uuid][object] */ 

typedef DWORD NSTCEHITTEST;

/* [v1_enum] */ 
enum tagNSTCEHITTEST
    {	NSTCEHT_NOWHERE	= 0x1,
	NSTCEHT_ONITEMICON	= 0x2,
	NSTCEHT_ONITEMLABEL	= 0x4,
	NSTCEHT_ONITEMINDENT	= 0x8,
	NSTCEHT_ONITEMBUTTON	= 0x10,
	NSTCEHT_ONITEMRIGHT	= 0x20,
	NSTCEHT_ONITEMSTATEICON	= 0x40,
	NSTCEHT_ONITEM	= 0x46,
	NSTCEHT_ONITEMTABBUTTON	= 0x1000
    } ;
typedef DWORD NSTCECLICKTYPE;

/* [v1_enum] */ 
enum tagNSTCECLICKTYPE
    {	NSTCECT_LBUTTON	= 0x1,
	NSTCECT_MBUTTON	= 0x2,
	NSTCECT_RBUTTON	= 0x3,
	NSTCECT_BUTTON	= 0x3,
	NSTCECT_DBLCLICK	= 0x4
    } ;

EXTERN_C const IID IID_INameSpaceTreeControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93D77985-B3D8-4484-8318-672CDDA002CE")
    INameSpaceTreeControlEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnItemClick( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCEHITTEST nstceHitTest,
            /* [in] */ 
            __in  NSTCECLICKTYPE nstceClickType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnPropertyItemCommit( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnItemStateChanging( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisMask,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnItemStateChanged( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisMask,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSelectionChanged( 
            /* [in] */ 
            __in  IShellItemArray *psiaSelection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnKeyboardInput( 
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeExpand( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAfterExpand( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeginLabelEdit( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnEndLabelEdit( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetToolTip( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [size_is][string][out] */ 
            __out_ecount(cchTip)  LPWSTR pszTip,
            /* [in] */ 
            __in  int cchTip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeItemDelete( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnItemAdded( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  BOOL fIsRoot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnItemDeleted( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  BOOL fIsRoot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeContextMenu( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAfterContextMenu( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  IContextMenu *pcmIn,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeStateImageChange( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetDefaultIconIndex( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __out  int *piDefaultIcon,
            /* [out] */ 
            __out  int *piOpenIcon) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INameSpaceTreeControlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INameSpaceTreeControlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INameSpaceTreeControlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnItemClick )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCEHITTEST nstceHitTest,
            /* [in] */ 
            __in  NSTCECLICKTYPE nstceClickType);
        
        HRESULT ( STDMETHODCALLTYPE *OnPropertyItemCommit )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *OnItemStateChanging )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisMask,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisState);
        
        HRESULT ( STDMETHODCALLTYPE *OnItemStateChanged )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisMask,
            /* [in] */ 
            __in  NSTCITEMSTATE nstcisState);
        
        HRESULT ( STDMETHODCALLTYPE *OnSelectionChanged )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItemArray *psiaSelection);
        
        HRESULT ( STDMETHODCALLTYPE *OnKeyboardInput )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeExpand )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *OnAfterExpand )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeginLabelEdit )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *OnEndLabelEdit )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetToolTip )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [size_is][string][out] */ 
            __out_ecount(cchTip)  LPWSTR pszTip,
            /* [in] */ 
            __in  int cchTip);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeItemDelete )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *OnItemAdded )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  BOOL fIsRoot);
        
        HRESULT ( STDMETHODCALLTYPE *OnItemDeleted )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  BOOL fIsRoot);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeContextMenu )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *OnAfterContextMenu )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [in] */ 
            __in  IContextMenu *pcmIn,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeStateImageChange )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetDefaultIconIndex )( 
            INameSpaceTreeControlEvents * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __out  int *piDefaultIcon,
            /* [out] */ 
            __out  int *piOpenIcon);
        
        END_INTERFACE
    } INameSpaceTreeControlEventsVtbl;

    interface INameSpaceTreeControlEvents
    {
        CONST_VTBL struct INameSpaceTreeControlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INameSpaceTreeControlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INameSpaceTreeControlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INameSpaceTreeControlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INameSpaceTreeControlEvents_OnItemClick(This,psi,nstceHitTest,nstceClickType)	\
    ( (This)->lpVtbl -> OnItemClick(This,psi,nstceHitTest,nstceClickType) ) 

#define INameSpaceTreeControlEvents_OnPropertyItemCommit(This,psi)	\
    ( (This)->lpVtbl -> OnPropertyItemCommit(This,psi) ) 

#define INameSpaceTreeControlEvents_OnItemStateChanging(This,psi,nstcisMask,nstcisState)	\
    ( (This)->lpVtbl -> OnItemStateChanging(This,psi,nstcisMask,nstcisState) ) 

#define INameSpaceTreeControlEvents_OnItemStateChanged(This,psi,nstcisMask,nstcisState)	\
    ( (This)->lpVtbl -> OnItemStateChanged(This,psi,nstcisMask,nstcisState) ) 

#define INameSpaceTreeControlEvents_OnSelectionChanged(This,psiaSelection)	\
    ( (This)->lpVtbl -> OnSelectionChanged(This,psiaSelection) ) 

#define INameSpaceTreeControlEvents_OnKeyboardInput(This,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> OnKeyboardInput(This,uMsg,wParam,lParam) ) 

#define INameSpaceTreeControlEvents_OnBeforeExpand(This,psi)	\
    ( (This)->lpVtbl -> OnBeforeExpand(This,psi) ) 

#define INameSpaceTreeControlEvents_OnAfterExpand(This,psi)	\
    ( (This)->lpVtbl -> OnAfterExpand(This,psi) ) 

#define INameSpaceTreeControlEvents_OnBeginLabelEdit(This,psi)	\
    ( (This)->lpVtbl -> OnBeginLabelEdit(This,psi) ) 

#define INameSpaceTreeControlEvents_OnEndLabelEdit(This,psi)	\
    ( (This)->lpVtbl -> OnEndLabelEdit(This,psi) ) 

#define INameSpaceTreeControlEvents_OnGetToolTip(This,psi,pszTip,cchTip)	\
    ( (This)->lpVtbl -> OnGetToolTip(This,psi,pszTip,cchTip) ) 

#define INameSpaceTreeControlEvents_OnBeforeItemDelete(This,psi)	\
    ( (This)->lpVtbl -> OnBeforeItemDelete(This,psi) ) 

#define INameSpaceTreeControlEvents_OnItemAdded(This,psi,fIsRoot)	\
    ( (This)->lpVtbl -> OnItemAdded(This,psi,fIsRoot) ) 

#define INameSpaceTreeControlEvents_OnItemDeleted(This,psi,fIsRoot)	\
    ( (This)->lpVtbl -> OnItemDeleted(This,psi,fIsRoot) ) 

#define INameSpaceTreeControlEvents_OnBeforeContextMenu(This,psi,riid,ppv)	\
    ( (This)->lpVtbl -> OnBeforeContextMenu(This,psi,riid,ppv) ) 

#define INameSpaceTreeControlEvents_OnAfterContextMenu(This,psi,pcmIn,riid,ppv)	\
    ( (This)->lpVtbl -> OnAfterContextMenu(This,psi,pcmIn,riid,ppv) ) 

#define INameSpaceTreeControlEvents_OnBeforeStateImageChange(This,psi)	\
    ( (This)->lpVtbl -> OnBeforeStateImageChange(This,psi) ) 

#define INameSpaceTreeControlEvents_OnGetDefaultIconIndex(This,psi,piDefaultIcon,piOpenIcon)	\
    ( (This)->lpVtbl -> OnGetDefaultIconIndex(This,psi,piDefaultIcon,piOpenIcon) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INameSpaceTreeControlEvents_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0147 */
/* [local] */ 

#define NSTCDHPOS_ONTOP  -1


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0147_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0147_v0_0_s_ifspec;

#ifndef __INameSpaceTreeControlDropHandler_INTERFACE_DEFINED__
#define __INameSpaceTreeControlDropHandler_INTERFACE_DEFINED__

/* interface INameSpaceTreeControlDropHandler */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_INameSpaceTreeControlDropHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F9C665D6-C2F2-4c19-BF33-8322D7352F51")
    INameSpaceTreeControlDropHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnDragEnter( 
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  BOOL fOutsideSource,
            /* [in] */ 
            __in  DWORD grfKeyState,
            /* [out][in] */ 
            __inout  DWORD *pdwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDragOver( 
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  DWORD grfKeyState,
            /* [out][in] */ 
            __inout  DWORD *pdwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDragPosition( 
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  int iNewPosition,
            /* [in] */ 
            __in  int iOldPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDrop( 
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  int iPosition,
            /* [in] */ 
            __in  DWORD grfKeyState,
            /* [out][in] */ 
            __inout  DWORD *pdwEffect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDropPosition( 
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  int iNewPosition,
            /* [in] */ 
            __in  int iOldPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDragLeave( 
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INameSpaceTreeControlDropHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INameSpaceTreeControlDropHandler * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INameSpaceTreeControlDropHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INameSpaceTreeControlDropHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnDragEnter )( 
            INameSpaceTreeControlDropHandler * This,
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  BOOL fOutsideSource,
            /* [in] */ 
            __in  DWORD grfKeyState,
            /* [out][in] */ 
            __inout  DWORD *pdwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *OnDragOver )( 
            INameSpaceTreeControlDropHandler * This,
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  DWORD grfKeyState,
            /* [out][in] */ 
            __inout  DWORD *pdwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *OnDragPosition )( 
            INameSpaceTreeControlDropHandler * This,
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  int iNewPosition,
            /* [in] */ 
            __in  int iOldPosition);
        
        HRESULT ( STDMETHODCALLTYPE *OnDrop )( 
            INameSpaceTreeControlDropHandler * This,
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  int iPosition,
            /* [in] */ 
            __in  DWORD grfKeyState,
            /* [out][in] */ 
            __inout  DWORD *pdwEffect);
        
        HRESULT ( STDMETHODCALLTYPE *OnDropPosition )( 
            INameSpaceTreeControlDropHandler * This,
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver,
            /* [in] */ 
            __in  IShellItemArray *psiaData,
            /* [in] */ 
            __in  int iNewPosition,
            /* [in] */ 
            __in  int iOldPosition);
        
        HRESULT ( STDMETHODCALLTYPE *OnDragLeave )( 
            INameSpaceTreeControlDropHandler * This,
            /* [unique][in] */ 
            __in_opt  IShellItem *psiOver);
        
        END_INTERFACE
    } INameSpaceTreeControlDropHandlerVtbl;

    interface INameSpaceTreeControlDropHandler
    {
        CONST_VTBL struct INameSpaceTreeControlDropHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INameSpaceTreeControlDropHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INameSpaceTreeControlDropHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INameSpaceTreeControlDropHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INameSpaceTreeControlDropHandler_OnDragEnter(This,psiOver,psiaData,fOutsideSource,grfKeyState,pdwEffect)	\
    ( (This)->lpVtbl -> OnDragEnter(This,psiOver,psiaData,fOutsideSource,grfKeyState,pdwEffect) ) 

#define INameSpaceTreeControlDropHandler_OnDragOver(This,psiOver,psiaData,grfKeyState,pdwEffect)	\
    ( (This)->lpVtbl -> OnDragOver(This,psiOver,psiaData,grfKeyState,pdwEffect) ) 

#define INameSpaceTreeControlDropHandler_OnDragPosition(This,psiOver,psiaData,iNewPosition,iOldPosition)	\
    ( (This)->lpVtbl -> OnDragPosition(This,psiOver,psiaData,iNewPosition,iOldPosition) ) 

#define INameSpaceTreeControlDropHandler_OnDrop(This,psiOver,psiaData,iPosition,grfKeyState,pdwEffect)	\
    ( (This)->lpVtbl -> OnDrop(This,psiOver,psiaData,iPosition,grfKeyState,pdwEffect) ) 

#define INameSpaceTreeControlDropHandler_OnDropPosition(This,psiOver,psiaData,iNewPosition,iOldPosition)	\
    ( (This)->lpVtbl -> OnDropPosition(This,psiOver,psiaData,iNewPosition,iOldPosition) ) 

#define INameSpaceTreeControlDropHandler_OnDragLeave(This,psiOver)	\
    ( (This)->lpVtbl -> OnDragLeave(This,psiOver) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INameSpaceTreeControlDropHandler_INTERFACE_DEFINED__ */


#ifndef __INameSpaceTreeAccessible_INTERFACE_DEFINED__
#define __INameSpaceTreeAccessible_INTERFACE_DEFINED__

/* interface INameSpaceTreeAccessible */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_INameSpaceTreeAccessible;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("71f312de-43ed-4190-8477-e9536b82350b")
    INameSpaceTreeAccessible : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnGetDefaultAccessibilityAction( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __deref_out  BSTR *pbstrDefaultAction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDoDefaultAccessibilityAction( 
            /* [in] */ 
            __in  IShellItem *psi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetAccessibilityRole( 
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __out  VARIANT *pvarRole) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INameSpaceTreeAccessibleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INameSpaceTreeAccessible * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INameSpaceTreeAccessible * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INameSpaceTreeAccessible * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetDefaultAccessibilityAction )( 
            INameSpaceTreeAccessible * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __deref_out  BSTR *pbstrDefaultAction);
        
        HRESULT ( STDMETHODCALLTYPE *OnDoDefaultAccessibilityAction )( 
            INameSpaceTreeAccessible * This,
            /* [in] */ 
            __in  IShellItem *psi);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetAccessibilityRole )( 
            INameSpaceTreeAccessible * This,
            /* [in] */ 
            __in  IShellItem *psi,
            /* [out] */ 
            __out  VARIANT *pvarRole);
        
        END_INTERFACE
    } INameSpaceTreeAccessibleVtbl;

    interface INameSpaceTreeAccessible
    {
        CONST_VTBL struct INameSpaceTreeAccessibleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INameSpaceTreeAccessible_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INameSpaceTreeAccessible_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INameSpaceTreeAccessible_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INameSpaceTreeAccessible_OnGetDefaultAccessibilityAction(This,psi,pbstrDefaultAction)	\
    ( (This)->lpVtbl -> OnGetDefaultAccessibilityAction(This,psi,pbstrDefaultAction) ) 

#define INameSpaceTreeAccessible_OnDoDefaultAccessibilityAction(This,psi)	\
    ( (This)->lpVtbl -> OnDoDefaultAccessibilityAction(This,psi) ) 

#define INameSpaceTreeAccessible_OnGetAccessibilityRole(This,psi,pvarRole)	\
    ( (This)->lpVtbl -> OnGetAccessibilityRole(This,psi,pvarRole) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INameSpaceTreeAccessible_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0149 */
/* [local] */ 

#ifdef MIDL_PASS
typedef IUnknown *HIMAGELIST;

#endif


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0149_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0149_v0_0_s_ifspec;

#ifndef __INameSpaceTreeControlCustomDraw_INTERFACE_DEFINED__
#define __INameSpaceTreeControlCustomDraw_INTERFACE_DEFINED__

/* interface INameSpaceTreeControlCustomDraw */
/* [local][uuid][object] */ 

typedef struct tagNSTCCUSTOMDRAW
    {
    IShellItem *psi;
    UINT uItemState;
    NSTCITEMSTATE nstcis;
    LPCWSTR pszText;
    int iImage;
    HIMAGELIST himl;
    int iLevel;
    int iIndent;
    } 	NSTCCUSTOMDRAW;


EXTERN_C const IID IID_INameSpaceTreeControlCustomDraw;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D3BA758-33EE-42d5-BB7B-5F3431D86C78")
    INameSpaceTreeControlCustomDraw : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PrePaint( 
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  RECT *prc,
            /* [out] */ 
            __out  LRESULT *plres) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostPaint( 
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemPrePaint( 
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  RECT *prc,
            /* [in] */ 
            __in  NSTCCUSTOMDRAW *pnstccdItem,
            /* [out][in] */ 
            __inout  COLORREF *pclrText,
            /* [out][in] */ 
            __inout  COLORREF *pclrTextBk,
            /* [out] */ 
            __out  LRESULT *plres) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemPostPaint( 
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  RECT *prc,
            /* [in] */ 
            __in  NSTCCUSTOMDRAW *pnstccdItem) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct INameSpaceTreeControlCustomDrawVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INameSpaceTreeControlCustomDraw * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INameSpaceTreeControlCustomDraw * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INameSpaceTreeControlCustomDraw * This);
        
        HRESULT ( STDMETHODCALLTYPE *PrePaint )( 
            INameSpaceTreeControlCustomDraw * This,
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  RECT *prc,
            /* [out] */ 
            __out  LRESULT *plres);
        
        HRESULT ( STDMETHODCALLTYPE *PostPaint )( 
            INameSpaceTreeControlCustomDraw * This,
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *ItemPrePaint )( 
            INameSpaceTreeControlCustomDraw * This,
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  RECT *prc,
            /* [in] */ 
            __in  NSTCCUSTOMDRAW *pnstccdItem,
            /* [out][in] */ 
            __inout  COLORREF *pclrText,
            /* [out][in] */ 
            __inout  COLORREF *pclrTextBk,
            /* [out] */ 
            __out  LRESULT *plres);
        
        HRESULT ( STDMETHODCALLTYPE *ItemPostPaint )( 
            INameSpaceTreeControlCustomDraw * This,
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  RECT *prc,
            /* [in] */ 
            __in  NSTCCUSTOMDRAW *pnstccdItem);
        
        END_INTERFACE
    } INameSpaceTreeControlCustomDrawVtbl;

    interface INameSpaceTreeControlCustomDraw
    {
        CONST_VTBL struct INameSpaceTreeControlCustomDrawVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INameSpaceTreeControlCustomDraw_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INameSpaceTreeControlCustomDraw_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INameSpaceTreeControlCustomDraw_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INameSpaceTreeControlCustomDraw_PrePaint(This,hdc,prc,plres)	\
    ( (This)->lpVtbl -> PrePaint(This,hdc,prc,plres) ) 

#define INameSpaceTreeControlCustomDraw_PostPaint(This,hdc,prc)	\
    ( (This)->lpVtbl -> PostPaint(This,hdc,prc) ) 

#define INameSpaceTreeControlCustomDraw_ItemPrePaint(This,hdc,prc,pnstccdItem,pclrText,pclrTextBk,plres)	\
    ( (This)->lpVtbl -> ItemPrePaint(This,hdc,prc,pnstccdItem,pclrText,pclrTextBk,plres) ) 

#define INameSpaceTreeControlCustomDraw_ItemPostPaint(This,hdc,prc,pnstccdItem)	\
    ( (This)->lpVtbl -> ItemPostPaint(This,hdc,prc,pnstccdItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INameSpaceTreeControlCustomDraw_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0150 */
/* [local] */ 

#define E_PREVIEWHANDLER_DRM_FAIL _HRESULT_TYPEDEF_(0x86420001L)
#define E_PREVIEWHANDLER_NOAUTH   _HRESULT_TYPEDEF_(0x86420002L)
#define E_PREVIEWHANDLER_NOTFOUND _HRESULT_TYPEDEF_(0x86420003L)
#define E_PREVIEWHANDLER_CORRUPT  _HRESULT_TYPEDEF_(0x86420004L)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0150_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0150_v0_0_s_ifspec;

#ifndef __IPreviewHandler_INTERFACE_DEFINED__
#define __IPreviewHandler_INTERFACE_DEFINED__

/* interface IPreviewHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPreviewHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8895b1c6-b41f-4c1c-a562-0d564250836f")
    IPreviewHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetWindow( 
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in const RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRect( 
            /* [in] */ __RPC__in const RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoPreview( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unload( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryFocus( 
            /* [out] */ __RPC__deref_out_opt HWND *phwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ __RPC__in MSG *pmsg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPreviewHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPreviewHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPreviewHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPreviewHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetWindow )( 
            IPreviewHandler * This,
            /* [in] */ __RPC__in HWND hwnd,
            /* [in] */ __RPC__in const RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *SetRect )( 
            IPreviewHandler * This,
            /* [in] */ __RPC__in const RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *DoPreview )( 
            IPreviewHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Unload )( 
            IPreviewHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IPreviewHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryFocus )( 
            IPreviewHandler * This,
            /* [out] */ __RPC__deref_out_opt HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            IPreviewHandler * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        END_INTERFACE
    } IPreviewHandlerVtbl;

    interface IPreviewHandler
    {
        CONST_VTBL struct IPreviewHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreviewHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreviewHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreviewHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPreviewHandler_SetWindow(This,hwnd,prc)	\
    ( (This)->lpVtbl -> SetWindow(This,hwnd,prc) ) 

#define IPreviewHandler_SetRect(This,prc)	\
    ( (This)->lpVtbl -> SetRect(This,prc) ) 

#define IPreviewHandler_DoPreview(This)	\
    ( (This)->lpVtbl -> DoPreview(This) ) 

#define IPreviewHandler_Unload(This)	\
    ( (This)->lpVtbl -> Unload(This) ) 

#define IPreviewHandler_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IPreviewHandler_QueryFocus(This,phwnd)	\
    ( (This)->lpVtbl -> QueryFocus(This,phwnd) ) 

#define IPreviewHandler_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreviewHandler_INTERFACE_DEFINED__ */


#ifndef __IPreviewHandlerFrame_INTERFACE_DEFINED__
#define __IPreviewHandlerFrame_INTERFACE_DEFINED__

/* interface IPreviewHandlerFrame */
/* [unique][uuid][object] */ 

typedef /* [public][public] */ struct __MIDL_IPreviewHandlerFrame_0001
    {
    HACCEL haccel;
    UINT cAccelEntries;
    } 	PREVIEWHANDLERFRAMEINFO;


EXTERN_C const IID IID_IPreviewHandlerFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fec87aaf-35f9-447a-adb7-20234491401a")
    IPreviewHandlerFrame : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetWindowContext( 
            /* [out] */ __RPC__out PREVIEWHANDLERFRAMEINFO *pinfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ __RPC__in MSG *pmsg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPreviewHandlerFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPreviewHandlerFrame * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPreviewHandlerFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPreviewHandlerFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindowContext )( 
            IPreviewHandlerFrame * This,
            /* [out] */ __RPC__out PREVIEWHANDLERFRAMEINFO *pinfo);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            IPreviewHandlerFrame * This,
            /* [in] */ __RPC__in MSG *pmsg);
        
        END_INTERFACE
    } IPreviewHandlerFrameVtbl;

    interface IPreviewHandlerFrame
    {
        CONST_VTBL struct IPreviewHandlerFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreviewHandlerFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreviewHandlerFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreviewHandlerFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPreviewHandlerFrame_GetWindowContext(This,pinfo)	\
    ( (This)->lpVtbl -> GetWindowContext(This,pinfo) ) 

#define IPreviewHandlerFrame_TranslateAccelerator(This,pmsg)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreviewHandlerFrame_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0152 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0152_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0152_v0_0_s_ifspec;

#ifndef __ITrayDeskBand_INTERFACE_DEFINED__
#define __ITrayDeskBand_INTERFACE_DEFINED__

/* interface ITrayDeskBand */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ITrayDeskBand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D67E846-5B9C-4db8-9CBC-DDE12F4254F1")
    ITrayDeskBand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowDeskBand( 
            /* [in] */ __RPC__in REFCLSID clsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HideDeskBand( 
            /* [in] */ __RPC__in REFCLSID clsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsDeskBandShown( 
            /* [in] */ __RPC__in REFCLSID clsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeskBandRegistrationChanged( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITrayDeskBandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrayDeskBand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrayDeskBand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrayDeskBand * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowDeskBand )( 
            ITrayDeskBand * This,
            /* [in] */ __RPC__in REFCLSID clsid);
        
        HRESULT ( STDMETHODCALLTYPE *HideDeskBand )( 
            ITrayDeskBand * This,
            /* [in] */ __RPC__in REFCLSID clsid);
        
        HRESULT ( STDMETHODCALLTYPE *IsDeskBandShown )( 
            ITrayDeskBand * This,
            /* [in] */ __RPC__in REFCLSID clsid);
        
        HRESULT ( STDMETHODCALLTYPE *DeskBandRegistrationChanged )( 
            ITrayDeskBand * This);
        
        END_INTERFACE
    } ITrayDeskBandVtbl;

    interface ITrayDeskBand
    {
        CONST_VTBL struct ITrayDeskBandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrayDeskBand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrayDeskBand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrayDeskBand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrayDeskBand_ShowDeskBand(This,clsid)	\
    ( (This)->lpVtbl -> ShowDeskBand(This,clsid) ) 

#define ITrayDeskBand_HideDeskBand(This,clsid)	\
    ( (This)->lpVtbl -> HideDeskBand(This,clsid) ) 

#define ITrayDeskBand_IsDeskBandShown(This,clsid)	\
    ( (This)->lpVtbl -> IsDeskBandShown(This,clsid) ) 

#define ITrayDeskBand_DeskBandRegistrationChanged(This)	\
    ( (This)->lpVtbl -> DeskBandRegistrationChanged(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITrayDeskBand_INTERFACE_DEFINED__ */


#ifndef __IBandHost_INTERFACE_DEFINED__
#define __IBandHost_INTERFACE_DEFINED__

/* interface IBandHost */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IBandHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B9075C7C-D48E-403f-AB99-D6C77A1084AC")
    IBandHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateBand( 
            /* [in] */ __RPC__in REFCLSID rclsidBand,
            /* [in] */ BOOL fAvailable,
            /* [in] */ BOOL fVisible,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBandAvailability( 
            /* [in] */ __RPC__in REFCLSID rclsidBand,
            /* [in] */ BOOL fAvailable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyBand( 
            /* [in] */ __RPC__in REFCLSID rclsidBand) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBandHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBandHost * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBandHost * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBandHost * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBand )( 
            IBandHost * This,
            /* [in] */ __RPC__in REFCLSID rclsidBand,
            /* [in] */ BOOL fAvailable,
            /* [in] */ BOOL fVisible,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *SetBandAvailability )( 
            IBandHost * This,
            /* [in] */ __RPC__in REFCLSID rclsidBand,
            /* [in] */ BOOL fAvailable);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyBand )( 
            IBandHost * This,
            /* [in] */ __RPC__in REFCLSID rclsidBand);
        
        END_INTERFACE
    } IBandHostVtbl;

    interface IBandHost
    {
        CONST_VTBL struct IBandHostVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBandHost_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBandHost_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBandHost_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBandHost_CreateBand(This,rclsidBand,fAvailable,fVisible,riid,ppv)	\
    ( (This)->lpVtbl -> CreateBand(This,rclsidBand,fAvailable,fVisible,riid,ppv) ) 

#define IBandHost_SetBandAvailability(This,rclsidBand,fAvailable)	\
    ( (This)->lpVtbl -> SetBandAvailability(This,rclsidBand,fAvailable) ) 

#define IBandHost_DestroyBand(This,rclsidBand)	\
    ( (This)->lpVtbl -> DestroyBand(This,rclsidBand) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBandHost_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0154 */
/* [local] */ 

#define SID_SBandHost IID_IBandHost
typedef GUID EXPLORERPANE;

#if 0
typedef EXPLORERPANE *REFEXPLORERPANE;

#endif // 0
#ifdef __cplusplus
#define REFEXPLORERPANE const EXPLORERPANE &
#else // !__cplusplus
#define REFEXPLORERPANE const EXPLORERPANE * __MIDL_CONST
#endif // __cplusplus


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0154_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0154_v0_0_s_ifspec;

#ifndef __IExplorerPaneVisibility_INTERFACE_DEFINED__
#define __IExplorerPaneVisibility_INTERFACE_DEFINED__

/* interface IExplorerPaneVisibility */
/* [unique][local][uuid][object] */ 


enum tagEXPLORERPANESTATE
    {	EPS_DONTCARE	= 0,
	EPS_DEFAULT_ON	= 0x1,
	EPS_DEFAULT_OFF	= 0x2,
	EPS_STATEMASK	= 0xffff,
	EPS_INITIALSTATE	= 0x10000,
	EPS_FORCE	= 0x20000
    } ;
typedef DWORD EXPLORERPANESTATE;


EXTERN_C const IID IID_IExplorerPaneVisibility;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e07010ec-bc17-44c0-97b0-46c7c95b9edc")
    IExplorerPaneVisibility : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPaneState( 
            /* [in] */ 
            __in  REFEXPLORERPANE ep,
            /* [out] */ 
            __out  EXPLORERPANESTATE *peps) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExplorerPaneVisibilityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExplorerPaneVisibility * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExplorerPaneVisibility * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExplorerPaneVisibility * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPaneState )( 
            IExplorerPaneVisibility * This,
            /* [in] */ 
            __in  REFEXPLORERPANE ep,
            /* [out] */ 
            __out  EXPLORERPANESTATE *peps);
        
        END_INTERFACE
    } IExplorerPaneVisibilityVtbl;

    interface IExplorerPaneVisibility
    {
        CONST_VTBL struct IExplorerPaneVisibilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerPaneVisibility_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerPaneVisibility_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerPaneVisibility_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerPaneVisibility_GetPaneState(This,ep,peps)	\
    ( (This)->lpVtbl -> GetPaneState(This,ep,peps) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerPaneVisibility_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0155 */
/* [local] */ 

#define SID_ExplorerPaneVisibility IID_IExplorerPaneVisibility


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0155_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0155_v0_0_s_ifspec;

#ifndef __IContextMenuCB_INTERFACE_DEFINED__
#define __IContextMenuCB_INTERFACE_DEFINED__

/* interface IContextMenuCB */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IContextMenuCB;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3409E930-5A39-11d1-83FA-00A0C90DC849")
    IContextMenuCB : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CallBack( 
            /* [unique][in] */ 
            __in_opt  IShellFolder *psf,
            /* [in] */ 
            __in  HWND hwndOwner,
            /* [unique][in] */ 
            __in_opt  IDataObject *pdtobj,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IContextMenuCBVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContextMenuCB * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContextMenuCB * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContextMenuCB * This);
        
        HRESULT ( STDMETHODCALLTYPE *CallBack )( 
            IContextMenuCB * This,
            /* [unique][in] */ 
            __in_opt  IShellFolder *psf,
            /* [in] */ 
            __in  HWND hwndOwner,
            /* [unique][in] */ 
            __in_opt  IDataObject *pdtobj,
            /* [in] */ 
            __in  UINT uMsg,
            /* [in] */ 
            __in  WPARAM wParam,
            /* [in] */ 
            __in  LPARAM lParam);
        
        END_INTERFACE
    } IContextMenuCBVtbl;

    interface IContextMenuCB
    {
        CONST_VTBL struct IContextMenuCBVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContextMenuCB_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContextMenuCB_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContextMenuCB_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IContextMenuCB_CallBack(This,psf,hwndOwner,pdtobj,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> CallBack(This,psf,hwndOwner,pdtobj,uMsg,wParam,lParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IContextMenuCB_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0156 */
/* [local] */ 

#endif  // NTDDI_LONGHORN


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0156_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0156_v0_0_s_ifspec;

#ifndef __IDefaultExtractIconInit_INTERFACE_DEFINED__
#define __IDefaultExtractIconInit_INTERFACE_DEFINED__

/* interface IDefaultExtractIconInit */
/* [unique][local][uuid][object] */ 


EXTERN_C const IID IID_IDefaultExtractIconInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41ded17d-d6b3-4261-997d-88c60e4b1d58")
    IDefaultExtractIconInit : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ 
            __in  UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetKey( 
            /* [in] */ 
            __in  HKEY hkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNormalIcon( 
            /* [string][in] */ 
            __in  LPCWSTR pszFile,
            /* [in] */ 
            __in  int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOpenIcon( 
            /* [string][in] */ 
            __in  LPCWSTR pszFile,
            /* [in] */ 
            __in  int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShortcutIcon( 
            /* [string][in] */ 
            __in  LPCWSTR pszFile,
            /* [in] */ 
            __in  int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultIcon( 
            /* [string][in] */ 
            __in  LPCWSTR pszFile,
            /* [in] */ 
            __in  int iIcon) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDefaultExtractIconInitVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDefaultExtractIconInit * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDefaultExtractIconInit * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDefaultExtractIconInit * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IDefaultExtractIconInit * This,
            /* [in] */ 
            __in  UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetKey )( 
            IDefaultExtractIconInit * This,
            /* [in] */ 
            __in  HKEY hkey);
        
        HRESULT ( STDMETHODCALLTYPE *SetNormalIcon )( 
            IDefaultExtractIconInit * This,
            /* [string][in] */ 
            __in  LPCWSTR pszFile,
            /* [in] */ 
            __in  int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetOpenIcon )( 
            IDefaultExtractIconInit * This,
            /* [string][in] */ 
            __in  LPCWSTR pszFile,
            /* [in] */ 
            __in  int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetShortcutIcon )( 
            IDefaultExtractIconInit * This,
            /* [string][in] */ 
            __in  LPCWSTR pszFile,
            /* [in] */ 
            __in  int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultIcon )( 
            IDefaultExtractIconInit * This,
            /* [string][in] */ 
            __in  LPCWSTR pszFile,
            /* [in] */ 
            __in  int iIcon);
        
        END_INTERFACE
    } IDefaultExtractIconInitVtbl;

    interface IDefaultExtractIconInit
    {
        CONST_VTBL struct IDefaultExtractIconInitVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDefaultExtractIconInit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDefaultExtractIconInit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDefaultExtractIconInit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDefaultExtractIconInit_SetFlags(This,uFlags)	\
    ( (This)->lpVtbl -> SetFlags(This,uFlags) ) 

#define IDefaultExtractIconInit_SetKey(This,hkey)	\
    ( (This)->lpVtbl -> SetKey(This,hkey) ) 

#define IDefaultExtractIconInit_SetNormalIcon(This,pszFile,iIcon)	\
    ( (This)->lpVtbl -> SetNormalIcon(This,pszFile,iIcon) ) 

#define IDefaultExtractIconInit_SetOpenIcon(This,pszFile,iIcon)	\
    ( (This)->lpVtbl -> SetOpenIcon(This,pszFile,iIcon) ) 

#define IDefaultExtractIconInit_SetShortcutIcon(This,pszFile,iIcon)	\
    ( (This)->lpVtbl -> SetShortcutIcon(This,pszFile,iIcon) ) 

#define IDefaultExtractIconInit_SetDefaultIcon(This,pszFile,iIcon)	\
    ( (This)->lpVtbl -> SetDefaultIcon(This,pszFile,iIcon) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDefaultExtractIconInit_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0157 */
/* [local] */ 

STDAPI SHCreateDefaultExtractIcon(__in REFIID riid, __deref_out void **ppv);



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0157_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0157_v0_0_s_ifspec;

#ifndef __IExplorerCommand_INTERFACE_DEFINED__
#define __IExplorerCommand_INTERFACE_DEFINED__

/* interface IExplorerCommand */
/* [object][unique][uuid] */ 


enum tagEXPCMDSTATE
    {	ECS_ENABLED	= 0,
	ECS_DISABLED	= 0x1,
	ECS_HIDDEN	= 0x2,
	ECS_CHECKBOX	= 0x4,
	ECS_CHECKED	= 0x8
    } ;
typedef DWORD EXPCMDSTATE;


enum tagEXPCMDFLAGS
    {	ECF_HASSUBCOMMANDS	= 0x1,
	ECF_HASSPLITBUTTON	= 0x2,
	ECF_HIDELABEL	= 0x4,
	ECF_ISSEPARATOR	= 0x8,
	ECF_HASLUASHIELD	= 0x10
    } ;
typedef DWORD EXPCMDFLAGS;


EXTERN_C const IID IID_IExplorerCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a08ce4d0-fa25-44ab-b57c-c7b1c323e0b9")
    IExplorerCommand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTitle( 
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIcon( 
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetToolTip( 
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszInfotip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanonicalName( 
            /* [out] */ __RPC__out GUID *pguidCommandName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [in] */ BOOL fOkToBeSlow,
            /* [out] */ __RPC__out EXPCMDSTATE *pCmdState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ __RPC__out EXPCMDFLAGS *pFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSubCommands( 
            /* [out] */ __RPC__deref_out_opt IEnumExplorerCommand **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExplorerCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExplorerCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExplorerCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExplorerCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            IExplorerCommand * This,
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetIcon )( 
            IExplorerCommand * This,
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszIcon);
        
        HRESULT ( STDMETHODCALLTYPE *GetToolTip )( 
            IExplorerCommand * This,
            /* [unique][in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppszInfotip);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )( 
            IExplorerCommand * This,
            /* [out] */ __RPC__out GUID *pguidCommandName);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IExplorerCommand * This,
            /* [in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [in] */ BOOL fOkToBeSlow,
            /* [out] */ __RPC__out EXPCMDSTATE *pCmdState);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExplorerCommand * This,
            /* [in] */ __RPC__in_opt IShellItemArray *psiItemArray,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IExplorerCommand * This,
            /* [out] */ __RPC__out EXPCMDFLAGS *pFlags);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSubCommands )( 
            IExplorerCommand * This,
            /* [out] */ __RPC__deref_out_opt IEnumExplorerCommand **ppEnum);
        
        END_INTERFACE
    } IExplorerCommandVtbl;

    interface IExplorerCommand
    {
        CONST_VTBL struct IExplorerCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerCommand_GetTitle(This,psiItemArray,ppszName)	\
    ( (This)->lpVtbl -> GetTitle(This,psiItemArray,ppszName) ) 

#define IExplorerCommand_GetIcon(This,psiItemArray,ppszIcon)	\
    ( (This)->lpVtbl -> GetIcon(This,psiItemArray,ppszIcon) ) 

#define IExplorerCommand_GetToolTip(This,psiItemArray,ppszInfotip)	\
    ( (This)->lpVtbl -> GetToolTip(This,psiItemArray,ppszInfotip) ) 

#define IExplorerCommand_GetCanonicalName(This,pguidCommandName)	\
    ( (This)->lpVtbl -> GetCanonicalName(This,pguidCommandName) ) 

#define IExplorerCommand_GetState(This,psiItemArray,fOkToBeSlow,pCmdState)	\
    ( (This)->lpVtbl -> GetState(This,psiItemArray,fOkToBeSlow,pCmdState) ) 

#define IExplorerCommand_Invoke(This,psiItemArray,pbc)	\
    ( (This)->lpVtbl -> Invoke(This,psiItemArray,pbc) ) 

#define IExplorerCommand_GetFlags(This,pFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pFlags) ) 

#define IExplorerCommand_EnumSubCommands(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumSubCommands(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerCommand_INTERFACE_DEFINED__ */


#ifndef __IEnumExplorerCommand_INTERFACE_DEFINED__
#define __IEnumExplorerCommand_INTERFACE_DEFINED__

/* interface IEnumExplorerCommand */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IEnumExplorerCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a88826f8-186f-4987-aade-ea0cef8fbfe8")
    IEnumExplorerCommand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) IExplorerCommand **pUICommand,
            /* [out] */ __RPC__out ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumExplorerCommand **ppenum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumExplorerCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumExplorerCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumExplorerCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumExplorerCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumExplorerCommand * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) IExplorerCommand **pUICommand,
            /* [out] */ __RPC__out ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumExplorerCommand * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumExplorerCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumExplorerCommand * This,
            /* [out] */ __RPC__deref_out_opt IEnumExplorerCommand **ppenum);
        
        END_INTERFACE
    } IEnumExplorerCommandVtbl;

    interface IEnumExplorerCommand
    {
        CONST_VTBL struct IEnumExplorerCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumExplorerCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumExplorerCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumExplorerCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumExplorerCommand_Next(This,celt,pUICommand,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,pUICommand,pceltFetched) ) 

#define IEnumExplorerCommand_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumExplorerCommand_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumExplorerCommand_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumExplorerCommand_INTERFACE_DEFINED__ */


#ifndef __IExplorerCommandProvider_INTERFACE_DEFINED__
#define __IExplorerCommandProvider_INTERFACE_DEFINED__

/* interface IExplorerCommandProvider */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IExplorerCommandProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64961751-0835-43c0-8ffe-d57686530e64")
    IExplorerCommandProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCommands( 
            /* [in] */ __RPC__in_opt IUnknown *punkSite,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCommand( 
            /* [in] */ __RPC__in REFGUID rguidCommandId,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExplorerCommandProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExplorerCommandProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExplorerCommandProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExplorerCommandProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommands )( 
            IExplorerCommandProvider * This,
            /* [in] */ __RPC__in_opt IUnknown *punkSite,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetCommand )( 
            IExplorerCommandProvider * This,
            /* [in] */ __RPC__in REFGUID rguidCommandId,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        END_INTERFACE
    } IExplorerCommandProviderVtbl;

    interface IExplorerCommandProvider
    {
        CONST_VTBL struct IExplorerCommandProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExplorerCommandProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExplorerCommandProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExplorerCommandProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExplorerCommandProvider_GetCommands(This,punkSite,riid,ppv)	\
    ( (This)->lpVtbl -> GetCommands(This,punkSite,riid,ppv) ) 

#define IExplorerCommandProvider_GetCommand(This,rguidCommandId,riid,ppv)	\
    ( (This)->lpVtbl -> GetCommand(This,rguidCommandId,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExplorerCommandProvider_INTERFACE_DEFINED__ */


#ifndef __IMarkupCallback_INTERFACE_DEFINED__
#define __IMarkupCallback_INTERFACE_DEFINED__

/* interface IMarkupCallback */
/* [object][local][uuid] */ 


EXTERN_C const IID IID_IMarkupCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4440306e-d79a-48d0-88e6-a42692279bfb")
    IMarkupCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [in] */ 
            __in  DWORD dwId,
            /* [in] */ 
            __in  UINT uState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ 
            __in  DWORD dwId,
            /* [in] */ 
            __in  int nCode,
            /* [in] */ 
            __in  int iLink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvalidateRect( 
            /* [in] */ 
            __in  DWORD dwId,
            /* [in] */ 
            __in  const RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCustomDraw( 
            /* [in] */ 
            __in  DWORD dwDrawStage,
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  const RECT *prc,
            /* [in] */ 
            __in  DWORD dwId,
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uItemState,
            /* [out] */ 
            __out  LRESULT *pdwResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CustomDrawText( 
            /* [in] */ 
            __in  HDC hDC,
            /* [string][in] */ 
            __in  LPCWSTR lpString,
            /* [in] */ 
            __in  int nCount,
            /* [in] */ 
            __in  RECT *pRect,
            /* [in] */ 
            __in  UINT uFormat,
            /* [in] */ 
            __in  BOOL fLink) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMarkupCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMarkupCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMarkupCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMarkupCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IMarkupCallback * This,
            /* [in] */ 
            __in  DWORD dwId,
            /* [in] */ 
            __in  UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IMarkupCallback * This,
            /* [in] */ 
            __in  DWORD dwId,
            /* [in] */ 
            __in  int nCode,
            /* [in] */ 
            __in  int iLink);
        
        HRESULT ( STDMETHODCALLTYPE *InvalidateRect )( 
            IMarkupCallback * This,
            /* [in] */ 
            __in  DWORD dwId,
            /* [in] */ 
            __in  const RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *OnCustomDraw )( 
            IMarkupCallback * This,
            /* [in] */ 
            __in  DWORD dwDrawStage,
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  const RECT *prc,
            /* [in] */ 
            __in  DWORD dwId,
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uItemState,
            /* [out] */ 
            __out  LRESULT *pdwResult);
        
        HRESULT ( STDMETHODCALLTYPE *CustomDrawText )( 
            IMarkupCallback * This,
            /* [in] */ 
            __in  HDC hDC,
            /* [string][in] */ 
            __in  LPCWSTR lpString,
            /* [in] */ 
            __in  int nCount,
            /* [in] */ 
            __in  RECT *pRect,
            /* [in] */ 
            __in  UINT uFormat,
            /* [in] */ 
            __in  BOOL fLink);
        
        END_INTERFACE
    } IMarkupCallbackVtbl;

    interface IMarkupCallback
    {
        CONST_VTBL struct IMarkupCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMarkupCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMarkupCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMarkupCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMarkupCallback_GetState(This,dwId,uState)	\
    ( (This)->lpVtbl -> GetState(This,dwId,uState) ) 

#define IMarkupCallback_Notify(This,dwId,nCode,iLink)	\
    ( (This)->lpVtbl -> Notify(This,dwId,nCode,iLink) ) 

#define IMarkupCallback_InvalidateRect(This,dwId,prc)	\
    ( (This)->lpVtbl -> InvalidateRect(This,dwId,prc) ) 

#define IMarkupCallback_OnCustomDraw(This,dwDrawStage,hdc,prc,dwId,iLink,uItemState,pdwResult)	\
    ( (This)->lpVtbl -> OnCustomDraw(This,dwDrawStage,hdc,prc,dwId,iLink,uItemState,pdwResult) ) 

#define IMarkupCallback_CustomDrawText(This,hDC,lpString,nCount,pRect,uFormat,fLink)	\
    ( (This)->lpVtbl -> CustomDrawText(This,hDC,lpString,nCount,pRect,uFormat,fLink) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMarkupCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0161 */
/* [local] */ 

typedef HANDLE HTHEME;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0161_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0161_v0_0_s_ifspec;

#ifndef __IControlMarkup_INTERFACE_DEFINED__
#define __IControlMarkup_INTERFACE_DEFINED__

/* interface IControlMarkup */
/* [object][local][uuid] */ 

/* [v1_enum] */ 
enum tagMARKUPSIZE
    {	MARKUPSIZE_CALCWIDTH	= 0,
	MARKUPSIZE_CALCHEIGHT	= ( MARKUPSIZE_CALCWIDTH + 1 ) 
    } ;
typedef enum tagMARKUPSIZE MARKUPSIZE;

/* [v1_enum] */ 
enum tagMARKUPLINKTEXT
    {	MARKUPLINKTEXT_URL	= 0,
	MARKUPLINKTEXT_ID	= ( MARKUPLINKTEXT_URL + 1 ) ,
	MARKUPLINKTEXT_TEXT	= ( MARKUPLINKTEXT_ID + 1 ) 
    } ;
typedef enum tagMARKUPLINKTEXT MARKUPLINKTEXT;

/* [v1_enum] */ 
enum tagMARKUPSTATE
    {	MARKUPSTATE_FOCUSED	= 0x1,
	MARKUPSTATE_ENABLED	= 0x2,
	MARKUPSTATE_VISITED	= 0x4,
	MARKUPSTATE_HOT	= 0x8,
	MARKUPSTATE_DEFAULTCOLORS	= 0x10,
	MARKUPSTATE_ALLOWMARKUP	= 0x40000000
    } ;
typedef DWORD MARKUPSTATE;

/* [v1_enum] */ 
enum tagMARKUPMESSAGE
    {	MARKUPMESSAGE_KEYEXECUTE	= 0,
	MARKUPMESSAGE_CLICKEXECUTE	= ( MARKUPMESSAGE_KEYEXECUTE + 1 ) ,
	MARKUPMESSAGE_WANTFOCUS	= ( MARKUPMESSAGE_CLICKEXECUTE + 1 ) 
    } ;
typedef enum tagMARKUPMESSAGE MARKUPMESSAGE;


EXTERN_C const IID IID_IControlMarkup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D6D2FBAE-F116-458c-8C34-03569877A2D2")
    IControlMarkup : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCallback( 
            /* [in] */ 
            __in  IUnknown *punk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCallback( 
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppvUnk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetId( 
            /* [in] */ 
            __in  DWORD dwId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetId( 
            /* [out] */ 
            __out  DWORD *pdwId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFonts( 
            /* [in] */ 
            __in  HFONT hFont,
            /* [in] */ 
            __in  HFONT hFontUnderline) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFonts( 
            /* [out] */ 
            __out  HFONT *phFont,
            /* [out] */ 
            __out  HFONT *phFontUnderline) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetText( 
            /* [string][in] */ 
            __in  LPCWSTR pwszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetText( 
            /* [in] */ 
            __in  BOOL bRaw,
            /* [size_is][string][out] */ 
            __out_ecount_part(*pdwCch, *pdwCch)  LPWSTR pwszText,
            /* [out][in] */ 
            __inout  DWORD *pdwCch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLinkText( 
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uMarkupLinkText,
            /* [string][in] */ 
            __in  LPCWSTR pwszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLinkText( 
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uMarkupLinkText,
            /* [size_is][string][out] */ 
            __out_ecount_part(*pdwCch, *pdwCch)  LPWSTR pwszText,
            /* [out][in] */ 
            __inout  DWORD *pdwCch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRenderFlags( 
            /* [in] */ 
            __in  UINT uDT) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRenderFlags( 
            /* [out] */ 
            __out  UINT *puDT,
            /* [out] */ 
            __out  HTHEME *phTheme,
            /* [out] */ 
            __out  int *piPartId,
            /* [out] */ 
            __out  int *piStateIdNormal,
            /* [out] */ 
            __out  int *piStateIdLink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetThemeRenderFlags( 
            /* [in] */ 
            __in  UINT uDT,
            /* [in] */ 
            __in  HTHEME hTheme,
            /* [in] */ 
            __in  int iPartId,
            /* [in] */ 
            __in  int iStateIdNormal,
            /* [in] */ 
            __in  int iStateIdLink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uStateMask,
            /* [out] */ 
            __out  UINT *puState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetState( 
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uStateMask,
            /* [in] */ 
            __in  UINT uState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawText( 
            /* [in] */ 
            __in  HDC hdcClient,
            /* [in] */ 
            __in  LPCRECT prcClient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLinkCursor( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CalcIdealSize( 
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  UINT uMarkUpCalc,
            /* [out][in] */ 
            __inout  RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE KillFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsTabbable( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnButtonDown( 
            /* [in] */ 
            __in  POINT pt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnButtonUp( 
            /* [in] */ 
            __in  POINT pt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnKeyDown( 
            /* [in] */ 
            __in  UINT uVirtKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HitTest( 
            /* [in] */ 
            __in  POINT pt,
            /* [out] */ 
            __out  int *piLink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLinkRect( 
            /* [in] */ 
            __in  int iLink,
            /* [out] */ 
            __out  RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetControlRect( 
            /* [out] */ 
            __out  RECT *prcControl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLinkCount( 
            /* [out] */ 
            __out  UINT *pcLinks) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IControlMarkupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IControlMarkup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IControlMarkup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IControlMarkup * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCallback )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  IUnknown *punk);
        
        HRESULT ( STDMETHODCALLTYPE *GetCallback )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  REFIID riid,
            /* [iid_is][out] */ 
            __deref_out  void **ppvUnk);
        
        HRESULT ( STDMETHODCALLTYPE *SetId )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  DWORD dwId);
        
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            IControlMarkup * This,
            /* [out] */ 
            __out  DWORD *pdwId);
        
        HRESULT ( STDMETHODCALLTYPE *SetFonts )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  HFONT hFont,
            /* [in] */ 
            __in  HFONT hFontUnderline);
        
        HRESULT ( STDMETHODCALLTYPE *GetFonts )( 
            IControlMarkup * This,
            /* [out] */ 
            __out  HFONT *phFont,
            /* [out] */ 
            __out  HFONT *phFontUnderline);
        
        HRESULT ( STDMETHODCALLTYPE *SetText )( 
            IControlMarkup * This,
            /* [string][in] */ 
            __in  LPCWSTR pwszText);
        
        HRESULT ( STDMETHODCALLTYPE *GetText )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  BOOL bRaw,
            /* [size_is][string][out] */ 
            __out_ecount_part(*pdwCch, *pdwCch)  LPWSTR pwszText,
            /* [out][in] */ 
            __inout  DWORD *pdwCch);
        
        HRESULT ( STDMETHODCALLTYPE *SetLinkText )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uMarkupLinkText,
            /* [string][in] */ 
            __in  LPCWSTR pwszText);
        
        HRESULT ( STDMETHODCALLTYPE *GetLinkText )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uMarkupLinkText,
            /* [size_is][string][out] */ 
            __out_ecount_part(*pdwCch, *pdwCch)  LPWSTR pwszText,
            /* [out][in] */ 
            __inout  DWORD *pdwCch);
        
        HRESULT ( STDMETHODCALLTYPE *SetRenderFlags )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  UINT uDT);
        
        HRESULT ( STDMETHODCALLTYPE *GetRenderFlags )( 
            IControlMarkup * This,
            /* [out] */ 
            __out  UINT *puDT,
            /* [out] */ 
            __out  HTHEME *phTheme,
            /* [out] */ 
            __out  int *piPartId,
            /* [out] */ 
            __out  int *piStateIdNormal,
            /* [out] */ 
            __out  int *piStateIdLink);
        
        HRESULT ( STDMETHODCALLTYPE *SetThemeRenderFlags )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  UINT uDT,
            /* [in] */ 
            __in  HTHEME hTheme,
            /* [in] */ 
            __in  int iPartId,
            /* [in] */ 
            __in  int iStateIdNormal,
            /* [in] */ 
            __in  int iStateIdLink);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uStateMask,
            /* [out] */ 
            __out  UINT *puState);
        
        HRESULT ( STDMETHODCALLTYPE *SetState )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  int iLink,
            /* [in] */ 
            __in  UINT uStateMask,
            /* [in] */ 
            __in  UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *DrawText )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  HDC hdcClient,
            /* [in] */ 
            __in  LPCRECT prcClient);
        
        HRESULT ( STDMETHODCALLTYPE *SetLinkCursor )( 
            IControlMarkup * This);
        
        HRESULT ( STDMETHODCALLTYPE *CalcIdealSize )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  HDC hdc,
            /* [in] */ 
            __in  UINT uMarkUpCalc,
            /* [out][in] */ 
            __inout  RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IControlMarkup * This);
        
        HRESULT ( STDMETHODCALLTYPE *KillFocus )( 
            IControlMarkup * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsTabbable )( 
            IControlMarkup * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnButtonDown )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  POINT pt);
        
        HRESULT ( STDMETHODCALLTYPE *OnButtonUp )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  POINT pt);
        
        HRESULT ( STDMETHODCALLTYPE *OnKeyDown )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  UINT uVirtKey);
        
        HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  POINT pt,
            /* [out] */ 
            __out  int *piLink);
        
        HRESULT ( STDMETHODCALLTYPE *GetLinkRect )( 
            IControlMarkup * This,
            /* [in] */ 
            __in  int iLink,
            /* [out] */ 
            __out  RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *GetControlRect )( 
            IControlMarkup * This,
            /* [out] */ 
            __out  RECT *prcControl);
        
        HRESULT ( STDMETHODCALLTYPE *GetLinkCount )( 
            IControlMarkup * This,
            /* [out] */ 
            __out  UINT *pcLinks);
        
        END_INTERFACE
    } IControlMarkupVtbl;

    interface IControlMarkup
    {
        CONST_VTBL struct IControlMarkupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IControlMarkup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IControlMarkup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IControlMarkup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IControlMarkup_SetCallback(This,punk)	\
    ( (This)->lpVtbl -> SetCallback(This,punk) ) 

#define IControlMarkup_GetCallback(This,riid,ppvUnk)	\
    ( (This)->lpVtbl -> GetCallback(This,riid,ppvUnk) ) 

#define IControlMarkup_SetId(This,dwId)	\
    ( (This)->lpVtbl -> SetId(This,dwId) ) 

#define IControlMarkup_GetId(This,pdwId)	\
    ( (This)->lpVtbl -> GetId(This,pdwId) ) 

#define IControlMarkup_SetFonts(This,hFont,hFontUnderline)	\
    ( (This)->lpVtbl -> SetFonts(This,hFont,hFontUnderline) ) 

#define IControlMarkup_GetFonts(This,phFont,phFontUnderline)	\
    ( (This)->lpVtbl -> GetFonts(This,phFont,phFontUnderline) ) 

#define IControlMarkup_SetText(This,pwszText)	\
    ( (This)->lpVtbl -> SetText(This,pwszText) ) 

#define IControlMarkup_GetText(This,bRaw,pwszText,pdwCch)	\
    ( (This)->lpVtbl -> GetText(This,bRaw,pwszText,pdwCch) ) 

#define IControlMarkup_SetLinkText(This,iLink,uMarkupLinkText,pwszText)	\
    ( (This)->lpVtbl -> SetLinkText(This,iLink,uMarkupLinkText,pwszText) ) 

#define IControlMarkup_GetLinkText(This,iLink,uMarkupLinkText,pwszText,pdwCch)	\
    ( (This)->lpVtbl -> GetLinkText(This,iLink,uMarkupLinkText,pwszText,pdwCch) ) 

#define IControlMarkup_SetRenderFlags(This,uDT)	\
    ( (This)->lpVtbl -> SetRenderFlags(This,uDT) ) 

#define IControlMarkup_GetRenderFlags(This,puDT,phTheme,piPartId,piStateIdNormal,piStateIdLink)	\
    ( (This)->lpVtbl -> GetRenderFlags(This,puDT,phTheme,piPartId,piStateIdNormal,piStateIdLink) ) 

#define IControlMarkup_SetThemeRenderFlags(This,uDT,hTheme,iPartId,iStateIdNormal,iStateIdLink)	\
    ( (This)->lpVtbl -> SetThemeRenderFlags(This,uDT,hTheme,iPartId,iStateIdNormal,iStateIdLink) ) 

#define IControlMarkup_GetState(This,iLink,uStateMask,puState)	\
    ( (This)->lpVtbl -> GetState(This,iLink,uStateMask,puState) ) 

#define IControlMarkup_SetState(This,iLink,uStateMask,uState)	\
    ( (This)->lpVtbl -> SetState(This,iLink,uStateMask,uState) ) 

#define IControlMarkup_DrawText(This,hdcClient,prcClient)	\
    ( (This)->lpVtbl -> DrawText(This,hdcClient,prcClient) ) 

#define IControlMarkup_SetLinkCursor(This)	\
    ( (This)->lpVtbl -> SetLinkCursor(This) ) 

#define IControlMarkup_CalcIdealSize(This,hdc,uMarkUpCalc,prc)	\
    ( (This)->lpVtbl -> CalcIdealSize(This,hdc,uMarkUpCalc,prc) ) 

#define IControlMarkup_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IControlMarkup_KillFocus(This)	\
    ( (This)->lpVtbl -> KillFocus(This) ) 

#define IControlMarkup_IsTabbable(This)	\
    ( (This)->lpVtbl -> IsTabbable(This) ) 

#define IControlMarkup_OnButtonDown(This,pt)	\
    ( (This)->lpVtbl -> OnButtonDown(This,pt) ) 

#define IControlMarkup_OnButtonUp(This,pt)	\
    ( (This)->lpVtbl -> OnButtonUp(This,pt) ) 

#define IControlMarkup_OnKeyDown(This,uVirtKey)	\
    ( (This)->lpVtbl -> OnKeyDown(This,uVirtKey) ) 

#define IControlMarkup_HitTest(This,pt,piLink)	\
    ( (This)->lpVtbl -> HitTest(This,pt,piLink) ) 

#define IControlMarkup_GetLinkRect(This,iLink,prc)	\
    ( (This)->lpVtbl -> GetLinkRect(This,iLink,prc) ) 

#define IControlMarkup_GetControlRect(This,prcControl)	\
    ( (This)->lpVtbl -> GetControlRect(This,prcControl) ) 

#define IControlMarkup_GetLinkCount(This,pcLinks)	\
    ( (This)->lpVtbl -> GetLinkCount(This,pcLinks) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IControlMarkup_INTERFACE_DEFINED__ */


#ifndef __IInitializeNetworkFolder_INTERFACE_DEFINED__
#define __IInitializeNetworkFolder_INTERFACE_DEFINED__

/* interface IInitializeNetworkFolder */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInitializeNetworkFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6e0f9881-42a8-4f2a-97f8-8af4e026d92d")
    IInitializeNetworkFolder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidl,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlTarget,
            /* [in] */ UINT uDisplayType,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszResName,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszProvider) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInitializeNetworkFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInitializeNetworkFolder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInitializeNetworkFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInitializeNetworkFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IInitializeNetworkFolder * This,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidl,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidlTarget,
            /* [in] */ UINT uDisplayType,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszResName,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszProvider);
        
        END_INTERFACE
    } IInitializeNetworkFolderVtbl;

    interface IInitializeNetworkFolder
    {
        CONST_VTBL struct IInitializeNetworkFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeNetworkFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializeNetworkFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializeNetworkFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializeNetworkFolder_Initialize(This,pidl,pidlTarget,uDisplayType,pszResName,pszProvider)	\
    ( (This)->lpVtbl -> Initialize(This,pidl,pidlTarget,uDisplayType,pszResName,pszProvider) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializeNetworkFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0163 */
/* [local] */ 

typedef 
enum tagCPVIEW
    {	CPVIEW_CLASSIC	= 0,
	CPVIEW_CATEGORY	= 1
    } 	CPVIEW;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0163_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0163_v0_0_s_ifspec;

#ifndef __IOpenControlPanel_INTERFACE_DEFINED__
#define __IOpenControlPanel_INTERFACE_DEFINED__

/* interface IOpenControlPanel */
/* [uuid][object] */ 


EXTERN_C const IID IID_IOpenControlPanel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D11AD862-66DE-4DF4-BF6C-1F5621996AF1")
    IOpenControlPanel : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Open( 
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszName,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszPage,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkSite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszName,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchPath) LPWSTR pszPath,
            /* [in] */ UINT cchPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentView( 
            /* [out] */ __RPC__out CPVIEW *pView) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOpenControlPanelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOpenControlPanel * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOpenControlPanel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOpenControlPanel * This);
        
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            IOpenControlPanel * This,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszName,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszPage,
            /* [unique][in] */ __RPC__in_opt IUnknown *punkSite);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            IOpenControlPanel * This,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszName,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cchPath) LPWSTR pszPath,
            /* [in] */ UINT cchPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentView )( 
            IOpenControlPanel * This,
            /* [out] */ __RPC__out CPVIEW *pView);
        
        END_INTERFACE
    } IOpenControlPanelVtbl;

    interface IOpenControlPanel
    {
        CONST_VTBL struct IOpenControlPanelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpenControlPanel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOpenControlPanel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOpenControlPanel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOpenControlPanel_Open(This,pszName,pszPage,punkSite)	\
    ( (This)->lpVtbl -> Open(This,pszName,pszPage,punkSite) ) 

#define IOpenControlPanel_GetPath(This,pszName,pszPath,cchPath)	\
    ( (This)->lpVtbl -> GetPath(This,pszName,pszPath,cchPath) ) 

#define IOpenControlPanel_GetCurrentView(This,pView)	\
    ( (This)->lpVtbl -> GetCurrentView(This,pView) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOpenControlPanel_INTERFACE_DEFINED__ */


#ifndef __ISystemCPLUpdate_INTERFACE_DEFINED__
#define __ISystemCPLUpdate_INTERFACE_DEFINED__

/* interface ISystemCPLUpdate */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISystemCPLUpdate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A8A71374-80C2-49e0-8805-8524EBC45B07")
    ISystemCPLUpdate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateSystemInfo( 
            /* [string][in] */ __RPC__in LPCWSTR pszDescription,
            /* [string][in] */ __RPC__in LPCWSTR pszSpeed,
            /* [string][in] */ __RPC__in LPCWSTR pszMemory,
            /* [in] */ DWORD dwNumProcessors) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateLicensingInfo( 
            /* [in] */ DWORD dwLicensingStatus,
            /* [in] */ DWORD dwGraceTimeRemainingMinutes,
            /* [in] */ DWORD dwTotalGraceTimeDays,
            /* [in] */ BOOL fIsGenuine) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateRatingsInfo( 
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszRatingsLink,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszRatingsText,
            /* [unique][in] */ __RPC__in_opt HBITMAP hRatingsImage,
            /* [in] */ USHORT uWinCRSLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateComputerInfo( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISystemCPLUpdateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISystemCPLUpdate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISystemCPLUpdate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISystemCPLUpdate * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateSystemInfo )( 
            ISystemCPLUpdate * This,
            /* [string][in] */ __RPC__in LPCWSTR pszDescription,
            /* [string][in] */ __RPC__in LPCWSTR pszSpeed,
            /* [string][in] */ __RPC__in LPCWSTR pszMemory,
            /* [in] */ DWORD dwNumProcessors);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateLicensingInfo )( 
            ISystemCPLUpdate * This,
            /* [in] */ DWORD dwLicensingStatus,
            /* [in] */ DWORD dwGraceTimeRemainingMinutes,
            /* [in] */ DWORD dwTotalGraceTimeDays,
            /* [in] */ BOOL fIsGenuine);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateRatingsInfo )( 
            ISystemCPLUpdate * This,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszRatingsLink,
            /* [string][unique][in] */ __RPC__in_opt LPCWSTR pszRatingsText,
            /* [unique][in] */ __RPC__in_opt HBITMAP hRatingsImage,
            /* [in] */ USHORT uWinCRSLevel);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateComputerInfo )( 
            ISystemCPLUpdate * This);
        
        END_INTERFACE
    } ISystemCPLUpdateVtbl;

    interface ISystemCPLUpdate
    {
        CONST_VTBL struct ISystemCPLUpdateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISystemCPLUpdate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISystemCPLUpdate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISystemCPLUpdate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISystemCPLUpdate_UpdateSystemInfo(This,pszDescription,pszSpeed,pszMemory,dwNumProcessors)	\
    ( (This)->lpVtbl -> UpdateSystemInfo(This,pszDescription,pszSpeed,pszMemory,dwNumProcessors) ) 

#define ISystemCPLUpdate_UpdateLicensingInfo(This,dwLicensingStatus,dwGraceTimeRemainingMinutes,dwTotalGraceTimeDays,fIsGenuine)	\
    ( (This)->lpVtbl -> UpdateLicensingInfo(This,dwLicensingStatus,dwGraceTimeRemainingMinutes,dwTotalGraceTimeDays,fIsGenuine) ) 

#define ISystemCPLUpdate_UpdateRatingsInfo(This,pszRatingsLink,pszRatingsText,hRatingsImage,uWinCRSLevel)	\
    ( (This)->lpVtbl -> UpdateRatingsInfo(This,pszRatingsLink,pszRatingsText,hRatingsImage,uWinCRSLevel) ) 

#define ISystemCPLUpdate_UpdateComputerInfo(This)	\
    ( (This)->lpVtbl -> UpdateComputerInfo(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISystemCPLUpdate_INTERFACE_DEFINED__ */


#ifndef __IComputerInfoAdvise_INTERFACE_DEFINED__
#define __IComputerInfoAdvise_INTERFACE_DEFINED__

/* interface IComputerInfoAdvise */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IComputerInfoAdvise;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4623BD61-5603-444f-824A-AAEBCEED93FA")
    IComputerInfoAdvise : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ __RPC__in_opt ISystemCPLUpdate *pUpdate,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IComputerInfoAdviseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComputerInfoAdvise * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComputerInfoAdvise * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComputerInfoAdvise * This);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IComputerInfoAdvise * This,
            /* [in] */ __RPC__in_opt ISystemCPLUpdate *pUpdate,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IComputerInfoAdvise * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IComputerInfoAdviseVtbl;

    interface IComputerInfoAdvise
    {
        CONST_VTBL struct IComputerInfoAdviseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComputerInfoAdvise_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComputerInfoAdvise_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComputerInfoAdvise_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComputerInfoAdvise_Advise(This,pUpdate,pdwCookie)	\
    ( (This)->lpVtbl -> Advise(This,pUpdate,pdwCookie) ) 

#define IComputerInfoAdvise_Unadvise(This,dwCookie)	\
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComputerInfoAdvise_INTERFACE_DEFINED__ */


#ifndef __IComputerInfoChangeNotify_INTERFACE_DEFINED__
#define __IComputerInfoChangeNotify_INTERFACE_DEFINED__

/* interface IComputerInfoChangeNotify */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IComputerInfoChangeNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0DF60D92-6818-46d6-B358-D66170DDE466")
    IComputerInfoChangeNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ComputerInfoChanged( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IComputerInfoChangeNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComputerInfoChangeNotify * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComputerInfoChangeNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComputerInfoChangeNotify * This);
        
        HRESULT ( STDMETHODCALLTYPE *ComputerInfoChanged )( 
            IComputerInfoChangeNotify * This);
        
        END_INTERFACE
    } IComputerInfoChangeNotifyVtbl;

    interface IComputerInfoChangeNotify
    {
        CONST_VTBL struct IComputerInfoChangeNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComputerInfoChangeNotify_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComputerInfoChangeNotify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComputerInfoChangeNotify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComputerInfoChangeNotify_ComputerInfoChanged(This)	\
    ( (This)->lpVtbl -> ComputerInfoChanged(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComputerInfoChangeNotify_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0167 */
/* [local] */ 

#define STR_FILE_SYS_BIND_DATA      L"File System Bind Data"


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0167_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0167_v0_0_s_ifspec;

#ifndef __IFileSystemBindData_INTERFACE_DEFINED__
#define __IFileSystemBindData_INTERFACE_DEFINED__

/* interface IFileSystemBindData */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IFileSystemBindData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01E18D10-4D8B-11d2-855D-006008059367")
    IFileSystemBindData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFindData( 
            /* [in] */ const WIN32_FIND_DATAW *pfd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFindData( 
            /* [out] */ WIN32_FIND_DATAW *pfd) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileSystemBindDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileSystemBindData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileSystemBindData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileSystemBindData * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFindData )( 
            IFileSystemBindData * This,
            /* [in] */ const WIN32_FIND_DATAW *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *GetFindData )( 
            IFileSystemBindData * This,
            /* [out] */ WIN32_FIND_DATAW *pfd);
        
        END_INTERFACE
    } IFileSystemBindDataVtbl;

    interface IFileSystemBindData
    {
        CONST_VTBL struct IFileSystemBindDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileSystemBindData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileSystemBindData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileSystemBindData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileSystemBindData_SetFindData(This,pfd)	\
    ( (This)->lpVtbl -> SetFindData(This,pfd) ) 

#define IFileSystemBindData_GetFindData(This,pfd)	\
    ( (This)->lpVtbl -> GetFindData(This,pfd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileSystemBindData_INTERFACE_DEFINED__ */


#ifndef __IFileSystemBindData2_INTERFACE_DEFINED__
#define __IFileSystemBindData2_INTERFACE_DEFINED__

/* interface IFileSystemBindData2 */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IFileSystemBindData2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3acf075f-71db-4afa-81f0-3fc4fdf2a5b8")
    IFileSystemBindData2 : public IFileSystemBindData
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFileID( 
            /* [in] */ LARGE_INTEGER liFileID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileID( 
            /* [out] */ LARGE_INTEGER *pliFileID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetJunctionCLSID( 
            /* [in] */ REFCLSID clsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetJunctionCLSID( 
            /* [out] */ CLSID *pclsid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFileSystemBindData2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFileSystemBindData2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFileSystemBindData2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFileSystemBindData2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFindData )( 
            IFileSystemBindData2 * This,
            /* [in] */ const WIN32_FIND_DATAW *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *GetFindData )( 
            IFileSystemBindData2 * This,
            /* [out] */ WIN32_FIND_DATAW *pfd);
        
        HRESULT ( STDMETHODCALLTYPE *SetFileID )( 
            IFileSystemBindData2 * This,
            /* [in] */ LARGE_INTEGER liFileID);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileID )( 
            IFileSystemBindData2 * This,
            /* [out] */ LARGE_INTEGER *pliFileID);
        
        HRESULT ( STDMETHODCALLTYPE *SetJunctionCLSID )( 
            IFileSystemBindData2 * This,
            /* [in] */ REFCLSID clsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetJunctionCLSID )( 
            IFileSystemBindData2 * This,
            /* [out] */ CLSID *pclsid);
        
        END_INTERFACE
    } IFileSystemBindData2Vtbl;

    interface IFileSystemBindData2
    {
        CONST_VTBL struct IFileSystemBindData2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFileSystemBindData2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFileSystemBindData2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFileSystemBindData2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFileSystemBindData2_SetFindData(This,pfd)	\
    ( (This)->lpVtbl -> SetFindData(This,pfd) ) 

#define IFileSystemBindData2_GetFindData(This,pfd)	\
    ( (This)->lpVtbl -> GetFindData(This,pfd) ) 


#define IFileSystemBindData2_SetFileID(This,liFileID)	\
    ( (This)->lpVtbl -> SetFileID(This,liFileID) ) 

#define IFileSystemBindData2_GetFileID(This,pliFileID)	\
    ( (This)->lpVtbl -> GetFileID(This,pliFileID) ) 

#define IFileSystemBindData2_SetJunctionCLSID(This,clsid)	\
    ( (This)->lpVtbl -> SetJunctionCLSID(This,clsid) ) 

#define IFileSystemBindData2_GetJunctionCLSID(This,pclsid)	\
    ( (This)->lpVtbl -> GetJunctionCLSID(This,pclsid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFileSystemBindData2_INTERFACE_DEFINED__ */



#ifndef __ShellObjects_LIBRARY_DEFINED__
#define __ShellObjects_LIBRARY_DEFINED__

/* library ShellObjects */
/* [version][lcid][helpstring][uuid] */ 

#define SID_PublishingWizard CLSID_PublishingWizard

EXTERN_C const IID LIBID_ShellObjects;

EXTERN_C const CLSID CLSID_ShellDesktop;

#ifdef __cplusplus

class DECLSPEC_UUID("00021400-0000-0000-C000-000000000046")
ShellDesktop;
#endif

EXTERN_C const CLSID CLSID_ShellFSFolder;

#ifdef __cplusplus

class DECLSPEC_UUID("F3364BA0-65B9-11CE-A9BA-00AA004AE837")
ShellFSFolder;
#endif

EXTERN_C const CLSID CLSID_NetworkPlaces;

#ifdef __cplusplus

class DECLSPEC_UUID("208D2C60-3AEA-1069-A2D7-08002B30309D")
NetworkPlaces;
#endif

EXTERN_C const CLSID CLSID_ShellLink;

#ifdef __cplusplus

class DECLSPEC_UUID("00021401-0000-0000-C000-000000000046")
ShellLink;
#endif

EXTERN_C const CLSID CLSID_QueryCancelAutoPlay;

#ifdef __cplusplus

class DECLSPEC_UUID("331F1768-05A9-4ddd-B86E-DAE34DDC998A")
QueryCancelAutoPlay;
#endif

EXTERN_C const CLSID CLSID_DriveSizeCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("94357B53-CA29-4b78-83AE-E8FE7409134F")
DriveSizeCategorizer;
#endif

EXTERN_C const CLSID CLSID_DriveTypeCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("B0A8F3CF-4333-4bab-8873-1CCB1CADA48B")
DriveTypeCategorizer;
#endif

EXTERN_C const CLSID CLSID_FreeSpaceCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("B5607793-24AC-44c7-82E2-831726AA6CB7")
FreeSpaceCategorizer;
#endif

EXTERN_C const CLSID CLSID_TimeCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("3bb4118f-ddfd-4d30-a348-9fb5d6bf1afe")
TimeCategorizer;
#endif

EXTERN_C const CLSID CLSID_SizeCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("55d7b852-f6d1-42f2-aa75-8728a1b2d264")
SizeCategorizer;
#endif

EXTERN_C const CLSID CLSID_AlphabeticalCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("3c2654c6-7372-4f6b-b310-55d6128f49d2")
AlphabeticalCategorizer;
#endif

EXTERN_C const CLSID CLSID_MergedCategorizer;

#ifdef __cplusplus

class DECLSPEC_UUID("8e827c11-33e7-4bc1-b242-8cd9a1c2b304")
MergedCategorizer;
#endif

EXTERN_C const CLSID CLSID_ImageProperties;

#ifdef __cplusplus

class DECLSPEC_UUID("7ab770c7-0e23-4d7a-8aa2-19bfad479829")
ImageProperties;
#endif

EXTERN_C const CLSID CLSID_PropertiesUI;

#ifdef __cplusplus

class DECLSPEC_UUID("d912f8cf-0396-4915-884e-fb425d32943b")
PropertiesUI;
#endif

EXTERN_C const CLSID CLSID_UserNotification;

#ifdef __cplusplus

class DECLSPEC_UUID("0010890e-8789-413c-adbc-48f5b511b3af")
UserNotification;
#endif

EXTERN_C const CLSID CLSID_CDBurn;

#ifdef __cplusplus

class DECLSPEC_UUID("fbeb8a05-beee-4442-804e-409d6c4515e9")
CDBurn;
#endif

EXTERN_C const CLSID CLSID_TaskbarList;

#ifdef __cplusplus

class DECLSPEC_UUID("56FDF344-FD6D-11d0-958A-006097C9A090")
TaskbarList;
#endif

EXTERN_C const CLSID CLSID_StartMenuPin;

#ifdef __cplusplus

class DECLSPEC_UUID("a2a9545d-a0c2-42b4-9708-a0b2badd77c8")
StartMenuPin;
#endif

EXTERN_C const CLSID CLSID_WebWizardHost;

#ifdef __cplusplus

class DECLSPEC_UUID("c827f149-55c1-4d28-935e-57e47caed973")
WebWizardHost;
#endif

EXTERN_C const CLSID CLSID_PublishDropTarget;

#ifdef __cplusplus

class DECLSPEC_UUID("CC6EEFFB-43F6-46c5-9619-51D571967F7D")
PublishDropTarget;
#endif

EXTERN_C const CLSID CLSID_PublishingWizard;

#ifdef __cplusplus

class DECLSPEC_UUID("6b33163c-76a5-4b6c-bf21-45de9cd503a1")
PublishingWizard;
#endif

EXTERN_C const CLSID CLSID_InternetPrintOrdering;

#ifdef __cplusplus

class DECLSPEC_UUID("add36aa8-751a-4579-a266-d66f5202ccbb")
InternetPrintOrdering;
#endif

EXTERN_C const CLSID CLSID_FolderViewHost;

#ifdef __cplusplus

class DECLSPEC_UUID("20b1cb23-6968-4eb9-b7d4-a66d00d07cee")
FolderViewHost;
#endif

EXTERN_C const CLSID CLSID_ExplorerBrowser;

#ifdef __cplusplus

class DECLSPEC_UUID("71f96385-ddd6-48d3-a0c1-ae06e8b055fb")
ExplorerBrowser;
#endif

EXTERN_C const CLSID CLSID_ImageRecompress;

#ifdef __cplusplus

class DECLSPEC_UUID("6e33091c-d2f8-4740-b55e-2e11d1477a2c")
ImageRecompress;
#endif

EXTERN_C const CLSID CLSID_TrayBandSiteService;

#ifdef __cplusplus

class DECLSPEC_UUID("F60AD0A0-E5E1-45cb-B51A-E15B9F8B2934")
TrayBandSiteService;
#endif

EXTERN_C const CLSID CLSID_TrayDeskBand;

#ifdef __cplusplus

class DECLSPEC_UUID("E6442437-6C68-4f52-94DD-2CFED267EFB9")
TrayDeskBand;
#endif

EXTERN_C const CLSID CLSID_AttachmentServices;

#ifdef __cplusplus

class DECLSPEC_UUID("4125dd96-e03a-4103-8f70-e0597d803b9c")
AttachmentServices;
#endif

EXTERN_C const CLSID CLSID_DocPropShellExtension;

#ifdef __cplusplus

class DECLSPEC_UUID("883373C3-BF89-11D1-BE35-080036B11A03")
DocPropShellExtension;
#endif

EXTERN_C const CLSID CLSID_ShellItem;

#ifdef __cplusplus

class DECLSPEC_UUID("9ac9fbe1-e0a2-4ad6-b4ee-e212013ea917")
ShellItem;
#endif

EXTERN_C const CLSID CLSID_NamespaceWalker;

#ifdef __cplusplus

class DECLSPEC_UUID("72eb61e0-8672-4303-9175-f2e4c68b2e7c")
NamespaceWalker;
#endif

EXTERN_C const CLSID CLSID_FileOperation;

#ifdef __cplusplus

class DECLSPEC_UUID("3ad05575-8857-4850-9277-11b85bdb8e09")
FileOperation;
#endif

EXTERN_C const CLSID CLSID_FileOpenDialog;

#ifdef __cplusplus

class DECLSPEC_UUID("DC1C5A9C-E88A-4dde-A5A1-60F82A20AEF7")
FileOpenDialog;
#endif

EXTERN_C const CLSID CLSID_FileSaveDialog;

#ifdef __cplusplus

class DECLSPEC_UUID("C0B4E2F3-BA21-4773-8DBA-335EC946EB8B")
FileSaveDialog;
#endif

EXTERN_C const CLSID CLSID_KnownFolderManager;

#ifdef __cplusplus

class DECLSPEC_UUID("4df0c730-df9d-4ae3-9153-aa6b82e9795a")
KnownFolderManager;
#endif

EXTERN_C const CLSID CLSID_FSCopyHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("D197380A-0A79-4dc8-A033-ED882C2FA14B")
FSCopyHandler;
#endif

EXTERN_C const CLSID CLSID_SharingConfigurationManager;

#ifdef __cplusplus

class DECLSPEC_UUID("49F371E1-8C5C-4d9c-9A3B-54A6827F513C")
SharingConfigurationManager;
#endif

EXTERN_C const CLSID CLSID_PreviousVersions;

#ifdef __cplusplus

class DECLSPEC_UUID("596AB062-B4D2-4215-9F74-E9109B0A8153")
PreviousVersions;
#endif

EXTERN_C const CLSID CLSID_NetworkConnections;

#ifdef __cplusplus

class DECLSPEC_UUID("7007ACC7-3202-11D1-AAD2-00805FC1270E")
NetworkConnections;
#endif

EXTERN_C const CLSID CLSID_NamespaceTreeControl;

#ifdef __cplusplus

class DECLSPEC_UUID("AE054212-3535-4430-83ED-D501AA6680E6")
NamespaceTreeControl;
#endif

EXTERN_C const CLSID CLSID_IENamespaceTreeControl;

#ifdef __cplusplus

class DECLSPEC_UUID("ACE52D03-E5CD-4b20-82FF-E71B11BEAE1D")
IENamespaceTreeControl;
#endif

EXTERN_C const CLSID CLSID_ScheduledTasks;

#ifdef __cplusplus

class DECLSPEC_UUID("D6277990-4C6A-11CF-8D87-00AA0060F5BF")
ScheduledTasks;
#endif

EXTERN_C const CLSID CLSID_ApplicationAssociationRegistration;

#ifdef __cplusplus

class DECLSPEC_UUID("591209c7-767b-42b2-9fba-44ee4615f2c7")
ApplicationAssociationRegistration;
#endif

EXTERN_C const CLSID CLSID_ApplicationAssociationRegistrationUI;

#ifdef __cplusplus

class DECLSPEC_UUID("1968106d-f3b5-44cf-890e-116fcb9ecef1")
ApplicationAssociationRegistrationUI;
#endif

EXTERN_C const CLSID CLSID_SearchFolderItemFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("14010e02-bbbd-41f0-88e3-eda371216584")
SearchFolderItemFactory;
#endif

EXTERN_C const CLSID CLSID_OpenControlPanel;

#ifdef __cplusplus

class DECLSPEC_UUID("06622D85-6856-4460-8DE1-A81921B41C4B")
OpenControlPanel;
#endif

EXTERN_C const CLSID CLSID_ComputerInfoAdvise;

#ifdef __cplusplus

class DECLSPEC_UUID("00A77FF7-A514-493e-B721-CDF8CB0F5B59")
ComputerInfoAdvise;
#endif

EXTERN_C const CLSID CLSID_NetworkExplorerFolder;

#ifdef __cplusplus

class DECLSPEC_UUID("F02C1A0D-BE21-4350-88B0-7367FC96EF3C")
NetworkExplorerFolder;
#endif
#endif /* __ShellObjects_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_shobjidl_0000_0169 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_LONGHORN)
SHSTDAPI SHGetTemporaryPropertyForItem(__in IShellItem *psi, __in REFPROPERTYKEY propkey, __out PROPVARIANT *ppropvar);
SHSTDAPI SHSetTemporaryPropertyForItem(__in IShellItem *psi, __in REFPROPERTYKEY propkey, __in REFPROPVARIANT propvar);
#endif  // NTDDI_LONGHORN
#if (NTDDI_VERSION >= NTDDI_LONGHORN)


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0169_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0169_v0_0_s_ifspec;

#ifndef __IAssocHandlerInvoker_INTERFACE_DEFINED__
#define __IAssocHandlerInvoker_INTERFACE_DEFINED__

/* interface IAssocHandlerInvoker */
/* [local][unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IAssocHandlerInvoker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92218CAB-ECAA-4335-8133-807FD234C2EE")
    IAssocHandlerInvoker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SupportsSelection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Invoke( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAssocHandlerInvokerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAssocHandlerInvoker * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAssocHandlerInvoker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAssocHandlerInvoker * This);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsSelection )( 
            IAssocHandlerInvoker * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAssocHandlerInvoker * This);
        
        END_INTERFACE
    } IAssocHandlerInvokerVtbl;

    interface IAssocHandlerInvoker
    {
        CONST_VTBL struct IAssocHandlerInvokerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAssocHandlerInvoker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAssocHandlerInvoker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAssocHandlerInvoker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAssocHandlerInvoker_SupportsSelection(This)	\
    ( (This)->lpVtbl -> SupportsSelection(This) ) 

#define IAssocHandlerInvoker_Invoke(This)	\
    ( (This)->lpVtbl -> Invoke(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAssocHandlerInvoker_INTERFACE_DEFINED__ */


#ifndef __IAssocHandler_INTERFACE_DEFINED__
#define __IAssocHandler_INTERFACE_DEFINED__

/* interface IAssocHandler */
/* [local][unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IAssocHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F04061AC-1659-4a3f-A954-775AA57FC083")
    IAssocHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out][string] */ 
            __deref_out  LPWSTR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUIName( 
            /* [out][string] */ 
            __deref_out  LPWSTR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconLocation( 
            /* [out][string] */ 
            __deref_out  LPWSTR *ppszPath,
            /* [out] */ 
            __out  int *pIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRecommended( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MakeDefault( 
            /* [string][in] */ 
            __in  LPCWSTR pszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ 
            __in  IDataObject *pdo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateInvoker( 
            /* [in] */ 
            __in  IDataObject *pdo,
            /* [out] */ 
            __deref_out  IAssocHandlerInvoker **ppInvoker) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAssocHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAssocHandler * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAssocHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAssocHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAssocHandler * This,
            /* [out][string] */ 
            __deref_out  LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetUIName )( 
            IAssocHandler * This,
            /* [out][string] */ 
            __deref_out  LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconLocation )( 
            IAssocHandler * This,
            /* [out][string] */ 
            __deref_out  LPWSTR *ppszPath,
            /* [out] */ 
            __out  int *pIndex);
        
        HRESULT ( STDMETHODCALLTYPE *IsRecommended )( 
            IAssocHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *MakeDefault )( 
            IAssocHandler * This,
            /* [string][in] */ 
            __in  LPCWSTR pszDescription);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAssocHandler * This,
            /* [in] */ 
            __in  IDataObject *pdo);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInvoker )( 
            IAssocHandler * This,
            /* [in] */ 
            __in  IDataObject *pdo,
            /* [out] */ 
            __deref_out  IAssocHandlerInvoker **ppInvoker);
        
        END_INTERFACE
    } IAssocHandlerVtbl;

    interface IAssocHandler
    {
        CONST_VTBL struct IAssocHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAssocHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAssocHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAssocHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAssocHandler_GetName(This,ppsz)	\
    ( (This)->lpVtbl -> GetName(This,ppsz) ) 

#define IAssocHandler_GetUIName(This,ppsz)	\
    ( (This)->lpVtbl -> GetUIName(This,ppsz) ) 

#define IAssocHandler_GetIconLocation(This,ppszPath,pIndex)	\
    ( (This)->lpVtbl -> GetIconLocation(This,ppszPath,pIndex) ) 

#define IAssocHandler_IsRecommended(This)	\
    ( (This)->lpVtbl -> IsRecommended(This) ) 

#define IAssocHandler_MakeDefault(This,pszDescription)	\
    ( (This)->lpVtbl -> MakeDefault(This,pszDescription) ) 

#define IAssocHandler_Invoke(This,pdo)	\
    ( (This)->lpVtbl -> Invoke(This,pdo) ) 

#define IAssocHandler_CreateInvoker(This,pdo,ppInvoker)	\
    ( (This)->lpVtbl -> CreateInvoker(This,pdo,ppInvoker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAssocHandler_INTERFACE_DEFINED__ */


#ifndef __IEnumAssocHandlers_INTERFACE_DEFINED__
#define __IEnumAssocHandlers_INTERFACE_DEFINED__

/* interface IEnumAssocHandlers */
/* [local][unique][object][uuid][helpstring] */ 


EXTERN_C const IID IID_IEnumAssocHandlers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("973810ae-9599-4b88-9e4d-6ee98c9552da")
    IEnumAssocHandlers : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ 
            __in  ULONG celt,
            /* [length_is][size_is][out] */ 
            __out_ecount_part(celt, *pceltFetched)  IAssocHandler **rgelt,
            /* [out] */ 
            __out_opt  ULONG *pceltFetched) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumAssocHandlersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumAssocHandlers * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumAssocHandlers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumAssocHandlers * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumAssocHandlers * This,
            /* [in] */ 
            __in  ULONG celt,
            /* [length_is][size_is][out] */ 
            __out_ecount_part(celt, *pceltFetched)  IAssocHandler **rgelt,
            /* [out] */ 
            __out_opt  ULONG *pceltFetched);
        
        END_INTERFACE
    } IEnumAssocHandlersVtbl;

    interface IEnumAssocHandlers
    {
        CONST_VTBL struct IEnumAssocHandlersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumAssocHandlers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumAssocHandlers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumAssocHandlers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumAssocHandlers_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumAssocHandlers_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_0000_0172 */
/* [local] */ 


enum tagASSOC_FILTER
    {	ASSOC_FILTER_NONE	= 0,
	ASSOC_FILTER_RECOMMENDED	= 0x1
    } ;
typedef int ASSOC_FILTER;

SHSTDAPI SHAssocEnumHandlers(LPCWSTR pszExtra, ASSOC_FILTER afFilter, __deref_out IEnumAssocHandlers **ppEnumHandler);
#endif  // NTDDI_LONGHORN

extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0172_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0172_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HACCEL_UserSize(     unsigned long *, unsigned long            , HACCEL * ); 
unsigned char * __RPC_USER  HACCEL_UserMarshal(  unsigned long *, unsigned char *, HACCEL * ); 
unsigned char * __RPC_USER  HACCEL_UserUnmarshal(unsigned long *, unsigned char *, HACCEL * ); 
void                      __RPC_USER  HACCEL_UserFree(     unsigned long *, HACCEL * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize(     unsigned long *, unsigned long            , HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal(  unsigned long *, unsigned char *, HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree(     unsigned long *, HBITMAP * ); 

unsigned long             __RPC_USER  HGLOBAL_UserSize(     unsigned long *, unsigned long            , HGLOBAL * ); 
unsigned char * __RPC_USER  HGLOBAL_UserMarshal(  unsigned long *, unsigned char *, HGLOBAL * ); 
unsigned char * __RPC_USER  HGLOBAL_UserUnmarshal(unsigned long *, unsigned char *, HGLOBAL * ); 
void                      __RPC_USER  HGLOBAL_UserFree(     unsigned long *, HGLOBAL * ); 

unsigned long             __RPC_USER  HICON_UserSize(     unsigned long *, unsigned long            , HICON * ); 
unsigned char * __RPC_USER  HICON_UserMarshal(  unsigned long *, unsigned char *, HICON * ); 
unsigned char * __RPC_USER  HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON * ); 
void                      __RPC_USER  HICON_UserFree(     unsigned long *, HICON * ); 

unsigned long             __RPC_USER  HMENU_UserSize(     unsigned long *, unsigned long            , HMENU * ); 
unsigned char * __RPC_USER  HMENU_UserMarshal(  unsigned long *, unsigned char *, HMENU * ); 
unsigned char * __RPC_USER  HMENU_UserUnmarshal(unsigned long *, unsigned char *, HMENU * ); 
void                      __RPC_USER  HMENU_UserFree(     unsigned long *, HMENU * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  PCIDLIST_ABSOLUTE_UserSize(     unsigned long *, unsigned long            , PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserMarshal(  unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserUnmarshal(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PCIDLIST_ABSOLUTE_UserFree(     unsigned long *, PCIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PCUIDLIST_RELATIVE_UserSize(     unsigned long *, unsigned long            , PCUIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PCUIDLIST_RELATIVE_UserMarshal(  unsigned long *, unsigned char *, PCUIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PCUIDLIST_RELATIVE_UserUnmarshal(unsigned long *, unsigned char *, PCUIDLIST_RELATIVE * ); 
void                      __RPC_USER  PCUIDLIST_RELATIVE_UserFree(     unsigned long *, PCUIDLIST_RELATIVE * ); 

unsigned long             __RPC_USER  PCUITEMID_CHILD_UserSize(     unsigned long *, unsigned long            , PCUITEMID_CHILD * ); 
unsigned char * __RPC_USER  PCUITEMID_CHILD_UserMarshal(  unsigned long *, unsigned char *, PCUITEMID_CHILD * ); 
unsigned char * __RPC_USER  PCUITEMID_CHILD_UserUnmarshal(unsigned long *, unsigned char *, PCUITEMID_CHILD * ); 
void                      __RPC_USER  PCUITEMID_CHILD_UserFree(     unsigned long *, PCUITEMID_CHILD * ); 

unsigned long             __RPC_USER  PIDLIST_ABSOLUTE_UserSize(     unsigned long *, unsigned long            , PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserMarshal(  unsigned long *, unsigned char *, PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserUnmarshal(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PIDLIST_ABSOLUTE_UserFree(     unsigned long *, PIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PIDLIST_RELATIVE_UserSize(     unsigned long *, unsigned long            , PIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PIDLIST_RELATIVE_UserMarshal(  unsigned long *, unsigned char *, PIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PIDLIST_RELATIVE_UserUnmarshal(unsigned long *, unsigned char *, PIDLIST_RELATIVE * ); 
void                      __RPC_USER  PIDLIST_RELATIVE_UserFree(     unsigned long *, PIDLIST_RELATIVE * ); 

unsigned long             __RPC_USER  PITEMID_CHILD_UserSize(     unsigned long *, unsigned long            , PITEMID_CHILD * ); 
unsigned char * __RPC_USER  PITEMID_CHILD_UserMarshal(  unsigned long *, unsigned char *, PITEMID_CHILD * ); 
unsigned char * __RPC_USER  PITEMID_CHILD_UserUnmarshal(unsigned long *, unsigned char *, PITEMID_CHILD * ); 
void                      __RPC_USER  PITEMID_CHILD_UserFree(     unsigned long *, PITEMID_CHILD * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HACCEL_UserSize64(     unsigned long *, unsigned long            , HACCEL * ); 
unsigned char * __RPC_USER  HACCEL_UserMarshal64(  unsigned long *, unsigned char *, HACCEL * ); 
unsigned char * __RPC_USER  HACCEL_UserUnmarshal64(unsigned long *, unsigned char *, HACCEL * ); 
void                      __RPC_USER  HACCEL_UserFree64(     unsigned long *, HACCEL * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize64(     unsigned long *, unsigned long            , HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal64(  unsigned long *, unsigned char *, HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree64(     unsigned long *, HBITMAP * ); 

unsigned long             __RPC_USER  HGLOBAL_UserSize64(     unsigned long *, unsigned long            , HGLOBAL * ); 
unsigned char * __RPC_USER  HGLOBAL_UserMarshal64(  unsigned long *, unsigned char *, HGLOBAL * ); 
unsigned char * __RPC_USER  HGLOBAL_UserUnmarshal64(unsigned long *, unsigned char *, HGLOBAL * ); 
void                      __RPC_USER  HGLOBAL_UserFree64(     unsigned long *, HGLOBAL * ); 

unsigned long             __RPC_USER  HICON_UserSize64(     unsigned long *, unsigned long            , HICON * ); 
unsigned char * __RPC_USER  HICON_UserMarshal64(  unsigned long *, unsigned char *, HICON * ); 
unsigned char * __RPC_USER  HICON_UserUnmarshal64(unsigned long *, unsigned char *, HICON * ); 
void                      __RPC_USER  HICON_UserFree64(     unsigned long *, HICON * ); 

unsigned long             __RPC_USER  HMENU_UserSize64(     unsigned long *, unsigned long            , HMENU * ); 
unsigned char * __RPC_USER  HMENU_UserMarshal64(  unsigned long *, unsigned char *, HMENU * ); 
unsigned char * __RPC_USER  HMENU_UserUnmarshal64(unsigned long *, unsigned char *, HMENU * ); 
void                      __RPC_USER  HMENU_UserFree64(     unsigned long *, HMENU * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  PCIDLIST_ABSOLUTE_UserSize64(     unsigned long *, unsigned long            , PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserMarshal64(  unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserUnmarshal64(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PCIDLIST_ABSOLUTE_UserFree64(     unsigned long *, PCIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PCUIDLIST_RELATIVE_UserSize64(     unsigned long *, unsigned long            , PCUIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PCUIDLIST_RELATIVE_UserMarshal64(  unsigned long *, unsigned char *, PCUIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PCUIDLIST_RELATIVE_UserUnmarshal64(unsigned long *, unsigned char *, PCUIDLIST_RELATIVE * ); 
void                      __RPC_USER  PCUIDLIST_RELATIVE_UserFree64(     unsigned long *, PCUIDLIST_RELATIVE * ); 

unsigned long             __RPC_USER  PCUITEMID_CHILD_UserSize64(     unsigned long *, unsigned long            , PCUITEMID_CHILD * ); 
unsigned char * __RPC_USER  PCUITEMID_CHILD_UserMarshal64(  unsigned long *, unsigned char *, PCUITEMID_CHILD * ); 
unsigned char * __RPC_USER  PCUITEMID_CHILD_UserUnmarshal64(unsigned long *, unsigned char *, PCUITEMID_CHILD * ); 
void                      __RPC_USER  PCUITEMID_CHILD_UserFree64(     unsigned long *, PCUITEMID_CHILD * ); 

unsigned long             __RPC_USER  PIDLIST_ABSOLUTE_UserSize64(     unsigned long *, unsigned long            , PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserMarshal64(  unsigned long *, unsigned char *, PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserUnmarshal64(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PIDLIST_ABSOLUTE_UserFree64(     unsigned long *, PIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PIDLIST_RELATIVE_UserSize64(     unsigned long *, unsigned long            , PIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PIDLIST_RELATIVE_UserMarshal64(  unsigned long *, unsigned char *, PIDLIST_RELATIVE * ); 
unsigned char * __RPC_USER  PIDLIST_RELATIVE_UserUnmarshal64(unsigned long *, unsigned char *, PIDLIST_RELATIVE * ); 
void                      __RPC_USER  PIDLIST_RELATIVE_UserFree64(     unsigned long *, PIDLIST_RELATIVE * ); 

unsigned long             __RPC_USER  PITEMID_CHILD_UserSize64(     unsigned long *, unsigned long            , PITEMID_CHILD * ); 
unsigned char * __RPC_USER  PITEMID_CHILD_UserMarshal64(  unsigned long *, unsigned char *, PITEMID_CHILD * ); 
unsigned char * __RPC_USER  PITEMID_CHILD_UserUnmarshal64(unsigned long *, unsigned char *, PITEMID_CHILD * ); 
void                      __RPC_USER  PITEMID_CHILD_UserFree64(     unsigned long *, PITEMID_CHILD * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumIDList_Next_Proxy( 
    IEnumIDList * This,
    /* [in] */ 
    __in  ULONG celt,
    /* [length_is][size_is][out] */ 
    __out_ecount_part(celt, *pceltFetched)  PITEMID_CHILD *rgelt,
    /* [out] */ 
    __out_opt  ULONG *pceltFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumIDList_Next_Stub( 
    IEnumIDList * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) PITEMID_CHILD *rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IEnumObjects_Next_Proxy( 
    IEnumObjects * This,
    /* [in] */ 
    __in  ULONG celt,
    /* [in] */ 
    __in  REFIID riid,
    /* [iid_is][length_is][size_is][out] */ 
    __out_ecount_part(celt, *pceltFetched)  void **rgelt,
    /* [out] */ 
    __out_opt  ULONG *pceltFetched);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumObjects_Next_Stub( 
    IEnumObjects * This,
    /* [in] */ ULONG celt,
    /* [in] */ __RPC__in REFIID riid,
    /* [iid_is][size_is][out] */ __RPC__out_ecount_full(celt) void **rgelt,
    /* [out] */ __RPC__out ULONG *pceltFetched);

/* [local] */ HRESULT STDMETHODCALLTYPE IModalWindow_Show_Proxy( 
    IModalWindow * This,
    /* [in] */ 
    __in  HWND hwndParent);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IModalWindow_Show_Stub( 
    IModalWindow * This,
    /* [in] */ __RPC__in HWND hwndParent);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif




