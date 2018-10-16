#pragma once
#include "UTslParticleBulletTrail.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_UnderwaterArrowTrailEffect_C // Size: 0x490
	: public UTslParticleBulletTrail // Size: 0x490
{
private:
	typedef UBP_UnderwaterArrowTrailEffect_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(53114); // id32("BlueprintGeneratedClass BP_UnderwaterArrowTrailEffect.BP_UnderwaterArrowTrailEffect_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_UnderwaterArrowTrailEffect_C = sizeof(UBP_UnderwaterArrowTrailEffect_C); // 1168
    static_assert(sizeof(UBP_UnderwaterArrowTrailEffect_C) == 0x490, "Size of UBP_UnderwaterArrowTrailEffect_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
