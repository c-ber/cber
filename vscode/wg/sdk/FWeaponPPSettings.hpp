#pragma once
#include "FVector2D.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponPPSettings // Size: 0x90
{
public:
    float BlurLevel; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.BlurLevel */
    float ScopeRadiusNear; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ScopeRadiusNear */
    float ScopeRadiusFar; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ScopeRadiusFar */
    FVector2D ReticleRect; /* Ofs: 0xC Size: 0x8 StructProperty TslGame.WeaponPPSettings.ReticleRect */
    float ReticleAngularSize; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ReticleAngularSize */
    FLinearColor ReticleTint; /* Ofs: 0x18 Size: 0x10 StructProperty TslGame.WeaponPPSettings.ReticleTint */
    float ReticleGamma; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ReticleGamma */
    uint8_t UnknownData2C[0x4];
    ExternalPtr<struct UTexture> ReticleTexture; /* Ofs: 0x30 Size: 0x8 ObjectProperty TslGame.WeaponPPSettings.ReticleTexture */
    ExternalPtr<struct UReticleSettings> ReticleSettings; /* Ofs: 0x38 Size: 0x8 ObjectProperty TslGame.WeaponPPSettings.ReticleSettings */
    float ScopeLensDistortion; /* Ofs: 0x40 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ScopeLensDistortion */
    float ScopeLensCA; /* Ofs: 0x44 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ScopeLensCA */
    FLinearColor ScopeLensTint; /* Ofs: 0x48 Size: 0x10 StructProperty TslGame.WeaponPPSettings.ScopeLensTint */
    float ScopeOuterBrightness; /* Ofs: 0x58 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ScopeOuterBrightness */
    float DepthBlurPower; /* Ofs: 0x5C Size: 0x4 FloatProperty TslGame.WeaponPPSettings.DepthBlurPower */
    float DepthBlurWhitePoint; /* Ofs: 0x60 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.DepthBlurWhitePoint */
    float DepthBlurBlackPoint; /* Ofs: 0x64 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.DepthBlurBlackPoint */
    FVector2D RelativeOffsetMap; /* Ofs: 0x68 Size: 0x8 StructProperty TslGame.WeaponPPSettings.RelativeOffsetMap */
    float ParallaxMovementScale; /* Ofs: 0x70 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ParallaxMovementScale */
    float ParallaxRadiusScale; /* Ofs: 0x74 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.ParallaxRadiusScale */
    float BloomIntensity; /* Ofs: 0x78 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.BloomIntensity */
    float NearClipStaticOffset; /* Ofs: 0x7C Size: 0x4 FloatProperty TslGame.WeaponPPSettings.NearClipStaticOffset */
    float NearClipMinClamp; /* Ofs: 0x80 Size: 0x4 FloatProperty TslGame.WeaponPPSettings.NearClipMinClamp */
    FVector WeaponCycleCameraOffset; /* Ofs: 0x84 Size: 0xC StructProperty TslGame.WeaponPPSettings.WeaponCycleCameraOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponPPSettings = sizeof(FWeaponPPSettings); // 144
    static_assert(sizeof(FWeaponPPSettings) == 0x90, "Size of FWeaponPPSettings is not correct.");
	auto constexpr FWeaponPPSettings_BlurLevel_Offset = offsetof(FWeaponPPSettings, BlurLevel);
	static_assert(FWeaponPPSettings_BlurLevel_Offset == 0x0, "FWeaponPPSettings::BlurLevel offset is not 0");
	auto constexpr FWeaponPPSettings_ScopeRadiusNear_Offset = offsetof(FWeaponPPSettings, ScopeRadiusNear);
	static_assert(FWeaponPPSettings_ScopeRadiusNear_Offset == 0x4, "FWeaponPPSettings::ScopeRadiusNear offset is not 4");
	auto constexpr FWeaponPPSettings_ScopeRadiusFar_Offset = offsetof(FWeaponPPSettings, ScopeRadiusFar);
	static_assert(FWeaponPPSettings_ScopeRadiusFar_Offset == 0x8, "FWeaponPPSettings::ScopeRadiusFar offset is not 8");
	auto constexpr FWeaponPPSettings_ReticleRect_Offset = offsetof(FWeaponPPSettings, ReticleRect);
	static_assert(FWeaponPPSettings_ReticleRect_Offset == 0xc, "FWeaponPPSettings::ReticleRect offset is not c");
	auto constexpr FWeaponPPSettings_ReticleAngularSize_Offset = offsetof(FWeaponPPSettings, ReticleAngularSize);
	static_assert(FWeaponPPSettings_ReticleAngularSize_Offset == 0x14, "FWeaponPPSettings::ReticleAngularSize offset is not 14");
	auto constexpr FWeaponPPSettings_ReticleTint_Offset = offsetof(FWeaponPPSettings, ReticleTint);
	static_assert(FWeaponPPSettings_ReticleTint_Offset == 0x18, "FWeaponPPSettings::ReticleTint offset is not 18");
	auto constexpr FWeaponPPSettings_ReticleGamma_Offset = offsetof(FWeaponPPSettings, ReticleGamma);
	static_assert(FWeaponPPSettings_ReticleGamma_Offset == 0x28, "FWeaponPPSettings::ReticleGamma offset is not 28");
	auto constexpr FWeaponPPSettings_ReticleTexture_Offset = offsetof(FWeaponPPSettings, ReticleTexture);
	static_assert(FWeaponPPSettings_ReticleTexture_Offset == 0x30, "FWeaponPPSettings::ReticleTexture offset is not 30");
	auto constexpr FWeaponPPSettings_ReticleSettings_Offset = offsetof(FWeaponPPSettings, ReticleSettings);
	static_assert(FWeaponPPSettings_ReticleSettings_Offset == 0x38, "FWeaponPPSettings::ReticleSettings offset is not 38");
	auto constexpr FWeaponPPSettings_ScopeLensDistortion_Offset = offsetof(FWeaponPPSettings, ScopeLensDistortion);
	static_assert(FWeaponPPSettings_ScopeLensDistortion_Offset == 0x40, "FWeaponPPSettings::ScopeLensDistortion offset is not 40");
	auto constexpr FWeaponPPSettings_ScopeLensCA_Offset = offsetof(FWeaponPPSettings, ScopeLensCA);
	static_assert(FWeaponPPSettings_ScopeLensCA_Offset == 0x44, "FWeaponPPSettings::ScopeLensCA offset is not 44");
	auto constexpr FWeaponPPSettings_ScopeLensTint_Offset = offsetof(FWeaponPPSettings, ScopeLensTint);
	static_assert(FWeaponPPSettings_ScopeLensTint_Offset == 0x48, "FWeaponPPSettings::ScopeLensTint offset is not 48");
	auto constexpr FWeaponPPSettings_ScopeOuterBrightness_Offset = offsetof(FWeaponPPSettings, ScopeOuterBrightness);
	static_assert(FWeaponPPSettings_ScopeOuterBrightness_Offset == 0x58, "FWeaponPPSettings::ScopeOuterBrightness offset is not 58");
	auto constexpr FWeaponPPSettings_DepthBlurPower_Offset = offsetof(FWeaponPPSettings, DepthBlurPower);
	static_assert(FWeaponPPSettings_DepthBlurPower_Offset == 0x5c, "FWeaponPPSettings::DepthBlurPower offset is not 5c");
	auto constexpr FWeaponPPSettings_DepthBlurWhitePoint_Offset = offsetof(FWeaponPPSettings, DepthBlurWhitePoint);
	static_assert(FWeaponPPSettings_DepthBlurWhitePoint_Offset == 0x60, "FWeaponPPSettings::DepthBlurWhitePoint offset is not 60");
	auto constexpr FWeaponPPSettings_DepthBlurBlackPoint_Offset = offsetof(FWeaponPPSettings, DepthBlurBlackPoint);
	static_assert(FWeaponPPSettings_DepthBlurBlackPoint_Offset == 0x64, "FWeaponPPSettings::DepthBlurBlackPoint offset is not 64");
	auto constexpr FWeaponPPSettings_RelativeOffsetMap_Offset = offsetof(FWeaponPPSettings, RelativeOffsetMap);
	static_assert(FWeaponPPSettings_RelativeOffsetMap_Offset == 0x68, "FWeaponPPSettings::RelativeOffsetMap offset is not 68");
	auto constexpr FWeaponPPSettings_ParallaxMovementScale_Offset = offsetof(FWeaponPPSettings, ParallaxMovementScale);
	static_assert(FWeaponPPSettings_ParallaxMovementScale_Offset == 0x70, "FWeaponPPSettings::ParallaxMovementScale offset is not 70");
	auto constexpr FWeaponPPSettings_ParallaxRadiusScale_Offset = offsetof(FWeaponPPSettings, ParallaxRadiusScale);
	static_assert(FWeaponPPSettings_ParallaxRadiusScale_Offset == 0x74, "FWeaponPPSettings::ParallaxRadiusScale offset is not 74");
	auto constexpr FWeaponPPSettings_BloomIntensity_Offset = offsetof(FWeaponPPSettings, BloomIntensity);
	static_assert(FWeaponPPSettings_BloomIntensity_Offset == 0x78, "FWeaponPPSettings::BloomIntensity offset is not 78");
	auto constexpr FWeaponPPSettings_NearClipStaticOffset_Offset = offsetof(FWeaponPPSettings, NearClipStaticOffset);
	static_assert(FWeaponPPSettings_NearClipStaticOffset_Offset == 0x7c, "FWeaponPPSettings::NearClipStaticOffset offset is not 7c");
	auto constexpr FWeaponPPSettings_NearClipMinClamp_Offset = offsetof(FWeaponPPSettings, NearClipMinClamp);
	static_assert(FWeaponPPSettings_NearClipMinClamp_Offset == 0x80, "FWeaponPPSettings::NearClipMinClamp offset is not 80");
	auto constexpr FWeaponPPSettings_WeaponCycleCameraOffset_Offset = offsetof(FWeaponPPSettings, WeaponCycleCameraOffset);
	static_assert(FWeaponPPSettings_WeaponCycleCameraOffset_Offset == 0x84, "FWeaponPPSettings::WeaponCycleCameraOffset offset is not 84");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
