#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOptionButton_C // Size: 0x288
	: public UUserWidget // Size: 0x248
{
private:
	typedef UOptionButton_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169901); // id32("WidgetBlueprintGeneratedClass OptionButton.OptionButton_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty OptionButton.OptionButton_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_2; /* Ofs: 0x250 Size: 0x8 - ObjectProperty OptionButton.OptionButton_C.Button_2 */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty OptionButton.OptionButton_C.TextBlock_1 */
	FText DisplayButtonText; /* Ofs: 0x260 Size: 0x18 - TextProperty OptionButton.OptionButton_C.DisplayButtonText */
	FScriptMulticastDelegate OnClicked; /* Ofs: 0x278 Size: 0x10 - MulticastDelegateProperty OptionButton.OptionButton_C.OnClicked */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_2(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetDisplayButtonText(t_structHelper inst, FText value) { inst.WriteOffset(0x260, value); }
	inline bool SetOnClicked(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x278, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOptionButton_C = sizeof(UOptionButton_C); // 648
    static_assert(sizeof(UOptionButton_C) == 0x288, "Size of UOptionButton_C is not correct.");
	auto constexpr UOptionButton_C_UberGraphFrame_Offset = offsetof(UOptionButton_C, UberGraphFrame);
	static_assert(UOptionButton_C_UberGraphFrame_Offset == 0x248, "UOptionButton_C::UberGraphFrame offset is not 248");
	auto constexpr UOptionButton_C_Button_2_Offset = offsetof(UOptionButton_C, Button_2);
	static_assert(UOptionButton_C_Button_2_Offset == 0x250, "UOptionButton_C::Button_2 offset is not 250");
	auto constexpr UOptionButton_C_TextBlock_1_Offset = offsetof(UOptionButton_C, TextBlock_1);
	static_assert(UOptionButton_C_TextBlock_1_Offset == 0x258, "UOptionButton_C::TextBlock_1 offset is not 258");
	auto constexpr UOptionButton_C_DisplayButtonText_Offset = offsetof(UOptionButton_C, DisplayButtonText);
	static_assert(UOptionButton_C_DisplayButtonText_Offset == 0x260, "UOptionButton_C::DisplayButtonText offset is not 260");
	auto constexpr UOptionButton_C_OnClicked_Offset = offsetof(UOptionButton_C, OnClicked);
	static_assert(UOptionButton_C_OnClicked_Offset == 0x278, "UOptionButton_C::OnClicked offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
