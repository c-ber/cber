#pragma once
#include "FTableRowBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FItemSpawnTogetherDataRow // Size: 0x38
 : public FTableRowBase // Size: 0x8
{
public:
    FName ValueFilter; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.ItemSpawnTogetherDataRow.ValueFilter */
    FName CategoryFilter; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.ItemSpawnTogetherDataRow.CategoryFilter */
    ExternalPtr<struct UClass> SpawnedItem; /* Ofs: 0x18 Size: 0x8 ClassProperty TslGame.ItemSpawnTogetherDataRow.SpawnedItem */
    ExternalPtr<struct UClass> TogetherItem; /* Ofs: 0x20 Size: 0x8 ClassProperty TslGame.ItemSpawnTogetherDataRow.TogetherItem */
    int32_t StackCount; /* Ofs: 0x28 Size: 0x4 IntProperty TslGame.ItemSpawnTogetherDataRow.StackCount */
    int32_t CountMin; /* Ofs: 0x2C Size: 0x4 IntProperty TslGame.ItemSpawnTogetherDataRow.CountMin */
    int32_t CountMax; /* Ofs: 0x30 Size: 0x4 IntProperty TslGame.ItemSpawnTogetherDataRow.CountMax */
    uint8_t UnknownData34[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFItemSpawnTogetherDataRow = sizeof(FItemSpawnTogetherDataRow); // 56
    static_assert(sizeof(FItemSpawnTogetherDataRow) == 0x38, "Size of FItemSpawnTogetherDataRow is not correct.");
	auto constexpr FItemSpawnTogetherDataRow_ValueFilter_Offset = offsetof(FItemSpawnTogetherDataRow, ValueFilter);
	static_assert(FItemSpawnTogetherDataRow_ValueFilter_Offset == 0x8, "FItemSpawnTogetherDataRow::ValueFilter offset is not 8");
	auto constexpr FItemSpawnTogetherDataRow_CategoryFilter_Offset = offsetof(FItemSpawnTogetherDataRow, CategoryFilter);
	static_assert(FItemSpawnTogetherDataRow_CategoryFilter_Offset == 0x10, "FItemSpawnTogetherDataRow::CategoryFilter offset is not 10");
	auto constexpr FItemSpawnTogetherDataRow_SpawnedItem_Offset = offsetof(FItemSpawnTogetherDataRow, SpawnedItem);
	static_assert(FItemSpawnTogetherDataRow_SpawnedItem_Offset == 0x18, "FItemSpawnTogetherDataRow::SpawnedItem offset is not 18");
	auto constexpr FItemSpawnTogetherDataRow_TogetherItem_Offset = offsetof(FItemSpawnTogetherDataRow, TogetherItem);
	static_assert(FItemSpawnTogetherDataRow_TogetherItem_Offset == 0x20, "FItemSpawnTogetherDataRow::TogetherItem offset is not 20");
	auto constexpr FItemSpawnTogetherDataRow_StackCount_Offset = offsetof(FItemSpawnTogetherDataRow, StackCount);
	static_assert(FItemSpawnTogetherDataRow_StackCount_Offset == 0x28, "FItemSpawnTogetherDataRow::StackCount offset is not 28");
	auto constexpr FItemSpawnTogetherDataRow_CountMin_Offset = offsetof(FItemSpawnTogetherDataRow, CountMin);
	static_assert(FItemSpawnTogetherDataRow_CountMin_Offset == 0x2c, "FItemSpawnTogetherDataRow::CountMin offset is not 2c");
	auto constexpr FItemSpawnTogetherDataRow_CountMax_Offset = offsetof(FItemSpawnTogetherDataRow, CountMax);
	static_assert(FItemSpawnTogetherDataRow_CountMax_Offset == 0x30, "FItemSpawnTogetherDataRow::CountMax offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
