#pragma once
#include "UHealItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInstantHealItem // Size: 0x210
	: public UHealItem // Size: 0x208
{
private:
	typedef UInstantHealItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1906); // id32("Class TslGame.InstantHealItem")
		return ptr;
	}
	float HealLimit; /* Ofs: 0x208 Size: 0x4 - FloatProperty TslGame.InstantHealItem.HealLimit */
	uint8_t UnknownData20C[0x4];


	inline bool SetHealLimit(t_structHelper inst, float value) { inst.WriteOffset(0x208, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInstantHealItem = sizeof(UInstantHealItem); // 528
    static_assert(sizeof(UInstantHealItem) == 0x210, "Size of UInstantHealItem is not correct.");
	auto constexpr UInstantHealItem_HealLimit_Offset = offsetof(UInstantHealItem, HealLimit);
	static_assert(UInstantHealItem_HealLimit_Offset == 0x208, "UInstantHealItem::HealLimit offset is not 208");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
