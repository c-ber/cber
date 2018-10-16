#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTableColumnHeaderStyle // Size: 0x518
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush SortPrimaryAscendingImage; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.SortPrimaryAscendingImage */
    FSlateBrush SortPrimaryDescendingImage; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.SortPrimaryDescendingImage */
    FSlateBrush SortSecondaryAscendingImage; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.SortSecondaryAscendingImage */
    FSlateBrush SortSecondaryDescendingImage; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.SortSecondaryDescendingImage */
    FSlateBrush NormalBrush; /* Ofs: 0x248 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.NormalBrush */
    FSlateBrush HoveredBrush; /* Ofs: 0x2D8 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.HoveredBrush */
    FSlateBrush MenuDropdownImage; /* Ofs: 0x368 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.MenuDropdownImage */
    FSlateBrush MenuDropdownNormalBorderBrush; /* Ofs: 0x3F8 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.MenuDropdownNormalBorderBrush */
    FSlateBrush MenuDropdownHoveredBorderBrush; /* Ofs: 0x488 Size: 0x90 StructProperty SlateCore.TableColumnHeaderStyle.MenuDropdownHoveredBorderBrush */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTableColumnHeaderStyle = sizeof(FTableColumnHeaderStyle); // 1304
    static_assert(sizeof(FTableColumnHeaderStyle) == 0x518, "Size of FTableColumnHeaderStyle is not correct.");
	auto constexpr FTableColumnHeaderStyle_SortPrimaryAscendingImage_Offset = offsetof(FTableColumnHeaderStyle, SortPrimaryAscendingImage);
	static_assert(FTableColumnHeaderStyle_SortPrimaryAscendingImage_Offset == 0x8, "FTableColumnHeaderStyle::SortPrimaryAscendingImage offset is not 8");
	auto constexpr FTableColumnHeaderStyle_SortPrimaryDescendingImage_Offset = offsetof(FTableColumnHeaderStyle, SortPrimaryDescendingImage);
	static_assert(FTableColumnHeaderStyle_SortPrimaryDescendingImage_Offset == 0x98, "FTableColumnHeaderStyle::SortPrimaryDescendingImage offset is not 98");
	auto constexpr FTableColumnHeaderStyle_SortSecondaryAscendingImage_Offset = offsetof(FTableColumnHeaderStyle, SortSecondaryAscendingImage);
	static_assert(FTableColumnHeaderStyle_SortSecondaryAscendingImage_Offset == 0x128, "FTableColumnHeaderStyle::SortSecondaryAscendingImage offset is not 128");
	auto constexpr FTableColumnHeaderStyle_SortSecondaryDescendingImage_Offset = offsetof(FTableColumnHeaderStyle, SortSecondaryDescendingImage);
	static_assert(FTableColumnHeaderStyle_SortSecondaryDescendingImage_Offset == 0x1b8, "FTableColumnHeaderStyle::SortSecondaryDescendingImage offset is not 1b8");
	auto constexpr FTableColumnHeaderStyle_NormalBrush_Offset = offsetof(FTableColumnHeaderStyle, NormalBrush);
	static_assert(FTableColumnHeaderStyle_NormalBrush_Offset == 0x248, "FTableColumnHeaderStyle::NormalBrush offset is not 248");
	auto constexpr FTableColumnHeaderStyle_HoveredBrush_Offset = offsetof(FTableColumnHeaderStyle, HoveredBrush);
	static_assert(FTableColumnHeaderStyle_HoveredBrush_Offset == 0x2d8, "FTableColumnHeaderStyle::HoveredBrush offset is not 2d8");
	auto constexpr FTableColumnHeaderStyle_MenuDropdownImage_Offset = offsetof(FTableColumnHeaderStyle, MenuDropdownImage);
	static_assert(FTableColumnHeaderStyle_MenuDropdownImage_Offset == 0x368, "FTableColumnHeaderStyle::MenuDropdownImage offset is not 368");
	auto constexpr FTableColumnHeaderStyle_MenuDropdownNormalBorderBrush_Offset = offsetof(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush);
	static_assert(FTableColumnHeaderStyle_MenuDropdownNormalBorderBrush_Offset == 0x3f8, "FTableColumnHeaderStyle::MenuDropdownNormalBorderBrush offset is not 3f8");
	auto constexpr FTableColumnHeaderStyle_MenuDropdownHoveredBorderBrush_Offset = offsetof(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush);
	static_assert(FTableColumnHeaderStyle_MenuDropdownHoveredBorderBrush_Offset == 0x488, "FTableColumnHeaderStyle::MenuDropdownHoveredBorderBrush offset is not 488");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
