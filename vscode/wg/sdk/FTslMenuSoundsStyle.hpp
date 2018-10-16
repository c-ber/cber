#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateSound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslMenuSoundsStyle // Size: 0x38
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateSound StartGameSound; /* Ofs: 0x8 Size: 0x18 StructProperty TslGame.TslMenuSoundsStyle.StartGameSound */
    FSlateSound ExitGameSound; /* Ofs: 0x20 Size: 0x18 StructProperty TslGame.TslMenuSoundsStyle.ExitGameSound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslMenuSoundsStyle = sizeof(FTslMenuSoundsStyle); // 56
    static_assert(sizeof(FTslMenuSoundsStyle) == 0x38, "Size of FTslMenuSoundsStyle is not correct.");
	auto constexpr FTslMenuSoundsStyle_StartGameSound_Offset = offsetof(FTslMenuSoundsStyle, StartGameSound);
	static_assert(FTslMenuSoundsStyle_StartGameSound_Offset == 0x8, "FTslMenuSoundsStyle::StartGameSound offset is not 8");
	auto constexpr FTslMenuSoundsStyle_ExitGameSound_Offset = offsetof(FTslMenuSoundsStyle, ExitGameSound);
	static_assert(FTslMenuSoundsStyle_ExitGameSound_Offset == 0x20, "FTslMenuSoundsStyle::ExitGameSound offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
