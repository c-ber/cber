#pragma once
#include "UAttachableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Attach_Weapon_Muzzle_FlashHider_Medium_C // Size: 0x490
	: public UAttachableItem // Size: 0x490
{
private:
	typedef UItem_Attach_Weapon_Muzzle_FlashHider_Medium_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126212); // id32("BlueprintGeneratedClass Item_Attach_Weapon_Muzzle_FlashHider_Medium.Item_Attach_Weapon_Muzzle_FlashHider_Medium_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Attach_Weapon_Muzzle_FlashHider_Medium_C = sizeof(UItem_Attach_Weapon_Muzzle_FlashHider_Medium_C); // 1168
    static_assert(sizeof(UItem_Attach_Weapon_Muzzle_FlashHider_Medium_C) == 0x490, "Size of UItem_Attach_Weapon_Muzzle_FlashHider_Medium_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
