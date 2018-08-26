#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundClassAdjuster // Size: 0x18
{
public:
    ExternalPtr<struct USoundClass> SoundClassObject; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.SoundClassAdjuster.SoundClassObject */
    float VolumeAdjuster; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.SoundClassAdjuster.VolumeAdjuster */
    float PitchAdjuster; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.SoundClassAdjuster.PitchAdjuster */
    bool bApplyToChildren; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.SoundClassAdjuster.bApplyToChildren */
    uint8_t UnknownData11[0x3];
    float VoiceCenterChannelVolumeAdjuster; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.SoundClassAdjuster.VoiceCenterChannelVolumeAdjuster */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundClassAdjuster = sizeof(FSoundClassAdjuster); // 24
    static_assert(sizeof(FSoundClassAdjuster) == 0x18, "Size of FSoundClassAdjuster is not correct.");
	auto constexpr FSoundClassAdjuster_SoundClassObject_Offset = offsetof(FSoundClassAdjuster, SoundClassObject);
	static_assert(FSoundClassAdjuster_SoundClassObject_Offset == 0x0, "FSoundClassAdjuster::SoundClassObject offset is not 0");
	auto constexpr FSoundClassAdjuster_VolumeAdjuster_Offset = offsetof(FSoundClassAdjuster, VolumeAdjuster);
	static_assert(FSoundClassAdjuster_VolumeAdjuster_Offset == 0x8, "FSoundClassAdjuster::VolumeAdjuster offset is not 8");
	auto constexpr FSoundClassAdjuster_PitchAdjuster_Offset = offsetof(FSoundClassAdjuster, PitchAdjuster);
	static_assert(FSoundClassAdjuster_PitchAdjuster_Offset == 0xc, "FSoundClassAdjuster::PitchAdjuster offset is not c");
	auto constexpr FSoundClassAdjuster_VoiceCenterChannelVolumeAdjuster_Offset = offsetof(FSoundClassAdjuster, VoiceCenterChannelVolumeAdjuster);
	static_assert(FSoundClassAdjuster_VoiceCenterChannelVolumeAdjuster_Offset == 0x14, "FSoundClassAdjuster::VoiceCenterChannelVolumeAdjuster offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
