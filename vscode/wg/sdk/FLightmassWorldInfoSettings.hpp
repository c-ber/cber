#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightmassWorldInfoSettings // Size: 0x44
{
public:
    float StaticLightingLevelScale; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.StaticLightingLevelScale */
    int32_t NumIndirectLightingBounces; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.LightmassWorldInfoSettings.NumIndirectLightingBounces */
    float IndirectLightingQuality; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.IndirectLightingQuality */
    float IndirectLightingSmoothness; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.IndirectLightingSmoothness */
    FColor EnvironmentColor; /* Ofs: 0x10 Size: 0x4 StructProperty Engine.LightmassWorldInfoSettings.EnvironmentColor */
    float EnvironmentIntensity; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.EnvironmentIntensity */
    float EmissiveBoost; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.EmissiveBoost */
    float DiffuseBoost; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.DiffuseBoost */
    bool bUseAmbientOcclusion : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassWorldInfoSettings.bUseAmbientOcclusion */
    bool bGenerateAmbientOcclusionMaterialMask : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 02 BoolProperty Engine.LightmassWorldInfoSettings.bGenerateAmbientOcclusionMaterialMask */
    uint8_t UnknownData21[0x3];
    float DirectIlluminationOcclusionFraction; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.DirectIlluminationOcclusionFraction */
    float IndirectIlluminationOcclusionFraction; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.IndirectIlluminationOcclusionFraction */
    float OcclusionExponent; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.OcclusionExponent */
    float FullyOccludedSamplesFraction; /* Ofs: 0x30 Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.FullyOccludedSamplesFraction */
    float MaxOcclusionDistance; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.MaxOcclusionDistance */
    bool bVisualizeMaterialDiffuse : 1; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassWorldInfoSettings.bVisualizeMaterialDiffuse */
    bool bVisualizeAmbientOcclusion : 1; /* Ofs: 0x38 Size: 0x1 BitMask: 02 BoolProperty Engine.LightmassWorldInfoSettings.bVisualizeAmbientOcclusion */
    uint8_t UnknownData39[0x3];
    float VolumeLightSamplePlacementScale; /* Ofs: 0x3C Size: 0x4 FloatProperty Engine.LightmassWorldInfoSettings.VolumeLightSamplePlacementScale */
    bool bCompressLightmaps; /* Ofs: 0x40 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassWorldInfoSettings.bCompressLightmaps */
    uint8_t UnknownData41[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightmassWorldInfoSettings = sizeof(FLightmassWorldInfoSettings); // 68
    static_assert(sizeof(FLightmassWorldInfoSettings) == 0x44, "Size of FLightmassWorldInfoSettings is not correct.");
	auto constexpr FLightmassWorldInfoSettings_StaticLightingLevelScale_Offset = offsetof(FLightmassWorldInfoSettings, StaticLightingLevelScale);
	static_assert(FLightmassWorldInfoSettings_StaticLightingLevelScale_Offset == 0x0, "FLightmassWorldInfoSettings::StaticLightingLevelScale offset is not 0");
	auto constexpr FLightmassWorldInfoSettings_NumIndirectLightingBounces_Offset = offsetof(FLightmassWorldInfoSettings, NumIndirectLightingBounces);
	static_assert(FLightmassWorldInfoSettings_NumIndirectLightingBounces_Offset == 0x4, "FLightmassWorldInfoSettings::NumIndirectLightingBounces offset is not 4");
	auto constexpr FLightmassWorldInfoSettings_IndirectLightingQuality_Offset = offsetof(FLightmassWorldInfoSettings, IndirectLightingQuality);
	static_assert(FLightmassWorldInfoSettings_IndirectLightingQuality_Offset == 0x8, "FLightmassWorldInfoSettings::IndirectLightingQuality offset is not 8");
	auto constexpr FLightmassWorldInfoSettings_IndirectLightingSmoothness_Offset = offsetof(FLightmassWorldInfoSettings, IndirectLightingSmoothness);
	static_assert(FLightmassWorldInfoSettings_IndirectLightingSmoothness_Offset == 0xc, "FLightmassWorldInfoSettings::IndirectLightingSmoothness offset is not c");
	auto constexpr FLightmassWorldInfoSettings_EnvironmentColor_Offset = offsetof(FLightmassWorldInfoSettings, EnvironmentColor);
	static_assert(FLightmassWorldInfoSettings_EnvironmentColor_Offset == 0x10, "FLightmassWorldInfoSettings::EnvironmentColor offset is not 10");
	auto constexpr FLightmassWorldInfoSettings_EnvironmentIntensity_Offset = offsetof(FLightmassWorldInfoSettings, EnvironmentIntensity);
	static_assert(FLightmassWorldInfoSettings_EnvironmentIntensity_Offset == 0x14, "FLightmassWorldInfoSettings::EnvironmentIntensity offset is not 14");
	auto constexpr FLightmassWorldInfoSettings_EmissiveBoost_Offset = offsetof(FLightmassWorldInfoSettings, EmissiveBoost);
	static_assert(FLightmassWorldInfoSettings_EmissiveBoost_Offset == 0x18, "FLightmassWorldInfoSettings::EmissiveBoost offset is not 18");
	auto constexpr FLightmassWorldInfoSettings_DiffuseBoost_Offset = offsetof(FLightmassWorldInfoSettings, DiffuseBoost);
	static_assert(FLightmassWorldInfoSettings_DiffuseBoost_Offset == 0x1c, "FLightmassWorldInfoSettings::DiffuseBoost offset is not 1c");
	auto constexpr FLightmassWorldInfoSettings_DirectIlluminationOcclusionFraction_Offset = offsetof(FLightmassWorldInfoSettings, DirectIlluminationOcclusionFraction);
	static_assert(FLightmassWorldInfoSettings_DirectIlluminationOcclusionFraction_Offset == 0x24, "FLightmassWorldInfoSettings::DirectIlluminationOcclusionFraction offset is not 24");
	auto constexpr FLightmassWorldInfoSettings_IndirectIlluminationOcclusionFraction_Offset = offsetof(FLightmassWorldInfoSettings, IndirectIlluminationOcclusionFraction);
	static_assert(FLightmassWorldInfoSettings_IndirectIlluminationOcclusionFraction_Offset == 0x28, "FLightmassWorldInfoSettings::IndirectIlluminationOcclusionFraction offset is not 28");
	auto constexpr FLightmassWorldInfoSettings_OcclusionExponent_Offset = offsetof(FLightmassWorldInfoSettings, OcclusionExponent);
	static_assert(FLightmassWorldInfoSettings_OcclusionExponent_Offset == 0x2c, "FLightmassWorldInfoSettings::OcclusionExponent offset is not 2c");
	auto constexpr FLightmassWorldInfoSettings_FullyOccludedSamplesFraction_Offset = offsetof(FLightmassWorldInfoSettings, FullyOccludedSamplesFraction);
	static_assert(FLightmassWorldInfoSettings_FullyOccludedSamplesFraction_Offset == 0x30, "FLightmassWorldInfoSettings::FullyOccludedSamplesFraction offset is not 30");
	auto constexpr FLightmassWorldInfoSettings_MaxOcclusionDistance_Offset = offsetof(FLightmassWorldInfoSettings, MaxOcclusionDistance);
	static_assert(FLightmassWorldInfoSettings_MaxOcclusionDistance_Offset == 0x34, "FLightmassWorldInfoSettings::MaxOcclusionDistance offset is not 34");
	auto constexpr FLightmassWorldInfoSettings_VolumeLightSamplePlacementScale_Offset = offsetof(FLightmassWorldInfoSettings, VolumeLightSamplePlacementScale);
	static_assert(FLightmassWorldInfoSettings_VolumeLightSamplePlacementScale_Offset == 0x3c, "FLightmassWorldInfoSettings::VolumeLightSamplePlacementScale offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
