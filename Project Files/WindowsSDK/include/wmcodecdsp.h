

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for wmcodecdsp.idl:
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

#ifndef __wmcodecdsp_h__
#define __wmcodecdsp_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMValidate_FWD_DEFINED__
#define __IWMValidate_FWD_DEFINED__
typedef interface IWMValidate IWMValidate;
#endif 	/* __IWMValidate_FWD_DEFINED__ */


#ifndef __IValidateBinding_FWD_DEFINED__
#define __IValidateBinding_FWD_DEFINED__
typedef interface IValidateBinding IValidateBinding;
#endif 	/* __IValidateBinding_FWD_DEFINED__ */


#ifndef __IWMVideoDecoderHurryup_FWD_DEFINED__
#define __IWMVideoDecoderHurryup_FWD_DEFINED__
typedef interface IWMVideoDecoderHurryup IWMVideoDecoderHurryup;
#endif 	/* __IWMVideoDecoderHurryup_FWD_DEFINED__ */


#ifndef __IWMVideoForceKeyFrame_FWD_DEFINED__
#define __IWMVideoForceKeyFrame_FWD_DEFINED__
typedef interface IWMVideoForceKeyFrame IWMVideoForceKeyFrame;
#endif 	/* __IWMVideoForceKeyFrame_FWD_DEFINED__ */


#ifndef __IWMCodecStrings_FWD_DEFINED__
#define __IWMCodecStrings_FWD_DEFINED__
typedef interface IWMCodecStrings IWMCodecStrings;
#endif 	/* __IWMCodecStrings_FWD_DEFINED__ */


#ifndef __IWMCodecProps_FWD_DEFINED__
#define __IWMCodecProps_FWD_DEFINED__
typedef interface IWMCodecProps IWMCodecProps;
#endif 	/* __IWMCodecProps_FWD_DEFINED__ */


#ifndef __IWMCodecLeakyBucket_FWD_DEFINED__
#define __IWMCodecLeakyBucket_FWD_DEFINED__
typedef interface IWMCodecLeakyBucket IWMCodecLeakyBucket;
#endif 	/* __IWMCodecLeakyBucket_FWD_DEFINED__ */


#ifndef __IWMCodecOutputTimestamp_FWD_DEFINED__
#define __IWMCodecOutputTimestamp_FWD_DEFINED__
typedef interface IWMCodecOutputTimestamp IWMCodecOutputTimestamp;
#endif 	/* __IWMCodecOutputTimestamp_FWD_DEFINED__ */


#ifndef __IWMVideoDecoderReconBuffer_FWD_DEFINED__
#define __IWMVideoDecoderReconBuffer_FWD_DEFINED__
typedef interface IWMVideoDecoderReconBuffer IWMVideoDecoderReconBuffer;
#endif 	/* __IWMVideoDecoderReconBuffer_FWD_DEFINED__ */


#ifndef __IWMCodecPrivateData_FWD_DEFINED__
#define __IWMCodecPrivateData_FWD_DEFINED__
typedef interface IWMCodecPrivateData IWMCodecPrivateData;
#endif 	/* __IWMCodecPrivateData_FWD_DEFINED__ */


#ifndef __IWMSampleExtensionSupport_FWD_DEFINED__
#define __IWMSampleExtensionSupport_FWD_DEFINED__
typedef interface IWMSampleExtensionSupport IWMSampleExtensionSupport;
#endif 	/* __IWMSampleExtensionSupport_FWD_DEFINED__ */


#ifndef __IWMResamplerProps_FWD_DEFINED__
#define __IWMResamplerProps_FWD_DEFINED__
typedef interface IWMResamplerProps IWMResamplerProps;
#endif 	/* __IWMResamplerProps_FWD_DEFINED__ */


#ifndef __IWMResizerProps_FWD_DEFINED__
#define __IWMResizerProps_FWD_DEFINED__
typedef interface IWMResizerProps IWMResizerProps;
#endif 	/* __IWMResizerProps_FWD_DEFINED__ */


#ifndef __IWMColorLegalizerProps_FWD_DEFINED__
#define __IWMColorLegalizerProps_FWD_DEFINED__
typedef interface IWMColorLegalizerProps IWMColorLegalizerProps;
#endif 	/* __IWMColorLegalizerProps_FWD_DEFINED__ */


#ifndef __IWMInterlaceProps_FWD_DEFINED__
#define __IWMInterlaceProps_FWD_DEFINED__
typedef interface IWMInterlaceProps IWMInterlaceProps;
#endif 	/* __IWMInterlaceProps_FWD_DEFINED__ */


#ifndef __IWMFrameInterpProps_FWD_DEFINED__
#define __IWMFrameInterpProps_FWD_DEFINED__
typedef interface IWMFrameInterpProps IWMFrameInterpProps;
#endif 	/* __IWMFrameInterpProps_FWD_DEFINED__ */


#ifndef __IWMColorConvProps_FWD_DEFINED__
#define __IWMColorConvProps_FWD_DEFINED__
typedef interface IWMColorConvProps IWMColorConvProps;
#endif 	/* __IWMColorConvProps_FWD_DEFINED__ */


#ifndef __CMpeg4DecMediaObject_FWD_DEFINED__
#define __CMpeg4DecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMpeg4DecMediaObject CMpeg4DecMediaObject;
#else
typedef struct CMpeg4DecMediaObject CMpeg4DecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMpeg4DecMediaObject_FWD_DEFINED__ */


#ifndef __CMpeg43DecMediaObject_FWD_DEFINED__
#define __CMpeg43DecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMpeg43DecMediaObject CMpeg43DecMediaObject;
#else
typedef struct CMpeg43DecMediaObject CMpeg43DecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMpeg43DecMediaObject_FWD_DEFINED__ */


#ifndef __CMpeg4sDecMediaObject_FWD_DEFINED__
#define __CMpeg4sDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMpeg4sDecMediaObject CMpeg4sDecMediaObject;
#else
typedef struct CMpeg4sDecMediaObject CMpeg4sDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMpeg4sDecMediaObject_FWD_DEFINED__ */


#ifndef __CMpeg4EncMediaObject_FWD_DEFINED__
#define __CMpeg4EncMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMpeg4EncMediaObject CMpeg4EncMediaObject;
#else
typedef struct CMpeg4EncMediaObject CMpeg4EncMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMpeg4EncMediaObject_FWD_DEFINED__ */


#ifndef __CMpeg4sEncMediaObject_FWD_DEFINED__
#define __CMpeg4sEncMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMpeg4sEncMediaObject CMpeg4sEncMediaObject;
#else
typedef struct CMpeg4sEncMediaObject CMpeg4sEncMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMpeg4sEncMediaObject_FWD_DEFINED__ */


#ifndef __CMSSCDecMediaObject_FWD_DEFINED__
#define __CMSSCDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMSSCDecMediaObject CMSSCDecMediaObject;
#else
typedef struct CMSSCDecMediaObject CMSSCDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMSSCDecMediaObject_FWD_DEFINED__ */


#ifndef __CMSSCEncMediaObject_FWD_DEFINED__
#define __CMSSCEncMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMSSCEncMediaObject CMSSCEncMediaObject;
#else
typedef struct CMSSCEncMediaObject CMSSCEncMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMSSCEncMediaObject_FWD_DEFINED__ */


#ifndef __CMSSCEncMediaObject2_FWD_DEFINED__
#define __CMSSCEncMediaObject2_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMSSCEncMediaObject2 CMSSCEncMediaObject2;
#else
typedef struct CMSSCEncMediaObject2 CMSSCEncMediaObject2;
#endif /* __cplusplus */

#endif 	/* __CMSSCEncMediaObject2_FWD_DEFINED__ */


#ifndef __CWMADecMediaObject_FWD_DEFINED__
#define __CWMADecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMADecMediaObject CWMADecMediaObject;
#else
typedef struct CWMADecMediaObject CWMADecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWMADecMediaObject_FWD_DEFINED__ */


#ifndef __CWMAEncMediaObject_FWD_DEFINED__
#define __CWMAEncMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMAEncMediaObject CWMAEncMediaObject;
#else
typedef struct CWMAEncMediaObject CWMAEncMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWMAEncMediaObject_FWD_DEFINED__ */


#ifndef __CWMSPDecMediaObject_FWD_DEFINED__
#define __CWMSPDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMSPDecMediaObject CWMSPDecMediaObject;
#else
typedef struct CWMSPDecMediaObject CWMSPDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWMSPDecMediaObject_FWD_DEFINED__ */


#ifndef __CWMSPEncMediaObject_FWD_DEFINED__
#define __CWMSPEncMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMSPEncMediaObject CWMSPEncMediaObject;
#else
typedef struct CWMSPEncMediaObject CWMSPEncMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWMSPEncMediaObject_FWD_DEFINED__ */


#ifndef __CWMSPEncMediaObject2_FWD_DEFINED__
#define __CWMSPEncMediaObject2_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMSPEncMediaObject2 CWMSPEncMediaObject2;
#else
typedef struct CWMSPEncMediaObject2 CWMSPEncMediaObject2;
#endif /* __cplusplus */

#endif 	/* __CWMSPEncMediaObject2_FWD_DEFINED__ */


#ifndef __CWMVDecMediaObject_FWD_DEFINED__
#define __CWMVDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMVDecMediaObject CWMVDecMediaObject;
#else
typedef struct CWMVDecMediaObject CWMVDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWMVDecMediaObject_FWD_DEFINED__ */


#ifndef __CWMVEncMediaObject2_FWD_DEFINED__
#define __CWMVEncMediaObject2_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMVEncMediaObject2 CWMVEncMediaObject2;
#else
typedef struct CWMVEncMediaObject2 CWMVEncMediaObject2;
#endif /* __cplusplus */

#endif 	/* __CWMVEncMediaObject2_FWD_DEFINED__ */


#ifndef __CWMVXEncMediaObject_FWD_DEFINED__
#define __CWMVXEncMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMVXEncMediaObject CWMVXEncMediaObject;
#else
typedef struct CWMVXEncMediaObject CWMVXEncMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWMVXEncMediaObject_FWD_DEFINED__ */


#ifndef __CWMV9EncMediaObject_FWD_DEFINED__
#define __CWMV9EncMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMV9EncMediaObject CWMV9EncMediaObject;
#else
typedef struct CWMV9EncMediaObject CWMV9EncMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWMV9EncMediaObject_FWD_DEFINED__ */


#ifndef __CWVC1DecMediaObject_FWD_DEFINED__
#define __CWVC1DecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWVC1DecMediaObject CWVC1DecMediaObject;
#else
typedef struct CWVC1DecMediaObject CWVC1DecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWVC1DecMediaObject_FWD_DEFINED__ */


#ifndef __CWVC1EncMediaObject_FWD_DEFINED__
#define __CWVC1EncMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWVC1EncMediaObject CWVC1EncMediaObject;
#else
typedef struct CWVC1EncMediaObject CWVC1EncMediaObject;
#endif /* __cplusplus */

#endif 	/* __CWVC1EncMediaObject_FWD_DEFINED__ */


#ifndef __CDeColorConvMediaObject_FWD_DEFINED__
#define __CDeColorConvMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDeColorConvMediaObject CDeColorConvMediaObject;
#else
typedef struct CDeColorConvMediaObject CDeColorConvMediaObject;
#endif /* __cplusplus */

#endif 	/* __CDeColorConvMediaObject_FWD_DEFINED__ */


#ifndef __CDVDecoderMediaObject_FWD_DEFINED__
#define __CDVDecoderMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDVDecoderMediaObject CDVDecoderMediaObject;
#else
typedef struct CDVDecoderMediaObject CDVDecoderMediaObject;
#endif /* __cplusplus */

#endif 	/* __CDVDecoderMediaObject_FWD_DEFINED__ */


#ifndef __CDVEncoderMediaObject_FWD_DEFINED__
#define __CDVEncoderMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CDVEncoderMediaObject CDVEncoderMediaObject;
#else
typedef struct CDVEncoderMediaObject CDVEncoderMediaObject;
#endif /* __cplusplus */

#endif 	/* __CDVEncoderMediaObject_FWD_DEFINED__ */


#ifndef __CMpeg2DecMediaObject_FWD_DEFINED__
#define __CMpeg2DecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMpeg2DecMediaObject CMpeg2DecMediaObject;
#else
typedef struct CMpeg2DecMediaObject CMpeg2DecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMpeg2DecMediaObject_FWD_DEFINED__ */


#ifndef __CPK_DS_MPEG2Decoder_FWD_DEFINED__
#define __CPK_DS_MPEG2Decoder_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPK_DS_MPEG2Decoder CPK_DS_MPEG2Decoder;
#else
typedef struct CPK_DS_MPEG2Decoder CPK_DS_MPEG2Decoder;
#endif /* __cplusplus */

#endif 	/* __CPK_DS_MPEG2Decoder_FWD_DEFINED__ */


#ifndef __CAC3DecMediaObject_FWD_DEFINED__
#define __CAC3DecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CAC3DecMediaObject CAC3DecMediaObject;
#else
typedef struct CAC3DecMediaObject CAC3DecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CAC3DecMediaObject_FWD_DEFINED__ */


#ifndef __CPK_DS_AC3Decoder_FWD_DEFINED__
#define __CPK_DS_AC3Decoder_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPK_DS_AC3Decoder CPK_DS_AC3Decoder;
#else
typedef struct CPK_DS_AC3Decoder CPK_DS_AC3Decoder;
#endif /* __cplusplus */

#endif 	/* __CPK_DS_AC3Decoder_FWD_DEFINED__ */


#ifndef __CMP3DecMediaObject_FWD_DEFINED__
#define __CMP3DecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMP3DecMediaObject CMP3DecMediaObject;
#else
typedef struct CMP3DecMediaObject CMP3DecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMP3DecMediaObject_FWD_DEFINED__ */


#ifndef __CResamplerMediaObject_FWD_DEFINED__
#define __CResamplerMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CResamplerMediaObject CResamplerMediaObject;
#else
typedef struct CResamplerMediaObject CResamplerMediaObject;
#endif /* __cplusplus */

#endif 	/* __CResamplerMediaObject_FWD_DEFINED__ */


#ifndef __CResizerMediaObject_FWD_DEFINED__
#define __CResizerMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CResizerMediaObject CResizerMediaObject;
#else
typedef struct CResizerMediaObject CResizerMediaObject;
#endif /* __cplusplus */

#endif 	/* __CResizerMediaObject_FWD_DEFINED__ */


#ifndef __CInterlaceMediaObject_FWD_DEFINED__
#define __CInterlaceMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CInterlaceMediaObject CInterlaceMediaObject;
#else
typedef struct CInterlaceMediaObject CInterlaceMediaObject;
#endif /* __cplusplus */

#endif 	/* __CInterlaceMediaObject_FWD_DEFINED__ */


#ifndef __CWMAudioLFXAPO_FWD_DEFINED__
#define __CWMAudioLFXAPO_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMAudioLFXAPO CWMAudioLFXAPO;
#else
typedef struct CWMAudioLFXAPO CWMAudioLFXAPO;
#endif /* __cplusplus */

#endif 	/* __CWMAudioLFXAPO_FWD_DEFINED__ */


#ifndef __CWMAudioGFXAPO_FWD_DEFINED__
#define __CWMAudioGFXAPO_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMAudioGFXAPO CWMAudioGFXAPO;
#else
typedef struct CWMAudioGFXAPO CWMAudioGFXAPO;
#endif /* __cplusplus */

#endif 	/* __CWMAudioGFXAPO_FWD_DEFINED__ */


#ifndef __CWMAudioSpdTxDMO_FWD_DEFINED__
#define __CWMAudioSpdTxDMO_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMAudioSpdTxDMO CWMAudioSpdTxDMO;
#else
typedef struct CWMAudioSpdTxDMO CWMAudioSpdTxDMO;
#endif /* __cplusplus */

#endif 	/* __CWMAudioSpdTxDMO_FWD_DEFINED__ */


#ifndef __CWMAudioAEC_FWD_DEFINED__
#define __CWMAudioAEC_FWD_DEFINED__

#ifdef __cplusplus
typedef class CWMAudioAEC CWMAudioAEC;
#else
typedef struct CWMAudioAEC CWMAudioAEC;
#endif /* __cplusplus */

#endif 	/* __CWMAudioAEC_FWD_DEFINED__ */


#ifndef __CClusterDetectorDmo_FWD_DEFINED__
#define __CClusterDetectorDmo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CClusterDetectorDmo CClusterDetectorDmo;
#else
typedef struct CClusterDetectorDmo CClusterDetectorDmo;
#endif /* __cplusplus */

#endif 	/* __CClusterDetectorDmo_FWD_DEFINED__ */


#ifndef __CColorControlDmo_FWD_DEFINED__
#define __CColorControlDmo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CColorControlDmo CColorControlDmo;
#else
typedef struct CColorControlDmo CColorControlDmo;
#endif /* __cplusplus */

#endif 	/* __CColorControlDmo_FWD_DEFINED__ */


#ifndef __CColorConvertDMO_FWD_DEFINED__
#define __CColorConvertDMO_FWD_DEFINED__

#ifdef __cplusplus
typedef class CColorConvertDMO CColorConvertDMO;
#else
typedef struct CColorConvertDMO CColorConvertDMO;
#endif /* __cplusplus */

#endif 	/* __CColorConvertDMO_FWD_DEFINED__ */


#ifndef __CColorLegalizerDmo_FWD_DEFINED__
#define __CColorLegalizerDmo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CColorLegalizerDmo CColorLegalizerDmo;
#else
typedef struct CColorLegalizerDmo CColorLegalizerDmo;
#endif /* __cplusplus */

#endif 	/* __CColorLegalizerDmo_FWD_DEFINED__ */


#ifndef __CFrameInterpDMO_FWD_DEFINED__
#define __CFrameInterpDMO_FWD_DEFINED__

#ifdef __cplusplus
typedef class CFrameInterpDMO CFrameInterpDMO;
#else
typedef struct CFrameInterpDMO CFrameInterpDMO;
#endif /* __cplusplus */

#endif 	/* __CFrameInterpDMO_FWD_DEFINED__ */


#ifndef __CFrameRateConvertDmo_FWD_DEFINED__
#define __CFrameRateConvertDmo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CFrameRateConvertDmo CFrameRateConvertDmo;
#else
typedef struct CFrameRateConvertDmo CFrameRateConvertDmo;
#endif /* __cplusplus */

#endif 	/* __CFrameRateConvertDmo_FWD_DEFINED__ */


#ifndef __CResizerDMO_FWD_DEFINED__
#define __CResizerDMO_FWD_DEFINED__

#ifdef __cplusplus
typedef class CResizerDMO CResizerDMO;
#else
typedef struct CResizerDMO CResizerDMO;
#endif /* __cplusplus */

#endif 	/* __CResizerDMO_FWD_DEFINED__ */


#ifndef __CShotDetectorDmo_FWD_DEFINED__
#define __CShotDetectorDmo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CShotDetectorDmo CShotDetectorDmo;
#else
typedef struct CShotDetectorDmo CShotDetectorDmo;
#endif /* __cplusplus */

#endif 	/* __CShotDetectorDmo_FWD_DEFINED__ */


#ifndef __CSmpteTransformsDmo_FWD_DEFINED__
#define __CSmpteTransformsDmo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CSmpteTransformsDmo CSmpteTransformsDmo;
#else
typedef struct CSmpteTransformsDmo CSmpteTransformsDmo;
#endif /* __cplusplus */

#endif 	/* __CSmpteTransformsDmo_FWD_DEFINED__ */


#ifndef __CThumbnailGeneratorDmo_FWD_DEFINED__
#define __CThumbnailGeneratorDmo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CThumbnailGeneratorDmo CThumbnailGeneratorDmo;
#else
typedef struct CThumbnailGeneratorDmo CThumbnailGeneratorDmo;
#endif /* __cplusplus */

#endif 	/* __CThumbnailGeneratorDmo_FWD_DEFINED__ */


#ifndef __CTocGeneratorDmo_FWD_DEFINED__
#define __CTocGeneratorDmo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CTocGeneratorDmo CTocGeneratorDmo;
#else
typedef struct CTocGeneratorDmo CTocGeneratorDmo;
#endif /* __cplusplus */

#endif 	/* __CTocGeneratorDmo_FWD_DEFINED__ */


#ifndef __CMPEGAACDecMediaObject_FWD_DEFINED__
#define __CMPEGAACDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMPEGAACDecMediaObject CMPEGAACDecMediaObject;
#else
typedef struct CMPEGAACDecMediaObject CMPEGAACDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CMPEGAACDecMediaObject_FWD_DEFINED__ */


#ifndef __CNokiaAACDecMediaObject_FWD_DEFINED__
#define __CNokiaAACDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CNokiaAACDecMediaObject CNokiaAACDecMediaObject;
#else
typedef struct CNokiaAACDecMediaObject CNokiaAACDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CNokiaAACDecMediaObject_FWD_DEFINED__ */


#ifndef __CVodafoneAACDecMediaObject_FWD_DEFINED__
#define __CVodafoneAACDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CVodafoneAACDecMediaObject CVodafoneAACDecMediaObject;
#else
typedef struct CVodafoneAACDecMediaObject CVodafoneAACDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CVodafoneAACDecMediaObject_FWD_DEFINED__ */


#ifndef __CXeonAACCCDecMediaObject_FWD_DEFINED__
#define __CXeonAACCCDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CXeonAACCCDecMediaObject CXeonAACCCDecMediaObject;
#else
typedef struct CXeonAACCCDecMediaObject CXeonAACCCDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CXeonAACCCDecMediaObject_FWD_DEFINED__ */


#ifndef __CNokiaAACCCDecMediaObject_FWD_DEFINED__
#define __CNokiaAACCCDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CNokiaAACCCDecMediaObject CNokiaAACCCDecMediaObject;
#else
typedef struct CNokiaAACCCDecMediaObject CNokiaAACCCDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CNokiaAACCCDecMediaObject_FWD_DEFINED__ */


#ifndef __CVodafoneAACCCDecMediaObject_FWD_DEFINED__
#define __CVodafoneAACCCDecMediaObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CVodafoneAACCCDecMediaObject CVodafoneAACCCDecMediaObject;
#else
typedef struct CVodafoneAACCCDecMediaObject CVodafoneAACCCDecMediaObject;
#endif /* __cplusplus */

#endif 	/* __CVodafoneAACCCDecMediaObject_FWD_DEFINED__ */


#ifndef __CMPEG2EncoderDS_FWD_DEFINED__
#define __CMPEG2EncoderDS_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMPEG2EncoderDS CMPEG2EncoderDS;
#else
typedef struct CMPEG2EncoderDS CMPEG2EncoderDS;
#endif /* __cplusplus */

#endif 	/* __CMPEG2EncoderDS_FWD_DEFINED__ */


#ifndef __CMPEG2EncoderVideoDS_FWD_DEFINED__
#define __CMPEG2EncoderVideoDS_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMPEG2EncoderVideoDS CMPEG2EncoderVideoDS;
#else
typedef struct CMPEG2EncoderVideoDS CMPEG2EncoderVideoDS;
#endif /* __cplusplus */

#endif 	/* __CMPEG2EncoderVideoDS_FWD_DEFINED__ */


#ifndef __CMPEG2EncoderAudioDS_FWD_DEFINED__
#define __CMPEG2EncoderAudioDS_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMPEG2EncoderAudioDS CMPEG2EncoderAudioDS;
#else
typedef struct CMPEG2EncoderAudioDS CMPEG2EncoderAudioDS;
#endif /* __cplusplus */

#endif 	/* __CMPEG2EncoderAudioDS_FWD_DEFINED__ */


#ifndef __CMPEG2AudDecoderDS_FWD_DEFINED__
#define __CMPEG2AudDecoderDS_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMPEG2AudDecoderDS CMPEG2AudDecoderDS;
#else
typedef struct CMPEG2AudDecoderDS CMPEG2AudDecoderDS;
#endif /* __cplusplus */

#endif 	/* __CMPEG2AudDecoderDS_FWD_DEFINED__ */


#ifndef __CMPEG2VidDecoderDS_FWD_DEFINED__
#define __CMPEG2VidDecoderDS_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMPEG2VidDecoderDS CMPEG2VidDecoderDS;
#else
typedef struct CMPEG2VidDecoderDS CMPEG2VidDecoderDS;
#endif /* __cplusplus */

#endif 	/* __CMPEG2VidDecoderDS_FWD_DEFINED__ */


#ifndef __CMSAC3Enc_FWD_DEFINED__
#define __CMSAC3Enc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CMSAC3Enc CMSAC3Enc;
#else
typedef struct CMSAC3Enc CMSAC3Enc;
#endif /* __cplusplus */

#endif 	/* __CMSAC3Enc_FWD_DEFINED__ */


/* header files for imported files */
#include "mediaobj.h"
#include "strmif.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wmcodecdsp_0000_0000 */
/* [local] */ 

#pragma once
#pragma once
#pragma once
//=========================================================================
//
//  THIS SOFTWARE HAS BEEN LICENSED FROM MICROSOFT CORPORATION PURSUANT 
//  TO THE TERMS OF AN END USER LICENSE AGREEMENT ("EULA").  
//  PLEASE REFER TO THE TEXT OF THE EULA TO DETERMINE THE RIGHTS TO USE THE SOFTWARE.  
//
// Copyright (C) Microsoft Corporation, 1999 - 1999  All Rights Reserved.
//
//=========================================================================
typedef 
enum WMT_PROP_DATATYPE
    {	WMT_PROP_TYPE_DWORD	= 0,
	WMT_PROP_TYPE_STRING	= 1,
	WMT_PROP_TYPE_BINARY	= 2,
	WMT_PROP_TYPE_BOOL	= 3,
	WMT_PROP_TYPE_QWORD	= 4,
	WMT_PROP_TYPE_WORD	= 5,
	WMT_PROP_TYPE_GUID	= 6
    } 	WMT_PROP_DATATYPE;



extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0000_v0_0_s_ifspec;

#ifndef __IWMValidate_INTERFACE_DEFINED__
#define __IWMValidate_INTERFACE_DEFINED__

/* interface IWMValidate */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IWMValidate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CEE3DEF2-3808-414d-BE66-FAFD472210BC")
    IWMValidate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetIdentifier( 
            /* [in] */ GUID guidValidationID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMValidateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMValidate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMValidate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMValidate * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetIdentifier )( 
            IWMValidate * This,
            /* [in] */ GUID guidValidationID);
        
        END_INTERFACE
    } IWMValidateVtbl;

    interface IWMValidate
    {
        CONST_VTBL struct IWMValidateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMValidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMValidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMValidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMValidate_SetIdentifier(This,guidValidationID)	\
    ( (This)->lpVtbl -> SetIdentifier(This,guidValidationID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMValidate_INTERFACE_DEFINED__ */


#ifndef __IValidateBinding_INTERFACE_DEFINED__
#define __IValidateBinding_INTERFACE_DEFINED__

/* interface IValidateBinding */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IValidateBinding;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04A578B2-E778-422a-A805-B3EE54D90BD9")
    IValidateBinding : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIdentifier( 
            /* [in] */ GUID guidLicensorID,
            /* [size_is][in] */ __RPC__in_ecount_full(cbEphemeron) BYTE *pbEphemeron,
            /* [in] */ DWORD cbEphemeron,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcbBlobSize) BYTE **ppbBlobValidationID,
            /* [out] */ __RPC__out DWORD *pcbBlobSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IValidateBindingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IValidateBinding * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IValidateBinding * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IValidateBinding * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIdentifier )( 
            IValidateBinding * This,
            /* [in] */ GUID guidLicensorID,
            /* [size_is][in] */ __RPC__in_ecount_full(cbEphemeron) BYTE *pbEphemeron,
            /* [in] */ DWORD cbEphemeron,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcbBlobSize) BYTE **ppbBlobValidationID,
            /* [out] */ __RPC__out DWORD *pcbBlobSize);
        
        END_INTERFACE
    } IValidateBindingVtbl;

    interface IValidateBinding
    {
        CONST_VTBL struct IValidateBindingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IValidateBinding_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IValidateBinding_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IValidateBinding_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IValidateBinding_GetIdentifier(This,guidLicensorID,pbEphemeron,cbEphemeron,ppbBlobValidationID,pcbBlobSize)	\
    ( (This)->lpVtbl -> GetIdentifier(This,guidLicensorID,pbEphemeron,cbEphemeron,ppbBlobValidationID,pcbBlobSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IValidateBinding_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wmcodecdsp_0000_0002 */
/* [local] */ 

////////////////////////////////////////////////////////////////
//
// The Speech code supports the following format property.
//
static const WCHAR *g_wszSpeechFormatCaps = L"SpeechFormatCap";
static const WCHAR *g_wszWMCPCodecName = L"_CODECNAME";
static const WCHAR *g_wszWMCPSupportedVBRModes = L"_SUPPORTEDVBRMODES";
#define WM_CODEC_ONEPASS_CBR 1
#define WM_CODEC_ONEPASS_VBR 2
#define WM_CODEC_TWOPASS_CBR 4
#define WM_CODEC_TWOPASS_VBR_UNCONSTRAINED   8
#define WM_CODEC_TWOPASS_VBR_PEAKCONSTRAINED 16
static const WCHAR *g_wszWMCPAudioVBRSupported = L"_VBRENABLED";
static const WCHAR *g_wszWMCPAudioVBRQuality = L"_VBRQUALITY";
static const WCHAR *g_wszWMCPMaxPasses = L"_PASSESRECOMMENDED";
static const WCHAR *g_wszWMCPDefaultCrisp = L"_DEFAULTCRISP";


extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0002_v0_0_s_ifspec;

#ifndef __IWMVideoDecoderHurryup_INTERFACE_DEFINED__
#define __IWMVideoDecoderHurryup_INTERFACE_DEFINED__

/* interface IWMVideoDecoderHurryup */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMVideoDecoderHurryup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("352bb3bd-2d4d-4323-9e71-dcdcfbd53ca6")
    IWMVideoDecoderHurryup : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetHurryup( 
            /* [in] */ LONG lHurryup) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHurryup( 
            /* [out] */ LONG *plHurryup) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMVideoDecoderHurryupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMVideoDecoderHurryup * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMVideoDecoderHurryup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMVideoDecoderHurryup * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetHurryup )( 
            IWMVideoDecoderHurryup * This,
            /* [in] */ LONG lHurryup);
        
        HRESULT ( STDMETHODCALLTYPE *GetHurryup )( 
            IWMVideoDecoderHurryup * This,
            /* [out] */ LONG *plHurryup);
        
        END_INTERFACE
    } IWMVideoDecoderHurryupVtbl;

    interface IWMVideoDecoderHurryup
    {
        CONST_VTBL struct IWMVideoDecoderHurryupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMVideoDecoderHurryup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMVideoDecoderHurryup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMVideoDecoderHurryup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMVideoDecoderHurryup_SetHurryup(This,lHurryup)	\
    ( (This)->lpVtbl -> SetHurryup(This,lHurryup) ) 

#define IWMVideoDecoderHurryup_GetHurryup(This,plHurryup)	\
    ( (This)->lpVtbl -> GetHurryup(This,plHurryup) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMVideoDecoderHurryup_INTERFACE_DEFINED__ */


#ifndef __IWMVideoForceKeyFrame_INTERFACE_DEFINED__
#define __IWMVideoForceKeyFrame_INTERFACE_DEFINED__

/* interface IWMVideoForceKeyFrame */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMVideoForceKeyFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F8496BE-5B9A-41b9-A9E8-F21CD80596C2")
    IWMVideoForceKeyFrame : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetKeyFrame( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMVideoForceKeyFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMVideoForceKeyFrame * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMVideoForceKeyFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMVideoForceKeyFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetKeyFrame )( 
            IWMVideoForceKeyFrame * This);
        
        END_INTERFACE
    } IWMVideoForceKeyFrameVtbl;

    interface IWMVideoForceKeyFrame
    {
        CONST_VTBL struct IWMVideoForceKeyFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMVideoForceKeyFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMVideoForceKeyFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMVideoForceKeyFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMVideoForceKeyFrame_SetKeyFrame(This)	\
    ( (This)->lpVtbl -> SetKeyFrame(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMVideoForceKeyFrame_INTERFACE_DEFINED__ */


#ifndef __IWMCodecStrings_INTERFACE_DEFINED__
#define __IWMCodecStrings_INTERFACE_DEFINED__

/* interface IWMCodecStrings */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMCodecStrings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A7B2504B-E58A-47fb-958B-CAC7165A057D")
    IWMCodecStrings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ DMO_MEDIA_TYPE *pmt,
            /* [in] */ ULONG cchLength,
            /* [size_is][unique][out][in] */ 
            __out_ecount_opt(cChLength)  LPWSTR szName,
            /* [out] */ ULONG *pcchLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [in] */ DMO_MEDIA_TYPE *pmt,
            /* [in] */ ULONG cchLength,
            /* [size_is][unique][out][in] */ 
            __out_ecount_opt(cChLength)  LPWSTR szDescription,
            /* [out] */ ULONG *pcchLength) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMCodecStringsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMCodecStrings * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMCodecStrings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMCodecStrings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IWMCodecStrings * This,
            /* [in] */ DMO_MEDIA_TYPE *pmt,
            /* [in] */ ULONG cchLength,
            /* [size_is][unique][out][in] */ 
            __out_ecount_opt(cChLength)  LPWSTR szName,
            /* [out] */ ULONG *pcchLength);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IWMCodecStrings * This,
            /* [in] */ DMO_MEDIA_TYPE *pmt,
            /* [in] */ ULONG cchLength,
            /* [size_is][unique][out][in] */ 
            __out_ecount_opt(cChLength)  LPWSTR szDescription,
            /* [out] */ ULONG *pcchLength);
        
        END_INTERFACE
    } IWMCodecStringsVtbl;

    interface IWMCodecStrings
    {
        CONST_VTBL struct IWMCodecStringsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMCodecStrings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMCodecStrings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMCodecStrings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMCodecStrings_GetName(This,pmt,cchLength,szName,pcchLength)	\
    ( (This)->lpVtbl -> GetName(This,pmt,cchLength,szName,pcchLength) ) 

#define IWMCodecStrings_GetDescription(This,pmt,cchLength,szDescription,pcchLength)	\
    ( (This)->lpVtbl -> GetDescription(This,pmt,cchLength,szDescription,pcchLength) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMCodecStrings_INTERFACE_DEFINED__ */


#ifndef __IWMCodecProps_INTERFACE_DEFINED__
#define __IWMCodecProps_INTERFACE_DEFINED__

/* interface IWMCodecProps */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMCodecProps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2573e11a-f01a-4fdd-a98d-63b8e0ba9589")
    IWMCodecProps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFormatProp( 
            /* [in] */ DMO_MEDIA_TYPE *pmt,
            /* [in] */ LPCWSTR pszName,
            /* [out] */ WMT_PROP_DATATYPE *pType,
            /* [size_is][unique][out][in] */ BYTE *pValue,
            /* [out][in] */ DWORD *pdwSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodecProp( 
            /* [in] */ DWORD dwFormat,
            /* [in] */ LPCWSTR pszName,
            /* [out] */ WMT_PROP_DATATYPE *pType,
            /* [size_is][unique][out][in] */ BYTE *pValue,
            /* [out][in] */ DWORD *pdwSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMCodecPropsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMCodecProps * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMCodecProps * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMCodecProps * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFormatProp )( 
            IWMCodecProps * This,
            /* [in] */ DMO_MEDIA_TYPE *pmt,
            /* [in] */ LPCWSTR pszName,
            /* [out] */ WMT_PROP_DATATYPE *pType,
            /* [size_is][unique][out][in] */ BYTE *pValue,
            /* [out][in] */ DWORD *pdwSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodecProp )( 
            IWMCodecProps * This,
            /* [in] */ DWORD dwFormat,
            /* [in] */ LPCWSTR pszName,
            /* [out] */ WMT_PROP_DATATYPE *pType,
            /* [size_is][unique][out][in] */ BYTE *pValue,
            /* [out][in] */ DWORD *pdwSize);
        
        END_INTERFACE
    } IWMCodecPropsVtbl;

    interface IWMCodecProps
    {
        CONST_VTBL struct IWMCodecPropsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMCodecProps_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMCodecProps_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMCodecProps_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMCodecProps_GetFormatProp(This,pmt,pszName,pType,pValue,pdwSize)	\
    ( (This)->lpVtbl -> GetFormatProp(This,pmt,pszName,pType,pValue,pdwSize) ) 

#define IWMCodecProps_GetCodecProp(This,dwFormat,pszName,pType,pValue,pdwSize)	\
    ( (This)->lpVtbl -> GetCodecProp(This,dwFormat,pszName,pType,pValue,pdwSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMCodecProps_INTERFACE_DEFINED__ */


#ifndef __IWMCodecLeakyBucket_INTERFACE_DEFINED__
#define __IWMCodecLeakyBucket_INTERFACE_DEFINED__

/* interface IWMCodecLeakyBucket */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMCodecLeakyBucket;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A81BA647-6227-43b7-B231-C7B15135DD7D")
    IWMCodecLeakyBucket : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetBufferSizeBits( 
            /* [in] */ ULONG ulBufferSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBufferSizeBits( 
            /* [out] */ ULONG *pulBufferSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBufferFullnessBits( 
            /* [in] */ ULONG ulBufferFullness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBufferFullnessBits( 
            /* [out] */ ULONG *pulBufferFullness) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMCodecLeakyBucketVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMCodecLeakyBucket * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMCodecLeakyBucket * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMCodecLeakyBucket * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetBufferSizeBits )( 
            IWMCodecLeakyBucket * This,
            /* [in] */ ULONG ulBufferSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetBufferSizeBits )( 
            IWMCodecLeakyBucket * This,
            /* [out] */ ULONG *pulBufferSize);
        
        HRESULT ( STDMETHODCALLTYPE *SetBufferFullnessBits )( 
            IWMCodecLeakyBucket * This,
            /* [in] */ ULONG ulBufferFullness);
        
        HRESULT ( STDMETHODCALLTYPE *GetBufferFullnessBits )( 
            IWMCodecLeakyBucket * This,
            /* [out] */ ULONG *pulBufferFullness);
        
        END_INTERFACE
    } IWMCodecLeakyBucketVtbl;

    interface IWMCodecLeakyBucket
    {
        CONST_VTBL struct IWMCodecLeakyBucketVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMCodecLeakyBucket_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMCodecLeakyBucket_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMCodecLeakyBucket_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMCodecLeakyBucket_SetBufferSizeBits(This,ulBufferSize)	\
    ( (This)->lpVtbl -> SetBufferSizeBits(This,ulBufferSize) ) 

#define IWMCodecLeakyBucket_GetBufferSizeBits(This,pulBufferSize)	\
    ( (This)->lpVtbl -> GetBufferSizeBits(This,pulBufferSize) ) 

#define IWMCodecLeakyBucket_SetBufferFullnessBits(This,ulBufferFullness)	\
    ( (This)->lpVtbl -> SetBufferFullnessBits(This,ulBufferFullness) ) 

#define IWMCodecLeakyBucket_GetBufferFullnessBits(This,pulBufferFullness)	\
    ( (This)->lpVtbl -> GetBufferFullnessBits(This,pulBufferFullness) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMCodecLeakyBucket_INTERFACE_DEFINED__ */


#ifndef __IWMCodecOutputTimestamp_INTERFACE_DEFINED__
#define __IWMCodecOutputTimestamp_INTERFACE_DEFINED__

/* interface IWMCodecOutputTimestamp */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMCodecOutputTimestamp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B72ADF95-7ADC-4a72-BC05-577D8EA6BF68")
    IWMCodecOutputTimestamp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNextOutputTime( 
            /* [out] */ REFERENCE_TIME *prtTime) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMCodecOutputTimestampVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMCodecOutputTimestamp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMCodecOutputTimestamp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMCodecOutputTimestamp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextOutputTime )( 
            IWMCodecOutputTimestamp * This,
            /* [out] */ REFERENCE_TIME *prtTime);
        
        END_INTERFACE
    } IWMCodecOutputTimestampVtbl;

    interface IWMCodecOutputTimestamp
    {
        CONST_VTBL struct IWMCodecOutputTimestampVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMCodecOutputTimestamp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMCodecOutputTimestamp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMCodecOutputTimestamp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMCodecOutputTimestamp_GetNextOutputTime(This,prtTime)	\
    ( (This)->lpVtbl -> GetNextOutputTime(This,prtTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMCodecOutputTimestamp_INTERFACE_DEFINED__ */


#ifndef __IWMVideoDecoderReconBuffer_INTERFACE_DEFINED__
#define __IWMVideoDecoderReconBuffer_INTERFACE_DEFINED__

/* interface IWMVideoDecoderReconBuffer */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMVideoDecoderReconBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45BDA2AC-88E2-4923-98BA-3949080711A3")
    IWMVideoDecoderReconBuffer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetReconstructedVideoFrameSize( 
            /* [out] */ DWORD *pdwSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReconstructedVideoFrame( 
            /* [out] */ IMediaBuffer *pBuf) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReconstructedVideoFrame( 
            /* [in] */ IMediaBuffer *pBuf) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMVideoDecoderReconBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMVideoDecoderReconBuffer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMVideoDecoderReconBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMVideoDecoderReconBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetReconstructedVideoFrameSize )( 
            IWMVideoDecoderReconBuffer * This,
            /* [out] */ DWORD *pdwSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetReconstructedVideoFrame )( 
            IWMVideoDecoderReconBuffer * This,
            /* [out] */ IMediaBuffer *pBuf);
        
        HRESULT ( STDMETHODCALLTYPE *SetReconstructedVideoFrame )( 
            IWMVideoDecoderReconBuffer * This,
            /* [in] */ IMediaBuffer *pBuf);
        
        END_INTERFACE
    } IWMVideoDecoderReconBufferVtbl;

    interface IWMVideoDecoderReconBuffer
    {
        CONST_VTBL struct IWMVideoDecoderReconBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMVideoDecoderReconBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMVideoDecoderReconBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMVideoDecoderReconBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMVideoDecoderReconBuffer_GetReconstructedVideoFrameSize(This,pdwSize)	\
    ( (This)->lpVtbl -> GetReconstructedVideoFrameSize(This,pdwSize) ) 

#define IWMVideoDecoderReconBuffer_GetReconstructedVideoFrame(This,pBuf)	\
    ( (This)->lpVtbl -> GetReconstructedVideoFrame(This,pBuf) ) 

#define IWMVideoDecoderReconBuffer_SetReconstructedVideoFrame(This,pBuf)	\
    ( (This)->lpVtbl -> SetReconstructedVideoFrame(This,pBuf) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMVideoDecoderReconBuffer_INTERFACE_DEFINED__ */


#ifndef __IWMCodecPrivateData_INTERFACE_DEFINED__
#define __IWMCodecPrivateData_INTERFACE_DEFINED__

/* interface IWMCodecPrivateData */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMCodecPrivateData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73F0BE8E-57F7-4f01-AA66-9F57340CFE0E")
    IWMCodecPrivateData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPartialOutputType( 
            /* [in] */ DMO_MEDIA_TYPE *pmt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrivateData( 
            /* [size_is][unique][out][in] */ BYTE *pbData,
            /* [out][in] */ ULONG *pcbData) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMCodecPrivateDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMCodecPrivateData * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMCodecPrivateData * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMCodecPrivateData * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetPartialOutputType )( 
            IWMCodecPrivateData * This,
            /* [in] */ DMO_MEDIA_TYPE *pmt);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )( 
            IWMCodecPrivateData * This,
            /* [size_is][unique][out][in] */ BYTE *pbData,
            /* [out][in] */ ULONG *pcbData);
        
        END_INTERFACE
    } IWMCodecPrivateDataVtbl;

    interface IWMCodecPrivateData
    {
        CONST_VTBL struct IWMCodecPrivateDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMCodecPrivateData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMCodecPrivateData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMCodecPrivateData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMCodecPrivateData_SetPartialOutputType(This,pmt)	\
    ( (This)->lpVtbl -> SetPartialOutputType(This,pmt) ) 

#define IWMCodecPrivateData_GetPrivateData(This,pbData,pcbData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,pbData,pcbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMCodecPrivateData_INTERFACE_DEFINED__ */


#ifndef __IWMSampleExtensionSupport_INTERFACE_DEFINED__
#define __IWMSampleExtensionSupport_INTERFACE_DEFINED__

/* interface IWMSampleExtensionSupport */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMSampleExtensionSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9bca9884-0604-4c2a-87da-793ff4d586c3")
    IWMSampleExtensionSupport : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetUseSampleExtensions( 
            BOOL fUseExtensions) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMSampleExtensionSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMSampleExtensionSupport * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMSampleExtensionSupport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMSampleExtensionSupport * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetUseSampleExtensions )( 
            IWMSampleExtensionSupport * This,
            BOOL fUseExtensions);
        
        END_INTERFACE
    } IWMSampleExtensionSupportVtbl;

    interface IWMSampleExtensionSupport
    {
        CONST_VTBL struct IWMSampleExtensionSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMSampleExtensionSupport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMSampleExtensionSupport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMSampleExtensionSupport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMSampleExtensionSupport_SetUseSampleExtensions(This,fUseExtensions)	\
    ( (This)->lpVtbl -> SetUseSampleExtensions(This,fUseExtensions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMSampleExtensionSupport_INTERFACE_DEFINED__ */


#ifndef __IWMResamplerProps_INTERFACE_DEFINED__
#define __IWMResamplerProps_INTERFACE_DEFINED__

/* interface IWMResamplerProps */
/* [local][unique][helpstring][uuid][object] */ 

typedef float ChMtxType;


EXTERN_C const IID IID_IWMResamplerProps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7E9984F-F09F-4da4-903F-6E2E0EFE56B5")
    IWMResamplerProps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetHalfFilterLength( 
            /* [in] */ LONG lhalfFilterLen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUserChannelMtx( 
            /* [in] */ ChMtxType *userChannelMtx) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMResamplerPropsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMResamplerProps * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMResamplerProps * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMResamplerProps * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetHalfFilterLength )( 
            IWMResamplerProps * This,
            /* [in] */ LONG lhalfFilterLen);
        
        HRESULT ( STDMETHODCALLTYPE *SetUserChannelMtx )( 
            IWMResamplerProps * This,
            /* [in] */ ChMtxType *userChannelMtx);
        
        END_INTERFACE
    } IWMResamplerPropsVtbl;

    interface IWMResamplerProps
    {
        CONST_VTBL struct IWMResamplerPropsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMResamplerProps_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMResamplerProps_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMResamplerProps_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMResamplerProps_SetHalfFilterLength(This,lhalfFilterLen)	\
    ( (This)->lpVtbl -> SetHalfFilterLength(This,lhalfFilterLen) ) 

#define IWMResamplerProps_SetUserChannelMtx(This,userChannelMtx)	\
    ( (This)->lpVtbl -> SetUserChannelMtx(This,userChannelMtx) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMResamplerProps_INTERFACE_DEFINED__ */


#ifndef __IWMResizerProps_INTERFACE_DEFINED__
#define __IWMResizerProps_INTERFACE_DEFINED__

/* interface IWMResizerProps */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMResizerProps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57665D4C-0414-4faa-905B-10E546F81C33")
    IWMResizerProps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetResizerQuality( 
            /* [in] */ LONG lquality) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInterlaceMode( 
            /* [in] */ LONG lmode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipRegion( 
            /* [in] */ LONG lClipOriXSrc,
            /* [in] */ LONG lClipOriYSrc,
            /* [in] */ LONG lClipWidthSrc,
            /* [in] */ LONG lClipHeightSrc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFullCropRegion( 
            /* [in] */ LONG lClipOriXSrc,
            /* [in] */ LONG lClipOriYSrc,
            /* [in] */ LONG lClipWidthSrc,
            /* [in] */ LONG lClipHeightSrc,
            /* [in] */ LONG lClipOriXDst,
            /* [in] */ LONG lClipOriYDst,
            /* [in] */ LONG lClipWidthDst,
            /* [in] */ LONG lClipHeightDst) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFullCropRegion( 
            /* [out] */ LONG *lClipOriXSrc,
            /* [out] */ LONG *lClipOriYSrc,
            /* [out] */ LONG *lClipWidthSrc,
            /* [out] */ LONG *lClipHeightSrc,
            /* [out] */ LONG *lClipOriXDst,
            /* [out] */ LONG *lClipOriYDst,
            /* [out] */ LONG *lClipWidthDst,
            /* [out] */ LONG *lClipHeightDst) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMResizerPropsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMResizerProps * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMResizerProps * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMResizerProps * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetResizerQuality )( 
            IWMResizerProps * This,
            /* [in] */ LONG lquality);
        
        HRESULT ( STDMETHODCALLTYPE *SetInterlaceMode )( 
            IWMResizerProps * This,
            /* [in] */ LONG lmode);
        
        HRESULT ( STDMETHODCALLTYPE *SetClipRegion )( 
            IWMResizerProps * This,
            /* [in] */ LONG lClipOriXSrc,
            /* [in] */ LONG lClipOriYSrc,
            /* [in] */ LONG lClipWidthSrc,
            /* [in] */ LONG lClipHeightSrc);
        
        HRESULT ( STDMETHODCALLTYPE *SetFullCropRegion )( 
            IWMResizerProps * This,
            /* [in] */ LONG lClipOriXSrc,
            /* [in] */ LONG lClipOriYSrc,
            /* [in] */ LONG lClipWidthSrc,
            /* [in] */ LONG lClipHeightSrc,
            /* [in] */ LONG lClipOriXDst,
            /* [in] */ LONG lClipOriYDst,
            /* [in] */ LONG lClipWidthDst,
            /* [in] */ LONG lClipHeightDst);
        
        HRESULT ( STDMETHODCALLTYPE *GetFullCropRegion )( 
            IWMResizerProps * This,
            /* [out] */ LONG *lClipOriXSrc,
            /* [out] */ LONG *lClipOriYSrc,
            /* [out] */ LONG *lClipWidthSrc,
            /* [out] */ LONG *lClipHeightSrc,
            /* [out] */ LONG *lClipOriXDst,
            /* [out] */ LONG *lClipOriYDst,
            /* [out] */ LONG *lClipWidthDst,
            /* [out] */ LONG *lClipHeightDst);
        
        END_INTERFACE
    } IWMResizerPropsVtbl;

    interface IWMResizerProps
    {
        CONST_VTBL struct IWMResizerPropsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMResizerProps_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMResizerProps_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMResizerProps_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMResizerProps_SetResizerQuality(This,lquality)	\
    ( (This)->lpVtbl -> SetResizerQuality(This,lquality) ) 

#define IWMResizerProps_SetInterlaceMode(This,lmode)	\
    ( (This)->lpVtbl -> SetInterlaceMode(This,lmode) ) 

#define IWMResizerProps_SetClipRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc)	\
    ( (This)->lpVtbl -> SetClipRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc) ) 

#define IWMResizerProps_SetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst)	\
    ( (This)->lpVtbl -> SetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst) ) 

#define IWMResizerProps_GetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst)	\
    ( (This)->lpVtbl -> GetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMResizerProps_INTERFACE_DEFINED__ */


#ifndef __IWMColorLegalizerProps_INTERFACE_DEFINED__
#define __IWMColorLegalizerProps_INTERFACE_DEFINED__

/* interface IWMColorLegalizerProps */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMColorLegalizerProps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("776C93B3-B72D-4508-B6D0-208785F553E7")
    IWMColorLegalizerProps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetColorLegalizerQuality( 
            /* [in] */ LONG lquality) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMColorLegalizerPropsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMColorLegalizerProps * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMColorLegalizerProps * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMColorLegalizerProps * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetColorLegalizerQuality )( 
            IWMColorLegalizerProps * This,
            /* [in] */ LONG lquality);
        
        END_INTERFACE
    } IWMColorLegalizerPropsVtbl;

    interface IWMColorLegalizerProps
    {
        CONST_VTBL struct IWMColorLegalizerPropsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMColorLegalizerProps_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMColorLegalizerProps_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMColorLegalizerProps_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMColorLegalizerProps_SetColorLegalizerQuality(This,lquality)	\
    ( (This)->lpVtbl -> SetColorLegalizerQuality(This,lquality) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMColorLegalizerProps_INTERFACE_DEFINED__ */


#ifndef __IWMInterlaceProps_INTERFACE_DEFINED__
#define __IWMInterlaceProps_INTERFACE_DEFINED__

/* interface IWMInterlaceProps */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMInterlaceProps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7B12E5D1-BD22-48ea-BC06-98E893221C89")
    IWMInterlaceProps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProcessType( 
            /* [in] */ int iProcessType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInitInverseTeleCinePattern( 
            /* [in] */ int iInitPattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLastFrame( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMInterlacePropsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMInterlaceProps * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMInterlaceProps * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMInterlaceProps * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetProcessType )( 
            IWMInterlaceProps * This,
            /* [in] */ int iProcessType);
        
        HRESULT ( STDMETHODCALLTYPE *SetInitInverseTeleCinePattern )( 
            IWMInterlaceProps * This,
            /* [in] */ int iInitPattern);
        
        HRESULT ( STDMETHODCALLTYPE *SetLastFrame )( 
            IWMInterlaceProps * This);
        
        END_INTERFACE
    } IWMInterlacePropsVtbl;

    interface IWMInterlaceProps
    {
        CONST_VTBL struct IWMInterlacePropsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMInterlaceProps_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMInterlaceProps_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMInterlaceProps_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMInterlaceProps_SetProcessType(This,iProcessType)	\
    ( (This)->lpVtbl -> SetProcessType(This,iProcessType) ) 

#define IWMInterlaceProps_SetInitInverseTeleCinePattern(This,iInitPattern)	\
    ( (This)->lpVtbl -> SetInitInverseTeleCinePattern(This,iInitPattern) ) 

#define IWMInterlaceProps_SetLastFrame(This)	\
    ( (This)->lpVtbl -> SetLastFrame(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMInterlaceProps_INTERFACE_DEFINED__ */


#ifndef __IWMFrameInterpProps_INTERFACE_DEFINED__
#define __IWMFrameInterpProps_INTERFACE_DEFINED__

/* interface IWMFrameInterpProps */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMFrameInterpProps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C06BB9B-626C-4614-8329-CC6A21B93FA0")
    IWMFrameInterpProps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFrameRateIn( 
            /* [in] */ LONG lFrameRate,
            /* [in] */ LONG lScale) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFrameRateOut( 
            /* [in] */ LONG lFrameRate,
            /* [in] */ LONG lScale) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFrameInterpEnabled( 
            /* [in] */ BOOL bFIEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetComplexityLevel( 
            /* [in] */ int iComplexity) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMFrameInterpPropsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMFrameInterpProps * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMFrameInterpProps * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMFrameInterpProps * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFrameRateIn )( 
            IWMFrameInterpProps * This,
            /* [in] */ LONG lFrameRate,
            /* [in] */ LONG lScale);
        
        HRESULT ( STDMETHODCALLTYPE *SetFrameRateOut )( 
            IWMFrameInterpProps * This,
            /* [in] */ LONG lFrameRate,
            /* [in] */ LONG lScale);
        
        HRESULT ( STDMETHODCALLTYPE *SetFrameInterpEnabled )( 
            IWMFrameInterpProps * This,
            /* [in] */ BOOL bFIEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetComplexityLevel )( 
            IWMFrameInterpProps * This,
            /* [in] */ int iComplexity);
        
        END_INTERFACE
    } IWMFrameInterpPropsVtbl;

    interface IWMFrameInterpProps
    {
        CONST_VTBL struct IWMFrameInterpPropsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMFrameInterpProps_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMFrameInterpProps_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMFrameInterpProps_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMFrameInterpProps_SetFrameRateIn(This,lFrameRate,lScale)	\
    ( (This)->lpVtbl -> SetFrameRateIn(This,lFrameRate,lScale) ) 

#define IWMFrameInterpProps_SetFrameRateOut(This,lFrameRate,lScale)	\
    ( (This)->lpVtbl -> SetFrameRateOut(This,lFrameRate,lScale) ) 

#define IWMFrameInterpProps_SetFrameInterpEnabled(This,bFIEnabled)	\
    ( (This)->lpVtbl -> SetFrameInterpEnabled(This,bFIEnabled) ) 

#define IWMFrameInterpProps_SetComplexityLevel(This,iComplexity)	\
    ( (This)->lpVtbl -> SetComplexityLevel(This,iComplexity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMFrameInterpProps_INTERFACE_DEFINED__ */


#ifndef __IWMColorConvProps_INTERFACE_DEFINED__
#define __IWMColorConvProps_INTERFACE_DEFINED__

/* interface IWMColorConvProps */
/* [local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWMColorConvProps;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6A49E22-C099-421d-AAD3-C061FB4AE85B")
    IWMColorConvProps : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetMode( 
            /* [in] */ LONG lMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFullCroppingParam( 
            /* [in] */ LONG lSrcCropLeft,
            /* [in] */ LONG lSrcCropTop,
            /* [in] */ LONG lDstCropLeft,
            /* [in] */ LONG lDstCropTop,
            /* [in] */ LONG lCropWidth,
            /* [in] */ LONG lCropHeight) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMColorConvPropsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMColorConvProps * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMColorConvProps * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMColorConvProps * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetMode )( 
            IWMColorConvProps * This,
            /* [in] */ LONG lMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetFullCroppingParam )( 
            IWMColorConvProps * This,
            /* [in] */ LONG lSrcCropLeft,
            /* [in] */ LONG lSrcCropTop,
            /* [in] */ LONG lDstCropLeft,
            /* [in] */ LONG lDstCropTop,
            /* [in] */ LONG lCropWidth,
            /* [in] */ LONG lCropHeight);
        
        END_INTERFACE
    } IWMColorConvPropsVtbl;

    interface IWMColorConvProps
    {
        CONST_VTBL struct IWMColorConvPropsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMColorConvProps_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMColorConvProps_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMColorConvProps_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMColorConvProps_SetMode(This,lMode)	\
    ( (This)->lpVtbl -> SetMode(This,lMode) ) 

#define IWMColorConvProps_SetFullCroppingParam(This,lSrcCropLeft,lSrcCropTop,lDstCropLeft,lDstCropTop,lCropWidth,lCropHeight)	\
    ( (This)->lpVtbl -> SetFullCroppingParam(This,lSrcCropLeft,lSrcCropTop,lDstCropLeft,lDstCropTop,lCropWidth,lCropHeight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMColorConvProps_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wmcodecdsp_0000_0017 */
/* [local] */ 

#ifndef NO_MF_PROPKEYS
static const PROPERTYKEY MFPKEY_STARTTIME = { { 0x5cefee10, 0xe210, 0x45c6, {0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7} }, 0x01 }; 
static const PROPERTYKEY MFPKEY_STOPTIME = { { 0x5cefee10, 0xe210, 0x45c6, {0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7} }, 0x02 }; 
static const PROPERTYKEY MFPKEY_PROGRESS = { { 0x5cefee10, 0xe210, 0x45c6, {0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7} }, 0x03 }; 
static const PROPERTYKEY MFPKEY_PHANTOMING_ON = { { 0x12b53cb2, 0xe12e, 0x4579, { 0x8a, 0xc3, 0xd0, 0x2f, 0x94, 0xf1, 0xe8, 0x9e } }, PID_FIRST_USABLE }; 
#define PHANTOMING_ENABLED_KEY_GUID (MFPKEY_PHANTOMING_ON.fmtid)
static const PROPERTYKEY MFPKEY_ROOMCORR_PROFILE        = { { 0xf311cdc7, 0xf45f, 0x4eb7, { 0xa8, 0x64, 0x9d, 0xc1, 0xae, 0xeb, 0x7e, 0x6d } }, PID_FIRST_USABLE }; 
#define ROOM_PROFILE_KEY_GUID (MFPKEY_ROOMCORR_PROFILE.fmtid)
static const PROPERTYKEY MFPKEY_BASSMGMT_CROSSOVER_FREQ = { { 0x61e8acb9, 0xf04f, 0x4f40, { 0xa6, 0x5f, 0x8f, 0x49, 0xfa, 0xb3, 0xba, 0x10 } }, PID_FIRST_USABLE }; 
#define CROSSOVER_FREQ_KEY_GUID (MFPKEY_BASSMGMT_CROSSOVER_FREQ.fmtid)
static const PROPERTYKEY MFPKEY_BASSMGMT_SPKRBASSCONFIG = { { 0x7bfd170d, 0x4770, 0x4dc5, { 0x92, 0x4d, 0x0b, 0x7b, 0x25, 0x2e, 0xe9, 0x18 } }, PID_FIRST_USABLE }; 
#define FULL_RANGE_SPEAKERS_KEY_GUID (MFPKEY_BASSMGMT_SPKRBASSCONFIG.fmtid)
static const PROPERTYKEY MFPKEY_BASSMGMT_BIGROOM        = { { 0xc816a1a7, 0xa119, 0x48a5, { 0x9a, 0xd2, 0x85, 0x45, 0x1f, 0x4b, 0x5a, 0x2e } }, PID_FIRST_USABLE }; 
#define BIG_ROOM_KEY_GUID (MFPKEY_BASSMGMT_BIGROOM.fmtid)
static const PROPERTYKEY MFPKEY_BASSMGMT_NO_SUB         = { { 0x5c3fd32e, 0x0d40, 0x4e2d, { 0x99, 0xfb, 0xc9, 0x1e, 0x96, 0x42, 0x0b, 0xe7 } }, PID_FIRST_USABLE }; 
#define NO_SUB_KEY_GUID (MFPKEY_BASSMGMT_NO_SUB.fmtid)
static const PROPERTYKEY MFPKEY_BASSMGMT_INVERT_SUB     = { { 0xb1103003, 0xc191, 0x4275, { 0x9f, 0xa0, 0x8c, 0x28, 0x2c, 0x72, 0x4b, 0xce } }, PID_FIRST_USABLE }; 
#define INVERTED_SUB_KEY_GUID (MFPKEY_BASSMGMT_INVERT_SUB.fmtid)
static const PROPERTYKEY MFPKEY_CORR_HEADPHONE          = { { 0x445f3559, 0xb43f, 0x4b67, {0xb0, 0xf8, 0x32, 0xb6, 0x7c, 0xf9, 0x4b, 0x48} }, PID_FIRST_USABLE + 0}; 
static const PROPERTYKEY MFPKEY_CORR_BASS_MANAGEMENT_MODE        = { { 0x1864a4e0, 0xefc1, 0x45e6, { 0xa6, 0x75, 0x57, 0x86, 0xcb, 0xf3, 0xb9, 0xf0 } }, PID_FIRST_USABLE }; 
#define BASSMGMT_MODE_KEY_GUID (MFPKEY_CORR_BASS_MANAGEMENT_MODE.fmtid)
static const PROPERTYKEY MFPKEY_CORR_MULTICHANNEL_MODE           = { { 0x1b5c2483, 0x0839, 0x4523, { 0xba, 0x87, 0x95, 0xf8, 0x9d, 0x27, 0xbd, 0x8c } }, PID_FIRST_USABLE }; 
#define MULTICHANNEL_MODE_KEY_GUID (MFPKEY_CORR_MULTICHANNEL_MODE.fmtid)
static const PROPERTYKEY MFPKEY_CORR_LOUDNESS_EQUALIZATION_ON    = { { 0xfc52a749, 0x4be9, 0x4510, { 0x89, 0x6e, 0x96, 0x6b, 0xa6, 0x52, 0x59, 0x80 } }, PID_FIRST_USABLE }; 
#define LEQ_ENABLED_KEY_GUID (MFPKEY_CORR_LOUDNESS_EQUALIZATION_ON.fmtid)
static const PROPERTYKEY MFPKEY_CORR_ROOM_CORRECTION_ON          = { { 0x01fb17e3, 0x796c, 0x4451, { 0x81, 0x63, 0x68, 0xcd, 0xc1, 0x32, 0x1a, 0x60 } }, PID_FIRST_USABLE }; 
#define ROOM_CORRECTION_ENABLED_KEY_GUID (MFPKEY_CORR_ROOM_CORRECTION_ON.fmtid)
static const PROPERTYKEY MFPKEY_CORR_SPKRMASK               = { { 0xd328d8fb, 0xd49f, 0x4aa9, {0xb7, 0x21, 0xe1, 0x71, 0xe9, 0x3a, 0xd5, 0x63} }, PID_FIRST_USABLE + 5}; 
static const PROPERTYKEY MFPKEY_CORR_NORMALIZATION_GAIN     = { { 0xd61b266c, 0x5aee, 0x456b, {0x84, 0x24, 0x72, 0x25, 0x47, 0x7d, 0xae, 0x77} }, PID_FIRST_USABLE + 0}; 
static const PROPERTYKEY MFPKEY_BASS_BOOST_AMOUNT                = { { 0xae7f0b2a, 0x96fc, 0x493a, { 0x92, 0x47, 0xa0, 0x19, 0xf1, 0xf7, 0x01, 0xe1 } }, PID_FIRST_USABLE }; 
#define BOOST_LEVEL_KEY_GUID (MFPKEY_BASS_BOOST_AMOUNT.fmtid)
static const PROPERTYKEY MFPKEY_LOUDNESS_EQUALIZATION_RELEASE    = { { 0x9c00eeed, 0xedce, 0x4cd8, { 0xae, 0x08, 0xcb, 0x05, 0xe8, 0xef, 0x57, 0xa0 } }, PID_FIRST_USABLE }; 
#define LEQ_RELEASE_KEY_GUID (MFPKEY_LOUDNESS_EQUALIZATION_RELEASE.fmtid)
static const PROPERTYKEY PKEY_SYSFXUI_HIDE_MASK = { { 0xcb9c6bce, 0x7a25, 0x47aa, { 0xb2, 0xbe, 0x6a, 0xd8, 0x44, 0x31, 0xed, 0xde } }, PID_FIRST_USABLE }; 
#define SYSFXUI_DONOTSHOW_LOUDNESSEQUALIZATION    0x01
#define SYSFXUI_DONOTSHOW_ROOMCORRECTION          0x02
#define SYSFXUI_DONOTSHOW_BASSMANAGEMENT          0x04
#define SYSFXUI_DONOTSHOW_BASSBOOST               0x08
#define SYSFXUI_DONOTSHOW_HEADPHONEVIRTUALIZATION 0x10
#define SYSFXUI_DONOTSHOW_VIRTUALSURROUND         0x20
#define SYSFXUI_DONOTSHOW_SPEAKERFILLING          0x40
#define SYSFXUI_DONOTSHOW_CHANNELPHANTOMING       0x80
static const PROPERTYKEY MFPKEY_AUVRHP_SKIPHRTFREVERB = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_AUVRHP_SKIPPOSTREVERB = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_AUVRHP_ROOMMODEL = { { 0x73ae880e, 0x8258, 0x4e57, { 0xb8, 0x5f, 0x7d, 0xaa, 0x6b, 0x7d, 0x5e, 0xf0 } }, PID_FIRST_USABLE }; 
#define VIRTUALIZATION_MODE_KEY_GUID (MFPKEY_AUVRHP_ROOMMODEL.fmtid)
static const PROPERTYKEY MFPKEY_AUVRHP_LFWEIGHT = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_AUVRHP_DOHRTFREVERB = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_AUVRHP_DOPOSTREVERB = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_AUVRHP_POSTREVERB_START = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x07 }; 
static const PROPERTYKEY MFPKEY_AUVRHP_POSTREVERB_LEN = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x08 }; 
static const PROPERTYKEY MFPKEY_WMRESAMP_FILTERQUALITY = { { 0xaf1adc73, 0xa210, 0x4b05, {0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d} }, 0x01 }; 
static const PROPERTYKEY MFPKEY_WMRESAMP_CHANNELMTX = { { 0xaf1adc73, 0xa210, 0x4b05, {0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d} }, 0x02 }; 
static const PROPERTYKEY MFPKEY_WMRESAMP_LOWPASS_BANDWIDTH = { { 0xaf1adc73, 0xa210, 0x4b05, {0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d} }, 0x03 }; 
static const PROPERTYKEY MFPKEY_WMAENC_AVGBYTESPERSEC = { { 0x11caf780, 0x921b, 0x42ef, { 0xb7, 0x55, 0xf3, 0xa0, 0x53, 0xea, 0x1a, 0x41 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_WMAENC_ORIGWAVEFORMAT = { { 0xf5c760a2, 0x3635, 0x48e1, { 0x8f, 0xbd, 0x0e, 0x49, 0x81, 0x24, 0xe0, 0xa2 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_PEAKCONSTRAINED = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_STAT_RAVG = { { 0x23a0e3b5, 0xfc62, 0x4ab8, { 0xb7, 0x7c, 0x6e, 0x0c, 0x28, 0xab, 0x30, 0x16 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_STAT_BAVG = { { 0x036f6b60, 0xad43, 0x485c, { 0x86, 0xc6, 0x21, 0xa6, 0xdb, 0x2c, 0x1b, 0xa3 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_STAT_RMAX = { { 0x82ff7c67, 0x6554, 0x4749, { 0xa3, 0x2b, 0x36, 0x90, 0xdd, 0x1a, 0xe8, 0xde } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_STAT_BMAX = { { 0xcd95e5b7, 0x9143, 0x47fb, { 0xa9, 0xd2, 0x9d, 0xb7, 0x5f, 0x2e, 0x74, 0xbe } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_CONSTRAINENCLATENCY    = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 1}; 
static const PROPERTYKEY MFPKEY_CONSTRAINDECLATENCY    = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 2}; 
static const PROPERTYKEY MFPKEY_CONSTRAINENCCOMPLEXITY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 3}; 
static const PROPERTYKEY MFPKEY_MAXENCLATENCYMS        = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 4}; 
static const PROPERTYKEY MFPKEY_MAXDECLATENCYMS        = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 5}; 
static const PROPERTYKEY MFPKEY_ENCCOMPLEXITY          = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 6}; 
static const PROPERTYKEY MFPKEY_CHECKDATACONSISTENCY2P = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 +  7}; 
static const PROPERTYKEY MFPKEY_AVGCONSTRAINED         = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 +  8}; 
static const PROPERTYKEY MFPKEY_ENHANCED_WMA           = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 20}; 
static const PROPERTYKEY MFPKEY_REQUESTING_A_FRAMESIZE = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 21}; 
static const PROPERTYKEY MFPKEY_PREFERRED_FRAMESIZE    = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 22}; 
static const PROPERTYKEY MFPKEY_WMA_ELEMENTARY_STREAM  = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 23}; 
static const PROPERTYKEY MFPKEY_MOST_RECENTLY_ENUMERATED_VBRQUALITY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 24}; 
static const PROPERTYKEY MFPKEY_DESIRED_VBRQUALITY                  = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 25}; 
static const PROPERTYKEY MFPKEY_CONSTRAIN_ENUMERATED_VBRQUALITY     = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 26}; 
static const PROPERTYKEY MFPKEY_WMAENC_GENERATE_DRC_PARAMS 	= { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 28}; 
static const PROPERTYKEY MFPKEY_WMAENC_BUFFERLESSCBR 	= { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 29}; 
static const PROPERTYKEY MFPKEY_WMAENC_RTSPDIF    		= { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 30}; 
static const PROPERTYKEY MFPKEY_DYN_VBR_RAVG           = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 +  9}; 
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNCATION     = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 10}; 
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNC_QFLOOR   = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 11}; 
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNC_QCEIL    = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 12}; 
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNC_BWFLOOR  = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 13}; 
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNC_BWCEIL   = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 14}; 
static const PROPERTYKEY MFPKEY_DYN_SIMPLEMASK         = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 15}; 
static const PROPERTYKEY MFPKEY_DYN_STEREO_PREPROC     = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 16}; 
static const PROPERTYKEY MFPKEY_DYN_VBR_BAVG           = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 18}; 
static const PROPERTYKEY MFPKEY_DYN_ALLOW_NOISESUB     = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 19}; 
static const PROPERTYKEY MFPKEY_DYN_ALLOW_PCMRANGELIMITING  = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 27}; 
static const PROPERTYKEY MFPKEY_WMADEC_HIRESOUTPUT     = { { 0x8d3fe592, 0xeecc, 0x4f4e, { 0x9a, 0xff, 0x5a, 0xf1, 0x67, 0x9d, 0x38, 0xd2 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_WMADEC_SPKRCFG         = { { 0x8fff67be, 0x977f, 0x41dc, { 0x8f, 0xaf, 0x23, 0xba, 0xc9, 0xa6, 0xdf, 0x73 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_WMADEC_FOLDDOWN_MATRIX = { { 0x51647e9b, 0x6a7f, 0x4739, { 0x9e, 0x0b, 0x29, 0x4b, 0x27, 0x89, 0x69, 0xeb } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_WMADEC_DRCMODE         = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_WMADRC_AVGTARGET       = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_WMADRC_PEAKTARGET      = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_WMADRC_AVGREF          = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_WMADRC_PEAKREF         = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_WMADEC_LTRTOUTPUT      = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_MusicSpeechClassMode = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_BufferWindow         = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 1 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_DecoderDelay         = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 2 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_EDL                  = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 3 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_RT_VariableRate      = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 4 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_RT_BandWidth         = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 5 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_RT_PacketLossMode    = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 6 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_RT_MinBufferSize     = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 7 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_DEC_RT_JitterControl     = { { 0x165f69b, 0x80a1, 0x4ef8, { 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd } }, PID_FIRST_USABLE }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_DEC_RT_JitterMode        = { { 0x165f69b, 0x80a1, 0x4ef8, { 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd } }, PID_FIRST_USABLE + 1 }; 
static const PROPERTYKEY MFPKEY_WMAVOICE_DEC_RT_PacketLossMode    = { { 0x165f69b, 0x80a1, 0x4ef8, { 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd } }, PID_FIRST_USABLE + 2 }; 
static const PROPERTYKEY MFPKEY_Decoder_MaxNumPCMSamplesWithPaddedSilence  = { { 0xc678ba85, 0x1212, 0x43da, { 90, 0xc3, 0xe7, 0x48, 0xb9, 0x24, 0x49, 0xec } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_WMAAECMA_SYSTEM_MODE          = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 0}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_DMO_SOURCE_MODE      = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 1}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_DEVICE_INDEXES       = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 2}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATURE_MODE         = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 3}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_FRAME_SIZE     = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 4}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_ECHO_LENGTH    = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 5}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_NS             = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 6}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_AGC            = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 7}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_AES            = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 8}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_VAD            = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 9}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_CENTER_CLIP    = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 10}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_NOISE_FILL     = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 11}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_RETRIEVE_TS_STATS    = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 12}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_QUALITY_METRICS      = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 13}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_MICARRAY_DESCPTR     = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 14}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_DEVICEPAIR_GUID      = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 15}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_MICARR_MODE    = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 16}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_MICARR_BEAM    = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 17}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_MICARR_PREPROC = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 18}; 
static const PROPERTYKEY MFPKEY_WMAAECMA_MIC_GAIN_BOUNDER     = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 19}; 
static const PROPERTYKEY MFPKEY_COLOR_BRIGHTNESS    = { { 0x174fb0ec, 0x2695, 0x476c, { 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_COLOR_CONTRAST      = { { 0x174fb0ec, 0x2695, 0x476c, { 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_COLOR_HUE           = { { 0x174fb0ec, 0x2695, 0x476c, { 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_COLOR_SATURATION    = { { 0x174fb0ec, 0x2695, 0x476c, { 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITY        = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITYEX      = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITYMAX     = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITYLIVE    = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITYOFFLINE = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_bSVideo           = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_CONV_INPUTFRAMERATE  = { { 0x52f8d29b, 0x2e76, 0x43f7, { 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_CONV_OUTPUTFRAMERATE = { { 0x52f8d29b, 0x2e76, 0x43f7, { 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_CONV_REVERSEPLAYBACK = { { 0x52f8d29b, 0x2e76, 0x43f7, { 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_SMPTE_MASKNUM        = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x01 }; 
static const PROPERTYKEY MFPKEY_SMPTE_OFFSETX        = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x02 }; 
static const PROPERTYKEY MFPKEY_SMPTE_OFFSETY        = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x03 }; 
static const PROPERTYKEY MFPKEY_SMPTE_REPLICATEX     = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x04 }; 
static const PROPERTYKEY MFPKEY_SMPTE_REPLICATEY     = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x05 }; 
static const PROPERTYKEY MFPKEY_SMPTE_REVERSE        = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x06 }; 
static const PROPERTYKEY MFPKEY_SMPTE_BORDERSOFTNESS = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x07 }; 
static const PROPERTYKEY MFPKEY_SMPTE_BORDERWIDTH    = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x08 }; 
static const PROPERTYKEY MFPKEY_SMPTE_BORDERCOLOR    = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x09 }; 
static const PROPERTYKEY MFPKEY_DENOISE_FILTER      = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x01 }; 
static const PROPERTYKEY MFPKEY_DENOISE_CACHEFRAMES = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x02 }; 
static const PROPERTYKEY MFPKEY_DENOISE_PROCFRAMES  = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x03 }; 
static const PROPERTYKEY MFPKEY_DENOISE_CAUSAL      = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x04 }; 
static const PROPERTYKEY MFPKEY_DENOISE_ITERATIVE   = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x05 }; 
static const PROPERTYKEY MFPKEY_DENOISE_PARA1       = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x06 }; 
static const PROPERTYKEY MFPKEY_DENOISE_PARA2       = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x07 }; 
static const PROPERTYKEY MFPKEY_DENOISE_PARA3       = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x08 }; 
static const PROPERTYKEY MFPKEY_DENOISE_PARA4       = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x09 }; 
static const PROPERTYKEY MFPKEY_DENOISE_PARA5       = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x10 }; 
static const PROPERTYKEY MFPKEY_CLUSTERDETECTOR_MAXCLUSTERS        =  { { 0xb79a666d, 0x8a9d, 0x463c, { 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_CLUSTERDETECTOR_MINCLUSTERDURATION =  { { 0xb79a666d, 0x8a9d, 0x463c, { 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_CLUSTERDETECTOR_MAXCLUSTERDURATION =  { { 0xb79a666d, 0x8a9d, 0x463c, { 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_FACEDETECTOR_SKIPFRAMES = { { 0xe1a124a6, 0x4fa8, 0x4ba5, { 0xa2, 0xd8, 0xdc, 0x34, 0x53, 0x6f, 0x74, 0x26 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_TYPE                 = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_CLASSIFICATIONMETHOD = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_GLOBALTHRESHOLD      = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_ADAPTIVETHRESHOLD    = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_ADAPTIVEWINDOWSIZE   = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_MINCLIPWEIGHT        = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_MINCLIPDURATION      = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x07 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_MAXCLIPDURATION      = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x08 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_MAXCLIPSPERHOUR      = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x09 }; 
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_PRESERVEMONOCLIPS    = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x0a }; 
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_SEARCHWINDOWSIZE  = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_MINCOLORENTROPY   = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_MAXMOTIONACTIVITY = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_THUMBNAILWIDTH    = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_THUMBNAILHEIGHT   = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_THUMBNAILREADY    = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_THUMBNAILFILENAME = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0xff }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_TOCREADY              = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_TOCOBJECT             = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_SHOTDETECTOR_ON       = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_CLUSTERDETECTOR_ON    = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_THUMBNAILGENERATOR_ON = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_FEATUREEXTRACTOR_ON   = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_FACEDETECTOR_ON       = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x07 }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_USEENDSIGNAL          = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfa }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_ENDSIGNAL             = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfb }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_ENDTIME               = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfc }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_CURRENTTIME           = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfd }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_PROCESSEDFRAMES       = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfe }; 
static const PROPERTYKEY MFPKEY_TOCGENERATOR_INDEXFILENAME         = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xff }; 
static const PROPERTYKEY MFPKEY_DXVA_ENABLED = { { 0x58e28605, 0x1d51, 0x48ed, { 0xa3, 0xeb, 0xf, 0x9b, 0xaf, 0x78, 0x5f, 0xbd } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_FI_SUPPORTED = { { 0x5ce18788, 0xb992, 0x49a7, { 0xa4, 0xf1, 0x60, 0xea, 0x21, 0xca, 0xa5, 0x5f } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_FI_ENABLED = { { 0xe020c4ca, 0x3bdd, 0x40ec, { 0xbc, 0xf4, 0x40, 0x39, 0xb1, 0x45, 0xe, 0xb8 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_DECODER_DEINTERLACING = { { 0xc6281f, 0x4be6, 0x4e44, { 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_POSTPROCESSMODE = { { 0xc6281f, 0x4be6, 0x4e44, { 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_NUMTHREADSDEC = { { 0xc6281f, 0x4be6, 0x4e44, { 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4 } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_RECOVERYFRAMETYPE_RTC = { { 0xc6281f, 0x4be6, 0x4e44, { 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4 } }, 0x07 }; 
static const PROPERTYKEY MFPKEY_AVGFRAMERATE = { { 0x41d700d6, 0x95b1, 0x4e3f, { 0xb7, 0x59, 0x2d, 0x66, 0xd8, 0xc7, 0xad, 0xa2 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_BUFFERFULLNESSINFIRSTBYTE = { { 0xb69dc3c5, 0x64c4, 0x4757, { 0x99, 0xcb, 0x5d, 0x58, 0xf, 0xd5, 0x65, 0x9e } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_PASSESRECOMMENDED = { { 0x38bdceea, 0x393e, 0x4f9a, { 0x8d, 0xc3, 0x80, 0x2c, 0xc4, 0x5, 0x83, 0x8f } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_DECODERCOMPLEXITYPROFILE = { { 0xc0d912d6, 0x14da, 0x4d31, { 0x8d, 0x83, 0xd1, 0x8, 0x91, 0x5e, 0x8d, 0x77 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_TOTALFRAMES = { { 0xce5f1e3c, 0xd3d4, 0x4c3f, { 0x88, 0xc8, 0x1, 0xe9, 0x89, 0xd9, 0x98, 0xd2 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_CODEDFRAMES = { { 0x62872b55, 0xfe0e, 0x4930, { 0xa6, 0xd2, 0xcc, 0xaa, 0x37, 0xe8, 0xf5, 0x35 } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_ZEROBYTEFRAMES = { { 0x8f04aba4, 0x313d, 0x40fb, { 0x80, 0x31, 0x31, 0x51, 0x78, 0x13, 0xd9, 0xef } }, 0x07 }; 
static const PROPERTYKEY MFPKEY_ENDOFPASS = { { 0xb2030f2a, 0x8bbc, 0x46f8, { 0xa6, 0x4b, 0xa9, 0x8f, 0xf7, 0xfc, 0xf0, 0x2a } }, 0x08 }; 
static const PROPERTYKEY MFPKEY_DATARATE = { { 0xe0db0807, 0x8003, 0x4880, { 0xac, 0x11, 0x61, 0xb7, 0x3f, 0x33, 0xdc, 0x60 } }, 0x09 }; 
static const PROPERTYKEY MFPKEY_KEYDIST = { { 0x18d6f8c5, 0x2416, 0x4d7b, { 0x90, 0xd7, 0x9f, 0x3f, 0x21, 0xe7, 0x52, 0xb4 } }, 0x0a }; 
static const PROPERTYKEY MFPKEY_CRISP = { { 0x2985f772, 0x3af2, 0x4d15, { 0x8c, 0xfa, 0x8a, 0x96, 0x2f, 0xf3, 0x20, 0x40 } }, 0x0b }; 
static const PROPERTYKEY MFPKEY_FOURCC = { { 0x593e3f2e, 0xf84d, 0x4e85, { 0xb6, 0x8d, 0xf6, 0x69, 0x40, 0xe, 0xda, 0xbc } }, 0x0c }; 
static const PROPERTYKEY MFPKEY_VIDEOWINDOW = { { 0xc1c96060, 0x76f0, 0x47d4, { 0xa8, 0x75, 0x5b, 0xdd, 0xa9, 0xd, 0xf5, 0xe9 } }, 0x0d }; 
static const PROPERTYKEY MFPKEY_FRAMECOUNT = { { 0x75028eb4, 0x4853, 0x44d3, { 0x88, 0xa3, 0xe4, 0x99, 0xf8, 0x9d, 0x22, 0x7f } }, 0x0e }; 
static const PROPERTYKEY MFPKEY_LIVEENCODE = { { 0x3ffa1e60, 0x5514, 0x4634, { 0x86, 0xe6, 0x1f, 0x3b, 0x7c, 0x54, 0x51, 0x43 } }, 0x0f }; 
static const PROPERTYKEY MFPKEY_COMPLEXITY = { { 0x44fa08c7, 0x92f5, 0x45dc, { 0x83, 0x76, 0x8d, 0x1d, 0x32, 0x4c, 0x65, 0x2a } }, 0x10 }; 
static const PROPERTYKEY MFPKEY_COMPLEXITYEX = { { 0xd6e48f93, 0xfd47, 0x47a3, { 0x92, 0x62, 0x8a, 0xef, 0xb5, 0x53, 0x3, 0x32 } }, 0x11 }; 
static const PROPERTYKEY MFPKEY_ASFOVERHEADPERFRAME = { { 0xeac7502, 0x1957, 0x4beb, { 0x91, 0x4d, 0x88, 0x5f, 0x85, 0xe7, 0x54, 0x36 } }, 0x12 }; 
static const PROPERTYKEY MFPKEY_PASSESUSED = { { 0xb1653ac1, 0xcb7d, 0x43ee, { 0x84, 0x54, 0x3f, 0x9d, 0x81, 0x1b, 0x3, 0x31 } }, 0x13 }; 
static const PROPERTYKEY MFPKEY_VBRENABLED = { { 0xe48d9459, 0x6abe, 0x4eb5, { 0x92, 0x11, 0x60, 0x8, 0xc, 0x1a, 0xb9, 0x84 } }, 0x14 }; 
static const PROPERTYKEY MFPKEY_VBRQUALITY = { { 0xf97b3f3a, 0x9eff, 0x4ac9, { 0x82, 0x47, 0x35, 0xb3, 0xe, 0xb9, 0x25, 0xf4 } }, 0x15 }; 
static const PROPERTYKEY MFPKEY_RAVG = { { 0x14b2aae6, 0x2987, 0x460a, { 0x8b, 0x22, 0x9c, 0x7, 0x7c, 0x55, 0xd0, 0x5e } }, 0x16 }; 
static const PROPERTYKEY MFPKEY_BAVG = { { 0x10174e76, 0xe0ca, 0x4a39, { 0x94, 0x8c, 0x85, 0x10, 0xc2, 0x32, 0x32, 0x76 } }, 0x17 }; 
static const PROPERTYKEY MFPKEY_RMAX = { { 0x7d8dd246, 0xaaf4, 0x4a24, { 0x81, 0x66, 0x19, 0x39, 0x6b, 0x6, 0xef, 0x69 } }, 0x18 }; 
static const PROPERTYKEY MFPKEY_BMAX = { { 0xff365211, 0x21b6, 0x4134, { 0xab, 0x7c, 0x52, 0x39, 0x3a, 0x8f, 0x80, 0xf6 } }, 0x19 }; 
static const PROPERTYKEY MFPKEY_INTERLACEDCODINGENABLED = { { 0x56976073, 0x6c3, 0x4b3b, { 0xad, 0x41, 0xb7, 0x41, 0x7f, 0xce, 0x84, 0x74 } }, 0x1a }; 
static const PROPERTYKEY MFPKEY_PRODUCEDUMMYFRAMES = { { 0x61714bc6, 0x8a1, 0x49d1, { 0xb8, 0x27, 0xa3, 0x3a, 0xad, 0xa9, 0x55, 0x26 } }, 0x1b }; 
static const PROPERTYKEY MFPKEY_DECODERCOMPLEXITYREQUESTED = { { 0xb0d7d4a7, 0x422b, 0x44c3, { 0x97, 0xb4, 0xb9, 0x76, 0xc, 0xce, 0xee, 0xa9 } }, 0x1c }; 
static const PROPERTYKEY MFPKEY_DROPPEDFRAMES = { { 0xbdb5afd3, 0x4027, 0x4882, { 0x80, 0x6c, 0x41, 0x62, 0xe4, 0xa7, 0xa3, 0xf0 } }, 0x1d }; 
static const PROPERTYKEY MFPKEY_CODEDNONZEROFRAMES = { { 0x7adf5b69, 0x1e3f, 0x42d3, { 0x99, 0x1d, 0xf8, 0x1e, 0xc, 0xeb, 0xe9, 0x3e } }, 0x1e }; 
static const PROPERTYKEY MFPKEY_QPPERFRAME = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x1f }; 
static const PROPERTYKEY MFPKEY_VIDEOINDEXENABLED = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x20 }; 
static const PROPERTYKEY MFPKEY_VOLHEADERFORREENCODE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x21 }; 
static const PROPERTYKEY MFPKEY_REENCDURATION        = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x22 }; 
static const PROPERTYKEY MFPKEY_REENCSTARTBUFFERSIZE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x23 }; 
static const PROPERTYKEY MFPKEY_REENCENDBUFFERSIZE   = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x24 }; 
static const PROPERTYKEY MFPKEY_REENCQPREF           = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x25 }; 
static const PROPERTYKEY MFPKEY_DENOISEOPTION        = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x26 }; 
static const PROPERTYKEY MFPKEY_MIRRORDISPLAYON      = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x27 }; 
static const PROPERTYKEY MFPKEY_CHANGEFRAMERATE      = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x28 }; 
static const PROPERTYKEY MFPKEY_CHANGEBITRATE        = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x29 }; 
static const PROPERTYKEY MFPKEY_CHANGEMAXBITRATE     = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2a }; 
static const PROPERTYKEY MFPKEY_LOSTFRAMETIMESTAMP  = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2b }; 
static const PROPERTYKEY MFPKEY_PACKETLOSSRATE       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2c }; 
static const PROPERTYKEY MFPKEY_FULLFRAMERATE       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2d }; 
static const PROPERTYKEY MFPKEY_MOTIONSEARCHRANGE       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2e }; 
static const PROPERTYKEY MFPKEY_DELTAMVRANGEINDEX       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2f }; 
static const PROPERTYKEY MFPKEY_NUMBFRAMES       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x30 }; 
static const PROPERTYKEY MFPKEY_RDSUBPIXELSEARCH       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x31 }; 
static const PROPERTYKEY MFPKEY_BDELTAQP       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x32 }; 
static const PROPERTYKEY MFPKEY_FORCEFRAMEWIDTH       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x33 }; 
static const PROPERTYKEY MFPKEY_FORCEFRAMEHEIGHT       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x34 }; 
static const PROPERTYKEY MFPKEY_RANGEREDUX       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x35 }; 
static const PROPERTYKEY MFPKEY_LOOKAHEAD       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x36 }; 
static const PROPERTYKEY MFPKEY_VIDEOSCALING       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x37 }; 
static const PROPERTYKEY MFPKEY_PERCEPTUALOPTLEVEL       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x38 }; 
static const PROPERTYKEY MFPKEY_FORCEMEDIANSETTING       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x39 }; 
static const PROPERTYKEY MFPKEY_NUMTHREADS       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3a }; 
static const PROPERTYKEY MFPKEY_LOOPFILTER       = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3b }; 
static const PROPERTYKEY MFPKEY_NOISEEDGEREMOVAL = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3c }; 
static const PROPERTYKEY MFPKEY_VTYPE            = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3d }; 
static const PROPERTYKEY MFPKEY_RMAXRTC          = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3e }; 
static const PROPERTYKEY MFPKEY_CLOSEDENTRYPOINT            = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3f }; 
static const PROPERTYKEY MFPKEY_MOTIONSEARCHLEVEL           = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x40 }; 
static const PROPERTYKEY MFPKEY_MOTIONMATCHMETHOD           = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x41 }; 
static const PROPERTYKEY MFPKEY_MACROBLOCKMODECOSTMETHOD    = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x42 }; 
static const PROPERTYKEY MFPKEY_COMPRESSIONOPTIMIZATIONTYPE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x43 }; 
static const PROPERTYKEY MFPKEY_QUERYRECOVERYFRAMETYPE      = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x44 }; 
static const PROPERTYKEY MFPKEY_RTMODE                      = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x45 }; 
static const PROPERTYKEY MFPKEY_PERIODICALSPDISTANCE        = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x46 }; 
static const PROPERTYKEY MFPKEY_ENCODERCOMPLEXITY           = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x47 }; 
static const PROPERTYKEY MFPKEY_USERDATASIZE                = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x48 }; 
static const PROPERTYKEY MFPKEY_LETTERBOXPRESENT            = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x49 }; 
static const PROPERTYKEY MFPKEY_SCENECHANGE                 = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x4a }; 
static const PROPERTYKEY MFPKEY_CLIP_XORIG = { { 0x716fe5c8, 0x755c, 0x482f, { 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_CLIP_YORIG = { { 0x716fe5c8, 0x755c, 0x482f, { 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_CLIP_WIDTH = { { 0x716fe5c8, 0x755c, 0x482f, { 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_CLIP_HEIGHT = { { 0x716fe5c8, 0x755c, 0x482f, { 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_FI_FRAMERATE_VALU_SRC = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_FI_FRAMERATE_SCAL_SRC = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_FI_FRAMERATE_VALU_DST = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_FI_FRAMERATE_SCAL_DST = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_FI_ALLOWED = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_FI_COMPLEXITY = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_RESIZE_SRC_LEFT   = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_RESIZE_SRC_TOP    = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_RESIZE_SRC_WIDTH  = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_RESIZE_SRC_HEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_RESIZE_DST_LEFT   = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_RESIZE_DST_TOP    = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_RESIZE_DST_WIDTH  = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x07 }; 
static const PROPERTYKEY MFPKEY_RESIZE_DST_HEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x08 }; 
static const PROPERTYKEY MFPKEY_RESIZE_QUALITY    = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x09 }; 
static const PROPERTYKEY MFPKEY_RESIZE_INTERLACE  = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0a }; 
static const PROPERTYKEY MFPKEY_RESIZE_PANSCANAPX      = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0b }; 
static const PROPERTYKEY MFPKEY_RESIZE_PANSCANAPY      = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0c }; 
static const PROPERTYKEY MFPKEY_RESIZE_PANSCANAPWIDTH  = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0d }; 
static const PROPERTYKEY MFPKEY_RESIZE_PANSCANAPHEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0e }; 
static const PROPERTYKEY MFPKEY_RESIZE_GEOMAPX      = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0f }; 
static const PROPERTYKEY MFPKEY_RESIZE_GEOMAPY      = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x10 }; 
static const PROPERTYKEY MFPKEY_RESIZE_GEOMAPWIDTH  = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x11 }; 
static const PROPERTYKEY MFPKEY_RESIZE_GEOMAPHEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x12 }; 
static const PROPERTYKEY MFPKEY_RESIZE_MINAPX      = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x13 }; 
static const PROPERTYKEY MFPKEY_RESIZE_MINAPY      = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x14 }; 
static const PROPERTYKEY MFPKEY_RESIZE_MINAPWIDTH  = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x15 }; 
static const PROPERTYKEY MFPKEY_RESIZE_MINAPHEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x16 }; 
static const PROPERTYKEY MFPKEY_PIXELASPECTRATIO = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x17 }; 
static const PROPERTYKEY MFPKEY_COLORCONV_SRCLEFT = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_COLORCONV_SRCTOP  = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_COLORCONV_DSTLEFT = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_COLORCONV_DSTTOP  = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_COLORCONV_WIDTH   = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_COLORCONV_HEIGHT  = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_COLORCONV_MODE    = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x07 }; 
static const PROPERTYKEY MFPKEY_DEINTERLACE_PROCESSTYPE     = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x01 }; 
static const PROPERTYKEY MFPKEY_DEINTERLACE_TELECINEPATTERN = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x02 }; 
static const PROPERTYKEY MFPKEY_DEINTERLACE_LASTFRAME       = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x03 }; 
static const PROPERTYKEY MFPKEY_DEINTERLACE_DETELECINE_FLAG = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x04 }; 
static const PROPERTYKEY MFPKEY_DEINTERLACE_SMOOTHLEVEL     = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x05 }; 
static const PROPERTYKEY MFPKEY_DEINTERLACE_EDGETHRESHOLD   = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x06 }; 
static const PROPERTYKEY MFPKEY_DVDEC_SIZE = { { 0x75f2421a, 0xe73a, 0x45b3, { 0xae, 0xf0, 0x91, 0x3c, 0x66, 0x84, 0x64, 0x61 } }, 0x00 }; 
static const PROPERTYKEY MFPKEY_DVENC_FORMAT = { { 0xf449a927, 0x7b22, 0x46ef, {0xb2, 0xe7, 0x4d, 0x2b, 0x72, 0x8b, 0x69, 0x9c } }, 0x00 }; 
#endif // NO_MF_PROPKEYS
#define	g_wszWMVCDatarate	( L"_DATARATE" )

#define	g_wszWMVCKeyframeDistance	( L"_KEYDIST" )

#define	g_wszWMVCCrisp	( L"_CRISP" )

#define	g_wszWMVCDefaultCrisp	( L"_DEFAULTCRISP" )

#define	g_wszWMVCFOURCC	( L"_FOURCC" )

#define	g_wszWMVCTotalWindow	( L"_TOTALWINDOW" )

#define	g_wszWMVCVideoWIndow	( L"_VIDEOWINDOW" )

#define	g_wszWMVCFrameCount	( L"_FRAMECOUNT" )

#define	g_wszWMVCLiveEncode	( L"_LIVEENCODE" )

#define	g_wszWMVCComplexityMode	( L"_COMPLEXITY" )

#define	g_wszWMVCComplexityEx	( L"_COMPLEXITYEX" )

#define	g_wszWMVCComplexityMax	( L"_COMPLEXITYEXMAX" )

#define	g_wszWMVCComplexityLive	( L"_COMPLEXITYEXLIVE" )

#define	g_wszWMVCComplexityOffline	( L"_COMPLEXITYEXOFFLINE" )

#define	g_wszWMVCPacketOverhead	( L"_ASFOVERHEADPERFRAME" )

#define	g_wszWMVCLegacy411InterlacedFormat	( L"_LEGACY411INTERLACEDFORMAT" )

#define	g_wszWMVCPassesRecommended	( L"_PASSESRECOMMENDED" )

#define	g_wszWMVCPassesUsed	( L"_PASSESUSED" )

#define	g_wszWMVCEndOfPass	( L"_ENDOFPASS" )

#define	g_wszWMVCFrameInterpolationSupported	( L"_FRAMEINTERPOLATIONSUPPORTED" )

#define	g_wszWMVCFrameInterpolationEnabled	( L"_FRAMEINTERPOLATIONENABLED" )

#define	g_wszWMVCQPPerFrame	( L"_QPPERFRAME" )

#define	g_wszWMVCReencDuration	( L"_REENCDURATION" )

#define	g_wszWMVCReencStartBufferSize	( L"_REENCSTARTBUFFERSIZE" )

#define	g_wszWMVCReencEndBufferSize	( L"_REENCENDBUFFERSIZE" )

#define	g_wszWMVCReencQPRef	( L"_REENCQPREF" )

#define	g_wszWMVCDenoiseOption	( L"_DENOISEOPTION" )

#define	g_wszWMVCMirrorDisplayOn	( L"_MIRRORDISPLAYON" )

#define	g_wszWMVCChangeFrameRate	( L"_CHANGEFRAMERATE" )

#define	g_wszWMVCChangeBitRate	( L"_CHANGEBITRATE" )

#define	g_wszWMVCChangeMaxBitRate	( L"_CHANGEMAXBITRATE" )

#define	g_wszWMVCLostFrameTimeStamp	( L"_LOSTFRAMETIMESTAMP" )

#define	g_wszWMVCPacketLossRate	( L"_PACKETLOSSRATE" )

#define	g_wszWMVCFullFrameRate	( L"_FULLFRAMERATE" )

#define	g_wszWMVCMotionSearchRange	( L"_MOTIONSEARCHRANGE" )

#define	g_wszWMVCDeltaMVRangeIndex	( L"_DELTAMVRANGEINDEX" )

#define	g_wszWMVCNumBFrames	( L"_NUMBFRAMES" )

#define	g_wszWMVCRDSubpixelSearch	( L"_RDSUBPIXELSEARCH" )

#define	g_wszWMVCBDeltaQP	( L"_BDELTAQP" )

#define	g_wszWMVCForceFrameWidth	( L"_FORCEFRAMEWIDTH" )

#define	g_wszWMVCForceFrameHeight	( L"_FORCEFRAMEHEIGHT" )

#define	g_wszWMVCRangeRedux	( L"_RANGEREDUX" )

#define	g_wszWMVCLookAhead	( L"_LOOKAHEAD" )

#define	g_wszWMVCVideoScaling	( L"_VIDEOSCALING" )

#define	g_wszWMVCPerceptualOptLevel	( L"_PERCEPTUALOPTLEVEL" )

#define	g_wszWMVCForceMedianSetting	( L"_FORCEMEDIANSETTING" )

#define	g_wszWMVCNumThreads	( L"_NUMTHREADS" )

#define	g_wszWMVCLoopFilter	( L"_LOOPFILTER" )

#define	g_wszWMVCNoiseEdgeRemoval	( L"_NOISEEDGEREMOVAL" )

#define	g_wszWMVCVType	( L"_VTYPE" )

#define	g_wszWMVCMaxBitrateRTC	( L"_RMAXRTC" )

#define	g_wszWMVCMotionSearchLevel	( L"_MOTIONSEARCHLEVEL" )

#define	g_wszWMVCMotionMatchMethod	( L"_MOTIONMATCHMETHOD" )

#define	g_wszWMVCMacroblockModeCostMethod	( L"_MACROBLOCKMODECOSTMETHOD" )

#define	g_wszWMVCCompressionOptimizationType	( L"_COMPRESSIONOPTIMIZATIONTYPE" )

#define	g_wszWMVCQueryRecoveryFrametype	( L"_QUERYRECOVERYFRAMETYPE" )

#define	g_wszWMVCRTMode	( L"_RTMODE" )

#define	g_wszWMVCPeriodicalSPDistance	( L"_PERIODICALSPDISTANCE" )

#define	g_wszWMACInputFormatName	( L"_INPUTFORMATNAME" )

#define	g_wszWMACSourceFormatTag	( L"_SOURCEFORMATTAG" )

#define	g_wszWMVCVBREnabled	( L"_VBRENABLED" )

#define	g_wszWMVCVBRQuality	( L"_VBRQUALITY" )

#define	g_wszWMVCAvgBitrate	( L"_RAVG" )

#define	g_wszWMVCMaxBitrate	( L"_RMAX" )

#define	g_wszWMVCBAvg	( L"_BAVG" )

#define	g_wszWMVCBMax	( L"_BMAX" )

#define	g_wszWMVCTotalFrames	( L"_TOTALFRAMES" )

#define	g_wszWMVCCodedFrames	( L"_CODEDFRAMES" )

#define	g_wszWMVCAvgFrameRate	( L"_AVGFRAMERATE" )

#define	g_wszWMVCDecoderComplexityProfile	( L"_DECODERCOMPLEXITYPROFILE" )

#define	g_wszWMVCDecoderComplexityRequested	( L"_DECODERCOMPLEXITYREQUESTED" )

#define	g_wszWMVCBufferFullnessInFirstByte	( L"_BUFFERFULLNESSINFIRSTBYTE" )

#define	g_wszWMACPeakPCMValue	( L"PeakValue" )

#define	g_wszWMACAvgPCMValue	( L"AverageLevel" )

#define	g_wszWMADRCAverageReference	( L"WMADRCAverageReference" )

#define	g_wszWMADRCPeakReference	( L"WMADRCPeakReference" )

#define	g_wszWMADRCAverageTarget	( L"WMADRCAverageTarget" )

#define	g_wszWMADRCPeakTarget	( L"WMADRCPeakTarget" )

#define	g_wszWMACHiResOutput	( L"_HIRESOUTPUT" )

#define	g_wszWMACAvgBytesPerSec	( L"AvgBytesPerSec" )

#define	g_wszWMACSpeakerConfig	( L"SpeakerConfig" )

#define	g_wszWMACMixTable	( L"MixTable" )

#define	g_wszWMACDRCSetting	( L"DynamicRangeControl" )

#define	g_wszWMVCWatermarkConfig	( L"WatermarkConfig" )

#define	g_wszWMVCWatermarkDelay	( L"WatermarkDelay" )

#define	g_wszWMVCInterlacedCodingEnabled	( L"_INTERLACEDCODINGENABLED" )

#define	g_wszWMVCProduceDummyFrames	( L"_PRODUCEDUMMYFRAMES" )

#define	g_wszWMVCDecoderDeinterlacing	( L"_DECODERDEINTERLACING" )

#define	g_wszWMACOriginalWaveFormat	( L"_ORIGINALWAVEFORMAT" )

#define	g_wszWMACIncludeNumPasses	( L"_INCLUDENUMPASSES" )

#define	g_wszWMVCInverseTelecinedInput	( L"_INVERSETELECINEDINPUT" )

#define	g_wszWMVCForcePostProcessMode	( L"_POSTPROCESSMODE" )

#define	g_wszWMVCNumThreadsDec	( L"_NUMTHREADSDEC" )

#define	g_wszWMVCClosedEntryPoint	( L"_CLOSEDENTRYPOINT" )

#define	g_wszWMVCRecoveryFrametype_RTC	( L"_RECOVERYFRAMETYPE_RTC" )

#define	g_wszWMVCEncodercomplexity	( L"_ENCODERCOMPLEXITY" )

#define	g_wszWMVCUserdatasize	( L"_USERDATASIZE" )

#define	g_wszWMVCLetterboxpresent	( L"_LETTERBOXPRESENT" )

#define	g_wszWMVCScenechange	( L"_SCENECHANGE" )

typedef 
enum MF_AUVRHP_ROOMMODEL
    {	VRHP_SMALLROOM	= 0,
	VRHP_MEDIUMROOM	= ( VRHP_SMALLROOM + 1 ) ,
	VRHP_BIGROOM	= ( VRHP_MEDIUMROOM + 1 ) ,
	VRHP_CUSTUMIZEDROOM	= ( VRHP_BIGROOM + 1 ) 
    } 	MF_AUVRHP_ROOMMODEL;

#define AEC_MAX_SYSTEM_MODES 6
typedef 
enum AEC_SYSTEM_MODE
    {	SINGLE_CHANNEL_AEC	= 0,
	ADAPTIVE_ARRAY_ONLY	= ( SINGLE_CHANNEL_AEC + 1 ) ,
	OPTIBEAM_ARRAY_ONLY	= ( ADAPTIVE_ARRAY_ONLY + 1 ) ,
	ADAPTIVE_ARRAY_AND_AEC	= ( OPTIBEAM_ARRAY_ONLY + 1 ) ,
	OPTIBEAM_ARRAY_AND_AEC	= ( ADAPTIVE_ARRAY_AND_AEC + 1 ) ,
	SINGLE_CHANNEL_NSAGC	= ( OPTIBEAM_ARRAY_AND_AEC + 1 ) ,
	MODE_NOT_SET	= ( SINGLE_CHANNEL_NSAGC + 1 ) 
    } 	AEC_SYSTEM_MODE;

typedef struct tagAecQualityMetrics_Struct
    {
    LONGLONG i64Timestamp;
    BYTE ConvergenceFlag;
    BYTE MicClippedFlag;
    BYTE MicSilenceFlag;
    BYTE PstvFeadbackFlag;
    BYTE SpkClippedFlag;
    BYTE SpkMuteFlag;
    BYTE GlitchFlag;
    BYTE DoubleTalkFlag;
    ULONG uGlitchCount;
    ULONG uMicClipCount;
    float fDuration;
    float fTSVariance;
    float fTSDriftRate;
    float fVoiceLevel;
    float fNoiseLevel;
    float fERLE;
    float fAvgERLE;
    DWORD dwReserved;
    } 	AecQualityMetrics_Struct;

typedef 
enum AEC_VAD_MODE
    {	AEC_VAD_DISABLED	= 0,
	AEC_VAD_NORMAL	= ( AEC_VAD_DISABLED + 1 ) ,
	AEC_VAD_FOR_AGC	= ( AEC_VAD_NORMAL + 1 ) ,
	AEC_VAD_FOR_SILENCE_SUPPRESSION	= ( AEC_VAD_FOR_AGC + 1 ) 
    } 	AEC_VAD_MODE;

typedef 
enum AEC_INPUT_STREAM
    {	AEC_CAPTURE_STREAM	= 0,
	AEC_REFERENCE_STREAM	= 1
    } 	AEC_INPUT_STREAM;

typedef 
enum MIC_ARRAY_MODE
    {	MICARRAY_SINGLE_CHAN	= 0,
	MICARRAY_SIMPLE_SUM	= 0x100,
	MICARRAY_SINGLE_BEAM	= 0x200,
	MICARRAY_FIXED_BEAM	= 0x400,
	MICARRAY_EXTERN_BEAM	= 0x800
    } 	MIC_ARRAY_MODE;

#define FACILITY_WMAAECMA  0x7CC
#define WMAAECMA_E_NO_ACTIVE_RENDER_STREAM 0x87CC000A
DEFINE_GUID(MEDIASUBTYPE_Y41T, 0x54313459, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_Y42T, 0x54323459, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_NV11, 0x3131564E, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_V216, 0x36313256, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_V410, 0x30313456, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_v210, 0x30313276, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_I420, 0x30323449, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WVC1, 0x31435657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wvc1, 0x31637677, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVA, 0x41564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmva, 0x61766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVB, 0x42564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvb, 0x62766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVR, 0x52564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvr, 0x72766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVP, 0x50564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvp, 0x70766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WVP2, 0x32505657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wvp2, 0x32707677, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV3, 0x33564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv3, 0x33766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV2, 0x32564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv2, 0x32766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV1, 0x31564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv1, 0x31766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPG4, 0x3447504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mpg4, 0x3467706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP42, 0x3234504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp42, 0x3234706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP43, 0x3334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp43, 0x3334706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP4S, 0x5334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp4s, 0x7334706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_M4S2, 0x3253344D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_m4s2, 0x3273346D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSS1, 0x3153534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSS2, 0x3253534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSAUDIO1, 0x00000160, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO2, 0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO3, 0x00000162, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO_LOSSLESS, 0x00000163, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMASPDIF, 0x00000164, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_ADTS_AAC, 0x00001600, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_RAW_AAC,  0x00001601, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_NOKIA_MPEG_ADTS_AAC, 0x00001608, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_NOKIA_MPEG_RAW_AAC,  0x00001609, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_VODAFONE_MPEG_ADTS_AAC, 0x0000160A, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_VODAFONE_MPEG_RAW_AAC,  0x0000160B, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_DOLBY_DDPLUS,  0xa7fb87af, 0x2d02, 0x42fb, 0xa4, 0xd4, 0x5, 0xcd, 0x93, 0x84, 0x3b, 0xdd);
DEFINE_GUID(MEDIASUBTYPE_DOLBY_TRUEHD,  0xeb27cec4, 0x163e, 0x4ca3, 0x8b, 0x74, 0x8e, 0x25, 0xf9, 0x1b, 0x51, 0x7e);
DEFINE_GUID(MEDIASUBTYPE_DTS_HD,        0xa2e58eb7, 0xfa9, 0x48bb, 0xa4, 0xc, 0xfa, 0xe, 0x15, 0x6d, 0x6, 0x45);


extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0017_v0_0_s_ifspec;


#ifndef __WMCodecDSPCLSIDTypeLib_LIBRARY_DEFINED__
#define __WMCodecDSPCLSIDTypeLib_LIBRARY_DEFINED__

/* library WMCodecDSPCLSIDTypeLib */
/* [uuid] */ 


EXTERN_C const IID LIBID_WMCodecDSPCLSIDTypeLib;

EXTERN_C const CLSID CLSID_CMpeg4DecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("f371728a-6052-4d47-827c-d039335dfe0a")
CMpeg4DecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMpeg43DecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("cba9e78b-49a3-49ea-93d4-6bcba8c4de07")
CMpeg43DecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMpeg4sDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("2a11bae2-fe6e-4249-864b-9e9ed6e8dbc2")
CMpeg4sDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMpeg4EncMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("24f258d8-c651-4042-93e4-ca654abb682c")
CMpeg4EncMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMpeg4sEncMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("6ec5a7be-d81e-4f9e-ada3-cd1bf262b6d8")
CMpeg4sEncMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMSSCDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("7bafb3b1-d8f4-4279-9253-27da423108de")
CMSSCDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMSSCEncMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("8cb9cc06-d139-4ae6-8bb4-41e612e141d5")
CMSSCEncMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMSSCEncMediaObject2;

#ifdef __cplusplus

class DECLSPEC_UUID("f7ffe0a0-a4f5-44b5-949e-15ed2bc66f9d")
CMSSCEncMediaObject2;
#endif

EXTERN_C const CLSID CLSID_CWMADecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("2eeb4adf-4578-4d10-bca7-bb955f56320a")
CWMADecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWMAEncMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("70f598e9-f4ab-495a-99e2-a7c4d3d89abf")
CWMAEncMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWMSPDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("874131cb-4ecc-443b-8948-746b89595d20")
CWMSPDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWMSPEncMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("67841b03-c689-4188-ad3f-4c9ebeec710b")
CWMSPEncMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWMSPEncMediaObject2;

#ifdef __cplusplus

class DECLSPEC_UUID("1f1f4e1a-2252-4063-84bb-eee75f8856d5")
CWMSPEncMediaObject2;
#endif

EXTERN_C const CLSID CLSID_CWMVDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("82d353df-90bd-4382-8bc2-3f6192b76e34")
CWMVDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWMVEncMediaObject2;

#ifdef __cplusplus

class DECLSPEC_UUID("96b57cdd-8966-410c-bb1f-c97eea765c04")
CWMVEncMediaObject2;
#endif

EXTERN_C const CLSID CLSID_CWMVXEncMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("7e320092-596a-41b2-bbeb-175d10504eb6")
CWMVXEncMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWMV9EncMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("d23b90d0-144f-46bd-841d-59e4eb19dc59")
CWMV9EncMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWVC1DecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("c9bfbccf-e60e-4588-a3df-5a03b1fd9585")
CWVC1DecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWVC1EncMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("44653D0D-8CCA-41e7-BACA-884337B747AC")
CWVC1EncMediaObject;
#endif

EXTERN_C const CLSID CLSID_CDeColorConvMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("49034c05-f43c-400f-84c1-90a683195a3a")
CDeColorConvMediaObject;
#endif

EXTERN_C const CLSID CLSID_CDVDecoderMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("e54709c5-1e17-4c8d-94e7-478940433584")
CDVDecoderMediaObject;
#endif

EXTERN_C const CLSID CLSID_CDVEncoderMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("c82ae729-c327-4cce-914d-8171fefebefb")
CDVEncoderMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMpeg2DecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("863d66cd-cdce-4617-b47f-c8929cfc28a6")
CMpeg2DecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CPK_DS_MPEG2Decoder;

#ifdef __cplusplus

class DECLSPEC_UUID("9910c5cd-95c9-4e06-865a-efa1c8016bf4")
CPK_DS_MPEG2Decoder;
#endif

EXTERN_C const CLSID CLSID_CAC3DecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("03d7c802-ecfa-47d9-b268-5fb3e310dee4")
CAC3DecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CPK_DS_AC3Decoder;

#ifdef __cplusplus

class DECLSPEC_UUID("6c9c69d6-0ffc-4481-afdb-cdf1c79c6f3e")
CPK_DS_AC3Decoder;
#endif

EXTERN_C const CLSID CLSID_CMP3DecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("bbeea841-0a63-4f52-a7ab-a9b3a84ed38a")
CMP3DecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CResamplerMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("f447b69e-1884-4a7e-8055-346f74d6edb3")
CResamplerMediaObject;
#endif

EXTERN_C const CLSID CLSID_CResizerMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("d3ec8b8b-7728-4fd8-9fe0-7b67d19f73a3")
CResizerMediaObject;
#endif

EXTERN_C const CLSID CLSID_CInterlaceMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("b5a89c80-4901-407b-9abc-90d9a644bb46")
CInterlaceMediaObject;
#endif

EXTERN_C const CLSID CLSID_CWMAudioLFXAPO;

#ifdef __cplusplus

class DECLSPEC_UUID("62dc1a93-ae24-464c-a43e-452f824c4250")
CWMAudioLFXAPO;
#endif

EXTERN_C const CLSID CLSID_CWMAudioGFXAPO;

#ifdef __cplusplus

class DECLSPEC_UUID("637c490d-eee3-4c0a-973f-371958802da2")
CWMAudioGFXAPO;
#endif

EXTERN_C const CLSID CLSID_CWMAudioSpdTxDMO;

#ifdef __cplusplus

class DECLSPEC_UUID("5210f8e4-b0bb-47c3-a8d9-7b2282cc79ed")
CWMAudioSpdTxDMO;
#endif

EXTERN_C const CLSID CLSID_CWMAudioAEC;

#ifdef __cplusplus

class DECLSPEC_UUID("745057c7-f353-4f2d-a7ee-58434477730e")
CWMAudioAEC;
#endif

EXTERN_C const CLSID CLSID_CClusterDetectorDmo;

#ifdef __cplusplus

class DECLSPEC_UUID("36e820c4-165a-4521-863c-619e1160d4d4")
CClusterDetectorDmo;
#endif

EXTERN_C const CLSID CLSID_CColorControlDmo;

#ifdef __cplusplus

class DECLSPEC_UUID("798059f0-89ca-4160-b325-aeb48efe4f9a")
CColorControlDmo;
#endif

EXTERN_C const CLSID CLSID_CColorConvertDMO;

#ifdef __cplusplus

class DECLSPEC_UUID("98230571-0087-4204-b020-3282538e57d3")
CColorConvertDMO;
#endif

EXTERN_C const CLSID CLSID_CColorLegalizerDmo;

#ifdef __cplusplus

class DECLSPEC_UUID("fdfaa753-e48e-4e33-9c74-98a27fc6726a")
CColorLegalizerDmo;
#endif

EXTERN_C const CLSID CLSID_CFrameInterpDMO;

#ifdef __cplusplus

class DECLSPEC_UUID("0a7cfe1b-6ab5-4334-9ed8-3f97cb37daa1")
CFrameInterpDMO;
#endif

EXTERN_C const CLSID CLSID_CFrameRateConvertDmo;

#ifdef __cplusplus

class DECLSPEC_UUID("01f36ce2-0907-4d8b-979d-f151be91c883")
CFrameRateConvertDmo;
#endif

EXTERN_C const CLSID CLSID_CResizerDMO;

#ifdef __cplusplus

class DECLSPEC_UUID("1ea1ea14-48f4-4054-ad1a-e8aee10ac805")
CResizerDMO;
#endif

EXTERN_C const CLSID CLSID_CShotDetectorDmo;

#ifdef __cplusplus

class DECLSPEC_UUID("56aefacd-110c-4397-9292-b0a0c61b6750")
CShotDetectorDmo;
#endif

EXTERN_C const CLSID CLSID_CSmpteTransformsDmo;

#ifdef __cplusplus

class DECLSPEC_UUID("bde6388b-da25-485d-ba7f-fabc28b20318")
CSmpteTransformsDmo;
#endif

EXTERN_C const CLSID CLSID_CThumbnailGeneratorDmo;

#ifdef __cplusplus

class DECLSPEC_UUID("559c6bad-1ea8-4963-a087-8a6810f9218b")
CThumbnailGeneratorDmo;
#endif

EXTERN_C const CLSID CLSID_CTocGeneratorDmo;

#ifdef __cplusplus

class DECLSPEC_UUID("4dda1941-77a0-4fb1-a518-e2185041d70c")
CTocGeneratorDmo;
#endif

EXTERN_C const CLSID CLSID_CMPEGAACDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("8DDE1772-EDAD-41c3-B4BE-1F30FB4EE0D6")
CMPEGAACDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CNokiaAACDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("3CB2BDE4-4E29-4c44-A73E-2D7C2C46D6EC")
CNokiaAACDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CVodafoneAACDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("7F36F942-DCF3-4d82-9289-5B1820278F7C")
CVodafoneAACDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CXeonAACCCDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("A74E98F2-52D6-4b4e-885B-E0A6CA4F187A")
CXeonAACCCDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CNokiaAACCCDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("EABF7A6F-CCBA-4d60-8620-B152CC977263")
CNokiaAACCCDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CVodafoneAACCCDecMediaObject;

#ifdef __cplusplus

class DECLSPEC_UUID("7E76BF7F-C993-4e26-8FAB-470A70C0D59C")
CVodafoneAACCCDecMediaObject;
#endif

EXTERN_C const CLSID CLSID_CMPEG2EncoderDS;

#ifdef __cplusplus

class DECLSPEC_UUID("5F5AFF4A-2F7F-4279-88C2-CD88EB39D144")
CMPEG2EncoderDS;
#endif

EXTERN_C const CLSID CLSID_CMPEG2EncoderVideoDS;

#ifdef __cplusplus

class DECLSPEC_UUID("42150cd9-ca9a-4ea5-9939-30ee037f6e74")
CMPEG2EncoderVideoDS;
#endif

EXTERN_C const CLSID CLSID_CMPEG2EncoderAudioDS;

#ifdef __cplusplus

class DECLSPEC_UUID("acd453bc-c58a-44d1-bbf5-bfb325be2d78")
CMPEG2EncoderAudioDS;
#endif

EXTERN_C const CLSID CLSID_CMPEG2AudDecoderDS;

#ifdef __cplusplus

class DECLSPEC_UUID("E1F1A0B8-BEEE-490d-BA7C-066C40B5E2B9")
CMPEG2AudDecoderDS;
#endif

EXTERN_C const CLSID CLSID_CMPEG2VidDecoderDS;

#ifdef __cplusplus

class DECLSPEC_UUID("212690FB-83E5-4526-8FD7-74478B7939CD")
CMPEG2VidDecoderDS;
#endif

EXTERN_C const CLSID CLSID_CMSAC3Enc;

#ifdef __cplusplus

class DECLSPEC_UUID("C6B400E2-20A7-4e58-A2FE-24619682CE6C")
CMSAC3Enc;
#endif
#endif /* __WMCodecDSPCLSIDTypeLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



