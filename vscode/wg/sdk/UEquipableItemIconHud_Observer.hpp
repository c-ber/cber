#pragma once
#include "UEquipableItemIconHudBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEquipableItemIconHud_Observer // Size: 0x318
	: public UEquipableItemIconHudBaseWidget // Size: 0x318
{
private:
	typedef UEquipableItemIconHud_Observer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1523); // id32("Class TslGame.EquipableItemIconHud_Observer")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEquipableItemIconHud_Observer = sizeof(UEquipableItemIconHud_Observer); // 792
    static_assert(sizeof(UEquipableItemIconHud_Observer) == 0x318, "Size of UEquipableItemIconHud_Observer is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
