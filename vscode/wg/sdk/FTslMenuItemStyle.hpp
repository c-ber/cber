#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslMenuItemStyle // Size: 0x1B8
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush BackgroundBrush; /* Ofs: 0x8 Size: 0x90 StructProperty TslGame.TslMenuItemStyle.BackgroundBrush */
    FSlateBrush LeftArrowImage; /* Ofs: 0x98 Size: 0x90 StructProperty TslGame.TslMenuItemStyle.LeftArrowImage */
    FSlateBrush RightArrowImage; /* Ofs: 0x128 Size: 0x90 StructProperty TslGame.TslMenuItemStyle.RightArrowImage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslMenuItemStyle = sizeof(FTslMenuItemStyle); // 440
    static_assert(sizeof(FTslMenuItemStyle) == 0x1B8, "Size of FTslMenuItemStyle is not correct.");
	auto constexpr FTslMenuItemStyle_BackgroundBrush_Offset = offsetof(FTslMenuItemStyle, BackgroundBrush);
	static_assert(FTslMenuItemStyle_BackgroundBrush_Offset == 0x8, "FTslMenuItemStyle::BackgroundBrush offset is not 8");
	auto constexpr FTslMenuItemStyle_LeftArrowImage_Offset = offsetof(FTslMenuItemStyle, LeftArrowImage);
	static_assert(FTslMenuItemStyle_LeftArrowImage_Offset == 0x98, "FTslMenuItemStyle::LeftArrowImage offset is not 98");
	auto constexpr FTslMenuItemStyle_RightArrowImage_Offset = offsetof(FTslMenuItemStyle, RightArrowImage);
	static_assert(FTslMenuItemStyle_RightArrowImage_Offset == 0x128, "FTslMenuItemStyle::RightArrowImage offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
