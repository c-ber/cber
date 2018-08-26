#pragma once
#include "UItem_Ammo_12Guage_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UToy_Item_Ammo_12Guage_C // Size: 0x1D8
	: public UItem_Ammo_12Guage_C // Size: 0x1D8
{
private:
	typedef UToy_Item_Ammo_12Guage_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133368); // id32("BlueprintGeneratedClass Toy_Item_Ammo_12Guage.Toy_Item_Ammo_12Guage_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUToy_Item_Ammo_12Guage_C = sizeof(UToy_Item_Ammo_12Guage_C); // 472
    static_assert(sizeof(UToy_Item_Ammo_12Guage_C) == 0x1D8, "Size of UToy_Item_Ammo_12Guage_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
