#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UChildOptionTitleWidget_C // Size: 0x270
	: public UUserWidget // Size: 0x248
{
private:
	typedef UChildOptionTitleWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(170026); // id32("WidgetBlueprintGeneratedClass ChildOptionTitleWidget.ChildOptionTitleWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ChildOptionTitleWidget.ChildOptionTitleWidget_C.Image_1 */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ChildOptionTitleWidget.ChildOptionTitleWidget_C.TextBlock_1 */
	FText DisplayTitleText; /* Ofs: 0x258 Size: 0x18 - TextProperty ChildOptionTitleWidget.ChildOptionTitleWidget_C.DisplayTitleText */


	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
	inline bool SetDisplayTitleText(t_structHelper inst, FText value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUChildOptionTitleWidget_C = sizeof(UChildOptionTitleWidget_C); // 624
    static_assert(sizeof(UChildOptionTitleWidget_C) == 0x270, "Size of UChildOptionTitleWidget_C is not correct.");
	auto constexpr UChildOptionTitleWidget_C_Image_1_Offset = offsetof(UChildOptionTitleWidget_C, Image_1);
	static_assert(UChildOptionTitleWidget_C_Image_1_Offset == 0x248, "UChildOptionTitleWidget_C::Image_1 offset is not 248");
	auto constexpr UChildOptionTitleWidget_C_TextBlock_1_Offset = offsetof(UChildOptionTitleWidget_C, TextBlock_1);
	static_assert(UChildOptionTitleWidget_C_TextBlock_1_Offset == 0x250, "UChildOptionTitleWidget_C::TextBlock_1 offset is not 250");
	auto constexpr UChildOptionTitleWidget_C_DisplayTitleText_Offset = offsetof(UChildOptionTitleWidget_C, DisplayTitleText);
	static_assert(UChildOptionTitleWidget_C_DisplayTitleText_Offset == 0x258, "UChildOptionTitleWidget_C::DisplayTitleText offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
