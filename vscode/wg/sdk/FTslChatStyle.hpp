#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FEditableTextBoxStyle.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateSound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslChatStyle // Size: 0x988
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FEditableTextBoxStyle TextEntryStyle; /* Ofs: 0x8 Size: 0x870 StructProperty TslGame.TslChatStyle.TextEntryStyle */
    FSlateBrush BackingBrush; /* Ofs: 0x878 Size: 0x90 StructProperty TslGame.TslChatStyle.BackingBrush */
    FSlateColor BoxBorderColor; /* Ofs: 0x908 Size: 0x28 StructProperty TslGame.TslChatStyle.BoxBorderColor */
    FSlateColor TextColor; /* Ofs: 0x930 Size: 0x28 StructProperty TslGame.TslChatStyle.TextColor */
    FSlateSound RxMessgeSound; /* Ofs: 0x958 Size: 0x18 StructProperty TslGame.TslChatStyle.RxMessgeSound */
    FSlateSound TxMessgeSound; /* Ofs: 0x970 Size: 0x18 StructProperty TslGame.TslChatStyle.TxMessgeSound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslChatStyle = sizeof(FTslChatStyle); // 2440
    static_assert(sizeof(FTslChatStyle) == 0x988, "Size of FTslChatStyle is not correct.");
	auto constexpr FTslChatStyle_TextEntryStyle_Offset = offsetof(FTslChatStyle, TextEntryStyle);
	static_assert(FTslChatStyle_TextEntryStyle_Offset == 0x8, "FTslChatStyle::TextEntryStyle offset is not 8");
	auto constexpr FTslChatStyle_BackingBrush_Offset = offsetof(FTslChatStyle, BackingBrush);
	static_assert(FTslChatStyle_BackingBrush_Offset == 0x878, "FTslChatStyle::BackingBrush offset is not 878");
	auto constexpr FTslChatStyle_BoxBorderColor_Offset = offsetof(FTslChatStyle, BoxBorderColor);
	static_assert(FTslChatStyle_BoxBorderColor_Offset == 0x908, "FTslChatStyle::BoxBorderColor offset is not 908");
	auto constexpr FTslChatStyle_TextColor_Offset = offsetof(FTslChatStyle, TextColor);
	static_assert(FTslChatStyle_TextColor_Offset == 0x930, "FTslChatStyle::TextColor offset is not 930");
	auto constexpr FTslChatStyle_RxMessgeSound_Offset = offsetof(FTslChatStyle, RxMessgeSound);
	static_assert(FTslChatStyle_RxMessgeSound_Offset == 0x958, "FTslChatStyle::RxMessgeSound offset is not 958");
	auto constexpr FTslChatStyle_TxMessgeSound_Offset = offsetof(FTslChatStyle, TxMessgeSound);
	static_assert(FTslChatStyle_TxMessgeSound_Offset == 0x970, "FTslChatStyle::TxMessgeSound offset is not 970");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
