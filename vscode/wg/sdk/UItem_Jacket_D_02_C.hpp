#pragma once
#include "UEquipableItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem_Jacket_D_02_C // Size: 0x2A8
	: public UEquipableItem // Size: 0x2A8
{
private:
	typedef UItem_Jacket_D_02_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91111); // id32("BlueprintGeneratedClass Item_Jacket_D_02.Item_Jacket_D_02_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem_Jacket_D_02_C = sizeof(UItem_Jacket_D_02_C); // 680
    static_assert(sizeof(UItem_Jacket_D_02_C) == 0x2A8, "Size of UItem_Jacket_D_02_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
