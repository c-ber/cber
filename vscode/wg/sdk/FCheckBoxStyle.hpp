#pragma once
#include "FSlateWidgetStyle.hpp"
#include "ESlateCheckBoxType.hpp"
#include "FSlateBrush.hpp"
#include "FMargin.hpp"
#include "FSlateColor.hpp"
#include "FSlateSound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCheckBoxStyle // Size: 0x5E0
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    TEnumAsByte<enum ESlateCheckBoxType> CheckBoxType; /* Ofs: 0x8 Size: 0x1 ByteProperty SlateCore.CheckBoxStyle.CheckBoxType */
    uint8_t UnknownData9[0x7];
    FSlateBrush UncheckedImage; /* Ofs: 0x10 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.UncheckedImage */
    FSlateBrush UncheckedHoveredImage; /* Ofs: 0xA0 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.UncheckedHoveredImage */
    FSlateBrush UncheckedPressedImage; /* Ofs: 0x130 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.UncheckedPressedImage */
    FSlateBrush CheckedImage; /* Ofs: 0x1C0 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.CheckedImage */
    FSlateBrush CheckedHoveredImage; /* Ofs: 0x250 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.CheckedHoveredImage */
    FSlateBrush CheckedPressedImage; /* Ofs: 0x2E0 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.CheckedPressedImage */
    FSlateBrush UndeterminedImage; /* Ofs: 0x370 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.UndeterminedImage */
    FSlateBrush UndeterminedHoveredImage; /* Ofs: 0x400 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.UndeterminedHoveredImage */
    FSlateBrush UndeterminedPressedImage; /* Ofs: 0x490 Size: 0x90 StructProperty SlateCore.CheckBoxStyle.UndeterminedPressedImage */
    FMargin Padding; /* Ofs: 0x520 Size: 0x10 StructProperty SlateCore.CheckBoxStyle.Padding */
    FSlateColor ForegroundColor; /* Ofs: 0x530 Size: 0x28 StructProperty SlateCore.CheckBoxStyle.ForegroundColor */
    FSlateColor BorderBackgroundColor; /* Ofs: 0x558 Size: 0x28 StructProperty SlateCore.CheckBoxStyle.BorderBackgroundColor */
    FSlateSound CheckedSlateSound; /* Ofs: 0x580 Size: 0x18 StructProperty SlateCore.CheckBoxStyle.CheckedSlateSound */
    FSlateSound UncheckedSlateSound; /* Ofs: 0x598 Size: 0x18 StructProperty SlateCore.CheckBoxStyle.UncheckedSlateSound */
    FSlateSound HoveredSlateSound; /* Ofs: 0x5B0 Size: 0x18 StructProperty SlateCore.CheckBoxStyle.HoveredSlateSound */
    FName CheckedSound; /* Ofs: 0x5C8 Size: 0x8 NameProperty SlateCore.CheckBoxStyle.CheckedSound */
    FName UncheckedSound; /* Ofs: 0x5D0 Size: 0x8 NameProperty SlateCore.CheckBoxStyle.UncheckedSound */
    FName HoveredSound; /* Ofs: 0x5D8 Size: 0x8 NameProperty SlateCore.CheckBoxStyle.HoveredSound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCheckBoxStyle = sizeof(FCheckBoxStyle); // 1504
    static_assert(sizeof(FCheckBoxStyle) == 0x5E0, "Size of FCheckBoxStyle is not correct.");
	auto constexpr FCheckBoxStyle_CheckBoxType_Offset = offsetof(FCheckBoxStyle, CheckBoxType);
	static_assert(FCheckBoxStyle_CheckBoxType_Offset == 0x8, "FCheckBoxStyle::CheckBoxType offset is not 8");
	auto constexpr FCheckBoxStyle_UncheckedImage_Offset = offsetof(FCheckBoxStyle, UncheckedImage);
	static_assert(FCheckBoxStyle_UncheckedImage_Offset == 0x10, "FCheckBoxStyle::UncheckedImage offset is not 10");
	auto constexpr FCheckBoxStyle_UncheckedHoveredImage_Offset = offsetof(FCheckBoxStyle, UncheckedHoveredImage);
	static_assert(FCheckBoxStyle_UncheckedHoveredImage_Offset == 0xa0, "FCheckBoxStyle::UncheckedHoveredImage offset is not a0");
	auto constexpr FCheckBoxStyle_UncheckedPressedImage_Offset = offsetof(FCheckBoxStyle, UncheckedPressedImage);
	static_assert(FCheckBoxStyle_UncheckedPressedImage_Offset == 0x130, "FCheckBoxStyle::UncheckedPressedImage offset is not 130");
	auto constexpr FCheckBoxStyle_CheckedImage_Offset = offsetof(FCheckBoxStyle, CheckedImage);
	static_assert(FCheckBoxStyle_CheckedImage_Offset == 0x1c0, "FCheckBoxStyle::CheckedImage offset is not 1c0");
	auto constexpr FCheckBoxStyle_CheckedHoveredImage_Offset = offsetof(FCheckBoxStyle, CheckedHoveredImage);
	static_assert(FCheckBoxStyle_CheckedHoveredImage_Offset == 0x250, "FCheckBoxStyle::CheckedHoveredImage offset is not 250");
	auto constexpr FCheckBoxStyle_CheckedPressedImage_Offset = offsetof(FCheckBoxStyle, CheckedPressedImage);
	static_assert(FCheckBoxStyle_CheckedPressedImage_Offset == 0x2e0, "FCheckBoxStyle::CheckedPressedImage offset is not 2e0");
	auto constexpr FCheckBoxStyle_UndeterminedImage_Offset = offsetof(FCheckBoxStyle, UndeterminedImage);
	static_assert(FCheckBoxStyle_UndeterminedImage_Offset == 0x370, "FCheckBoxStyle::UndeterminedImage offset is not 370");
	auto constexpr FCheckBoxStyle_UndeterminedHoveredImage_Offset = offsetof(FCheckBoxStyle, UndeterminedHoveredImage);
	static_assert(FCheckBoxStyle_UndeterminedHoveredImage_Offset == 0x400, "FCheckBoxStyle::UndeterminedHoveredImage offset is not 400");
	auto constexpr FCheckBoxStyle_UndeterminedPressedImage_Offset = offsetof(FCheckBoxStyle, UndeterminedPressedImage);
	static_assert(FCheckBoxStyle_UndeterminedPressedImage_Offset == 0x490, "FCheckBoxStyle::UndeterminedPressedImage offset is not 490");
	auto constexpr FCheckBoxStyle_Padding_Offset = offsetof(FCheckBoxStyle, Padding);
	static_assert(FCheckBoxStyle_Padding_Offset == 0x520, "FCheckBoxStyle::Padding offset is not 520");
	auto constexpr FCheckBoxStyle_ForegroundColor_Offset = offsetof(FCheckBoxStyle, ForegroundColor);
	static_assert(FCheckBoxStyle_ForegroundColor_Offset == 0x530, "FCheckBoxStyle::ForegroundColor offset is not 530");
	auto constexpr FCheckBoxStyle_BorderBackgroundColor_Offset = offsetof(FCheckBoxStyle, BorderBackgroundColor);
	static_assert(FCheckBoxStyle_BorderBackgroundColor_Offset == 0x558, "FCheckBoxStyle::BorderBackgroundColor offset is not 558");
	auto constexpr FCheckBoxStyle_CheckedSlateSound_Offset = offsetof(FCheckBoxStyle, CheckedSlateSound);
	static_assert(FCheckBoxStyle_CheckedSlateSound_Offset == 0x580, "FCheckBoxStyle::CheckedSlateSound offset is not 580");
	auto constexpr FCheckBoxStyle_UncheckedSlateSound_Offset = offsetof(FCheckBoxStyle, UncheckedSlateSound);
	static_assert(FCheckBoxStyle_UncheckedSlateSound_Offset == 0x598, "FCheckBoxStyle::UncheckedSlateSound offset is not 598");
	auto constexpr FCheckBoxStyle_HoveredSlateSound_Offset = offsetof(FCheckBoxStyle, HoveredSlateSound);
	static_assert(FCheckBoxStyle_HoveredSlateSound_Offset == 0x5b0, "FCheckBoxStyle::HoveredSlateSound offset is not 5b0");
	auto constexpr FCheckBoxStyle_CheckedSound_Offset = offsetof(FCheckBoxStyle, CheckedSound);
	static_assert(FCheckBoxStyle_CheckedSound_Offset == 0x5c8, "FCheckBoxStyle::CheckedSound offset is not 5c8");
	auto constexpr FCheckBoxStyle_UncheckedSound_Offset = offsetof(FCheckBoxStyle, UncheckedSound);
	static_assert(FCheckBoxStyle_UncheckedSound_Offset == 0x5d0, "FCheckBoxStyle::UncheckedSound offset is not 5d0");
	auto constexpr FCheckBoxStyle_HoveredSound_Offset = offsetof(FCheckBoxStyle, HoveredSound);
	static_assert(FCheckBoxStyle_HoveredSound_Offset == 0x5d8, "FCheckBoxStyle::HoveredSound offset is not 5d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
