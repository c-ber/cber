#pragma once
#include "UOceanManager.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "OceanShaderEnum.hpp"
#include "EFollowMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Ocean_C // Size: 0x698
	: public UOceanManager // Size: 0x490
{
private:
	typedef UBP_Ocean_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(147057); // id32("BlueprintGeneratedClass BP_Ocean.BP_Ocean_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x490 Size: 0x8 - StructProperty BP_Ocean.BP_Ocean_C.UberGraphFrame */
	ExternalPtr<struct UBoxComponent> Box; /* Ofs: 0x498 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.Box */
	ExternalPtr<struct UStaticMeshComponent> DepthPlaneUnderside; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.DepthPlaneUnderside */
	ExternalPtr<struct UInfiniteSystemComponent> InfiniteSystem; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.InfiniteSystem */
	ExternalPtr<struct UStaticMeshComponent> DepthPlaneTopside; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.DepthPlaneTopside */
	ExternalPtr<struct UOceanMeshComponent> OceanPlane; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.OceanPlane */
	ExternalPtr<struct UBillboardComponent> Icon; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.Icon */
	FLinearColor BaseColorDark; /* Ofs: 0x4C8 Size: 0x10 - StructProperty BP_Ocean.BP_Ocean_C.BaseColorDark */
	FLinearColor BaseColorLight; /* Ofs: 0x4D8 Size: 0x10 - StructProperty BP_Ocean.BP_Ocean_C.BaseColorLight */
	FLinearColor ShallowWaterColor; /* Ofs: 0x4E8 Size: 0x10 - StructProperty BP_Ocean.BP_Ocean_C.ShallowWaterColor */
	float BaseColorLerp; /* Ofs: 0x4F8 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.BaseColorLerp */
	float FresnelPower; /* Ofs: 0x4FC Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FresnelPower */
	float Base_Fresnel_Reflect; /* Ofs: 0x500 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.Base_Fresnel_Reflect */
	float Metallic; /* Ofs: 0x504 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.Metallic */
	float Roughness; /* Ofs: 0x508 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.Roughness */
	float Specular; /* Ofs: 0x50C Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.Specular */
	float TesselationMultiplier; /* Ofs: 0x510 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.TesselationMultiplier */
	float Opacity; /* Ofs: 0x514 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.Opacity */
	float BaseDepthFade; /* Ofs: 0x518 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.BaseDepthFade */
	float DistortionStrength; /* Ofs: 0x51C Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.DistortionStrength */
	float SceneColorCustomDepth; /* Ofs: 0x520 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SceneColorCustomDepth */
	float FoamScale; /* Ofs: 0x524 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FoamScale */
	float FoamDepth1; /* Ofs: 0x528 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FoamDepth1 */
	float FoamDepth2; /* Ofs: 0x52C Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FoamDepth2 */
	float FoamTimeScale; /* Ofs: 0x530 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FoamTimeScale */
	FLinearColor SSS_Color; /* Ofs: 0x534 Size: 0x10 - StructProperty BP_Ocean.BP_Ocean_C.SSS_Color */
	float SSS_Scale; /* Ofs: 0x544 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SSS_Scale */
	float SSS_Intensity; /* Ofs: 0x548 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SSS_Intensity */
	float SSS_LightDepth; /* Ofs: 0x54C Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SSS_LightDepth */
	float DetailNormalScale; /* Ofs: 0x550 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.DetailNormalScale */
	float DetailNormalSpeed; /* Ofs: 0x554 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.DetailNormalSpeed */
	float DetailNormalStrength; /* Ofs: 0x558 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.DetailNormalStrength */
	float MediumNormalScale; /* Ofs: 0x55C Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.MediumNormalScale */
	float MediumNormalSpeed; /* Ofs: 0x560 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.MediumNormalSpeed */
	float MediumNormalStrength; /* Ofs: 0x564 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.MediumNormalStrength */
	float FarNormalScale; /* Ofs: 0x568 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FarNormalScale */
	float FarNormalSpeed; /* Ofs: 0x56C Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FarNormalSpeed */
	float FarNormalStrength; /* Ofs: 0x570 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FarNormalStrength */
	float FarNormalBlendDistance; /* Ofs: 0x574 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FarNormalBlendDistance */
	float FarNormalBlendFalloff; /* Ofs: 0x578 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FarNormalBlendFalloff */
	float PanWaveLerp; /* Ofs: 0x57C Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.PanWaveLerp */
	float PanWaveIntensity; /* Ofs: 0x580 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.PanWaveIntensity */
	float PanWaveTimeScale; /* Ofs: 0x584 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.PanWaveTimeScale */
	float PanWaveSize; /* Ofs: 0x588 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.PanWaveSize */
	FVector Panner01Speed; /* Ofs: 0x58C Size: 0xC - StructProperty BP_Ocean.BP_Ocean_C.Panner01Speed */
	FVector Panner02Speed; /* Ofs: 0x598 Size: 0xC - StructProperty BP_Ocean.BP_Ocean_C.Panner02Speed */
	FVector Panner03Speed; /* Ofs: 0x5A4 Size: 0xC - StructProperty BP_Ocean.BP_Ocean_C.Panner03Speed */
	float MacroWaveScale; /* Ofs: 0x5B0 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.MacroWaveScale */
	float MacroWaveSpeed; /* Ofs: 0x5B4 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.MacroWaveSpeed */
	float MacroWaveAmplify; /* Ofs: 0x5B8 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.MacroWaveAmplify */
	float SSS_MacroNormalStrength; /* Ofs: 0x5BC Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SSS_MacroNormalStrength */
	float FoamSoftness1; /* Ofs: 0x5C0 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FoamSoftness1 */
	float SceneDepthSoftness; /* Ofs: 0x5C4 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SceneDepthSoftness */
	float BaseDepthFadeSoftness; /* Ofs: 0x5C8 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.BaseDepthFadeSoftness */
	float FoamCapsOpacity; /* Ofs: 0x5CC Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FoamCapsOpacity */
	float FoamCapsHeight; /* Ofs: 0x5D0 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FoamCapsHeight */
	float FoamCapsPower; /* Ofs: 0x5D4 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.FoamCapsPower */
	float SeafoamScale; /* Ofs: 0x5D8 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SeafoamScale */
	float SeafoamSpeed; /* Ofs: 0x5DC Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SeafoamSpeed */
	float SeafoamDistortion; /* Ofs: 0x5E0 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SeafoamDistortion */
	float SeafoamHeightPower; /* Ofs: 0x5E4 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SeafoamHeightPower */
	float SeafoamHeightMultiply; /* Ofs: 0x5E8 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.SeafoamHeightMultiply */
	float HeightmapScale; /* Ofs: 0x5EC Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.HeightmapScale */
	float HeightmapSpeed; /* Ofs: 0x5F0 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.HeightmapSpeed */
	float HeightmapDisplacement; /* Ofs: 0x5F4 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.HeightmapDisplacement */
	float CubemapRelectionStrength; /* Ofs: 0x5F8 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.CubemapRelectionStrength */
	uint8_t UnknownData5FC[0x4];
	ExternalPtr<struct UTexture> SmallWaveNormal; /* Ofs: 0x600 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.SmallWaveNormal */
	ExternalPtr<struct UTexture> MediumWaveNormal; /* Ofs: 0x608 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.MediumWaveNormal */
	TEnumAsByte<enum OceanShaderEnum> OceanShader; /* Ofs: 0x610 Size: 0x1 - ByteProperty BP_Ocean.BP_Ocean_C.OceanShader */
	uint8_t UnknownData611[0x7];
	ExternalPtr<struct UTexture> FarWaveNormal; /* Ofs: 0x618 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.FarWaveNormal */
	ExternalPtr<struct UTexture> ShoreFoam; /* Ofs: 0x620 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.ShoreFoam */
	ExternalPtr<struct UTexture> ShoreFoam2; /* Ofs: 0x628 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.ShoreFoam2 */
	ExternalPtr<struct UTexture> ShoreFoamRoughness; /* Ofs: 0x630 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.ShoreFoamRoughness */
	ExternalPtr<struct UTexture> Heightmap; /* Ofs: 0x638 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.Heightmap */
	ExternalPtr<struct UTexture> Seafoam; /* Ofs: 0x640 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.Seafoam */
	ExternalPtr<struct UTexture> ReflectionCubemap; /* Ofs: 0x648 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.ReflectionCubemap */
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Ocean; /* Ofs: 0x650 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.MID_Ocean */
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Ocean_Depth; /* Ofs: 0x658 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.MID_Ocean_Depth */
	uint8_t boolField660;
	TEnumAsByte<enum EFollowMethod> FollowMethod; /* Ofs: 0x661 Size: 0x1 - ByteProperty BP_Ocean.BP_Ocean_C.FollowMethod */
	uint8_t UnknownData662[0x2];
	float GridSnapSize; /* Ofs: 0x664 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.GridSnapSize */
	float MaxLookAtDistance; /* Ofs: 0x668 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.MaxLookAtDistance */
	uint8_t boolField66C;
	uint8_t UnknownData66D[0x3];
	float ScaleDistanceFactor; /* Ofs: 0x670 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.ScaleDistanceFactor */
	float ScaleStartDistance; /* Ofs: 0x674 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.ScaleStartDistance */
	float ScaleMin; /* Ofs: 0x678 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.ScaleMin */
	float ScaleMax; /* Ofs: 0x67C Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.ScaleMax */
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Ocean_LOD; /* Ofs: 0x680 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.MID_Ocean_LOD */
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Ocean_Simple; /* Ofs: 0x688 Size: 0x8 - ObjectProperty BP_Ocean.BP_Ocean_C.MID_Ocean_Simple */
	float LODTransitionStart; /* Ofs: 0x690 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.LODTransitionStart */
	float LODTransitionEnd; /* Ofs: 0x694 Size: 0x4 - FloatProperty BP_Ocean.BP_Ocean_C.LODTransitionEnd */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x490, value); }
	inline bool SetBox(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x498, value); }
	inline bool SetDepthPlaneUnderside(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetInfiniteSystem(t_structHelper inst, ExternalPtr<struct UInfiniteSystemComponent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetDepthPlaneTopside(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetOceanPlane(t_structHelper inst, ExternalPtr<struct UOceanMeshComponent> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetIcon(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetBaseColorDark(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetBaseColorLight(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetShallowWaterColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetBaseColorLerp(t_structHelper inst, float value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetFresnelPower(t_structHelper inst, float value) { inst.WriteOffset(0x4FC, value); }
	inline bool SetBase_Fresnel_Reflect(t_structHelper inst, float value) { inst.WriteOffset(0x500, value); }
	inline bool SetMetallic(t_structHelper inst, float value) { inst.WriteOffset(0x504, value); }
	inline bool SetRoughness(t_structHelper inst, float value) { inst.WriteOffset(0x508, value); }
	inline bool SetSpecular(t_structHelper inst, float value) { inst.WriteOffset(0x50C, value); }
	inline bool SetTesselationMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool SetOpacity(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetBaseDepthFade(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetDistortionStrength(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool SetSceneColorCustomDepth(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetFoamScale(t_structHelper inst, float value) { inst.WriteOffset(0x524, value); }
	inline bool SetFoamDepth1(t_structHelper inst, float value) { inst.WriteOffset(0x528, value); }
	inline bool SetFoamDepth2(t_structHelper inst, float value) { inst.WriteOffset(0x52C, value); }
	inline bool SetFoamTimeScale(t_structHelper inst, float value) { inst.WriteOffset(0x530, value); }
	inline bool SetSSS_Color(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x534, value); }
	inline bool SetSSS_Scale(t_structHelper inst, float value) { inst.WriteOffset(0x544, value); }
	inline bool SetSSS_Intensity(t_structHelper inst, float value) { inst.WriteOffset(0x548, value); }
	inline bool SetSSS_LightDepth(t_structHelper inst, float value) { inst.WriteOffset(0x54C, value); }
	inline bool SetDetailNormalScale(t_structHelper inst, float value) { inst.WriteOffset(0x550, value); }
	inline bool SetDetailNormalSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x554, value); }
	inline bool SetDetailNormalStrength(t_structHelper inst, float value) { inst.WriteOffset(0x558, value); }
	inline bool SetMediumNormalScale(t_structHelper inst, float value) { inst.WriteOffset(0x55C, value); }
	inline bool SetMediumNormalSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x560, value); }
	inline bool SetMediumNormalStrength(t_structHelper inst, float value) { inst.WriteOffset(0x564, value); }
	inline bool SetFarNormalScale(t_structHelper inst, float value) { inst.WriteOffset(0x568, value); }
	inline bool SetFarNormalSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x56C, value); }
	inline bool SetFarNormalStrength(t_structHelper inst, float value) { inst.WriteOffset(0x570, value); }
	inline bool SetFarNormalBlendDistance(t_structHelper inst, float value) { inst.WriteOffset(0x574, value); }
	inline bool SetFarNormalBlendFalloff(t_structHelper inst, float value) { inst.WriteOffset(0x578, value); }
	inline bool SetPanWaveLerp(t_structHelper inst, float value) { inst.WriteOffset(0x57C, value); }
	inline bool SetPanWaveIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x580, value); }
	inline bool SetPanWaveTimeScale(t_structHelper inst, float value) { inst.WriteOffset(0x584, value); }
	inline bool SetPanWaveSize(t_structHelper inst, float value) { inst.WriteOffset(0x588, value); }
	inline bool SetPanner01Speed(t_structHelper inst, FVector value) { inst.WriteOffset(0x58C, value); }
	inline bool SetPanner02Speed(t_structHelper inst, FVector value) { inst.WriteOffset(0x598, value); }
	inline bool SetPanner03Speed(t_structHelper inst, FVector value) { inst.WriteOffset(0x5A4, value); }
	inline bool SetMacroWaveScale(t_structHelper inst, float value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetMacroWaveSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5B4, value); }
	inline bool SetMacroWaveAmplify(t_structHelper inst, float value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetSSS_MacroNormalStrength(t_structHelper inst, float value) { inst.WriteOffset(0x5BC, value); }
	inline bool SetFoamSoftness1(t_structHelper inst, float value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetSceneDepthSoftness(t_structHelper inst, float value) { inst.WriteOffset(0x5C4, value); }
	inline bool SetBaseDepthFadeSoftness(t_structHelper inst, float value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetFoamCapsOpacity(t_structHelper inst, float value) { inst.WriteOffset(0x5CC, value); }
	inline bool SetFoamCapsHeight(t_structHelper inst, float value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetFoamCapsPower(t_structHelper inst, float value) { inst.WriteOffset(0x5D4, value); }
	inline bool SetSeafoamScale(t_structHelper inst, float value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetSeafoamSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5DC, value); }
	inline bool SetSeafoamDistortion(t_structHelper inst, float value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetSeafoamHeightPower(t_structHelper inst, float value) { inst.WriteOffset(0x5E4, value); }
	inline bool SetSeafoamHeightMultiply(t_structHelper inst, float value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetHeightmapScale(t_structHelper inst, float value) { inst.WriteOffset(0x5EC, value); }
	inline bool SetHeightmapSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetHeightmapDisplacement(t_structHelper inst, float value) { inst.WriteOffset(0x5F4, value); }
	inline bool SetCubemapRelectionStrength(t_structHelper inst, float value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetSmallWaveNormal(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x600, value); }
	inline bool SetMediumWaveNormal(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x608, value); }
	inline bool SetOceanShader(t_structHelper inst, TEnumAsByte<enum OceanShaderEnum> value) { inst.WriteOffset(0x610, value); }
	inline bool SetFarWaveNormal(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x618, value); }
	inline bool SetShoreFoam(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x620, value); }
	inline bool SetShoreFoam2(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x628, value); }
	inline bool SetShoreFoamRoughness(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x630, value); }
	inline bool SetHeightmap(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x638, value); }
	inline bool SetSeafoam(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x640, value); }
	inline bool SetReflectionCubemap(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x648, value); }
	inline bool SetMID_Ocean(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x650, value); }
	inline bool SetMID_Ocean_Depth(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x658, value); }
	inline bool UpdateInEditor()
	{
		return boolField660& 0x1;
	}
	inline bool SetUpdateInEditor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x660, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFollowMethod(t_structHelper inst, TEnumAsByte<enum EFollowMethod> value) { inst.WriteOffset(0x661, value); }
	inline bool SetGridSnapSize(t_structHelper inst, float value) { inst.WriteOffset(0x664, value); }
	inline bool SetMaxLookAtDistance(t_structHelper inst, float value) { inst.WriteOffset(0x668, value); }
	inline bool ScaleByDistance()
	{
		return boolField66C& 0x1;
	}
	inline bool SetScaleByDistance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x66C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetScaleDistanceFactor(t_structHelper inst, float value) { inst.WriteOffset(0x670, value); }
	inline bool SetScaleStartDistance(t_structHelper inst, float value) { inst.WriteOffset(0x674, value); }
	inline bool SetScaleMin(t_structHelper inst, float value) { inst.WriteOffset(0x678, value); }
	inline bool SetScaleMax(t_structHelper inst, float value) { inst.WriteOffset(0x67C, value); }
	inline bool SetMID_Ocean_LOD(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x680, value); }
	inline bool SetMID_Ocean_Simple(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x688, value); }
	inline bool SetLODTransitionStart(t_structHelper inst, float value) { inst.WriteOffset(0x690, value); }
	inline bool SetLODTransitionEnd(t_structHelper inst, float value) { inst.WriteOffset(0x694, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Ocean_C = sizeof(UBP_Ocean_C); // 1688
    static_assert(sizeof(UBP_Ocean_C) == 0x698, "Size of UBP_Ocean_C is not correct.");
	auto constexpr UBP_Ocean_C_UberGraphFrame_Offset = offsetof(UBP_Ocean_C, UberGraphFrame);
	static_assert(UBP_Ocean_C_UberGraphFrame_Offset == 0x490, "UBP_Ocean_C::UberGraphFrame offset is not 490");
	auto constexpr UBP_Ocean_C_Box_Offset = offsetof(UBP_Ocean_C, Box);
	static_assert(UBP_Ocean_C_Box_Offset == 0x498, "UBP_Ocean_C::Box offset is not 498");
	auto constexpr UBP_Ocean_C_DepthPlaneUnderside_Offset = offsetof(UBP_Ocean_C, DepthPlaneUnderside);
	static_assert(UBP_Ocean_C_DepthPlaneUnderside_Offset == 0x4a0, "UBP_Ocean_C::DepthPlaneUnderside offset is not 4a0");
	auto constexpr UBP_Ocean_C_InfiniteSystem_Offset = offsetof(UBP_Ocean_C, InfiniteSystem);
	static_assert(UBP_Ocean_C_InfiniteSystem_Offset == 0x4a8, "UBP_Ocean_C::InfiniteSystem offset is not 4a8");
	auto constexpr UBP_Ocean_C_DepthPlaneTopside_Offset = offsetof(UBP_Ocean_C, DepthPlaneTopside);
	static_assert(UBP_Ocean_C_DepthPlaneTopside_Offset == 0x4b0, "UBP_Ocean_C::DepthPlaneTopside offset is not 4b0");
	auto constexpr UBP_Ocean_C_OceanPlane_Offset = offsetof(UBP_Ocean_C, OceanPlane);
	static_assert(UBP_Ocean_C_OceanPlane_Offset == 0x4b8, "UBP_Ocean_C::OceanPlane offset is not 4b8");
	auto constexpr UBP_Ocean_C_Icon_Offset = offsetof(UBP_Ocean_C, Icon);
	static_assert(UBP_Ocean_C_Icon_Offset == 0x4c0, "UBP_Ocean_C::Icon offset is not 4c0");
	auto constexpr UBP_Ocean_C_BaseColorDark_Offset = offsetof(UBP_Ocean_C, BaseColorDark);
	static_assert(UBP_Ocean_C_BaseColorDark_Offset == 0x4c8, "UBP_Ocean_C::BaseColorDark offset is not 4c8");
	auto constexpr UBP_Ocean_C_BaseColorLight_Offset = offsetof(UBP_Ocean_C, BaseColorLight);
	static_assert(UBP_Ocean_C_BaseColorLight_Offset == 0x4d8, "UBP_Ocean_C::BaseColorLight offset is not 4d8");
	auto constexpr UBP_Ocean_C_ShallowWaterColor_Offset = offsetof(UBP_Ocean_C, ShallowWaterColor);
	static_assert(UBP_Ocean_C_ShallowWaterColor_Offset == 0x4e8, "UBP_Ocean_C::ShallowWaterColor offset is not 4e8");
	auto constexpr UBP_Ocean_C_BaseColorLerp_Offset = offsetof(UBP_Ocean_C, BaseColorLerp);
	static_assert(UBP_Ocean_C_BaseColorLerp_Offset == 0x4f8, "UBP_Ocean_C::BaseColorLerp offset is not 4f8");
	auto constexpr UBP_Ocean_C_FresnelPower_Offset = offsetof(UBP_Ocean_C, FresnelPower);
	static_assert(UBP_Ocean_C_FresnelPower_Offset == 0x4fc, "UBP_Ocean_C::FresnelPower offset is not 4fc");
	auto constexpr UBP_Ocean_C_Base_Fresnel_Reflect_Offset = offsetof(UBP_Ocean_C, Base_Fresnel_Reflect);
	static_assert(UBP_Ocean_C_Base_Fresnel_Reflect_Offset == 0x500, "UBP_Ocean_C::Base_Fresnel_Reflect offset is not 500");
	auto constexpr UBP_Ocean_C_Metallic_Offset = offsetof(UBP_Ocean_C, Metallic);
	static_assert(UBP_Ocean_C_Metallic_Offset == 0x504, "UBP_Ocean_C::Metallic offset is not 504");
	auto constexpr UBP_Ocean_C_Roughness_Offset = offsetof(UBP_Ocean_C, Roughness);
	static_assert(UBP_Ocean_C_Roughness_Offset == 0x508, "UBP_Ocean_C::Roughness offset is not 508");
	auto constexpr UBP_Ocean_C_Specular_Offset = offsetof(UBP_Ocean_C, Specular);
	static_assert(UBP_Ocean_C_Specular_Offset == 0x50c, "UBP_Ocean_C::Specular offset is not 50c");
	auto constexpr UBP_Ocean_C_TesselationMultiplier_Offset = offsetof(UBP_Ocean_C, TesselationMultiplier);
	static_assert(UBP_Ocean_C_TesselationMultiplier_Offset == 0x510, "UBP_Ocean_C::TesselationMultiplier offset is not 510");
	auto constexpr UBP_Ocean_C_Opacity_Offset = offsetof(UBP_Ocean_C, Opacity);
	static_assert(UBP_Ocean_C_Opacity_Offset == 0x514, "UBP_Ocean_C::Opacity offset is not 514");
	auto constexpr UBP_Ocean_C_BaseDepthFade_Offset = offsetof(UBP_Ocean_C, BaseDepthFade);
	static_assert(UBP_Ocean_C_BaseDepthFade_Offset == 0x518, "UBP_Ocean_C::BaseDepthFade offset is not 518");
	auto constexpr UBP_Ocean_C_DistortionStrength_Offset = offsetof(UBP_Ocean_C, DistortionStrength);
	static_assert(UBP_Ocean_C_DistortionStrength_Offset == 0x51c, "UBP_Ocean_C::DistortionStrength offset is not 51c");
	auto constexpr UBP_Ocean_C_SceneColorCustomDepth_Offset = offsetof(UBP_Ocean_C, SceneColorCustomDepth);
	static_assert(UBP_Ocean_C_SceneColorCustomDepth_Offset == 0x520, "UBP_Ocean_C::SceneColorCustomDepth offset is not 520");
	auto constexpr UBP_Ocean_C_FoamScale_Offset = offsetof(UBP_Ocean_C, FoamScale);
	static_assert(UBP_Ocean_C_FoamScale_Offset == 0x524, "UBP_Ocean_C::FoamScale offset is not 524");
	auto constexpr UBP_Ocean_C_FoamDepth1_Offset = offsetof(UBP_Ocean_C, FoamDepth1);
	static_assert(UBP_Ocean_C_FoamDepth1_Offset == 0x528, "UBP_Ocean_C::FoamDepth1 offset is not 528");
	auto constexpr UBP_Ocean_C_FoamDepth2_Offset = offsetof(UBP_Ocean_C, FoamDepth2);
	static_assert(UBP_Ocean_C_FoamDepth2_Offset == 0x52c, "UBP_Ocean_C::FoamDepth2 offset is not 52c");
	auto constexpr UBP_Ocean_C_FoamTimeScale_Offset = offsetof(UBP_Ocean_C, FoamTimeScale);
	static_assert(UBP_Ocean_C_FoamTimeScale_Offset == 0x530, "UBP_Ocean_C::FoamTimeScale offset is not 530");
	auto constexpr UBP_Ocean_C_SSS_Color_Offset = offsetof(UBP_Ocean_C, SSS_Color);
	static_assert(UBP_Ocean_C_SSS_Color_Offset == 0x534, "UBP_Ocean_C::SSS_Color offset is not 534");
	auto constexpr UBP_Ocean_C_SSS_Scale_Offset = offsetof(UBP_Ocean_C, SSS_Scale);
	static_assert(UBP_Ocean_C_SSS_Scale_Offset == 0x544, "UBP_Ocean_C::SSS_Scale offset is not 544");
	auto constexpr UBP_Ocean_C_SSS_Intensity_Offset = offsetof(UBP_Ocean_C, SSS_Intensity);
	static_assert(UBP_Ocean_C_SSS_Intensity_Offset == 0x548, "UBP_Ocean_C::SSS_Intensity offset is not 548");
	auto constexpr UBP_Ocean_C_SSS_LightDepth_Offset = offsetof(UBP_Ocean_C, SSS_LightDepth);
	static_assert(UBP_Ocean_C_SSS_LightDepth_Offset == 0x54c, "UBP_Ocean_C::SSS_LightDepth offset is not 54c");
	auto constexpr UBP_Ocean_C_DetailNormalScale_Offset = offsetof(UBP_Ocean_C, DetailNormalScale);
	static_assert(UBP_Ocean_C_DetailNormalScale_Offset == 0x550, "UBP_Ocean_C::DetailNormalScale offset is not 550");
	auto constexpr UBP_Ocean_C_DetailNormalSpeed_Offset = offsetof(UBP_Ocean_C, DetailNormalSpeed);
	static_assert(UBP_Ocean_C_DetailNormalSpeed_Offset == 0x554, "UBP_Ocean_C::DetailNormalSpeed offset is not 554");
	auto constexpr UBP_Ocean_C_DetailNormalStrength_Offset = offsetof(UBP_Ocean_C, DetailNormalStrength);
	static_assert(UBP_Ocean_C_DetailNormalStrength_Offset == 0x558, "UBP_Ocean_C::DetailNormalStrength offset is not 558");
	auto constexpr UBP_Ocean_C_MediumNormalScale_Offset = offsetof(UBP_Ocean_C, MediumNormalScale);
	static_assert(UBP_Ocean_C_MediumNormalScale_Offset == 0x55c, "UBP_Ocean_C::MediumNormalScale offset is not 55c");
	auto constexpr UBP_Ocean_C_MediumNormalSpeed_Offset = offsetof(UBP_Ocean_C, MediumNormalSpeed);
	static_assert(UBP_Ocean_C_MediumNormalSpeed_Offset == 0x560, "UBP_Ocean_C::MediumNormalSpeed offset is not 560");
	auto constexpr UBP_Ocean_C_MediumNormalStrength_Offset = offsetof(UBP_Ocean_C, MediumNormalStrength);
	static_assert(UBP_Ocean_C_MediumNormalStrength_Offset == 0x564, "UBP_Ocean_C::MediumNormalStrength offset is not 564");
	auto constexpr UBP_Ocean_C_FarNormalScale_Offset = offsetof(UBP_Ocean_C, FarNormalScale);
	static_assert(UBP_Ocean_C_FarNormalScale_Offset == 0x568, "UBP_Ocean_C::FarNormalScale offset is not 568");
	auto constexpr UBP_Ocean_C_FarNormalSpeed_Offset = offsetof(UBP_Ocean_C, FarNormalSpeed);
	static_assert(UBP_Ocean_C_FarNormalSpeed_Offset == 0x56c, "UBP_Ocean_C::FarNormalSpeed offset is not 56c");
	auto constexpr UBP_Ocean_C_FarNormalStrength_Offset = offsetof(UBP_Ocean_C, FarNormalStrength);
	static_assert(UBP_Ocean_C_FarNormalStrength_Offset == 0x570, "UBP_Ocean_C::FarNormalStrength offset is not 570");
	auto constexpr UBP_Ocean_C_FarNormalBlendDistance_Offset = offsetof(UBP_Ocean_C, FarNormalBlendDistance);
	static_assert(UBP_Ocean_C_FarNormalBlendDistance_Offset == 0x574, "UBP_Ocean_C::FarNormalBlendDistance offset is not 574");
	auto constexpr UBP_Ocean_C_FarNormalBlendFalloff_Offset = offsetof(UBP_Ocean_C, FarNormalBlendFalloff);
	static_assert(UBP_Ocean_C_FarNormalBlendFalloff_Offset == 0x578, "UBP_Ocean_C::FarNormalBlendFalloff offset is not 578");
	auto constexpr UBP_Ocean_C_PanWaveLerp_Offset = offsetof(UBP_Ocean_C, PanWaveLerp);
	static_assert(UBP_Ocean_C_PanWaveLerp_Offset == 0x57c, "UBP_Ocean_C::PanWaveLerp offset is not 57c");
	auto constexpr UBP_Ocean_C_PanWaveIntensity_Offset = offsetof(UBP_Ocean_C, PanWaveIntensity);
	static_assert(UBP_Ocean_C_PanWaveIntensity_Offset == 0x580, "UBP_Ocean_C::PanWaveIntensity offset is not 580");
	auto constexpr UBP_Ocean_C_PanWaveTimeScale_Offset = offsetof(UBP_Ocean_C, PanWaveTimeScale);
	static_assert(UBP_Ocean_C_PanWaveTimeScale_Offset == 0x584, "UBP_Ocean_C::PanWaveTimeScale offset is not 584");
	auto constexpr UBP_Ocean_C_PanWaveSize_Offset = offsetof(UBP_Ocean_C, PanWaveSize);
	static_assert(UBP_Ocean_C_PanWaveSize_Offset == 0x588, "UBP_Ocean_C::PanWaveSize offset is not 588");
	auto constexpr UBP_Ocean_C_Panner01Speed_Offset = offsetof(UBP_Ocean_C, Panner01Speed);
	static_assert(UBP_Ocean_C_Panner01Speed_Offset == 0x58c, "UBP_Ocean_C::Panner01Speed offset is not 58c");
	auto constexpr UBP_Ocean_C_Panner02Speed_Offset = offsetof(UBP_Ocean_C, Panner02Speed);
	static_assert(UBP_Ocean_C_Panner02Speed_Offset == 0x598, "UBP_Ocean_C::Panner02Speed offset is not 598");
	auto constexpr UBP_Ocean_C_Panner03Speed_Offset = offsetof(UBP_Ocean_C, Panner03Speed);
	static_assert(UBP_Ocean_C_Panner03Speed_Offset == 0x5a4, "UBP_Ocean_C::Panner03Speed offset is not 5a4");
	auto constexpr UBP_Ocean_C_MacroWaveScale_Offset = offsetof(UBP_Ocean_C, MacroWaveScale);
	static_assert(UBP_Ocean_C_MacroWaveScale_Offset == 0x5b0, "UBP_Ocean_C::MacroWaveScale offset is not 5b0");
	auto constexpr UBP_Ocean_C_MacroWaveSpeed_Offset = offsetof(UBP_Ocean_C, MacroWaveSpeed);
	static_assert(UBP_Ocean_C_MacroWaveSpeed_Offset == 0x5b4, "UBP_Ocean_C::MacroWaveSpeed offset is not 5b4");
	auto constexpr UBP_Ocean_C_MacroWaveAmplify_Offset = offsetof(UBP_Ocean_C, MacroWaveAmplify);
	static_assert(UBP_Ocean_C_MacroWaveAmplify_Offset == 0x5b8, "UBP_Ocean_C::MacroWaveAmplify offset is not 5b8");
	auto constexpr UBP_Ocean_C_SSS_MacroNormalStrength_Offset = offsetof(UBP_Ocean_C, SSS_MacroNormalStrength);
	static_assert(UBP_Ocean_C_SSS_MacroNormalStrength_Offset == 0x5bc, "UBP_Ocean_C::SSS_MacroNormalStrength offset is not 5bc");
	auto constexpr UBP_Ocean_C_FoamSoftness1_Offset = offsetof(UBP_Ocean_C, FoamSoftness1);
	static_assert(UBP_Ocean_C_FoamSoftness1_Offset == 0x5c0, "UBP_Ocean_C::FoamSoftness1 offset is not 5c0");
	auto constexpr UBP_Ocean_C_SceneDepthSoftness_Offset = offsetof(UBP_Ocean_C, SceneDepthSoftness);
	static_assert(UBP_Ocean_C_SceneDepthSoftness_Offset == 0x5c4, "UBP_Ocean_C::SceneDepthSoftness offset is not 5c4");
	auto constexpr UBP_Ocean_C_BaseDepthFadeSoftness_Offset = offsetof(UBP_Ocean_C, BaseDepthFadeSoftness);
	static_assert(UBP_Ocean_C_BaseDepthFadeSoftness_Offset == 0x5c8, "UBP_Ocean_C::BaseDepthFadeSoftness offset is not 5c8");
	auto constexpr UBP_Ocean_C_FoamCapsOpacity_Offset = offsetof(UBP_Ocean_C, FoamCapsOpacity);
	static_assert(UBP_Ocean_C_FoamCapsOpacity_Offset == 0x5cc, "UBP_Ocean_C::FoamCapsOpacity offset is not 5cc");
	auto constexpr UBP_Ocean_C_FoamCapsHeight_Offset = offsetof(UBP_Ocean_C, FoamCapsHeight);
	static_assert(UBP_Ocean_C_FoamCapsHeight_Offset == 0x5d0, "UBP_Ocean_C::FoamCapsHeight offset is not 5d0");
	auto constexpr UBP_Ocean_C_FoamCapsPower_Offset = offsetof(UBP_Ocean_C, FoamCapsPower);
	static_assert(UBP_Ocean_C_FoamCapsPower_Offset == 0x5d4, "UBP_Ocean_C::FoamCapsPower offset is not 5d4");
	auto constexpr UBP_Ocean_C_SeafoamScale_Offset = offsetof(UBP_Ocean_C, SeafoamScale);
	static_assert(UBP_Ocean_C_SeafoamScale_Offset == 0x5d8, "UBP_Ocean_C::SeafoamScale offset is not 5d8");
	auto constexpr UBP_Ocean_C_SeafoamSpeed_Offset = offsetof(UBP_Ocean_C, SeafoamSpeed);
	static_assert(UBP_Ocean_C_SeafoamSpeed_Offset == 0x5dc, "UBP_Ocean_C::SeafoamSpeed offset is not 5dc");
	auto constexpr UBP_Ocean_C_SeafoamDistortion_Offset = offsetof(UBP_Ocean_C, SeafoamDistortion);
	static_assert(UBP_Ocean_C_SeafoamDistortion_Offset == 0x5e0, "UBP_Ocean_C::SeafoamDistortion offset is not 5e0");
	auto constexpr UBP_Ocean_C_SeafoamHeightPower_Offset = offsetof(UBP_Ocean_C, SeafoamHeightPower);
	static_assert(UBP_Ocean_C_SeafoamHeightPower_Offset == 0x5e4, "UBP_Ocean_C::SeafoamHeightPower offset is not 5e4");
	auto constexpr UBP_Ocean_C_SeafoamHeightMultiply_Offset = offsetof(UBP_Ocean_C, SeafoamHeightMultiply);
	static_assert(UBP_Ocean_C_SeafoamHeightMultiply_Offset == 0x5e8, "UBP_Ocean_C::SeafoamHeightMultiply offset is not 5e8");
	auto constexpr UBP_Ocean_C_HeightmapScale_Offset = offsetof(UBP_Ocean_C, HeightmapScale);
	static_assert(UBP_Ocean_C_HeightmapScale_Offset == 0x5ec, "UBP_Ocean_C::HeightmapScale offset is not 5ec");
	auto constexpr UBP_Ocean_C_HeightmapSpeed_Offset = offsetof(UBP_Ocean_C, HeightmapSpeed);
	static_assert(UBP_Ocean_C_HeightmapSpeed_Offset == 0x5f0, "UBP_Ocean_C::HeightmapSpeed offset is not 5f0");
	auto constexpr UBP_Ocean_C_HeightmapDisplacement_Offset = offsetof(UBP_Ocean_C, HeightmapDisplacement);
	static_assert(UBP_Ocean_C_HeightmapDisplacement_Offset == 0x5f4, "UBP_Ocean_C::HeightmapDisplacement offset is not 5f4");
	auto constexpr UBP_Ocean_C_CubemapRelectionStrength_Offset = offsetof(UBP_Ocean_C, CubemapRelectionStrength);
	static_assert(UBP_Ocean_C_CubemapRelectionStrength_Offset == 0x5f8, "UBP_Ocean_C::CubemapRelectionStrength offset is not 5f8");
	auto constexpr UBP_Ocean_C_SmallWaveNormal_Offset = offsetof(UBP_Ocean_C, SmallWaveNormal);
	static_assert(UBP_Ocean_C_SmallWaveNormal_Offset == 0x600, "UBP_Ocean_C::SmallWaveNormal offset is not 600");
	auto constexpr UBP_Ocean_C_MediumWaveNormal_Offset = offsetof(UBP_Ocean_C, MediumWaveNormal);
	static_assert(UBP_Ocean_C_MediumWaveNormal_Offset == 0x608, "UBP_Ocean_C::MediumWaveNormal offset is not 608");
	auto constexpr UBP_Ocean_C_OceanShader_Offset = offsetof(UBP_Ocean_C, OceanShader);
	static_assert(UBP_Ocean_C_OceanShader_Offset == 0x610, "UBP_Ocean_C::OceanShader offset is not 610");
	auto constexpr UBP_Ocean_C_FarWaveNormal_Offset = offsetof(UBP_Ocean_C, FarWaveNormal);
	static_assert(UBP_Ocean_C_FarWaveNormal_Offset == 0x618, "UBP_Ocean_C::FarWaveNormal offset is not 618");
	auto constexpr UBP_Ocean_C_ShoreFoam_Offset = offsetof(UBP_Ocean_C, ShoreFoam);
	static_assert(UBP_Ocean_C_ShoreFoam_Offset == 0x620, "UBP_Ocean_C::ShoreFoam offset is not 620");
	auto constexpr UBP_Ocean_C_ShoreFoam2_Offset = offsetof(UBP_Ocean_C, ShoreFoam2);
	static_assert(UBP_Ocean_C_ShoreFoam2_Offset == 0x628, "UBP_Ocean_C::ShoreFoam2 offset is not 628");
	auto constexpr UBP_Ocean_C_ShoreFoamRoughness_Offset = offsetof(UBP_Ocean_C, ShoreFoamRoughness);
	static_assert(UBP_Ocean_C_ShoreFoamRoughness_Offset == 0x630, "UBP_Ocean_C::ShoreFoamRoughness offset is not 630");
	auto constexpr UBP_Ocean_C_Heightmap_Offset = offsetof(UBP_Ocean_C, Heightmap);
	static_assert(UBP_Ocean_C_Heightmap_Offset == 0x638, "UBP_Ocean_C::Heightmap offset is not 638");
	auto constexpr UBP_Ocean_C_Seafoam_Offset = offsetof(UBP_Ocean_C, Seafoam);
	static_assert(UBP_Ocean_C_Seafoam_Offset == 0x640, "UBP_Ocean_C::Seafoam offset is not 640");
	auto constexpr UBP_Ocean_C_ReflectionCubemap_Offset = offsetof(UBP_Ocean_C, ReflectionCubemap);
	static_assert(UBP_Ocean_C_ReflectionCubemap_Offset == 0x648, "UBP_Ocean_C::ReflectionCubemap offset is not 648");
	auto constexpr UBP_Ocean_C_MID_Ocean_Offset = offsetof(UBP_Ocean_C, MID_Ocean);
	static_assert(UBP_Ocean_C_MID_Ocean_Offset == 0x650, "UBP_Ocean_C::MID_Ocean offset is not 650");
	auto constexpr UBP_Ocean_C_MID_Ocean_Depth_Offset = offsetof(UBP_Ocean_C, MID_Ocean_Depth);
	static_assert(UBP_Ocean_C_MID_Ocean_Depth_Offset == 0x658, "UBP_Ocean_C::MID_Ocean_Depth offset is not 658");
	auto constexpr UBP_Ocean_C_boolField660_Offset = offsetof(UBP_Ocean_C, boolField660);
	static_assert(UBP_Ocean_C_boolField660_Offset == 0x660, "UBP_Ocean_C::boolField660 offset is not 660");
	auto constexpr UBP_Ocean_C_FollowMethod_Offset = offsetof(UBP_Ocean_C, FollowMethod);
	static_assert(UBP_Ocean_C_FollowMethod_Offset == 0x661, "UBP_Ocean_C::FollowMethod offset is not 661");
	auto constexpr UBP_Ocean_C_GridSnapSize_Offset = offsetof(UBP_Ocean_C, GridSnapSize);
	static_assert(UBP_Ocean_C_GridSnapSize_Offset == 0x664, "UBP_Ocean_C::GridSnapSize offset is not 664");
	auto constexpr UBP_Ocean_C_MaxLookAtDistance_Offset = offsetof(UBP_Ocean_C, MaxLookAtDistance);
	static_assert(UBP_Ocean_C_MaxLookAtDistance_Offset == 0x668, "UBP_Ocean_C::MaxLookAtDistance offset is not 668");
	auto constexpr UBP_Ocean_C_boolField66C_Offset = offsetof(UBP_Ocean_C, boolField66C);
	static_assert(UBP_Ocean_C_boolField66C_Offset == 0x66c, "UBP_Ocean_C::boolField66C offset is not 66c");
	auto constexpr UBP_Ocean_C_ScaleDistanceFactor_Offset = offsetof(UBP_Ocean_C, ScaleDistanceFactor);
	static_assert(UBP_Ocean_C_ScaleDistanceFactor_Offset == 0x670, "UBP_Ocean_C::ScaleDistanceFactor offset is not 670");
	auto constexpr UBP_Ocean_C_ScaleStartDistance_Offset = offsetof(UBP_Ocean_C, ScaleStartDistance);
	static_assert(UBP_Ocean_C_ScaleStartDistance_Offset == 0x674, "UBP_Ocean_C::ScaleStartDistance offset is not 674");
	auto constexpr UBP_Ocean_C_ScaleMin_Offset = offsetof(UBP_Ocean_C, ScaleMin);
	static_assert(UBP_Ocean_C_ScaleMin_Offset == 0x678, "UBP_Ocean_C::ScaleMin offset is not 678");
	auto constexpr UBP_Ocean_C_ScaleMax_Offset = offsetof(UBP_Ocean_C, ScaleMax);
	static_assert(UBP_Ocean_C_ScaleMax_Offset == 0x67c, "UBP_Ocean_C::ScaleMax offset is not 67c");
	auto constexpr UBP_Ocean_C_MID_Ocean_LOD_Offset = offsetof(UBP_Ocean_C, MID_Ocean_LOD);
	static_assert(UBP_Ocean_C_MID_Ocean_LOD_Offset == 0x680, "UBP_Ocean_C::MID_Ocean_LOD offset is not 680");
	auto constexpr UBP_Ocean_C_MID_Ocean_Simple_Offset = offsetof(UBP_Ocean_C, MID_Ocean_Simple);
	static_assert(UBP_Ocean_C_MID_Ocean_Simple_Offset == 0x688, "UBP_Ocean_C::MID_Ocean_Simple offset is not 688");
	auto constexpr UBP_Ocean_C_LODTransitionStart_Offset = offsetof(UBP_Ocean_C, LODTransitionStart);
	static_assert(UBP_Ocean_C_LODTransitionStart_Offset == 0x690, "UBP_Ocean_C::LODTransitionStart offset is not 690");
	auto constexpr UBP_Ocean_C_LODTransitionEnd_Offset = offsetof(UBP_Ocean_C, LODTransitionEnd);
	static_assert(UBP_Ocean_C_LODTransitionEnd_Offset == 0x694, "UBP_Ocean_C::LODTransitionEnd offset is not 694");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
