#pragma once
#include "UTslDamageType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDmgTypeExplosion_Grenade_C // Size: 0xB0
	: public UTslDamageType // Size: 0xB0
{
private:
	typedef UDmgTypeExplosion_Grenade_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(127428); // id32("BlueprintGeneratedClass DmgTypeExplosion_Grenade.DmgTypeExplosion_Grenade_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDmgTypeExplosion_Grenade_C = sizeof(UDmgTypeExplosion_Grenade_C); // 176
    static_assert(sizeof(UDmgTypeExplosion_Grenade_C) == 0xB0, "Size of UDmgTypeExplosion_Grenade_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
