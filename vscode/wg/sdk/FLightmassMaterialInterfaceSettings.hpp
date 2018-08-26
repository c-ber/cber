#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightmassMaterialInterfaceSettings // Size: 0x14
{
public:
    bool bCastShadowAsMasked; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassMaterialInterfaceSettings.bCastShadowAsMasked */
    uint8_t UnknownData1[0x3];
    float EmissiveBoost; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.LightmassMaterialInterfaceSettings.EmissiveBoost */
    float DiffuseBoost; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.LightmassMaterialInterfaceSettings.DiffuseBoost */
    float ExportResolutionScale; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.LightmassMaterialInterfaceSettings.ExportResolutionScale */
    bool bOverrideCastShadowAsMasked : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassMaterialInterfaceSettings.bOverrideCastShadowAsMasked */
    bool bOverrideEmissiveBoost : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 02 BoolProperty Engine.LightmassMaterialInterfaceSettings.bOverrideEmissiveBoost */
    bool bOverrideDiffuseBoost : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 04 BoolProperty Engine.LightmassMaterialInterfaceSettings.bOverrideDiffuseBoost */
    bool bOverrideExportResolutionScale : 1; /* Ofs: 0x10 Size: 0x1 BitMask: 08 BoolProperty Engine.LightmassMaterialInterfaceSettings.bOverrideExportResolutionScale */
    uint8_t UnknownData11[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightmassMaterialInterfaceSettings = sizeof(FLightmassMaterialInterfaceSettings); // 20
    static_assert(sizeof(FLightmassMaterialInterfaceSettings) == 0x14, "Size of FLightmassMaterialInterfaceSettings is not correct.");
	auto constexpr FLightmassMaterialInterfaceSettings_EmissiveBoost_Offset = offsetof(FLightmassMaterialInterfaceSettings, EmissiveBoost);
	static_assert(FLightmassMaterialInterfaceSettings_EmissiveBoost_Offset == 0x4, "FLightmassMaterialInterfaceSettings::EmissiveBoost offset is not 4");
	auto constexpr FLightmassMaterialInterfaceSettings_DiffuseBoost_Offset = offsetof(FLightmassMaterialInterfaceSettings, DiffuseBoost);
	static_assert(FLightmassMaterialInterfaceSettings_DiffuseBoost_Offset == 0x8, "FLightmassMaterialInterfaceSettings::DiffuseBoost offset is not 8");
	auto constexpr FLightmassMaterialInterfaceSettings_ExportResolutionScale_Offset = offsetof(FLightmassMaterialInterfaceSettings, ExportResolutionScale);
	static_assert(FLightmassMaterialInterfaceSettings_ExportResolutionScale_Offset == 0xc, "FLightmassMaterialInterfaceSettings::ExportResolutionScale offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
