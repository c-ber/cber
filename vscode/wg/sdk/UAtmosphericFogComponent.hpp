#pragma once
#include "USceneComponent.hpp"
#include "FColor.hpp"
#include "FAtmospherePrecomputeParameters.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAtmosphericFogComponent // Size: 0x6A0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UAtmosphericFogComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1813); // id32("Class Engine.AtmosphericFogComponent")
		return ptr;
	}
	float SunMultiplier; /* Ofs: 0x490 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.SunMultiplier */
	float FogMultiplier; /* Ofs: 0x494 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.FogMultiplier */
	float DensityMultiplier; /* Ofs: 0x498 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.DensityMultiplier */
	float DensityOffset; /* Ofs: 0x49C Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.DensityOffset */
	float DistanceScale; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.DistanceScale */
	float AltitudeScale; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.AltitudeScale */
	float DistanceOffset; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.DistanceOffset */
	float GroundOffset; /* Ofs: 0x4AC Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.GroundOffset */
	float StartDistance; /* Ofs: 0x4B0 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.StartDistance */
	float SunDiscScale; /* Ofs: 0x4B4 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.SunDiscScale */
	TArray<struct FFogHeightDensityPair> HeightDensityLayers; /* Ofs: 0x4B8 Size: 0x10 - ArrayProperty Engine.AtmosphericFogComponent.HeightDensityLayers */
	float DefaultBrightness; /* Ofs: 0x4C8 Size: 0x4 - FloatProperty Engine.AtmosphericFogComponent.DefaultBrightness */
	FColor DefaultLightColor; /* Ofs: 0x4CC Size: 0x4 - StructProperty Engine.AtmosphericFogComponent.DefaultLightColor */
	uint8_t boolField4D0;
	uint8_t UnknownData4D1[0x3];
	FAtmospherePrecomputeParameters PrecomputeParams; /* Ofs: 0x4D4 Size: 0x2C - StructProperty Engine.AtmosphericFogComponent.PrecomputeParams */
	ExternalPtr<struct UTexture2D> TransmittanceTexture; /* Ofs: 0x500 Size: 0x8 - ObjectProperty Engine.AtmosphericFogComponent.TransmittanceTexture */
	ExternalPtr<struct UTexture2D> IrradianceTexture; /* Ofs: 0x508 Size: 0x8 - ObjectProperty Engine.AtmosphericFogComponent.IrradianceTexture */
	uint8_t UnknownData510[0x190];


	inline bool SetSunMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetFogMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool SetDensityMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetDensityOffset(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetDistanceScale(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetAltitudeScale(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetDistanceOffset(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetGroundOffset(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetStartDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetSunDiscScale(t_structHelper inst, float value) { inst.WriteOffset(0x4B4, value); }
	inline bool SetHeightDensityLayers(t_structHelper inst, TArray<struct FFogHeightDensityPair> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetDefaultBrightness(t_structHelper inst, float value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetDefaultLightColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x4CC, value); }
	inline bool bDisableSunDisk()
	{
		return boolField4D0& 0x1;
	}
	inline bool SetbDisableSunDisk(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisableGroundScattering()
	{
		return boolField4D0& 0x2;
	}
	inline bool SetbDisableGroundScattering(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetPrecomputeParams(t_structHelper inst, FAtmospherePrecomputeParameters value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetTransmittanceTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x500, value); }
	inline bool SetIrradianceTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x508, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAtmosphericFogComponent = sizeof(UAtmosphericFogComponent); // 1696
    static_assert(sizeof(UAtmosphericFogComponent) == 0x6A0, "Size of UAtmosphericFogComponent is not correct.");
	auto constexpr UAtmosphericFogComponent_SunMultiplier_Offset = offsetof(UAtmosphericFogComponent, SunMultiplier);
	static_assert(UAtmosphericFogComponent_SunMultiplier_Offset == 0x490, "UAtmosphericFogComponent::SunMultiplier offset is not 490");
	auto constexpr UAtmosphericFogComponent_FogMultiplier_Offset = offsetof(UAtmosphericFogComponent, FogMultiplier);
	static_assert(UAtmosphericFogComponent_FogMultiplier_Offset == 0x494, "UAtmosphericFogComponent::FogMultiplier offset is not 494");
	auto constexpr UAtmosphericFogComponent_DensityMultiplier_Offset = offsetof(UAtmosphericFogComponent, DensityMultiplier);
	static_assert(UAtmosphericFogComponent_DensityMultiplier_Offset == 0x498, "UAtmosphericFogComponent::DensityMultiplier offset is not 498");
	auto constexpr UAtmosphericFogComponent_DensityOffset_Offset = offsetof(UAtmosphericFogComponent, DensityOffset);
	static_assert(UAtmosphericFogComponent_DensityOffset_Offset == 0x49c, "UAtmosphericFogComponent::DensityOffset offset is not 49c");
	auto constexpr UAtmosphericFogComponent_DistanceScale_Offset = offsetof(UAtmosphericFogComponent, DistanceScale);
	static_assert(UAtmosphericFogComponent_DistanceScale_Offset == 0x4a0, "UAtmosphericFogComponent::DistanceScale offset is not 4a0");
	auto constexpr UAtmosphericFogComponent_AltitudeScale_Offset = offsetof(UAtmosphericFogComponent, AltitudeScale);
	static_assert(UAtmosphericFogComponent_AltitudeScale_Offset == 0x4a4, "UAtmosphericFogComponent::AltitudeScale offset is not 4a4");
	auto constexpr UAtmosphericFogComponent_DistanceOffset_Offset = offsetof(UAtmosphericFogComponent, DistanceOffset);
	static_assert(UAtmosphericFogComponent_DistanceOffset_Offset == 0x4a8, "UAtmosphericFogComponent::DistanceOffset offset is not 4a8");
	auto constexpr UAtmosphericFogComponent_GroundOffset_Offset = offsetof(UAtmosphericFogComponent, GroundOffset);
	static_assert(UAtmosphericFogComponent_GroundOffset_Offset == 0x4ac, "UAtmosphericFogComponent::GroundOffset offset is not 4ac");
	auto constexpr UAtmosphericFogComponent_StartDistance_Offset = offsetof(UAtmosphericFogComponent, StartDistance);
	static_assert(UAtmosphericFogComponent_StartDistance_Offset == 0x4b0, "UAtmosphericFogComponent::StartDistance offset is not 4b0");
	auto constexpr UAtmosphericFogComponent_SunDiscScale_Offset = offsetof(UAtmosphericFogComponent, SunDiscScale);
	static_assert(UAtmosphericFogComponent_SunDiscScale_Offset == 0x4b4, "UAtmosphericFogComponent::SunDiscScale offset is not 4b4");
	auto constexpr UAtmosphericFogComponent_HeightDensityLayers_Offset = offsetof(UAtmosphericFogComponent, HeightDensityLayers);
	static_assert(UAtmosphericFogComponent_HeightDensityLayers_Offset == 0x4b8, "UAtmosphericFogComponent::HeightDensityLayers offset is not 4b8");
	auto constexpr UAtmosphericFogComponent_DefaultBrightness_Offset = offsetof(UAtmosphericFogComponent, DefaultBrightness);
	static_assert(UAtmosphericFogComponent_DefaultBrightness_Offset == 0x4c8, "UAtmosphericFogComponent::DefaultBrightness offset is not 4c8");
	auto constexpr UAtmosphericFogComponent_DefaultLightColor_Offset = offsetof(UAtmosphericFogComponent, DefaultLightColor);
	static_assert(UAtmosphericFogComponent_DefaultLightColor_Offset == 0x4cc, "UAtmosphericFogComponent::DefaultLightColor offset is not 4cc");
	auto constexpr UAtmosphericFogComponent_boolField4D0_Offset = offsetof(UAtmosphericFogComponent, boolField4D0);
	static_assert(UAtmosphericFogComponent_boolField4D0_Offset == 0x4d0, "UAtmosphericFogComponent::boolField4D0 offset is not 4d0");
	auto constexpr UAtmosphericFogComponent_PrecomputeParams_Offset = offsetof(UAtmosphericFogComponent, PrecomputeParams);
	static_assert(UAtmosphericFogComponent_PrecomputeParams_Offset == 0x4d4, "UAtmosphericFogComponent::PrecomputeParams offset is not 4d4");
	auto constexpr UAtmosphericFogComponent_TransmittanceTexture_Offset = offsetof(UAtmosphericFogComponent, TransmittanceTexture);
	static_assert(UAtmosphericFogComponent_TransmittanceTexture_Offset == 0x500, "UAtmosphericFogComponent::TransmittanceTexture offset is not 500");
	auto constexpr UAtmosphericFogComponent_IrradianceTexture_Offset = offsetof(UAtmosphericFogComponent, IrradianceTexture);
	static_assert(UAtmosphericFogComponent_IrradianceTexture_Offset == 0x508, "UAtmosphericFogComponent::IrradianceTexture offset is not 508");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
