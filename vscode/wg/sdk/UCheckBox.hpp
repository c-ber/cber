#pragma once
#include "UContentWidget.hpp"
#include "ECheckBoxState.hpp"
#include "FCheckBoxStyle.hpp"
#include "EHorizontalAlignment.hpp"
#include "FMargin.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCheckBox // Size: 0x7F8
	: public UContentWidget // Size: 0x148
{
private:
	typedef UCheckBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(498); // id32("Class UMG.CheckBox")
		return ptr;
	}
	TEnumAsByte<enum ECheckBoxState> CheckedState; /* Ofs: 0x148 Size: 0x1 - EnumProperty UMG.CheckBox.CheckedState */
	uint8_t UnknownData149[0x7];
	FScriptDelegate CheckedStateDelegate; /* Ofs: 0x150 Size: 0x10 - DelegateProperty UMG.CheckBox.CheckedStateDelegate */
	FCheckBoxStyle WidgetStyle; /* Ofs: 0x160 Size: 0x5E0 - StructProperty UMG.CheckBox.WidgetStyle */
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0x740 Size: 0x8 - ObjectProperty UMG.CheckBox.Style */
	ExternalPtr<struct USlateBrushAsset> UncheckedImage; /* Ofs: 0x748 Size: 0x8 - ObjectProperty UMG.CheckBox.UncheckedImage */
	ExternalPtr<struct USlateBrushAsset> UncheckedHoveredImage; /* Ofs: 0x750 Size: 0x8 - ObjectProperty UMG.CheckBox.UncheckedHoveredImage */
	ExternalPtr<struct USlateBrushAsset> UncheckedPressedImage; /* Ofs: 0x758 Size: 0x8 - ObjectProperty UMG.CheckBox.UncheckedPressedImage */
	ExternalPtr<struct USlateBrushAsset> CheckedImage; /* Ofs: 0x760 Size: 0x8 - ObjectProperty UMG.CheckBox.CheckedImage */
	ExternalPtr<struct USlateBrushAsset> CheckedHoveredImage; /* Ofs: 0x768 Size: 0x8 - ObjectProperty UMG.CheckBox.CheckedHoveredImage */
	ExternalPtr<struct USlateBrushAsset> CheckedPressedImage; /* Ofs: 0x770 Size: 0x8 - ObjectProperty UMG.CheckBox.CheckedPressedImage */
	ExternalPtr<struct USlateBrushAsset> UndeterminedImage; /* Ofs: 0x778 Size: 0x8 - ObjectProperty UMG.CheckBox.UndeterminedImage */
	ExternalPtr<struct USlateBrushAsset> UndeterminedHoveredImage; /* Ofs: 0x780 Size: 0x8 - ObjectProperty UMG.CheckBox.UndeterminedHoveredImage */
	ExternalPtr<struct USlateBrushAsset> UndeterminedPressedImage; /* Ofs: 0x788 Size: 0x8 - ObjectProperty UMG.CheckBox.UndeterminedPressedImage */
	TEnumAsByte<enum EHorizontalAlignment> HorizontalAlignment; /* Ofs: 0x790 Size: 0x1 - ByteProperty UMG.CheckBox.HorizontalAlignment */
	uint8_t UnknownData791[0x3];
	FMargin Padding; /* Ofs: 0x794 Size: 0x10 - StructProperty UMG.CheckBox.Padding */
	uint8_t UnknownData7A4[0x4];
	FSlateColor BorderBackgroundColor; /* Ofs: 0x7A8 Size: 0x28 - StructProperty UMG.CheckBox.BorderBackgroundColor */
	uint8_t boolField7D0;
	uint8_t UnknownData7D1[0x7];
	FScriptMulticastDelegate OnCheckStateChanged; /* Ofs: 0x7D8 Size: 0x10 - MulticastDelegateProperty UMG.CheckBox.OnCheckStateChanged */
	uint8_t UnknownData7E8[0x10];


	inline bool SetCheckedState(t_structHelper inst, TEnumAsByte<enum ECheckBoxState> value) { inst.WriteOffset(0x148, value); }
	inline bool SetCheckedStateDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x150, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FCheckBoxStyle value) { inst.WriteOffset(0x160, value); }
	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x740, value); }
	inline bool SetUncheckedImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x748, value); }
	inline bool SetUncheckedHoveredImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x750, value); }
	inline bool SetUncheckedPressedImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x758, value); }
	inline bool SetCheckedImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x760, value); }
	inline bool SetCheckedHoveredImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x768, value); }
	inline bool SetCheckedPressedImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x770, value); }
	inline bool SetUndeterminedImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x778, value); }
	inline bool SetUndeterminedHoveredImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x780, value); }
	inline bool SetUndeterminedPressedImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x788, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizontalAlignment> value) { inst.WriteOffset(0x790, value); }
	inline bool SetPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0x794, value); }
	inline bool SetBorderBackgroundColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x7A8, value); }
	inline bool IsFocusable()
	{
		return boolField7D0& 0x1;
	}
	inline bool SetIsFocusable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnCheckStateChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x7D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCheckBox = sizeof(UCheckBox); // 2040
    static_assert(sizeof(UCheckBox) == 0x7F8, "Size of UCheckBox is not correct.");
	auto constexpr UCheckBox_CheckedState_Offset = offsetof(UCheckBox, CheckedState);
	static_assert(UCheckBox_CheckedState_Offset == 0x148, "UCheckBox::CheckedState offset is not 148");
	auto constexpr UCheckBox_CheckedStateDelegate_Offset = offsetof(UCheckBox, CheckedStateDelegate);
	static_assert(UCheckBox_CheckedStateDelegate_Offset == 0x150, "UCheckBox::CheckedStateDelegate offset is not 150");
	auto constexpr UCheckBox_WidgetStyle_Offset = offsetof(UCheckBox, WidgetStyle);
	static_assert(UCheckBox_WidgetStyle_Offset == 0x160, "UCheckBox::WidgetStyle offset is not 160");
	auto constexpr UCheckBox_Style_Offset = offsetof(UCheckBox, Style);
	static_assert(UCheckBox_Style_Offset == 0x740, "UCheckBox::Style offset is not 740");
	auto constexpr UCheckBox_UncheckedImage_Offset = offsetof(UCheckBox, UncheckedImage);
	static_assert(UCheckBox_UncheckedImage_Offset == 0x748, "UCheckBox::UncheckedImage offset is not 748");
	auto constexpr UCheckBox_UncheckedHoveredImage_Offset = offsetof(UCheckBox, UncheckedHoveredImage);
	static_assert(UCheckBox_UncheckedHoveredImage_Offset == 0x750, "UCheckBox::UncheckedHoveredImage offset is not 750");
	auto constexpr UCheckBox_UncheckedPressedImage_Offset = offsetof(UCheckBox, UncheckedPressedImage);
	static_assert(UCheckBox_UncheckedPressedImage_Offset == 0x758, "UCheckBox::UncheckedPressedImage offset is not 758");
	auto constexpr UCheckBox_CheckedImage_Offset = offsetof(UCheckBox, CheckedImage);
	static_assert(UCheckBox_CheckedImage_Offset == 0x760, "UCheckBox::CheckedImage offset is not 760");
	auto constexpr UCheckBox_CheckedHoveredImage_Offset = offsetof(UCheckBox, CheckedHoveredImage);
	static_assert(UCheckBox_CheckedHoveredImage_Offset == 0x768, "UCheckBox::CheckedHoveredImage offset is not 768");
	auto constexpr UCheckBox_CheckedPressedImage_Offset = offsetof(UCheckBox, CheckedPressedImage);
	static_assert(UCheckBox_CheckedPressedImage_Offset == 0x770, "UCheckBox::CheckedPressedImage offset is not 770");
	auto constexpr UCheckBox_UndeterminedImage_Offset = offsetof(UCheckBox, UndeterminedImage);
	static_assert(UCheckBox_UndeterminedImage_Offset == 0x778, "UCheckBox::UndeterminedImage offset is not 778");
	auto constexpr UCheckBox_UndeterminedHoveredImage_Offset = offsetof(UCheckBox, UndeterminedHoveredImage);
	static_assert(UCheckBox_UndeterminedHoveredImage_Offset == 0x780, "UCheckBox::UndeterminedHoveredImage offset is not 780");
	auto constexpr UCheckBox_UndeterminedPressedImage_Offset = offsetof(UCheckBox, UndeterminedPressedImage);
	static_assert(UCheckBox_UndeterminedPressedImage_Offset == 0x788, "UCheckBox::UndeterminedPressedImage offset is not 788");
	auto constexpr UCheckBox_HorizontalAlignment_Offset = offsetof(UCheckBox, HorizontalAlignment);
	static_assert(UCheckBox_HorizontalAlignment_Offset == 0x790, "UCheckBox::HorizontalAlignment offset is not 790");
	auto constexpr UCheckBox_Padding_Offset = offsetof(UCheckBox, Padding);
	static_assert(UCheckBox_Padding_Offset == 0x794, "UCheckBox::Padding offset is not 794");
	auto constexpr UCheckBox_BorderBackgroundColor_Offset = offsetof(UCheckBox, BorderBackgroundColor);
	static_assert(UCheckBox_BorderBackgroundColor_Offset == 0x7a8, "UCheckBox::BorderBackgroundColor offset is not 7a8");
	auto constexpr UCheckBox_boolField7D0_Offset = offsetof(UCheckBox, boolField7D0);
	static_assert(UCheckBox_boolField7D0_Offset == 0x7d0, "UCheckBox::boolField7D0 offset is not 7d0");
	auto constexpr UCheckBox_OnCheckStateChanged_Offset = offsetof(UCheckBox, OnCheckStateChanged);
	static_assert(UCheckBox_OnCheckStateChanged_Offset == 0x7d8, "UCheckBox::OnCheckStateChanged offset is not 7d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
