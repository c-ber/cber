#pragma once
#include "ULifeGaugeEffectBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_HealAmoutEffect_C // Size: 0x3B8
	: public ULifeGaugeEffectBaseWidget // Size: 0x3B8
{
private:
	typedef UBP_HealAmoutEffect_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68721); // id32("WidgetBlueprintGeneratedClass BP_HealAmoutEffect.BP_HealAmoutEffect_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_HealAmoutEffect_C = sizeof(UBP_HealAmoutEffect_C); // 952
    static_assert(sizeof(UBP_HealAmoutEffect_C) == 0x3B8, "Size of UBP_HealAmoutEffect_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
