#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FExpandableAreaStyle // Size: 0x130
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush CollapsedImage; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.ExpandableAreaStyle.CollapsedImage */
    FSlateBrush ExpandedImage; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.ExpandableAreaStyle.ExpandedImage */
    float RolloutAnimationSeconds; /* Ofs: 0x128 Size: 0x4 FloatProperty SlateCore.ExpandableAreaStyle.RolloutAnimationSeconds */
    uint8_t UnknownData12C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFExpandableAreaStyle = sizeof(FExpandableAreaStyle); // 304
    static_assert(sizeof(FExpandableAreaStyle) == 0x130, "Size of FExpandableAreaStyle is not correct.");
	auto constexpr FExpandableAreaStyle_CollapsedImage_Offset = offsetof(FExpandableAreaStyle, CollapsedImage);
	static_assert(FExpandableAreaStyle_CollapsedImage_Offset == 0x8, "FExpandableAreaStyle::CollapsedImage offset is not 8");
	auto constexpr FExpandableAreaStyle_ExpandedImage_Offset = offsetof(FExpandableAreaStyle, ExpandedImage);
	static_assert(FExpandableAreaStyle_ExpandedImage_Offset == 0x98, "FExpandableAreaStyle::ExpandedImage offset is not 98");
	auto constexpr FExpandableAreaStyle_RolloutAnimationSeconds_Offset = offsetof(FExpandableAreaStyle, RolloutAnimationSeconds);
	static_assert(FExpandableAreaStyle_RolloutAnimationSeconds_Offset == 0x128, "FExpandableAreaStyle::RolloutAnimationSeconds offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
