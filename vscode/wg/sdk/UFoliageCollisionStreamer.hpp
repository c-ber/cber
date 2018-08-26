#pragma once
#include "UTslStreamer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFoliageCollisionStreamer // Size: 0xB8
	: public UTslStreamer // Size: 0x50
{
private:
	typedef UFoliageCollisionStreamer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1506); // id32("Class TslGame.FoliageCollisionStreamer")
		return ptr;
	}
	uint8_t boolField50;
	uint8_t UnknownData51[0x3];
	float MinDistance; /* Ofs: 0x54 Size: 0x4 - FloatProperty TslGame.FoliageCollisionStreamer.MinDistance */
	float MaxQueryDistance; /* Ofs: 0x58 Size: 0x4 - FloatProperty TslGame.FoliageCollisionStreamer.MaxQueryDistance */
	float MaxSimulationDistance; /* Ofs: 0x5C Size: 0x4 - FloatProperty TslGame.FoliageCollisionStreamer.MaxSimulationDistance */
	uint8_t boolField60;
	uint8_t UnknownData61[0x57];


	inline bool bEnabled()
	{
		return boolField50& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinDistance(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetMaxQueryDistance(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetMaxSimulationDistance(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool bUseOnlyQueryAndPhysics()
	{
		return boolField60& 0x1;
	}
	inline bool SetbUseOnlyQueryAndPhysics(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFoliageCollisionStreamer = sizeof(UFoliageCollisionStreamer); // 184
    static_assert(sizeof(UFoliageCollisionStreamer) == 0xB8, "Size of UFoliageCollisionStreamer is not correct.");
	auto constexpr UFoliageCollisionStreamer_boolField50_Offset = offsetof(UFoliageCollisionStreamer, boolField50);
	static_assert(UFoliageCollisionStreamer_boolField50_Offset == 0x50, "UFoliageCollisionStreamer::boolField50 offset is not 50");
	auto constexpr UFoliageCollisionStreamer_MinDistance_Offset = offsetof(UFoliageCollisionStreamer, MinDistance);
	static_assert(UFoliageCollisionStreamer_MinDistance_Offset == 0x54, "UFoliageCollisionStreamer::MinDistance offset is not 54");
	auto constexpr UFoliageCollisionStreamer_MaxQueryDistance_Offset = offsetof(UFoliageCollisionStreamer, MaxQueryDistance);
	static_assert(UFoliageCollisionStreamer_MaxQueryDistance_Offset == 0x58, "UFoliageCollisionStreamer::MaxQueryDistance offset is not 58");
	auto constexpr UFoliageCollisionStreamer_MaxSimulationDistance_Offset = offsetof(UFoliageCollisionStreamer, MaxSimulationDistance);
	static_assert(UFoliageCollisionStreamer_MaxSimulationDistance_Offset == 0x5c, "UFoliageCollisionStreamer::MaxSimulationDistance offset is not 5c");
	auto constexpr UFoliageCollisionStreamer_boolField60_Offset = offsetof(UFoliageCollisionStreamer, boolField60);
	static_assert(UFoliageCollisionStreamer_boolField60_Offset == 0x60, "UFoliageCollisionStreamer::boolField60 offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
