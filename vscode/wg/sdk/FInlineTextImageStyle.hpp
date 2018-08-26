#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInlineTextImageStyle // Size: 0xA0
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush Image; /* Ofs: 0x8 Size: 0x90 StructProperty SlateCore.InlineTextImageStyle.Image */
    int16_t Baseline; /* Ofs: 0x98 Size: 0x2 Int16Property SlateCore.InlineTextImageStyle.Baseline */
    uint8_t UnknownData9A[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInlineTextImageStyle = sizeof(FInlineTextImageStyle); // 160
    static_assert(sizeof(FInlineTextImageStyle) == 0xA0, "Size of FInlineTextImageStyle is not correct.");
	auto constexpr FInlineTextImageStyle_Image_Offset = offsetof(FInlineTextImageStyle, Image);
	static_assert(FInlineTextImageStyle_Image_Offset == 0x8, "FInlineTextImageStyle::Image offset is not 8");
	auto constexpr FInlineTextImageStyle_Baseline_Offset = offsetof(FInlineTextImageStyle, Baseline);
	static_assert(FInlineTextImageStyle_Baseline_Offset == 0x98, "FInlineTextImageStyle::Baseline offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
