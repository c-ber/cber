#pragma once
#include "UCarapackage_RedBox_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarapackage_FlareGun_C // Size: 0x650
	: public UCarapackage_RedBox_C // Size: 0x650
{
private:
	typedef UCarapackage_FlareGun_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126516); // id32("BlueprintGeneratedClass Carapackage_FlareGun.Carapackage_FlareGun_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarapackage_FlareGun_C = sizeof(UCarapackage_FlareGun_C); // 1616
    static_assert(sizeof(UCarapackage_FlareGun_C) == 0x650, "Size of UCarapackage_FlareGun_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
