#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplicationTriggerManager // Size: 0x430
	: public UInfo // Size: 0x410
{
private:
	typedef UReplicationTriggerManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1943); // id32("Class TslGame.ReplicationTriggerManager")
		return ptr;
	}
//	TArray<ExternalPtr<struct UClass>> TargetReplicatedActorClasses; /* Ofs: 0x408 Size: 0x10 - ArrayProperty TslGame.ReplicationTriggerManager.TargetReplicatedActorClasses */
	uint8_t UnknownData410[0x8];
	float TriggerRadius; /* Ofs: 0x418 Size: 0x4 - FloatProperty TslGame.ReplicationTriggerManager.TriggerRadius */
	float TriggerInterval; /* Ofs: 0x41C Size: 0x4 - FloatProperty TslGame.ReplicationTriggerManager.TriggerInterval */
	TArray<ExternalPtr<struct UReplicationTrigger>> Triggers; /* Ofs: 0x420 Size: 0x10 - ArrayProperty TslGame.ReplicationTriggerManager.Triggers */


//	inline bool SetTargetReplicatedActorClasses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x408, value); }
	inline bool SetTriggerRadius(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetTriggerInterval(t_structHelper inst, float value) { inst.WriteOffset(0x41C, value); }
	inline bool SetTriggers(t_structHelper inst, TArray<ExternalPtr<struct UReplicationTrigger>> value) { inst.WriteOffset(0x420, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplicationTriggerManager = sizeof(UReplicationTriggerManager); // 1072
    static_assert(sizeof(UReplicationTriggerManager) == 0x430, "Size of UReplicationTriggerManager is not correct.");
//	auto constexpr UReplicationTriggerManager_TargetReplicatedActorClasses_Offset = offsetof(UReplicationTriggerManager, TargetReplicatedActorClasses);
//	static_assert(UReplicationTriggerManager_TargetReplicatedActorClasses_Offset == 0x408, "UReplicationTriggerManager::TargetReplicatedActorClasses offset is not 408");
	auto constexpr UReplicationTriggerManager_TriggerRadius_Offset = offsetof(UReplicationTriggerManager, TriggerRadius);
	static_assert(UReplicationTriggerManager_TriggerRadius_Offset == 0x418, "UReplicationTriggerManager::TriggerRadius offset is not 418");
	auto constexpr UReplicationTriggerManager_TriggerInterval_Offset = offsetof(UReplicationTriggerManager, TriggerInterval);
	static_assert(UReplicationTriggerManager_TriggerInterval_Offset == 0x41c, "UReplicationTriggerManager::TriggerInterval offset is not 41c");
	auto constexpr UReplicationTriggerManager_Triggers_Offset = offsetof(UReplicationTriggerManager, Triggers);
	static_assert(UReplicationTriggerManager_Triggers_Offset == 0x420, "UReplicationTriggerManager::Triggers offset is not 420");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
