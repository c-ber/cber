#pragma once
#include "UGridInstancedStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslInstancedGlassWindowComponent // Size: 0xDD0
	: public UGridInstancedStaticMeshComponent // Size: 0xCA0
{
private:
	typedef UTslInstancedGlassWindowComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1403); // id32("Class TslGame.TslInstancedGlassWindowComponent")
		return ptr;
	}
	uint8_t UnknownDataCA0[0x10];
	ExternalPtr<struct UDestructibleMesh> DestructibleMesh; /* Ofs: 0xCB0 Size: 0x8 - ObjectProperty TslGame.TslInstancedGlassWindowComponent.DestructibleMesh */
	float DestroyDelayAfterDestructed; /* Ofs: 0xCB8 Size: 0x4 - FloatProperty TslGame.TslInstancedGlassWindowComponent.DestroyDelayAfterDestructed */
	uint8_t UnknownDataCBC[0x4];
	ExternalPtr<struct UAkAudioEvent> DestructSound; /* Ofs: 0xCC0 Size: 0x8 - ObjectProperty TslGame.TslInstancedGlassWindowComponent.DestructSound */
	float DestructSoundOcclusionRefreshInterval; /* Ofs: 0xCC8 Size: 0x4 - FloatProperty TslGame.TslInstancedGlassWindowComponent.DestructSoundOcclusionRefreshInterval */
	uint8_t boolFieldCCC;
	uint8_t UnknownDataCCD[0x13];
	TArray<int32_t> DestroyedInstances; /* Ofs: 0xCE0 Size: 0x10 - ArrayProperty TslGame.TslInstancedGlassWindowComponent.DestroyedInstances */
	TArray<int32_t> PendingDestroyInstances; /* Ofs: 0xCF0 Size: 0x10 - ArrayProperty TslGame.TslInstancedGlassWindowComponent.PendingDestroyInstances */
	uint8_t UnknownDataD00[0xD0];


	inline bool SetDestructibleMesh(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0xCB0, value); }
	inline bool SetDestroyDelayAfterDestructed(t_structHelper inst, float value) { inst.WriteOffset(0xCB8, value); }
	inline bool SetDestructSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0xCC0, value); }
	inline bool SetDestructSoundOcclusionRefreshInterval(t_structHelper inst, float value) { inst.WriteOffset(0xCC8, value); }
	inline bool bReplicatedOnClient()
	{
		return boolFieldCCC& 0x1;
	}
	inline bool SetbReplicatedOnClient(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCCC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDestroyedInstances(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0xCE0, value); }
	inline bool SetPendingDestroyInstances(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0xCF0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslInstancedGlassWindowComponent = sizeof(UTslInstancedGlassWindowComponent); // 3536
    static_assert(sizeof(UTslInstancedGlassWindowComponent) == 0xDD0, "Size of UTslInstancedGlassWindowComponent is not correct.");
	auto constexpr UTslInstancedGlassWindowComponent_DestructibleMesh_Offset = offsetof(UTslInstancedGlassWindowComponent, DestructibleMesh);
	static_assert(UTslInstancedGlassWindowComponent_DestructibleMesh_Offset == 0xcb0, "UTslInstancedGlassWindowComponent::DestructibleMesh offset is not cb0");
	auto constexpr UTslInstancedGlassWindowComponent_DestroyDelayAfterDestructed_Offset = offsetof(UTslInstancedGlassWindowComponent, DestroyDelayAfterDestructed);
	static_assert(UTslInstancedGlassWindowComponent_DestroyDelayAfterDestructed_Offset == 0xcb8, "UTslInstancedGlassWindowComponent::DestroyDelayAfterDestructed offset is not cb8");
	auto constexpr UTslInstancedGlassWindowComponent_DestructSound_Offset = offsetof(UTslInstancedGlassWindowComponent, DestructSound);
	static_assert(UTslInstancedGlassWindowComponent_DestructSound_Offset == 0xcc0, "UTslInstancedGlassWindowComponent::DestructSound offset is not cc0");
	auto constexpr UTslInstancedGlassWindowComponent_DestructSoundOcclusionRefreshInterval_Offset = offsetof(UTslInstancedGlassWindowComponent, DestructSoundOcclusionRefreshInterval);
	static_assert(UTslInstancedGlassWindowComponent_DestructSoundOcclusionRefreshInterval_Offset == 0xcc8, "UTslInstancedGlassWindowComponent::DestructSoundOcclusionRefreshInterval offset is not cc8");
	auto constexpr UTslInstancedGlassWindowComponent_boolFieldCCC_Offset = offsetof(UTslInstancedGlassWindowComponent, boolFieldCCC);
	static_assert(UTslInstancedGlassWindowComponent_boolFieldCCC_Offset == 0xccc, "UTslInstancedGlassWindowComponent::boolFieldCCC offset is not ccc");
	auto constexpr UTslInstancedGlassWindowComponent_DestroyedInstances_Offset = offsetof(UTslInstancedGlassWindowComponent, DestroyedInstances);
	static_assert(UTslInstancedGlassWindowComponent_DestroyedInstances_Offset == 0xce0, "UTslInstancedGlassWindowComponent::DestroyedInstances offset is not ce0");
	auto constexpr UTslInstancedGlassWindowComponent_PendingDestroyInstances_Offset = offsetof(UTslInstancedGlassWindowComponent, PendingDestroyInstances);
	static_assert(UTslInstancedGlassWindowComponent_PendingDestroyInstances_Offset == 0xcf0, "UTslInstancedGlassWindowComponent::PendingDestroyInstances offset is not cf0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
