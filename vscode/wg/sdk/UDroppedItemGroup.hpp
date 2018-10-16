#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDroppedItemGroup // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UDroppedItemGroup t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1855); // id32("Class TslGame.DroppedItemGroup")
		return ptr;
	}
	uint8_t UnknownData410[0x10];
	float RandomSpawnRadius; /* Ofs: 0x420 Size: 0x4 - FloatProperty TslGame.DroppedItemGroup.RandomSpawnRadius */
	int32_t MaxRandomSpawnCount; /* Ofs: 0x424 Size: 0x4 - IntProperty TslGame.DroppedItemGroup.MaxRandomSpawnCount */
	uint8_t UnknownData428[0x8];


	inline bool SetRandomSpawnRadius(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetMaxRandomSpawnCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x424, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDroppedItemGroup = sizeof(UDroppedItemGroup); // 1072
    static_assert(sizeof(UDroppedItemGroup) == 0x430, "Size of UDroppedItemGroup is not correct.");
	auto constexpr UDroppedItemGroup_RandomSpawnRadius_Offset = offsetof(UDroppedItemGroup, RandomSpawnRadius);
	static_assert(UDroppedItemGroup_RandomSpawnRadius_Offset == 0x420, "UDroppedItemGroup::RandomSpawnRadius offset is not 420");
	auto constexpr UDroppedItemGroup_MaxRandomSpawnCount_Offset = offsetof(UDroppedItemGroup, MaxRandomSpawnCount);
	static_assert(UDroppedItemGroup_MaxRandomSpawnCount_Offset == 0x424, "UDroppedItemGroup::MaxRandomSpawnCount offset is not 424");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
