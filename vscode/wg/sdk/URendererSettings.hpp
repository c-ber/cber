#pragma once
#include "UDeveloperSettings.hpp"
#include "EMobileMSAASampleCount.hpp"
#include "ETranslucentSortPolicy.hpp"
#include "FVector.hpp"
#include "ECustomDepthStencil.hpp"
#include "EAutoExposureMethodUI.hpp"
#include "EAntiAliasingMethod.hpp"
#include "EEarlyZPass.hpp"
#include "EClearSceneOptions.hpp"
#include "EGBufferFormat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URendererSettings // Size: 0xC8
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef URendererSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(732); // id32("Class Engine.RendererSettings")
		return ptr;
	}
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	int32_t MaxMobileCascades; /* Ofs: 0x44 Size: 0x4 - IntProperty Engine.RendererSettings.MaxMobileCascades */
	TEnumAsByte<enum EMobileMSAASampleCount> MobileMSAASampleCount; /* Ofs: 0x48 Size: 0x1 - ByteProperty Engine.RendererSettings.MobileMSAASampleCount */
	uint8_t UnknownData49[0x3];
	uint8_t boolField4C;
	uint8_t UnknownData4D[0x3];
	float MinScreenRadiusForLights; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.RendererSettings.MinScreenRadiusForLights */
	float MinScreenRadiusForEarlyZPass; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.RendererSettings.MinScreenRadiusForEarlyZPass */
	float MinScreenRadiusForCSMdepth; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.RendererSettings.MinScreenRadiusForCSMdepth */
	uint8_t boolField5C;
	uint8_t UnknownData5D[0x3];
	int32_t ReflectionCaptureResolution; /* Ofs: 0x60 Size: 0x4 - IntProperty Engine.RendererSettings.ReflectionCaptureResolution */
	uint8_t boolField64;
	uint8_t boolField65;
	uint8_t UnknownData66[0x2];
	float TessellationAdaptivePixelsPerTriangle; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.RendererSettings.TessellationAdaptivePixelsPerTriangle */
	uint8_t boolField6C;
	uint8_t UnknownData6D[0x3];
	TEnumAsByte<enum ETranslucentSortPolicy> TranslucentSortPolicy; /* Ofs: 0x70 Size: 0x1 - ByteProperty Engine.RendererSettings.TranslucentSortPolicy */
	uint8_t UnknownData71[0x3];
	FVector TranslucentSortAxis; /* Ofs: 0x74 Size: 0xC - StructProperty Engine.RendererSettings.TranslucentSortAxis */
	TEnumAsByte<enum ECustomDepthStencil> CustomDepthStencil; /* Ofs: 0x80 Size: 0x1 - ByteProperty Engine.RendererSettings.CustomDepthStencil */
	uint8_t UnknownData81[0x3];
	uint8_t boolField84;
	uint8_t UnknownData85[0x3];
	TEnumAsByte<enum EAutoExposureMethodUI> DefaultFeatureAutoExposure; /* Ofs: 0x88 Size: 0x1 - ByteProperty Engine.RendererSettings.DefaultFeatureAutoExposure */
	uint8_t UnknownData89[0x3];
	uint8_t boolField8C;
	uint8_t UnknownData8D[0x3];
	TEnumAsByte<enum EAntiAliasingMethod> DefaultFeatureAntiAliasing; /* Ofs: 0x90 Size: 0x1 - ByteProperty Engine.RendererSettings.DefaultFeatureAntiAliasing */
	uint8_t UnknownData91[0x3];
	uint8_t boolField94;
	uint8_t UnknownData95[0x3];
	TEnumAsByte<enum EEarlyZPass> EarlyZPass; /* Ofs: 0x98 Size: 0x1 - ByteProperty Engine.RendererSettings.EarlyZPass */
	uint8_t UnknownData99[0x3];
	uint8_t boolField9C;
	uint8_t UnknownData9D[0x3];
	TEnumAsByte<enum EClearSceneOptions> ClearSceneMethod; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Engine.RendererSettings.ClearSceneMethod */
	uint8_t UnknownDataA1[0x3];
	uint8_t boolFieldA4;
	uint8_t UnknownDataA5[0x3];
	TEnumAsByte<enum EGBufferFormat> GBufferFormat; /* Ofs: 0xA8 Size: 0x1 - ByteProperty Engine.RendererSettings.GBufferFormat */
	uint8_t UnknownDataA9[0x3];
	uint8_t boolFieldAC;
	uint8_t UnknownDataAD[0x3];
	float WireframeCullThreshold; /* Ofs: 0xB0 Size: 0x4 - FloatProperty Engine.RendererSettings.WireframeCullThreshold */
	uint8_t boolFieldB4;
	uint8_t UnknownDataB5[0x3];
	uint32_t MobileNumDynamicPointLights; /* Ofs: 0xB8 Size: 0x4 - UInt32Property Engine.RendererSettings.MobileNumDynamicPointLights */
	uint8_t boolFieldBC;
	uint8_t UnknownDataBD[0x3];
	float SkinCacheSceneMemoryLimitInMB; /* Ofs: 0xC0 Size: 0x4 - FloatProperty Engine.RendererSettings.SkinCacheSceneMemoryLimitInMB */
	uint8_t UnknownDataC4[0x4];


	inline bool bMobileHDR()
	{
		return boolField40& 0x1;
	}
	inline bool SetbMobileHDR(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bMobileDisableVertexFog()
	{
		return boolField40& 0x2;
	}
	inline bool SetbMobileDisableVertexFog(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetMaxMobileCascades(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool SetMobileMSAASampleCount(t_structHelper inst, TEnumAsByte<enum EMobileMSAASampleCount> value) { inst.WriteOffset(0x48, value); }
	inline bool bDiscardUnusedQualityLevels()
	{
		return boolField4C& 0x1;
	}
	inline bool SetbDiscardUnusedQualityLevels(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOcclusionCulling()
	{
		return boolField4C& 0x2;
	}
	inline bool SetbOcclusionCulling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetMinScreenRadiusForLights(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetMinScreenRadiusForEarlyZPass(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetMinScreenRadiusForCSMdepth(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool bPrecomputedVisibilityWarning()
	{
		return boolField5C& 0x1;
	}
	inline bool SetbPrecomputedVisibilityWarning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTextureStreaming()
	{
		return boolField5C& 0x2;
	}
	inline bool SetbTextureStreaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseDXT5NormalMaps()
	{
		return boolField5C& 0x4;
	}
	inline bool SetbUseDXT5NormalMaps(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bClearCoatEnableSecondNormal()
	{
		return boolField5C& 0x8;
	}
	inline bool SetbClearCoatEnableSecondNormal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetReflectionCaptureResolution(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool ReflectionEnvironmentLightmapMixBasedOnRoughness()
	{
		return boolField64& 0x1;
	}
	inline bool SetReflectionEnvironmentLightmapMixBasedOnRoughness(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bForwardShading()
	{
		return boolField64& 0x2;
	}
	inline bool SetbForwardShading(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bVertexFoggingForOpaque()
	{
		return boolField64& 0x4;
	}
	inline bool SetbVertexFoggingForOpaque(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAllowStaticLighting()
	{
		return boolField64& 0x8;
	}
	inline bool SetbAllowStaticLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bUseNormalMapsForStaticLighting()
	{
		return boolField64& 0x10;
	}
	inline bool SetbUseNormalMapsForStaticLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bGenerateMeshDistanceFields()
	{
		return boolField64& 0x20;
	}
	inline bool SetbGenerateMeshDistanceFields(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bEightBitMeshDistanceFields()
	{
		return boolField64& 0x40;
	}
	inline bool SetbEightBitMeshDistanceFields(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bGenerateLandscapeGIData()
	{
		return boolField64& 0x80;
	}
	inline bool SetbGenerateLandscapeGIData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bCompressMeshDistanceFields()
	{
		return boolField65& 0x1;
	}
	inline bool SetbCompressMeshDistanceFields(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x65, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTessellationAdaptivePixelsPerTriangle(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool bSeparateTranslucency()
	{
		return boolField6C& 0x1;
	}
	inline bool SetbSeparateTranslucency(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTranslucentSortPolicy(t_structHelper inst, TEnumAsByte<enum ETranslucentSortPolicy> value) { inst.WriteOffset(0x70, value); }
	inline bool SetTranslucentSortAxis(t_structHelper inst, FVector value) { inst.WriteOffset(0x74, value); }
	inline bool SetCustomDepthStencil(t_structHelper inst, TEnumAsByte<enum ECustomDepthStencil> value) { inst.WriteOffset(0x80, value); }
	inline bool bCustomDepthTaaJitter()
	{
		return boolField84& 0x1;
	}
	inline bool SetbCustomDepthTaaJitter(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDefaultFeatureBloom()
	{
		return boolField84& 0x2;
	}
	inline bool SetbDefaultFeatureBloom(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDefaultFeatureAmbientOcclusion()
	{
		return boolField84& 0x4;
	}
	inline bool SetbDefaultFeatureAmbientOcclusion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDefaultFeatureAmbientOcclusionStaticFraction()
	{
		return boolField84& 0x8;
	}
	inline bool SetbDefaultFeatureAmbientOcclusionStaticFraction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bDefaultFeatureAutoExposure()
	{
		return boolField84& 0x10;
	}
	inline bool SetbDefaultFeatureAutoExposure(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetDefaultFeatureAutoExposure(t_structHelper inst, TEnumAsByte<enum EAutoExposureMethodUI> value) { inst.WriteOffset(0x88, value); }
	inline bool bDefaultFeatureMotionBlur()
	{
		return boolField8C& 0x1;
	}
	inline bool SetbDefaultFeatureMotionBlur(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDefaultFeatureLensFlare()
	{
		return boolField8C& 0x2;
	}
	inline bool SetbDefaultFeatureLensFlare(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetDefaultFeatureAntiAliasing(t_structHelper inst, TEnumAsByte<enum EAntiAliasingMethod> value) { inst.WriteOffset(0x90, value); }
	inline bool bStencilForLODDither()
	{
		return boolField94& 0x1;
	}
	inline bool SetbStencilForLODDither(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x94, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEarlyZPass(t_structHelper inst, TEnumAsByte<enum EEarlyZPass> value) { inst.WriteOffset(0x98, value); }
	inline bool bEarlyZPassMovable()
	{
		return boolField9C& 0x1;
	}
	inline bool SetbEarlyZPassMovable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEarlyZPassOnlyMaterialMasking()
	{
		return boolField9C& 0x2;
	}
	inline bool SetbEarlyZPassOnlyMaterialMasking(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bEarlyZPassForceFull()
	{
		return boolField9C& 0x4;
	}
	inline bool SetbEarlyZPassForceFull(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDBuffer()
	{
		return boolField9C& 0x8;
	}
	inline bool SetbDBuffer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9C, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetClearSceneMethod(t_structHelper inst, TEnumAsByte<enum EClearSceneOptions> value) { inst.WriteOffset(0xA0, value); }
	inline bool bBasePassOutputsVelocity()
	{
		return boolFieldA4& 0x1;
	}
	inline bool SetbBasePassOutputsVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSelectiveBasePassOutputs()
	{
		return boolFieldA4& 0x2;
	}
	inline bool SetbSelectiveBasePassOutputs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDefaultParticleCutouts()
	{
		return boolFieldA4& 0x4;
	}
	inline bool SetbDefaultParticleCutouts(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bGlobalClipPlane()
	{
		return boolFieldA4& 0x8;
	}
	inline bool SetbGlobalClipPlane(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetGBufferFormat(t_structHelper inst, TEnumAsByte<enum EGBufferFormat> value) { inst.WriteOffset(0xA8, value); }
	inline bool bUseGPUMorphTargets()
	{
		return boolFieldAC& 0x1;
	}
	inline bool SetbUseGPUMorphTargets(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bNvidiaAftermathEnabled()
	{
		return boolFieldAC& 0x2;
	}
	inline bool SetbNvidiaAftermathEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bInstancedStereo()
	{
		return boolFieldAC& 0x4;
	}
	inline bool SetbInstancedStereo(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bMultiView()
	{
		return boolFieldAC& 0x8;
	}
	inline bool SetbMultiView(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bMobileMultiView()
	{
		return boolFieldAC& 0x10;
	}
	inline bool SetbMobileMultiView(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bMobileMultiViewDirect()
	{
		return boolFieldAC& 0x20;
	}
	inline bool SetbMobileMultiViewDirect(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bMonoscopicFarField()
	{
		return boolFieldAC& 0x40;
	}
	inline bool SetbMonoscopicFarField(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetWireframeCullThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
	inline bool bSupportStationarySkylight()
	{
		return boolFieldB4& 0x1;
	}
	inline bool SetbSupportStationarySkylight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSupportLowQualityLightmaps()
	{
		return boolFieldB4& 0x2;
	}
	inline bool SetbSupportLowQualityLightmaps(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSupportPointLightWholeSceneShadows()
	{
		return boolFieldB4& 0x4;
	}
	inline bool SetbSupportPointLightWholeSceneShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bSupportAtmosphericFog()
	{
		return boolFieldB4& 0x8;
	}
	inline bool SetbSupportAtmosphericFog(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bSupportSkinCacheShaders()
	{
		return boolFieldB4& 0x10;
	}
	inline bool SetbSupportSkinCacheShaders(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bMobileEnableStaticAndCSMShadowReceivers()
	{
		return boolFieldB4& 0x20;
	}
	inline bool SetbMobileEnableStaticAndCSMShadowReceivers(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bMobileAllowDistanceFieldShadows()
	{
		return boolFieldB4& 0x40;
	}
	inline bool SetbMobileAllowDistanceFieldShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bMobileAllowMovableDirectionalLights()
	{
		return boolFieldB4& 0x80;
	}
	inline bool SetbMobileAllowMovableDirectionalLights(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool SetMobileNumDynamicPointLights(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xB8, value); }
	inline bool bMobileDynamicPointLightsUseStaticBranch()
	{
		return boolFieldBC& 0x1;
	}
	inline bool SetbMobileDynamicPointLightsUseStaticBranch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSkinCacheSceneMemoryLimitInMB(t_structHelper inst, float value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURendererSettings = sizeof(URendererSettings); // 200
    static_assert(sizeof(URendererSettings) == 0xC8, "Size of URendererSettings is not correct.");
	auto constexpr URendererSettings_boolField40_Offset = offsetof(URendererSettings, boolField40);
	static_assert(URendererSettings_boolField40_Offset == 0x40, "URendererSettings::boolField40 offset is not 40");
	auto constexpr URendererSettings_MaxMobileCascades_Offset = offsetof(URendererSettings, MaxMobileCascades);
	static_assert(URendererSettings_MaxMobileCascades_Offset == 0x44, "URendererSettings::MaxMobileCascades offset is not 44");
	auto constexpr URendererSettings_MobileMSAASampleCount_Offset = offsetof(URendererSettings, MobileMSAASampleCount);
	static_assert(URendererSettings_MobileMSAASampleCount_Offset == 0x48, "URendererSettings::MobileMSAASampleCount offset is not 48");
	auto constexpr URendererSettings_boolField4C_Offset = offsetof(URendererSettings, boolField4C);
	static_assert(URendererSettings_boolField4C_Offset == 0x4c, "URendererSettings::boolField4C offset is not 4c");
	auto constexpr URendererSettings_MinScreenRadiusForLights_Offset = offsetof(URendererSettings, MinScreenRadiusForLights);
	static_assert(URendererSettings_MinScreenRadiusForLights_Offset == 0x50, "URendererSettings::MinScreenRadiusForLights offset is not 50");
	auto constexpr URendererSettings_MinScreenRadiusForEarlyZPass_Offset = offsetof(URendererSettings, MinScreenRadiusForEarlyZPass);
	static_assert(URendererSettings_MinScreenRadiusForEarlyZPass_Offset == 0x54, "URendererSettings::MinScreenRadiusForEarlyZPass offset is not 54");
	auto constexpr URendererSettings_MinScreenRadiusForCSMdepth_Offset = offsetof(URendererSettings, MinScreenRadiusForCSMdepth);
	static_assert(URendererSettings_MinScreenRadiusForCSMdepth_Offset == 0x58, "URendererSettings::MinScreenRadiusForCSMdepth offset is not 58");
	auto constexpr URendererSettings_boolField5C_Offset = offsetof(URendererSettings, boolField5C);
	static_assert(URendererSettings_boolField5C_Offset == 0x5c, "URendererSettings::boolField5C offset is not 5c");
	auto constexpr URendererSettings_ReflectionCaptureResolution_Offset = offsetof(URendererSettings, ReflectionCaptureResolution);
	static_assert(URendererSettings_ReflectionCaptureResolution_Offset == 0x60, "URendererSettings::ReflectionCaptureResolution offset is not 60");
	auto constexpr URendererSettings_boolField64_Offset = offsetof(URendererSettings, boolField64);
	static_assert(URendererSettings_boolField64_Offset == 0x64, "URendererSettings::boolField64 offset is not 64");
	auto constexpr URendererSettings_boolField65_Offset = offsetof(URendererSettings, boolField65);
	static_assert(URendererSettings_boolField65_Offset == 0x65, "URendererSettings::boolField65 offset is not 65");
	auto constexpr URendererSettings_TessellationAdaptivePixelsPerTriangle_Offset = offsetof(URendererSettings, TessellationAdaptivePixelsPerTriangle);
	static_assert(URendererSettings_TessellationAdaptivePixelsPerTriangle_Offset == 0x68, "URendererSettings::TessellationAdaptivePixelsPerTriangle offset is not 68");
	auto constexpr URendererSettings_boolField6C_Offset = offsetof(URendererSettings, boolField6C);
	static_assert(URendererSettings_boolField6C_Offset == 0x6c, "URendererSettings::boolField6C offset is not 6c");
	auto constexpr URendererSettings_TranslucentSortPolicy_Offset = offsetof(URendererSettings, TranslucentSortPolicy);
	static_assert(URendererSettings_TranslucentSortPolicy_Offset == 0x70, "URendererSettings::TranslucentSortPolicy offset is not 70");
	auto constexpr URendererSettings_TranslucentSortAxis_Offset = offsetof(URendererSettings, TranslucentSortAxis);
	static_assert(URendererSettings_TranslucentSortAxis_Offset == 0x74, "URendererSettings::TranslucentSortAxis offset is not 74");
	auto constexpr URendererSettings_CustomDepthStencil_Offset = offsetof(URendererSettings, CustomDepthStencil);
	static_assert(URendererSettings_CustomDepthStencil_Offset == 0x80, "URendererSettings::CustomDepthStencil offset is not 80");
	auto constexpr URendererSettings_boolField84_Offset = offsetof(URendererSettings, boolField84);
	static_assert(URendererSettings_boolField84_Offset == 0x84, "URendererSettings::boolField84 offset is not 84");
	auto constexpr URendererSettings_DefaultFeatureAutoExposure_Offset = offsetof(URendererSettings, DefaultFeatureAutoExposure);
	static_assert(URendererSettings_DefaultFeatureAutoExposure_Offset == 0x88, "URendererSettings::DefaultFeatureAutoExposure offset is not 88");
	auto constexpr URendererSettings_boolField8C_Offset = offsetof(URendererSettings, boolField8C);
	static_assert(URendererSettings_boolField8C_Offset == 0x8c, "URendererSettings::boolField8C offset is not 8c");
	auto constexpr URendererSettings_DefaultFeatureAntiAliasing_Offset = offsetof(URendererSettings, DefaultFeatureAntiAliasing);
	static_assert(URendererSettings_DefaultFeatureAntiAliasing_Offset == 0x90, "URendererSettings::DefaultFeatureAntiAliasing offset is not 90");
	auto constexpr URendererSettings_boolField94_Offset = offsetof(URendererSettings, boolField94);
	static_assert(URendererSettings_boolField94_Offset == 0x94, "URendererSettings::boolField94 offset is not 94");
	auto constexpr URendererSettings_EarlyZPass_Offset = offsetof(URendererSettings, EarlyZPass);
	static_assert(URendererSettings_EarlyZPass_Offset == 0x98, "URendererSettings::EarlyZPass offset is not 98");
	auto constexpr URendererSettings_boolField9C_Offset = offsetof(URendererSettings, boolField9C);
	static_assert(URendererSettings_boolField9C_Offset == 0x9c, "URendererSettings::boolField9C offset is not 9c");
	auto constexpr URendererSettings_ClearSceneMethod_Offset = offsetof(URendererSettings, ClearSceneMethod);
	static_assert(URendererSettings_ClearSceneMethod_Offset == 0xa0, "URendererSettings::ClearSceneMethod offset is not a0");
	auto constexpr URendererSettings_boolFieldA4_Offset = offsetof(URendererSettings, boolFieldA4);
	static_assert(URendererSettings_boolFieldA4_Offset == 0xa4, "URendererSettings::boolFieldA4 offset is not a4");
	auto constexpr URendererSettings_GBufferFormat_Offset = offsetof(URendererSettings, GBufferFormat);
	static_assert(URendererSettings_GBufferFormat_Offset == 0xa8, "URendererSettings::GBufferFormat offset is not a8");
	auto constexpr URendererSettings_boolFieldAC_Offset = offsetof(URendererSettings, boolFieldAC);
	static_assert(URendererSettings_boolFieldAC_Offset == 0xac, "URendererSettings::boolFieldAC offset is not ac");
	auto constexpr URendererSettings_WireframeCullThreshold_Offset = offsetof(URendererSettings, WireframeCullThreshold);
	static_assert(URendererSettings_WireframeCullThreshold_Offset == 0xb0, "URendererSettings::WireframeCullThreshold offset is not b0");
	auto constexpr URendererSettings_boolFieldB4_Offset = offsetof(URendererSettings, boolFieldB4);
	static_assert(URendererSettings_boolFieldB4_Offset == 0xb4, "URendererSettings::boolFieldB4 offset is not b4");
	auto constexpr URendererSettings_MobileNumDynamicPointLights_Offset = offsetof(URendererSettings, MobileNumDynamicPointLights);
	static_assert(URendererSettings_MobileNumDynamicPointLights_Offset == 0xb8, "URendererSettings::MobileNumDynamicPointLights offset is not b8");
	auto constexpr URendererSettings_boolFieldBC_Offset = offsetof(URendererSettings, boolFieldBC);
	static_assert(URendererSettings_boolFieldBC_Offset == 0xbc, "URendererSettings::boolFieldBC offset is not bc");
	auto constexpr URendererSettings_SkinCacheSceneMemoryLimitInMB_Offset = offsetof(URendererSettings, SkinCacheSceneMemoryLimitInMB);
	static_assert(URendererSettings_SkinCacheSceneMemoryLimitInMB_Offset == 0xc0, "URendererSettings::SkinCacheSceneMemoryLimitInMB offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
