#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScrollBoxStyle // Size: 0x248
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush TopShadowBrush; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.ScrollBoxStyle.TopShadowBrush */
    FSlateBrush BottomShadowBrush; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.ScrollBoxStyle.BottomShadowBrush */
    FSlateBrush LeftShadowBrush; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.ScrollBoxStyle.LeftShadowBrush */
    FSlateBrush RightShadowBrush; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.ScrollBoxStyle.RightShadowBrush */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScrollBoxStyle = sizeof(FScrollBoxStyle); // 584
    static_assert(sizeof(FScrollBoxStyle) == 0x248, "Size of FScrollBoxStyle is not correct.");
	auto constexpr FScrollBoxStyle_TopShadowBrush_Offset = offsetof(FScrollBoxStyle, TopShadowBrush);
	static_assert(FScrollBoxStyle_TopShadowBrush_Offset == 0x8, "FScrollBoxStyle::TopShadowBrush offset is not 8");
	auto constexpr FScrollBoxStyle_BottomShadowBrush_Offset = offsetof(FScrollBoxStyle, BottomShadowBrush);
	static_assert(FScrollBoxStyle_BottomShadowBrush_Offset == 0x98, "FScrollBoxStyle::BottomShadowBrush offset is not 98");
	auto constexpr FScrollBoxStyle_LeftShadowBrush_Offset = offsetof(FScrollBoxStyle, LeftShadowBrush);
	static_assert(FScrollBoxStyle_LeftShadowBrush_Offset == 0x128, "FScrollBoxStyle::LeftShadowBrush offset is not 128");
	auto constexpr FScrollBoxStyle_RightShadowBrush_Offset = offsetof(FScrollBoxStyle, RightShadowBrush);
	static_assert(FScrollBoxStyle_RightShadowBrush_Offset == 0x1b8, "FScrollBoxStyle::RightShadowBrush offset is not 1b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
