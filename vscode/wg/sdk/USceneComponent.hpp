#pragma once
#include "UActorComponent.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"
#include "EDetailMode.hpp"
#include "EComponentMobility.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USceneComponent // Size: 0x490
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef USceneComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(7); // id32("Class Engine.SceneComponent")
		return ptr;
	}
//	TArray<ExternalPtr<struct USceneComponent>> AttachChildren; /* Ofs: 0x1E8 Size: 0x10 - ArrayProperty Engine.SceneComponent.AttachChildren */
	uint8_t UnknownData1F0[0x10];
	TSet<ExternalPtr<struct USceneComponent>> ClientAttachedChildren; /* Ofs: 0x200 Size: 0x50 - SetProperty Engine.SceneComponent.ClientAttachedChildren */
	FVector RelativeLocation; /* Ofs: 0x250 Size: 0xC - StructProperty Engine.SceneComponent.RelativeLocation */
	uint8_t boolField25C;
	uint8_t boolField25D;
	uint8_t boolField25E;
	uint8_t UnknownData25F[0x1];
	TWeakObjectPtr<ExternalPtr<struct UPhysicsVolume>> PhysicsVolume; /* Ofs: 0x260 Size: 0x8 - WeakObjectProperty Engine.SceneComponent.PhysicsVolume */
	uint8_t UnknownData268[0x8];
	MathHelper::FTransform Transform; /* Ofs: 0x270 Size: 0x30 - CUSTOM FIELD */
	uint8_t UnknownData2A0[0x44];
	FVector ComponentVelocity; /* Ofs: 0x2E4 Size: 0xC - StructProperty Engine.SceneComponent.ComponentVelocity */
	uint8_t UnknownData2F0[0x20];
	FRotator RelativeRotation; /* Ofs: 0x310 Size: 0xC - StructProperty Engine.SceneComponent.RelativeRotation */
	FVector RelativeScale3D; /* Ofs: 0x31C Size: 0xC - StructProperty Engine.SceneComponent.RelativeScale3D */
	uint8_t UnknownData328[0x10];
	FVector RelativeTranslation; /* Ofs: 0x338 Size: 0xC - StructProperty Engine.SceneComponent.RelativeTranslation */
	TEnumAsByte<enum EDetailMode> DetailMode; /* Ofs: 0x344 Size: 0x1 - ByteProperty Engine.SceneComponent.DetailMode */
	uint8_t UnknownData345[0xB];
	TEnumAsByte<enum EComponentMobility> Mobility; /* Ofs: 0x350 Size: 0x1 - ByteProperty Engine.SceneComponent.Mobility */
	uint8_t UnknownData351[0x7];
	ExternalPtr<struct USceneComponent> AttachParent; /* Ofs: 0x358 Size: 0x8 - ObjectProperty Engine.SceneComponent.AttachParent */
	FName AttachSocketName; /* Ofs: 0x360 Size: 0x8 - NameProperty Engine.SceneComponent.AttachSocketName */
	FScriptMulticastDelegate PhysicsVolumeChangedDelegate; /* Ofs: 0x368 Size: 0x10 - MulticastDelegateProperty Engine.SceneComponent.PhysicsVolumeChangedDelegate */
	FScriptMulticastDelegate AttachmentChangedDelegate; /* Ofs: 0x378 Size: 0x10 - MulticastDelegateProperty Engine.SceneComponent.AttachmentChangedDelegate */
	uint8_t UnknownData388[0x108];

	Vector3 GetAbsoluteLocation() { return Transform.translation; }


//	inline bool SetAttachChildren(t_structHelper inst, TArray<ExternalPtr<struct USceneComponent>> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetClientAttachedChildren(t_structHelper inst, TSet<ExternalPtr<struct USceneComponent>> value) { inst.WriteOffset(0x200, value); }
	inline bool SetRelativeLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x250, value); }
	inline bool bReplicatesAttachmentReference()
	{
		return boolField25C& 0x2;
	}
	inline bool SetbReplicatesAttachmentReference(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bReplicatesAttachment()
	{
		return boolField25C& 0x4;
	}
	inline bool SetbReplicatesAttachment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bWorldToComponentUpdated()
	{
		return boolField25C& 0x8;
	}
	inline bool SetbWorldToComponentUpdated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25C, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bAbsoluteLocation()
	{
		return boolField25C& 0x10;
	}
	inline bool SetbAbsoluteLocation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25C, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bAbsoluteRotation()
	{
		return boolField25C& 0x20;
	}
	inline bool SetbAbsoluteRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25C, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bAbsoluteScale()
	{
		return boolField25C& 0x40;
	}
	inline bool SetbAbsoluteScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25C, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bVisible()
	{
		return boolField25C& 0x80;
	}
	inline bool SetbVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25C, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bHiddenInGame()
	{
		return boolField25D& 0x1;
	}
	inline bool SetbHiddenInGame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShouldUpdatePhysicsVolume()
	{
		return boolField25D& 0x2;
	}
	inline bool SetbShouldUpdatePhysicsVolume(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25D, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bBoundsChangeTriggersStreamingDataRebuild()
	{
		return boolField25D& 0x4;
	}
	inline bool SetbBoundsChangeTriggersStreamingDataRebuild(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25D, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUseAttachParentBound()
	{
		return boolField25D& 0x8;
	}
	inline bool SetbUseAttachParentBound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25D, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bEnableInsensitiveUpdate()
	{
		return boolField25D& 0x10;
	}
	inline bool SetbEnableInsensitiveUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25D, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bAbsoluteTranslation()
	{
		return boolField25E& 0x2;
	}
	inline bool SetbAbsoluteTranslation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x25E, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetPhysicsVolume(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UPhysicsVolume>> value) { inst.WriteOffset(0x260, value); }
	inline bool SetComponentVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x2E4, value); }
	inline bool SetRelativeRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x310, value); }
	inline bool SetRelativeScale3D(t_structHelper inst, FVector value) { inst.WriteOffset(0x31C, value); }
	inline bool SetRelativeTranslation(t_structHelper inst, FVector value) { inst.WriteOffset(0x338, value); }
	inline bool SetDetailMode(t_structHelper inst, TEnumAsByte<enum EDetailMode> value) { inst.WriteOffset(0x344, value); }
	inline bool SetMobility(t_structHelper inst, TEnumAsByte<enum EComponentMobility> value) { inst.WriteOffset(0x350, value); }
	inline bool SetAttachParent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x358, value); }
	inline bool SetAttachSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x360, value); }
	inline bool SetPhysicsVolumeChangedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x368, value); }
	inline bool SetAttachmentChangedDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x378, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSceneComponent = sizeof(USceneComponent); // 1168
    static_assert(sizeof(USceneComponent) == 0x490, "Size of USceneComponent is not correct.");
//	auto constexpr USceneComponent_AttachChildren_Offset = offsetof(USceneComponent, AttachChildren);
//	static_assert(USceneComponent_AttachChildren_Offset == 0x1e8, "USceneComponent::AttachChildren offset is not 1e8");
	auto constexpr USceneComponent_ClientAttachedChildren_Offset = offsetof(USceneComponent, ClientAttachedChildren);
	static_assert(USceneComponent_ClientAttachedChildren_Offset == 0x200, "USceneComponent::ClientAttachedChildren offset is not 200");
	auto constexpr USceneComponent_RelativeLocation_Offset = offsetof(USceneComponent, RelativeLocation);
	static_assert(USceneComponent_RelativeLocation_Offset == 0x250, "USceneComponent::RelativeLocation offset is not 250");
	auto constexpr USceneComponent_boolField25C_Offset = offsetof(USceneComponent, boolField25C);
	static_assert(USceneComponent_boolField25C_Offset == 0x25c, "USceneComponent::boolField25C offset is not 25c");
	auto constexpr USceneComponent_boolField25D_Offset = offsetof(USceneComponent, boolField25D);
	static_assert(USceneComponent_boolField25D_Offset == 0x25d, "USceneComponent::boolField25D offset is not 25d");
	auto constexpr USceneComponent_boolField25E_Offset = offsetof(USceneComponent, boolField25E);
	static_assert(USceneComponent_boolField25E_Offset == 0x25e, "USceneComponent::boolField25E offset is not 25e");
	auto constexpr USceneComponent_PhysicsVolume_Offset = offsetof(USceneComponent, PhysicsVolume);
	static_assert(USceneComponent_PhysicsVolume_Offset == 0x260, "USceneComponent::PhysicsVolume offset is not 260");
	auto constexpr USceneComponent_Transform_Offset = offsetof(USceneComponent, Transform);
	static_assert(USceneComponent_Transform_Offset == 0x270, "USceneComponent::Transform offset is not 270");
	auto constexpr USceneComponent_ComponentVelocity_Offset = offsetof(USceneComponent, ComponentVelocity);
	static_assert(USceneComponent_ComponentVelocity_Offset == 0x2e4, "USceneComponent::ComponentVelocity offset is not 2e4");
	auto constexpr USceneComponent_RelativeRotation_Offset = offsetof(USceneComponent, RelativeRotation);
	static_assert(USceneComponent_RelativeRotation_Offset == 0x310, "USceneComponent::RelativeRotation offset is not 310");
	auto constexpr USceneComponent_RelativeScale3D_Offset = offsetof(USceneComponent, RelativeScale3D);
	static_assert(USceneComponent_RelativeScale3D_Offset == 0x31c, "USceneComponent::RelativeScale3D offset is not 31c");
	auto constexpr USceneComponent_RelativeTranslation_Offset = offsetof(USceneComponent, RelativeTranslation);
	static_assert(USceneComponent_RelativeTranslation_Offset == 0x338, "USceneComponent::RelativeTranslation offset is not 338");
	auto constexpr USceneComponent_DetailMode_Offset = offsetof(USceneComponent, DetailMode);
	static_assert(USceneComponent_DetailMode_Offset == 0x344, "USceneComponent::DetailMode offset is not 344");
	auto constexpr USceneComponent_Mobility_Offset = offsetof(USceneComponent, Mobility);
	static_assert(USceneComponent_Mobility_Offset == 0x350, "USceneComponent::Mobility offset is not 350");
	auto constexpr USceneComponent_AttachParent_Offset = offsetof(USceneComponent, AttachParent);
	static_assert(USceneComponent_AttachParent_Offset == 0x358, "USceneComponent::AttachParent offset is not 358");
	auto constexpr USceneComponent_AttachSocketName_Offset = offsetof(USceneComponent, AttachSocketName);
	static_assert(USceneComponent_AttachSocketName_Offset == 0x360, "USceneComponent::AttachSocketName offset is not 360");
	auto constexpr USceneComponent_PhysicsVolumeChangedDelegate_Offset = offsetof(USceneComponent, PhysicsVolumeChangedDelegate);
	static_assert(USceneComponent_PhysicsVolumeChangedDelegate_Offset == 0x368, "USceneComponent::PhysicsVolumeChangedDelegate offset is not 368");
	auto constexpr USceneComponent_AttachmentChangedDelegate_Offset = offsetof(USceneComponent, AttachmentChangedDelegate);
	static_assert(USceneComponent_AttachmentChangedDelegate_Offset == 0x378, "USceneComponent::AttachmentChangedDelegate offset is not 378");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
