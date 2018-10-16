#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSliderStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVolumeControlStyle // Size: 0x528
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSliderStyle SliderStyle; /* Ofs: 0x8 Size: 0x250 StructProperty SlateCore.VolumeControlStyle.SliderStyle */
    FSlateBrush HighVolumeImage; /* Ofs: 0x258 Size: 0x90 StructProperty SlateCore.VolumeControlStyle.HighVolumeImage */
    FSlateBrush MidVolumeImage; /* Ofs: 0x2E8 Size: 0x90 StructProperty SlateCore.VolumeControlStyle.MidVolumeImage */
    FSlateBrush LowVolumeImage; /* Ofs: 0x378 Size: 0x90 StructProperty SlateCore.VolumeControlStyle.LowVolumeImage */
    FSlateBrush NoVolumeImage; /* Ofs: 0x408 Size: 0x90 StructProperty SlateCore.VolumeControlStyle.NoVolumeImage */
    FSlateBrush MutedImage; /* Ofs: 0x498 Size: 0x90 StructProperty SlateCore.VolumeControlStyle.MutedImage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVolumeControlStyle = sizeof(FVolumeControlStyle); // 1320
    static_assert(sizeof(FVolumeControlStyle) == 0x528, "Size of FVolumeControlStyle is not correct.");
	auto constexpr FVolumeControlStyle_SliderStyle_Offset = offsetof(FVolumeControlStyle, SliderStyle);
	static_assert(FVolumeControlStyle_SliderStyle_Offset == 0x8, "FVolumeControlStyle::SliderStyle offset is not 8");
	auto constexpr FVolumeControlStyle_HighVolumeImage_Offset = offsetof(FVolumeControlStyle, HighVolumeImage);
	static_assert(FVolumeControlStyle_HighVolumeImage_Offset == 0x258, "FVolumeControlStyle::HighVolumeImage offset is not 258");
	auto constexpr FVolumeControlStyle_MidVolumeImage_Offset = offsetof(FVolumeControlStyle, MidVolumeImage);
	static_assert(FVolumeControlStyle_MidVolumeImage_Offset == 0x2e8, "FVolumeControlStyle::MidVolumeImage offset is not 2e8");
	auto constexpr FVolumeControlStyle_LowVolumeImage_Offset = offsetof(FVolumeControlStyle, LowVolumeImage);
	static_assert(FVolumeControlStyle_LowVolumeImage_Offset == 0x378, "FVolumeControlStyle::LowVolumeImage offset is not 378");
	auto constexpr FVolumeControlStyle_NoVolumeImage_Offset = offsetof(FVolumeControlStyle, NoVolumeImage);
	static_assert(FVolumeControlStyle_NoVolumeImage_Offset == 0x408, "FVolumeControlStyle::NoVolumeImage offset is not 408");
	auto constexpr FVolumeControlStyle_MutedImage_Offset = offsetof(FVolumeControlStyle, MutedImage);
	static_assert(FVolumeControlStyle_MutedImage_Offset == 0x498, "FVolumeControlStyle::MutedImage offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
