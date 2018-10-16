#pragma once
#include "UTslImpactEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGunImpact_Shotgun_C // Size: 0x7F0
	: public UTslImpactEffect // Size: 0x7F0
{
private:
	typedef UGunImpact_Shotgun_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133193); // id32("BlueprintGeneratedClass GunImpact_Shotgun.GunImpact_Shotgun_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGunImpact_Shotgun_C = sizeof(UGunImpact_Shotgun_C); // 2032
    static_assert(sizeof(UGunImpact_Shotgun_C) == 0x7F0, "Size of UGunImpact_Shotgun_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
