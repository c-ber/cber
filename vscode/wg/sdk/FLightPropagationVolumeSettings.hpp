#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightPropagationVolumeSettings // Size: 0x40
{
public:
    bool bOverride_LPVIntensity : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVIntensity */
    bool bOverride_LPVDirectionalOcclusionIntensity : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVDirectionalOcclusionIntensity */
    bool bOverride_LPVDirectionalOcclusionRadius : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVDirectionalOcclusionRadius */
    bool bOverride_LPVDiffuseOcclusionExponent : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVDiffuseOcclusionExponent */
    bool bOverride_LPVSpecularOcclusionExponent : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 10 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVSpecularOcclusionExponent */
    bool bOverride_LPVDiffuseOcclusionIntensity : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 20 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVDiffuseOcclusionIntensity */
    bool bOverride_LPVSpecularOcclusionIntensity : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 40 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVSpecularOcclusionIntensity */
    bool bOverride_LPVSize : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 80 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVSize */
    bool bOverride_LPVSecondaryOcclusionIntensity : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVSecondaryOcclusionIntensity */
    bool bOverride_LPVSecondaryBounceIntensity : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 02 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVSecondaryBounceIntensity */
    bool bOverride_LPVGeometryVolumeBias : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 04 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVGeometryVolumeBias */
    bool bOverride_LPVVplInjectionBias : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 08 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVVplInjectionBias */
    bool bOverride_LPVEmissiveInjectionIntensity : 1; /* Ofs: 0x1 Size: 0x1 BitMask: 10 BoolProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.bOverride_LPVEmissiveInjectionIntensity */
    uint8_t UnknownData2[0x2];
    float LPVIntensity; /* Ofs: 0x4 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVIntensity */
    float LPVVplInjectionBias; /* Ofs: 0x8 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVVplInjectionBias */
    float LPVSize; /* Ofs: 0xC Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVSize */
    float LPVSecondaryOcclusionIntensity; /* Ofs: 0x10 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVSecondaryOcclusionIntensity */
    float LPVSecondaryBounceIntensity; /* Ofs: 0x14 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVSecondaryBounceIntensity */
    float LPVGeometryVolumeBias; /* Ofs: 0x18 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVGeometryVolumeBias */
    float LPVEmissiveInjectionIntensity; /* Ofs: 0x1C Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVEmissiveInjectionIntensity */
    float LPVDirectionalOcclusionIntensity; /* Ofs: 0x20 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVDirectionalOcclusionIntensity */
    float LPVDirectionalOcclusionRadius; /* Ofs: 0x24 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVDirectionalOcclusionRadius */
    float LPVDiffuseOcclusionExponent; /* Ofs: 0x28 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVDiffuseOcclusionExponent */
    float LPVSpecularOcclusionExponent; /* Ofs: 0x2C Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVSpecularOcclusionExponent */
    float LPVDiffuseOcclusionIntensity; /* Ofs: 0x30 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVDiffuseOcclusionIntensity */
    float LPVSpecularOcclusionIntensity; /* Ofs: 0x34 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVSpecularOcclusionIntensity */
    float LPVFadeRange; /* Ofs: 0x38 Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVFadeRange */
    float LPVDirectionalOcclusionFadeRange; /* Ofs: 0x3C Size: 0x4 FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeSettings.LPVDirectionalOcclusionFadeRange */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightPropagationVolumeSettings = sizeof(FLightPropagationVolumeSettings); // 64
    static_assert(sizeof(FLightPropagationVolumeSettings) == 0x40, "Size of FLightPropagationVolumeSettings is not correct.");
	auto constexpr FLightPropagationVolumeSettings_LPVIntensity_Offset = offsetof(FLightPropagationVolumeSettings, LPVIntensity);
	static_assert(FLightPropagationVolumeSettings_LPVIntensity_Offset == 0x4, "FLightPropagationVolumeSettings::LPVIntensity offset is not 4");
	auto constexpr FLightPropagationVolumeSettings_LPVVplInjectionBias_Offset = offsetof(FLightPropagationVolumeSettings, LPVVplInjectionBias);
	static_assert(FLightPropagationVolumeSettings_LPVVplInjectionBias_Offset == 0x8, "FLightPropagationVolumeSettings::LPVVplInjectionBias offset is not 8");
	auto constexpr FLightPropagationVolumeSettings_LPVSize_Offset = offsetof(FLightPropagationVolumeSettings, LPVSize);
	static_assert(FLightPropagationVolumeSettings_LPVSize_Offset == 0xc, "FLightPropagationVolumeSettings::LPVSize offset is not c");
	auto constexpr FLightPropagationVolumeSettings_LPVSecondaryOcclusionIntensity_Offset = offsetof(FLightPropagationVolumeSettings, LPVSecondaryOcclusionIntensity);
	static_assert(FLightPropagationVolumeSettings_LPVSecondaryOcclusionIntensity_Offset == 0x10, "FLightPropagationVolumeSettings::LPVSecondaryOcclusionIntensity offset is not 10");
	auto constexpr FLightPropagationVolumeSettings_LPVSecondaryBounceIntensity_Offset = offsetof(FLightPropagationVolumeSettings, LPVSecondaryBounceIntensity);
	static_assert(FLightPropagationVolumeSettings_LPVSecondaryBounceIntensity_Offset == 0x14, "FLightPropagationVolumeSettings::LPVSecondaryBounceIntensity offset is not 14");
	auto constexpr FLightPropagationVolumeSettings_LPVGeometryVolumeBias_Offset = offsetof(FLightPropagationVolumeSettings, LPVGeometryVolumeBias);
	static_assert(FLightPropagationVolumeSettings_LPVGeometryVolumeBias_Offset == 0x18, "FLightPropagationVolumeSettings::LPVGeometryVolumeBias offset is not 18");
	auto constexpr FLightPropagationVolumeSettings_LPVEmissiveInjectionIntensity_Offset = offsetof(FLightPropagationVolumeSettings, LPVEmissiveInjectionIntensity);
	static_assert(FLightPropagationVolumeSettings_LPVEmissiveInjectionIntensity_Offset == 0x1c, "FLightPropagationVolumeSettings::LPVEmissiveInjectionIntensity offset is not 1c");
	auto constexpr FLightPropagationVolumeSettings_LPVDirectionalOcclusionIntensity_Offset = offsetof(FLightPropagationVolumeSettings, LPVDirectionalOcclusionIntensity);
	static_assert(FLightPropagationVolumeSettings_LPVDirectionalOcclusionIntensity_Offset == 0x20, "FLightPropagationVolumeSettings::LPVDirectionalOcclusionIntensity offset is not 20");
	auto constexpr FLightPropagationVolumeSettings_LPVDirectionalOcclusionRadius_Offset = offsetof(FLightPropagationVolumeSettings, LPVDirectionalOcclusionRadius);
	static_assert(FLightPropagationVolumeSettings_LPVDirectionalOcclusionRadius_Offset == 0x24, "FLightPropagationVolumeSettings::LPVDirectionalOcclusionRadius offset is not 24");
	auto constexpr FLightPropagationVolumeSettings_LPVDiffuseOcclusionExponent_Offset = offsetof(FLightPropagationVolumeSettings, LPVDiffuseOcclusionExponent);
	static_assert(FLightPropagationVolumeSettings_LPVDiffuseOcclusionExponent_Offset == 0x28, "FLightPropagationVolumeSettings::LPVDiffuseOcclusionExponent offset is not 28");
	auto constexpr FLightPropagationVolumeSettings_LPVSpecularOcclusionExponent_Offset = offsetof(FLightPropagationVolumeSettings, LPVSpecularOcclusionExponent);
	static_assert(FLightPropagationVolumeSettings_LPVSpecularOcclusionExponent_Offset == 0x2c, "FLightPropagationVolumeSettings::LPVSpecularOcclusionExponent offset is not 2c");
	auto constexpr FLightPropagationVolumeSettings_LPVDiffuseOcclusionIntensity_Offset = offsetof(FLightPropagationVolumeSettings, LPVDiffuseOcclusionIntensity);
	static_assert(FLightPropagationVolumeSettings_LPVDiffuseOcclusionIntensity_Offset == 0x30, "FLightPropagationVolumeSettings::LPVDiffuseOcclusionIntensity offset is not 30");
	auto constexpr FLightPropagationVolumeSettings_LPVSpecularOcclusionIntensity_Offset = offsetof(FLightPropagationVolumeSettings, LPVSpecularOcclusionIntensity);
	static_assert(FLightPropagationVolumeSettings_LPVSpecularOcclusionIntensity_Offset == 0x34, "FLightPropagationVolumeSettings::LPVSpecularOcclusionIntensity offset is not 34");
	auto constexpr FLightPropagationVolumeSettings_LPVFadeRange_Offset = offsetof(FLightPropagationVolumeSettings, LPVFadeRange);
	static_assert(FLightPropagationVolumeSettings_LPVFadeRange_Offset == 0x38, "FLightPropagationVolumeSettings::LPVFadeRange offset is not 38");
	auto constexpr FLightPropagationVolumeSettings_LPVDirectionalOcclusionFadeRange_Offset = offsetof(FLightPropagationVolumeSettings, LPVDirectionalOcclusionFadeRange);
	static_assert(FLightPropagationVolumeSettings_LPVDirectionalOcclusionFadeRange_Offset == 0x3c, "FLightPropagationVolumeSettings::LPVDirectionalOcclusionFadeRange offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
