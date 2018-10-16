#pragma once
#include "ULifeGaugeTemplateBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_LifeGaugeTemplateWidget2_C // Size: 0x440
	: public ULifeGaugeTemplateBaseWidget // Size: 0x430
{
private:
	typedef UBP_LifeGaugeTemplateWidget2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(186864); // id32("WidgetBlueprintGeneratedClass BP_LifeGaugeTemplateWidget2.BP_LifeGaugeTemplateWidget2_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> Warning2; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_LifeGaugeTemplateWidget2.BP_LifeGaugeTemplateWidget2_C.Warning2 */
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x438 Size: 0x8 - ObjectProperty BP_LifeGaugeTemplateWidget2.BP_LifeGaugeTemplateWidget2_C.Warning */


	inline bool SetWarning2(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x430, value); }
	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_LifeGaugeTemplateWidget2_C = sizeof(UBP_LifeGaugeTemplateWidget2_C); // 1088
    static_assert(sizeof(UBP_LifeGaugeTemplateWidget2_C) == 0x440, "Size of UBP_LifeGaugeTemplateWidget2_C is not correct.");
	auto constexpr UBP_LifeGaugeTemplateWidget2_C_Warning2_Offset = offsetof(UBP_LifeGaugeTemplateWidget2_C, Warning2);
	static_assert(UBP_LifeGaugeTemplateWidget2_C_Warning2_Offset == 0x430, "UBP_LifeGaugeTemplateWidget2_C::Warning2 offset is not 430");
	auto constexpr UBP_LifeGaugeTemplateWidget2_C_Warning_Offset = offsetof(UBP_LifeGaugeTemplateWidget2_C, Warning);
	static_assert(UBP_LifeGaugeTemplateWidget2_C_Warning_Offset == 0x438, "UBP_LifeGaugeTemplateWidget2_C::Warning offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
