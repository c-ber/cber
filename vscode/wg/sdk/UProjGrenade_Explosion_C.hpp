#pragma once
#include "UTslExplosionEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjGrenade_Explosion_C // Size: 0x770
	: public UTslExplosionEffect // Size: 0x770
{
private:
	typedef UProjGrenade_Explosion_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(127424); // id32("BlueprintGeneratedClass ProjGrenade_Explosion.ProjGrenade_Explosion_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjGrenade_Explosion_C = sizeof(UProjGrenade_Explosion_C); // 1904
    static_assert(sizeof(UProjGrenade_Explosion_C) == 0x770, "Size of UProjGrenade_Explosion_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
