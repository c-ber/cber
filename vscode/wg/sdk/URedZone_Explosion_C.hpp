#pragma once
#include "UTslExplosionEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URedZone_Explosion_C // Size: 0x770
	: public UTslExplosionEffect // Size: 0x770
{
private:
	typedef URedZone_Explosion_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125012); // id32("BlueprintGeneratedClass RedZone_Explosion.RedZone_Explosion_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURedZone_Explosion_C = sizeof(URedZone_Explosion_C); // 1904
    static_assert(sizeof(URedZone_Explosion_C) == 0x770, "Size of URedZone_Explosion_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
