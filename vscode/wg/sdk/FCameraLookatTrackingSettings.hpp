#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCameraLookatTrackingSettings // Size: 0x30
{
public:
    bool bEnableLookAtTracking : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty CinematicCamera.CameraLookatTrackingSettings.bEnableLookAtTracking */
    bool bDrawDebugLookAtTrackingPosition : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty CinematicCamera.CameraLookatTrackingSettings.bDrawDebugLookAtTrackingPosition */
    uint8_t UnknownData1[0x3];
    float LookAtTrackingInterpSpeed; /* Ofs: 0x4 Size: 0x4 FloatProperty CinematicCamera.CameraLookatTrackingSettings.LookAtTrackingInterpSpeed */
    uint8_t UnknownData8[0x10];
    ExternalPtr<struct UActor> ActorToTrack; /* Ofs: 0x18 Size: 0x8 ObjectProperty CinematicCamera.CameraLookatTrackingSettings.ActorToTrack */
    FVector RelativeOffset; /* Ofs: 0x20 Size: 0xC StructProperty CinematicCamera.CameraLookatTrackingSettings.RelativeOffset */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCameraLookatTrackingSettings = sizeof(FCameraLookatTrackingSettings); // 48
    static_assert(sizeof(FCameraLookatTrackingSettings) == 0x30, "Size of FCameraLookatTrackingSettings is not correct.");
	auto constexpr FCameraLookatTrackingSettings_LookAtTrackingInterpSpeed_Offset = offsetof(FCameraLookatTrackingSettings, LookAtTrackingInterpSpeed);
	static_assert(FCameraLookatTrackingSettings_LookAtTrackingInterpSpeed_Offset == 0x4, "FCameraLookatTrackingSettings::LookAtTrackingInterpSpeed offset is not 4");
	auto constexpr FCameraLookatTrackingSettings_ActorToTrack_Offset = offsetof(FCameraLookatTrackingSettings, ActorToTrack);
	static_assert(FCameraLookatTrackingSettings_ActorToTrack_Offset == 0x18, "FCameraLookatTrackingSettings::ActorToTrack offset is not 18");
	auto constexpr FCameraLookatTrackingSettings_RelativeOffset_Offset = offsetof(FCameraLookatTrackingSettings, RelativeOffset);
	static_assert(FCameraLookatTrackingSettings_RelativeOffset_Offset == 0x20, "FCameraLookatTrackingSettings::RelativeOffset offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
