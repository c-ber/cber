#pragma once
#include "UGridInstancedStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslInstancedReactionComponent // Size: 0xEA0
	: public UGridInstancedStaticMeshComponent // Size: 0xCA0
{
private:
	typedef UTslInstancedReactionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1404); // id32("Class TslGame.TslInstancedReactionComponent")
		return ptr;
	}
	uint8_t UnknownDataCA0[0x10];
	TArray<int32_t> PendingDestroyInstances; /* Ofs: 0xCB0 Size: 0x10 - ArrayProperty TslGame.TslInstancedReactionComponent.PendingDestroyInstances */
	ExternalPtr<struct UTslReactionData> ReactionData; /* Ofs: 0xCC0 Size: 0x8 - ObjectProperty TslGame.TslInstancedReactionComponent.ReactionData */
	ExternalPtr<struct UDestructibleMesh> ReactionDM; /* Ofs: 0xCC8 Size: 0x8 - ObjectProperty TslGame.TslInstancedReactionComponent.ReactionDM */
	uint8_t UnknownDataCD0[0x80];
	TMap<int32_t, struct UDestructibleComponent> ReactionDestructibles; /* Ofs: 0xD50 Size: 0x50 - MapProperty TslGame.TslInstancedReactionComponent.ReactionDestructibles */
	TMap<int32_t, struct UStaticMeshComponent> ReactionStaticMeshComponents; /* Ofs: 0xDA0 Size: 0x50 - MapProperty TslGame.TslInstancedReactionComponent.ReactionStaticMeshComponents */
	uint8_t UnknownDataDF0[0xB0];


	inline bool SetPendingDestroyInstances(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0xCB0, value); }
	inline bool SetReactionData(t_structHelper inst, ExternalPtr<struct UTslReactionData> value) { inst.WriteOffset(0xCC0, value); }
	inline bool SetReactionDM(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0xCC8, value); }
	inline bool SetReactionDestructibles(t_structHelper inst, TMap<int32_t, struct UDestructibleComponent> value) { inst.WriteOffset(0xD50, value); }
	inline bool SetReactionStaticMeshComponents(t_structHelper inst, TMap<int32_t, struct UStaticMeshComponent> value) { inst.WriteOffset(0xDA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslInstancedReactionComponent = sizeof(UTslInstancedReactionComponent); // 3744
    static_assert(sizeof(UTslInstancedReactionComponent) == 0xEA0, "Size of UTslInstancedReactionComponent is not correct.");
	auto constexpr UTslInstancedReactionComponent_PendingDestroyInstances_Offset = offsetof(UTslInstancedReactionComponent, PendingDestroyInstances);
	static_assert(UTslInstancedReactionComponent_PendingDestroyInstances_Offset == 0xcb0, "UTslInstancedReactionComponent::PendingDestroyInstances offset is not cb0");
	auto constexpr UTslInstancedReactionComponent_ReactionData_Offset = offsetof(UTslInstancedReactionComponent, ReactionData);
	static_assert(UTslInstancedReactionComponent_ReactionData_Offset == 0xcc0, "UTslInstancedReactionComponent::ReactionData offset is not cc0");
	auto constexpr UTslInstancedReactionComponent_ReactionDM_Offset = offsetof(UTslInstancedReactionComponent, ReactionDM);
	static_assert(UTslInstancedReactionComponent_ReactionDM_Offset == 0xcc8, "UTslInstancedReactionComponent::ReactionDM offset is not cc8");
	auto constexpr UTslInstancedReactionComponent_ReactionDestructibles_Offset = offsetof(UTslInstancedReactionComponent, ReactionDestructibles);
	static_assert(UTslInstancedReactionComponent_ReactionDestructibles_Offset == 0xd50, "UTslInstancedReactionComponent::ReactionDestructibles offset is not d50");
	auto constexpr UTslInstancedReactionComponent_ReactionStaticMeshComponents_Offset = offsetof(UTslInstancedReactionComponent, ReactionStaticMeshComponents);
	static_assert(UTslInstancedReactionComponent_ReactionStaticMeshComponents_Offset == 0xda0, "UTslInstancedReactionComponent::ReactionStaticMeshComponents offset is not da0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
