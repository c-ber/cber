#pragma once
#include "UTextLayoutWidget.hpp"
#include "FTextBlockStyle.hpp"
#include "FSlateFontInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMultiLineEditableText // Size: 0x448
	: public UTextLayoutWidget // Size: 0x158
{
private:
	typedef UMultiLineEditableText t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(523); // id32("Class UMG.MultiLineEditableText")
		return ptr;
	}
	FText Text; /* Ofs: 0x158 Size: 0x18 - TextProperty UMG.MultiLineEditableText.Text */
	FText HintText; /* Ofs: 0x170 Size: 0x18 - TextProperty UMG.MultiLineEditableText.HintText */
	FScriptDelegate HintTextDelegate; /* Ofs: 0x188 Size: 0x10 - DelegateProperty UMG.MultiLineEditableText.HintTextDelegate */
	FTextBlockStyle WidgetStyle; /* Ofs: 0x198 Size: 0x208 - StructProperty UMG.MultiLineEditableText.WidgetStyle */
	uint8_t boolField3A0;
	uint8_t UnknownData3A1[0x7];
	FSlateFontInfo Font; /* Ofs: 0x3A8 Size: 0x68 - StructProperty UMG.MultiLineEditableText.Font */
	uint8_t boolField410;
	uint8_t UnknownData411[0x7];
	FScriptMulticastDelegate OnTextChanged; /* Ofs: 0x418 Size: 0x10 - MulticastDelegateProperty UMG.MultiLineEditableText.OnTextChanged */
	FScriptMulticastDelegate OnTextCommitted; /* Ofs: 0x428 Size: 0x10 - MulticastDelegateProperty UMG.MultiLineEditableText.OnTextCommitted */
	uint8_t UnknownData438[0x10];


	inline bool SetText(t_structHelper inst, FText value) { inst.WriteOffset(0x158, value); }
	inline bool SetHintText(t_structHelper inst, FText value) { inst.WriteOffset(0x170, value); }
	inline bool SetHintTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x188, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FTextBlockStyle value) { inst.WriteOffset(0x198, value); }
	inline bool bIsReadOnly()
	{
		return boolField3A0& 0x1;
	}
	inline bool SetbIsReadOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0x3A8, value); }
	inline bool AllowContextMenu()
	{
		return boolField410& 0x1;
	}
	inline bool SetAllowContextMenu(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnTextChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x418, value); }
	inline bool SetOnTextCommitted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMultiLineEditableText = sizeof(UMultiLineEditableText); // 1096
    static_assert(sizeof(UMultiLineEditableText) == 0x448, "Size of UMultiLineEditableText is not correct.");
	auto constexpr UMultiLineEditableText_Text_Offset = offsetof(UMultiLineEditableText, Text);
	static_assert(UMultiLineEditableText_Text_Offset == 0x158, "UMultiLineEditableText::Text offset is not 158");
	auto constexpr UMultiLineEditableText_HintText_Offset = offsetof(UMultiLineEditableText, HintText);
	static_assert(UMultiLineEditableText_HintText_Offset == 0x170, "UMultiLineEditableText::HintText offset is not 170");
	auto constexpr UMultiLineEditableText_HintTextDelegate_Offset = offsetof(UMultiLineEditableText, HintTextDelegate);
	static_assert(UMultiLineEditableText_HintTextDelegate_Offset == 0x188, "UMultiLineEditableText::HintTextDelegate offset is not 188");
	auto constexpr UMultiLineEditableText_WidgetStyle_Offset = offsetof(UMultiLineEditableText, WidgetStyle);
	static_assert(UMultiLineEditableText_WidgetStyle_Offset == 0x198, "UMultiLineEditableText::WidgetStyle offset is not 198");
	auto constexpr UMultiLineEditableText_boolField3A0_Offset = offsetof(UMultiLineEditableText, boolField3A0);
	static_assert(UMultiLineEditableText_boolField3A0_Offset == 0x3a0, "UMultiLineEditableText::boolField3A0 offset is not 3a0");
	auto constexpr UMultiLineEditableText_Font_Offset = offsetof(UMultiLineEditableText, Font);
	static_assert(UMultiLineEditableText_Font_Offset == 0x3a8, "UMultiLineEditableText::Font offset is not 3a8");
	auto constexpr UMultiLineEditableText_boolField410_Offset = offsetof(UMultiLineEditableText, boolField410);
	static_assert(UMultiLineEditableText_boolField410_Offset == 0x410, "UMultiLineEditableText::boolField410 offset is not 410");
	auto constexpr UMultiLineEditableText_OnTextChanged_Offset = offsetof(UMultiLineEditableText, OnTextChanged);
	static_assert(UMultiLineEditableText_OnTextChanged_Offset == 0x418, "UMultiLineEditableText::OnTextChanged offset is not 418");
	auto constexpr UMultiLineEditableText_OnTextCommitted_Offset = offsetof(UMultiLineEditableText, OnTextCommitted);
	static_assert(UMultiLineEditableText_OnTextCommitted_Offset == 0x428, "UMultiLineEditableText::OnTextCommitted offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
