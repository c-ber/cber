#pragma once
#include "UTslImpactEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMeleeWeaponImpact_Default_C // Size: 0x7F0
	: public UTslImpactEffect // Size: 0x7F0
{
private:
	typedef UMeleeWeaponImpact_Default_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(52801); // id32("BlueprintGeneratedClass MeleeWeaponImpact_Default.MeleeWeaponImpact_Default_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMeleeWeaponImpact_Default_C = sizeof(UMeleeWeaponImpact_Default_C); // 2032
    static_assert(sizeof(UMeleeWeaponImpact_Default_C) == 0x7F0, "Size of UMeleeWeaponImpact_Default_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
