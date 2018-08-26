#pragma once
#include "UTslExplosionEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjMolotov_ExplosionInAir_C // Size: 0x770
	: public UTslExplosionEffect // Size: 0x770
{
private:
	typedef UProjMolotov_ExplosionInAir_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128514); // id32("BlueprintGeneratedClass ProjMolotov_ExplosionInAir.ProjMolotov_ExplosionInAir_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjMolotov_ExplosionInAir_C = sizeof(UProjMolotov_ExplosionInAir_C); // 1904
    static_assert(sizeof(UProjMolotov_ExplosionInAir_C) == 0x770, "Size of UProjMolotov_ExplosionInAir_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
