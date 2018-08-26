#pragma once
#include "ECastableItemType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHealItemSelectorData // Size: 0x18
{
public:
    TEnumAsByte<enum ECastableItemType> ItemType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.HealItemSelectorData.ItemType */
    uint8_t UnknownData1[0x7];
    ExternalPtr<struct UClass> ItemClass; /* Ofs: 0x8 Size: 0x8 ClassProperty TslGame.HealItemSelectorData.ItemClass */
    ExternalPtr<struct UTexture2D> ItemTexture; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.HealItemSelectorData.ItemTexture */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHealItemSelectorData = sizeof(FHealItemSelectorData); // 24
    static_assert(sizeof(FHealItemSelectorData) == 0x18, "Size of FHealItemSelectorData is not correct.");
	auto constexpr FHealItemSelectorData_ItemType_Offset = offsetof(FHealItemSelectorData, ItemType);
	static_assert(FHealItemSelectorData_ItemType_Offset == 0x0, "FHealItemSelectorData::ItemType offset is not 0");
	auto constexpr FHealItemSelectorData_ItemClass_Offset = offsetof(FHealItemSelectorData, ItemClass);
	static_assert(FHealItemSelectorData_ItemClass_Offset == 0x8, "FHealItemSelectorData::ItemClass offset is not 8");
	auto constexpr FHealItemSelectorData_ItemTexture_Offset = offsetof(FHealItemSelectorData, ItemTexture);
	static_assert(FHealItemSelectorData_ItemTexture_Offset == 0x10, "FHealItemSelectorData::ItemTexture offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
