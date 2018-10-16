#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FComboButtonStyle.hpp"
#include "FSlateSound.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FComboBoxStyle // Size: 0x428
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FComboButtonStyle ComboButtonStyle; /* Ofs: 0x8 Size: 0x3E0 StructProperty SlateCore.ComboBoxStyle.ComboButtonStyle */
    FSlateSound PressedSlateSound; /* Ofs: 0x3E8 Size: 0x18 StructProperty SlateCore.ComboBoxStyle.PressedSlateSound */
    FSlateSound SelectionChangeSlateSound; /* Ofs: 0x400 Size: 0x18 StructProperty SlateCore.ComboBoxStyle.SelectionChangeSlateSound */
    FName PressedSound; /* Ofs: 0x418 Size: 0x8 NameProperty SlateCore.ComboBoxStyle.PressedSound */
    FName SelectionChangeSound; /* Ofs: 0x420 Size: 0x8 NameProperty SlateCore.ComboBoxStyle.SelectionChangeSound */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFComboBoxStyle = sizeof(FComboBoxStyle); // 1064
    static_assert(sizeof(FComboBoxStyle) == 0x428, "Size of FComboBoxStyle is not correct.");
	auto constexpr FComboBoxStyle_ComboButtonStyle_Offset = offsetof(FComboBoxStyle, ComboButtonStyle);
	static_assert(FComboBoxStyle_ComboButtonStyle_Offset == 0x8, "FComboBoxStyle::ComboButtonStyle offset is not 8");
	auto constexpr FComboBoxStyle_PressedSlateSound_Offset = offsetof(FComboBoxStyle, PressedSlateSound);
	static_assert(FComboBoxStyle_PressedSlateSound_Offset == 0x3e8, "FComboBoxStyle::PressedSlateSound offset is not 3e8");
	auto constexpr FComboBoxStyle_SelectionChangeSlateSound_Offset = offsetof(FComboBoxStyle, SelectionChangeSlateSound);
	static_assert(FComboBoxStyle_SelectionChangeSlateSound_Offset == 0x400, "FComboBoxStyle::SelectionChangeSlateSound offset is not 400");
	auto constexpr FComboBoxStyle_PressedSound_Offset = offsetof(FComboBoxStyle, PressedSound);
	static_assert(FComboBoxStyle_PressedSound_Offset == 0x418, "FComboBoxStyle::PressedSound offset is not 418");
	auto constexpr FComboBoxStyle_SelectionChangeSound_Offset = offsetof(FComboBoxStyle, SelectionChangeSound);
	static_assert(FComboBoxStyle_SelectionChangeSound_Offset == 0x420, "FComboBoxStyle::SelectionChangeSound offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
