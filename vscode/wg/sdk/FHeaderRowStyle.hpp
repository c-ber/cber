#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FTableColumnHeaderStyle.hpp"
#include "FSplitterStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHeaderRowStyle // Size: 0xC18
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FTableColumnHeaderStyle ColumnStyle; /* Ofs: 0x8 Size: 0x518 StructProperty SlateCore.HeaderRowStyle.ColumnStyle */
    FTableColumnHeaderStyle LastColumnStyle; /* Ofs: 0x520 Size: 0x518 StructProperty SlateCore.HeaderRowStyle.LastColumnStyle */
    FSplitterStyle ColumnSplitterStyle; /* Ofs: 0xA38 Size: 0x128 StructProperty SlateCore.HeaderRowStyle.ColumnSplitterStyle */
    FSlateBrush BackgroundBrush; /* Ofs: 0xB60 Size: 0x90 StructProperty SlateCore.HeaderRowStyle.BackgroundBrush */
    FSlateColor ForegroundColor; /* Ofs: 0xBF0 Size: 0x28 StructProperty SlateCore.HeaderRowStyle.ForegroundColor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHeaderRowStyle = sizeof(FHeaderRowStyle); // 3096
    static_assert(sizeof(FHeaderRowStyle) == 0xC18, "Size of FHeaderRowStyle is not correct.");
	auto constexpr FHeaderRowStyle_ColumnStyle_Offset = offsetof(FHeaderRowStyle, ColumnStyle);
	static_assert(FHeaderRowStyle_ColumnStyle_Offset == 0x8, "FHeaderRowStyle::ColumnStyle offset is not 8");
	auto constexpr FHeaderRowStyle_LastColumnStyle_Offset = offsetof(FHeaderRowStyle, LastColumnStyle);
	static_assert(FHeaderRowStyle_LastColumnStyle_Offset == 0x520, "FHeaderRowStyle::LastColumnStyle offset is not 520");
	auto constexpr FHeaderRowStyle_ColumnSplitterStyle_Offset = offsetof(FHeaderRowStyle, ColumnSplitterStyle);
	static_assert(FHeaderRowStyle_ColumnSplitterStyle_Offset == 0xa38, "FHeaderRowStyle::ColumnSplitterStyle offset is not a38");
	auto constexpr FHeaderRowStyle_BackgroundBrush_Offset = offsetof(FHeaderRowStyle, BackgroundBrush);
	static_assert(FHeaderRowStyle_BackgroundBrush_Offset == 0xb60, "FHeaderRowStyle::BackgroundBrush offset is not b60");
	auto constexpr FHeaderRowStyle_ForegroundColor_Offset = offsetof(FHeaderRowStyle, ForegroundColor);
	static_assert(FHeaderRowStyle_ForegroundColor_Offset == 0xbf0, "FHeaderRowStyle::ForegroundColor offset is not bf0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
