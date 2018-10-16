#pragma once
#include "UAmmoItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Ammo_Flare_C // Size: 0x1D8
	: public UAmmoItem // Size: 0x1D8
{
private:
	typedef UItem_Ammo_Flare_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131917); // id32("BlueprintGeneratedClass Item_Ammo_Flare.Item_Ammo_Flare_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Ammo_Flare_C = sizeof(UItem_Ammo_Flare_C); // 472
    static_assert(sizeof(UItem_Ammo_Flare_C) == 0x1D8, "Size of UItem_Ammo_Flare_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
