#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplicationTrigger // Size: 0x440
	: public UActor // Size: 0x410
{
private:
	typedef UReplicationTrigger t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1942); // id32("Class TslGame.ReplicationTrigger")
		return ptr;
	}
	TArray<ExternalPtr<struct UActor>> TargetReplicatedActors; /* Ofs: 0x410 Size: 0x10 - ArrayProperty TslGame.ReplicationTrigger.TargetReplicatedActors */
	uint8_t UnknownData420[0x4];
	int32_t ReplicationGroupCount; /* Ofs: 0x424 Size: 0x4 - IntProperty TslGame.ReplicationTrigger.ReplicationGroupCount */
	uint8_t UnknownData428[0x4];
	float ReplicationGroupIntervalSeconds; /* Ofs: 0x42C Size: 0x4 - FloatProperty TslGame.ReplicationTrigger.ReplicationGroupIntervalSeconds */
	uint8_t UnknownData430[0x10];


	inline bool SetTargetReplicatedActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x410, value); }
	inline bool SetReplicationGroupCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x424, value); }
	inline bool SetReplicationGroupIntervalSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplicationTrigger = sizeof(UReplicationTrigger); // 1088
    static_assert(sizeof(UReplicationTrigger) == 0x440, "Size of UReplicationTrigger is not correct.");
	auto constexpr UReplicationTrigger_TargetReplicatedActors_Offset = offsetof(UReplicationTrigger, TargetReplicatedActors);
	static_assert(UReplicationTrigger_TargetReplicatedActors_Offset == 0x410, "UReplicationTrigger::TargetReplicatedActors offset is not 410");
	auto constexpr UReplicationTrigger_ReplicationGroupCount_Offset = offsetof(UReplicationTrigger, ReplicationGroupCount);
	static_assert(UReplicationTrigger_ReplicationGroupCount_Offset == 0x424, "UReplicationTrigger::ReplicationGroupCount offset is not 424");
	auto constexpr UReplicationTrigger_ReplicationGroupIntervalSeconds_Offset = offsetof(UReplicationTrigger, ReplicationGroupIntervalSeconds);
	static_assert(UReplicationTrigger_ReplicationGroupIntervalSeconds_Offset == 0x42c, "UReplicationTrigger::ReplicationGroupIntervalSeconds offset is not 42c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
