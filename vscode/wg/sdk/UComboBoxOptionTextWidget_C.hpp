#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UComboBoxOptionTextWidget_C // Size: 0x268
	: public UUserWidget // Size: 0x248
{
private:
	typedef UComboBoxOptionTextWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168914); // id32("WidgetBlueprintGeneratedClass ComboBoxOptionTextWidget.ComboBoxOptionTextWidget_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ComboBoxOptionTextWidget.ComboBoxOptionTextWidget_C.TextBlock_1 */
	FText DisplayName; /* Ofs: 0x250 Size: 0x18 - TextProperty ComboBoxOptionTextWidget.ComboBoxOptionTextWidget_C.DisplayName */


	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUComboBoxOptionTextWidget_C = sizeof(UComboBoxOptionTextWidget_C); // 616
    static_assert(sizeof(UComboBoxOptionTextWidget_C) == 0x268, "Size of UComboBoxOptionTextWidget_C is not correct.");
	auto constexpr UComboBoxOptionTextWidget_C_TextBlock_1_Offset = offsetof(UComboBoxOptionTextWidget_C, TextBlock_1);
	static_assert(UComboBoxOptionTextWidget_C_TextBlock_1_Offset == 0x248, "UComboBoxOptionTextWidget_C::TextBlock_1 offset is not 248");
	auto constexpr UComboBoxOptionTextWidget_C_DisplayName_Offset = offsetof(UComboBoxOptionTextWidget_C, DisplayName);
	static_assert(UComboBoxOptionTextWidget_C_DisplayName_Offset == 0x250, "UComboBoxOptionTextWidget_C::DisplayName offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
