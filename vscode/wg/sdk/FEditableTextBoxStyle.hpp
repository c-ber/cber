#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"
#include "FMargin.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateColor.hpp"
#include "FScrollBarStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEditableTextBoxStyle // Size: 0x870
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush BackgroundImageNormal; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.EditableTextBoxStyle.BackgroundImageNormal */
    FSlateBrush BackgroundImageHovered; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.EditableTextBoxStyle.BackgroundImageHovered */
    FSlateBrush BackgroundImageFocused; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.EditableTextBoxStyle.BackgroundImageFocused */
    FSlateBrush BackgroundImageReadOnly; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.EditableTextBoxStyle.BackgroundImageReadOnly */
    FMargin Padding; /* Ofs: 0x248 Size: 0x10 StructProperty SlateCore.EditableTextBoxStyle.Padding */
    FSlateFontInfo Font; /* Ofs: 0x258 Size: 0x68 StructProperty SlateCore.EditableTextBoxStyle.Font */
    FSlateColor ForegroundColor; /* Ofs: 0x2C0 Size: 0x28 StructProperty SlateCore.EditableTextBoxStyle.ForegroundColor */
    FSlateColor BackgroundColor; /* Ofs: 0x2E8 Size: 0x28 StructProperty SlateCore.EditableTextBoxStyle.BackgroundColor */
    FSlateColor ReadOnlyForegroundColor; /* Ofs: 0x310 Size: 0x28 StructProperty SlateCore.EditableTextBoxStyle.ReadOnlyForegroundColor */
    FMargin HScrollBarPadding; /* Ofs: 0x338 Size: 0x10 StructProperty SlateCore.EditableTextBoxStyle.HScrollBarPadding */
    FMargin VScrollBarPadding; /* Ofs: 0x348 Size: 0x10 StructProperty SlateCore.EditableTextBoxStyle.VScrollBarPadding */
    FScrollBarStyle ScrollBarStyle; /* Ofs: 0x358 Size: 0x518 StructProperty SlateCore.EditableTextBoxStyle.ScrollBarStyle */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEditableTextBoxStyle = sizeof(FEditableTextBoxStyle); // 2160
    static_assert(sizeof(FEditableTextBoxStyle) == 0x870, "Size of FEditableTextBoxStyle is not correct.");
	auto constexpr FEditableTextBoxStyle_BackgroundImageNormal_Offset = offsetof(FEditableTextBoxStyle, BackgroundImageNormal);
	static_assert(FEditableTextBoxStyle_BackgroundImageNormal_Offset == 0x8, "FEditableTextBoxStyle::BackgroundImageNormal offset is not 8");
	auto constexpr FEditableTextBoxStyle_BackgroundImageHovered_Offset = offsetof(FEditableTextBoxStyle, BackgroundImageHovered);
	static_assert(FEditableTextBoxStyle_BackgroundImageHovered_Offset == 0x98, "FEditableTextBoxStyle::BackgroundImageHovered offset is not 98");
	auto constexpr FEditableTextBoxStyle_BackgroundImageFocused_Offset = offsetof(FEditableTextBoxStyle, BackgroundImageFocused);
	static_assert(FEditableTextBoxStyle_BackgroundImageFocused_Offset == 0x128, "FEditableTextBoxStyle::BackgroundImageFocused offset is not 128");
	auto constexpr FEditableTextBoxStyle_BackgroundImageReadOnly_Offset = offsetof(FEditableTextBoxStyle, BackgroundImageReadOnly);
	static_assert(FEditableTextBoxStyle_BackgroundImageReadOnly_Offset == 0x1b8, "FEditableTextBoxStyle::BackgroundImageReadOnly offset is not 1b8");
	auto constexpr FEditableTextBoxStyle_Padding_Offset = offsetof(FEditableTextBoxStyle, Padding);
	static_assert(FEditableTextBoxStyle_Padding_Offset == 0x248, "FEditableTextBoxStyle::Padding offset is not 248");
	auto constexpr FEditableTextBoxStyle_Font_Offset = offsetof(FEditableTextBoxStyle, Font);
	static_assert(FEditableTextBoxStyle_Font_Offset == 0x258, "FEditableTextBoxStyle::Font offset is not 258");
	auto constexpr FEditableTextBoxStyle_ForegroundColor_Offset = offsetof(FEditableTextBoxStyle, ForegroundColor);
	static_assert(FEditableTextBoxStyle_ForegroundColor_Offset == 0x2c0, "FEditableTextBoxStyle::ForegroundColor offset is not 2c0");
	auto constexpr FEditableTextBoxStyle_BackgroundColor_Offset = offsetof(FEditableTextBoxStyle, BackgroundColor);
	static_assert(FEditableTextBoxStyle_BackgroundColor_Offset == 0x2e8, "FEditableTextBoxStyle::BackgroundColor offset is not 2e8");
	auto constexpr FEditableTextBoxStyle_ReadOnlyForegroundColor_Offset = offsetof(FEditableTextBoxStyle, ReadOnlyForegroundColor);
	static_assert(FEditableTextBoxStyle_ReadOnlyForegroundColor_Offset == 0x310, "FEditableTextBoxStyle::ReadOnlyForegroundColor offset is not 310");
	auto constexpr FEditableTextBoxStyle_HScrollBarPadding_Offset = offsetof(FEditableTextBoxStyle, HScrollBarPadding);
	static_assert(FEditableTextBoxStyle_HScrollBarPadding_Offset == 0x338, "FEditableTextBoxStyle::HScrollBarPadding offset is not 338");
	auto constexpr FEditableTextBoxStyle_VScrollBarPadding_Offset = offsetof(FEditableTextBoxStyle, VScrollBarPadding);
	static_assert(FEditableTextBoxStyle_VScrollBarPadding_Offset == 0x348, "FEditableTextBoxStyle::VScrollBarPadding offset is not 348");
	auto constexpr FEditableTextBoxStyle_ScrollBarStyle_Offset = offsetof(FEditableTextBoxStyle, ScrollBarStyle);
	static_assert(FEditableTextBoxStyle_ScrollBarStyle_Offset == 0x358, "FEditableTextBoxStyle::ScrollBarStyle offset is not 358");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
