#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInstancedStaticMeshComponent // Size: 0xB60
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UInstancedStaticMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(211); // id32("Class Engine.InstancedStaticMeshComponent")
		return ptr;
	}
	TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; /* Ofs: 0xA80 Size: 0x10 - ArrayProperty Engine.InstancedStaticMeshComponent.PerInstanceSMData */
	int32_t InstancingRandomSeed; /* Ofs: 0xA90 Size: 0x4 - IntProperty Engine.InstancedStaticMeshComponent.InstancingRandomSeed */
	int32_t InstanceStartCullDistance; /* Ofs: 0xA94 Size: 0x4 - IntProperty Engine.InstancedStaticMeshComponent.InstanceStartCullDistance */
	int32_t InstanceEndCullDistance; /* Ofs: 0xA98 Size: 0x4 - IntProperty Engine.InstancedStaticMeshComponent.InstanceEndCullDistance */
	uint8_t UnknownDataA9C[0x4];
	TArray<int32_t> InstanceReorderTable; /* Ofs: 0xAA0 Size: 0x10 - ArrayProperty Engine.InstancedStaticMeshComponent.InstanceReorderTable */
	TArray<int32_t> RemovedInstances; /* Ofs: 0xAB0 Size: 0x10 - ArrayProperty Engine.InstancedStaticMeshComponent.RemovedInstances */
	uint8_t UnknownDataAC0[0x80];
	ExternalPtr<struct UPhysicsSerializer> PhysicsSerializer; /* Ofs: 0xB40 Size: 0x8 - ObjectProperty Engine.InstancedStaticMeshComponent.PhysicsSerializer */
	int32_t NumPendingLightmaps; /* Ofs: 0xB48 Size: 0x4 - IntProperty Engine.InstancedStaticMeshComponent.NumPendingLightmaps */
	uint8_t UnknownDataB4C[0x4];
	TArray<struct FInstancedStaticMeshMappingInfo> CachedMappings; /* Ofs: 0xB50 Size: 0x10 - ArrayProperty Engine.InstancedStaticMeshComponent.CachedMappings */


	inline bool SetPerInstanceSMData(t_structHelper inst, TArray<struct FInstancedStaticMeshInstanceData> value) { inst.WriteOffset(0xA80, value); }
	inline bool SetInstancingRandomSeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA90, value); }
	inline bool SetInstanceStartCullDistance(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA94, value); }
	inline bool SetInstanceEndCullDistance(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA98, value); }
	inline bool SetInstanceReorderTable(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0xAA0, value); }
	inline bool SetRemovedInstances(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetPhysicsSerializer(t_structHelper inst, ExternalPtr<struct UPhysicsSerializer> value) { inst.WriteOffset(0xB40, value); }
	inline bool SetNumPendingLightmaps(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB48, value); }
	inline bool SetCachedMappings(t_structHelper inst, TArray<struct FInstancedStaticMeshMappingInfo> value) { inst.WriteOffset(0xB50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInstancedStaticMeshComponent = sizeof(UInstancedStaticMeshComponent); // 2912
    static_assert(sizeof(UInstancedStaticMeshComponent) == 0xB60, "Size of UInstancedStaticMeshComponent is not correct.");
	auto constexpr UInstancedStaticMeshComponent_PerInstanceSMData_Offset = offsetof(UInstancedStaticMeshComponent, PerInstanceSMData);
	static_assert(UInstancedStaticMeshComponent_PerInstanceSMData_Offset == 0xa80, "UInstancedStaticMeshComponent::PerInstanceSMData offset is not a80");
	auto constexpr UInstancedStaticMeshComponent_InstancingRandomSeed_Offset = offsetof(UInstancedStaticMeshComponent, InstancingRandomSeed);
	static_assert(UInstancedStaticMeshComponent_InstancingRandomSeed_Offset == 0xa90, "UInstancedStaticMeshComponent::InstancingRandomSeed offset is not a90");
	auto constexpr UInstancedStaticMeshComponent_InstanceStartCullDistance_Offset = offsetof(UInstancedStaticMeshComponent, InstanceStartCullDistance);
	static_assert(UInstancedStaticMeshComponent_InstanceStartCullDistance_Offset == 0xa94, "UInstancedStaticMeshComponent::InstanceStartCullDistance offset is not a94");
	auto constexpr UInstancedStaticMeshComponent_InstanceEndCullDistance_Offset = offsetof(UInstancedStaticMeshComponent, InstanceEndCullDistance);
	static_assert(UInstancedStaticMeshComponent_InstanceEndCullDistance_Offset == 0xa98, "UInstancedStaticMeshComponent::InstanceEndCullDistance offset is not a98");
	auto constexpr UInstancedStaticMeshComponent_InstanceReorderTable_Offset = offsetof(UInstancedStaticMeshComponent, InstanceReorderTable);
	static_assert(UInstancedStaticMeshComponent_InstanceReorderTable_Offset == 0xaa0, "UInstancedStaticMeshComponent::InstanceReorderTable offset is not aa0");
	auto constexpr UInstancedStaticMeshComponent_RemovedInstances_Offset = offsetof(UInstancedStaticMeshComponent, RemovedInstances);
	static_assert(UInstancedStaticMeshComponent_RemovedInstances_Offset == 0xab0, "UInstancedStaticMeshComponent::RemovedInstances offset is not ab0");
	auto constexpr UInstancedStaticMeshComponent_PhysicsSerializer_Offset = offsetof(UInstancedStaticMeshComponent, PhysicsSerializer);
	static_assert(UInstancedStaticMeshComponent_PhysicsSerializer_Offset == 0xb40, "UInstancedStaticMeshComponent::PhysicsSerializer offset is not b40");
	auto constexpr UInstancedStaticMeshComponent_NumPendingLightmaps_Offset = offsetof(UInstancedStaticMeshComponent, NumPendingLightmaps);
	static_assert(UInstancedStaticMeshComponent_NumPendingLightmaps_Offset == 0xb48, "UInstancedStaticMeshComponent::NumPendingLightmaps offset is not b48");
	auto constexpr UInstancedStaticMeshComponent_CachedMappings_Offset = offsetof(UInstancedStaticMeshComponent, CachedMappings);
	static_assert(UInstancedStaticMeshComponent_CachedMappings_Offset == 0xb50, "UInstancedStaticMeshComponent::CachedMappings offset is not b50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
