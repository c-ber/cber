#pragma once
#include "ULifeGaugeTemplateBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_LifeGaugeTemplateWidget_C // Size: 0x450
	: public ULifeGaugeTemplateBaseWidget // Size: 0x430
{
private:
	typedef UBP_LifeGaugeTemplateWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68780); // id32("WidgetBlueprintGeneratedClass BP_LifeGaugeTemplateWidget.BP_LifeGaugeTemplateWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> Warning2; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_LifeGaugeTemplateWidget.BP_LifeGaugeTemplateWidget_C.Warning2 */
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x438 Size: 0x8 - ObjectProperty BP_LifeGaugeTemplateWidget.BP_LifeGaugeTemplateWidget_C.Warning */
	ExternalPtr<struct UImage> Background; /* Ofs: 0x440 Size: 0x8 - ObjectProperty BP_LifeGaugeTemplateWidget.BP_LifeGaugeTemplateWidget_C.Background */
	ExternalPtr<struct UInvalidationBox> LifeGaugeInvalidationBox; /* Ofs: 0x448 Size: 0x8 - ObjectProperty BP_LifeGaugeTemplateWidget.BP_LifeGaugeTemplateWidget_C.LifeGaugeInvalidationBox */


	inline bool SetWarning2(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x430, value); }
	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x438, value); }
	inline bool SetBackground(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x440, value); }
	inline bool SetLifeGaugeInvalidationBox(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x448, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_LifeGaugeTemplateWidget_C = sizeof(UBP_LifeGaugeTemplateWidget_C); // 1104
    static_assert(sizeof(UBP_LifeGaugeTemplateWidget_C) == 0x450, "Size of UBP_LifeGaugeTemplateWidget_C is not correct.");
	auto constexpr UBP_LifeGaugeTemplateWidget_C_Warning2_Offset = offsetof(UBP_LifeGaugeTemplateWidget_C, Warning2);
	static_assert(UBP_LifeGaugeTemplateWidget_C_Warning2_Offset == 0x430, "UBP_LifeGaugeTemplateWidget_C::Warning2 offset is not 430");
	auto constexpr UBP_LifeGaugeTemplateWidget_C_Warning_Offset = offsetof(UBP_LifeGaugeTemplateWidget_C, Warning);
	static_assert(UBP_LifeGaugeTemplateWidget_C_Warning_Offset == 0x438, "UBP_LifeGaugeTemplateWidget_C::Warning offset is not 438");
	auto constexpr UBP_LifeGaugeTemplateWidget_C_Background_Offset = offsetof(UBP_LifeGaugeTemplateWidget_C, Background);
	static_assert(UBP_LifeGaugeTemplateWidget_C_Background_Offset == 0x440, "UBP_LifeGaugeTemplateWidget_C::Background offset is not 440");
	auto constexpr UBP_LifeGaugeTemplateWidget_C_LifeGaugeInvalidationBox_Offset = offsetof(UBP_LifeGaugeTemplateWidget_C, LifeGaugeInvalidationBox);
	static_assert(UBP_LifeGaugeTemplateWidget_C_LifeGaugeInvalidationBox_Offset == 0x448, "UBP_LifeGaugeTemplateWidget_C::LifeGaugeInvalidationBox offset is not 448");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
