#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightmassLightSettings // Size: 0xC
{
public:
    float IndirectLightingSaturation; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.LightmassLightSettings.IndirectLightingSaturation */
    float ShadowExponent; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.LightmassLightSettings.ShadowExponent */
    bool bUseAreaShadowsForStationaryLight; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.LightmassLightSettings.bUseAreaShadowsForStationaryLight */
    uint8_t UnknownData9[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightmassLightSettings = sizeof(FLightmassLightSettings); // 12
    static_assert(sizeof(FLightmassLightSettings) == 0xC, "Size of FLightmassLightSettings is not correct.");
	auto constexpr FLightmassLightSettings_IndirectLightingSaturation_Offset = offsetof(FLightmassLightSettings, IndirectLightingSaturation);
	static_assert(FLightmassLightSettings_IndirectLightingSaturation_Offset == 0x0, "FLightmassLightSettings::IndirectLightingSaturation offset is not 0");
	auto constexpr FLightmassLightSettings_ShadowExponent_Offset = offsetof(FLightmassLightSettings, ShadowExponent);
	static_assert(FLightmassLightSettings_ShadowExponent_Offset == 0x4, "FLightmassLightSettings::ShadowExponent offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
