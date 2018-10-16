#pragma once
#include "FLinearColor.hpp"
#include "ESlateColorStylingMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSlateColor // Size: 0x28
{
public:
    FLinearColor SpecifiedColor; /* Ofs: 0x0 Size: 0x10 StructProperty SlateCore.SlateColor.SpecifiedColor */
    TEnumAsByte<enum ESlateColorStylingMode> ColorUseRule; /* Ofs: 0x10 Size: 0x1 ByteProperty SlateCore.SlateColor.ColorUseRule */
    uint8_t UnknownData11[0x17];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSlateColor = sizeof(FSlateColor); // 40
    static_assert(sizeof(FSlateColor) == 0x28, "Size of FSlateColor is not correct.");
	auto constexpr FSlateColor_SpecifiedColor_Offset = offsetof(FSlateColor, SpecifiedColor);
	static_assert(FSlateColor_SpecifiedColor_Offset == 0x0, "FSlateColor::SpecifiedColor offset is not 0");
	auto constexpr FSlateColor_ColorUseRule_Offset = offsetof(FSlateColor, ColorUseRule);
	static_assert(FSlateColor_ColorUseRule_Offset == 0x10, "FSlateColor::ColorUseRule offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
