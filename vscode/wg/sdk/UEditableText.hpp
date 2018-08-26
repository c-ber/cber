#pragma once
#include "UWidget.hpp"
#include "FEditableTextStyle.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateColor.hpp"
#include "EVirtualKeyboardType.hpp"
#include "FShapedTextOptions.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableText // Size: 0x4C0
	: public UWidget // Size: 0x130
{
private:
	typedef UEditableText t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(488); // id32("Class UMG.EditableText")
		return ptr;
	}
	FText Text; /* Ofs: 0x130 Size: 0x18 - TextProperty UMG.EditableText.Text */
	FScriptDelegate TextDelegate; /* Ofs: 0x148 Size: 0x10 - DelegateProperty UMG.EditableText.TextDelegate */
	FText HintText; /* Ofs: 0x158 Size: 0x18 - TextProperty UMG.EditableText.HintText */
	FScriptDelegate HintTextDelegate; /* Ofs: 0x170 Size: 0x10 - DelegateProperty UMG.EditableText.HintTextDelegate */
	FEditableTextStyle WidgetStyle; /* Ofs: 0x180 Size: 0x248 - StructProperty UMG.EditableText.WidgetStyle */
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty UMG.EditableText.Style */
	ExternalPtr<struct USlateBrushAsset> BackgroundImageSelected; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty UMG.EditableText.BackgroundImageSelected */
	ExternalPtr<struct USlateBrushAsset> BackgroundImageComposing; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty UMG.EditableText.BackgroundImageComposing */
	ExternalPtr<struct USlateBrushAsset> CaretImage; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty UMG.EditableText.CaretImage */
	FSlateFontInfo Font; /* Ofs: 0x3E8 Size: 0x68 - StructProperty UMG.EditableText.Font */
	FSlateColor ColorAndOpacity; /* Ofs: 0x450 Size: 0x28 - StructProperty UMG.EditableText.ColorAndOpacity */
	uint8_t boolField478;
	uint8_t boolField479;
	uint8_t UnknownData47A[0x2];
	float MinimumDesiredWidth; /* Ofs: 0x47C Size: 0x4 - FloatProperty UMG.EditableText.MinimumDesiredWidth */
	uint8_t boolField480;
	uint8_t boolField481;
	uint8_t boolField482;
	uint8_t boolField483;
	uint8_t boolField484;
	uint8_t boolField485;
	TEnumAsByte<enum EVirtualKeyboardType> KeyboardType; /* Ofs: 0x486 Size: 0x1 - ByteProperty UMG.EditableText.KeyboardType */
	uint8_t UnknownData487[0x1];
	FShapedTextOptions ShapedTextOptions; /* Ofs: 0x488 Size: 0x8 - StructProperty UMG.EditableText.ShapedTextOptions */
	FScriptMulticastDelegate OnTextChanged; /* Ofs: 0x490 Size: 0x10 - MulticastDelegateProperty UMG.EditableText.OnTextChanged */
	FScriptMulticastDelegate OnTextCommitted; /* Ofs: 0x4A0 Size: 0x10 - MulticastDelegateProperty UMG.EditableText.OnTextCommitted */
	uint8_t UnknownData4B0[0x10];


	inline bool SetText(t_structHelper inst, FText value) { inst.WriteOffset(0x130, value); }
	inline bool SetTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x148, value); }
	inline bool SetHintText(t_structHelper inst, FText value) { inst.WriteOffset(0x158, value); }
	inline bool SetHintTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x170, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FEditableTextStyle value) { inst.WriteOffset(0x180, value); }
	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetBackgroundImageSelected(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetBackgroundImageComposing(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetCaretImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetColorAndOpacity(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x450, value); }
	inline bool IsReadOnly()
	{
		return boolField478& 0x1;
	}
	inline bool SetIsReadOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x478, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsPassword()
	{
		return boolField479& 0x1;
	}
	inline bool SetIsPassword(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x479, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinimumDesiredWidth(t_structHelper inst, float value) { inst.WriteOffset(0x47C, value); }
	inline bool IsCaretMovedWhenGainFocus()
	{
		return boolField480& 0x1;
	}
	inline bool SetIsCaretMovedWhenGainFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SelectAllTextWhenFocused()
	{
		return boolField481& 0x1;
	}
	inline bool SetSelectAllTextWhenFocused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x481, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool RevertTextOnEscape()
	{
		return boolField482& 0x1;
	}
	inline bool SetRevertTextOnEscape(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x482, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool ClearKeyboardFocusOnCommit()
	{
		return boolField483& 0x1;
	}
	inline bool SetClearKeyboardFocusOnCommit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x483, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SelectAllTextOnCommit()
	{
		return boolField484& 0x1;
	}
	inline bool SetSelectAllTextOnCommit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x484, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AllowContextMenu()
	{
		return boolField485& 0x1;
	}
	inline bool SetAllowContextMenu(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x485, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetKeyboardType(t_structHelper inst, TEnumAsByte<enum EVirtualKeyboardType> value) { inst.WriteOffset(0x486, value); }
	inline bool SetShapedTextOptions(t_structHelper inst, FShapedTextOptions value) { inst.WriteOffset(0x488, value); }
	inline bool SetOnTextChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x490, value); }
	inline bool SetOnTextCommitted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x4A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableText = sizeof(UEditableText); // 1216
    static_assert(sizeof(UEditableText) == 0x4C0, "Size of UEditableText is not correct.");
	auto constexpr UEditableText_Text_Offset = offsetof(UEditableText, Text);
	static_assert(UEditableText_Text_Offset == 0x130, "UEditableText::Text offset is not 130");
	auto constexpr UEditableText_TextDelegate_Offset = offsetof(UEditableText, TextDelegate);
	static_assert(UEditableText_TextDelegate_Offset == 0x148, "UEditableText::TextDelegate offset is not 148");
	auto constexpr UEditableText_HintText_Offset = offsetof(UEditableText, HintText);
	static_assert(UEditableText_HintText_Offset == 0x158, "UEditableText::HintText offset is not 158");
	auto constexpr UEditableText_HintTextDelegate_Offset = offsetof(UEditableText, HintTextDelegate);
	static_assert(UEditableText_HintTextDelegate_Offset == 0x170, "UEditableText::HintTextDelegate offset is not 170");
	auto constexpr UEditableText_WidgetStyle_Offset = offsetof(UEditableText, WidgetStyle);
	static_assert(UEditableText_WidgetStyle_Offset == 0x180, "UEditableText::WidgetStyle offset is not 180");
	auto constexpr UEditableText_Style_Offset = offsetof(UEditableText, Style);
	static_assert(UEditableText_Style_Offset == 0x3c8, "UEditableText::Style offset is not 3c8");
	auto constexpr UEditableText_BackgroundImageSelected_Offset = offsetof(UEditableText, BackgroundImageSelected);
	static_assert(UEditableText_BackgroundImageSelected_Offset == 0x3d0, "UEditableText::BackgroundImageSelected offset is not 3d0");
	auto constexpr UEditableText_BackgroundImageComposing_Offset = offsetof(UEditableText, BackgroundImageComposing);
	static_assert(UEditableText_BackgroundImageComposing_Offset == 0x3d8, "UEditableText::BackgroundImageComposing offset is not 3d8");
	auto constexpr UEditableText_CaretImage_Offset = offsetof(UEditableText, CaretImage);
	static_assert(UEditableText_CaretImage_Offset == 0x3e0, "UEditableText::CaretImage offset is not 3e0");
	auto constexpr UEditableText_Font_Offset = offsetof(UEditableText, Font);
	static_assert(UEditableText_Font_Offset == 0x3e8, "UEditableText::Font offset is not 3e8");
	auto constexpr UEditableText_ColorAndOpacity_Offset = offsetof(UEditableText, ColorAndOpacity);
	static_assert(UEditableText_ColorAndOpacity_Offset == 0x450, "UEditableText::ColorAndOpacity offset is not 450");
	auto constexpr UEditableText_boolField478_Offset = offsetof(UEditableText, boolField478);
	static_assert(UEditableText_boolField478_Offset == 0x478, "UEditableText::boolField478 offset is not 478");
	auto constexpr UEditableText_boolField479_Offset = offsetof(UEditableText, boolField479);
	static_assert(UEditableText_boolField479_Offset == 0x479, "UEditableText::boolField479 offset is not 479");
	auto constexpr UEditableText_MinimumDesiredWidth_Offset = offsetof(UEditableText, MinimumDesiredWidth);
	static_assert(UEditableText_MinimumDesiredWidth_Offset == 0x47c, "UEditableText::MinimumDesiredWidth offset is not 47c");
	auto constexpr UEditableText_boolField480_Offset = offsetof(UEditableText, boolField480);
	static_assert(UEditableText_boolField480_Offset == 0x480, "UEditableText::boolField480 offset is not 480");
	auto constexpr UEditableText_boolField481_Offset = offsetof(UEditableText, boolField481);
	static_assert(UEditableText_boolField481_Offset == 0x481, "UEditableText::boolField481 offset is not 481");
	auto constexpr UEditableText_boolField482_Offset = offsetof(UEditableText, boolField482);
	static_assert(UEditableText_boolField482_Offset == 0x482, "UEditableText::boolField482 offset is not 482");
	auto constexpr UEditableText_boolField483_Offset = offsetof(UEditableText, boolField483);
	static_assert(UEditableText_boolField483_Offset == 0x483, "UEditableText::boolField483 offset is not 483");
	auto constexpr UEditableText_boolField484_Offset = offsetof(UEditableText, boolField484);
	static_assert(UEditableText_boolField484_Offset == 0x484, "UEditableText::boolField484 offset is not 484");
	auto constexpr UEditableText_boolField485_Offset = offsetof(UEditableText, boolField485);
	static_assert(UEditableText_boolField485_Offset == 0x485, "UEditableText::boolField485 offset is not 485");
	auto constexpr UEditableText_KeyboardType_Offset = offsetof(UEditableText, KeyboardType);
	static_assert(UEditableText_KeyboardType_Offset == 0x486, "UEditableText::KeyboardType offset is not 486");
	auto constexpr UEditableText_ShapedTextOptions_Offset = offsetof(UEditableText, ShapedTextOptions);
	static_assert(UEditableText_ShapedTextOptions_Offset == 0x488, "UEditableText::ShapedTextOptions offset is not 488");
	auto constexpr UEditableText_OnTextChanged_Offset = offsetof(UEditableText, OnTextChanged);
	static_assert(UEditableText_OnTextChanged_Offset == 0x490, "UEditableText::OnTextChanged offset is not 490");
	auto constexpr UEditableText_OnTextCommitted_Offset = offsetof(UEditableText, OnTextCommitted);
	static_assert(UEditableText_OnTextCommitted_Offset == 0x4a0, "UEditableText::OnTextCommitted offset is not 4a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
