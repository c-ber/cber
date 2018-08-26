#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSpinBoxStyle // Size: 0x310
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush BackgroundBrush; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.SpinBoxStyle.BackgroundBrush */
    FSlateBrush HoveredBackgroundBrush; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.SpinBoxStyle.HoveredBackgroundBrush */
    FSlateBrush ActiveFillBrush; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.SpinBoxStyle.ActiveFillBrush */
    FSlateBrush InactiveFillBrush; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.SpinBoxStyle.InactiveFillBrush */
    FSlateBrush ArrowsImage; /* Ofs: 0x248 Size: 0x90 StructProperty SlateCore.SpinBoxStyle.ArrowsImage */
    FSlateColor ForegroundColor; /* Ofs: 0x2D8 Size: 0x28 StructProperty SlateCore.SpinBoxStyle.ForegroundColor */
    FMargin TextPadding; /* Ofs: 0x300 Size: 0x10 StructProperty SlateCore.SpinBoxStyle.TextPadding */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSpinBoxStyle = sizeof(FSpinBoxStyle); // 784
    static_assert(sizeof(FSpinBoxStyle) == 0x310, "Size of FSpinBoxStyle is not correct.");
	auto constexpr FSpinBoxStyle_BackgroundBrush_Offset = offsetof(FSpinBoxStyle, BackgroundBrush);
	static_assert(FSpinBoxStyle_BackgroundBrush_Offset == 0x8, "FSpinBoxStyle::BackgroundBrush offset is not 8");
	auto constexpr FSpinBoxStyle_HoveredBackgroundBrush_Offset = offsetof(FSpinBoxStyle, HoveredBackgroundBrush);
	static_assert(FSpinBoxStyle_HoveredBackgroundBrush_Offset == 0x98, "FSpinBoxStyle::HoveredBackgroundBrush offset is not 98");
	auto constexpr FSpinBoxStyle_ActiveFillBrush_Offset = offsetof(FSpinBoxStyle, ActiveFillBrush);
	static_assert(FSpinBoxStyle_ActiveFillBrush_Offset == 0x128, "FSpinBoxStyle::ActiveFillBrush offset is not 128");
	auto constexpr FSpinBoxStyle_InactiveFillBrush_Offset = offsetof(FSpinBoxStyle, InactiveFillBrush);
	static_assert(FSpinBoxStyle_InactiveFillBrush_Offset == 0x1b8, "FSpinBoxStyle::InactiveFillBrush offset is not 1b8");
	auto constexpr FSpinBoxStyle_ArrowsImage_Offset = offsetof(FSpinBoxStyle, ArrowsImage);
	static_assert(FSpinBoxStyle_ArrowsImage_Offset == 0x248, "FSpinBoxStyle::ArrowsImage offset is not 248");
	auto constexpr FSpinBoxStyle_ForegroundColor_Offset = offsetof(FSpinBoxStyle, ForegroundColor);
	static_assert(FSpinBoxStyle_ForegroundColor_Offset == 0x2d8, "FSpinBoxStyle::ForegroundColor offset is not 2d8");
	auto constexpr FSpinBoxStyle_TextPadding_Offset = offsetof(FSpinBoxStyle, TextPadding);
	static_assert(FSpinBoxStyle_TextPadding_Offset == 0x300, "FSpinBoxStyle::TextPadding offset is not 300");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
