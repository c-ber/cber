#pragma once
#include "UTslImpactEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMeleeImpact_Blade_C // Size: 0x7F0
	: public UTslImpactEffect // Size: 0x7F0
{
private:
	typedef UMeleeImpact_Blade_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(129246); // id32("BlueprintGeneratedClass MeleeImpact_Blade.MeleeImpact_Blade_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMeleeImpact_Blade_C = sizeof(UMeleeImpact_Blade_C); // 2032
    static_assert(sizeof(UMeleeImpact_Blade_C) == 0x7F0, "Size of UMeleeImpact_Blade_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
