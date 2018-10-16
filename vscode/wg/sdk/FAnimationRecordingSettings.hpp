#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimationRecordingSettings // Size: 0xC
{
public:
    bool bRecordInWorldSpace; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimationRecordingSettings.bRecordInWorldSpace */
    bool bRemoveRootAnimation; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimationRecordingSettings.bRemoveRootAnimation */
    bool bAutoSaveAsset; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimationRecordingSettings.bAutoSaveAsset */
    uint8_t UnknownData3[0x1];
    float SampleRate; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.AnimationRecordingSettings.SampleRate */
    float Length; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.AnimationRecordingSettings.Length */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimationRecordingSettings = sizeof(FAnimationRecordingSettings); // 12
    static_assert(sizeof(FAnimationRecordingSettings) == 0xC, "Size of FAnimationRecordingSettings is not correct.");
	auto constexpr FAnimationRecordingSettings_SampleRate_Offset = offsetof(FAnimationRecordingSettings, SampleRate);
	static_assert(FAnimationRecordingSettings_SampleRate_Offset == 0x4, "FAnimationRecordingSettings::SampleRate offset is not 4");
	auto constexpr FAnimationRecordingSettings_Length_Offset = offsetof(FAnimationRecordingSettings, Length);
	static_assert(FAnimationRecordingSettings_Length_Offset == 0x8, "FAnimationRecordingSettings::Length offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
