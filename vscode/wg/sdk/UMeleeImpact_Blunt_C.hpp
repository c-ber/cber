#pragma once
#include "UTslImpactEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMeleeImpact_Blunt_C // Size: 0x7F0
	: public UTslImpactEffect // Size: 0x7F0
{
private:
	typedef UMeleeImpact_Blunt_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(52967); // id32("BlueprintGeneratedClass MeleeImpact_Blunt.MeleeImpact_Blunt_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMeleeImpact_Blunt_C = sizeof(UMeleeImpact_Blunt_C); // 2032
    static_assert(sizeof(UMeleeImpact_Blunt_C) == 0x7F0, "Size of UMeleeImpact_Blunt_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
