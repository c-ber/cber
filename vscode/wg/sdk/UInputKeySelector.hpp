#pragma once
#include "UWidget.hpp"
#include "FInputChord.hpp"
#include "FSlateFontInfo.hpp"
#include "FMargin.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputKeySelector // Size: 0x230
	: public UWidget // Size: 0x130
{
private:
	typedef UInputKeySelector t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(492); // id32("Class UMG.InputKeySelector")
		return ptr;
	}
	FInputChord SelectedKey; /* Ofs: 0x130 Size: 0x20 - StructProperty UMG.InputKeySelector.SelectedKey */
	FSlateFontInfo Font; /* Ofs: 0x150 Size: 0x68 - StructProperty UMG.InputKeySelector.Font */
	FMargin Margin; /* Ofs: 0x1B8 Size: 0x10 - StructProperty UMG.InputKeySelector.Margin */
	FLinearColor ColorAndOpacity; /* Ofs: 0x1C8 Size: 0x10 - StructProperty UMG.InputKeySelector.ColorAndOpacity */
	FText KeySelectionText; /* Ofs: 0x1D8 Size: 0x18 - TextProperty UMG.InputKeySelector.KeySelectionText */
	uint8_t boolField1F0;
	uint8_t UnknownData1F1[0x7];
	FScriptMulticastDelegate OnKeySelected; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty UMG.InputKeySelector.OnKeySelected */
	FScriptMulticastDelegate OnIsSelectingKeyChanged; /* Ofs: 0x208 Size: 0x10 - MulticastDelegateProperty UMG.InputKeySelector.OnIsSelectingKeyChanged */
	uint8_t UnknownData218[0x18];


	inline bool SetSelectedKey(t_structHelper inst, FInputChord value) { inst.WriteOffset(0x130, value); }
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0x150, value); }
	inline bool SetMargin(t_structHelper inst, FMargin value) { inst.WriteOffset(0x1B8, value); }
	inline bool SetColorAndOpacity(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetKeySelectionText(t_structHelper inst, FText value) { inst.WriteOffset(0x1D8, value); }
	inline bool bAllowModifierKeys()
	{
		return boolField1F0& 0x1;
	}
	inline bool SetbAllowModifierKeys(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnKeySelected(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetOnIsSelectingKeyChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x208, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputKeySelector = sizeof(UInputKeySelector); // 560
    static_assert(sizeof(UInputKeySelector) == 0x230, "Size of UInputKeySelector is not correct.");
	auto constexpr UInputKeySelector_SelectedKey_Offset = offsetof(UInputKeySelector, SelectedKey);
	static_assert(UInputKeySelector_SelectedKey_Offset == 0x130, "UInputKeySelector::SelectedKey offset is not 130");
	auto constexpr UInputKeySelector_Font_Offset = offsetof(UInputKeySelector, Font);
	static_assert(UInputKeySelector_Font_Offset == 0x150, "UInputKeySelector::Font offset is not 150");
	auto constexpr UInputKeySelector_Margin_Offset = offsetof(UInputKeySelector, Margin);
	static_assert(UInputKeySelector_Margin_Offset == 0x1b8, "UInputKeySelector::Margin offset is not 1b8");
	auto constexpr UInputKeySelector_ColorAndOpacity_Offset = offsetof(UInputKeySelector, ColorAndOpacity);
	static_assert(UInputKeySelector_ColorAndOpacity_Offset == 0x1c8, "UInputKeySelector::ColorAndOpacity offset is not 1c8");
	auto constexpr UInputKeySelector_KeySelectionText_Offset = offsetof(UInputKeySelector, KeySelectionText);
	static_assert(UInputKeySelector_KeySelectionText_Offset == 0x1d8, "UInputKeySelector::KeySelectionText offset is not 1d8");
	auto constexpr UInputKeySelector_boolField1F0_Offset = offsetof(UInputKeySelector, boolField1F0);
	static_assert(UInputKeySelector_boolField1F0_Offset == 0x1f0, "UInputKeySelector::boolField1F0 offset is not 1f0");
	auto constexpr UInputKeySelector_OnKeySelected_Offset = offsetof(UInputKeySelector, OnKeySelected);
	static_assert(UInputKeySelector_OnKeySelected_Offset == 0x1f8, "UInputKeySelector::OnKeySelected offset is not 1f8");
	auto constexpr UInputKeySelector_OnIsSelectingKeyChanged_Offset = offsetof(UInputKeySelector, OnIsSelectingKeyChanged);
	static_assert(UInputKeySelector_OnIsSelectingKeyChanged_Offset == 0x208, "UInputKeySelector::OnIsSelectingKeyChanged offset is not 208");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
