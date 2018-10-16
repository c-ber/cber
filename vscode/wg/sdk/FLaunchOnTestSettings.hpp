#pragma once
#include "FFilePath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLaunchOnTestSettings // Size: 0x20
{
public:
    FFilePath LaunchOnTestmap; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.LaunchOnTestSettings.LaunchOnTestmap */
    FString DeviceID; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.LaunchOnTestSettings.DeviceID */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLaunchOnTestSettings = sizeof(FLaunchOnTestSettings); // 32
    static_assert(sizeof(FLaunchOnTestSettings) == 0x20, "Size of FLaunchOnTestSettings is not correct.");
	auto constexpr FLaunchOnTestSettings_LaunchOnTestmap_Offset = offsetof(FLaunchOnTestSettings, LaunchOnTestmap);
	static_assert(FLaunchOnTestSettings_LaunchOnTestmap_Offset == 0x0, "FLaunchOnTestSettings::LaunchOnTestmap offset is not 0");
	auto constexpr FLaunchOnTestSettings_DeviceID_Offset = offsetof(FLaunchOnTestSettings, DeviceID);
	static_assert(FLaunchOnTestSettings_DeviceID_Offset == 0x10, "FLaunchOnTestSettings::DeviceID offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
