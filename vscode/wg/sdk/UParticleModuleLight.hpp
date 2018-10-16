#pragma once
#include "UParticleModuleLightBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"
#include "FLightingChannels.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLight // Size: 0x148
	: public UParticleModuleLightBase // Size: 0x38
{
private:
	typedef UParticleModuleLight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1092); // id32("Class Engine.ParticleModuleLight")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t boolField39;
	uint8_t boolField3A;
	uint8_t UnknownData3B[0x1];
	float SpawnFraction; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.ParticleModuleLight.SpawnFraction */
	FRawDistributionVector ColorScaleOverLife; /* Ofs: 0x40 Size: 0x50 - StructProperty Engine.ParticleModuleLight.ColorScaleOverLife */
	FRawDistributionFloat BrightnessOverLife; /* Ofs: 0x90 Size: 0x38 - StructProperty Engine.ParticleModuleLight.BrightnessOverLife */
	FRawDistributionFloat RadiusScale; /* Ofs: 0xC8 Size: 0x38 - StructProperty Engine.ParticleModuleLight.RadiusScale */
	FRawDistributionFloat LightExponent; /* Ofs: 0x100 Size: 0x38 - StructProperty Engine.ParticleModuleLight.LightExponent */
	FLightingChannels LightingChannels; /* Ofs: 0x138 Size: 0x3 - StructProperty Engine.ParticleModuleLight.LightingChannels */
	uint8_t UnknownData13B[0x1];
	float VolumetricScatteringIntensity; /* Ofs: 0x13C Size: 0x4 - FloatProperty Engine.ParticleModuleLight.VolumetricScatteringIntensity */
	uint8_t boolField140;
	uint8_t boolField141;
	uint8_t UnknownData142[0x6];


	inline bool bUseInverseSquaredFalloff()
	{
		return boolField38& 0x1;
	}
	inline bool SetbUseInverseSquaredFalloff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAffectsTranslucency()
	{
		return boolField39& 0x1;
	}
	inline bool SetbAffectsTranslucency(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x39, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPreviewLightRadius()
	{
		return boolField3A& 0x1;
	}
	inline bool SetbPreviewLightRadius(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSpawnFraction(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetColorScaleOverLife(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x40, value); }
	inline bool SetBrightnessOverLife(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x90, value); }
	inline bool SetRadiusScale(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xC8, value); }
	inline bool SetLightExponent(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x100, value); }
	inline bool SetLightingChannels(t_structHelper inst, FLightingChannels value) { inst.WriteOffset(0x138, value); }
	inline bool SetVolumetricScatteringIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x13C, value); }
	inline bool bHighQualityLights()
	{
		return boolField140& 0x1;
	}
	inline bool SetbHighQualityLights(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x140, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShadowCastingLights()
	{
		return boolField141& 0x1;
	}
	inline bool SetbShadowCastingLights(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x141, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLight = sizeof(UParticleModuleLight); // 328
    static_assert(sizeof(UParticleModuleLight) == 0x148, "Size of UParticleModuleLight is not correct.");
	auto constexpr UParticleModuleLight_boolField38_Offset = offsetof(UParticleModuleLight, boolField38);
	static_assert(UParticleModuleLight_boolField38_Offset == 0x38, "UParticleModuleLight::boolField38 offset is not 38");
	auto constexpr UParticleModuleLight_boolField39_Offset = offsetof(UParticleModuleLight, boolField39);
	static_assert(UParticleModuleLight_boolField39_Offset == 0x39, "UParticleModuleLight::boolField39 offset is not 39");
	auto constexpr UParticleModuleLight_boolField3A_Offset = offsetof(UParticleModuleLight, boolField3A);
	static_assert(UParticleModuleLight_boolField3A_Offset == 0x3a, "UParticleModuleLight::boolField3A offset is not 3a");
	auto constexpr UParticleModuleLight_SpawnFraction_Offset = offsetof(UParticleModuleLight, SpawnFraction);
	static_assert(UParticleModuleLight_SpawnFraction_Offset == 0x3c, "UParticleModuleLight::SpawnFraction offset is not 3c");
	auto constexpr UParticleModuleLight_ColorScaleOverLife_Offset = offsetof(UParticleModuleLight, ColorScaleOverLife);
	static_assert(UParticleModuleLight_ColorScaleOverLife_Offset == 0x40, "UParticleModuleLight::ColorScaleOverLife offset is not 40");
	auto constexpr UParticleModuleLight_BrightnessOverLife_Offset = offsetof(UParticleModuleLight, BrightnessOverLife);
	static_assert(UParticleModuleLight_BrightnessOverLife_Offset == 0x90, "UParticleModuleLight::BrightnessOverLife offset is not 90");
	auto constexpr UParticleModuleLight_RadiusScale_Offset = offsetof(UParticleModuleLight, RadiusScale);
	static_assert(UParticleModuleLight_RadiusScale_Offset == 0xc8, "UParticleModuleLight::RadiusScale offset is not c8");
	auto constexpr UParticleModuleLight_LightExponent_Offset = offsetof(UParticleModuleLight, LightExponent);
	static_assert(UParticleModuleLight_LightExponent_Offset == 0x100, "UParticleModuleLight::LightExponent offset is not 100");
	auto constexpr UParticleModuleLight_LightingChannels_Offset = offsetof(UParticleModuleLight, LightingChannels);
	static_assert(UParticleModuleLight_LightingChannels_Offset == 0x138, "UParticleModuleLight::LightingChannels offset is not 138");
	auto constexpr UParticleModuleLight_VolumetricScatteringIntensity_Offset = offsetof(UParticleModuleLight, VolumetricScatteringIntensity);
	static_assert(UParticleModuleLight_VolumetricScatteringIntensity_Offset == 0x13c, "UParticleModuleLight::VolumetricScatteringIntensity offset is not 13c");
	auto constexpr UParticleModuleLight_boolField140_Offset = offsetof(UParticleModuleLight, boolField140);
	static_assert(UParticleModuleLight_boolField140_Offset == 0x140, "UParticleModuleLight::boolField140 offset is not 140");
	auto constexpr UParticleModuleLight_boolField141_Offset = offsetof(UParticleModuleLight, boolField141);
	static_assert(UParticleModuleLight_boolField141_Offset == 0x141, "UParticleModuleLight::boolField141 offset is not 141");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
