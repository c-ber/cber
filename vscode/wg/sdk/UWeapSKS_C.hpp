#pragma once
#include "UDefaultRifleSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapSKS_C // Size: 0xFA0
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapSKS_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135174); // id32("BlueprintGeneratedClass WeapSKS.WeapSKS_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapSKS_C = sizeof(UWeapSKS_C); // 4000
    static_assert(sizeof(UWeapSKS_C) == 0xFA0, "Size of UWeapSKS_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
