#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBrightnessConfig // Size: 0x20
{
public:
    ExternalPtr<struct UCurveVector> ReticleBrightnessSettingsCurve; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.BrightnessConfig.ReticleBrightnessSettingsCurve */
    FName ReticleBrightnessParamX; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.BrightnessConfig.ReticleBrightnessParamX */
    FName ReticleBrightnessParamY; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.BrightnessConfig.ReticleBrightnessParamY */
    FName ReticleBrightnessParamZ; /* Ofs: 0x18 Size: 0x8 NameProperty TslGame.BrightnessConfig.ReticleBrightnessParamZ */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBrightnessConfig = sizeof(FBrightnessConfig); // 32
    static_assert(sizeof(FBrightnessConfig) == 0x20, "Size of FBrightnessConfig is not correct.");
	auto constexpr FBrightnessConfig_ReticleBrightnessSettingsCurve_Offset = offsetof(FBrightnessConfig, ReticleBrightnessSettingsCurve);
	static_assert(FBrightnessConfig_ReticleBrightnessSettingsCurve_Offset == 0x0, "FBrightnessConfig::ReticleBrightnessSettingsCurve offset is not 0");
	auto constexpr FBrightnessConfig_ReticleBrightnessParamX_Offset = offsetof(FBrightnessConfig, ReticleBrightnessParamX);
	static_assert(FBrightnessConfig_ReticleBrightnessParamX_Offset == 0x8, "FBrightnessConfig::ReticleBrightnessParamX offset is not 8");
	auto constexpr FBrightnessConfig_ReticleBrightnessParamY_Offset = offsetof(FBrightnessConfig, ReticleBrightnessParamY);
	static_assert(FBrightnessConfig_ReticleBrightnessParamY_Offset == 0x10, "FBrightnessConfig::ReticleBrightnessParamY offset is not 10");
	auto constexpr FBrightnessConfig_ReticleBrightnessParamZ_Offset = offsetof(FBrightnessConfig, ReticleBrightnessParamZ);
	static_assert(FBrightnessConfig_ReticleBrightnessParamZ_Offset == 0x18, "FBrightnessConfig::ReticleBrightnessParamZ offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
