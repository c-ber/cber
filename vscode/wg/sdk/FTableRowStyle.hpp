#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTableRowStyle // Size: 0x718
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush SelectorFocusedBrush; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.TableRowStyle.SelectorFocusedBrush */
    FSlateBrush ActiveHoveredBrush; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.TableRowStyle.ActiveHoveredBrush */
    FSlateBrush ActiveBrush; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.TableRowStyle.ActiveBrush */
    FSlateBrush InactiveHoveredBrush; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.TableRowStyle.InactiveHoveredBrush */
    FSlateBrush InactiveBrush; /* Ofs: 0x248 Size: 0x90 StructProperty SlateCore.TableRowStyle.InactiveBrush */
    FSlateBrush EvenRowBackgroundHoveredBrush; /* Ofs: 0x2D8 Size: 0x90 StructProperty SlateCore.TableRowStyle.EvenRowBackgroundHoveredBrush */
    FSlateBrush EvenRowBackgroundBrush; /* Ofs: 0x368 Size: 0x90 StructProperty SlateCore.TableRowStyle.EvenRowBackgroundBrush */
    FSlateBrush OddRowBackgroundHoveredBrush; /* Ofs: 0x3F8 Size: 0x90 StructProperty SlateCore.TableRowStyle.OddRowBackgroundHoveredBrush */
    FSlateBrush OddRowBackgroundBrush; /* Ofs: 0x488 Size: 0x90 StructProperty SlateCore.TableRowStyle.OddRowBackgroundBrush */
    FSlateColor TextColor; /* Ofs: 0x518 Size: 0x28 StructProperty SlateCore.TableRowStyle.TextColor */
    FSlateColor SelectedTextColor; /* Ofs: 0x540 Size: 0x28 StructProperty SlateCore.TableRowStyle.SelectedTextColor */
    FSlateBrush DropIndicator_Above; /* Ofs: 0x568 Size: 0x90 StructProperty SlateCore.TableRowStyle.DropIndicator_Above */
    FSlateBrush DropIndicator_Onto; /* Ofs: 0x5F8 Size: 0x90 StructProperty SlateCore.TableRowStyle.DropIndicator_Onto */
    FSlateBrush DropIndicator_Below; /* Ofs: 0x688 Size: 0x90 StructProperty SlateCore.TableRowStyle.DropIndicator_Below */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTableRowStyle = sizeof(FTableRowStyle); // 1816
    static_assert(sizeof(FTableRowStyle) == 0x718, "Size of FTableRowStyle is not correct.");
	auto constexpr FTableRowStyle_SelectorFocusedBrush_Offset = offsetof(FTableRowStyle, SelectorFocusedBrush);
	static_assert(FTableRowStyle_SelectorFocusedBrush_Offset == 0x8, "FTableRowStyle::SelectorFocusedBrush offset is not 8");
	auto constexpr FTableRowStyle_ActiveHoveredBrush_Offset = offsetof(FTableRowStyle, ActiveHoveredBrush);
	static_assert(FTableRowStyle_ActiveHoveredBrush_Offset == 0x98, "FTableRowStyle::ActiveHoveredBrush offset is not 98");
	auto constexpr FTableRowStyle_ActiveBrush_Offset = offsetof(FTableRowStyle, ActiveBrush);
	static_assert(FTableRowStyle_ActiveBrush_Offset == 0x128, "FTableRowStyle::ActiveBrush offset is not 128");
	auto constexpr FTableRowStyle_InactiveHoveredBrush_Offset = offsetof(FTableRowStyle, InactiveHoveredBrush);
	static_assert(FTableRowStyle_InactiveHoveredBrush_Offset == 0x1b8, "FTableRowStyle::InactiveHoveredBrush offset is not 1b8");
	auto constexpr FTableRowStyle_InactiveBrush_Offset = offsetof(FTableRowStyle, InactiveBrush);
	static_assert(FTableRowStyle_InactiveBrush_Offset == 0x248, "FTableRowStyle::InactiveBrush offset is not 248");
	auto constexpr FTableRowStyle_EvenRowBackgroundHoveredBrush_Offset = offsetof(FTableRowStyle, EvenRowBackgroundHoveredBrush);
	static_assert(FTableRowStyle_EvenRowBackgroundHoveredBrush_Offset == 0x2d8, "FTableRowStyle::EvenRowBackgroundHoveredBrush offset is not 2d8");
	auto constexpr FTableRowStyle_EvenRowBackgroundBrush_Offset = offsetof(FTableRowStyle, EvenRowBackgroundBrush);
	static_assert(FTableRowStyle_EvenRowBackgroundBrush_Offset == 0x368, "FTableRowStyle::EvenRowBackgroundBrush offset is not 368");
	auto constexpr FTableRowStyle_OddRowBackgroundHoveredBrush_Offset = offsetof(FTableRowStyle, OddRowBackgroundHoveredBrush);
	static_assert(FTableRowStyle_OddRowBackgroundHoveredBrush_Offset == 0x3f8, "FTableRowStyle::OddRowBackgroundHoveredBrush offset is not 3f8");
	auto constexpr FTableRowStyle_OddRowBackgroundBrush_Offset = offsetof(FTableRowStyle, OddRowBackgroundBrush);
	static_assert(FTableRowStyle_OddRowBackgroundBrush_Offset == 0x488, "FTableRowStyle::OddRowBackgroundBrush offset is not 488");
	auto constexpr FTableRowStyle_TextColor_Offset = offsetof(FTableRowStyle, TextColor);
	static_assert(FTableRowStyle_TextColor_Offset == 0x518, "FTableRowStyle::TextColor offset is not 518");
	auto constexpr FTableRowStyle_SelectedTextColor_Offset = offsetof(FTableRowStyle, SelectedTextColor);
	static_assert(FTableRowStyle_SelectedTextColor_Offset == 0x540, "FTableRowStyle::SelectedTextColor offset is not 540");
	auto constexpr FTableRowStyle_DropIndicator_Above_Offset = offsetof(FTableRowStyle, DropIndicator_Above);
	static_assert(FTableRowStyle_DropIndicator_Above_Offset == 0x568, "FTableRowStyle::DropIndicator_Above offset is not 568");
	auto constexpr FTableRowStyle_DropIndicator_Onto_Offset = offsetof(FTableRowStyle, DropIndicator_Onto);
	static_assert(FTableRowStyle_DropIndicator_Onto_Offset == 0x5f8, "FTableRowStyle::DropIndicator_Onto offset is not 5f8");
	auto constexpr FTableRowStyle_DropIndicator_Below_Offset = offsetof(FTableRowStyle, DropIndicator_Below);
	static_assert(FTableRowStyle_DropIndicator_Below_Offset == 0x688, "FTableRowStyle::DropIndicator_Below offset is not 688");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
