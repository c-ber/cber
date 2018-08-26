#pragma once
#include "UHealItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHealOverTimeItem // Size: 0x210
	: public UHealItem // Size: 0x208
{
private:
	typedef UHealOverTimeItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1905); // id32("Class TslGame.HealOverTimeItem")
		return ptr;
	}
	ExternalPtr<struct UClass> HealOverTimeBuffClass; /* Ofs: 0x208 Size: 0x8 - ClassProperty TslGame.HealOverTimeItem.HealOverTimeBuffClass */


	inline bool SetHealOverTimeBuffClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x208, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHealOverTimeItem = sizeof(UHealOverTimeItem); // 528
    static_assert(sizeof(UHealOverTimeItem) == 0x210, "Size of UHealOverTimeItem is not correct.");
	auto constexpr UHealOverTimeItem_HealOverTimeBuffClass_Offset = offsetof(UHealOverTimeItem, HealOverTimeBuffClass);
	static_assert(UHealOverTimeItem_HealOverTimeBuffClass_Offset == 0x208, "UHealOverTimeItem::HealOverTimeBuffClass offset is not 208");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
