#pragma once
#include "ERootMotionFinishVelocityMode.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionFinishVelocitySettings // Size: 0x14
{
public:
    TEnumAsByte<enum ERootMotionFinishVelocityMode> Mode; /* Ofs: 0x0 Size: 0x1 EnumProperty Engine.RootMotionFinishVelocitySettings.Mode */
    uint8_t UnknownData1[0x3];
    FVector SetVelocity; /* Ofs: 0x4 Size: 0xC StructProperty Engine.RootMotionFinishVelocitySettings.SetVelocity */
    float ClampVelocity; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.RootMotionFinishVelocitySettings.ClampVelocity */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionFinishVelocitySettings = sizeof(FRootMotionFinishVelocitySettings); // 20
    static_assert(sizeof(FRootMotionFinishVelocitySettings) == 0x14, "Size of FRootMotionFinishVelocitySettings is not correct.");
	auto constexpr FRootMotionFinishVelocitySettings_Mode_Offset = offsetof(FRootMotionFinishVelocitySettings, Mode);
	static_assert(FRootMotionFinishVelocitySettings_Mode_Offset == 0x0, "FRootMotionFinishVelocitySettings::Mode offset is not 0");
	auto constexpr FRootMotionFinishVelocitySettings_SetVelocity_Offset = offsetof(FRootMotionFinishVelocitySettings, SetVelocity);
	static_assert(FRootMotionFinishVelocitySettings_SetVelocity_Offset == 0x4, "FRootMotionFinishVelocitySettings::SetVelocity offset is not 4");
	auto constexpr FRootMotionFinishVelocitySettings_ClampVelocity_Offset = offsetof(FRootMotionFinishVelocitySettings, ClampVelocity);
	static_assert(FRootMotionFinishVelocitySettings_ClampVelocity_Offset == 0x10, "FRootMotionFinishVelocitySettings::ClampVelocity offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
