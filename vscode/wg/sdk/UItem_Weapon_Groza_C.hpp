#pragma once
#include "UItem_Weapon_SKS_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Weapon_Groza_C // Size: 0x2F8
	: public UItem_Weapon_SKS_C // Size: 0x2F8
{
private:
	typedef UItem_Weapon_Groza_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135423); // id32("BlueprintGeneratedClass Item_Weapon_Groza.Item_Weapon_Groza_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Weapon_Groza_C = sizeof(UItem_Weapon_Groza_C); // 760
    static_assert(sizeof(UItem_Weapon_Groza_C) == 0x2F8, "Size of UItem_Weapon_Groza_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
