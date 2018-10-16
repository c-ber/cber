#pragma once
#include "EAudioOutputTarget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSoundClassProperties // Size: 0x2C
{
public:
    float Volume; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.SoundClassProperties.Volume */
    float Pitch; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.SoundClassProperties.Pitch */
    float StereoBleed; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.SoundClassProperties.StereoBleed */
    float LFEBleed; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.SoundClassProperties.LFEBleed */
    float VoiceCenterChannelVolume; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.SoundClassProperties.VoiceCenterChannelVolume */
    float RadioFilterVolume; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.SoundClassProperties.RadioFilterVolume */
    float RadioFilterVolumeThreshold; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.SoundClassProperties.RadioFilterVolumeThreshold */
    bool bApplyEffects : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty Engine.SoundClassProperties.bApplyEffects */
    bool bAlwaysPlay : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 02 BoolProperty Engine.SoundClassProperties.bAlwaysPlay */
    bool bIsUISound : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 04 BoolProperty Engine.SoundClassProperties.bIsUISound */
    bool bIsMusic : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 08 BoolProperty Engine.SoundClassProperties.bIsMusic */
    bool bReverb : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 10 BoolProperty Engine.SoundClassProperties.bReverb */
    uint8_t UnknownData1D[0x3];
    float Default2DReverbSendAmount; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.SoundClassProperties.Default2DReverbSendAmount */
    bool bCenterChannelOnly : 1; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty Engine.SoundClassProperties.bCenterChannelOnly */
    bool bApplyAmbientVolumes : 1; /* Ofs: 0x24 Size: 0x1 BitMask: 02 BoolProperty Engine.SoundClassProperties.bApplyAmbientVolumes */
    uint8_t UnknownData25[0x3];
    TEnumAsByte<enum EAudioOutputTarget> OutputTarget; /* Ofs: 0x28 Size: 0x1 ByteProperty Engine.SoundClassProperties.OutputTarget */
    uint8_t UnknownData29[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSoundClassProperties = sizeof(FSoundClassProperties); // 44
    static_assert(sizeof(FSoundClassProperties) == 0x2C, "Size of FSoundClassProperties is not correct.");
	auto constexpr FSoundClassProperties_Volume_Offset = offsetof(FSoundClassProperties, Volume);
	static_assert(FSoundClassProperties_Volume_Offset == 0x0, "FSoundClassProperties::Volume offset is not 0");
	auto constexpr FSoundClassProperties_Pitch_Offset = offsetof(FSoundClassProperties, Pitch);
	static_assert(FSoundClassProperties_Pitch_Offset == 0x4, "FSoundClassProperties::Pitch offset is not 4");
	auto constexpr FSoundClassProperties_StereoBleed_Offset = offsetof(FSoundClassProperties, StereoBleed);
	static_assert(FSoundClassProperties_StereoBleed_Offset == 0x8, "FSoundClassProperties::StereoBleed offset is not 8");
	auto constexpr FSoundClassProperties_LFEBleed_Offset = offsetof(FSoundClassProperties, LFEBleed);
	static_assert(FSoundClassProperties_LFEBleed_Offset == 0xc, "FSoundClassProperties::LFEBleed offset is not c");
	auto constexpr FSoundClassProperties_VoiceCenterChannelVolume_Offset = offsetof(FSoundClassProperties, VoiceCenterChannelVolume);
	static_assert(FSoundClassProperties_VoiceCenterChannelVolume_Offset == 0x10, "FSoundClassProperties::VoiceCenterChannelVolume offset is not 10");
	auto constexpr FSoundClassProperties_RadioFilterVolume_Offset = offsetof(FSoundClassProperties, RadioFilterVolume);
	static_assert(FSoundClassProperties_RadioFilterVolume_Offset == 0x14, "FSoundClassProperties::RadioFilterVolume offset is not 14");
	auto constexpr FSoundClassProperties_RadioFilterVolumeThreshold_Offset = offsetof(FSoundClassProperties, RadioFilterVolumeThreshold);
	static_assert(FSoundClassProperties_RadioFilterVolumeThreshold_Offset == 0x18, "FSoundClassProperties::RadioFilterVolumeThreshold offset is not 18");
	auto constexpr FSoundClassProperties_Default2DReverbSendAmount_Offset = offsetof(FSoundClassProperties, Default2DReverbSendAmount);
	static_assert(FSoundClassProperties_Default2DReverbSendAmount_Offset == 0x20, "FSoundClassProperties::Default2DReverbSendAmount offset is not 20");
	auto constexpr FSoundClassProperties_OutputTarget_Offset = offsetof(FSoundClassProperties, OutputTarget);
	static_assert(FSoundClassProperties_OutputTarget_Offset == 0x28, "FSoundClassProperties::OutputTarget offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
