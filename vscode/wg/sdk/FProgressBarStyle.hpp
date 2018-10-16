#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FProgressBarStyle // Size: 0x1B8
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush BackgroundImage; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.ProgressBarStyle.BackgroundImage */
    FSlateBrush FillImage; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.ProgressBarStyle.FillImage */
    FSlateBrush MarqueeImage; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.ProgressBarStyle.MarqueeImage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFProgressBarStyle = sizeof(FProgressBarStyle); // 440
    static_assert(sizeof(FProgressBarStyle) == 0x1B8, "Size of FProgressBarStyle is not correct.");
	auto constexpr FProgressBarStyle_BackgroundImage_Offset = offsetof(FProgressBarStyle, BackgroundImage);
	static_assert(FProgressBarStyle_BackgroundImage_Offset == 0x8, "FProgressBarStyle::BackgroundImage offset is not 8");
	auto constexpr FProgressBarStyle_FillImage_Offset = offsetof(FProgressBarStyle, FillImage);
	static_assert(FProgressBarStyle_FillImage_Offset == 0x98, "FProgressBarStyle::FillImage offset is not 98");
	auto constexpr FProgressBarStyle_MarqueeImage_Offset = offsetof(FProgressBarStyle, MarqueeImage);
	static_assert(FProgressBarStyle_MarqueeImage_Offset == 0x128, "FProgressBarStyle::MarqueeImage offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
