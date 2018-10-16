#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCameraLensSettings // Size: 0x14
{
public:
    float MinFocalLength; /* Ofs: 0x0 Size: 0x4 FloatProperty CinematicCamera.CameraLensSettings.MinFocalLength */
    float MaxFocalLength; /* Ofs: 0x4 Size: 0x4 FloatProperty CinematicCamera.CameraLensSettings.MaxFocalLength */
    float MinFStop; /* Ofs: 0x8 Size: 0x4 FloatProperty CinematicCamera.CameraLensSettings.MinFStop */
    float MaxFStop; /* Ofs: 0xC Size: 0x4 FloatProperty CinematicCamera.CameraLensSettings.MaxFStop */
    float MinimumFocusDistance; /* Ofs: 0x10 Size: 0x4 FloatProperty CinematicCamera.CameraLensSettings.MinimumFocusDistance */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCameraLensSettings = sizeof(FCameraLensSettings); // 20
    static_assert(sizeof(FCameraLensSettings) == 0x14, "Size of FCameraLensSettings is not correct.");
	auto constexpr FCameraLensSettings_MinFocalLength_Offset = offsetof(FCameraLensSettings, MinFocalLength);
	static_assert(FCameraLensSettings_MinFocalLength_Offset == 0x0, "FCameraLensSettings::MinFocalLength offset is not 0");
	auto constexpr FCameraLensSettings_MaxFocalLength_Offset = offsetof(FCameraLensSettings, MaxFocalLength);
	static_assert(FCameraLensSettings_MaxFocalLength_Offset == 0x4, "FCameraLensSettings::MaxFocalLength offset is not 4");
	auto constexpr FCameraLensSettings_MinFStop_Offset = offsetof(FCameraLensSettings, MinFStop);
	static_assert(FCameraLensSettings_MinFStop_Offset == 0x8, "FCameraLensSettings::MinFStop offset is not 8");
	auto constexpr FCameraLensSettings_MaxFStop_Offset = offsetof(FCameraLensSettings, MaxFStop);
	static_assert(FCameraLensSettings_MaxFStop_Offset == 0xc, "FCameraLensSettings::MaxFStop offset is not c");
	auto constexpr FCameraLensSettings_MinimumFocusDistance_Offset = offsetof(FCameraLensSettings, MinimumFocusDistance);
	static_assert(FCameraLensSettings_MinimumFocusDistance_Offset == 0x10, "FCameraLensSettings::MinimumFocusDistance offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
