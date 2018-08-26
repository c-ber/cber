#pragma once
#include "UContentWidget.hpp"
#include "FButtonStyle.hpp"
#include "FLinearColor.hpp"
#include "EButtonClickMethod.hpp"
#include "EButtonTouchMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UButton // Size: 0x480
	: public UContentWidget // Size: 0x148
{
private:
	typedef UButton t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(497); // id32("Class UMG.Button")
		return ptr;
	}
	ExternalPtr<struct USlateWidgetStyleAsset> Style; /* Ofs: 0x148 Size: 0x8 - ObjectProperty UMG.Button.Style */
	FButtonStyle WidgetStyle; /* Ofs: 0x150 Size: 0x2A8 - StructProperty UMG.Button.WidgetStyle */
	FLinearColor ColorAndOpacity; /* Ofs: 0x3F8 Size: 0x10 - StructProperty UMG.Button.ColorAndOpacity */
	FLinearColor BackgroundColor; /* Ofs: 0x408 Size: 0x10 - StructProperty UMG.Button.BackgroundColor */
	TEnumAsByte<enum EButtonClickMethod> ClickMethod; /* Ofs: 0x418 Size: 0x1 - ByteProperty UMG.Button.ClickMethod */
	TEnumAsByte<enum EButtonTouchMethod> TouchMethod; /* Ofs: 0x419 Size: 0x1 - ByteProperty UMG.Button.TouchMethod */
	uint8_t boolField41A;
	uint8_t UnknownData41B[0x5];
	FScriptMulticastDelegate OnClicked; /* Ofs: 0x420 Size: 0x10 - MulticastDelegateProperty UMG.Button.OnClicked */
	FScriptMulticastDelegate OnPressed; /* Ofs: 0x430 Size: 0x10 - MulticastDelegateProperty UMG.Button.OnPressed */
	FScriptMulticastDelegate OnReleased; /* Ofs: 0x440 Size: 0x10 - MulticastDelegateProperty UMG.Button.OnReleased */
	FScriptMulticastDelegate OnHovered; /* Ofs: 0x450 Size: 0x10 - MulticastDelegateProperty UMG.Button.OnHovered */
	FScriptMulticastDelegate OnUnhovered; /* Ofs: 0x460 Size: 0x10 - MulticastDelegateProperty UMG.Button.OnUnhovered */
	uint8_t UnknownData470[0x10];


	inline bool SetStyle(t_structHelper inst, ExternalPtr<struct USlateWidgetStyleAsset> value) { inst.WriteOffset(0x148, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x150, value); }
	inline bool SetColorAndOpacity(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetBackgroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x408, value); }
	inline bool SetClickMethod(t_structHelper inst, TEnumAsByte<enum EButtonClickMethod> value) { inst.WriteOffset(0x418, value); }
	inline bool SetTouchMethod(t_structHelper inst, TEnumAsByte<enum EButtonTouchMethod> value) { inst.WriteOffset(0x419, value); }
	inline bool IsFocusable()
	{
		return boolField41A& 0x1;
	}
	inline bool SetIsFocusable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnClicked(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x420, value); }
	inline bool SetOnPressed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x430, value); }
	inline bool SetOnReleased(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x440, value); }
	inline bool SetOnHovered(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x450, value); }
	inline bool SetOnUnhovered(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUButton = sizeof(UButton); // 1152
    static_assert(sizeof(UButton) == 0x480, "Size of UButton is not correct.");
	auto constexpr UButton_Style_Offset = offsetof(UButton, Style);
	static_assert(UButton_Style_Offset == 0x148, "UButton::Style offset is not 148");
	auto constexpr UButton_WidgetStyle_Offset = offsetof(UButton, WidgetStyle);
	static_assert(UButton_WidgetStyle_Offset == 0x150, "UButton::WidgetStyle offset is not 150");
	auto constexpr UButton_ColorAndOpacity_Offset = offsetof(UButton, ColorAndOpacity);
	static_assert(UButton_ColorAndOpacity_Offset == 0x3f8, "UButton::ColorAndOpacity offset is not 3f8");
	auto constexpr UButton_BackgroundColor_Offset = offsetof(UButton, BackgroundColor);
	static_assert(UButton_BackgroundColor_Offset == 0x408, "UButton::BackgroundColor offset is not 408");
	auto constexpr UButton_ClickMethod_Offset = offsetof(UButton, ClickMethod);
	static_assert(UButton_ClickMethod_Offset == 0x418, "UButton::ClickMethod offset is not 418");
	auto constexpr UButton_TouchMethod_Offset = offsetof(UButton, TouchMethod);
	static_assert(UButton_TouchMethod_Offset == 0x419, "UButton::TouchMethod offset is not 419");
	auto constexpr UButton_boolField41A_Offset = offsetof(UButton, boolField41A);
	static_assert(UButton_boolField41A_Offset == 0x41a, "UButton::boolField41A offset is not 41a");
	auto constexpr UButton_OnClicked_Offset = offsetof(UButton, OnClicked);
	static_assert(UButton_OnClicked_Offset == 0x420, "UButton::OnClicked offset is not 420");
	auto constexpr UButton_OnPressed_Offset = offsetof(UButton, OnPressed);
	static_assert(UButton_OnPressed_Offset == 0x430, "UButton::OnPressed offset is not 430");
	auto constexpr UButton_OnReleased_Offset = offsetof(UButton, OnReleased);
	static_assert(UButton_OnReleased_Offset == 0x440, "UButton::OnReleased offset is not 440");
	auto constexpr UButton_OnHovered_Offset = offsetof(UButton, OnHovered);
	static_assert(UButton_OnHovered_Offset == 0x450, "UButton::OnHovered offset is not 450");
	auto constexpr UButton_OnUnhovered_Offset = offsetof(UButton, OnUnhovered);
	static_assert(UButton_OnUnhovered_Offset == 0x460, "UButton::OnUnhovered offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
