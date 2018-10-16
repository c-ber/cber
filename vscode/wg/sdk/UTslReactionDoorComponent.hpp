#pragma once
#include "UStaticMeshComponent.hpp"
#include "FDoorBreakingState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReactionDoorComponent // Size: 0xAE0
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UTslReactionDoorComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1487); // id32("Class TslGame.TslReactionDoorComponent")
		return ptr;
	}
	uint8_t UnknownDataA80[0x8];
	ExternalPtr<struct UTslReactionDoorData> ReactionDoorData; /* Ofs: 0xA88 Size: 0x8 - ObjectProperty TslGame.TslReactionDoorComponent.ReactionDoorData */
	ExternalPtr<struct UDestructibleMesh> DoorDestructibleMesh; /* Ofs: 0xA90 Size: 0x8 - ObjectProperty TslGame.TslReactionDoorComponent.DoorDestructibleMesh */
	int32_t HLODChildIndex; /* Ofs: 0xA98 Size: 0x4 - IntProperty TslGame.TslReactionDoorComponent.HLODChildIndex */
	FDoorBreakingState DoorBreakingState; /* Ofs: 0xA9C Size: 0x1 - StructProperty TslGame.TslReactionDoorComponent.DoorBreakingState */
	uint8_t UnknownDataA9D[0x43];


	inline bool SetReactionDoorData(t_structHelper inst, ExternalPtr<struct UTslReactionDoorData> value) { inst.WriteOffset(0xA88, value); }
	inline bool SetDoorDestructibleMesh(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0xA90, value); }
	inline bool SetHLODChildIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA98, value); }
	inline bool SetDoorBreakingState(t_structHelper inst, FDoorBreakingState value) { inst.WriteOffset(0xA9C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReactionDoorComponent = sizeof(UTslReactionDoorComponent); // 2784
    static_assert(sizeof(UTslReactionDoorComponent) == 0xAE0, "Size of UTslReactionDoorComponent is not correct.");
	auto constexpr UTslReactionDoorComponent_ReactionDoorData_Offset = offsetof(UTslReactionDoorComponent, ReactionDoorData);
	static_assert(UTslReactionDoorComponent_ReactionDoorData_Offset == 0xa88, "UTslReactionDoorComponent::ReactionDoorData offset is not a88");
	auto constexpr UTslReactionDoorComponent_DoorDestructibleMesh_Offset = offsetof(UTslReactionDoorComponent, DoorDestructibleMesh);
	static_assert(UTslReactionDoorComponent_DoorDestructibleMesh_Offset == 0xa90, "UTslReactionDoorComponent::DoorDestructibleMesh offset is not a90");
	auto constexpr UTslReactionDoorComponent_HLODChildIndex_Offset = offsetof(UTslReactionDoorComponent, HLODChildIndex);
	static_assert(UTslReactionDoorComponent_HLODChildIndex_Offset == 0xa98, "UTslReactionDoorComponent::HLODChildIndex offset is not a98");
	auto constexpr UTslReactionDoorComponent_DoorBreakingState_Offset = offsetof(UTslReactionDoorComponent, DoorBreakingState);
	static_assert(UTslReactionDoorComponent_DoorBreakingState_Offset == 0xa9c, "UTslReactionDoorComponent::DoorBreakingState offset is not a9c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
