#pragma once
#include "FColor.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScreenMessageString // Size: 0x30
{
public:
    uint64_t Key; /* Ofs: 0x0 Size: 0x8 UInt64Property Engine.ScreenMessageString.Key */
    FString ScreenMessage; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.ScreenMessageString.ScreenMessage */
    FColor DisplayColor; /* Ofs: 0x18 Size: 0x4 StructProperty Engine.ScreenMessageString.DisplayColor */
    float TimeToDisplay; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.ScreenMessageString.TimeToDisplay */
    float CurrentTimeDisplayed; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.ScreenMessageString.CurrentTimeDisplayed */
    FVector2D TextScale; /* Ofs: 0x24 Size: 0x8 StructProperty Engine.ScreenMessageString.TextScale */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScreenMessageString = sizeof(FScreenMessageString); // 48
    static_assert(sizeof(FScreenMessageString) == 0x30, "Size of FScreenMessageString is not correct.");
	auto constexpr FScreenMessageString_Key_Offset = offsetof(FScreenMessageString, Key);
	static_assert(FScreenMessageString_Key_Offset == 0x0, "FScreenMessageString::Key offset is not 0");
	auto constexpr FScreenMessageString_ScreenMessage_Offset = offsetof(FScreenMessageString, ScreenMessage);
	static_assert(FScreenMessageString_ScreenMessage_Offset == 0x8, "FScreenMessageString::ScreenMessage offset is not 8");
	auto constexpr FScreenMessageString_DisplayColor_Offset = offsetof(FScreenMessageString, DisplayColor);
	static_assert(FScreenMessageString_DisplayColor_Offset == 0x18, "FScreenMessageString::DisplayColor offset is not 18");
	auto constexpr FScreenMessageString_TimeToDisplay_Offset = offsetof(FScreenMessageString, TimeToDisplay);
	static_assert(FScreenMessageString_TimeToDisplay_Offset == 0x1c, "FScreenMessageString::TimeToDisplay offset is not 1c");
	auto constexpr FScreenMessageString_CurrentTimeDisplayed_Offset = offsetof(FScreenMessageString, CurrentTimeDisplayed);
	static_assert(FScreenMessageString_CurrentTimeDisplayed_Offset == 0x20, "FScreenMessageString::CurrentTimeDisplayed offset is not 20");
	auto constexpr FScreenMessageString_TextScale_Offset = offsetof(FScreenMessageString, TextScale);
	static_assert(FScreenMessageString_TextScale_Offset == 0x24, "FScreenMessageString::TextScale offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
