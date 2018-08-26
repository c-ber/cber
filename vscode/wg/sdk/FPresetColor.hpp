#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPresetColor // Size: 0x38
{
public:
    FLinearColor Color; /* Ofs: 0x0 Size: 0x10 StructProperty TslGame.PresetColor.Color */
    FText DisplayName; /* Ofs: 0x10 Size: 0x18 TextProperty TslGame.PresetColor.DisplayName */
    FString ColorString; /* Ofs: 0x28 Size: 0x10 StrProperty TslGame.PresetColor.ColorString */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPresetColor = sizeof(FPresetColor); // 56
    static_assert(sizeof(FPresetColor) == 0x38, "Size of FPresetColor is not correct.");
	auto constexpr FPresetColor_Color_Offset = offsetof(FPresetColor, Color);
	static_assert(FPresetColor_Color_Offset == 0x0, "FPresetColor::Color offset is not 0");
	auto constexpr FPresetColor_DisplayName_Offset = offsetof(FPresetColor, DisplayName);
	static_assert(FPresetColor_DisplayName_Offset == 0x10, "FPresetColor::DisplayName offset is not 10");
	auto constexpr FPresetColor_ColorString_Offset = offsetof(FPresetColor, ColorString);
	static_assert(FPresetColor_ColorString_Offset == 0x28, "FPresetColor::ColorString offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
