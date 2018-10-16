#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCameraTrackingFocusSettings // Size: 0x18
{
public:
    ExternalPtr<struct UActor> ActorToTrack; /* Ofs: 0x0 Size: 0x8 ObjectProperty CinematicCamera.CameraTrackingFocusSettings.ActorToTrack */
    FVector RelativeOffset; /* Ofs: 0x8 Size: 0xC StructProperty CinematicCamera.CameraTrackingFocusSettings.RelativeOffset */
    bool bDrawDebugTrackingFocusPoint; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty CinematicCamera.CameraTrackingFocusSettings.bDrawDebugTrackingFocusPoint */
    uint8_t UnknownData15[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCameraTrackingFocusSettings = sizeof(FCameraTrackingFocusSettings); // 24
    static_assert(sizeof(FCameraTrackingFocusSettings) == 0x18, "Size of FCameraTrackingFocusSettings is not correct.");
	auto constexpr FCameraTrackingFocusSettings_ActorToTrack_Offset = offsetof(FCameraTrackingFocusSettings, ActorToTrack);
	static_assert(FCameraTrackingFocusSettings_ActorToTrack_Offset == 0x0, "FCameraTrackingFocusSettings::ActorToTrack offset is not 0");
	auto constexpr FCameraTrackingFocusSettings_RelativeOffset_Offset = offsetof(FCameraTrackingFocusSettings, RelativeOffset);
	static_assert(FCameraTrackingFocusSettings_RelativeOffset_Offset == 0x8, "FCameraTrackingFocusSettings::RelativeOffset offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
