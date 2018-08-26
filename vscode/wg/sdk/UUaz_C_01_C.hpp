#pragma once
#include "UUaz_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUaz_C_01_C // Size: 0xA18
	: public UUaz_C // Size: 0xA18
{
private:
	typedef UUaz_C_01_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123905); // id32("BlueprintGeneratedClass Uaz_C_01.Uaz_C_01_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUaz_C_01_C = sizeof(UUaz_C_01_C); // 2584
    static_assert(sizeof(UUaz_C_01_C) == 0xA18, "Size of UUaz_C_01_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
