#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FButtonStyle.hpp"
#include "FSlateBrush.hpp"
#include "FMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FComboButtonStyle // Size: 0x3E0
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FButtonStyle ButtonStyle; /* Ofs: 0x8 Size: 0x2A8 StructProperty SlateCore.ComboButtonStyle.ButtonStyle */
    FSlateBrush DownArrowImage; /* Ofs: 0x2B0 Size: 0x90 StructProperty SlateCore.ComboButtonStyle.DownArrowImage */
    FSlateBrush MenuBorderBrush; /* Ofs: 0x340 Size: 0x90 StructProperty SlateCore.ComboButtonStyle.MenuBorderBrush */
    FMargin MenuBorderPadding; /* Ofs: 0x3D0 Size: 0x10 StructProperty SlateCore.ComboButtonStyle.MenuBorderPadding */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFComboButtonStyle = sizeof(FComboButtonStyle); // 992
    static_assert(sizeof(FComboButtonStyle) == 0x3E0, "Size of FComboButtonStyle is not correct.");
	auto constexpr FComboButtonStyle_ButtonStyle_Offset = offsetof(FComboButtonStyle, ButtonStyle);
	static_assert(FComboButtonStyle_ButtonStyle_Offset == 0x8, "FComboButtonStyle::ButtonStyle offset is not 8");
	auto constexpr FComboButtonStyle_DownArrowImage_Offset = offsetof(FComboButtonStyle, DownArrowImage);
	static_assert(FComboButtonStyle_DownArrowImage_Offset == 0x2b0, "FComboButtonStyle::DownArrowImage offset is not 2b0");
	auto constexpr FComboButtonStyle_MenuBorderBrush_Offset = offsetof(FComboButtonStyle, MenuBorderBrush);
	static_assert(FComboButtonStyle_MenuBorderBrush_Offset == 0x340, "FComboButtonStyle::MenuBorderBrush offset is not 340");
	auto constexpr FComboButtonStyle_MenuBorderPadding_Offset = offsetof(FComboButtonStyle, MenuBorderPadding);
	static_assert(FComboButtonStyle_MenuBorderPadding_Offset == 0x3d0, "FComboButtonStyle::MenuBorderPadding offset is not 3d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
