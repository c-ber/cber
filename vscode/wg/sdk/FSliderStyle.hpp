#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSliderStyle // Size: 0x250
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush NormalBarImage; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.SliderStyle.NormalBarImage */
    FSlateBrush DisabledBarImage; /* Ofs: 0x98 Size: 0x90 StructProperty SlateCore.SliderStyle.DisabledBarImage */
    FSlateBrush NormalThumbImage; /* Ofs: 0x128 Size: 0x90 StructProperty SlateCore.SliderStyle.NormalThumbImage */
    FSlateBrush DisabledThumbImage; /* Ofs: 0x1B8 Size: 0x90 StructProperty SlateCore.SliderStyle.DisabledThumbImage */
    float BarThickness; /* Ofs: 0x248 Size: 0x4 FloatProperty SlateCore.SliderStyle.BarThickness */
    uint8_t UnknownData24C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSliderStyle = sizeof(FSliderStyle); // 592
    static_assert(sizeof(FSliderStyle) == 0x250, "Size of FSliderStyle is not correct.");
	auto constexpr FSliderStyle_NormalBarImage_Offset = offsetof(FSliderStyle, NormalBarImage);
	static_assert(FSliderStyle_NormalBarImage_Offset == 0x8, "FSliderStyle::NormalBarImage offset is not 8");
	auto constexpr FSliderStyle_DisabledBarImage_Offset = offsetof(FSliderStyle, DisabledBarImage);
	static_assert(FSliderStyle_DisabledBarImage_Offset == 0x98, "FSliderStyle::DisabledBarImage offset is not 98");
	auto constexpr FSliderStyle_NormalThumbImage_Offset = offsetof(FSliderStyle, NormalThumbImage);
	static_assert(FSliderStyle_NormalThumbImage_Offset == 0x128, "FSliderStyle::NormalThumbImage offset is not 128");
	auto constexpr FSliderStyle_DisabledThumbImage_Offset = offsetof(FSliderStyle, DisabledThumbImage);
	static_assert(FSliderStyle_DisabledThumbImage_Offset == 0x1b8, "FSliderStyle::DisabledThumbImage offset is not 1b8");
	auto constexpr FSliderStyle_BarThickness_Offset = offsetof(FSliderStyle, BarThickness);
	static_assert(FSliderStyle_BarThickness_Offset == 0x248, "FSliderStyle::BarThickness offset is not 248");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
