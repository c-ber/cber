#pragma once
#include "FLightmassLightSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightmassDirectionalLightSettings // Size: 0x10
 : public FLightmassLightSettings // Size: 0xC
{
public:
    float LightSourceAngle; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.LightmassDirectionalLightSettings.LightSourceAngle */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightmassDirectionalLightSettings = sizeof(FLightmassDirectionalLightSettings); // 16
    static_assert(sizeof(FLightmassDirectionalLightSettings) == 0x10, "Size of FLightmassDirectionalLightSettings is not correct.");
	auto constexpr FLightmassDirectionalLightSettings_LightSourceAngle_Offset = offsetof(FLightmassDirectionalLightSettings, LightSourceAngle);
	static_assert(FLightmassDirectionalLightSettings_LightSourceAngle_Offset == 0xc, "FLightmassDirectionalLightSettings::LightSourceAngle offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
