#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightmassPrimitiveSettings // Size: 0x18
{
public:
    bool bUseTwoSidedLighting : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassPrimitiveSettings.bUseTwoSidedLighting */
    bool bShadowIndirectOnly : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.LightmassPrimitiveSettings.bShadowIndirectOnly */
    bool bUseEmissiveForStaticLighting : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.LightmassPrimitiveSettings.bUseEmissiveForStaticLighting */
    bool bUseVertexNormalForHemisphereGather : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty Engine.LightmassPrimitiveSettings.bUseVertexNormalForHemisphereGather */
    uint8_t UnknownData1[0x3];
    float EmissiveLightFalloffExponent; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.LightmassPrimitiveSettings.EmissiveLightFalloffExponent */
    float EmissiveLightExplicitInfluenceRadius; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.LightmassPrimitiveSettings.EmissiveLightExplicitInfluenceRadius */
    float EmissiveBoost; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.LightmassPrimitiveSettings.EmissiveBoost */
    float DiffuseBoost; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.LightmassPrimitiveSettings.DiffuseBoost */
    float FullyOccludedSamplesFraction; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.LightmassPrimitiveSettings.FullyOccludedSamplesFraction */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightmassPrimitiveSettings = sizeof(FLightmassPrimitiveSettings); // 24
    static_assert(sizeof(FLightmassPrimitiveSettings) == 0x18, "Size of FLightmassPrimitiveSettings is not correct.");
	auto constexpr FLightmassPrimitiveSettings_EmissiveLightFalloffExponent_Offset = offsetof(FLightmassPrimitiveSettings, EmissiveLightFalloffExponent);
	static_assert(FLightmassPrimitiveSettings_EmissiveLightFalloffExponent_Offset == 0x4, "FLightmassPrimitiveSettings::EmissiveLightFalloffExponent offset is not 4");
	auto constexpr FLightmassPrimitiveSettings_EmissiveLightExplicitInfluenceRadius_Offset = offsetof(FLightmassPrimitiveSettings, EmissiveLightExplicitInfluenceRadius);
	static_assert(FLightmassPrimitiveSettings_EmissiveLightExplicitInfluenceRadius_Offset == 0x8, "FLightmassPrimitiveSettings::EmissiveLightExplicitInfluenceRadius offset is not 8");
	auto constexpr FLightmassPrimitiveSettings_EmissiveBoost_Offset = offsetof(FLightmassPrimitiveSettings, EmissiveBoost);
	static_assert(FLightmassPrimitiveSettings_EmissiveBoost_Offset == 0xc, "FLightmassPrimitiveSettings::EmissiveBoost offset is not c");
	auto constexpr FLightmassPrimitiveSettings_DiffuseBoost_Offset = offsetof(FLightmassPrimitiveSettings, DiffuseBoost);
	static_assert(FLightmassPrimitiveSettings_DiffuseBoost_Offset == 0x10, "FLightmassPrimitiveSettings::DiffuseBoost offset is not 10");
	auto constexpr FLightmassPrimitiveSettings_FullyOccludedSamplesFraction_Offset = offsetof(FLightmassPrimitiveSettings, FullyOccludedSamplesFraction);
	static_assert(FLightmassPrimitiveSettings_FullyOccludedSamplesFraction_Offset == 0x14, "FLightmassPrimitiveSettings::FullyOccludedSamplesFraction offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
