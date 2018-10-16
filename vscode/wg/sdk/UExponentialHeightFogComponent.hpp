#pragma once
#include "USceneComponent.hpp"
#include "FLinearColor.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UExponentialHeightFogComponent // Size: 0x550
	: public USceneComponent // Size: 0x490
{
private:
	typedef UExponentialHeightFogComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1821); // id32("Class Engine.ExponentialHeightFogComponent")
		return ptr;
	}
	float FogDensity; /* Ofs: 0x490 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.FogDensity */
	FLinearColor FogInscatteringColor; /* Ofs: 0x494 Size: 0x10 - StructProperty Engine.ExponentialHeightFogComponent.FogInscatteringColor */
	uint8_t UnknownData4A4[0x4];
	TArray<struct FFogHeightDensityPair2> HeightDensityLayers; /* Ofs: 0x4A8 Size: 0x10 - ArrayProperty Engine.ExponentialHeightFogComponent.HeightDensityLayers */
	ExternalPtr<struct UTextureCube> InscatteringColorCubemap; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty Engine.ExponentialHeightFogComponent.InscatteringColorCubemap */
	float InscatteringColorCubemapAngle; /* Ofs: 0x4C0 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.InscatteringColorCubemapAngle */
	FLinearColor InscatteringTextureTint; /* Ofs: 0x4C4 Size: 0x10 - StructProperty Engine.ExponentialHeightFogComponent.InscatteringTextureTint */
	float FullyDirectionalInscatteringColorDistance; /* Ofs: 0x4D4 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.FullyDirectionalInscatteringColorDistance */
	float NonDirectionalInscatteringColorDistance; /* Ofs: 0x4D8 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.NonDirectionalInscatteringColorDistance */
	float DirectionalInscatteringExponent; /* Ofs: 0x4DC Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.DirectionalInscatteringExponent */
	float DirectionalInscatteringStartDistance; /* Ofs: 0x4E0 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.DirectionalInscatteringStartDistance */
	FLinearColor DirectionalInscatteringColor; /* Ofs: 0x4E4 Size: 0x10 - StructProperty Engine.ExponentialHeightFogComponent.DirectionalInscatteringColor */
	float FogHeightFalloff; /* Ofs: 0x4F4 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.FogHeightFalloff */
	float FogMaxOpacity; /* Ofs: 0x4F8 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.FogMaxOpacity */
	float StartDistance; /* Ofs: 0x4FC Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.StartDistance */
	float FogCutoffDistance; /* Ofs: 0x500 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.FogCutoffDistance */
	uint8_t boolField504;
	uint8_t UnknownData505[0x3];
	float VolumetricFogScatteringDistribution; /* Ofs: 0x508 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.VolumetricFogScatteringDistribution */
	FColor VolumetricFogAlbedo; /* Ofs: 0x50C Size: 0x4 - StructProperty Engine.ExponentialHeightFogComponent.VolumetricFogAlbedo */
	FLinearColor VolumetricFogEmissive; /* Ofs: 0x510 Size: 0x10 - StructProperty Engine.ExponentialHeightFogComponent.VolumetricFogEmissive */
	float VolumetricFogExtinctionScale; /* Ofs: 0x520 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.VolumetricFogExtinctionScale */
	float VolumetricFogDistance; /* Ofs: 0x524 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.VolumetricFogDistance */
	uint8_t boolField528;
	uint8_t boolField529;
	uint8_t UnknownData52A[0x2];
	float ExtendedFogStartDistance; /* Ofs: 0x52C Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.ExtendedFogStartDistance */
	float ExtendedFogStartFalloffDistance; /* Ofs: 0x530 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.ExtendedFogStartFalloffDistance */
	float ExtendedHeight; /* Ofs: 0x534 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.ExtendedHeight */
	float ExtendedFallOff; /* Ofs: 0x538 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.ExtendedFallOff */
	float ExtendedFogDensity; /* Ofs: 0x53C Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.ExtendedFogDensity */
	float UpDensity; /* Ofs: 0x540 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.UpDensity */
	float DownDensity; /* Ofs: 0x544 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.DownDensity */
	float Intensity; /* Ofs: 0x548 Size: 0x4 - FloatProperty Engine.ExponentialHeightFogComponent.Intensity */
	uint8_t UnknownData54C[0x4];


	inline bool SetFogDensity(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetFogInscatteringColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x494, value); }
	inline bool SetHeightDensityLayers(t_structHelper inst, TArray<struct FFogHeightDensityPair2> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetInscatteringColorCubemap(t_structHelper inst, ExternalPtr<struct UTextureCube> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetInscatteringColorCubemapAngle(t_structHelper inst, float value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetInscatteringTextureTint(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x4C4, value); }
	inline bool SetFullyDirectionalInscatteringColorDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetNonDirectionalInscatteringColorDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetDirectionalInscatteringExponent(t_structHelper inst, float value) { inst.WriteOffset(0x4DC, value); }
	inline bool SetDirectionalInscatteringStartDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetDirectionalInscatteringColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x4E4, value); }
	inline bool SetFogHeightFalloff(t_structHelper inst, float value) { inst.WriteOffset(0x4F4, value); }
	inline bool SetFogMaxOpacity(t_structHelper inst, float value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetStartDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4FC, value); }
	inline bool SetFogCutoffDistance(t_structHelper inst, float value) { inst.WriteOffset(0x500, value); }
	inline bool bEnableVolumetricFog()
	{
		return boolField504& 0x1;
	}
	inline bool SetbEnableVolumetricFog(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x504, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVolumetricFogScatteringDistribution(t_structHelper inst, float value) { inst.WriteOffset(0x508, value); }
	inline bool SetVolumetricFogAlbedo(t_structHelper inst, FColor value) { inst.WriteOffset(0x50C, value); }
	inline bool SetVolumetricFogEmissive(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x510, value); }
	inline bool SetVolumetricFogExtinctionScale(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetVolumetricFogDistance(t_structHelper inst, float value) { inst.WriteOffset(0x524, value); }
	inline bool bOverrideLightColorsWithFogInscatteringColors()
	{
		return boolField528& 0x1;
	}
	inline bool SetbOverrideLightColorsWithFogInscatteringColors(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x528, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseExtendedFog()
	{
		return boolField529& 0x1;
	}
	inline bool SetbUseExtendedFog(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x529, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetExtendedFogStartDistance(t_structHelper inst, float value) { inst.WriteOffset(0x52C, value); }
	inline bool SetExtendedFogStartFalloffDistance(t_structHelper inst, float value) { inst.WriteOffset(0x530, value); }
	inline bool SetExtendedHeight(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
	inline bool SetExtendedFallOff(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetExtendedFogDensity(t_structHelper inst, float value) { inst.WriteOffset(0x53C, value); }
	inline bool SetUpDensity(t_structHelper inst, float value) { inst.WriteOffset(0x540, value); }
	inline bool SetDownDensity(t_structHelper inst, float value) { inst.WriteOffset(0x544, value); }
	inline bool SetIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x548, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUExponentialHeightFogComponent = sizeof(UExponentialHeightFogComponent); // 1360
    static_assert(sizeof(UExponentialHeightFogComponent) == 0x550, "Size of UExponentialHeightFogComponent is not correct.");
	auto constexpr UExponentialHeightFogComponent_FogDensity_Offset = offsetof(UExponentialHeightFogComponent, FogDensity);
	static_assert(UExponentialHeightFogComponent_FogDensity_Offset == 0x490, "UExponentialHeightFogComponent::FogDensity offset is not 490");
	auto constexpr UExponentialHeightFogComponent_FogInscatteringColor_Offset = offsetof(UExponentialHeightFogComponent, FogInscatteringColor);
	static_assert(UExponentialHeightFogComponent_FogInscatteringColor_Offset == 0x494, "UExponentialHeightFogComponent::FogInscatteringColor offset is not 494");
	auto constexpr UExponentialHeightFogComponent_HeightDensityLayers_Offset = offsetof(UExponentialHeightFogComponent, HeightDensityLayers);
	static_assert(UExponentialHeightFogComponent_HeightDensityLayers_Offset == 0x4a8, "UExponentialHeightFogComponent::HeightDensityLayers offset is not 4a8");
	auto constexpr UExponentialHeightFogComponent_InscatteringColorCubemap_Offset = offsetof(UExponentialHeightFogComponent, InscatteringColorCubemap);
	static_assert(UExponentialHeightFogComponent_InscatteringColorCubemap_Offset == 0x4b8, "UExponentialHeightFogComponent::InscatteringColorCubemap offset is not 4b8");
	auto constexpr UExponentialHeightFogComponent_InscatteringColorCubemapAngle_Offset = offsetof(UExponentialHeightFogComponent, InscatteringColorCubemapAngle);
	static_assert(UExponentialHeightFogComponent_InscatteringColorCubemapAngle_Offset == 0x4c0, "UExponentialHeightFogComponent::InscatteringColorCubemapAngle offset is not 4c0");
	auto constexpr UExponentialHeightFogComponent_InscatteringTextureTint_Offset = offsetof(UExponentialHeightFogComponent, InscatteringTextureTint);
	static_assert(UExponentialHeightFogComponent_InscatteringTextureTint_Offset == 0x4c4, "UExponentialHeightFogComponent::InscatteringTextureTint offset is not 4c4");
	auto constexpr UExponentialHeightFogComponent_FullyDirectionalInscatteringColorDistance_Offset = offsetof(UExponentialHeightFogComponent, FullyDirectionalInscatteringColorDistance);
	static_assert(UExponentialHeightFogComponent_FullyDirectionalInscatteringColorDistance_Offset == 0x4d4, "UExponentialHeightFogComponent::FullyDirectionalInscatteringColorDistance offset is not 4d4");
	auto constexpr UExponentialHeightFogComponent_NonDirectionalInscatteringColorDistance_Offset = offsetof(UExponentialHeightFogComponent, NonDirectionalInscatteringColorDistance);
	static_assert(UExponentialHeightFogComponent_NonDirectionalInscatteringColorDistance_Offset == 0x4d8, "UExponentialHeightFogComponent::NonDirectionalInscatteringColorDistance offset is not 4d8");
	auto constexpr UExponentialHeightFogComponent_DirectionalInscatteringExponent_Offset = offsetof(UExponentialHeightFogComponent, DirectionalInscatteringExponent);
	static_assert(UExponentialHeightFogComponent_DirectionalInscatteringExponent_Offset == 0x4dc, "UExponentialHeightFogComponent::DirectionalInscatteringExponent offset is not 4dc");
	auto constexpr UExponentialHeightFogComponent_DirectionalInscatteringStartDistance_Offset = offsetof(UExponentialHeightFogComponent, DirectionalInscatteringStartDistance);
	static_assert(UExponentialHeightFogComponent_DirectionalInscatteringStartDistance_Offset == 0x4e0, "UExponentialHeightFogComponent::DirectionalInscatteringStartDistance offset is not 4e0");
	auto constexpr UExponentialHeightFogComponent_DirectionalInscatteringColor_Offset = offsetof(UExponentialHeightFogComponent, DirectionalInscatteringColor);
	static_assert(UExponentialHeightFogComponent_DirectionalInscatteringColor_Offset == 0x4e4, "UExponentialHeightFogComponent::DirectionalInscatteringColor offset is not 4e4");
	auto constexpr UExponentialHeightFogComponent_FogHeightFalloff_Offset = offsetof(UExponentialHeightFogComponent, FogHeightFalloff);
	static_assert(UExponentialHeightFogComponent_FogHeightFalloff_Offset == 0x4f4, "UExponentialHeightFogComponent::FogHeightFalloff offset is not 4f4");
	auto constexpr UExponentialHeightFogComponent_FogMaxOpacity_Offset = offsetof(UExponentialHeightFogComponent, FogMaxOpacity);
	static_assert(UExponentialHeightFogComponent_FogMaxOpacity_Offset == 0x4f8, "UExponentialHeightFogComponent::FogMaxOpacity offset is not 4f8");
	auto constexpr UExponentialHeightFogComponent_StartDistance_Offset = offsetof(UExponentialHeightFogComponent, StartDistance);
	static_assert(UExponentialHeightFogComponent_StartDistance_Offset == 0x4fc, "UExponentialHeightFogComponent::StartDistance offset is not 4fc");
	auto constexpr UExponentialHeightFogComponent_FogCutoffDistance_Offset = offsetof(UExponentialHeightFogComponent, FogCutoffDistance);
	static_assert(UExponentialHeightFogComponent_FogCutoffDistance_Offset == 0x500, "UExponentialHeightFogComponent::FogCutoffDistance offset is not 500");
	auto constexpr UExponentialHeightFogComponent_boolField504_Offset = offsetof(UExponentialHeightFogComponent, boolField504);
	static_assert(UExponentialHeightFogComponent_boolField504_Offset == 0x504, "UExponentialHeightFogComponent::boolField504 offset is not 504");
	auto constexpr UExponentialHeightFogComponent_VolumetricFogScatteringDistribution_Offset = offsetof(UExponentialHeightFogComponent, VolumetricFogScatteringDistribution);
	static_assert(UExponentialHeightFogComponent_VolumetricFogScatteringDistribution_Offset == 0x508, "UExponentialHeightFogComponent::VolumetricFogScatteringDistribution offset is not 508");
	auto constexpr UExponentialHeightFogComponent_VolumetricFogAlbedo_Offset = offsetof(UExponentialHeightFogComponent, VolumetricFogAlbedo);
	static_assert(UExponentialHeightFogComponent_VolumetricFogAlbedo_Offset == 0x50c, "UExponentialHeightFogComponent::VolumetricFogAlbedo offset is not 50c");
	auto constexpr UExponentialHeightFogComponent_VolumetricFogEmissive_Offset = offsetof(UExponentialHeightFogComponent, VolumetricFogEmissive);
	static_assert(UExponentialHeightFogComponent_VolumetricFogEmissive_Offset == 0x510, "UExponentialHeightFogComponent::VolumetricFogEmissive offset is not 510");
	auto constexpr UExponentialHeightFogComponent_VolumetricFogExtinctionScale_Offset = offsetof(UExponentialHeightFogComponent, VolumetricFogExtinctionScale);
	static_assert(UExponentialHeightFogComponent_VolumetricFogExtinctionScale_Offset == 0x520, "UExponentialHeightFogComponent::VolumetricFogExtinctionScale offset is not 520");
	auto constexpr UExponentialHeightFogComponent_VolumetricFogDistance_Offset = offsetof(UExponentialHeightFogComponent, VolumetricFogDistance);
	static_assert(UExponentialHeightFogComponent_VolumetricFogDistance_Offset == 0x524, "UExponentialHeightFogComponent::VolumetricFogDistance offset is not 524");
	auto constexpr UExponentialHeightFogComponent_boolField528_Offset = offsetof(UExponentialHeightFogComponent, boolField528);
	static_assert(UExponentialHeightFogComponent_boolField528_Offset == 0x528, "UExponentialHeightFogComponent::boolField528 offset is not 528");
	auto constexpr UExponentialHeightFogComponent_boolField529_Offset = offsetof(UExponentialHeightFogComponent, boolField529);
	static_assert(UExponentialHeightFogComponent_boolField529_Offset == 0x529, "UExponentialHeightFogComponent::boolField529 offset is not 529");
	auto constexpr UExponentialHeightFogComponent_ExtendedFogStartDistance_Offset = offsetof(UExponentialHeightFogComponent, ExtendedFogStartDistance);
	static_assert(UExponentialHeightFogComponent_ExtendedFogStartDistance_Offset == 0x52c, "UExponentialHeightFogComponent::ExtendedFogStartDistance offset is not 52c");
	auto constexpr UExponentialHeightFogComponent_ExtendedFogStartFalloffDistance_Offset = offsetof(UExponentialHeightFogComponent, ExtendedFogStartFalloffDistance);
	static_assert(UExponentialHeightFogComponent_ExtendedFogStartFalloffDistance_Offset == 0x530, "UExponentialHeightFogComponent::ExtendedFogStartFalloffDistance offset is not 530");
	auto constexpr UExponentialHeightFogComponent_ExtendedHeight_Offset = offsetof(UExponentialHeightFogComponent, ExtendedHeight);
	static_assert(UExponentialHeightFogComponent_ExtendedHeight_Offset == 0x534, "UExponentialHeightFogComponent::ExtendedHeight offset is not 534");
	auto constexpr UExponentialHeightFogComponent_ExtendedFallOff_Offset = offsetof(UExponentialHeightFogComponent, ExtendedFallOff);
	static_assert(UExponentialHeightFogComponent_ExtendedFallOff_Offset == 0x538, "UExponentialHeightFogComponent::ExtendedFallOff offset is not 538");
	auto constexpr UExponentialHeightFogComponent_ExtendedFogDensity_Offset = offsetof(UExponentialHeightFogComponent, ExtendedFogDensity);
	static_assert(UExponentialHeightFogComponent_ExtendedFogDensity_Offset == 0x53c, "UExponentialHeightFogComponent::ExtendedFogDensity offset is not 53c");
	auto constexpr UExponentialHeightFogComponent_UpDensity_Offset = offsetof(UExponentialHeightFogComponent, UpDensity);
	static_assert(UExponentialHeightFogComponent_UpDensity_Offset == 0x540, "UExponentialHeightFogComponent::UpDensity offset is not 540");
	auto constexpr UExponentialHeightFogComponent_DownDensity_Offset = offsetof(UExponentialHeightFogComponent, DownDensity);
	static_assert(UExponentialHeightFogComponent_DownDensity_Offset == 0x544, "UExponentialHeightFogComponent::DownDensity offset is not 544");
	auto constexpr UExponentialHeightFogComponent_Intensity_Offset = offsetof(UExponentialHeightFogComponent, Intensity);
	static_assert(UExponentialHeightFogComponent_Intensity_Offset == 0x548, "UExponentialHeightFogComponent::Intensity offset is not 548");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
