#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FButtonStyle.hpp"
#include "FTextBlockStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWindowStyle // Size: 0x10F0
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FButtonStyle MinimizeButtonStyle; /* Ofs: 0x8 Size: 0x2A8 StructProperty SlateCore.WindowStyle.MinimizeButtonStyle */
    FButtonStyle MaximizeButtonStyle; /* Ofs: 0x2B0 Size: 0x2A8 StructProperty SlateCore.WindowStyle.MaximizeButtonStyle */
    FButtonStyle RestoreButtonStyle; /* Ofs: 0x558 Size: 0x2A8 StructProperty SlateCore.WindowStyle.RestoreButtonStyle */
    FButtonStyle CloseButtonStyle; /* Ofs: 0x800 Size: 0x2A8 StructProperty SlateCore.WindowStyle.CloseButtonStyle */
    FTextBlockStyle TitleTextStyle; /* Ofs: 0xAA8 Size: 0x208 StructProperty SlateCore.WindowStyle.TitleTextStyle */
    FSlateBrush ActiveTitleBrush; /* Ofs: 0xCB0 Size: 0x90 StructProperty SlateCore.WindowStyle.ActiveTitleBrush */
    FSlateBrush InactiveTitleBrush; /* Ofs: 0xD40 Size: 0x90 StructProperty SlateCore.WindowStyle.InactiveTitleBrush */
    FSlateBrush FlashTitleBrush; /* Ofs: 0xDD0 Size: 0x90 StructProperty SlateCore.WindowStyle.FlashTitleBrush */
    FSlateColor BackgroundColor; /* Ofs: 0xE60 Size: 0x28 StructProperty SlateCore.WindowStyle.BackgroundColor */
    FSlateBrush OutlineBrush; /* Ofs: 0xE88 Size: 0x90 StructProperty SlateCore.WindowStyle.OutlineBrush */
    FSlateColor OutlineColor; /* Ofs: 0xF18 Size: 0x28 StructProperty SlateCore.WindowStyle.OutlineColor */
    FSlateBrush BorderBrush; /* Ofs: 0xF40 Size: 0x90 StructProperty SlateCore.WindowStyle.BorderBrush */
    FSlateBrush BackgroundBrush; /* Ofs: 0xFD0 Size: 0x90 StructProperty SlateCore.WindowStyle.BackgroundBrush */
    FSlateBrush ChildBackgroundBrush; /* Ofs: 0x1060 Size: 0x90 StructProperty SlateCore.WindowStyle.ChildBackgroundBrush */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWindowStyle = sizeof(FWindowStyle); // 4336
    static_assert(sizeof(FWindowStyle) == 0x10F0, "Size of FWindowStyle is not correct.");
	auto constexpr FWindowStyle_MinimizeButtonStyle_Offset = offsetof(FWindowStyle, MinimizeButtonStyle);
	static_assert(FWindowStyle_MinimizeButtonStyle_Offset == 0x8, "FWindowStyle::MinimizeButtonStyle offset is not 8");
	auto constexpr FWindowStyle_MaximizeButtonStyle_Offset = offsetof(FWindowStyle, MaximizeButtonStyle);
	static_assert(FWindowStyle_MaximizeButtonStyle_Offset == 0x2b0, "FWindowStyle::MaximizeButtonStyle offset is not 2b0");
	auto constexpr FWindowStyle_RestoreButtonStyle_Offset = offsetof(FWindowStyle, RestoreButtonStyle);
	static_assert(FWindowStyle_RestoreButtonStyle_Offset == 0x558, "FWindowStyle::RestoreButtonStyle offset is not 558");
	auto constexpr FWindowStyle_CloseButtonStyle_Offset = offsetof(FWindowStyle, CloseButtonStyle);
	static_assert(FWindowStyle_CloseButtonStyle_Offset == 0x800, "FWindowStyle::CloseButtonStyle offset is not 800");
	auto constexpr FWindowStyle_TitleTextStyle_Offset = offsetof(FWindowStyle, TitleTextStyle);
	static_assert(FWindowStyle_TitleTextStyle_Offset == 0xaa8, "FWindowStyle::TitleTextStyle offset is not aa8");
	auto constexpr FWindowStyle_ActiveTitleBrush_Offset = offsetof(FWindowStyle, ActiveTitleBrush);
	static_assert(FWindowStyle_ActiveTitleBrush_Offset == 0xcb0, "FWindowStyle::ActiveTitleBrush offset is not cb0");
	auto constexpr FWindowStyle_InactiveTitleBrush_Offset = offsetof(FWindowStyle, InactiveTitleBrush);
	static_assert(FWindowStyle_InactiveTitleBrush_Offset == 0xd40, "FWindowStyle::InactiveTitleBrush offset is not d40");
	auto constexpr FWindowStyle_FlashTitleBrush_Offset = offsetof(FWindowStyle, FlashTitleBrush);
	static_assert(FWindowStyle_FlashTitleBrush_Offset == 0xdd0, "FWindowStyle::FlashTitleBrush offset is not dd0");
	auto constexpr FWindowStyle_BackgroundColor_Offset = offsetof(FWindowStyle, BackgroundColor);
	static_assert(FWindowStyle_BackgroundColor_Offset == 0xe60, "FWindowStyle::BackgroundColor offset is not e60");
	auto constexpr FWindowStyle_OutlineBrush_Offset = offsetof(FWindowStyle, OutlineBrush);
	static_assert(FWindowStyle_OutlineBrush_Offset == 0xe88, "FWindowStyle::OutlineBrush offset is not e88");
	auto constexpr FWindowStyle_OutlineColor_Offset = offsetof(FWindowStyle, OutlineColor);
	static_assert(FWindowStyle_OutlineColor_Offset == 0xf18, "FWindowStyle::OutlineColor offset is not f18");
	auto constexpr FWindowStyle_BorderBrush_Offset = offsetof(FWindowStyle, BorderBrush);
	static_assert(FWindowStyle_BorderBrush_Offset == 0xf40, "FWindowStyle::BorderBrush offset is not f40");
	auto constexpr FWindowStyle_BackgroundBrush_Offset = offsetof(FWindowStyle, BackgroundBrush);
	static_assert(FWindowStyle_BackgroundBrush_Offset == 0xfd0, "FWindowStyle::BackgroundBrush offset is not fd0");
	auto constexpr FWindowStyle_ChildBackgroundBrush_Offset = offsetof(FWindowStyle, ChildBackgroundBrush);
	static_assert(FWindowStyle_ChildBackgroundBrush_Offset == 0x1060, "FWindowStyle::ChildBackgroundBrush offset is not 1060");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
