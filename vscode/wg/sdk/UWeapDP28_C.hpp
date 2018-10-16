#pragma once
#include "UDefaultRifleSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapDP28_C // Size: 0xFA0
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapDP28_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130656); // id32("BlueprintGeneratedClass WeapDP28.WeapDP28_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapDP28_C = sizeof(UWeapDP28_C); // 4000
    static_assert(sizeof(UWeapDP28_C) == 0xFA0, "Size of UWeapDP28_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
