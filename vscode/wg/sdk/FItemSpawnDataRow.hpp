#pragma once
#include "FTableRowBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FItemSpawnDataRow // Size: 0x28
 : public FTableRowBase // Size: 0x8
{
public:
    FName ValueFilter; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.ItemSpawnDataRow.ValueFilter */
    FName CategoryFilter; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.ItemSpawnDataRow.CategoryFilter */
    ExternalPtr<struct UClass> Item; /* Ofs: 0x18 Size: 0x8 ClassProperty TslGame.ItemSpawnDataRow.Item */
    int32_t StackCount; /* Ofs: 0x20 Size: 0x4 IntProperty TslGame.ItemSpawnDataRow.StackCount */
    int32_t Weight; /* Ofs: 0x24 Size: 0x4 IntProperty TslGame.ItemSpawnDataRow.Weight */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFItemSpawnDataRow = sizeof(FItemSpawnDataRow); // 40
    static_assert(sizeof(FItemSpawnDataRow) == 0x28, "Size of FItemSpawnDataRow is not correct.");
	auto constexpr FItemSpawnDataRow_ValueFilter_Offset = offsetof(FItemSpawnDataRow, ValueFilter);
	static_assert(FItemSpawnDataRow_ValueFilter_Offset == 0x8, "FItemSpawnDataRow::ValueFilter offset is not 8");
	auto constexpr FItemSpawnDataRow_CategoryFilter_Offset = offsetof(FItemSpawnDataRow, CategoryFilter);
	static_assert(FItemSpawnDataRow_CategoryFilter_Offset == 0x10, "FItemSpawnDataRow::CategoryFilter offset is not 10");
	auto constexpr FItemSpawnDataRow_Item_Offset = offsetof(FItemSpawnDataRow, Item);
	static_assert(FItemSpawnDataRow_Item_Offset == 0x18, "FItemSpawnDataRow::Item offset is not 18");
	auto constexpr FItemSpawnDataRow_StackCount_Offset = offsetof(FItemSpawnDataRow, StackCount);
	static_assert(FItemSpawnDataRow_StackCount_Offset == 0x20, "FItemSpawnDataRow::StackCount offset is not 20");
	auto constexpr FItemSpawnDataRow_Weight_Offset = offsetof(FItemSpawnDataRow, Weight);
	static_assert(FItemSpawnDataRow_Weight_Offset == 0x24, "FItemSpawnDataRow::Weight offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
