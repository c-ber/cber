#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPassiveSoundMixModifier // Size: 0x10
{
public:
    ExternalPtr<struct USoundMix> SoundMix; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.PassiveSoundMixModifier.SoundMix */
    float MinVolumeThreshold; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.PassiveSoundMixModifier.MinVolumeThreshold */
    float MaxVolumeThreshold; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.PassiveSoundMixModifier.MaxVolumeThreshold */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPassiveSoundMixModifier = sizeof(FPassiveSoundMixModifier); // 16
    static_assert(sizeof(FPassiveSoundMixModifier) == 0x10, "Size of FPassiveSoundMixModifier is not correct.");
	auto constexpr FPassiveSoundMixModifier_SoundMix_Offset = offsetof(FPassiveSoundMixModifier, SoundMix);
	static_assert(FPassiveSoundMixModifier_SoundMix_Offset == 0x0, "FPassiveSoundMixModifier::SoundMix offset is not 0");
	auto constexpr FPassiveSoundMixModifier_MinVolumeThreshold_Offset = offsetof(FPassiveSoundMixModifier, MinVolumeThreshold);
	static_assert(FPassiveSoundMixModifier_MinVolumeThreshold_Offset == 0x8, "FPassiveSoundMixModifier::MinVolumeThreshold offset is not 8");
	auto constexpr FPassiveSoundMixModifier_MaxVolumeThreshold_Offset = offsetof(FPassiveSoundMixModifier, MaxVolumeThreshold);
	static_assert(FPassiveSoundMixModifier_MaxVolumeThreshold_Offset == 0xc, "FPassiveSoundMixModifier::MaxVolumeThreshold offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
