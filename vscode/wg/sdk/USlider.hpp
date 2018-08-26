#pragma once
#include "UWidget.hpp"
#include "FSliderStyle.hpp"
#include "EOrientation.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlider // Size: 0x428
	: public UWidget // Size: 0x130
{
private:
	typedef USlider t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(517); // id32("Class UMG.Slider")
		return ptr;
	}
	float Value; /* Ofs: 0x130 Size: 0x4 - FloatProperty UMG.Slider.Value */
	uint8_t UnknownData134[0x4];
	FScriptDelegate ValueDelegate; /* Ofs: 0x138 Size: 0x10 - DelegateProperty UMG.Slider.ValueDelegate */
	FSliderStyle WidgetStyle; /* Ofs: 0x148 Size: 0x250 - StructProperty UMG.Slider.WidgetStyle */
	TEnumAsByte<enum EOrientation> Orientation; /* Ofs: 0x398 Size: 0x1 - ByteProperty UMG.Slider.Orientation */
	uint8_t UnknownData399[0x3];
	FLinearColor SliderBarColor; /* Ofs: 0x39C Size: 0x10 - StructProperty UMG.Slider.SliderBarColor */
	FLinearColor SliderHandleColor; /* Ofs: 0x3AC Size: 0x10 - StructProperty UMG.Slider.SliderHandleColor */
	uint8_t boolField3BC;
	uint8_t boolField3BD;
	uint8_t UnknownData3BE[0x2];
	float StepSize; /* Ofs: 0x3C0 Size: 0x4 - FloatProperty UMG.Slider.StepSize */
	uint8_t boolField3C4;
	uint8_t UnknownData3C5[0x3];
	FScriptMulticastDelegate OnMouseCaptureBegin; /* Ofs: 0x3C8 Size: 0x10 - MulticastDelegateProperty UMG.Slider.OnMouseCaptureBegin */
	FScriptMulticastDelegate OnMouseCaptureEnd; /* Ofs: 0x3D8 Size: 0x10 - MulticastDelegateProperty UMG.Slider.OnMouseCaptureEnd */
	FScriptMulticastDelegate OnControllerCaptureBegin; /* Ofs: 0x3E8 Size: 0x10 - MulticastDelegateProperty UMG.Slider.OnControllerCaptureBegin */
	FScriptMulticastDelegate OnControllerCaptureEnd; /* Ofs: 0x3F8 Size: 0x10 - MulticastDelegateProperty UMG.Slider.OnControllerCaptureEnd */
	FScriptMulticastDelegate OnValueChanged; /* Ofs: 0x408 Size: 0x10 - MulticastDelegateProperty UMG.Slider.OnValueChanged */
	uint8_t UnknownData418[0x10];


	inline bool SetValue(t_structHelper inst, float value) { inst.WriteOffset(0x130, value); }
	inline bool SetValueDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x138, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FSliderStyle value) { inst.WriteOffset(0x148, value); }
	inline bool SetOrientation(t_structHelper inst, TEnumAsByte<enum EOrientation> value) { inst.WriteOffset(0x398, value); }
	inline bool SetSliderBarColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x39C, value); }
	inline bool SetSliderHandleColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x3AC, value); }
	inline bool IndentHandle()
	{
		return boolField3BC& 0x1;
	}
	inline bool SetIndentHandle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3BC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool Locked()
	{
		return boolField3BD& 0x1;
	}
	inline bool SetLocked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3BD, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStepSize(t_structHelper inst, float value) { inst.WriteOffset(0x3C0, value); }
	inline bool IsFocusable()
	{
		return boolField3C4& 0x1;
	}
	inline bool SetIsFocusable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3C4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnMouseCaptureBegin(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetOnMouseCaptureEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetOnControllerCaptureBegin(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetOnControllerCaptureEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetOnValueChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlider = sizeof(USlider); // 1064
    static_assert(sizeof(USlider) == 0x428, "Size of USlider is not correct.");
	auto constexpr USlider_Value_Offset = offsetof(USlider, Value);
	static_assert(USlider_Value_Offset == 0x130, "USlider::Value offset is not 130");
	auto constexpr USlider_ValueDelegate_Offset = offsetof(USlider, ValueDelegate);
	static_assert(USlider_ValueDelegate_Offset == 0x138, "USlider::ValueDelegate offset is not 138");
	auto constexpr USlider_WidgetStyle_Offset = offsetof(USlider, WidgetStyle);
	static_assert(USlider_WidgetStyle_Offset == 0x148, "USlider::WidgetStyle offset is not 148");
	auto constexpr USlider_Orientation_Offset = offsetof(USlider, Orientation);
	static_assert(USlider_Orientation_Offset == 0x398, "USlider::Orientation offset is not 398");
	auto constexpr USlider_SliderBarColor_Offset = offsetof(USlider, SliderBarColor);
	static_assert(USlider_SliderBarColor_Offset == 0x39c, "USlider::SliderBarColor offset is not 39c");
	auto constexpr USlider_SliderHandleColor_Offset = offsetof(USlider, SliderHandleColor);
	static_assert(USlider_SliderHandleColor_Offset == 0x3ac, "USlider::SliderHandleColor offset is not 3ac");
	auto constexpr USlider_boolField3BC_Offset = offsetof(USlider, boolField3BC);
	static_assert(USlider_boolField3BC_Offset == 0x3bc, "USlider::boolField3BC offset is not 3bc");
	auto constexpr USlider_boolField3BD_Offset = offsetof(USlider, boolField3BD);
	static_assert(USlider_boolField3BD_Offset == 0x3bd, "USlider::boolField3BD offset is not 3bd");
	auto constexpr USlider_StepSize_Offset = offsetof(USlider, StepSize);
	static_assert(USlider_StepSize_Offset == 0x3c0, "USlider::StepSize offset is not 3c0");
	auto constexpr USlider_boolField3C4_Offset = offsetof(USlider, boolField3C4);
	static_assert(USlider_boolField3C4_Offset == 0x3c4, "USlider::boolField3C4 offset is not 3c4");
	auto constexpr USlider_OnMouseCaptureBegin_Offset = offsetof(USlider, OnMouseCaptureBegin);
	static_assert(USlider_OnMouseCaptureBegin_Offset == 0x3c8, "USlider::OnMouseCaptureBegin offset is not 3c8");
	auto constexpr USlider_OnMouseCaptureEnd_Offset = offsetof(USlider, OnMouseCaptureEnd);
	static_assert(USlider_OnMouseCaptureEnd_Offset == 0x3d8, "USlider::OnMouseCaptureEnd offset is not 3d8");
	auto constexpr USlider_OnControllerCaptureBegin_Offset = offsetof(USlider, OnControllerCaptureBegin);
	static_assert(USlider_OnControllerCaptureBegin_Offset == 0x3e8, "USlider::OnControllerCaptureBegin offset is not 3e8");
	auto constexpr USlider_OnControllerCaptureEnd_Offset = offsetof(USlider, OnControllerCaptureEnd);
	static_assert(USlider_OnControllerCaptureEnd_Offset == 0x3f8, "USlider::OnControllerCaptureEnd offset is not 3f8");
	auto constexpr USlider_OnValueChanged_Offset = offsetof(USlider, OnValueChanged);
	static_assert(USlider_OnValueChanged_Offset == 0x408, "USlider::OnValueChanged offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
