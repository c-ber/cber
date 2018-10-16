#pragma once
#include "UTslExplosionEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjGrenade_ExplosionInAir_C // Size: 0x770
	: public UTslExplosionEffect // Size: 0x770
{
private:
	typedef UProjGrenade_ExplosionInAir_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(127416); // id32("BlueprintGeneratedClass ProjGrenade_ExplosionInAir.ProjGrenade_ExplosionInAir_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjGrenade_ExplosionInAir_C = sizeof(UProjGrenade_ExplosionInAir_C); // 1904
    static_assert(sizeof(UProjGrenade_ExplosionInAir_C) == 0x770, "Size of UProjGrenade_ExplosionInAir_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
