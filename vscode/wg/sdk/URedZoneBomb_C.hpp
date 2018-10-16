#pragma once
#include "UTslProjectileRedZone.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URedZoneBomb_C // Size: 0x5D0
	: public UTslProjectileRedZone // Size: 0x5D0
{
private:
	typedef URedZoneBomb_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125119); // id32("BlueprintGeneratedClass RedZoneBomb.RedZoneBomb_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURedZoneBomb_C = sizeof(URedZoneBomb_C); // 1488
    static_assert(sizeof(URedZoneBomb_C) == 0x5D0, "Size of URedZoneBomb_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
