#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScrollBorderStyle // Size: 0x128
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush TopShadowBrush; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.ScrollBorderStyle.TopShadowBrush */
    FSlateBrush BottomShadowBrush; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.ScrollBorderStyle.BottomShadowBrush */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScrollBorderStyle = sizeof(FScrollBorderStyle); // 296
    static_assert(sizeof(FScrollBorderStyle) == 0x128, "Size of FScrollBorderStyle is not correct.");
	auto constexpr FScrollBorderStyle_TopShadowBrush_Offset = offsetof(FScrollBorderStyle, TopShadowBrush);
	static_assert(FScrollBorderStyle_TopShadowBrush_Offset == 0x8, "FScrollBorderStyle::TopShadowBrush offset is not 8");
	auto constexpr FScrollBorderStyle_BottomShadowBrush_Offset = offsetof(FScrollBorderStyle, BottomShadowBrush);
	static_assert(FScrollBorderStyle_BottomShadowBrush_Offset == 0x98, "FScrollBorderStyle::BottomShadowBrush offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
