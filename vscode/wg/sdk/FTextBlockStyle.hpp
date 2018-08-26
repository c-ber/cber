#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTextBlockStyle // Size: 0x208
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateFontInfo Font; /* Ofs: 0x8 Size: 0x68 StructProperty SlateCore.TextBlockStyle.Font */
    FSlateColor ColorAndOpacity; /* Ofs: 0x70 Size: 0x28 StructProperty SlateCore.TextBlockStyle.ColorAndOpacity */
    FVector2D ShadowOffset; /* Ofs: 0x98 Size: 0x8 StructProperty SlateCore.TextBlockStyle.ShadowOffset */
    FLinearColor ShadowColorAndOpacity; /* Ofs: 0xA0 Size: 0x10 StructProperty SlateCore.TextBlockStyle.ShadowColorAndOpacity */
    FSlateColor SelectedBackgroundColor; /* Ofs: 0xB0 Size: 0x28 StructProperty SlateCore.TextBlockStyle.SelectedBackgroundColor */
    FLinearColor HighlightColor; /* Ofs: 0xD8 Size: 0x10 StructProperty SlateCore.TextBlockStyle.HighlightColor */
    FSlateBrush HighlightShape; /* Ofs: 0xE8 Size: 0x90 StructProperty SlateCore.TextBlockStyle.HighlightShape */
    FSlateBrush UnderlineBrush; /* Ofs: 0x178 Size: 0x90 StructProperty SlateCore.TextBlockStyle.UnderlineBrush */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTextBlockStyle = sizeof(FTextBlockStyle); // 520
    static_assert(sizeof(FTextBlockStyle) == 0x208, "Size of FTextBlockStyle is not correct.");
	auto constexpr FTextBlockStyle_Font_Offset = offsetof(FTextBlockStyle, Font);
	static_assert(FTextBlockStyle_Font_Offset == 0x8, "FTextBlockStyle::Font offset is not 8");
	auto constexpr FTextBlockStyle_ColorAndOpacity_Offset = offsetof(FTextBlockStyle, ColorAndOpacity);
	static_assert(FTextBlockStyle_ColorAndOpacity_Offset == 0x70, "FTextBlockStyle::ColorAndOpacity offset is not 70");
	auto constexpr FTextBlockStyle_ShadowOffset_Offset = offsetof(FTextBlockStyle, ShadowOffset);
	static_assert(FTextBlockStyle_ShadowOffset_Offset == 0x98, "FTextBlockStyle::ShadowOffset offset is not 98");
	auto constexpr FTextBlockStyle_ShadowColorAndOpacity_Offset = offsetof(FTextBlockStyle, ShadowColorAndOpacity);
	static_assert(FTextBlockStyle_ShadowColorAndOpacity_Offset == 0xa0, "FTextBlockStyle::ShadowColorAndOpacity offset is not a0");
	auto constexpr FTextBlockStyle_SelectedBackgroundColor_Offset = offsetof(FTextBlockStyle, SelectedBackgroundColor);
	static_assert(FTextBlockStyle_SelectedBackgroundColor_Offset == 0xb0, "FTextBlockStyle::SelectedBackgroundColor offset is not b0");
	auto constexpr FTextBlockStyle_HighlightColor_Offset = offsetof(FTextBlockStyle, HighlightColor);
	static_assert(FTextBlockStyle_HighlightColor_Offset == 0xd8, "FTextBlockStyle::HighlightColor offset is not d8");
	auto constexpr FTextBlockStyle_HighlightShape_Offset = offsetof(FTextBlockStyle, HighlightShape);
	static_assert(FTextBlockStyle_HighlightShape_Offset == 0xe8, "FTextBlockStyle::HighlightShape offset is not e8");
	auto constexpr FTextBlockStyle_UnderlineBrush_Offset = offsetof(FTextBlockStyle, UnderlineBrush);
	static_assert(FTextBlockStyle_UnderlineBrush_Offset == 0x178, "FTextBlockStyle::UnderlineBrush offset is not 178");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
