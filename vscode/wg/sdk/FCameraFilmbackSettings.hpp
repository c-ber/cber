#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCameraFilmbackSettings // Size: 0xC
{
public:
    float SensorWidth; /* Ofs: 0x0 Size: 0x4 FloatProperty CinematicCamera.CameraFilmbackSettings.SensorWidth */
    float SensorHeight; /* Ofs: 0x4 Size: 0x4 FloatProperty CinematicCamera.CameraFilmbackSettings.SensorHeight */
    float SensorAspectRatio; /* Ofs: 0x8 Size: 0x4 FloatProperty CinematicCamera.CameraFilmbackSettings.SensorAspectRatio */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCameraFilmbackSettings = sizeof(FCameraFilmbackSettings); // 12
    static_assert(sizeof(FCameraFilmbackSettings) == 0xC, "Size of FCameraFilmbackSettings is not correct.");
	auto constexpr FCameraFilmbackSettings_SensorWidth_Offset = offsetof(FCameraFilmbackSettings, SensorWidth);
	static_assert(FCameraFilmbackSettings_SensorWidth_Offset == 0x0, "FCameraFilmbackSettings::SensorWidth offset is not 0");
	auto constexpr FCameraFilmbackSettings_SensorHeight_Offset = offsetof(FCameraFilmbackSettings, SensorHeight);
	static_assert(FCameraFilmbackSettings_SensorHeight_Offset == 0x4, "FCameraFilmbackSettings::SensorHeight offset is not 4");
	auto constexpr FCameraFilmbackSettings_SensorAspectRatio_Offset = offsetof(FCameraFilmbackSettings, SensorAspectRatio);
	static_assert(FCameraFilmbackSettings_SensorAspectRatio_Offset == 0x8, "FCameraFilmbackSettings::SensorAspectRatio offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
