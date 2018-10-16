#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslParticleManager // Size: 0x520
	: public UActor // Size: 0x410
{
private:
	typedef UTslParticleManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1466); // id32("Class TslGame.TslParticleManager")
		return ptr;
	}
	uint8_t UnknownData410[0x48];
	uint8_t boolField458;
	uint8_t UnknownData459[0x7];
	TMap<struct FString, struct FTslActorPool> ObjectPoolMap; /* Ofs: 0x460 Size: 0x50 - MapProperty TslGame.TslParticleManager.ObjectPoolMap */
	TArray<struct FTslParticleGroupInfo> GroupList; /* Ofs: 0x4B0 Size: 0x10 - ArrayProperty TslGame.TslParticleManager.GroupList */
	uint8_t UnknownData4C0[0x60];


	inline bool bUseActorPool()
	{
		return boolField458& 0x1;
	}
	inline bool SetbUseActorPool(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x458, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetObjectPoolMap(t_structHelper inst, TMap<struct FString, struct FTslActorPool> value) { inst.WriteOffset(0x460, value); }
	inline bool SetGroupList(t_structHelper inst, TArray<struct FTslParticleGroupInfo> value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslParticleManager = sizeof(UTslParticleManager); // 1312
    static_assert(sizeof(UTslParticleManager) == 0x520, "Size of UTslParticleManager is not correct.");
	auto constexpr UTslParticleManager_boolField458_Offset = offsetof(UTslParticleManager, boolField458);
	static_assert(UTslParticleManager_boolField458_Offset == 0x458, "UTslParticleManager::boolField458 offset is not 458");
	auto constexpr UTslParticleManager_ObjectPoolMap_Offset = offsetof(UTslParticleManager, ObjectPoolMap);
	static_assert(UTslParticleManager_ObjectPoolMap_Offset == 0x460, "UTslParticleManager::ObjectPoolMap offset is not 460");
	auto constexpr UTslParticleManager_GroupList_Offset = offsetof(UTslParticleManager, GroupList);
	static_assert(UTslParticleManager_GroupList_Offset == 0x4b0, "UTslParticleManager::GroupList offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
