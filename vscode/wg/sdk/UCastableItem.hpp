#pragma once
#include "UItem.hpp"
#include "FCastConfig.hpp"
#include "ECastableItemType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCastableItem // Size: 0x208
	: public UItem // Size: 0x1C8
{
private:
	typedef UCastableItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1903); // id32("Class TslGame.CastableItem")
		return ptr;
	}
	FCastConfig CastConfig; /* Ofs: 0x1C8 Size: 0x38 - StructProperty TslGame.CastableItem.CastConfig */
	uint8_t boolField200;
	TEnumAsByte<enum ECastableItemType> CastableItemType; /* Ofs: 0x201 Size: 0x1 - EnumProperty TslGame.CastableItem.CastableItemType */
	uint8_t UnknownData202[0x6];


	inline bool SetCastConfig(t_structHelper inst, FCastConfig value) { inst.WriteOffset(0x1C8, value); }
	inline bool bCanUseInWater()
	{
		return boolField200& 0x1;
	}
	inline bool SetbCanUseInWater(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x200, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCastableItemType(t_structHelper inst, TEnumAsByte<enum ECastableItemType> value) { inst.WriteOffset(0x201, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCastableItem = sizeof(UCastableItem); // 520
    static_assert(sizeof(UCastableItem) == 0x208, "Size of UCastableItem is not correct.");
	auto constexpr UCastableItem_CastConfig_Offset = offsetof(UCastableItem, CastConfig);
	static_assert(UCastableItem_CastConfig_Offset == 0x1c8, "UCastableItem::CastConfig offset is not 1c8");
	auto constexpr UCastableItem_boolField200_Offset = offsetof(UCastableItem, boolField200);
	static_assert(UCastableItem_boolField200_Offset == 0x200, "UCastableItem::boolField200 offset is not 200");
	auto constexpr UCastableItem_CastableItemType_Offset = offsetof(UCastableItem, CastableItemType);
	static_assert(UCastableItem_CastableItemType_Offset == 0x201, "UCastableItem::CastableItemType offset is not 201");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
