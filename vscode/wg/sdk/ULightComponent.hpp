#pragma once
#include "ULightComponentBase.hpp"
#include "FLightingChannels.hpp"
#include "FVector.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightComponent // Size: 0x5D0
	: public ULightComponentBase // Size: 0x4C0
{
private:
	typedef ULightComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187); // id32("Class Engine.LightComponent")
		return ptr;
	}
//	float Temperature; /* Ofs: 0x4B8 Size: 0x4 - FloatProperty Engine.LightComponent.Temperature */
//	float MaxDrawDistance; /* Ofs: 0x4BC Size: 0x4 - FloatProperty Engine.LightComponent.MaxDrawDistance */
	float MaxDistanceFadeRange; /* Ofs: 0x4C0 Size: 0x4 - FloatProperty Engine.LightComponent.MaxDistanceFadeRange */
	uint8_t boolField4C4;
	uint8_t UnknownData4C5[0x3];
	int32_t ShadowMapChannel; /* Ofs: 0x4C8 Size: 0x4 - IntProperty Engine.LightComponent.ShadowMapChannel */
	uint8_t UnknownData4CC[0x4];
	float MinRoughness; /* Ofs: 0x4D0 Size: 0x4 - FloatProperty Engine.LightComponent.MinRoughness */
	float ShadowResolutionScale; /* Ofs: 0x4D4 Size: 0x4 - FloatProperty Engine.LightComponent.ShadowResolutionScale */
	float ShadowBias; /* Ofs: 0x4D8 Size: 0x4 - FloatProperty Engine.LightComponent.ShadowBias */
	float ShadowSharpen; /* Ofs: 0x4DC Size: 0x4 - FloatProperty Engine.LightComponent.ShadowSharpen */
	float ContactShadowLength; /* Ofs: 0x4E0 Size: 0x4 - FloatProperty Engine.LightComponent.ContactShadowLength */
	uint8_t boolField4E4;
	uint8_t UnknownData4E5[0x3];
	FLightingChannels LightingChannels; /* Ofs: 0x4E8 Size: 0x3 - StructProperty Engine.LightComponent.LightingChannels */
	uint8_t UnknownData4EB[0x5];
	ExternalPtr<struct UMaterialInterface> LightFunctionMaterial; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty Engine.LightComponent.LightFunctionMaterial */
	FVector LightFunctionScale; /* Ofs: 0x4F8 Size: 0xC - StructProperty Engine.LightComponent.LightFunctionScale */
	uint8_t UnknownData504[0x4];
	ExternalPtr<struct UTextureLightProfile> IESTexture; /* Ofs: 0x508 Size: 0x8 - ObjectProperty Engine.LightComponent.IESTexture */
	uint8_t boolField510;
	uint8_t UnknownData511[0x3];
	float IESBrightnessScale; /* Ofs: 0x514 Size: 0x4 - FloatProperty Engine.LightComponent.IESBrightnessScale */
	float LightFunctionFadeDistance; /* Ofs: 0x518 Size: 0x4 - FloatProperty Engine.LightComponent.LightFunctionFadeDistance */
	float DisabledBrightness; /* Ofs: 0x51C Size: 0x4 - FloatProperty Engine.LightComponent.DisabledBrightness */
	uint8_t boolField520;
	uint8_t UnknownData521[0x3];
	float BloomScale; /* Ofs: 0x524 Size: 0x4 - FloatProperty Engine.LightComponent.BloomScale */
	float BloomThreshold; /* Ofs: 0x528 Size: 0x4 - FloatProperty Engine.LightComponent.BloomThreshold */
	FColor BloomTint; /* Ofs: 0x52C Size: 0x4 - StructProperty Engine.LightComponent.BloomTint */
	uint8_t boolField530;
	uint8_t UnknownData531[0x3];
	float RayStartOffsetDepthScale; /* Ofs: 0x534 Size: 0x4 - FloatProperty Engine.LightComponent.RayStartOffsetDepthScale */
	uint8_t UnknownData538[0x98];


//	inline bool SetTemperature(t_structHelper inst, float value) { inst.WriteOffset(0x4B8, value); }
//	inline bool SetMaxDrawDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4BC, value); }
	inline bool SetMaxDistanceFadeRange(t_structHelper inst, float value) { inst.WriteOffset(0x4C0, value); }
	inline bool bUseTemperature()
	{
		return boolField4C4& 0x1;
	}
	inline bool SetbUseTemperature(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetShadowMapChannel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetMinRoughness(t_structHelper inst, float value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetShadowResolutionScale(t_structHelper inst, float value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetShadowBias(t_structHelper inst, float value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetShadowSharpen(t_structHelper inst, float value) { inst.WriteOffset(0x4DC, value); }
	inline bool SetContactShadowLength(t_structHelper inst, float value) { inst.WriteOffset(0x4E0, value); }
	inline bool InverseSquaredFalloff()
	{
		return boolField4E4& 0x1;
	}
	inline bool SetInverseSquaredFalloff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4E4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool CastTranslucentShadows()
	{
		return boolField4E4& 0x2;
	}
	inline bool SetCastTranslucentShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4E4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCastShadowsFromCinematicObjectsOnly()
	{
		return boolField4E4& 0x4;
	}
	inline bool SetbCastShadowsFromCinematicObjectsOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4E4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAffectDynamicIndirectLighting()
	{
		return boolField4E4& 0x8;
	}
	inline bool SetbAffectDynamicIndirectLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4E4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetLightingChannels(t_structHelper inst, FLightingChannels value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetLightFunctionMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetLightFunctionScale(t_structHelper inst, FVector value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetIESTexture(t_structHelper inst, ExternalPtr<struct UTextureLightProfile> value) { inst.WriteOffset(0x508, value); }
	inline bool bUseIESBrightness()
	{
		return boolField510& 0x1;
	}
	inline bool SetbUseIESBrightness(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x510, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetIESBrightnessScale(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetLightFunctionFadeDistance(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetDisabledBrightness(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool bEnableLightShaftBloom()
	{
		return boolField520& 0x1;
	}
	inline bool SetbEnableLightShaftBloom(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x520, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBloomScale(t_structHelper inst, float value) { inst.WriteOffset(0x524, value); }
	inline bool SetBloomThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x528, value); }
	inline bool SetBloomTint(t_structHelper inst, FColor value) { inst.WriteOffset(0x52C, value); }
	inline bool bUseRayTracedDistanceFieldShadows()
	{
		return boolField530& 0x1;
	}
	inline bool SetbUseRayTracedDistanceFieldShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x530, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRayStartOffsetDepthScale(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightComponent = sizeof(ULightComponent); // 1488
    static_assert(sizeof(ULightComponent) == 0x5D0, "Size of ULightComponent is not correct.");
//	auto constexpr ULightComponent_Temperature_Offset = offsetof(ULightComponent, Temperature);
//	static_assert(ULightComponent_Temperature_Offset == 0x4b8, "ULightComponent::Temperature offset is not 4b8");
//	auto constexpr ULightComponent_MaxDrawDistance_Offset = offsetof(ULightComponent, MaxDrawDistance);
//	static_assert(ULightComponent_MaxDrawDistance_Offset == 0x4bc, "ULightComponent::MaxDrawDistance offset is not 4bc");
	auto constexpr ULightComponent_MaxDistanceFadeRange_Offset = offsetof(ULightComponent, MaxDistanceFadeRange);
	static_assert(ULightComponent_MaxDistanceFadeRange_Offset == 0x4c0, "ULightComponent::MaxDistanceFadeRange offset is not 4c0");
	auto constexpr ULightComponent_boolField4C4_Offset = offsetof(ULightComponent, boolField4C4);
	static_assert(ULightComponent_boolField4C4_Offset == 0x4c4, "ULightComponent::boolField4C4 offset is not 4c4");
	auto constexpr ULightComponent_ShadowMapChannel_Offset = offsetof(ULightComponent, ShadowMapChannel);
	static_assert(ULightComponent_ShadowMapChannel_Offset == 0x4c8, "ULightComponent::ShadowMapChannel offset is not 4c8");
	auto constexpr ULightComponent_MinRoughness_Offset = offsetof(ULightComponent, MinRoughness);
	static_assert(ULightComponent_MinRoughness_Offset == 0x4d0, "ULightComponent::MinRoughness offset is not 4d0");
	auto constexpr ULightComponent_ShadowResolutionScale_Offset = offsetof(ULightComponent, ShadowResolutionScale);
	static_assert(ULightComponent_ShadowResolutionScale_Offset == 0x4d4, "ULightComponent::ShadowResolutionScale offset is not 4d4");
	auto constexpr ULightComponent_ShadowBias_Offset = offsetof(ULightComponent, ShadowBias);
	static_assert(ULightComponent_ShadowBias_Offset == 0x4d8, "ULightComponent::ShadowBias offset is not 4d8");
	auto constexpr ULightComponent_ShadowSharpen_Offset = offsetof(ULightComponent, ShadowSharpen);
	static_assert(ULightComponent_ShadowSharpen_Offset == 0x4dc, "ULightComponent::ShadowSharpen offset is not 4dc");
	auto constexpr ULightComponent_ContactShadowLength_Offset = offsetof(ULightComponent, ContactShadowLength);
	static_assert(ULightComponent_ContactShadowLength_Offset == 0x4e0, "ULightComponent::ContactShadowLength offset is not 4e0");
	auto constexpr ULightComponent_boolField4E4_Offset = offsetof(ULightComponent, boolField4E4);
	static_assert(ULightComponent_boolField4E4_Offset == 0x4e4, "ULightComponent::boolField4E4 offset is not 4e4");
	auto constexpr ULightComponent_LightingChannels_Offset = offsetof(ULightComponent, LightingChannels);
	static_assert(ULightComponent_LightingChannels_Offset == 0x4e8, "ULightComponent::LightingChannels offset is not 4e8");
	auto constexpr ULightComponent_LightFunctionMaterial_Offset = offsetof(ULightComponent, LightFunctionMaterial);
	static_assert(ULightComponent_LightFunctionMaterial_Offset == 0x4f0, "ULightComponent::LightFunctionMaterial offset is not 4f0");
	auto constexpr ULightComponent_LightFunctionScale_Offset = offsetof(ULightComponent, LightFunctionScale);
	static_assert(ULightComponent_LightFunctionScale_Offset == 0x4f8, "ULightComponent::LightFunctionScale offset is not 4f8");
	auto constexpr ULightComponent_IESTexture_Offset = offsetof(ULightComponent, IESTexture);
	static_assert(ULightComponent_IESTexture_Offset == 0x508, "ULightComponent::IESTexture offset is not 508");
	auto constexpr ULightComponent_boolField510_Offset = offsetof(ULightComponent, boolField510);
	static_assert(ULightComponent_boolField510_Offset == 0x510, "ULightComponent::boolField510 offset is not 510");
	auto constexpr ULightComponent_IESBrightnessScale_Offset = offsetof(ULightComponent, IESBrightnessScale);
	static_assert(ULightComponent_IESBrightnessScale_Offset == 0x514, "ULightComponent::IESBrightnessScale offset is not 514");
	auto constexpr ULightComponent_LightFunctionFadeDistance_Offset = offsetof(ULightComponent, LightFunctionFadeDistance);
	static_assert(ULightComponent_LightFunctionFadeDistance_Offset == 0x518, "ULightComponent::LightFunctionFadeDistance offset is not 518");
	auto constexpr ULightComponent_DisabledBrightness_Offset = offsetof(ULightComponent, DisabledBrightness);
	static_assert(ULightComponent_DisabledBrightness_Offset == 0x51c, "ULightComponent::DisabledBrightness offset is not 51c");
	auto constexpr ULightComponent_boolField520_Offset = offsetof(ULightComponent, boolField520);
	static_assert(ULightComponent_boolField520_Offset == 0x520, "ULightComponent::boolField520 offset is not 520");
	auto constexpr ULightComponent_BloomScale_Offset = offsetof(ULightComponent, BloomScale);
	static_assert(ULightComponent_BloomScale_Offset == 0x524, "ULightComponent::BloomScale offset is not 524");
	auto constexpr ULightComponent_BloomThreshold_Offset = offsetof(ULightComponent, BloomThreshold);
	static_assert(ULightComponent_BloomThreshold_Offset == 0x528, "ULightComponent::BloomThreshold offset is not 528");
	auto constexpr ULightComponent_BloomTint_Offset = offsetof(ULightComponent, BloomTint);
	static_assert(ULightComponent_BloomTint_Offset == 0x52c, "ULightComponent::BloomTint offset is not 52c");
	auto constexpr ULightComponent_boolField530_Offset = offsetof(ULightComponent, boolField530);
	static_assert(ULightComponent_boolField530_Offset == 0x530, "ULightComponent::boolField530 offset is not 530");
	auto constexpr ULightComponent_RayStartOffsetDepthScale_Offset = offsetof(ULightComponent, RayStartOffsetDepthScale);
	static_assert(ULightComponent_RayStartOffsetDepthScale_Offset == 0x534, "ULightComponent::RayStartOffsetDepthScale offset is not 534");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
