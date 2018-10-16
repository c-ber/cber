#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FButtonStyle.hpp"
#include "FSlateBrush.hpp"
#include "FMargin.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDockTabStyle // Size: 0x6E0
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FButtonStyle CloseButtonStyle; /* Ofs: 0x8 Size: 0x2A8 StructProperty SlateCore.DockTabStyle.CloseButtonStyle */
    FSlateBrush NormalBrush; /* Ofs: 0x2B0 Size: 0x90 StructProperty SlateCore.DockTabStyle.NormalBrush */
    FSlateBrush ActiveBrush; /* Ofs: 0x340 Size: 0x90 StructProperty SlateCore.DockTabStyle.ActiveBrush */
    FSlateBrush ColorOverlayBrush; /* Ofs: 0x3D0 Size: 0x90 StructProperty SlateCore.DockTabStyle.ColorOverlayBrush */
    FSlateBrush ForegroundBrush; /* Ofs: 0x460 Size: 0x90 StructProperty SlateCore.DockTabStyle.ForegroundBrush */
    FSlateBrush HoveredBrush; /* Ofs: 0x4F0 Size: 0x90 StructProperty SlateCore.DockTabStyle.HoveredBrush */
    FSlateBrush ContentAreaBrush; /* Ofs: 0x580 Size: 0x90 StructProperty SlateCore.DockTabStyle.ContentAreaBrush */
    FSlateBrush TabWellBrush; /* Ofs: 0x610 Size: 0x90 StructProperty SlateCore.DockTabStyle.TabWellBrush */
    FMargin TabPadding; /* Ofs: 0x6A0 Size: 0x10 StructProperty SlateCore.DockTabStyle.TabPadding */
    float OverlapWidth; /* Ofs: 0x6B0 Size: 0x4 FloatProperty SlateCore.DockTabStyle.OverlapWidth */
    uint8_t UnknownData6B4[0x4];
    FSlateColor FlashColor; /* Ofs: 0x6B8 Size: 0x28 StructProperty SlateCore.DockTabStyle.FlashColor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDockTabStyle = sizeof(FDockTabStyle); // 1760
    static_assert(sizeof(FDockTabStyle) == 0x6E0, "Size of FDockTabStyle is not correct.");
	auto constexpr FDockTabStyle_CloseButtonStyle_Offset = offsetof(FDockTabStyle, CloseButtonStyle);
	static_assert(FDockTabStyle_CloseButtonStyle_Offset == 0x8, "FDockTabStyle::CloseButtonStyle offset is not 8");
	auto constexpr FDockTabStyle_NormalBrush_Offset = offsetof(FDockTabStyle, NormalBrush);
	static_assert(FDockTabStyle_NormalBrush_Offset == 0x2b0, "FDockTabStyle::NormalBrush offset is not 2b0");
	auto constexpr FDockTabStyle_ActiveBrush_Offset = offsetof(FDockTabStyle, ActiveBrush);
	static_assert(FDockTabStyle_ActiveBrush_Offset == 0x340, "FDockTabStyle::ActiveBrush offset is not 340");
	auto constexpr FDockTabStyle_ColorOverlayBrush_Offset = offsetof(FDockTabStyle, ColorOverlayBrush);
	static_assert(FDockTabStyle_ColorOverlayBrush_Offset == 0x3d0, "FDockTabStyle::ColorOverlayBrush offset is not 3d0");
	auto constexpr FDockTabStyle_ForegroundBrush_Offset = offsetof(FDockTabStyle, ForegroundBrush);
	static_assert(FDockTabStyle_ForegroundBrush_Offset == 0x460, "FDockTabStyle::ForegroundBrush offset is not 460");
	auto constexpr FDockTabStyle_HoveredBrush_Offset = offsetof(FDockTabStyle, HoveredBrush);
	static_assert(FDockTabStyle_HoveredBrush_Offset == 0x4f0, "FDockTabStyle::HoveredBrush offset is not 4f0");
	auto constexpr FDockTabStyle_ContentAreaBrush_Offset = offsetof(FDockTabStyle, ContentAreaBrush);
	static_assert(FDockTabStyle_ContentAreaBrush_Offset == 0x580, "FDockTabStyle::ContentAreaBrush offset is not 580");
	auto constexpr FDockTabStyle_TabWellBrush_Offset = offsetof(FDockTabStyle, TabWellBrush);
	static_assert(FDockTabStyle_TabWellBrush_Offset == 0x610, "FDockTabStyle::TabWellBrush offset is not 610");
	auto constexpr FDockTabStyle_TabPadding_Offset = offsetof(FDockTabStyle, TabPadding);
	static_assert(FDockTabStyle_TabPadding_Offset == 0x6a0, "FDockTabStyle::TabPadding offset is not 6a0");
	auto constexpr FDockTabStyle_OverlapWidth_Offset = offsetof(FDockTabStyle, OverlapWidth);
	static_assert(FDockTabStyle_OverlapWidth_Offset == 0x6b0, "FDockTabStyle::OverlapWidth offset is not 6b0");
	auto constexpr FDockTabStyle_FlashColor_Offset = offsetof(FDockTabStyle, FlashColor);
	static_assert(FDockTabStyle_FlashColor_Offset == 0x6b8, "FDockTabStyle::FlashColor offset is not 6b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
