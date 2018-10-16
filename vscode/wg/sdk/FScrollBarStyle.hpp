#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScrollBarStyle // Size: 0x518
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush HorizontalBackgroundImage; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.HorizontalBackgroundImage */
    FSlateBrush VerticalBackgroundImage; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.VerticalBackgroundImage */
    FSlateBrush VerticalTopSlotImage; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.VerticalTopSlotImage */
    FSlateBrush HorizontalTopSlotImage; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.HorizontalTopSlotImage */
    FSlateBrush VerticalBottomSlotImage; /* Ofs: 0x248 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.VerticalBottomSlotImage */
    FSlateBrush HorizontalBottomSlotImage; /* Ofs: 0x2D8 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.HorizontalBottomSlotImage */
    FSlateBrush NormalThumbImage; /* Ofs: 0x368 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.NormalThumbImage */
    FSlateBrush HoveredThumbImage; /* Ofs: 0x3F8 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.HoveredThumbImage */
    FSlateBrush DraggedThumbImage; /* Ofs: 0x488 Size: 0x90 StructProperty SlateCore.ScrollBarStyle.DraggedThumbImage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScrollBarStyle = sizeof(FScrollBarStyle); // 1304
    static_assert(sizeof(FScrollBarStyle) == 0x518, "Size of FScrollBarStyle is not correct.");
	auto constexpr FScrollBarStyle_HorizontalBackgroundImage_Offset = offsetof(FScrollBarStyle, HorizontalBackgroundImage);
	static_assert(FScrollBarStyle_HorizontalBackgroundImage_Offset == 0x8, "FScrollBarStyle::HorizontalBackgroundImage offset is not 8");
	auto constexpr FScrollBarStyle_VerticalBackgroundImage_Offset = offsetof(FScrollBarStyle, VerticalBackgroundImage);
	static_assert(FScrollBarStyle_VerticalBackgroundImage_Offset == 0x98, "FScrollBarStyle::VerticalBackgroundImage offset is not 98");
	auto constexpr FScrollBarStyle_VerticalTopSlotImage_Offset = offsetof(FScrollBarStyle, VerticalTopSlotImage);
	static_assert(FScrollBarStyle_VerticalTopSlotImage_Offset == 0x128, "FScrollBarStyle::VerticalTopSlotImage offset is not 128");
	auto constexpr FScrollBarStyle_HorizontalTopSlotImage_Offset = offsetof(FScrollBarStyle, HorizontalTopSlotImage);
	static_assert(FScrollBarStyle_HorizontalTopSlotImage_Offset == 0x1b8, "FScrollBarStyle::HorizontalTopSlotImage offset is not 1b8");
	auto constexpr FScrollBarStyle_VerticalBottomSlotImage_Offset = offsetof(FScrollBarStyle, VerticalBottomSlotImage);
	static_assert(FScrollBarStyle_VerticalBottomSlotImage_Offset == 0x248, "FScrollBarStyle::VerticalBottomSlotImage offset is not 248");
	auto constexpr FScrollBarStyle_HorizontalBottomSlotImage_Offset = offsetof(FScrollBarStyle, HorizontalBottomSlotImage);
	static_assert(FScrollBarStyle_HorizontalBottomSlotImage_Offset == 0x2d8, "FScrollBarStyle::HorizontalBottomSlotImage offset is not 2d8");
	auto constexpr FScrollBarStyle_NormalThumbImage_Offset = offsetof(FScrollBarStyle, NormalThumbImage);
	static_assert(FScrollBarStyle_NormalThumbImage_Offset == 0x368, "FScrollBarStyle::NormalThumbImage offset is not 368");
	auto constexpr FScrollBarStyle_HoveredThumbImage_Offset = offsetof(FScrollBarStyle, HoveredThumbImage);
	static_assert(FScrollBarStyle_HoveredThumbImage_Offset == 0x3f8, "FScrollBarStyle::HoveredThumbImage offset is not 3f8");
	auto constexpr FScrollBarStyle_DraggedThumbImage_Offset = offsetof(FScrollBarStyle, DraggedThumbImage);
	static_assert(FScrollBarStyle_DraggedThumbImage_Offset == 0x488, "FScrollBarStyle::DraggedThumbImage offset is not 488");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
