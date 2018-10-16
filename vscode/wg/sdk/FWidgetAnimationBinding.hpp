#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWidgetAnimationBinding // Size: 0x28
{
public:
    FName WidgetName; /* Ofs: 0x0 Size: 0x8 NameProperty UMG.WidgetAnimationBinding.WidgetName */
    FName SlotWidgetName; /* Ofs: 0x8 Size: 0x8 NameProperty UMG.WidgetAnimationBinding.SlotWidgetName */
    FGuid AnimationGuid; /* Ofs: 0x10 Size: 0x10 StructProperty UMG.WidgetAnimationBinding.AnimationGuid */
    bool bIsRootWidget; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty UMG.WidgetAnimationBinding.bIsRootWidget */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWidgetAnimationBinding = sizeof(FWidgetAnimationBinding); // 40
    static_assert(sizeof(FWidgetAnimationBinding) == 0x28, "Size of FWidgetAnimationBinding is not correct.");
	auto constexpr FWidgetAnimationBinding_WidgetName_Offset = offsetof(FWidgetAnimationBinding, WidgetName);
	static_assert(FWidgetAnimationBinding_WidgetName_Offset == 0x0, "FWidgetAnimationBinding::WidgetName offset is not 0");
	auto constexpr FWidgetAnimationBinding_SlotWidgetName_Offset = offsetof(FWidgetAnimationBinding, SlotWidgetName);
	static_assert(FWidgetAnimationBinding_SlotWidgetName_Offset == 0x8, "FWidgetAnimationBinding::SlotWidgetName offset is not 8");
	auto constexpr FWidgetAnimationBinding_AnimationGuid_Offset = offsetof(FWidgetAnimationBinding, AnimationGuid);
	static_assert(FWidgetAnimationBinding_AnimationGuid_Offset == 0x10, "FWidgetAnimationBinding::AnimationGuid offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
