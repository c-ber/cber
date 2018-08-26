#pragma once
#include "UTslParticleBulletTrail.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_UnderwaterBulletTrailEffectMid_C // Size: 0x490
	: public UTslParticleBulletTrail // Size: 0x490
{
private:
	typedef UBP_UnderwaterBulletTrailEffectMid_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(56919); // id32("BlueprintGeneratedClass BP_UnderwaterBulletTrailEffectMid.BP_UnderwaterBulletTrailEffectMid_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_UnderwaterBulletTrailEffectMid_C = sizeof(UBP_UnderwaterBulletTrailEffectMid_C); // 1168
    static_assert(sizeof(UBP_UnderwaterBulletTrailEffectMid_C) == 0x490, "Size of UBP_UnderwaterBulletTrailEffectMid_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
