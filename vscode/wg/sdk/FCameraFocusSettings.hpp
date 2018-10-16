#pragma once
#include "ECameraFocusMethod.hpp"
#include "FCameraTrackingFocusSettings.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCameraFocusSettings // Size: 0x38
{
public:
    TEnumAsByte<enum ECameraFocusMethod> FocusMethod; /* Ofs: 0x0 Size: 0x1 EnumProperty CinematicCamera.CameraFocusSettings.FocusMethod */
    uint8_t UnknownData1[0x3];
    float ManualFocusDistance; /* Ofs: 0x4 Size: 0x4 FloatProperty CinematicCamera.CameraFocusSettings.ManualFocusDistance */
    FCameraTrackingFocusSettings TrackingFocusSettings; /* Ofs: 0x8 Size: 0x18 StructProperty CinematicCamera.CameraFocusSettings.TrackingFocusSettings */
    bool bDrawDebugFocusPlane; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty CinematicCamera.CameraFocusSettings.bDrawDebugFocusPlane */
    uint8_t UnknownData21[0x3];
    FColor DebugFocusPlaneColor; /* Ofs: 0x24 Size: 0x4 StructProperty CinematicCamera.CameraFocusSettings.DebugFocusPlaneColor */
    bool bSmoothFocusChanges; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty CinematicCamera.CameraFocusSettings.bSmoothFocusChanges */
    uint8_t UnknownData29[0x3];
    float FocusSmoothingInterpSpeed; /* Ofs: 0x2C Size: 0x4 FloatProperty CinematicCamera.CameraFocusSettings.FocusSmoothingInterpSpeed */
    float FocusOffset; /* Ofs: 0x30 Size: 0x4 FloatProperty CinematicCamera.CameraFocusSettings.FocusOffset */
    uint8_t UnknownData34[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCameraFocusSettings = sizeof(FCameraFocusSettings); // 56
    static_assert(sizeof(FCameraFocusSettings) == 0x38, "Size of FCameraFocusSettings is not correct.");
	auto constexpr FCameraFocusSettings_FocusMethod_Offset = offsetof(FCameraFocusSettings, FocusMethod);
	static_assert(FCameraFocusSettings_FocusMethod_Offset == 0x0, "FCameraFocusSettings::FocusMethod offset is not 0");
	auto constexpr FCameraFocusSettings_ManualFocusDistance_Offset = offsetof(FCameraFocusSettings, ManualFocusDistance);
	static_assert(FCameraFocusSettings_ManualFocusDistance_Offset == 0x4, "FCameraFocusSettings::ManualFocusDistance offset is not 4");
	auto constexpr FCameraFocusSettings_TrackingFocusSettings_Offset = offsetof(FCameraFocusSettings, TrackingFocusSettings);
	static_assert(FCameraFocusSettings_TrackingFocusSettings_Offset == 0x8, "FCameraFocusSettings::TrackingFocusSettings offset is not 8");
	auto constexpr FCameraFocusSettings_DebugFocusPlaneColor_Offset = offsetof(FCameraFocusSettings, DebugFocusPlaneColor);
	static_assert(FCameraFocusSettings_DebugFocusPlaneColor_Offset == 0x24, "FCameraFocusSettings::DebugFocusPlaneColor offset is not 24");
	auto constexpr FCameraFocusSettings_FocusSmoothingInterpSpeed_Offset = offsetof(FCameraFocusSettings, FocusSmoothingInterpSpeed);
	static_assert(FCameraFocusSettings_FocusSmoothingInterpSpeed_Offset == 0x2c, "FCameraFocusSettings::FocusSmoothingInterpSpeed offset is not 2c");
	auto constexpr FCameraFocusSettings_FocusOffset_Offset = offsetof(FCameraFocusSettings, FocusOffset);
	static_assert(FCameraFocusSettings_FocusOffset_Offset == 0x30, "FCameraFocusSettings::FocusOffset offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
