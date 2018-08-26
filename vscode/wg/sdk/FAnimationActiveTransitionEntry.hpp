#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimationActiveTransitionEntry // Size: 0xD0
{
public:
    uint8_t UnknownData0[0x90];
    ExternalPtr<struct UBlendProfile> BlendProfile; /* Ofs: 0x90 Size: 0x8 ObjectProperty Engine.AnimationActiveTransitionEntry.BlendProfile */
    uint8_t UnknownData98[0x38];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimationActiveTransitionEntry = sizeof(FAnimationActiveTransitionEntry); // 208
    static_assert(sizeof(FAnimationActiveTransitionEntry) == 0xD0, "Size of FAnimationActiveTransitionEntry is not correct.");
	auto constexpr FAnimationActiveTransitionEntry_BlendProfile_Offset = offsetof(FAnimationActiveTransitionEntry, BlendProfile);
	static_assert(FAnimationActiveTransitionEntry_BlendProfile_Offset == 0x90, "FAnimationActiveTransitionEntry::BlendProfile offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
