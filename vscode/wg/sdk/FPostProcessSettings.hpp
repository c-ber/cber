#pragma once
#include "FVector4.hpp"
#include "FLinearColor.hpp"
#include "EBloomMethod.hpp"
#include "FVector2D.hpp"
#include "FVector.hpp"
#include "EAutoExposureMethod.hpp"
#include "EHBAOBlurRadius.hpp"
#include "EDepthOfFieldMethod.hpp"
#include "FWeightedBlendables.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPostProcessSettings // Size: 0x530
{
public:
    bool bOverride_WhiteTemp : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_WhiteTemp */
    bool bOverride_WhiteTint : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_WhiteTint */
    bool bOverride_ColorSaturation : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_ColorSaturation */
    bool bOverride_ColorContrast : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_ColorContrast */
    bool bOverride_ColorGamma : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_ColorGamma */
    bool bOverride_ColorGain : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_ColorGain */
    bool bOverride_ColorOffset : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_ColorOffset */
    bool bOverride_ColorSaturationShadows : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_ColorSaturationShadows */
    bool bOverride_ColorContrastShadows : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_ColorContrastShadows */
    bool bOverride_ColorGammaShadows : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_ColorGammaShadows */
    bool bOverride_ColorGainShadows : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_ColorGainShadows */
    bool bOverride_ColorOffsetShadows : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_ColorOffsetShadows */
    bool bOverride_ColorSaturationMidtones : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_ColorSaturationMidtones */
    bool bOverride_ColorContrastMidtones : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_ColorContrastMidtones */
    bool bOverride_ColorGammaMidtones : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_ColorGammaMidtones */
    bool bOverride_ColorGainMidtones : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_ColorGainMidtones */
    bool bOverride_ColorOffsetMidtones : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_ColorOffsetMidtones */
    bool bOverride_ColorSaturationHighlights : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_ColorSaturationHighlights */
    bool bOverride_ColorContrastHighlights : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_ColorContrastHighlights */
    bool bOverride_ColorGammaHighlights : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_ColorGammaHighlights */
    bool bOverride_ColorGainHighlights : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_ColorGainHighlights */
    bool bOverride_ColorOffsetHighlights : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_ColorOffsetHighlights */
    bool bOverride_ColorCorrectionShadowsMax : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_ColorCorrectionShadowsMax */
    bool bOverride_ColorCorrectionHighlightsMin : 1; /* Ofs: 0x2 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_ColorCorrectionHighlightsMin */
    bool bOverride_FilmWhitePoint : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_FilmWhitePoint */
    bool bOverride_FilmSaturation : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_FilmSaturation */
    bool bOverride_FilmChannelMixerRed : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_FilmChannelMixerRed */
    bool bOverride_FilmChannelMixerGreen : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_FilmChannelMixerGreen */
    bool bOverride_FilmChannelMixerBlue : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_FilmChannelMixerBlue */
    bool bOverride_FilmContrast : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_FilmContrast */
    bool bOverride_FilmDynamicRange : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_FilmDynamicRange */
    bool bOverride_FilmHealAmount : 1; /* Ofs: 0x3 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_FilmHealAmount */
    bool bOverride_FilmToeAmount : 1; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_FilmToeAmount */
    bool bOverride_FilmShadowTint : 1; /* Ofs: 0x4 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_FilmShadowTint */
    bool bOverride_FilmShadowTintBlend : 1; /* Ofs: 0x4 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_FilmShadowTintBlend */
    bool bOverride_FilmShadowTintAmount : 1; /* Ofs: 0x4 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_FilmShadowTintAmount */
    bool bOverride_FilmSlope : 1; /* Ofs: 0x4 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_FilmSlope */
    bool bOverride_FilmToe : 1; /* Ofs: 0x4 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_FilmToe */
    bool bOverride_FilmShoulder : 1; /* Ofs: 0x4 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_FilmShoulder */
    bool bOverride_FilmBlackClip : 1; /* Ofs: 0x4 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_FilmBlackClip */
    bool bOverride_FilmWhiteClip : 1; /* Ofs: 0x5 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_FilmWhiteClip */
    bool bOverride_SceneColorTint : 1; /* Ofs: 0x5 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_SceneColorTint */
    bool bOverride_SceneFringeIntensity : 1; /* Ofs: 0x5 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_SceneFringeIntensity */
    bool bOverride_AmbientCubemapTint : 1; /* Ofs: 0x5 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_AmbientCubemapTint */
    bool bOverride_AmbientCubemapIntensity : 1; /* Ofs: 0x5 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_AmbientCubemapIntensity */
    bool bOverride_BloomMethod : 1; /* Ofs: 0x5 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_BloomMethod */
    bool bOverride_BloomIntensity : 1; /* Ofs: 0x5 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_BloomIntensity */
    bool bOverride_BloomThreshold : 1; /* Ofs: 0x5 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_BloomThreshold */
    bool bOverride_Bloom1Tint : 1; /* Ofs: 0x6 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_Bloom1Tint */
    bool bOverride_Bloom1Size : 1; /* Ofs: 0x6 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_Bloom1Size */
    bool bOverride_Bloom2Size : 1; /* Ofs: 0x6 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_Bloom2Size */
    bool bOverride_Bloom2Tint : 1; /* Ofs: 0x6 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_Bloom2Tint */
    bool bOverride_Bloom3Tint : 1; /* Ofs: 0x6 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_Bloom3Tint */
    bool bOverride_Bloom3Size : 1; /* Ofs: 0x6 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_Bloom3Size */
    bool bOverride_Bloom4Tint : 1; /* Ofs: 0x6 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_Bloom4Tint */
    bool bOverride_Bloom4Size : 1; /* Ofs: 0x6 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_Bloom4Size */
    bool bOverride_Bloom5Tint : 1; /* Ofs: 0x7 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_Bloom5Tint */
    bool bOverride_Bloom5Size : 1; /* Ofs: 0x7 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_Bloom5Size */
    bool bOverride_Bloom6Tint : 1; /* Ofs: 0x7 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_Bloom6Tint */
    bool bOverride_Bloom6Size : 1; /* Ofs: 0x7 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_Bloom6Size */
    bool bOverride_BloomSizeScale : 1; /* Ofs: 0x7 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_BloomSizeScale */
    bool bOverride_BloomConvolutionTexture : 1; /* Ofs: 0x7 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_BloomConvolutionTexture */
    bool bOverride_BloomConvolutionSize : 1; /* Ofs: 0x7 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_BloomConvolutionSize */
    bool bOverride_BloomConvolutionCenterUV : 1; /* Ofs: 0x7 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_BloomConvolutionCenterUV */
    bool bOverride_BloomConvolutionPreFilter : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_BloomConvolutionPreFilter */
    bool bOverride_BloomConvolutionBufferScale : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_BloomConvolutionBufferScale */
    bool bOverride_BloomDirtMaskIntensity : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_BloomDirtMaskIntensity */
    bool bOverride_BloomDirtMaskTint : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_BloomDirtMaskTint */
    bool bOverride_BloomDirtMask : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_BloomDirtMask */
    bool bOverride_TslBlurIntensity : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_TslBlurIntensity */
    bool bOverride_TslBlurScopeInnerEdge : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_TslBlurScopeInnerEdge */
    bool bOverride_TslBlurScopeOutterEdge : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_TslBlurScopeOutterEdge */
    bool bOverride_TslBlurDepthBlackPoint : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_TslBlurDepthBlackPoint */
    bool bOverride_TslBlurDepthWhitePoint : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_TslBlurDepthWhitePoint */
    bool bOverride_TslBlurDepthGamma : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_TslBlurDepthGamma */
    bool bOverride_bTslBlurUseBranching : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_bTslBlurUseBranching */
    bool bOverride_AutoExposureMethod : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_AutoExposureMethod */
    bool bOverride_AutoExposureLowPercent : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_AutoExposureLowPercent */
    bool bOverride_AutoExposureHighPercent : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_AutoExposureHighPercent */
    bool bOverride_AutoExposureMinBrightness : 1; /* Ofs: 0x9 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_AutoExposureMinBrightness */
    bool bOverride_AutoExposureMaxBrightness : 1; /* Ofs: 0xA Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_AutoExposureMaxBrightness */
    bool bOverride_AutoExposureSpeedUp : 1; /* Ofs: 0xA Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_AutoExposureSpeedUp */
    bool bOverride_AutoExposureSpeedDown : 1; /* Ofs: 0xA Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_AutoExposureSpeedDown */
    bool bOverride_AutoExposureBias : 1; /* Ofs: 0xA Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_AutoExposureBias */
    bool bOverride_HistogramLogMin : 1; /* Ofs: 0xA Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_HistogramLogMin */
    bool bOverride_HistogramLogMax : 1; /* Ofs: 0xA Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_HistogramLogMax */
    bool bOverride_LensFlareIntensity : 1; /* Ofs: 0xA Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_LensFlareIntensity */
    bool bOverride_LensFlareTint : 1; /* Ofs: 0xA Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_LensFlareTint */
    bool bOverride_LensFlareTints : 1; /* Ofs: 0xB Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_LensFlareTints */
    bool bOverride_LensFlareBokehSize : 1; /* Ofs: 0xB Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_LensFlareBokehSize */
    bool bOverride_LensFlareBokehShape : 1; /* Ofs: 0xB Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_LensFlareBokehShape */
    bool bOverride_LensFlareThreshold : 1; /* Ofs: 0xB Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_LensFlareThreshold */
    bool bOverride_VignetteIntensity : 1; /* Ofs: 0xB Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_VignetteIntensity */
    bool bOverride_GrainIntensity : 1; /* Ofs: 0xB Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_GrainIntensity */
    bool bOverride_GrainJitter : 1; /* Ofs: 0xB Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_GrainJitter */
    bool bOverride_AmbientOcclusionIntensity : 1; /* Ofs: 0xB Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionIntensity */
    bool bOverride_AmbientOcclusionStaticFraction : 1; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionStaticFraction */
    bool bOverride_AmbientOcclusionRadius : 1; /* Ofs: 0xC Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionRadius */
    bool bOverride_AmbientOcclusionFadeDistance : 1; /* Ofs: 0xC Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionFadeDistance */
    bool bOverride_AmbientOcclusionFadeRadius : 1; /* Ofs: 0xC Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionFadeRadius */
    bool bOverride_HBAOPowerExponent : 1; /* Ofs: 0xC Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_HBAOPowerExponent */
    bool bOverride_HBAORadius : 1; /* Ofs: 0xC Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_HBAORadius */
    bool bOverride_HBAOBias : 1; /* Ofs: 0xC Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_HBAOBias */
    bool bOverride_HBAODetailAO : 1; /* Ofs: 0xC Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_HBAODetailAO */
    bool bOverride_HBAOBlurRadius : 1; /* Ofs: 0xD Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_HBAOBlurRadius */
    bool bOverride_HBAOBlurSharpness : 1; /* Ofs: 0xD Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_HBAOBlurSharpness */
    bool bOverride_HBAOMaxViewDepth : 1; /* Ofs: 0xD Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_HBAOMaxViewDepth */
    bool bOverride_HBAODepthSharpness : 1; /* Ofs: 0xD Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_HBAODepthSharpness */
    bool bOverride_AmbientOcclusionDistance : 1; /* Ofs: 0xD Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionDistance */
    bool bOverride_AmbientOcclusionRadiusInWS : 1; /* Ofs: 0xD Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionRadiusInWS */
    bool bOverride_AmbientOcclusionPower : 1; /* Ofs: 0xD Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionPower */
    bool bOverride_AmbientOcclusionBias : 1; /* Ofs: 0xD Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionBias */
    bool bOverride_AmbientOcclusionQuality : 1; /* Ofs: 0xE Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionQuality */
    bool bOverride_AmbientOcclusionMipBlend : 1; /* Ofs: 0xE Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionMipBlend */
    bool bOverride_AmbientOcclusionMipScale : 1; /* Ofs: 0xE Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionMipScale */
    bool bOverride_AmbientOcclusionMipThreshold : 1; /* Ofs: 0xE Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_AmbientOcclusionMipThreshold */
    bool bOverride_LPVIntensity : 1; /* Ofs: 0xE Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_LPVIntensity */
    bool bOverride_LPVDirectionalOcclusionIntensity : 1; /* Ofs: 0xE Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_LPVDirectionalOcclusionIntensity */
    bool bOverride_LPVDirectionalOcclusionRadius : 1; /* Ofs: 0xE Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_LPVDirectionalOcclusionRadius */
    bool bOverride_LPVDiffuseOcclusionExponent : 1; /* Ofs: 0xE Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_LPVDiffuseOcclusionExponent */
    bool bOverride_LPVSpecularOcclusionExponent : 1; /* Ofs: 0xF Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_LPVSpecularOcclusionExponent */
    bool bOverride_LPVDiffuseOcclusionIntensity : 1; /* Ofs: 0xF Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_LPVDiffuseOcclusionIntensity */
    bool bOverride_LPVSpecularOcclusionIntensity : 1; /* Ofs: 0xF Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_LPVSpecularOcclusionIntensity */
    bool bOverride_LPVSize : 1; /* Ofs: 0xF Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_LPVSize */
    bool bOverride_LPVSecondaryOcclusionIntensity : 1; /* Ofs: 0xF Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_LPVSecondaryOcclusionIntensity */
    bool bOverride_LPVSecondaryBounceIntensity : 1; /* Ofs: 0xF Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_LPVSecondaryBounceIntensity */
    bool bOverride_LPVGeometryVolumeBias : 1; /* Ofs: 0xF Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_LPVGeometryVolumeBias */
    bool bOverride_LPVVplInjectionBias : 1; /* Ofs: 0xF Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_LPVVplInjectionBias */
    bool bOverride_LPVEmissiveInjectionIntensity : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_LPVEmissiveInjectionIntensity */
    bool bOverride_LPVFadeRange : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_LPVFadeRange */
    bool bOverride_LPVDirectionalOcclusionFadeRange : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_LPVDirectionalOcclusionFadeRange */
    bool bOverride_IndirectLightingColor : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_IndirectLightingColor */
    bool bOverride_IndirectLightingIntensity : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_IndirectLightingIntensity */
    bool bOverride_ColorGradingIntensity : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_ColorGradingIntensity */
    bool bOverride_ColorGradingLUT : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_ColorGradingLUT */
    bool bOverride_DepthOfFieldFocalDistance : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldFocalDistance */
    bool bOverride_DepthOfFieldFstop : 1; /* Ofs: 0x11 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldFstop */
    bool bOverride_DepthOfFieldScopeSize : 1; /* Ofs: 0x11 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldScopeSize */
    bool bOverride_DepthOfFieldSensorWidth : 1; /* Ofs: 0x11 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldSensorWidth */
    bool bOverride_DepthOfFieldDepthBlurRadius : 1; /* Ofs: 0x11 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldDepthBlurRadius */
    bool bOverride_DepthOfFieldDepthBlurAmount : 1; /* Ofs: 0x11 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldDepthBlurAmount */
    bool bOverride_DepthOfFieldFocalRegion : 1; /* Ofs: 0x11 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldFocalRegion */
    bool bOverride_DepthOfFieldNearTransitionRegion : 1; /* Ofs: 0x11 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldNearTransitionRegion */
    bool bOverride_DepthOfFieldFarTransitionRegion : 1; /* Ofs: 0x11 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldFarTransitionRegion */
    bool bOverride_DepthOfFieldScale : 1; /* Ofs: 0x12 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldScale */
    bool bOverride_DepthOfFieldMaxBokehSize : 1; /* Ofs: 0x12 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldMaxBokehSize */
    bool bOverride_DepthOfFieldNearBlurSize : 1; /* Ofs: 0x12 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldNearBlurSize */
    bool bOverride_DepthOfFieldFarBlurSize : 1; /* Ofs: 0x12 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldFarBlurSize */
    bool bOverride_DepthOfFieldMethod : 1; /* Ofs: 0x12 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldMethod */
    bool bOverride_MobileHQGaussian : 1; /* Ofs: 0x12 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_MobileHQGaussian */
    bool bOverride_DepthOfFieldBokehShape : 1; /* Ofs: 0x12 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldBokehShape */
    bool bOverride_DepthOfFieldOcclusion : 1; /* Ofs: 0x12 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldOcclusion */
    bool bOverride_DepthOfFieldColorThreshold : 1; /* Ofs: 0x13 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldColorThreshold */
    bool bOverride_DepthOfFieldSizeThreshold : 1; /* Ofs: 0x13 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldSizeThreshold */
    bool bOverride_DepthOfFieldSkyFocusDistance : 1; /* Ofs: 0x13 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldSkyFocusDistance */
    bool bOverride_DepthOfFieldVignetteSize : 1; /* Ofs: 0x13 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_DepthOfFieldVignetteSize */
    bool bOverride_MotionBlurAmount : 1; /* Ofs: 0x13 Size: 0x1 BitMask: 10 BoolProperty Engine.PostProcessSettings.bOverride_MotionBlurAmount */
    bool bOverride_MotionBlurMax : 1; /* Ofs: 0x13 Size: 0x1 BitMask: 20 BoolProperty Engine.PostProcessSettings.bOverride_MotionBlurMax */
    bool bOverride_MotionBlurPerObjectSize : 1; /* Ofs: 0x13 Size: 0x1 BitMask: 40 BoolProperty Engine.PostProcessSettings.bOverride_MotionBlurPerObjectSize */
    bool bOverride_ScreenPercentage : 1; /* Ofs: 0x13 Size: 0x1 BitMask: 80 BoolProperty Engine.PostProcessSettings.bOverride_ScreenPercentage */
    bool bOverride_ScreenSpaceReflectionIntensity : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bOverride_ScreenSpaceReflectionIntensity */
    bool bOverride_ScreenSpaceReflectionQuality : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 02 BoolProperty Engine.PostProcessSettings.bOverride_ScreenSpaceReflectionQuality */
    bool bOverride_ScreenSpaceReflectionMaxRoughness : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 04 BoolProperty Engine.PostProcessSettings.bOverride_ScreenSpaceReflectionMaxRoughness */
    bool bOverride_ScreenSpaceReflectionRoughnessScale : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 08 BoolProperty Engine.PostProcessSettings.bOverride_ScreenSpaceReflectionRoughnessScale */
    uint8_t UnknownData15[0x3];
    float WhiteTemp; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.PostProcessSettings.WhiteTemp */
    float WhiteTint; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.PostProcessSettings.WhiteTint */
    FVector4 ColorSaturation; /* Ofs: 0x20 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorSaturation */
    FVector4 ColorContrast; /* Ofs: 0x30 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorContrast */
    FVector4 ColorGamma; /* Ofs: 0x40 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorGamma */
    FVector4 ColorGain; /* Ofs: 0x50 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorGain */
    FVector4 ColorOffset; /* Ofs: 0x60 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorOffset */
    FVector4 ColorSaturationShadows; /* Ofs: 0x70 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorSaturationShadows */
    FVector4 ColorContrastShadows; /* Ofs: 0x80 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorContrastShadows */
    FVector4 ColorGammaShadows; /* Ofs: 0x90 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorGammaShadows */
    FVector4 ColorGainShadows; /* Ofs: 0xA0 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorGainShadows */
    FVector4 ColorOffsetShadows; /* Ofs: 0xB0 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorOffsetShadows */
    float ColorCorrectionShadowsMax; /* Ofs: 0xC0 Size: 0x4 FloatProperty Engine.PostProcessSettings.ColorCorrectionShadowsMax */
    uint8_t UnknownDataC4[0xC];
    FVector4 ColorSaturationMidtones; /* Ofs: 0xD0 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorSaturationMidtones */
    FVector4 ColorContrastMidtones; /* Ofs: 0xE0 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorContrastMidtones */
    FVector4 ColorGammaMidtones; /* Ofs: 0xF0 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorGammaMidtones */
    FVector4 ColorGainMidtones; /* Ofs: 0x100 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorGainMidtones */
    FVector4 ColorOffsetMidtones; /* Ofs: 0x110 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorOffsetMidtones */
    FVector4 ColorSaturationHighlights; /* Ofs: 0x120 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorSaturationHighlights */
    FVector4 ColorContrastHighlights; /* Ofs: 0x130 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorContrastHighlights */
    FVector4 ColorGammaHighlights; /* Ofs: 0x140 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorGammaHighlights */
    FVector4 ColorGainHighlights; /* Ofs: 0x150 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorGainHighlights */
    FVector4 ColorOffsetHighlights; /* Ofs: 0x160 Size: 0x10 StructProperty Engine.PostProcessSettings.ColorOffsetHighlights */
    float ColorCorrectionHighlightsMin; /* Ofs: 0x170 Size: 0x4 FloatProperty Engine.PostProcessSettings.ColorCorrectionHighlightsMin */
    float FilmSlope; /* Ofs: 0x174 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmSlope */
    float FilmToe; /* Ofs: 0x178 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmToe */
    float FilmShoulder; /* Ofs: 0x17C Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmShoulder */
    float FilmBlackClip; /* Ofs: 0x180 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmBlackClip */
    float FilmWhiteClip; /* Ofs: 0x184 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmWhiteClip */
    FLinearColor FilmWhitePoint; /* Ofs: 0x188 Size: 0x10 StructProperty Engine.PostProcessSettings.FilmWhitePoint */
    FLinearColor FilmShadowTint; /* Ofs: 0x198 Size: 0x10 StructProperty Engine.PostProcessSettings.FilmShadowTint */
    float FilmShadowTintBlend; /* Ofs: 0x1A8 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmShadowTintBlend */
    float FilmShadowTintAmount; /* Ofs: 0x1AC Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmShadowTintAmount */
    float FilmSaturation; /* Ofs: 0x1B0 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmSaturation */
    FLinearColor FilmChannelMixerRed; /* Ofs: 0x1B4 Size: 0x10 StructProperty Engine.PostProcessSettings.FilmChannelMixerRed */
    FLinearColor FilmChannelMixerGreen; /* Ofs: 0x1C4 Size: 0x10 StructProperty Engine.PostProcessSettings.FilmChannelMixerGreen */
    FLinearColor FilmChannelMixerBlue; /* Ofs: 0x1D4 Size: 0x10 StructProperty Engine.PostProcessSettings.FilmChannelMixerBlue */
    float FilmContrast; /* Ofs: 0x1E4 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmContrast */
    float FilmToeAmount; /* Ofs: 0x1E8 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmToeAmount */
    float FilmHealAmount; /* Ofs: 0x1EC Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmHealAmount */
    float FilmDynamicRange; /* Ofs: 0x1F0 Size: 0x4 FloatProperty Engine.PostProcessSettings.FilmDynamicRange */
    FLinearColor SceneColorTint; /* Ofs: 0x1F4 Size: 0x10 StructProperty Engine.PostProcessSettings.SceneColorTint */
    float SceneFringeIntensity; /* Ofs: 0x204 Size: 0x4 FloatProperty Engine.PostProcessSettings.SceneFringeIntensity */
    TEnumAsByte<enum EBloomMethod> BloomMethod; /* Ofs: 0x208 Size: 0x1 ByteProperty Engine.PostProcessSettings.BloomMethod */
    uint8_t UnknownData209[0x3];
    float BloomIntensity; /* Ofs: 0x20C Size: 0x4 FloatProperty Engine.PostProcessSettings.BloomIntensity */
    float BloomThreshold; /* Ofs: 0x210 Size: 0x4 FloatProperty Engine.PostProcessSettings.BloomThreshold */
    float BloomSizeScale; /* Ofs: 0x214 Size: 0x4 FloatProperty Engine.PostProcessSettings.BloomSizeScale */
    float Bloom1Size; /* Ofs: 0x218 Size: 0x4 FloatProperty Engine.PostProcessSettings.Bloom1Size */
    float Bloom2Size; /* Ofs: 0x21C Size: 0x4 FloatProperty Engine.PostProcessSettings.Bloom2Size */
    float Bloom3Size; /* Ofs: 0x220 Size: 0x4 FloatProperty Engine.PostProcessSettings.Bloom3Size */
    float Bloom4Size; /* Ofs: 0x224 Size: 0x4 FloatProperty Engine.PostProcessSettings.Bloom4Size */
    float Bloom5Size; /* Ofs: 0x228 Size: 0x4 FloatProperty Engine.PostProcessSettings.Bloom5Size */
    float Bloom6Size; /* Ofs: 0x22C Size: 0x4 FloatProperty Engine.PostProcessSettings.Bloom6Size */
    FLinearColor Bloom1Tint; /* Ofs: 0x230 Size: 0x10 StructProperty Engine.PostProcessSettings.Bloom1Tint */
    FLinearColor Bloom2Tint; /* Ofs: 0x240 Size: 0x10 StructProperty Engine.PostProcessSettings.Bloom2Tint */
    FLinearColor Bloom3Tint; /* Ofs: 0x250 Size: 0x10 StructProperty Engine.PostProcessSettings.Bloom3Tint */
    FLinearColor Bloom4Tint; /* Ofs: 0x260 Size: 0x10 StructProperty Engine.PostProcessSettings.Bloom4Tint */
    FLinearColor Bloom5Tint; /* Ofs: 0x270 Size: 0x10 StructProperty Engine.PostProcessSettings.Bloom5Tint */
    FLinearColor Bloom6Tint; /* Ofs: 0x280 Size: 0x10 StructProperty Engine.PostProcessSettings.Bloom6Tint */
    ExternalPtr<struct UTexture2D> BloomConvolutionTexture; /* Ofs: 0x290 Size: 0x8 ObjectProperty Engine.PostProcessSettings.BloomConvolutionTexture */
    float BloomConvolutionSize; /* Ofs: 0x298 Size: 0x4 FloatProperty Engine.PostProcessSettings.BloomConvolutionSize */
    FVector2D BloomConvolutionCenterUV; /* Ofs: 0x29C Size: 0x8 StructProperty Engine.PostProcessSettings.BloomConvolutionCenterUV */
    FVector BloomConvolutionPreFilter; /* Ofs: 0x2A4 Size: 0xC StructProperty Engine.PostProcessSettings.BloomConvolutionPreFilter */
    float BloomConvolutionBufferScale; /* Ofs: 0x2B0 Size: 0x4 FloatProperty Engine.PostProcessSettings.BloomConvolutionBufferScale */
    uint8_t UnknownData2B4[0x4];
    ExternalPtr<struct UTexture> BloomDirtMask; /* Ofs: 0x2B8 Size: 0x8 ObjectProperty Engine.PostProcessSettings.BloomDirtMask */
    float BloomDirtMaskIntensity; /* Ofs: 0x2C0 Size: 0x4 FloatProperty Engine.PostProcessSettings.BloomDirtMaskIntensity */
    FLinearColor BloomDirtMaskTint; /* Ofs: 0x2C4 Size: 0x10 StructProperty Engine.PostProcessSettings.BloomDirtMaskTint */
    float TslBlurIntensity; /* Ofs: 0x2D4 Size: 0x4 FloatProperty Engine.PostProcessSettings.TslBlurIntensity */
    float TslBlurScopeInnerEdge; /* Ofs: 0x2D8 Size: 0x4 FloatProperty Engine.PostProcessSettings.TslBlurScopeInnerEdge */
    float TslBlurScopeOutterEdge; /* Ofs: 0x2DC Size: 0x4 FloatProperty Engine.PostProcessSettings.TslBlurScopeOutterEdge */
    float TslBlurDepthBlackPoint; /* Ofs: 0x2E0 Size: 0x4 FloatProperty Engine.PostProcessSettings.TslBlurDepthBlackPoint */
    float TslBlurDepthWhitePoint; /* Ofs: 0x2E4 Size: 0x4 FloatProperty Engine.PostProcessSettings.TslBlurDepthWhitePoint */
    float TslBlurDepthGamma; /* Ofs: 0x2E8 Size: 0x4 FloatProperty Engine.PostProcessSettings.TslBlurDepthGamma */
    bool bTslBlurUseBranching; /* Ofs: 0x2EC Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bTslBlurUseBranching */
    uint8_t UnknownData2ED[0x3];
    FLinearColor AmbientCubemapTint; /* Ofs: 0x2F0 Size: 0x10 StructProperty Engine.PostProcessSettings.AmbientCubemapTint */
    float AmbientCubemapIntensity; /* Ofs: 0x300 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientCubemapIntensity */
    uint8_t UnknownData304[0x4];
    ExternalPtr<struct UTextureCube> AmbientCubemap; /* Ofs: 0x308 Size: 0x8 ObjectProperty Engine.PostProcessSettings.AmbientCubemap */
    TEnumAsByte<enum EAutoExposureMethod> AutoExposureMethod; /* Ofs: 0x310 Size: 0x1 ByteProperty Engine.PostProcessSettings.AutoExposureMethod */
    uint8_t UnknownData311[0x3];
    float AutoExposureLowPercent; /* Ofs: 0x314 Size: 0x4 FloatProperty Engine.PostProcessSettings.AutoExposureLowPercent */
    float AutoExposureHighPercent; /* Ofs: 0x318 Size: 0x4 FloatProperty Engine.PostProcessSettings.AutoExposureHighPercent */
    float AutoExposureMinBrightness; /* Ofs: 0x31C Size: 0x4 FloatProperty Engine.PostProcessSettings.AutoExposureMinBrightness */
    float AutoExposureMaxBrightness; /* Ofs: 0x320 Size: 0x4 FloatProperty Engine.PostProcessSettings.AutoExposureMaxBrightness */
    float AutoExposureSpeedUp; /* Ofs: 0x324 Size: 0x4 FloatProperty Engine.PostProcessSettings.AutoExposureSpeedUp */
    float AutoExposureSpeedDown; /* Ofs: 0x328 Size: 0x4 FloatProperty Engine.PostProcessSettings.AutoExposureSpeedDown */
    float AutoExposureBias; /* Ofs: 0x32C Size: 0x4 FloatProperty Engine.PostProcessSettings.AutoExposureBias */
    float HistogramLogMin; /* Ofs: 0x330 Size: 0x4 FloatProperty Engine.PostProcessSettings.HistogramLogMin */
    float HistogramLogMax; /* Ofs: 0x334 Size: 0x4 FloatProperty Engine.PostProcessSettings.HistogramLogMax */
    float LensFlareIntensity; /* Ofs: 0x338 Size: 0x4 FloatProperty Engine.PostProcessSettings.LensFlareIntensity */
    FLinearColor LensFlareTint; /* Ofs: 0x33C Size: 0x10 StructProperty Engine.PostProcessSettings.LensFlareTint */
    float LensFlareBokehSize; /* Ofs: 0x34C Size: 0x4 FloatProperty Engine.PostProcessSettings.LensFlareBokehSize */
    float LensFlareThreshold; /* Ofs: 0x350 Size: 0x4 FloatProperty Engine.PostProcessSettings.LensFlareThreshold */
    uint8_t UnknownData354[0x4];
    ExternalPtr<struct UTexture> LensFlareBokehShape; /* Ofs: 0x358 Size: 0x8 ObjectProperty Engine.PostProcessSettings.LensFlareBokehShape */
    FLinearColor LensFlareTints[8]; /* Ofs: 0x360 Size: 0x10 StructProperty Engine.PostProcessSettings.LensFlareTints */
    float VignetteIntensity; /* Ofs: 0x3E0 Size: 0x4 FloatProperty Engine.PostProcessSettings.VignetteIntensity */
    float GrainJitter; /* Ofs: 0x3E4 Size: 0x4 FloatProperty Engine.PostProcessSettings.GrainJitter */
    float GrainIntensity; /* Ofs: 0x3E8 Size: 0x4 FloatProperty Engine.PostProcessSettings.GrainIntensity */
    float HBAOPowerExponent; /* Ofs: 0x3EC Size: 0x4 FloatProperty Engine.PostProcessSettings.HBAOPowerExponent */
    float HBAORadius; /* Ofs: 0x3F0 Size: 0x4 FloatProperty Engine.PostProcessSettings.HBAORadius */
    float HBAOBias; /* Ofs: 0x3F4 Size: 0x4 FloatProperty Engine.PostProcessSettings.HBAOBias */
    float HBAODetailAO; /* Ofs: 0x3F8 Size: 0x4 FloatProperty Engine.PostProcessSettings.HBAODetailAO */
    TEnumAsByte<enum EHBAOBlurRadius> HBAOBlurRadius; /* Ofs: 0x3FC Size: 0x1 ByteProperty Engine.PostProcessSettings.HBAOBlurRadius */
    uint8_t UnknownData3FD[0x3];
    float HBAOBlurSharpness; /* Ofs: 0x400 Size: 0x4 FloatProperty Engine.PostProcessSettings.HBAOBlurSharpness */
    float HBAOMaxViewDepth; /* Ofs: 0x404 Size: 0x4 FloatProperty Engine.PostProcessSettings.HBAOMaxViewDepth */
    float HBAODepthSharpness; /* Ofs: 0x408 Size: 0x4 FloatProperty Engine.PostProcessSettings.HBAODepthSharpness */
    float AmbientOcclusionIntensity; /* Ofs: 0x40C Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionIntensity */
    float AmbientOcclusionStaticFraction; /* Ofs: 0x410 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionStaticFraction */
    float AmbientOcclusionRadius; /* Ofs: 0x414 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionRadius */
    bool AmbientOcclusionRadiusInWS; /* Ofs: 0x418 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.AmbientOcclusionRadiusInWS */
    uint8_t UnknownData419[0x3];
    float AmbientOcclusionFadeDistance; /* Ofs: 0x41C Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionFadeDistance */
    float AmbientOcclusionFadeRadius; /* Ofs: 0x420 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionFadeRadius */
    float AmbientOcclusionDistance; /* Ofs: 0x424 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionDistance */
    float AmbientOcclusionPower; /* Ofs: 0x428 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionPower */
    float AmbientOcclusionBias; /* Ofs: 0x42C Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionBias */
    float AmbientOcclusionQuality; /* Ofs: 0x430 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionQuality */
    float AmbientOcclusionMipBlend; /* Ofs: 0x434 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionMipBlend */
    float AmbientOcclusionMipScale; /* Ofs: 0x438 Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionMipScale */
    float AmbientOcclusionMipThreshold; /* Ofs: 0x43C Size: 0x4 FloatProperty Engine.PostProcessSettings.AmbientOcclusionMipThreshold */
    FLinearColor IndirectLightingColor; /* Ofs: 0x440 Size: 0x10 StructProperty Engine.PostProcessSettings.IndirectLightingColor */
    float IndirectLightingIntensity; /* Ofs: 0x450 Size: 0x4 FloatProperty Engine.PostProcessSettings.IndirectLightingIntensity */
    float ColorGradingIntensity; /* Ofs: 0x454 Size: 0x4 FloatProperty Engine.PostProcessSettings.ColorGradingIntensity */
    ExternalPtr<struct UTexture> ColorGradingLUT; /* Ofs: 0x458 Size: 0x8 ObjectProperty Engine.PostProcessSettings.ColorGradingLUT */
    TEnumAsByte<enum EDepthOfFieldMethod> DepthOfFieldMethod; /* Ofs: 0x460 Size: 0x1 ByteProperty Engine.PostProcessSettings.DepthOfFieldMethod */
    uint8_t UnknownData461[0x3];
    bool bMobileHQGaussian; /* Ofs: 0x464 Size: 0x1 BitMask: 01 BoolProperty Engine.PostProcessSettings.bMobileHQGaussian */
    uint8_t UnknownData465[0x3];
    float DepthOfFieldFstop; /* Ofs: 0x468 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldFstop */
    float DepthOfFieldSensorWidth; /* Ofs: 0x46C Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldSensorWidth */
    float DepthOfFieldFocalDistance; /* Ofs: 0x470 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldFocalDistance */
    float DepthOfFieldDepthBlurAmount; /* Ofs: 0x474 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldDepthBlurAmount */
    float DepthOfFieldDepthBlurRadius; /* Ofs: 0x478 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldDepthBlurRadius */
    float DepthOfFieldFocalRegion; /* Ofs: 0x47C Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldFocalRegion */
    float DepthOfFieldNearTransitionRegion; /* Ofs: 0x480 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldNearTransitionRegion */
    float DepthOfFieldFarTransitionRegion; /* Ofs: 0x484 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldFarTransitionRegion */
    float DepthOfFieldScale; /* Ofs: 0x488 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldScale */
    float DepthOfFieldMaxBokehSize; /* Ofs: 0x48C Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldMaxBokehSize */
    float DepthOfFieldNearBlurSize; /* Ofs: 0x490 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldNearBlurSize */
    float DepthOfFieldFarBlurSize; /* Ofs: 0x494 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldFarBlurSize */
    ExternalPtr<struct UTexture> DepthOfFieldBokehShape; /* Ofs: 0x498 Size: 0x8 ObjectProperty Engine.PostProcessSettings.DepthOfFieldBokehShape */
    float DepthOfFieldOcclusion; /* Ofs: 0x4A0 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldOcclusion */
    float DepthOfFieldColorThreshold; /* Ofs: 0x4A4 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldColorThreshold */
    float DepthOfFieldSizeThreshold; /* Ofs: 0x4A8 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldSizeThreshold */
    float DepthOfFieldSkyFocusDistance; /* Ofs: 0x4AC Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldSkyFocusDistance */
    float DepthOfFieldVignetteSize; /* Ofs: 0x4B0 Size: 0x4 FloatProperty Engine.PostProcessSettings.DepthOfFieldVignetteSize */
    float MotionBlurAmount; /* Ofs: 0x4B4 Size: 0x4 FloatProperty Engine.PostProcessSettings.MotionBlurAmount */
    float MotionBlurMax; /* Ofs: 0x4B8 Size: 0x4 FloatProperty Engine.PostProcessSettings.MotionBlurMax */
    float MotionBlurPerObjectSize; /* Ofs: 0x4BC Size: 0x4 FloatProperty Engine.PostProcessSettings.MotionBlurPerObjectSize */
    float LPVIntensity; /* Ofs: 0x4C0 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVIntensity */
    float LPVVplInjectionBias; /* Ofs: 0x4C4 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVVplInjectionBias */
    float LPVSize; /* Ofs: 0x4C8 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVSize */
    float LPVSecondaryOcclusionIntensity; /* Ofs: 0x4CC Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVSecondaryOcclusionIntensity */
    float LPVSecondaryBounceIntensity; /* Ofs: 0x4D0 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVSecondaryBounceIntensity */
    float LPVGeometryVolumeBias; /* Ofs: 0x4D4 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVGeometryVolumeBias */
    float LPVEmissiveInjectionIntensity; /* Ofs: 0x4D8 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVEmissiveInjectionIntensity */
    float LPVDirectionalOcclusionIntensity; /* Ofs: 0x4DC Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVDirectionalOcclusionIntensity */
    float LPVDirectionalOcclusionRadius; /* Ofs: 0x4E0 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVDirectionalOcclusionRadius */
    float LPVDiffuseOcclusionExponent; /* Ofs: 0x4E4 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVDiffuseOcclusionExponent */
    float LPVSpecularOcclusionExponent; /* Ofs: 0x4E8 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVSpecularOcclusionExponent */
    float LPVDiffuseOcclusionIntensity; /* Ofs: 0x4EC Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVDiffuseOcclusionIntensity */
    float LPVSpecularOcclusionIntensity; /* Ofs: 0x4F0 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVSpecularOcclusionIntensity */
    float ScreenSpaceReflectionIntensity; /* Ofs: 0x4F4 Size: 0x4 FloatProperty Engine.PostProcessSettings.ScreenSpaceReflectionIntensity */
    float ScreenSpaceReflectionQuality; /* Ofs: 0x4F8 Size: 0x4 FloatProperty Engine.PostProcessSettings.ScreenSpaceReflectionQuality */
    float ScreenSpaceReflectionMaxRoughness; /* Ofs: 0x4FC Size: 0x4 FloatProperty Engine.PostProcessSettings.ScreenSpaceReflectionMaxRoughness */
    float LPVFadeRange; /* Ofs: 0x500 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVFadeRange */
    float LPVDirectionalOcclusionFadeRange; /* Ofs: 0x504 Size: 0x4 FloatProperty Engine.PostProcessSettings.LPVDirectionalOcclusionFadeRange */
    float ScreenPercentage; /* Ofs: 0x508 Size: 0x4 FloatProperty Engine.PostProcessSettings.ScreenPercentage */
    uint8_t UnknownData50C[0x4];
    FWeightedBlendables WeightedBlendables; /* Ofs: 0x510 Size: 0x10 StructProperty Engine.PostProcessSettings.WeightedBlendables */
    TArray<ExternalPtr<struct UObject>> Blendables; /* Ofs: 0x520 Size: 0x10 ArrayProperty Engine.PostProcessSettings.Blendables */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPostProcessSettings = sizeof(FPostProcessSettings); // 1328
    static_assert(sizeof(FPostProcessSettings) == 0x530, "Size of FPostProcessSettings is not correct.");
	auto constexpr FPostProcessSettings_WhiteTemp_Offset = offsetof(FPostProcessSettings, WhiteTemp);
	static_assert(FPostProcessSettings_WhiteTemp_Offset == 0x18, "FPostProcessSettings::WhiteTemp offset is not 18");
	auto constexpr FPostProcessSettings_WhiteTint_Offset = offsetof(FPostProcessSettings, WhiteTint);
	static_assert(FPostProcessSettings_WhiteTint_Offset == 0x1c, "FPostProcessSettings::WhiteTint offset is not 1c");
	auto constexpr FPostProcessSettings_ColorSaturation_Offset = offsetof(FPostProcessSettings, ColorSaturation);
	static_assert(FPostProcessSettings_ColorSaturation_Offset == 0x20, "FPostProcessSettings::ColorSaturation offset is not 20");
	auto constexpr FPostProcessSettings_ColorContrast_Offset = offsetof(FPostProcessSettings, ColorContrast);
	static_assert(FPostProcessSettings_ColorContrast_Offset == 0x30, "FPostProcessSettings::ColorContrast offset is not 30");
	auto constexpr FPostProcessSettings_ColorGamma_Offset = offsetof(FPostProcessSettings, ColorGamma);
	static_assert(FPostProcessSettings_ColorGamma_Offset == 0x40, "FPostProcessSettings::ColorGamma offset is not 40");
	auto constexpr FPostProcessSettings_ColorGain_Offset = offsetof(FPostProcessSettings, ColorGain);
	static_assert(FPostProcessSettings_ColorGain_Offset == 0x50, "FPostProcessSettings::ColorGain offset is not 50");
	auto constexpr FPostProcessSettings_ColorOffset_Offset = offsetof(FPostProcessSettings, ColorOffset);
	static_assert(FPostProcessSettings_ColorOffset_Offset == 0x60, "FPostProcessSettings::ColorOffset offset is not 60");
	auto constexpr FPostProcessSettings_ColorSaturationShadows_Offset = offsetof(FPostProcessSettings, ColorSaturationShadows);
	static_assert(FPostProcessSettings_ColorSaturationShadows_Offset == 0x70, "FPostProcessSettings::ColorSaturationShadows offset is not 70");
	auto constexpr FPostProcessSettings_ColorContrastShadows_Offset = offsetof(FPostProcessSettings, ColorContrastShadows);
	static_assert(FPostProcessSettings_ColorContrastShadows_Offset == 0x80, "FPostProcessSettings::ColorContrastShadows offset is not 80");
	auto constexpr FPostProcessSettings_ColorGammaShadows_Offset = offsetof(FPostProcessSettings, ColorGammaShadows);
	static_assert(FPostProcessSettings_ColorGammaShadows_Offset == 0x90, "FPostProcessSettings::ColorGammaShadows offset is not 90");
	auto constexpr FPostProcessSettings_ColorGainShadows_Offset = offsetof(FPostProcessSettings, ColorGainShadows);
	static_assert(FPostProcessSettings_ColorGainShadows_Offset == 0xa0, "FPostProcessSettings::ColorGainShadows offset is not a0");
	auto constexpr FPostProcessSettings_ColorOffsetShadows_Offset = offsetof(FPostProcessSettings, ColorOffsetShadows);
	static_assert(FPostProcessSettings_ColorOffsetShadows_Offset == 0xb0, "FPostProcessSettings::ColorOffsetShadows offset is not b0");
	auto constexpr FPostProcessSettings_ColorCorrectionShadowsMax_Offset = offsetof(FPostProcessSettings, ColorCorrectionShadowsMax);
	static_assert(FPostProcessSettings_ColorCorrectionShadowsMax_Offset == 0xc0, "FPostProcessSettings::ColorCorrectionShadowsMax offset is not c0");
	auto constexpr FPostProcessSettings_ColorSaturationMidtones_Offset = offsetof(FPostProcessSettings, ColorSaturationMidtones);
	static_assert(FPostProcessSettings_ColorSaturationMidtones_Offset == 0xd0, "FPostProcessSettings::ColorSaturationMidtones offset is not d0");
	auto constexpr FPostProcessSettings_ColorContrastMidtones_Offset = offsetof(FPostProcessSettings, ColorContrastMidtones);
	static_assert(FPostProcessSettings_ColorContrastMidtones_Offset == 0xe0, "FPostProcessSettings::ColorContrastMidtones offset is not e0");
	auto constexpr FPostProcessSettings_ColorGammaMidtones_Offset = offsetof(FPostProcessSettings, ColorGammaMidtones);
	static_assert(FPostProcessSettings_ColorGammaMidtones_Offset == 0xf0, "FPostProcessSettings::ColorGammaMidtones offset is not f0");
	auto constexpr FPostProcessSettings_ColorGainMidtones_Offset = offsetof(FPostProcessSettings, ColorGainMidtones);
	static_assert(FPostProcessSettings_ColorGainMidtones_Offset == 0x100, "FPostProcessSettings::ColorGainMidtones offset is not 100");
	auto constexpr FPostProcessSettings_ColorOffsetMidtones_Offset = offsetof(FPostProcessSettings, ColorOffsetMidtones);
	static_assert(FPostProcessSettings_ColorOffsetMidtones_Offset == 0x110, "FPostProcessSettings::ColorOffsetMidtones offset is not 110");
	auto constexpr FPostProcessSettings_ColorSaturationHighlights_Offset = offsetof(FPostProcessSettings, ColorSaturationHighlights);
	static_assert(FPostProcessSettings_ColorSaturationHighlights_Offset == 0x120, "FPostProcessSettings::ColorSaturationHighlights offset is not 120");
	auto constexpr FPostProcessSettings_ColorContrastHighlights_Offset = offsetof(FPostProcessSettings, ColorContrastHighlights);
	static_assert(FPostProcessSettings_ColorContrastHighlights_Offset == 0x130, "FPostProcessSettings::ColorContrastHighlights offset is not 130");
	auto constexpr FPostProcessSettings_ColorGammaHighlights_Offset = offsetof(FPostProcessSettings, ColorGammaHighlights);
	static_assert(FPostProcessSettings_ColorGammaHighlights_Offset == 0x140, "FPostProcessSettings::ColorGammaHighlights offset is not 140");
	auto constexpr FPostProcessSettings_ColorGainHighlights_Offset = offsetof(FPostProcessSettings, ColorGainHighlights);
	static_assert(FPostProcessSettings_ColorGainHighlights_Offset == 0x150, "FPostProcessSettings::ColorGainHighlights offset is not 150");
	auto constexpr FPostProcessSettings_ColorOffsetHighlights_Offset = offsetof(FPostProcessSettings, ColorOffsetHighlights);
	static_assert(FPostProcessSettings_ColorOffsetHighlights_Offset == 0x160, "FPostProcessSettings::ColorOffsetHighlights offset is not 160");
	auto constexpr FPostProcessSettings_ColorCorrectionHighlightsMin_Offset = offsetof(FPostProcessSettings, ColorCorrectionHighlightsMin);
	static_assert(FPostProcessSettings_ColorCorrectionHighlightsMin_Offset == 0x170, "FPostProcessSettings::ColorCorrectionHighlightsMin offset is not 170");
	auto constexpr FPostProcessSettings_FilmSlope_Offset = offsetof(FPostProcessSettings, FilmSlope);
	static_assert(FPostProcessSettings_FilmSlope_Offset == 0x174, "FPostProcessSettings::FilmSlope offset is not 174");
	auto constexpr FPostProcessSettings_FilmToe_Offset = offsetof(FPostProcessSettings, FilmToe);
	static_assert(FPostProcessSettings_FilmToe_Offset == 0x178, "FPostProcessSettings::FilmToe offset is not 178");
	auto constexpr FPostProcessSettings_FilmShoulder_Offset = offsetof(FPostProcessSettings, FilmShoulder);
	static_assert(FPostProcessSettings_FilmShoulder_Offset == 0x17c, "FPostProcessSettings::FilmShoulder offset is not 17c");
	auto constexpr FPostProcessSettings_FilmBlackClip_Offset = offsetof(FPostProcessSettings, FilmBlackClip);
	static_assert(FPostProcessSettings_FilmBlackClip_Offset == 0x180, "FPostProcessSettings::FilmBlackClip offset is not 180");
	auto constexpr FPostProcessSettings_FilmWhiteClip_Offset = offsetof(FPostProcessSettings, FilmWhiteClip);
	static_assert(FPostProcessSettings_FilmWhiteClip_Offset == 0x184, "FPostProcessSettings::FilmWhiteClip offset is not 184");
	auto constexpr FPostProcessSettings_FilmWhitePoint_Offset = offsetof(FPostProcessSettings, FilmWhitePoint);
	static_assert(FPostProcessSettings_FilmWhitePoint_Offset == 0x188, "FPostProcessSettings::FilmWhitePoint offset is not 188");
	auto constexpr FPostProcessSettings_FilmShadowTint_Offset = offsetof(FPostProcessSettings, FilmShadowTint);
	static_assert(FPostProcessSettings_FilmShadowTint_Offset == 0x198, "FPostProcessSettings::FilmShadowTint offset is not 198");
	auto constexpr FPostProcessSettings_FilmShadowTintBlend_Offset = offsetof(FPostProcessSettings, FilmShadowTintBlend);
	static_assert(FPostProcessSettings_FilmShadowTintBlend_Offset == 0x1a8, "FPostProcessSettings::FilmShadowTintBlend offset is not 1a8");
	auto constexpr FPostProcessSettings_FilmShadowTintAmount_Offset = offsetof(FPostProcessSettings, FilmShadowTintAmount);
	static_assert(FPostProcessSettings_FilmShadowTintAmount_Offset == 0x1ac, "FPostProcessSettings::FilmShadowTintAmount offset is not 1ac");
	auto constexpr FPostProcessSettings_FilmSaturation_Offset = offsetof(FPostProcessSettings, FilmSaturation);
	static_assert(FPostProcessSettings_FilmSaturation_Offset == 0x1b0, "FPostProcessSettings::FilmSaturation offset is not 1b0");
	auto constexpr FPostProcessSettings_FilmChannelMixerRed_Offset = offsetof(FPostProcessSettings, FilmChannelMixerRed);
	static_assert(FPostProcessSettings_FilmChannelMixerRed_Offset == 0x1b4, "FPostProcessSettings::FilmChannelMixerRed offset is not 1b4");
	auto constexpr FPostProcessSettings_FilmChannelMixerGreen_Offset = offsetof(FPostProcessSettings, FilmChannelMixerGreen);
	static_assert(FPostProcessSettings_FilmChannelMixerGreen_Offset == 0x1c4, "FPostProcessSettings::FilmChannelMixerGreen offset is not 1c4");
	auto constexpr FPostProcessSettings_FilmChannelMixerBlue_Offset = offsetof(FPostProcessSettings, FilmChannelMixerBlue);
	static_assert(FPostProcessSettings_FilmChannelMixerBlue_Offset == 0x1d4, "FPostProcessSettings::FilmChannelMixerBlue offset is not 1d4");
	auto constexpr FPostProcessSettings_FilmContrast_Offset = offsetof(FPostProcessSettings, FilmContrast);
	static_assert(FPostProcessSettings_FilmContrast_Offset == 0x1e4, "FPostProcessSettings::FilmContrast offset is not 1e4");
	auto constexpr FPostProcessSettings_FilmToeAmount_Offset = offsetof(FPostProcessSettings, FilmToeAmount);
	static_assert(FPostProcessSettings_FilmToeAmount_Offset == 0x1e8, "FPostProcessSettings::FilmToeAmount offset is not 1e8");
	auto constexpr FPostProcessSettings_FilmHealAmount_Offset = offsetof(FPostProcessSettings, FilmHealAmount);
	static_assert(FPostProcessSettings_FilmHealAmount_Offset == 0x1ec, "FPostProcessSettings::FilmHealAmount offset is not 1ec");
	auto constexpr FPostProcessSettings_FilmDynamicRange_Offset = offsetof(FPostProcessSettings, FilmDynamicRange);
	static_assert(FPostProcessSettings_FilmDynamicRange_Offset == 0x1f0, "FPostProcessSettings::FilmDynamicRange offset is not 1f0");
	auto constexpr FPostProcessSettings_SceneColorTint_Offset = offsetof(FPostProcessSettings, SceneColorTint);
	static_assert(FPostProcessSettings_SceneColorTint_Offset == 0x1f4, "FPostProcessSettings::SceneColorTint offset is not 1f4");
	auto constexpr FPostProcessSettings_SceneFringeIntensity_Offset = offsetof(FPostProcessSettings, SceneFringeIntensity);
	static_assert(FPostProcessSettings_SceneFringeIntensity_Offset == 0x204, "FPostProcessSettings::SceneFringeIntensity offset is not 204");
	auto constexpr FPostProcessSettings_BloomMethod_Offset = offsetof(FPostProcessSettings, BloomMethod);
	static_assert(FPostProcessSettings_BloomMethod_Offset == 0x208, "FPostProcessSettings::BloomMethod offset is not 208");
	auto constexpr FPostProcessSettings_BloomIntensity_Offset = offsetof(FPostProcessSettings, BloomIntensity);
	static_assert(FPostProcessSettings_BloomIntensity_Offset == 0x20c, "FPostProcessSettings::BloomIntensity offset is not 20c");
	auto constexpr FPostProcessSettings_BloomThreshold_Offset = offsetof(FPostProcessSettings, BloomThreshold);
	static_assert(FPostProcessSettings_BloomThreshold_Offset == 0x210, "FPostProcessSettings::BloomThreshold offset is not 210");
	auto constexpr FPostProcessSettings_BloomSizeScale_Offset = offsetof(FPostProcessSettings, BloomSizeScale);
	static_assert(FPostProcessSettings_BloomSizeScale_Offset == 0x214, "FPostProcessSettings::BloomSizeScale offset is not 214");
	auto constexpr FPostProcessSettings_Bloom1Size_Offset = offsetof(FPostProcessSettings, Bloom1Size);
	static_assert(FPostProcessSettings_Bloom1Size_Offset == 0x218, "FPostProcessSettings::Bloom1Size offset is not 218");
	auto constexpr FPostProcessSettings_Bloom2Size_Offset = offsetof(FPostProcessSettings, Bloom2Size);
	static_assert(FPostProcessSettings_Bloom2Size_Offset == 0x21c, "FPostProcessSettings::Bloom2Size offset is not 21c");
	auto constexpr FPostProcessSettings_Bloom3Size_Offset = offsetof(FPostProcessSettings, Bloom3Size);
	static_assert(FPostProcessSettings_Bloom3Size_Offset == 0x220, "FPostProcessSettings::Bloom3Size offset is not 220");
	auto constexpr FPostProcessSettings_Bloom4Size_Offset = offsetof(FPostProcessSettings, Bloom4Size);
	static_assert(FPostProcessSettings_Bloom4Size_Offset == 0x224, "FPostProcessSettings::Bloom4Size offset is not 224");
	auto constexpr FPostProcessSettings_Bloom5Size_Offset = offsetof(FPostProcessSettings, Bloom5Size);
	static_assert(FPostProcessSettings_Bloom5Size_Offset == 0x228, "FPostProcessSettings::Bloom5Size offset is not 228");
	auto constexpr FPostProcessSettings_Bloom6Size_Offset = offsetof(FPostProcessSettings, Bloom6Size);
	static_assert(FPostProcessSettings_Bloom6Size_Offset == 0x22c, "FPostProcessSettings::Bloom6Size offset is not 22c");
	auto constexpr FPostProcessSettings_Bloom1Tint_Offset = offsetof(FPostProcessSettings, Bloom1Tint);
	static_assert(FPostProcessSettings_Bloom1Tint_Offset == 0x230, "FPostProcessSettings::Bloom1Tint offset is not 230");
	auto constexpr FPostProcessSettings_Bloom2Tint_Offset = offsetof(FPostProcessSettings, Bloom2Tint);
	static_assert(FPostProcessSettings_Bloom2Tint_Offset == 0x240, "FPostProcessSettings::Bloom2Tint offset is not 240");
	auto constexpr FPostProcessSettings_Bloom3Tint_Offset = offsetof(FPostProcessSettings, Bloom3Tint);
	static_assert(FPostProcessSettings_Bloom3Tint_Offset == 0x250, "FPostProcessSettings::Bloom3Tint offset is not 250");
	auto constexpr FPostProcessSettings_Bloom4Tint_Offset = offsetof(FPostProcessSettings, Bloom4Tint);
	static_assert(FPostProcessSettings_Bloom4Tint_Offset == 0x260, "FPostProcessSettings::Bloom4Tint offset is not 260");
	auto constexpr FPostProcessSettings_Bloom5Tint_Offset = offsetof(FPostProcessSettings, Bloom5Tint);
	static_assert(FPostProcessSettings_Bloom5Tint_Offset == 0x270, "FPostProcessSettings::Bloom5Tint offset is not 270");
	auto constexpr FPostProcessSettings_Bloom6Tint_Offset = offsetof(FPostProcessSettings, Bloom6Tint);
	static_assert(FPostProcessSettings_Bloom6Tint_Offset == 0x280, "FPostProcessSettings::Bloom6Tint offset is not 280");
	auto constexpr FPostProcessSettings_BloomConvolutionTexture_Offset = offsetof(FPostProcessSettings, BloomConvolutionTexture);
	static_assert(FPostProcessSettings_BloomConvolutionTexture_Offset == 0x290, "FPostProcessSettings::BloomConvolutionTexture offset is not 290");
	auto constexpr FPostProcessSettings_BloomConvolutionSize_Offset = offsetof(FPostProcessSettings, BloomConvolutionSize);
	static_assert(FPostProcessSettings_BloomConvolutionSize_Offset == 0x298, "FPostProcessSettings::BloomConvolutionSize offset is not 298");
	auto constexpr FPostProcessSettings_BloomConvolutionCenterUV_Offset = offsetof(FPostProcessSettings, BloomConvolutionCenterUV);
	static_assert(FPostProcessSettings_BloomConvolutionCenterUV_Offset == 0x29c, "FPostProcessSettings::BloomConvolutionCenterUV offset is not 29c");
	auto constexpr FPostProcessSettings_BloomConvolutionPreFilter_Offset = offsetof(FPostProcessSettings, BloomConvolutionPreFilter);
	static_assert(FPostProcessSettings_BloomConvolutionPreFilter_Offset == 0x2a4, "FPostProcessSettings::BloomConvolutionPreFilter offset is not 2a4");
	auto constexpr FPostProcessSettings_BloomConvolutionBufferScale_Offset = offsetof(FPostProcessSettings, BloomConvolutionBufferScale);
	static_assert(FPostProcessSettings_BloomConvolutionBufferScale_Offset == 0x2b0, "FPostProcessSettings::BloomConvolutionBufferScale offset is not 2b0");
	auto constexpr FPostProcessSettings_BloomDirtMask_Offset = offsetof(FPostProcessSettings, BloomDirtMask);
	static_assert(FPostProcessSettings_BloomDirtMask_Offset == 0x2b8, "FPostProcessSettings::BloomDirtMask offset is not 2b8");
	auto constexpr FPostProcessSettings_BloomDirtMaskIntensity_Offset = offsetof(FPostProcessSettings, BloomDirtMaskIntensity);
	static_assert(FPostProcessSettings_BloomDirtMaskIntensity_Offset == 0x2c0, "FPostProcessSettings::BloomDirtMaskIntensity offset is not 2c0");
	auto constexpr FPostProcessSettings_BloomDirtMaskTint_Offset = offsetof(FPostProcessSettings, BloomDirtMaskTint);
	static_assert(FPostProcessSettings_BloomDirtMaskTint_Offset == 0x2c4, "FPostProcessSettings::BloomDirtMaskTint offset is not 2c4");
	auto constexpr FPostProcessSettings_TslBlurIntensity_Offset = offsetof(FPostProcessSettings, TslBlurIntensity);
	static_assert(FPostProcessSettings_TslBlurIntensity_Offset == 0x2d4, "FPostProcessSettings::TslBlurIntensity offset is not 2d4");
	auto constexpr FPostProcessSettings_TslBlurScopeInnerEdge_Offset = offsetof(FPostProcessSettings, TslBlurScopeInnerEdge);
	static_assert(FPostProcessSettings_TslBlurScopeInnerEdge_Offset == 0x2d8, "FPostProcessSettings::TslBlurScopeInnerEdge offset is not 2d8");
	auto constexpr FPostProcessSettings_TslBlurScopeOutterEdge_Offset = offsetof(FPostProcessSettings, TslBlurScopeOutterEdge);
	static_assert(FPostProcessSettings_TslBlurScopeOutterEdge_Offset == 0x2dc, "FPostProcessSettings::TslBlurScopeOutterEdge offset is not 2dc");
	auto constexpr FPostProcessSettings_TslBlurDepthBlackPoint_Offset = offsetof(FPostProcessSettings, TslBlurDepthBlackPoint);
	static_assert(FPostProcessSettings_TslBlurDepthBlackPoint_Offset == 0x2e0, "FPostProcessSettings::TslBlurDepthBlackPoint offset is not 2e0");
	auto constexpr FPostProcessSettings_TslBlurDepthWhitePoint_Offset = offsetof(FPostProcessSettings, TslBlurDepthWhitePoint);
	static_assert(FPostProcessSettings_TslBlurDepthWhitePoint_Offset == 0x2e4, "FPostProcessSettings::TslBlurDepthWhitePoint offset is not 2e4");
	auto constexpr FPostProcessSettings_TslBlurDepthGamma_Offset = offsetof(FPostProcessSettings, TslBlurDepthGamma);
	static_assert(FPostProcessSettings_TslBlurDepthGamma_Offset == 0x2e8, "FPostProcessSettings::TslBlurDepthGamma offset is not 2e8");
	auto constexpr FPostProcessSettings_AmbientCubemapTint_Offset = offsetof(FPostProcessSettings, AmbientCubemapTint);
	static_assert(FPostProcessSettings_AmbientCubemapTint_Offset == 0x2f0, "FPostProcessSettings::AmbientCubemapTint offset is not 2f0");
	auto constexpr FPostProcessSettings_AmbientCubemapIntensity_Offset = offsetof(FPostProcessSettings, AmbientCubemapIntensity);
	static_assert(FPostProcessSettings_AmbientCubemapIntensity_Offset == 0x300, "FPostProcessSettings::AmbientCubemapIntensity offset is not 300");
	auto constexpr FPostProcessSettings_AmbientCubemap_Offset = offsetof(FPostProcessSettings, AmbientCubemap);
	static_assert(FPostProcessSettings_AmbientCubemap_Offset == 0x308, "FPostProcessSettings::AmbientCubemap offset is not 308");
	auto constexpr FPostProcessSettings_AutoExposureMethod_Offset = offsetof(FPostProcessSettings, AutoExposureMethod);
	static_assert(FPostProcessSettings_AutoExposureMethod_Offset == 0x310, "FPostProcessSettings::AutoExposureMethod offset is not 310");
	auto constexpr FPostProcessSettings_AutoExposureLowPercent_Offset = offsetof(FPostProcessSettings, AutoExposureLowPercent);
	static_assert(FPostProcessSettings_AutoExposureLowPercent_Offset == 0x314, "FPostProcessSettings::AutoExposureLowPercent offset is not 314");
	auto constexpr FPostProcessSettings_AutoExposureHighPercent_Offset = offsetof(FPostProcessSettings, AutoExposureHighPercent);
	static_assert(FPostProcessSettings_AutoExposureHighPercent_Offset == 0x318, "FPostProcessSettings::AutoExposureHighPercent offset is not 318");
	auto constexpr FPostProcessSettings_AutoExposureMinBrightness_Offset = offsetof(FPostProcessSettings, AutoExposureMinBrightness);
	static_assert(FPostProcessSettings_AutoExposureMinBrightness_Offset == 0x31c, "FPostProcessSettings::AutoExposureMinBrightness offset is not 31c");
	auto constexpr FPostProcessSettings_AutoExposureMaxBrightness_Offset = offsetof(FPostProcessSettings, AutoExposureMaxBrightness);
	static_assert(FPostProcessSettings_AutoExposureMaxBrightness_Offset == 0x320, "FPostProcessSettings::AutoExposureMaxBrightness offset is not 320");
	auto constexpr FPostProcessSettings_AutoExposureSpeedUp_Offset = offsetof(FPostProcessSettings, AutoExposureSpeedUp);
	static_assert(FPostProcessSettings_AutoExposureSpeedUp_Offset == 0x324, "FPostProcessSettings::AutoExposureSpeedUp offset is not 324");
	auto constexpr FPostProcessSettings_AutoExposureSpeedDown_Offset = offsetof(FPostProcessSettings, AutoExposureSpeedDown);
	static_assert(FPostProcessSettings_AutoExposureSpeedDown_Offset == 0x328, "FPostProcessSettings::AutoExposureSpeedDown offset is not 328");
	auto constexpr FPostProcessSettings_AutoExposureBias_Offset = offsetof(FPostProcessSettings, AutoExposureBias);
	static_assert(FPostProcessSettings_AutoExposureBias_Offset == 0x32c, "FPostProcessSettings::AutoExposureBias offset is not 32c");
	auto constexpr FPostProcessSettings_HistogramLogMin_Offset = offsetof(FPostProcessSettings, HistogramLogMin);
	static_assert(FPostProcessSettings_HistogramLogMin_Offset == 0x330, "FPostProcessSettings::HistogramLogMin offset is not 330");
	auto constexpr FPostProcessSettings_HistogramLogMax_Offset = offsetof(FPostProcessSettings, HistogramLogMax);
	static_assert(FPostProcessSettings_HistogramLogMax_Offset == 0x334, "FPostProcessSettings::HistogramLogMax offset is not 334");
	auto constexpr FPostProcessSettings_LensFlareIntensity_Offset = offsetof(FPostProcessSettings, LensFlareIntensity);
	static_assert(FPostProcessSettings_LensFlareIntensity_Offset == 0x338, "FPostProcessSettings::LensFlareIntensity offset is not 338");
	auto constexpr FPostProcessSettings_LensFlareTint_Offset = offsetof(FPostProcessSettings, LensFlareTint);
	static_assert(FPostProcessSettings_LensFlareTint_Offset == 0x33c, "FPostProcessSettings::LensFlareTint offset is not 33c");
	auto constexpr FPostProcessSettings_LensFlareBokehSize_Offset = offsetof(FPostProcessSettings, LensFlareBokehSize);
	static_assert(FPostProcessSettings_LensFlareBokehSize_Offset == 0x34c, "FPostProcessSettings::LensFlareBokehSize offset is not 34c");
	auto constexpr FPostProcessSettings_LensFlareThreshold_Offset = offsetof(FPostProcessSettings, LensFlareThreshold);
	static_assert(FPostProcessSettings_LensFlareThreshold_Offset == 0x350, "FPostProcessSettings::LensFlareThreshold offset is not 350");
	auto constexpr FPostProcessSettings_LensFlareBokehShape_Offset = offsetof(FPostProcessSettings, LensFlareBokehShape);
	static_assert(FPostProcessSettings_LensFlareBokehShape_Offset == 0x358, "FPostProcessSettings::LensFlareBokehShape offset is not 358");
	auto constexpr FPostProcessSettings_LensFlareTints_Offset = offsetof(FPostProcessSettings, LensFlareTints);
	static_assert(FPostProcessSettings_LensFlareTints_Offset == 0x360, "FPostProcessSettings::LensFlareTints offset is not 360");
	auto constexpr FPostProcessSettings_VignetteIntensity_Offset = offsetof(FPostProcessSettings, VignetteIntensity);
	static_assert(FPostProcessSettings_VignetteIntensity_Offset == 0x3e0, "FPostProcessSettings::VignetteIntensity offset is not 3e0");
	auto constexpr FPostProcessSettings_GrainJitter_Offset = offsetof(FPostProcessSettings, GrainJitter);
	static_assert(FPostProcessSettings_GrainJitter_Offset == 0x3e4, "FPostProcessSettings::GrainJitter offset is not 3e4");
	auto constexpr FPostProcessSettings_GrainIntensity_Offset = offsetof(FPostProcessSettings, GrainIntensity);
	static_assert(FPostProcessSettings_GrainIntensity_Offset == 0x3e8, "FPostProcessSettings::GrainIntensity offset is not 3e8");
	auto constexpr FPostProcessSettings_HBAOPowerExponent_Offset = offsetof(FPostProcessSettings, HBAOPowerExponent);
	static_assert(FPostProcessSettings_HBAOPowerExponent_Offset == 0x3ec, "FPostProcessSettings::HBAOPowerExponent offset is not 3ec");
	auto constexpr FPostProcessSettings_HBAORadius_Offset = offsetof(FPostProcessSettings, HBAORadius);
	static_assert(FPostProcessSettings_HBAORadius_Offset == 0x3f0, "FPostProcessSettings::HBAORadius offset is not 3f0");
	auto constexpr FPostProcessSettings_HBAOBias_Offset = offsetof(FPostProcessSettings, HBAOBias);
	static_assert(FPostProcessSettings_HBAOBias_Offset == 0x3f4, "FPostProcessSettings::HBAOBias offset is not 3f4");
	auto constexpr FPostProcessSettings_HBAODetailAO_Offset = offsetof(FPostProcessSettings, HBAODetailAO);
	static_assert(FPostProcessSettings_HBAODetailAO_Offset == 0x3f8, "FPostProcessSettings::HBAODetailAO offset is not 3f8");
	auto constexpr FPostProcessSettings_HBAOBlurRadius_Offset = offsetof(FPostProcessSettings, HBAOBlurRadius);
	static_assert(FPostProcessSettings_HBAOBlurRadius_Offset == 0x3fc, "FPostProcessSettings::HBAOBlurRadius offset is not 3fc");
	auto constexpr FPostProcessSettings_HBAOBlurSharpness_Offset = offsetof(FPostProcessSettings, HBAOBlurSharpness);
	static_assert(FPostProcessSettings_HBAOBlurSharpness_Offset == 0x400, "FPostProcessSettings::HBAOBlurSharpness offset is not 400");
	auto constexpr FPostProcessSettings_HBAOMaxViewDepth_Offset = offsetof(FPostProcessSettings, HBAOMaxViewDepth);
	static_assert(FPostProcessSettings_HBAOMaxViewDepth_Offset == 0x404, "FPostProcessSettings::HBAOMaxViewDepth offset is not 404");
	auto constexpr FPostProcessSettings_HBAODepthSharpness_Offset = offsetof(FPostProcessSettings, HBAODepthSharpness);
	static_assert(FPostProcessSettings_HBAODepthSharpness_Offset == 0x408, "FPostProcessSettings::HBAODepthSharpness offset is not 408");
	auto constexpr FPostProcessSettings_AmbientOcclusionIntensity_Offset = offsetof(FPostProcessSettings, AmbientOcclusionIntensity);
	static_assert(FPostProcessSettings_AmbientOcclusionIntensity_Offset == 0x40c, "FPostProcessSettings::AmbientOcclusionIntensity offset is not 40c");
	auto constexpr FPostProcessSettings_AmbientOcclusionStaticFraction_Offset = offsetof(FPostProcessSettings, AmbientOcclusionStaticFraction);
	static_assert(FPostProcessSettings_AmbientOcclusionStaticFraction_Offset == 0x410, "FPostProcessSettings::AmbientOcclusionStaticFraction offset is not 410");
	auto constexpr FPostProcessSettings_AmbientOcclusionRadius_Offset = offsetof(FPostProcessSettings, AmbientOcclusionRadius);
	static_assert(FPostProcessSettings_AmbientOcclusionRadius_Offset == 0x414, "FPostProcessSettings::AmbientOcclusionRadius offset is not 414");
	auto constexpr FPostProcessSettings_AmbientOcclusionFadeDistance_Offset = offsetof(FPostProcessSettings, AmbientOcclusionFadeDistance);
	static_assert(FPostProcessSettings_AmbientOcclusionFadeDistance_Offset == 0x41c, "FPostProcessSettings::AmbientOcclusionFadeDistance offset is not 41c");
	auto constexpr FPostProcessSettings_AmbientOcclusionFadeRadius_Offset = offsetof(FPostProcessSettings, AmbientOcclusionFadeRadius);
	static_assert(FPostProcessSettings_AmbientOcclusionFadeRadius_Offset == 0x420, "FPostProcessSettings::AmbientOcclusionFadeRadius offset is not 420");
	auto constexpr FPostProcessSettings_AmbientOcclusionDistance_Offset = offsetof(FPostProcessSettings, AmbientOcclusionDistance);
	static_assert(FPostProcessSettings_AmbientOcclusionDistance_Offset == 0x424, "FPostProcessSettings::AmbientOcclusionDistance offset is not 424");
	auto constexpr FPostProcessSettings_AmbientOcclusionPower_Offset = offsetof(FPostProcessSettings, AmbientOcclusionPower);
	static_assert(FPostProcessSettings_AmbientOcclusionPower_Offset == 0x428, "FPostProcessSettings::AmbientOcclusionPower offset is not 428");
	auto constexpr FPostProcessSettings_AmbientOcclusionBias_Offset = offsetof(FPostProcessSettings, AmbientOcclusionBias);
	static_assert(FPostProcessSettings_AmbientOcclusionBias_Offset == 0x42c, "FPostProcessSettings::AmbientOcclusionBias offset is not 42c");
	auto constexpr FPostProcessSettings_AmbientOcclusionQuality_Offset = offsetof(FPostProcessSettings, AmbientOcclusionQuality);
	static_assert(FPostProcessSettings_AmbientOcclusionQuality_Offset == 0x430, "FPostProcessSettings::AmbientOcclusionQuality offset is not 430");
	auto constexpr FPostProcessSettings_AmbientOcclusionMipBlend_Offset = offsetof(FPostProcessSettings, AmbientOcclusionMipBlend);
	static_assert(FPostProcessSettings_AmbientOcclusionMipBlend_Offset == 0x434, "FPostProcessSettings::AmbientOcclusionMipBlend offset is not 434");
	auto constexpr FPostProcessSettings_AmbientOcclusionMipScale_Offset = offsetof(FPostProcessSettings, AmbientOcclusionMipScale);
	static_assert(FPostProcessSettings_AmbientOcclusionMipScale_Offset == 0x438, "FPostProcessSettings::AmbientOcclusionMipScale offset is not 438");
	auto constexpr FPostProcessSettings_AmbientOcclusionMipThreshold_Offset = offsetof(FPostProcessSettings, AmbientOcclusionMipThreshold);
	static_assert(FPostProcessSettings_AmbientOcclusionMipThreshold_Offset == 0x43c, "FPostProcessSettings::AmbientOcclusionMipThreshold offset is not 43c");
	auto constexpr FPostProcessSettings_IndirectLightingColor_Offset = offsetof(FPostProcessSettings, IndirectLightingColor);
	static_assert(FPostProcessSettings_IndirectLightingColor_Offset == 0x440, "FPostProcessSettings::IndirectLightingColor offset is not 440");
	auto constexpr FPostProcessSettings_IndirectLightingIntensity_Offset = offsetof(FPostProcessSettings, IndirectLightingIntensity);
	static_assert(FPostProcessSettings_IndirectLightingIntensity_Offset == 0x450, "FPostProcessSettings::IndirectLightingIntensity offset is not 450");
	auto constexpr FPostProcessSettings_ColorGradingIntensity_Offset = offsetof(FPostProcessSettings, ColorGradingIntensity);
	static_assert(FPostProcessSettings_ColorGradingIntensity_Offset == 0x454, "FPostProcessSettings::ColorGradingIntensity offset is not 454");
	auto constexpr FPostProcessSettings_ColorGradingLUT_Offset = offsetof(FPostProcessSettings, ColorGradingLUT);
	static_assert(FPostProcessSettings_ColorGradingLUT_Offset == 0x458, "FPostProcessSettings::ColorGradingLUT offset is not 458");
	auto constexpr FPostProcessSettings_DepthOfFieldMethod_Offset = offsetof(FPostProcessSettings, DepthOfFieldMethod);
	static_assert(FPostProcessSettings_DepthOfFieldMethod_Offset == 0x460, "FPostProcessSettings::DepthOfFieldMethod offset is not 460");
	auto constexpr FPostProcessSettings_DepthOfFieldFstop_Offset = offsetof(FPostProcessSettings, DepthOfFieldFstop);
	static_assert(FPostProcessSettings_DepthOfFieldFstop_Offset == 0x468, "FPostProcessSettings::DepthOfFieldFstop offset is not 468");
	auto constexpr FPostProcessSettings_DepthOfFieldSensorWidth_Offset = offsetof(FPostProcessSettings, DepthOfFieldSensorWidth);
	static_assert(FPostProcessSettings_DepthOfFieldSensorWidth_Offset == 0x46c, "FPostProcessSettings::DepthOfFieldSensorWidth offset is not 46c");
	auto constexpr FPostProcessSettings_DepthOfFieldFocalDistance_Offset = offsetof(FPostProcessSettings, DepthOfFieldFocalDistance);
	static_assert(FPostProcessSettings_DepthOfFieldFocalDistance_Offset == 0x470, "FPostProcessSettings::DepthOfFieldFocalDistance offset is not 470");
	auto constexpr FPostProcessSettings_DepthOfFieldDepthBlurAmount_Offset = offsetof(FPostProcessSettings, DepthOfFieldDepthBlurAmount);
	static_assert(FPostProcessSettings_DepthOfFieldDepthBlurAmount_Offset == 0x474, "FPostProcessSettings::DepthOfFieldDepthBlurAmount offset is not 474");
	auto constexpr FPostProcessSettings_DepthOfFieldDepthBlurRadius_Offset = offsetof(FPostProcessSettings, DepthOfFieldDepthBlurRadius);
	static_assert(FPostProcessSettings_DepthOfFieldDepthBlurRadius_Offset == 0x478, "FPostProcessSettings::DepthOfFieldDepthBlurRadius offset is not 478");
	auto constexpr FPostProcessSettings_DepthOfFieldFocalRegion_Offset = offsetof(FPostProcessSettings, DepthOfFieldFocalRegion);
	static_assert(FPostProcessSettings_DepthOfFieldFocalRegion_Offset == 0x47c, "FPostProcessSettings::DepthOfFieldFocalRegion offset is not 47c");
	auto constexpr FPostProcessSettings_DepthOfFieldNearTransitionRegion_Offset = offsetof(FPostProcessSettings, DepthOfFieldNearTransitionRegion);
	static_assert(FPostProcessSettings_DepthOfFieldNearTransitionRegion_Offset == 0x480, "FPostProcessSettings::DepthOfFieldNearTransitionRegion offset is not 480");
	auto constexpr FPostProcessSettings_DepthOfFieldFarTransitionRegion_Offset = offsetof(FPostProcessSettings, DepthOfFieldFarTransitionRegion);
	static_assert(FPostProcessSettings_DepthOfFieldFarTransitionRegion_Offset == 0x484, "FPostProcessSettings::DepthOfFieldFarTransitionRegion offset is not 484");
	auto constexpr FPostProcessSettings_DepthOfFieldScale_Offset = offsetof(FPostProcessSettings, DepthOfFieldScale);
	static_assert(FPostProcessSettings_DepthOfFieldScale_Offset == 0x488, "FPostProcessSettings::DepthOfFieldScale offset is not 488");
	auto constexpr FPostProcessSettings_DepthOfFieldMaxBokehSize_Offset = offsetof(FPostProcessSettings, DepthOfFieldMaxBokehSize);
	static_assert(FPostProcessSettings_DepthOfFieldMaxBokehSize_Offset == 0x48c, "FPostProcessSettings::DepthOfFieldMaxBokehSize offset is not 48c");
	auto constexpr FPostProcessSettings_DepthOfFieldNearBlurSize_Offset = offsetof(FPostProcessSettings, DepthOfFieldNearBlurSize);
	static_assert(FPostProcessSettings_DepthOfFieldNearBlurSize_Offset == 0x490, "FPostProcessSettings::DepthOfFieldNearBlurSize offset is not 490");
	auto constexpr FPostProcessSettings_DepthOfFieldFarBlurSize_Offset = offsetof(FPostProcessSettings, DepthOfFieldFarBlurSize);
	static_assert(FPostProcessSettings_DepthOfFieldFarBlurSize_Offset == 0x494, "FPostProcessSettings::DepthOfFieldFarBlurSize offset is not 494");
	auto constexpr FPostProcessSettings_DepthOfFieldBokehShape_Offset = offsetof(FPostProcessSettings, DepthOfFieldBokehShape);
	static_assert(FPostProcessSettings_DepthOfFieldBokehShape_Offset == 0x498, "FPostProcessSettings::DepthOfFieldBokehShape offset is not 498");
	auto constexpr FPostProcessSettings_DepthOfFieldOcclusion_Offset = offsetof(FPostProcessSettings, DepthOfFieldOcclusion);
	static_assert(FPostProcessSettings_DepthOfFieldOcclusion_Offset == 0x4a0, "FPostProcessSettings::DepthOfFieldOcclusion offset is not 4a0");
	auto constexpr FPostProcessSettings_DepthOfFieldColorThreshold_Offset = offsetof(FPostProcessSettings, DepthOfFieldColorThreshold);
	static_assert(FPostProcessSettings_DepthOfFieldColorThreshold_Offset == 0x4a4, "FPostProcessSettings::DepthOfFieldColorThreshold offset is not 4a4");
	auto constexpr FPostProcessSettings_DepthOfFieldSizeThreshold_Offset = offsetof(FPostProcessSettings, DepthOfFieldSizeThreshold);
	static_assert(FPostProcessSettings_DepthOfFieldSizeThreshold_Offset == 0x4a8, "FPostProcessSettings::DepthOfFieldSizeThreshold offset is not 4a8");
	auto constexpr FPostProcessSettings_DepthOfFieldSkyFocusDistance_Offset = offsetof(FPostProcessSettings, DepthOfFieldSkyFocusDistance);
	static_assert(FPostProcessSettings_DepthOfFieldSkyFocusDistance_Offset == 0x4ac, "FPostProcessSettings::DepthOfFieldSkyFocusDistance offset is not 4ac");
	auto constexpr FPostProcessSettings_DepthOfFieldVignetteSize_Offset = offsetof(FPostProcessSettings, DepthOfFieldVignetteSize);
	static_assert(FPostProcessSettings_DepthOfFieldVignetteSize_Offset == 0x4b0, "FPostProcessSettings::DepthOfFieldVignetteSize offset is not 4b0");
	auto constexpr FPostProcessSettings_MotionBlurAmount_Offset = offsetof(FPostProcessSettings, MotionBlurAmount);
	static_assert(FPostProcessSettings_MotionBlurAmount_Offset == 0x4b4, "FPostProcessSettings::MotionBlurAmount offset is not 4b4");
	auto constexpr FPostProcessSettings_MotionBlurMax_Offset = offsetof(FPostProcessSettings, MotionBlurMax);
	static_assert(FPostProcessSettings_MotionBlurMax_Offset == 0x4b8, "FPostProcessSettings::MotionBlurMax offset is not 4b8");
	auto constexpr FPostProcessSettings_MotionBlurPerObjectSize_Offset = offsetof(FPostProcessSettings, MotionBlurPerObjectSize);
	static_assert(FPostProcessSettings_MotionBlurPerObjectSize_Offset == 0x4bc, "FPostProcessSettings::MotionBlurPerObjectSize offset is not 4bc");
	auto constexpr FPostProcessSettings_LPVIntensity_Offset = offsetof(FPostProcessSettings, LPVIntensity);
	static_assert(FPostProcessSettings_LPVIntensity_Offset == 0x4c0, "FPostProcessSettings::LPVIntensity offset is not 4c0");
	auto constexpr FPostProcessSettings_LPVVplInjectionBias_Offset = offsetof(FPostProcessSettings, LPVVplInjectionBias);
	static_assert(FPostProcessSettings_LPVVplInjectionBias_Offset == 0x4c4, "FPostProcessSettings::LPVVplInjectionBias offset is not 4c4");
	auto constexpr FPostProcessSettings_LPVSize_Offset = offsetof(FPostProcessSettings, LPVSize);
	static_assert(FPostProcessSettings_LPVSize_Offset == 0x4c8, "FPostProcessSettings::LPVSize offset is not 4c8");
	auto constexpr FPostProcessSettings_LPVSecondaryOcclusionIntensity_Offset = offsetof(FPostProcessSettings, LPVSecondaryOcclusionIntensity);
	static_assert(FPostProcessSettings_LPVSecondaryOcclusionIntensity_Offset == 0x4cc, "FPostProcessSettings::LPVSecondaryOcclusionIntensity offset is not 4cc");
	auto constexpr FPostProcessSettings_LPVSecondaryBounceIntensity_Offset = offsetof(FPostProcessSettings, LPVSecondaryBounceIntensity);
	static_assert(FPostProcessSettings_LPVSecondaryBounceIntensity_Offset == 0x4d0, "FPostProcessSettings::LPVSecondaryBounceIntensity offset is not 4d0");
	auto constexpr FPostProcessSettings_LPVGeometryVolumeBias_Offset = offsetof(FPostProcessSettings, LPVGeometryVolumeBias);
	static_assert(FPostProcessSettings_LPVGeometryVolumeBias_Offset == 0x4d4, "FPostProcessSettings::LPVGeometryVolumeBias offset is not 4d4");
	auto constexpr FPostProcessSettings_LPVEmissiveInjectionIntensity_Offset = offsetof(FPostProcessSettings, LPVEmissiveInjectionIntensity);
	static_assert(FPostProcessSettings_LPVEmissiveInjectionIntensity_Offset == 0x4d8, "FPostProcessSettings::LPVEmissiveInjectionIntensity offset is not 4d8");
	auto constexpr FPostProcessSettings_LPVDirectionalOcclusionIntensity_Offset = offsetof(FPostProcessSettings, LPVDirectionalOcclusionIntensity);
	static_assert(FPostProcessSettings_LPVDirectionalOcclusionIntensity_Offset == 0x4dc, "FPostProcessSettings::LPVDirectionalOcclusionIntensity offset is not 4dc");
	auto constexpr FPostProcessSettings_LPVDirectionalOcclusionRadius_Offset = offsetof(FPostProcessSettings, LPVDirectionalOcclusionRadius);
	static_assert(FPostProcessSettings_LPVDirectionalOcclusionRadius_Offset == 0x4e0, "FPostProcessSettings::LPVDirectionalOcclusionRadius offset is not 4e0");
	auto constexpr FPostProcessSettings_LPVDiffuseOcclusionExponent_Offset = offsetof(FPostProcessSettings, LPVDiffuseOcclusionExponent);
	static_assert(FPostProcessSettings_LPVDiffuseOcclusionExponent_Offset == 0x4e4, "FPostProcessSettings::LPVDiffuseOcclusionExponent offset is not 4e4");
	auto constexpr FPostProcessSettings_LPVSpecularOcclusionExponent_Offset = offsetof(FPostProcessSettings, LPVSpecularOcclusionExponent);
	static_assert(FPostProcessSettings_LPVSpecularOcclusionExponent_Offset == 0x4e8, "FPostProcessSettings::LPVSpecularOcclusionExponent offset is not 4e8");
	auto constexpr FPostProcessSettings_LPVDiffuseOcclusionIntensity_Offset = offsetof(FPostProcessSettings, LPVDiffuseOcclusionIntensity);
	static_assert(FPostProcessSettings_LPVDiffuseOcclusionIntensity_Offset == 0x4ec, "FPostProcessSettings::LPVDiffuseOcclusionIntensity offset is not 4ec");
	auto constexpr FPostProcessSettings_LPVSpecularOcclusionIntensity_Offset = offsetof(FPostProcessSettings, LPVSpecularOcclusionIntensity);
	static_assert(FPostProcessSettings_LPVSpecularOcclusionIntensity_Offset == 0x4f0, "FPostProcessSettings::LPVSpecularOcclusionIntensity offset is not 4f0");
	auto constexpr FPostProcessSettings_ScreenSpaceReflectionIntensity_Offset = offsetof(FPostProcessSettings, ScreenSpaceReflectionIntensity);
	static_assert(FPostProcessSettings_ScreenSpaceReflectionIntensity_Offset == 0x4f4, "FPostProcessSettings::ScreenSpaceReflectionIntensity offset is not 4f4");
	auto constexpr FPostProcessSettings_ScreenSpaceReflectionQuality_Offset = offsetof(FPostProcessSettings, ScreenSpaceReflectionQuality);
	static_assert(FPostProcessSettings_ScreenSpaceReflectionQuality_Offset == 0x4f8, "FPostProcessSettings::ScreenSpaceReflectionQuality offset is not 4f8");
	auto constexpr FPostProcessSettings_ScreenSpaceReflectionMaxRoughness_Offset = offsetof(FPostProcessSettings, ScreenSpaceReflectionMaxRoughness);
	static_assert(FPostProcessSettings_ScreenSpaceReflectionMaxRoughness_Offset == 0x4fc, "FPostProcessSettings::ScreenSpaceReflectionMaxRoughness offset is not 4fc");
	auto constexpr FPostProcessSettings_LPVFadeRange_Offset = offsetof(FPostProcessSettings, LPVFadeRange);
	static_assert(FPostProcessSettings_LPVFadeRange_Offset == 0x500, "FPostProcessSettings::LPVFadeRange offset is not 500");
	auto constexpr FPostProcessSettings_LPVDirectionalOcclusionFadeRange_Offset = offsetof(FPostProcessSettings, LPVDirectionalOcclusionFadeRange);
	static_assert(FPostProcessSettings_LPVDirectionalOcclusionFadeRange_Offset == 0x504, "FPostProcessSettings::LPVDirectionalOcclusionFadeRange offset is not 504");
	auto constexpr FPostProcessSettings_ScreenPercentage_Offset = offsetof(FPostProcessSettings, ScreenPercentage);
	static_assert(FPostProcessSettings_ScreenPercentage_Offset == 0x508, "FPostProcessSettings::ScreenPercentage offset is not 508");
	auto constexpr FPostProcessSettings_WeightedBlendables_Offset = offsetof(FPostProcessSettings, WeightedBlendables);
	static_assert(FPostProcessSettings_WeightedBlendables_Offset == 0x510, "FPostProcessSettings::WeightedBlendables offset is not 510");
	auto constexpr FPostProcessSettings_Blendables_Offset = offsetof(FPostProcessSettings, Blendables);
	static_assert(FPostProcessSettings_Blendables_Offset == 0x520, "FPostProcessSettings::Blendables offset is not 520");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
