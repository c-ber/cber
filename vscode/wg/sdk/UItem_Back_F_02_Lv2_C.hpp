#pragma once
#include "UCustomEquipableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Back_F_02_Lv2_C // Size: 0x3A0
	: public UCustomEquipableItem // Size: 0x3A0
{
private:
	typedef UItem_Back_F_02_Lv2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126202); // id32("BlueprintGeneratedClass Item_Back_F_02_Lv2.Item_Back_F_02_Lv2_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Back_F_02_Lv2_C = sizeof(UItem_Back_F_02_Lv2_C); // 928
    static_assert(sizeof(UItem_Back_F_02_Lv2_C) == 0x3A0, "Size of UItem_Back_F_02_Lv2_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
