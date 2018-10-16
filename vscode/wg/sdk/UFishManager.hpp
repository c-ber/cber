#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFishManager // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UFishManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2057); // id32("Class OceanPlugin.FishManager")
		return ptr;
	}
//	TArray<ExternalPtr<struct UClass>> flockTypes; /* Ofs: 0x408 Size: 0x10 - ArrayProperty OceanPlugin.FishManager.flockTypes */
	uint8_t UnknownData410[0x8];
	TArray<float> numInFlock; /* Ofs: 0x418 Size: 0x10 - ArrayProperty OceanPlugin.FishManager.numInFlock */
	float minZ; /* Ofs: 0x428 Size: 0x4 - FloatProperty OceanPlugin.FishManager.minZ */
	float maxZ; /* Ofs: 0x42C Size: 0x4 - FloatProperty OceanPlugin.FishManager.maxZ */
	float underwaterBoxLength; /* Ofs: 0x430 Size: 0x4 - FloatProperty OceanPlugin.FishManager.underwaterBoxLength */
	uint8_t boolField434;
	uint8_t boolField435;
	uint8_t UnknownData436[0x2];
	ExternalPtr<struct UClass> playerType; /* Ofs: 0x438 Size: 0x8 - ClassProperty OceanPlugin.FishManager.playerType */
	uint8_t UnknownData440[0x20];


//	inline bool SetflockTypes(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x408, value); }
	inline bool SetnumInFlock(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x418, value); }
	inline bool SetminZ(t_structHelper inst, float value) { inst.WriteOffset(0x428, value); }
	inline bool SetmaxZ(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
	inline bool SetunderwaterBoxLength(t_structHelper inst, float value) { inst.WriteOffset(0x430, value); }
	inline bool attachToPlayer()
	{
		return boolField434& 0x1;
	}
	inline bool SetattachToPlayer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x434, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool DebugMode()
	{
		return boolField435& 0x1;
	}
	inline bool SetDebugMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x435, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetplayerType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFishManager = sizeof(UFishManager); // 1120
    static_assert(sizeof(UFishManager) == 0x460, "Size of UFishManager is not correct.");
//	auto constexpr UFishManager_flockTypes_Offset = offsetof(UFishManager, flockTypes);
//	static_assert(UFishManager_flockTypes_Offset == 0x408, "UFishManager::flockTypes offset is not 408");
	auto constexpr UFishManager_numInFlock_Offset = offsetof(UFishManager, numInFlock);
	static_assert(UFishManager_numInFlock_Offset == 0x418, "UFishManager::numInFlock offset is not 418");
	auto constexpr UFishManager_minZ_Offset = offsetof(UFishManager, minZ);
	static_assert(UFishManager_minZ_Offset == 0x428, "UFishManager::minZ offset is not 428");
	auto constexpr UFishManager_maxZ_Offset = offsetof(UFishManager, maxZ);
	static_assert(UFishManager_maxZ_Offset == 0x42c, "UFishManager::maxZ offset is not 42c");
	auto constexpr UFishManager_underwaterBoxLength_Offset = offsetof(UFishManager, underwaterBoxLength);
	static_assert(UFishManager_underwaterBoxLength_Offset == 0x430, "UFishManager::underwaterBoxLength offset is not 430");
	auto constexpr UFishManager_boolField434_Offset = offsetof(UFishManager, boolField434);
	static_assert(UFishManager_boolField434_Offset == 0x434, "UFishManager::boolField434 offset is not 434");
	auto constexpr UFishManager_boolField435_Offset = offsetof(UFishManager, boolField435);
	static_assert(UFishManager_boolField435_Offset == 0x435, "UFishManager::boolField435 offset is not 435");
	auto constexpr UFishManager_playerType_Offset = offsetof(UFishManager, playerType);
	static_assert(UFishManager_playerType_Offset == 0x438, "UFishManager::playerType offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
