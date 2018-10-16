#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"
#include "FMargin.hpp"
#include "FSlateSound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FButtonStyle // Size: 0x2A8
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush Normal; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.ButtonStyle.Normal */
    FSlateBrush Hovered; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.ButtonStyle.Hovered */
    FSlateBrush Pressed; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.ButtonStyle.Pressed */
    FSlateBrush Disabled; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.ButtonStyle.Disabled */
    FMargin NormalPadding; /* Ofs: 0x248 Size: 0x10 StructProperty SlateCore.ButtonStyle.NormalPadding */
    FMargin PressedPadding; /* Ofs: 0x258 Size: 0x10 StructProperty SlateCore.ButtonStyle.PressedPadding */
    FSlateSound PressedSlateSound; /* Ofs: 0x268 Size: 0x18 StructProperty SlateCore.ButtonStyle.PressedSlateSound */
    FSlateSound HoveredSlateSound; /* Ofs: 0x280 Size: 0x18 StructProperty SlateCore.ButtonStyle.HoveredSlateSound */
    FName PressedSound; /* Ofs: 0x298 Size: 0x8 NameProperty SlateCore.ButtonStyle.PressedSound */
    FName HoveredSound; /* Ofs: 0x2A0 Size: 0x8 NameProperty SlateCore.ButtonStyle.HoveredSound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFButtonStyle = sizeof(FButtonStyle); // 680
    static_assert(sizeof(FButtonStyle) == 0x2A8, "Size of FButtonStyle is not correct.");
	auto constexpr FButtonStyle_Normal_Offset = offsetof(FButtonStyle, Normal);
	static_assert(FButtonStyle_Normal_Offset == 0x8, "FButtonStyle::Normal offset is not 8");
	auto constexpr FButtonStyle_Hovered_Offset = offsetof(FButtonStyle, Hovered);
	static_assert(FButtonStyle_Hovered_Offset == 0x98, "FButtonStyle::Hovered offset is not 98");
	auto constexpr FButtonStyle_Pressed_Offset = offsetof(FButtonStyle, Pressed);
	static_assert(FButtonStyle_Pressed_Offset == 0x128, "FButtonStyle::Pressed offset is not 128");
	auto constexpr FButtonStyle_Disabled_Offset = offsetof(FButtonStyle, Disabled);
	static_assert(FButtonStyle_Disabled_Offset == 0x1b8, "FButtonStyle::Disabled offset is not 1b8");
	auto constexpr FButtonStyle_NormalPadding_Offset = offsetof(FButtonStyle, NormalPadding);
	static_assert(FButtonStyle_NormalPadding_Offset == 0x248, "FButtonStyle::NormalPadding offset is not 248");
	auto constexpr FButtonStyle_PressedPadding_Offset = offsetof(FButtonStyle, PressedPadding);
	static_assert(FButtonStyle_PressedPadding_Offset == 0x258, "FButtonStyle::PressedPadding offset is not 258");
	auto constexpr FButtonStyle_PressedSlateSound_Offset = offsetof(FButtonStyle, PressedSlateSound);
	static_assert(FButtonStyle_PressedSlateSound_Offset == 0x268, "FButtonStyle::PressedSlateSound offset is not 268");
	auto constexpr FButtonStyle_HoveredSlateSound_Offset = offsetof(FButtonStyle, HoveredSlateSound);
	static_assert(FButtonStyle_HoveredSlateSound_Offset == 0x280, "FButtonStyle::HoveredSlateSound offset is not 280");
	auto constexpr FButtonStyle_PressedSound_Offset = offsetof(FButtonStyle, PressedSound);
	static_assert(FButtonStyle_PressedSound_Offset == 0x298, "FButtonStyle::PressedSound offset is not 298");
	auto constexpr FButtonStyle_HoveredSound_Offset = offsetof(FButtonStyle, HoveredSound);
	static_assert(FButtonStyle_HoveredSound_Offset == 0x2a0, "FButtonStyle::HoveredSound offset is not 2a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
