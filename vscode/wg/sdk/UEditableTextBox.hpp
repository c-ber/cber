#pragma once
#include "UWidget.hpp"
#include "FEditableTextBoxStyle.hpp"
#include "FSlateFontInfo.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "EVirtualKeyboardType.hpp"
#include "FShapedTextOptions.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableTextBox // Size: 0xAE8
	: public UWidget // Size: 0x130
{
private:
	typedef UEditableTextBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(489); // id32("Class UMG.EditableTextBox")
		return ptr;
	}
	FText Text; /* Ofs: 0x130 Size: 0x18 - TextProperty UMG.EditableTextBox.Text */
	FScriptDelegate TextDelegate; /* Ofs: 0x148 Size: 0x10 - DelegateProperty UMG.EditableTextBox.TextDelegate */
	FEditableTextBoxStyle WidgetStyle; /* Ofs: 0x158 Size: 0x870 - StructProperty UMG.EditableTextBox.WidgetStyle */
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0x9C8 Size: 0x8 - ObjectProperty UMG.EditableTextBox.Style */
	FText HintText; /* Ofs: 0x9D0 Size: 0x18 - TextProperty UMG.EditableTextBox.HintText */
	FScriptDelegate HintTextDelegate; /* Ofs: 0x9E8 Size: 0x10 - DelegateProperty UMG.EditableTextBox.HintTextDelegate */
	FSlateFontInfo Font; /* Ofs: 0x9F8 Size: 0x68 - StructProperty UMG.EditableTextBox.Font */
	FLinearColor ForegroundColor; /* Ofs: 0xA60 Size: 0x10 - StructProperty UMG.EditableTextBox.ForegroundColor */
	FLinearColor BackgroundColor; /* Ofs: 0xA70 Size: 0x10 - StructProperty UMG.EditableTextBox.BackgroundColor */
	FLinearColor ReadOnlyForegroundColor; /* Ofs: 0xA80 Size: 0x10 - StructProperty UMG.EditableTextBox.ReadOnlyForegroundColor */
	uint8_t boolFieldA90;
	uint8_t boolFieldA91;
	uint8_t UnknownDataA92[0x2];
	float MinimumDesiredWidth; /* Ofs: 0xA94 Size: 0x4 - FloatProperty UMG.EditableTextBox.MinimumDesiredWidth */
	FMargin Padding; /* Ofs: 0xA98 Size: 0x10 - StructProperty UMG.EditableTextBox.Padding */
	uint8_t boolFieldAA8;
	uint8_t boolFieldAA9;
	uint8_t boolFieldAAA;
	uint8_t boolFieldAAB;
	uint8_t boolFieldAAC;
	uint8_t boolFieldAAD;
	TEnumAsByte<enum EVirtualKeyboardType> KeyboardType; /* Ofs: 0xAAE Size: 0x1 - ByteProperty UMG.EditableTextBox.KeyboardType */
	uint8_t UnknownDataAAF[0x1];
	FShapedTextOptions ShapedTextOptions; /* Ofs: 0xAB0 Size: 0x8 - StructProperty UMG.EditableTextBox.ShapedTextOptions */
	FScriptMulticastDelegate OnTextChanged; /* Ofs: 0xAB8 Size: 0x10 - MulticastDelegateProperty UMG.EditableTextBox.OnTextChanged */
	FScriptMulticastDelegate OnTextCommitted; /* Ofs: 0xAC8 Size: 0x10 - MulticastDelegateProperty UMG.EditableTextBox.OnTextCommitted */
	uint8_t UnknownDataAD8[0x10];


	inline bool SetText(t_structHelper inst, FText value) { inst.WriteOffset(0x130, value); }
	inline bool SetTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x148, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FEditableTextBoxStyle value) { inst.WriteOffset(0x158, value); }
	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x9C8, value); }
	inline bool SetHintText(t_structHelper inst, FText value) { inst.WriteOffset(0x9D0, value); }
	inline bool SetHintTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetForegroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xA60, value); }
	inline bool SetBackgroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xA70, value); }
	inline bool SetReadOnlyForegroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xA80, value); }
	inline bool IsReadOnly()
	{
		return boolFieldA90& 0x1;
	}
	inline bool SetIsReadOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsPassword()
	{
		return boolFieldA91& 0x1;
	}
	inline bool SetIsPassword(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA91, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinimumDesiredWidth(t_structHelper inst, float value) { inst.WriteOffset(0xA94, value); }
	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0xA98, value); }
	inline bool IsCaretMovedWhenGainFocus()
	{
		return boolFieldAA8& 0x1;
	}
	inline bool SetIsCaretMovedWhenGainFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SelectAllTextWhenFocused()
	{
		return boolFieldAA9& 0x1;
	}
	inline bool SetSelectAllTextWhenFocused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAA9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool RevertTextOnEscape()
	{
		return boolFieldAAA& 0x1;
	}
	inline bool SetRevertTextOnEscape(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAAA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool ClearKeyboardFocusOnCommit()
	{
		return boolFieldAAB& 0x1;
	}
	inline bool SetClearKeyboardFocusOnCommit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAAB, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SelectAllTextOnCommit()
	{
		return boolFieldAAC& 0x1;
	}
	inline bool SetSelectAllTextOnCommit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAAC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AllowContextMenu()
	{
		return boolFieldAAD& 0x1;
	}
	inline bool SetAllowContextMenu(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAAD, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetKeyboardType(t_structHelper inst, TEnumAsByte<enum EVirtualKeyboardType> value) { inst.WriteOffset(0xAAE, value); }
	inline bool SetShapedTextOptions(t_structHelper inst, FShapedTextOptions value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetOnTextChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xAB8, value); }
	inline bool SetOnTextCommitted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xAC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableTextBox = sizeof(UEditableTextBox); // 2792
    static_assert(sizeof(UEditableTextBox) == 0xAE8, "Size of UEditableTextBox is not correct.");
	auto constexpr UEditableTextBox_Text_Offset = offsetof(UEditableTextBox, Text);
	static_assert(UEditableTextBox_Text_Offset == 0x130, "UEditableTextBox::Text offset is not 130");
	auto constexpr UEditableTextBox_TextDelegate_Offset = offsetof(UEditableTextBox, TextDelegate);
	static_assert(UEditableTextBox_TextDelegate_Offset == 0x148, "UEditableTextBox::TextDelegate offset is not 148");
	auto constexpr UEditableTextBox_WidgetStyle_Offset = offsetof(UEditableTextBox, WidgetStyle);
	static_assert(UEditableTextBox_WidgetStyle_Offset == 0x158, "UEditableTextBox::WidgetStyle offset is not 158");
	auto constexpr UEditableTextBox_Style_Offset = offsetof(UEditableTextBox, Style);
	static_assert(UEditableTextBox_Style_Offset == 0x9c8, "UEditableTextBox::Style offset is not 9c8");
	auto constexpr UEditableTextBox_HintText_Offset = offsetof(UEditableTextBox, HintText);
	static_assert(UEditableTextBox_HintText_Offset == 0x9d0, "UEditableTextBox::HintText offset is not 9d0");
	auto constexpr UEditableTextBox_HintTextDelegate_Offset = offsetof(UEditableTextBox, HintTextDelegate);
	static_assert(UEditableTextBox_HintTextDelegate_Offset == 0x9e8, "UEditableTextBox::HintTextDelegate offset is not 9e8");
	auto constexpr UEditableTextBox_Font_Offset = offsetof(UEditableTextBox, Font);
	static_assert(UEditableTextBox_Font_Offset == 0x9f8, "UEditableTextBox::Font offset is not 9f8");
	auto constexpr UEditableTextBox_ForegroundColor_Offset = offsetof(UEditableTextBox, ForegroundColor);
	static_assert(UEditableTextBox_ForegroundColor_Offset == 0xa60, "UEditableTextBox::ForegroundColor offset is not a60");
	auto constexpr UEditableTextBox_BackgroundColor_Offset = offsetof(UEditableTextBox, BackgroundColor);
	static_assert(UEditableTextBox_BackgroundColor_Offset == 0xa70, "UEditableTextBox::BackgroundColor offset is not a70");
	auto constexpr UEditableTextBox_ReadOnlyForegroundColor_Offset = offsetof(UEditableTextBox, ReadOnlyForegroundColor);
	static_assert(UEditableTextBox_ReadOnlyForegroundColor_Offset == 0xa80, "UEditableTextBox::ReadOnlyForegroundColor offset is not a80");
	auto constexpr UEditableTextBox_boolFieldA90_Offset = offsetof(UEditableTextBox, boolFieldA90);
	static_assert(UEditableTextBox_boolFieldA90_Offset == 0xa90, "UEditableTextBox::boolFieldA90 offset is not a90");
	auto constexpr UEditableTextBox_boolFieldA91_Offset = offsetof(UEditableTextBox, boolFieldA91);
	static_assert(UEditableTextBox_boolFieldA91_Offset == 0xa91, "UEditableTextBox::boolFieldA91 offset is not a91");
	auto constexpr UEditableTextBox_MinimumDesiredWidth_Offset = offsetof(UEditableTextBox, MinimumDesiredWidth);
	static_assert(UEditableTextBox_MinimumDesiredWidth_Offset == 0xa94, "UEditableTextBox::MinimumDesiredWidth offset is not a94");
	auto constexpr UEditableTextBox_Padding_Offset = offsetof(UEditableTextBox, Padding);
	static_assert(UEditableTextBox_Padding_Offset == 0xa98, "UEditableTextBox::Padding offset is not a98");
	auto constexpr UEditableTextBox_boolFieldAA8_Offset = offsetof(UEditableTextBox, boolFieldAA8);
	static_assert(UEditableTextBox_boolFieldAA8_Offset == 0xaa8, "UEditableTextBox::boolFieldAA8 offset is not aa8");
	auto constexpr UEditableTextBox_boolFieldAA9_Offset = offsetof(UEditableTextBox, boolFieldAA9);
	static_assert(UEditableTextBox_boolFieldAA9_Offset == 0xaa9, "UEditableTextBox::boolFieldAA9 offset is not aa9");
	auto constexpr UEditableTextBox_boolFieldAAA_Offset = offsetof(UEditableTextBox, boolFieldAAA);
	static_assert(UEditableTextBox_boolFieldAAA_Offset == 0xaaa, "UEditableTextBox::boolFieldAAA offset is not aaa");
	auto constexpr UEditableTextBox_boolFieldAAB_Offset = offsetof(UEditableTextBox, boolFieldAAB);
	static_assert(UEditableTextBox_boolFieldAAB_Offset == 0xaab, "UEditableTextBox::boolFieldAAB offset is not aab");
	auto constexpr UEditableTextBox_boolFieldAAC_Offset = offsetof(UEditableTextBox, boolFieldAAC);
	static_assert(UEditableTextBox_boolFieldAAC_Offset == 0xaac, "UEditableTextBox::boolFieldAAC offset is not aac");
	auto constexpr UEditableTextBox_boolFieldAAD_Offset = offsetof(UEditableTextBox, boolFieldAAD);
	static_assert(UEditableTextBox_boolFieldAAD_Offset == 0xaad, "UEditableTextBox::boolFieldAAD offset is not aad");
	auto constexpr UEditableTextBox_KeyboardType_Offset = offsetof(UEditableTextBox, KeyboardType);
	static_assert(UEditableTextBox_KeyboardType_Offset == 0xaae, "UEditableTextBox::KeyboardType offset is not aae");
	auto constexpr UEditableTextBox_ShapedTextOptions_Offset = offsetof(UEditableTextBox, ShapedTextOptions);
	static_assert(UEditableTextBox_ShapedTextOptions_Offset == 0xab0, "UEditableTextBox::ShapedTextOptions offset is not ab0");
	auto constexpr UEditableTextBox_OnTextChanged_Offset = offsetof(UEditableTextBox, OnTextChanged);
	static_assert(UEditableTextBox_OnTextChanged_Offset == 0xab8, "UEditableTextBox::OnTextChanged offset is not ab8");
	auto constexpr UEditableTextBox_OnTextCommitted_Offset = offsetof(UEditableTextBox, OnTextCommitted);
	static_assert(UEditableTextBox_OnTextCommitted_Offset == 0xac8, "UEditableTextBox::OnTextCommitted offset is not ac8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
