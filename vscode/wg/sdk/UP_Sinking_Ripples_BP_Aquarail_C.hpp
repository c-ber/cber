#pragma once
#include "UTslParticle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Sinking_Ripples_BP_Aquarail_C // Size: 0x470
	: public UTslParticle // Size: 0x470
{
private:
	typedef UP_Sinking_Ripples_BP_Aquarail_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116044); // id32("BlueprintGeneratedClass P_Sinking_Ripples_BP_Aquarail.P_Sinking_Ripples_BP_Aquarail_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Sinking_Ripples_BP_Aquarail_C = sizeof(UP_Sinking_Ripples_BP_Aquarail_C); // 1136
    static_assert(sizeof(UP_Sinking_Ripples_BP_Aquarail_C) == 0x470, "Size of UP_Sinking_Ripples_BP_Aquarail_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
