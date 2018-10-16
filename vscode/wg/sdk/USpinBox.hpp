#pragma once
#include "UWidget.hpp"
#include "FSpinBoxStyle.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpinBox // Size: 0x568
	: public UWidget // Size: 0x130
{
private:
	typedef USpinBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(519); // id32("Class UMG.SpinBox")
		return ptr;
	}
	float Value; /* Ofs: 0x130 Size: 0x4 - FloatProperty UMG.SpinBox.Value */
	uint8_t UnknownData134[0x4];
	FScriptDelegate ValueDelegate; /* Ofs: 0x138 Size: 0x10 - DelegateProperty UMG.SpinBox.ValueDelegate */
	FSpinBoxStyle WidgetStyle; /* Ofs: 0x148 Size: 0x310 - StructProperty UMG.SpinBox.WidgetStyle */
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0x458 Size: 0x8 - ObjectProperty UMG.SpinBox.Style */
	float Delta; /* Ofs: 0x460 Size: 0x4 - FloatProperty UMG.SpinBox.Delta */
	float SliderExponent; /* Ofs: 0x464 Size: 0x4 - FloatProperty UMG.SpinBox.SliderExponent */
	FSlateFontInfo Font; /* Ofs: 0x468 Size: 0x68 - StructProperty UMG.SpinBox.Font */
	float MinDesiredWidth; /* Ofs: 0x4D0 Size: 0x4 - FloatProperty UMG.SpinBox.MinDesiredWidth */
	uint8_t boolField4D4;
	uint8_t boolField4D5;
	uint8_t UnknownData4D6[0x2];
	FSlateColor ForegroundColor; /* Ofs: 0x4D8 Size: 0x28 - StructProperty UMG.SpinBox.ForegroundColor */
	FScriptMulticastDelegate OnValueChanged; /* Ofs: 0x500 Size: 0x10 - MulticastDelegateProperty UMG.SpinBox.OnValueChanged */
	FScriptMulticastDelegate OnValueCommitted; /* Ofs: 0x510 Size: 0x10 - MulticastDelegateProperty UMG.SpinBox.OnValueCommitted */
	FScriptMulticastDelegate OnBeginSliderMovement; /* Ofs: 0x520 Size: 0x10 - MulticastDelegateProperty UMG.SpinBox.OnBeginSliderMovement */
	FScriptMulticastDelegate OnEndSliderMovement; /* Ofs: 0x530 Size: 0x10 - MulticastDelegateProperty UMG.SpinBox.OnEndSliderMovement */
	uint8_t boolField540;
	uint8_t UnknownData541[0x3];
	float MinValue; /* Ofs: 0x544 Size: 0x4 - FloatProperty UMG.SpinBox.MinValue */
	float MaxValue; /* Ofs: 0x548 Size: 0x4 - FloatProperty UMG.SpinBox.MaxValue */
	float MinSliderValue; /* Ofs: 0x54C Size: 0x4 - FloatProperty UMG.SpinBox.MinSliderValue */
	float MaxSliderValue; /* Ofs: 0x550 Size: 0x4 - FloatProperty UMG.SpinBox.MaxSliderValue */
	uint8_t UnknownData554[0x14];


	inline bool SetValue(t_structHelper inst, float value) { inst.WriteOffset(0x130, value); }
	inline bool SetValueDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x138, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FSpinBoxStyle value) { inst.WriteOffset(0x148, value); }
	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x458, value); }
	inline bool SetDelta(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetSliderExponent(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0x468, value); }
	inline bool SetMinDesiredWidth(t_structHelper inst, float value) { inst.WriteOffset(0x4D0, value); }
	inline bool ClearKeyboardFocusOnCommit()
	{
		return boolField4D4& 0x1;
	}
	inline bool SetClearKeyboardFocusOnCommit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SelectAllTextOnCommit()
	{
		return boolField4D5& 0x1;
	}
	inline bool SetSelectAllTextOnCommit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetForegroundColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetOnValueChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x500, value); }
	inline bool SetOnValueCommitted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x510, value); }
	inline bool SetOnBeginSliderMovement(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x520, value); }
	inline bool SetOnEndSliderMovement(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x530, value); }
	inline bool bOverride_MinValue()
	{
		return boolField540& 0x1;
	}
	inline bool SetbOverride_MinValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x540, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOverride_MaxValue()
	{
		return boolField540& 0x2;
	}
	inline bool SetbOverride_MaxValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x540, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bOverride_MinSliderValue()
	{
		return boolField540& 0x4;
	}
	inline bool SetbOverride_MinSliderValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x540, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bOverride_MaxSliderValue()
	{
		return boolField540& 0x8;
	}
	inline bool SetbOverride_MaxSliderValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x540, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetMinValue(t_structHelper inst, float value) { inst.WriteOffset(0x544, value); }
	inline bool SetMaxValue(t_structHelper inst, float value) { inst.WriteOffset(0x548, value); }
	inline bool SetMinSliderValue(t_structHelper inst, float value) { inst.WriteOffset(0x54C, value); }
	inline bool SetMaxSliderValue(t_structHelper inst, float value) { inst.WriteOffset(0x550, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpinBox = sizeof(USpinBox); // 1384
    static_assert(sizeof(USpinBox) == 0x568, "Size of USpinBox is not correct.");
	auto constexpr USpinBox_Value_Offset = offsetof(USpinBox, Value);
	static_assert(USpinBox_Value_Offset == 0x130, "USpinBox::Value offset is not 130");
	auto constexpr USpinBox_ValueDelegate_Offset = offsetof(USpinBox, ValueDelegate);
	static_assert(USpinBox_ValueDelegate_Offset == 0x138, "USpinBox::ValueDelegate offset is not 138");
	auto constexpr USpinBox_WidgetStyle_Offset = offsetof(USpinBox, WidgetStyle);
	static_assert(USpinBox_WidgetStyle_Offset == 0x148, "USpinBox::WidgetStyle offset is not 148");
	auto constexpr USpinBox_Style_Offset = offsetof(USpinBox, Style);
	static_assert(USpinBox_Style_Offset == 0x458, "USpinBox::Style offset is not 458");
	auto constexpr USpinBox_Delta_Offset = offsetof(USpinBox, Delta);
	static_assert(USpinBox_Delta_Offset == 0x460, "USpinBox::Delta offset is not 460");
	auto constexpr USpinBox_SliderExponent_Offset = offsetof(USpinBox, SliderExponent);
	static_assert(USpinBox_SliderExponent_Offset == 0x464, "USpinBox::SliderExponent offset is not 464");
	auto constexpr USpinBox_Font_Offset = offsetof(USpinBox, Font);
	static_assert(USpinBox_Font_Offset == 0x468, "USpinBox::Font offset is not 468");
	auto constexpr USpinBox_MinDesiredWidth_Offset = offsetof(USpinBox, MinDesiredWidth);
	static_assert(USpinBox_MinDesiredWidth_Offset == 0x4d0, "USpinBox::MinDesiredWidth offset is not 4d0");
	auto constexpr USpinBox_boolField4D4_Offset = offsetof(USpinBox, boolField4D4);
	static_assert(USpinBox_boolField4D4_Offset == 0x4d4, "USpinBox::boolField4D4 offset is not 4d4");
	auto constexpr USpinBox_boolField4D5_Offset = offsetof(USpinBox, boolField4D5);
	static_assert(USpinBox_boolField4D5_Offset == 0x4d5, "USpinBox::boolField4D5 offset is not 4d5");
	auto constexpr USpinBox_ForegroundColor_Offset = offsetof(USpinBox, ForegroundColor);
	static_assert(USpinBox_ForegroundColor_Offset == 0x4d8, "USpinBox::ForegroundColor offset is not 4d8");
	auto constexpr USpinBox_OnValueChanged_Offset = offsetof(USpinBox, OnValueChanged);
	static_assert(USpinBox_OnValueChanged_Offset == 0x500, "USpinBox::OnValueChanged offset is not 500");
	auto constexpr USpinBox_OnValueCommitted_Offset = offsetof(USpinBox, OnValueCommitted);
	static_assert(USpinBox_OnValueCommitted_Offset == 0x510, "USpinBox::OnValueCommitted offset is not 510");
	auto constexpr USpinBox_OnBeginSliderMovement_Offset = offsetof(USpinBox, OnBeginSliderMovement);
	static_assert(USpinBox_OnBeginSliderMovement_Offset == 0x520, "USpinBox::OnBeginSliderMovement offset is not 520");
	auto constexpr USpinBox_OnEndSliderMovement_Offset = offsetof(USpinBox, OnEndSliderMovement);
	static_assert(USpinBox_OnEndSliderMovement_Offset == 0x530, "USpinBox::OnEndSliderMovement offset is not 530");
	auto constexpr USpinBox_boolField540_Offset = offsetof(USpinBox, boolField540);
	static_assert(USpinBox_boolField540_Offset == 0x540, "USpinBox::boolField540 offset is not 540");
	auto constexpr USpinBox_MinValue_Offset = offsetof(USpinBox, MinValue);
	static_assert(USpinBox_MinValue_Offset == 0x544, "USpinBox::MinValue offset is not 544");
	auto constexpr USpinBox_MaxValue_Offset = offsetof(USpinBox, MaxValue);
	static_assert(USpinBox_MaxValue_Offset == 0x548, "USpinBox::MaxValue offset is not 548");
	auto constexpr USpinBox_MinSliderValue_Offset = offsetof(USpinBox, MinSliderValue);
	static_assert(USpinBox_MinSliderValue_Offset == 0x54c, "USpinBox::MinSliderValue offset is not 54c");
	auto constexpr USpinBox_MaxSliderValue_Offset = offsetof(USpinBox, MaxSliderValue);
	static_assert(USpinBox_MaxSliderValue_Offset == 0x550, "USpinBox::MaxSliderValue offset is not 550");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
