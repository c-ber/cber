#pragma once
#include "UTslImpactEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGunImpact_Large_TN_C // Size: 0x7F0
	: public UTslImpactEffect // Size: 0x7F0
{
private:
	typedef UGunImpact_Large_TN_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131816); // id32("BlueprintGeneratedClass GunImpact_Large_TN.GunImpact_Large_TN_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGunImpact_Large_TN_C = sizeof(UGunImpact_Large_TN_C); // 2032
    static_assert(sizeof(UGunImpact_Large_TN_C) == 0x7F0, "Size of UGunImpact_Large_TN_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
