#pragma once
#include "UTextLayoutWidget.hpp"
#include "FEditableTextBoxStyle.hpp"
#include "FTextBlockStyle.hpp"
#include "FSlateFontInfo.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMultiLineEditableTextBox // Size: 0xCE8
	: public UTextLayoutWidget // Size: 0x158
{
private:
	typedef UMultiLineEditableTextBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(524); // id32("Class UMG.MultiLineEditableTextBox")
		return ptr;
	}
	FText Text; /* Ofs: 0x158 Size: 0x18 - TextProperty UMG.MultiLineEditableTextBox.Text */
	FText HintText; /* Ofs: 0x170 Size: 0x18 - TextProperty UMG.MultiLineEditableTextBox.HintText */
	FScriptDelegate HintTextDelegate; /* Ofs: 0x188 Size: 0x10 - DelegateProperty UMG.MultiLineEditableTextBox.HintTextDelegate */
	FEditableTextBoxStyle WidgetStyle; /* Ofs: 0x198 Size: 0x870 - StructProperty UMG.MultiLineEditableTextBox.WidgetStyle */
	FTextBlockStyle TextStyle; /* Ofs: 0xA08 Size: 0x208 - StructProperty UMG.MultiLineEditableTextBox.TextStyle */
	uint8_t boolFieldC10;
	uint8_t boolFieldC11;
	uint8_t UnknownDataC12[0x6];
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0xC18 Size: 0x8 - ObjectProperty UMG.MultiLineEditableTextBox.Style */
	FSlateFontInfo Font; /* Ofs: 0xC20 Size: 0x68 - StructProperty UMG.MultiLineEditableTextBox.Font */
	FLinearColor ForegroundColor; /* Ofs: 0xC88 Size: 0x10 - StructProperty UMG.MultiLineEditableTextBox.ForegroundColor */
	FLinearColor BackgroundColor; /* Ofs: 0xC98 Size: 0x10 - StructProperty UMG.MultiLineEditableTextBox.BackgroundColor */
	FLinearColor ReadOnlyForegroundColor; /* Ofs: 0xCA8 Size: 0x10 - StructProperty UMG.MultiLineEditableTextBox.ReadOnlyForegroundColor */
	FScriptMulticastDelegate OnTextChanged; /* Ofs: 0xCB8 Size: 0x10 - MulticastDelegateProperty UMG.MultiLineEditableTextBox.OnTextChanged */
	FScriptMulticastDelegate OnTextCommitted; /* Ofs: 0xCC8 Size: 0x10 - MulticastDelegateProperty UMG.MultiLineEditableTextBox.OnTextCommitted */
	uint8_t UnknownDataCD8[0x10];


	inline bool SetText(t_structHelper inst, FText value) { inst.WriteOffset(0x158, value); }
	inline bool SetHintText(t_structHelper inst, FText value) { inst.WriteOffset(0x170, value); }
	inline bool SetHintTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x188, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FEditableTextBoxStyle value) { inst.WriteOffset(0x198, value); }
	inline bool SetTextStyle(t_structHelper inst, FTextBlockStyle value) { inst.WriteOffset(0xA08, value); }
	inline bool bIsReadOnly()
	{
		return boolFieldC10& 0x1;
	}
	inline bool SetbIsReadOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC10, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AllowContextMenu()
	{
		return boolFieldC11& 0x1;
	}
	inline bool SetAllowContextMenu(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC11, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0xC18, value); }
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0xC20, value); }
	inline bool SetForegroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xC88, value); }
	inline bool SetBackgroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xC98, value); }
	inline bool SetReadOnlyForegroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0xCA8, value); }
	inline bool SetOnTextChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xCB8, value); }
	inline bool SetOnTextCommitted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xCC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMultiLineEditableTextBox = sizeof(UMultiLineEditableTextBox); // 3304
    static_assert(sizeof(UMultiLineEditableTextBox) == 0xCE8, "Size of UMultiLineEditableTextBox is not correct.");
	auto constexpr UMultiLineEditableTextBox_Text_Offset = offsetof(UMultiLineEditableTextBox, Text);
	static_assert(UMultiLineEditableTextBox_Text_Offset == 0x158, "UMultiLineEditableTextBox::Text offset is not 158");
	auto constexpr UMultiLineEditableTextBox_HintText_Offset = offsetof(UMultiLineEditableTextBox, HintText);
	static_assert(UMultiLineEditableTextBox_HintText_Offset == 0x170, "UMultiLineEditableTextBox::HintText offset is not 170");
	auto constexpr UMultiLineEditableTextBox_HintTextDelegate_Offset = offsetof(UMultiLineEditableTextBox, HintTextDelegate);
	static_assert(UMultiLineEditableTextBox_HintTextDelegate_Offset == 0x188, "UMultiLineEditableTextBox::HintTextDelegate offset is not 188");
	auto constexpr UMultiLineEditableTextBox_WidgetStyle_Offset = offsetof(UMultiLineEditableTextBox, WidgetStyle);
	static_assert(UMultiLineEditableTextBox_WidgetStyle_Offset == 0x198, "UMultiLineEditableTextBox::WidgetStyle offset is not 198");
	auto constexpr UMultiLineEditableTextBox_TextStyle_Offset = offsetof(UMultiLineEditableTextBox, TextStyle);
	static_assert(UMultiLineEditableTextBox_TextStyle_Offset == 0xa08, "UMultiLineEditableTextBox::TextStyle offset is not a08");
	auto constexpr UMultiLineEditableTextBox_boolFieldC10_Offset = offsetof(UMultiLineEditableTextBox, boolFieldC10);
	static_assert(UMultiLineEditableTextBox_boolFieldC10_Offset == 0xc10, "UMultiLineEditableTextBox::boolFieldC10 offset is not c10");
	auto constexpr UMultiLineEditableTextBox_boolFieldC11_Offset = offsetof(UMultiLineEditableTextBox, boolFieldC11);
	static_assert(UMultiLineEditableTextBox_boolFieldC11_Offset == 0xc11, "UMultiLineEditableTextBox::boolFieldC11 offset is not c11");
	auto constexpr UMultiLineEditableTextBox_Style_Offset = offsetof(UMultiLineEditableTextBox, Style);
	static_assert(UMultiLineEditableTextBox_Style_Offset == 0xc18, "UMultiLineEditableTextBox::Style offset is not c18");
	auto constexpr UMultiLineEditableTextBox_Font_Offset = offsetof(UMultiLineEditableTextBox, Font);
	static_assert(UMultiLineEditableTextBox_Font_Offset == 0xc20, "UMultiLineEditableTextBox::Font offset is not c20");
	auto constexpr UMultiLineEditableTextBox_ForegroundColor_Offset = offsetof(UMultiLineEditableTextBox, ForegroundColor);
	static_assert(UMultiLineEditableTextBox_ForegroundColor_Offset == 0xc88, "UMultiLineEditableTextBox::ForegroundColor offset is not c88");
	auto constexpr UMultiLineEditableTextBox_BackgroundColor_Offset = offsetof(UMultiLineEditableTextBox, BackgroundColor);
	static_assert(UMultiLineEditableTextBox_BackgroundColor_Offset == 0xc98, "UMultiLineEditableTextBox::BackgroundColor offset is not c98");
	auto constexpr UMultiLineEditableTextBox_ReadOnlyForegroundColor_Offset = offsetof(UMultiLineEditableTextBox, ReadOnlyForegroundColor);
	static_assert(UMultiLineEditableTextBox_ReadOnlyForegroundColor_Offset == 0xca8, "UMultiLineEditableTextBox::ReadOnlyForegroundColor offset is not ca8");
	auto constexpr UMultiLineEditableTextBox_OnTextChanged_Offset = offsetof(UMultiLineEditableTextBox, OnTextChanged);
	static_assert(UMultiLineEditableTextBox_OnTextChanged_Offset == 0xcb8, "UMultiLineEditableTextBox::OnTextChanged offset is not cb8");
	auto constexpr UMultiLineEditableTextBox_OnTextCommitted_Offset = offsetof(UMultiLineEditableTextBox, OnTextCommitted);
	static_assert(UMultiLineEditableTextBox_OnTextCommitted_Offset == 0xcc8, "UMultiLineEditableTextBox::OnTextCommitted offset is not cc8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
