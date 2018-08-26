#pragma once
#include "UCameraShake.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCS_Land_Heavy_C // Size: 0x170
	: public UCameraShake // Size: 0x170
{
private:
	typedef UCS_Land_Heavy_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(92952); // id32("BlueprintGeneratedClass CS_Land_Heavy.CS_Land_Heavy_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCS_Land_Heavy_C = sizeof(UCS_Land_Heavy_C); // 368
    static_assert(sizeof(UCS_Land_Heavy_C) == 0x170, "Size of UCS_Land_Heavy_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
