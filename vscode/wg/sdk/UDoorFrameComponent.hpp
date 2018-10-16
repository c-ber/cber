#pragma once
#include "UStaticMeshComponent.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDoorFrameComponent // Size: 0xAF0
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UDoorFrameComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1850); // id32("Class TslGame.DoorFrameComponent")
		return ptr;
	}
	FTransform DoorTransform; /* Ofs: 0xA80 Size: 0x30 - StructProperty TslGame.DoorFrameComponent.DoorTransform */
	FVector SoundOffsetFromDoor; /* Ofs: 0xAB0 Size: 0xC - StructProperty TslGame.DoorFrameComponent.SoundOffsetFromDoor */
	uint8_t UnknownDataABC[0x4];
	ExternalPtr<struct UStaticMesh> DoorStaticMesh; /* Ofs: 0xAC0 Size: 0x8 - ObjectProperty TslGame.DoorFrameComponent.DoorStaticMesh */
	ExternalPtr<struct UDestructibleMesh> DoorDestructibleMesh; /* Ofs: 0xAC8 Size: 0x8 - ObjectProperty TslGame.DoorFrameComponent.DoorDestructibleMesh */
	ExternalPtr<struct UDoorDataAsset> DoorDataAsset; /* Ofs: 0xAD0 Size: 0x8 - ObjectProperty TslGame.DoorFrameComponent.DoorDataAsset */
	ExternalPtr<struct UTslReactionDoorData> ReactionDoorData; /* Ofs: 0xAD8 Size: 0x8 - ObjectProperty TslGame.DoorFrameComponent.ReactionDoorData */
	uint8_t boolFieldAE0;
	uint8_t UnknownDataAE1[0xF];


	inline bool SetDoorTransform(t_structHelper inst, FTransform value) { inst.WriteOffset(0xA80, value); }
	inline bool SetSoundOffsetFromDoor(t_structHelper inst, FVector value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetDoorStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0xAC0, value); }
	inline bool SetDoorDestructibleMesh(t_structHelper inst, ExternalPtr<struct UDestructibleMesh> value) { inst.WriteOffset(0xAC8, value); }
	inline bool SetDoorDataAsset(t_structHelper inst, ExternalPtr<struct UDoorDataAsset> value) { inst.WriteOffset(0xAD0, value); }
	inline bool SetReactionDoorData(t_structHelper inst, ExternalPtr<struct UTslReactionDoorData> value) { inst.WriteOffset(0xAD8, value); }
	inline bool bDisableSubComponents()
	{
		return boolFieldAE0& 0x1;
	}
	inline bool SetbDisableSubComponents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAE0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDoorFrameComponent = sizeof(UDoorFrameComponent); // 2800
    static_assert(sizeof(UDoorFrameComponent) == 0xAF0, "Size of UDoorFrameComponent is not correct.");
	auto constexpr UDoorFrameComponent_DoorTransform_Offset = offsetof(UDoorFrameComponent, DoorTransform);
	static_assert(UDoorFrameComponent_DoorTransform_Offset == 0xa80, "UDoorFrameComponent::DoorTransform offset is not a80");
	auto constexpr UDoorFrameComponent_SoundOffsetFromDoor_Offset = offsetof(UDoorFrameComponent, SoundOffsetFromDoor);
	static_assert(UDoorFrameComponent_SoundOffsetFromDoor_Offset == 0xab0, "UDoorFrameComponent::SoundOffsetFromDoor offset is not ab0");
	auto constexpr UDoorFrameComponent_DoorStaticMesh_Offset = offsetof(UDoorFrameComponent, DoorStaticMesh);
	static_assert(UDoorFrameComponent_DoorStaticMesh_Offset == 0xac0, "UDoorFrameComponent::DoorStaticMesh offset is not ac0");
	auto constexpr UDoorFrameComponent_DoorDestructibleMesh_Offset = offsetof(UDoorFrameComponent, DoorDestructibleMesh);
	static_assert(UDoorFrameComponent_DoorDestructibleMesh_Offset == 0xac8, "UDoorFrameComponent::DoorDestructibleMesh offset is not ac8");
	auto constexpr UDoorFrameComponent_DoorDataAsset_Offset = offsetof(UDoorFrameComponent, DoorDataAsset);
	static_assert(UDoorFrameComponent_DoorDataAsset_Offset == 0xad0, "UDoorFrameComponent::DoorDataAsset offset is not ad0");
	auto constexpr UDoorFrameComponent_ReactionDoorData_Offset = offsetof(UDoorFrameComponent, ReactionDoorData);
	static_assert(UDoorFrameComponent_ReactionDoorData_Offset == 0xad8, "UDoorFrameComponent::ReactionDoorData offset is not ad8");
	auto constexpr UDoorFrameComponent_boolFieldAE0_Offset = offsetof(UDoorFrameComponent, boolFieldAE0);
	static_assert(UDoorFrameComponent_boolFieldAE0_Offset == 0xae0, "UDoorFrameComponent::boolFieldAE0 offset is not ae0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
