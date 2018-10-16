#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UButtonWidget_C // Size: 0x2F0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UButtonWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168284); // id32("WidgetBlueprintGeneratedClass ButtonWidget.ButtonWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ButtonWidget.ButtonWidget_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_Internal; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ButtonWidget.ButtonWidget_C.Button_Internal */
	ExternalPtr<struct UTextBlock> TextBlock_147; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ButtonWidget.ButtonWidget_C.TextBlock_147 */
	FText ButtonText; /* Ofs: 0x260 Size: 0x18 - TextProperty ButtonWidget.ButtonWidget_C.ButtonText */
	FScriptMulticastDelegate OnClickedEventDispatcher; /* Ofs: 0x278 Size: 0x10 - MulticastDelegateProperty ButtonWidget.ButtonWidget_C.OnClickedEventDispatcher */
	int32_t FontSize; /* Ofs: 0x288 Size: 0x4 - IntProperty ButtonWidget.ButtonWidget_C.FontSize */
	uint8_t UnknownData28C[0x4];
	FScriptMulticastDelegate OnButtonFocusReceived; /* Ofs: 0x290 Size: 0x10 - MulticastDelegateProperty ButtonWidget.ButtonWidget_C.OnButtonFocusReceived */
	FLinearColor FocusedColor; /* Ofs: 0x2A0 Size: 0x10 - StructProperty ButtonWidget.ButtonWidget_C.FocusedColor */
	FScriptMulticastDelegate OnNavigateKeyDown; /* Ofs: 0x2B0 Size: 0x10 - MulticastDelegateProperty ButtonWidget.ButtonWidget_C.OnNavigateKeyDown */
	FLinearColor NormalColor; /* Ofs: 0x2C0 Size: 0x10 - StructProperty ButtonWidget.ButtonWidget_C.NormalColor */
	FScriptMulticastDelegate OnGamepadA; /* Ofs: 0x2D0 Size: 0x10 - MulticastDelegateProperty ButtonWidget.ButtonWidget_C.OnGamepadA */
	FScriptMulticastDelegate OnGamepadB; /* Ofs: 0x2E0 Size: 0x10 - MulticastDelegateProperty ButtonWidget.ButtonWidget_C.OnGamepadB */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_Internal(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTextBlock_147(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetButtonText(t_structHelper inst, FText value) { inst.WriteOffset(0x260, value); }
	inline bool SetOnClickedEventDispatcher(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x278, value); }
	inline bool SetFontSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x288, value); }
	inline bool SetOnButtonFocusReceived(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x290, value); }
	inline bool SetFocusedColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetOnNavigateKeyDown(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetNormalColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetOnGamepadA(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetOnGamepadB(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUButtonWidget_C = sizeof(UButtonWidget_C); // 752
    static_assert(sizeof(UButtonWidget_C) == 0x2F0, "Size of UButtonWidget_C is not correct.");
	auto constexpr UButtonWidget_C_UberGraphFrame_Offset = offsetof(UButtonWidget_C, UberGraphFrame);
	static_assert(UButtonWidget_C_UberGraphFrame_Offset == 0x248, "UButtonWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UButtonWidget_C_Button_Internal_Offset = offsetof(UButtonWidget_C, Button_Internal);
	static_assert(UButtonWidget_C_Button_Internal_Offset == 0x250, "UButtonWidget_C::Button_Internal offset is not 250");
	auto constexpr UButtonWidget_C_TextBlock_147_Offset = offsetof(UButtonWidget_C, TextBlock_147);
	static_assert(UButtonWidget_C_TextBlock_147_Offset == 0x258, "UButtonWidget_C::TextBlock_147 offset is not 258");
	auto constexpr UButtonWidget_C_ButtonText_Offset = offsetof(UButtonWidget_C, ButtonText);
	static_assert(UButtonWidget_C_ButtonText_Offset == 0x260, "UButtonWidget_C::ButtonText offset is not 260");
	auto constexpr UButtonWidget_C_OnClickedEventDispatcher_Offset = offsetof(UButtonWidget_C, OnClickedEventDispatcher);
	static_assert(UButtonWidget_C_OnClickedEventDispatcher_Offset == 0x278, "UButtonWidget_C::OnClickedEventDispatcher offset is not 278");
	auto constexpr UButtonWidget_C_FontSize_Offset = offsetof(UButtonWidget_C, FontSize);
	static_assert(UButtonWidget_C_FontSize_Offset == 0x288, "UButtonWidget_C::FontSize offset is not 288");
	auto constexpr UButtonWidget_C_OnButtonFocusReceived_Offset = offsetof(UButtonWidget_C, OnButtonFocusReceived);
	static_assert(UButtonWidget_C_OnButtonFocusReceived_Offset == 0x290, "UButtonWidget_C::OnButtonFocusReceived offset is not 290");
	auto constexpr UButtonWidget_C_FocusedColor_Offset = offsetof(UButtonWidget_C, FocusedColor);
	static_assert(UButtonWidget_C_FocusedColor_Offset == 0x2a0, "UButtonWidget_C::FocusedColor offset is not 2a0");
	auto constexpr UButtonWidget_C_OnNavigateKeyDown_Offset = offsetof(UButtonWidget_C, OnNavigateKeyDown);
	static_assert(UButtonWidget_C_OnNavigateKeyDown_Offset == 0x2b0, "UButtonWidget_C::OnNavigateKeyDown offset is not 2b0");
	auto constexpr UButtonWidget_C_NormalColor_Offset = offsetof(UButtonWidget_C, NormalColor);
	static_assert(UButtonWidget_C_NormalColor_Offset == 0x2c0, "UButtonWidget_C::NormalColor offset is not 2c0");
	auto constexpr UButtonWidget_C_OnGamepadA_Offset = offsetof(UButtonWidget_C, OnGamepadA);
	static_assert(UButtonWidget_C_OnGamepadA_Offset == 0x2d0, "UButtonWidget_C::OnGamepadA offset is not 2d0");
	auto constexpr UButtonWidget_C_OnGamepadB_Offset = offsetof(UButtonWidget_C, OnGamepadB);
	static_assert(UButtonWidget_C_OnGamepadB_Offset == 0x2e0, "UButtonWidget_C::OnGamepadB offset is not 2e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
