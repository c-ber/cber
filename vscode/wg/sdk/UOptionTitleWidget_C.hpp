#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOptionTitleWidget_C // Size: 0x268
	: public UUserWidget // Size: 0x248
{
private:
	typedef UOptionTitleWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169866); // id32("WidgetBlueprintGeneratedClass OptionTitleWidget.OptionTitleWidget_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty OptionTitleWidget.OptionTitleWidget_C.TextBlock_1 */
	FText DisplayTitleText; /* Ofs: 0x250 Size: 0x18 - TextProperty OptionTitleWidget.OptionTitleWidget_C.DisplayTitleText */


	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetDisplayTitleText(t_structHelper inst, FText value) { inst.WriteOffset(0x250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOptionTitleWidget_C = sizeof(UOptionTitleWidget_C); // 616
    static_assert(sizeof(UOptionTitleWidget_C) == 0x268, "Size of UOptionTitleWidget_C is not correct.");
	auto constexpr UOptionTitleWidget_C_TextBlock_1_Offset = offsetof(UOptionTitleWidget_C, TextBlock_1);
	static_assert(UOptionTitleWidget_C_TextBlock_1_Offset == 0x248, "UOptionTitleWidget_C::TextBlock_1 offset is not 248");
	auto constexpr UOptionTitleWidget_C_DisplayTitleText_Offset = offsetof(UOptionTitleWidget_C, DisplayTitleText);
	static_assert(UOptionTitleWidget_C_DisplayTitleText_Offset == 0x250, "UOptionTitleWidget_C::DisplayTitleText offset is not 250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
