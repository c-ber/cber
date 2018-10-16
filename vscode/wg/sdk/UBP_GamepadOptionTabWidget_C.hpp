#pragma once
#include "UTslTabSelectorContentsWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadOptionTabWidget_C // Size: 0x398
	: public UTslTabSelectorContentsWidget // Size: 0x378
{
private:
	typedef UBP_GamepadOptionTabWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177958); // id32("WidgetBlueprintGeneratedClass BP_GamepadOptionTabWidget.BP_GamepadOptionTabWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_GamepadOptionTabWidget.BP_GamepadOptionTabWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_GamepadOptionTabWidget.BP_GamepadOptionTabWidget_C.Image_2 */
	ExternalPtr<struct UWidgetSwitcher> StateSwitcher; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_GamepadOptionTabWidget.BP_GamepadOptionTabWidget_C.StateSwitcher */
	ExternalPtr<struct UImage> TitleSelectedUnderline; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_GamepadOptionTabWidget.BP_GamepadOptionTabWidget_C.TitleSelectedUnderline */


	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x380, value); }
	inline bool SetStateSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x388, value); }
	inline bool SetTitleSelectedUnderline(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x390, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadOptionTabWidget_C = sizeof(UBP_GamepadOptionTabWidget_C); // 920
    static_assert(sizeof(UBP_GamepadOptionTabWidget_C) == 0x398, "Size of UBP_GamepadOptionTabWidget_C is not correct.");
	auto constexpr UBP_GamepadOptionTabWidget_C_Image_1_Offset = offsetof(UBP_GamepadOptionTabWidget_C, Image_1);
	static_assert(UBP_GamepadOptionTabWidget_C_Image_1_Offset == 0x378, "UBP_GamepadOptionTabWidget_C::Image_1 offset is not 378");
	auto constexpr UBP_GamepadOptionTabWidget_C_Image_2_Offset = offsetof(UBP_GamepadOptionTabWidget_C, Image_2);
	static_assert(UBP_GamepadOptionTabWidget_C_Image_2_Offset == 0x380, "UBP_GamepadOptionTabWidget_C::Image_2 offset is not 380");
	auto constexpr UBP_GamepadOptionTabWidget_C_StateSwitcher_Offset = offsetof(UBP_GamepadOptionTabWidget_C, StateSwitcher);
	static_assert(UBP_GamepadOptionTabWidget_C_StateSwitcher_Offset == 0x388, "UBP_GamepadOptionTabWidget_C::StateSwitcher offset is not 388");
	auto constexpr UBP_GamepadOptionTabWidget_C_TitleSelectedUnderline_Offset = offsetof(UBP_GamepadOptionTabWidget_C, TitleSelectedUnderline);
	static_assert(UBP_GamepadOptionTabWidget_C_TitleSelectedUnderline_Offset == 0x390, "UBP_GamepadOptionTabWidget_C::TitleSelectedUnderline offset is not 390");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
