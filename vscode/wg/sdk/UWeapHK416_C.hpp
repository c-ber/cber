#pragma once
#include "UDefaultRifleSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapHK416_C // Size: 0xFA0
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapHK416_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133400); // id32("BlueprintGeneratedClass WeapHK416.WeapHK416_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapHK416_C = sizeof(UWeapHK416_C); // 4000
    static_assert(sizeof(UWeapHK416_C) == 0xFA0, "Size of UWeapHK416_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
