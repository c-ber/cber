#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateColor.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEditableTextStyle // Size: 0x248
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateFontInfo Font; /* Ofs: 0x8 Size: 0x68 StructProperty SlateCore.EditableTextStyle.Font */
    FSlateColor ColorAndOpacity; /* Ofs: 0x70 Size: 0x28 StructProperty SlateCore.EditableTextStyle.ColorAndOpacity */
    FSlateBrush BackgroundImageSelected; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.EditableTextStyle.BackgroundImageSelected */
    FSlateBrush BackgroundImageComposing; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.EditableTextStyle.BackgroundImageComposing */
    FSlateBrush CaretImage; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.EditableTextStyle.CaretImage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEditableTextStyle = sizeof(FEditableTextStyle); // 584
    static_assert(sizeof(FEditableTextStyle) == 0x248, "Size of FEditableTextStyle is not correct.");
	auto constexpr FEditableTextStyle_Font_Offset = offsetof(FEditableTextStyle, Font);
	static_assert(FEditableTextStyle_Font_Offset == 0x8, "FEditableTextStyle::Font offset is not 8");
	auto constexpr FEditableTextStyle_ColorAndOpacity_Offset = offsetof(FEditableTextStyle, ColorAndOpacity);
	static_assert(FEditableTextStyle_ColorAndOpacity_Offset == 0x70, "FEditableTextStyle::ColorAndOpacity offset is not 70");
	auto constexpr FEditableTextStyle_BackgroundImageSelected_Offset = offsetof(FEditableTextStyle, BackgroundImageSelected);
	static_assert(FEditableTextStyle_BackgroundImageSelected_Offset == 0x98, "FEditableTextStyle::BackgroundImageSelected offset is not 98");
	auto constexpr FEditableTextStyle_BackgroundImageComposing_Offset = offsetof(FEditableTextStyle, BackgroundImageComposing);
	static_assert(FEditableTextStyle_BackgroundImageComposing_Offset == 0x128, "FEditableTextStyle::BackgroundImageComposing offset is not 128");
	auto constexpr FEditableTextStyle_CaretImage_Offset = offsetof(FEditableTextStyle, CaretImage);
	static_assert(FEditableTextStyle_CaretImage_Offset == 0x1b8, "FEditableTextStyle::CaretImage offset is not 1b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
