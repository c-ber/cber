#pragma once
#include "FAnimTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSlotAnimationTrack // Size: 0x18
{
public:
    FName SlotName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.SlotAnimationTrack.SlotName */
    FAnimTrack AnimTrack; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.SlotAnimationTrack.AnimTrack */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSlotAnimationTrack = sizeof(FSlotAnimationTrack); // 24
    static_assert(sizeof(FSlotAnimationTrack) == 0x18, "Size of FSlotAnimationTrack is not correct.");
	auto constexpr FSlotAnimationTrack_SlotName_Offset = offsetof(FSlotAnimationTrack, SlotName);
	static_assert(FSlotAnimationTrack_SlotName_Offset == 0x0, "FSlotAnimationTrack::SlotName offset is not 0");
	auto constexpr FSlotAnimationTrack_AnimTrack_Offset = offsetof(FSlotAnimationTrack, AnimTrack);
	static_assert(FSlotAnimationTrack_AnimTrack_Offset == 0x8, "FSlotAnimationTrack::AnimTrack offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
