#pragma once
#include "UTslImpactEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMeleeImpact_Machete_C // Size: 0x7F0
	: public UTslImpactEffect // Size: 0x7F0
{
private:
	typedef UMeleeImpact_Machete_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128890); // id32("BlueprintGeneratedClass MeleeImpact_Machete.MeleeImpact_Machete_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMeleeImpact_Machete_C = sizeof(UMeleeImpact_Machete_C); // 2032
    static_assert(sizeof(UMeleeImpact_Machete_C) == 0x7F0, "Size of UMeleeImpact_Machete_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
