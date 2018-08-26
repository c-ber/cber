#pragma once
#include "UWeaponItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Weapon_M16A4_C // Size: 0x2F8
	: public UWeaponItem // Size: 0x2F8
{
private:
	typedef UItem_Weapon_M16A4_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131904); // id32("BlueprintGeneratedClass Item_Weapon_M16A4.Item_Weapon_M16A4_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Weapon_M16A4_C = sizeof(UItem_Weapon_M16A4_C); // 760
    static_assert(sizeof(UItem_Weapon_M16A4_C) == 0x2F8, "Size of UItem_Weapon_M16A4_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
