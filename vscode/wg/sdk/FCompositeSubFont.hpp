#pragma once
#include "FTypeface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCompositeSubFont // Size: 0x28
{
public:
    FTypeface Typeface; /* Ofs: 0x0 Size: 0x10 StructProperty SlateCore.CompositeSubFont.Typeface */
    TArray<struct FInt32Range> CharacterRanges; /* Ofs: 0x10 Size: 0x10 ArrayProperty SlateCore.CompositeSubFont.CharacterRanges */
    float ScalingFactor; /* Ofs: 0x20 Size: 0x4 FloatProperty SlateCore.CompositeSubFont.ScalingFactor */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCompositeSubFont = sizeof(FCompositeSubFont); // 40
    static_assert(sizeof(FCompositeSubFont) == 0x28, "Size of FCompositeSubFont is not correct.");
	auto constexpr FCompositeSubFont_Typeface_Offset = offsetof(FCompositeSubFont, Typeface);
	static_assert(FCompositeSubFont_Typeface_Offset == 0x0, "FCompositeSubFont::Typeface offset is not 0");
	auto constexpr FCompositeSubFont_CharacterRanges_Offset = offsetof(FCompositeSubFont, CharacterRanges);
	static_assert(FCompositeSubFont_CharacterRanges_Offset == 0x10, "FCompositeSubFont::CharacterRanges offset is not 10");
	auto constexpr FCompositeSubFont_ScalingFactor_Offset = offsetof(FCompositeSubFont, ScalingFactor);
	static_assert(FCompositeSubFont_ScalingFactor_Offset == 0x20, "FCompositeSubFont::ScalingFactor offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
