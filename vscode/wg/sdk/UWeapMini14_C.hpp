#pragma once
#include "UDefaultRifleSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapMini14_C // Size: 0xFA0
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapMini14_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133397); // id32("BlueprintGeneratedClass WeapMini14.WeapMini14_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapMini14_C = sizeof(UWeapMini14_C); // 4000
    static_assert(sizeof(UWeapMini14_C) == 0xFA0, "Size of UWeapMini14_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
