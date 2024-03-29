#pragma once
#include "UEquipableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Head_E_02_Lv1_C // Size: 0x2A8
	: public UEquipableItem // Size: 0x2A8
{
private:
	typedef UItem_Head_E_02_Lv1_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126201); // id32("BlueprintGeneratedClass Item_Head_E_02_Lv1.Item_Head_E_02_Lv1_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Head_E_02_Lv1_C = sizeof(UItem_Head_E_02_Lv1_C); // 680
    static_assert(sizeof(UItem_Head_E_02_Lv1_C) == 0x2A8, "Size of UItem_Head_E_02_Lv1_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
