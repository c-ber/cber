#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOptionSettingsButotn_C // Size: 0x288
	: public UUserWidget // Size: 0x248
{
private:
	typedef UOptionSettingsButotn_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169877); // id32("WidgetBlueprintGeneratedClass OptionSettingsButotn.OptionSettingsButotn_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty OptionSettingsButotn.OptionSettingsButotn_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty OptionSettingsButotn.OptionSettingsButotn_C.Button_1 */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty OptionSettingsButotn.OptionSettingsButotn_C.TextBlock_1 */
	FText ButtonDisplayText; /* Ofs: 0x260 Size: 0x18 - TextProperty OptionSettingsButotn.OptionSettingsButotn_C.ButtonDisplayText */
	FScriptMulticastDelegate OnButtonDown; /* Ofs: 0x278 Size: 0x10 - MulticastDelegateProperty OptionSettingsButotn.OptionSettingsButotn_C.OnButtonDown */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetButtonDisplayText(t_structHelper inst, FText value) { inst.WriteOffset(0x260, value); }
	inline bool SetOnButtonDown(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x278, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOptionSettingsButotn_C = sizeof(UOptionSettingsButotn_C); // 648
    static_assert(sizeof(UOptionSettingsButotn_C) == 0x288, "Size of UOptionSettingsButotn_C is not correct.");
	auto constexpr UOptionSettingsButotn_C_UberGraphFrame_Offset = offsetof(UOptionSettingsButotn_C, UberGraphFrame);
	static_assert(UOptionSettingsButotn_C_UberGraphFrame_Offset == 0x248, "UOptionSettingsButotn_C::UberGraphFrame offset is not 248");
	auto constexpr UOptionSettingsButotn_C_Button_1_Offset = offsetof(UOptionSettingsButotn_C, Button_1);
	static_assert(UOptionSettingsButotn_C_Button_1_Offset == 0x250, "UOptionSettingsButotn_C::Button_1 offset is not 250");
	auto constexpr UOptionSettingsButotn_C_TextBlock_1_Offset = offsetof(UOptionSettingsButotn_C, TextBlock_1);
	static_assert(UOptionSettingsButotn_C_TextBlock_1_Offset == 0x258, "UOptionSettingsButotn_C::TextBlock_1 offset is not 258");
	auto constexpr UOptionSettingsButotn_C_ButtonDisplayText_Offset = offsetof(UOptionSettingsButotn_C, ButtonDisplayText);
	static_assert(UOptionSettingsButotn_C_ButtonDisplayText_Offset == 0x260, "UOptionSettingsButotn_C::ButtonDisplayText offset is not 260");
	auto constexpr UOptionSettingsButotn_C_OnButtonDown_Offset = offsetof(UOptionSettingsButotn_C, OnButtonDown);
	static_assert(UOptionSettingsButotn_C_OnButtonDown_Offset == 0x278, "UOptionSettingsButotn_C::OnButtonDown offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
