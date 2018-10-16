#pragma once
#include "UThrowableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Weapon_Molotov_C // Size: 0x2C8
	: public UThrowableItem // Size: 0x2C8
{
private:
	typedef UItem_Weapon_Molotov_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(129262); // id32("BlueprintGeneratedClass Item_Weapon_Molotov.Item_Weapon_Molotov_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Weapon_Molotov_C = sizeof(UItem_Weapon_Molotov_C); // 712
    static_assert(sizeof(UItem_Weapon_Molotov_C) == 0x2C8, "Size of UItem_Weapon_Molotov_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
