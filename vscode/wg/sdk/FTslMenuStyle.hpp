#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateSound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslMenuStyle // Size: 0x218
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FSlateBrush HeaderBackgroundBrush; /* Ofs: 0x8 Size: 0x90 StructProperty TslGame.TslMenuStyle.HeaderBackgroundBrush */
    FSlateBrush LeftBackgroundBrush; /* Ofs: 0x98 Size: 0x90 StructProperty TslGame.TslMenuStyle.LeftBackgroundBrush */
    FSlateBrush RightBackgroundBrush; /* Ofs: 0x128 Size: 0x90 StructProperty TslGame.TslMenuStyle.RightBackgroundBrush */
    FSlateSound MenuEnterSound; /* Ofs: 0x1B8 Size: 0x18 StructProperty TslGame.TslMenuStyle.MenuEnterSound */
    FSlateSound MenuBackSound; /* Ofs: 0x1D0 Size: 0x18 StructProperty TslGame.TslMenuStyle.MenuBackSound */
    FSlateSound OptionChangeSound; /* Ofs: 0x1E8 Size: 0x18 StructProperty TslGame.TslMenuStyle.OptionChangeSound */
    FSlateSound MenuItemChangeSound; /* Ofs: 0x200 Size: 0x18 StructProperty TslGame.TslMenuStyle.MenuItemChangeSound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslMenuStyle = sizeof(FTslMenuStyle); // 536
    static_assert(sizeof(FTslMenuStyle) == 0x218, "Size of FTslMenuStyle is not correct.");
	auto constexpr FTslMenuStyle_HeaderBackgroundBrush_Offset = offsetof(FTslMenuStyle, HeaderBackgroundBrush);
	static_assert(FTslMenuStyle_HeaderBackgroundBrush_Offset == 0x8, "FTslMenuStyle::HeaderBackgroundBrush offset is not 8");
	auto constexpr FTslMenuStyle_LeftBackgroundBrush_Offset = offsetof(FTslMenuStyle, LeftBackgroundBrush);
	static_assert(FTslMenuStyle_LeftBackgroundBrush_Offset == 0x98, "FTslMenuStyle::LeftBackgroundBrush offset is not 98");
	auto constexpr FTslMenuStyle_RightBackgroundBrush_Offset = offsetof(FTslMenuStyle, RightBackgroundBrush);
	static_assert(FTslMenuStyle_RightBackgroundBrush_Offset == 0x128, "FTslMenuStyle::RightBackgroundBrush offset is not 128");
	auto constexpr FTslMenuStyle_MenuEnterSound_Offset = offsetof(FTslMenuStyle, MenuEnterSound);
	static_assert(FTslMenuStyle_MenuEnterSound_Offset == 0x1b8, "FTslMenuStyle::MenuEnterSound offset is not 1b8");
	auto constexpr FTslMenuStyle_MenuBackSound_Offset = offsetof(FTslMenuStyle, MenuBackSound);
	static_assert(FTslMenuStyle_MenuBackSound_Offset == 0x1d0, "FTslMenuStyle::MenuBackSound offset is not 1d0");
	auto constexpr FTslMenuStyle_OptionChangeSound_Offset = offsetof(FTslMenuStyle, OptionChangeSound);
	static_assert(FTslMenuStyle_OptionChangeSound_Offset == 0x1e8, "FTslMenuStyle::OptionChangeSound offset is not 1e8");
	auto constexpr FTslMenuStyle_MenuItemChangeSound_Offset = offsetof(FTslMenuStyle, MenuItemChangeSound);
	static_assert(FTslMenuStyle_MenuItemChangeSound_Offset == 0x200, "FTslMenuStyle::MenuItemChangeSound offset is not 200");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
