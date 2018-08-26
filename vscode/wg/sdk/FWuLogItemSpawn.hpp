#pragma once
#include "FLogBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemSpawn // Size: 0x70
 : public FLogBase // Size: 0x58
{
public:
    FString ItemId; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.WuLogItemSpawn.ItemId */
    int32_t SpawnCount; /* Ofs: 0x68 Size: 0x4 IntProperty TslGame.WuLogItemSpawn.SpawnCount */
    int32_t StackCount; /* Ofs: 0x6C Size: 0x4 IntProperty TslGame.WuLogItemSpawn.StackCount */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemSpawn = sizeof(FWuLogItemSpawn); // 112
    static_assert(sizeof(FWuLogItemSpawn) == 0x70, "Size of FWuLogItemSpawn is not correct.");
	auto constexpr FWuLogItemSpawn_ItemId_Offset = offsetof(FWuLogItemSpawn, ItemId);
	static_assert(FWuLogItemSpawn_ItemId_Offset == 0x58, "FWuLogItemSpawn::ItemId offset is not 58");
	auto constexpr FWuLogItemSpawn_SpawnCount_Offset = offsetof(FWuLogItemSpawn, SpawnCount);
	static_assert(FWuLogItemSpawn_SpawnCount_Offset == 0x68, "FWuLogItemSpawn::SpawnCount offset is not 68");
	auto constexpr FWuLogItemSpawn_StackCount_Offset = offsetof(FWuLogItemSpawn, StackCount);
	static_assert(FWuLogItemSpawn_StackCount_Offset == 0x6c, "FWuLogItemSpawn::StackCount offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
