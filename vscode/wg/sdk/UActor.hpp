#pragma once
#include "ENetRole.hpp"
#include "FRepMovement.hpp"
#include "FRepAttachment.hpp"
#include "EAutoReceiveInput.hpp"
#include "EInputConsumeOptions.hpp"
#include "FActorTickFunction.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UActor // Size: 0x410
	: public UObject // Size: 0x30
{
private:
	typedef UActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(3); // id32("Class Engine.Actor")
		return ptr;
	}
	TArray<ExternalPtr<struct UActorComponent>> InstanceComponents; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.Actor.InstanceComponents */
	uint8_t UnknownData40[0x8];
	ExternalPtr<struct UPawn> Instigator; /* Ofs: 0x48 Size: 0x8 - ObjectProperty Engine.Actor.Instigator */
	uint8_t UnknownData50[0x10];
	TWeakObjectPtr<ExternalPtr<struct UChildActorComponent>> ParentComponent; /* Ofs: 0x60 Size: 0x8 - WeakObjectProperty Engine.Actor.ParentComponent */
	uint8_t UnknownData68[0x4];
	uint8_t boolField6C;
	uint8_t UnknownData6D[0x3];
	FName NetDriverName; /* Ofs: 0x70 Size: 0x8 - NameProperty Engine.Actor.NetDriverName */
	TEnumAsByte<enum ENetRole> RemoteRole; /* Ofs: 0x78 Size: 0x1 - ByteProperty Engine.Actor.RemoteRole */
	uint8_t UnknownData79[0x7];
	EncryptedExternalPtr<struct UActor> Owner; /* Ofs: 0x80 Size: 0x10 - EncryptedObjectProperty Engine.Actor.Owner */
	FRepMovement ReplicatedMovement; /* Ofs: 0x90 Size: 0x34 - StructProperty Engine.Actor.ReplicatedMovement */
	uint8_t UnknownDataC4[0x4];
	FRepAttachment AttachmentReplication; /* Ofs: 0xC8 Size: 0x40 - StructProperty Engine.Actor.AttachmentReplication */
	FScriptMulticastDelegate OnInputTouchEnter; /* Ofs: 0x108 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnInputTouchEnter */
	FScriptMulticastDelegate OnInputTouchBegin; /* Ofs: 0x118 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnInputTouchBegin */
	FScriptMulticastDelegate OnActorBeginOverlap; /* Ofs: 0x128 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnActorBeginOverlap */
	uint64_t HiddenEditorViews; /* Ofs: 0x138 Size: 0x8 - UInt64Property Engine.Actor.HiddenEditorViews */
	uint8_t boolField140;
	uint8_t boolField141;
	uint8_t boolField142;
	uint8_t boolField143;
	uint8_t boolField144;
	uint8_t UnknownData145[0x3];
	TArray<ExternalPtr<struct UActor>> Children; /* Ofs: 0x148 Size: 0x10 - ArrayProperty Engine.Actor.Children */
	uint8_t UnknownData158[0x20];
	TSet<ExternalPtr<struct UActorComponent>> OwnedComponents; /* Ofs: 0x178 Size: 0x50 - CUSTOM FIELD */
	TEnumAsByte<enum ENetRole> Role; /* Ofs: 0x1C8 Size: 0x1 - ByteProperty Engine.Actor.Role */
	uint8_t UnknownData1C9[0x3];
	float CustomTimeDilation; /* Ofs: 0x1CC Size: 0x4 - FloatProperty Engine.Actor.CustomTimeDilation */
	FScriptMulticastDelegate OnEndCursorOver; /* Ofs: 0x1D0 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnEndCursorOver */
	uint8_t boolField1E0;
	uint8_t UnknownData1E1[0x7];
	TArray<struct FName> Tags; /* Ofs: 0x1E8 Size: 0x10 - ArrayProperty Engine.Actor.Tags */
	float MinNetUpdateFrequency; /* Ofs: 0x1F8 Size: 0x4 - FloatProperty Engine.Actor.MinNetUpdateFrequency */
	float NetCullDistanceSquared; /* Ofs: 0x1FC Size: 0x4 - FloatProperty Engine.Actor.NetCullDistanceSquared */
	FScriptMulticastDelegate OnActorEndOverlap; /* Ofs: 0x200 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnActorEndOverlap */
	uint8_t UnknownData210[0x50];
	TWeakObjectPtr<ExternalPtr<struct UActor>> ParentComponentActor; /* Ofs: 0x260 Size: 0x8 - WeakObjectProperty Engine.Actor.ParentComponentActor */
	FScriptMulticastDelegate OnTakeAnyDamage; /* Ofs: 0x268 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnTakeAnyDamage */
	float NetPriority; /* Ofs: 0x278 Size: 0x4 - FloatProperty Engine.Actor.NetPriority */
	uint8_t UnknownData27C[0x4];
	FScriptMulticastDelegate OnInputTouchLeave; /* Ofs: 0x280 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnInputTouchLeave */
	TEnumAsByte<enum EAutoReceiveInput> AutoReceiveInput; /* Ofs: 0x290 Size: 0x1 - ByteProperty Engine.Actor.AutoReceiveInput */
	uint8_t UnknownData291[0x7];
	FScriptMulticastDelegate OnReleased; /* Ofs: 0x298 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnReleased */
	FScriptMulticastDelegate OnInputTouchEnd; /* Ofs: 0x2A8 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnInputTouchEnd */
	float NetUpdateFrequency; /* Ofs: 0x2B8 Size: 0x4 - FloatProperty Engine.Actor.NetUpdateFrequency */
	int32_t NetTag; /* Ofs: 0x2BC Size: 0x4 - IntProperty Engine.Actor.NetTag */
	uint8_t UnknownData2C0[0x8];
	int32_t InputPriority; /* Ofs: 0x2C8 Size: 0x4 - IntProperty Engine.Actor.InputPriority */
	uint8_t UnknownData2CC[0x4];
	TArray<struct FName> Layers; /* Ofs: 0x2D0 Size: 0x10 - ArrayProperty Engine.Actor.Layers */
	FScriptMulticastDelegate OnTakePointDamage; /* Ofs: 0x2E0 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnTakePointDamage */
	EncryptedExternalPtr<struct USceneComponent> RootComponent; /* Ofs: 0x2F0 Size: 0x10 - EncryptedObjectProperty Engine.Actor.RootComponent */
	TEnumAsByte<enum EInputConsumeOptions> InputConsumeOption; /* Ofs: 0x300 Size: 0x1 - ByteProperty Engine.Actor.InputConsumeOption */
	uint8_t UnknownData301[0x7];
	FScriptMulticastDelegate OnActorHit; /* Ofs: 0x308 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnActorHit */
	uint8_t UnknownData318[0x8];
	ExternalPtr<struct UInputComponent> InputComponent; /* Ofs: 0x320 Size: 0x8 - ObjectProperty Engine.Actor.InputComponent */
	uint8_t UnknownData328[0x8];
	float InitialLifeSpan; /* Ofs: 0x330 Size: 0x4 - FloatProperty Engine.Actor.InitialLifeSpan */
	uint8_t UnknownData334[0x4];
	FScriptMulticastDelegate OnBeginCursorOver; /* Ofs: 0x338 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnBeginCursorOver */
	FActorTickFunction PrimaryActorTick; /* Ofs: 0x348 Size: 0x58 - StructProperty Engine.Actor.PrimaryActorTick */
	TEnumAsByte<enum ESpawnActorCollisionHandlingMethod> SpawnCollisionHandlingMethod; /* Ofs: 0x3A0 Size: 0x1 - EnumProperty Engine.Actor.SpawnCollisionHandlingMethod */
	uint8_t UnknownData3A1[0x7];
	FScriptMulticastDelegate OnDestroyed; /* Ofs: 0x3A8 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnDestroyed */
	FScriptMulticastDelegate OnEndPlay; /* Ofs: 0x3B8 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnEndPlay */
	uint8_t UnknownData3C8[0x8];
	FScriptMulticastDelegate OnClicked; /* Ofs: 0x3D0 Size: 0x10 - MulticastDelegateProperty Engine.Actor.OnClicked */
	TArray<ExternalPtr<struct UMatineeActor>> ControllingMatineeActors; /* Ofs: 0x3E0 Size: 0x10 - ArrayProperty Engine.Actor.ControllingMatineeActors */
	TArray<ExternalPtr<struct UActorComponent>> BlueprintCreatedComponents; /* Ofs: 0x3F0 Size: 0x10 - ArrayProperty Engine.Actor.BlueprintCreatedComponents */
	uint8_t UnknownData400[0x10];


	inline bool SetInstanceComponents(t_structHelper inst, TArray<ExternalPtr<struct UActorComponent>> value) { inst.WriteOffset(0x30, value); }
	inline bool SetInstigator(t_structHelper inst, ExternalPtr<struct UPawn> value) { inst.WriteOffset(0x48, value); }
	inline bool SetParentComponent(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UChildActorComponent>> value) { inst.WriteOffset(0x60, value); }
	inline bool bActorEnableCollision()
	{
		return boolField6C& 0x8;
	}
	inline bool SetbActorEnableCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bReplicates()
	{
		return boolField6C& 0x20;
	}
	inline bool SetbReplicates(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetNetDriverName(t_structHelper inst, FName value) { inst.WriteOffset(0x70, value); }
	inline bool SetRemoteRole(t_structHelper inst, TEnumAsByte<enum ENetRole> value) { inst.WriteOffset(0x78, value); }
	inline bool SetOwner(t_structHelper inst, EncryptedExternalPtr<struct UActor> value) { inst.WriteOffset(0x80, value); }
	inline bool SetReplicatedMovement(t_structHelper inst, FRepMovement value) { inst.WriteOffset(0x90, value); }
	inline bool SetAttachmentReplication(t_structHelper inst, FRepAttachment value) { inst.WriteOffset(0xC8, value); }
	inline bool SetOnInputTouchEnter(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x108, value); }
	inline bool SetOnInputTouchBegin(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x118, value); }
	inline bool SetOnActorBeginOverlap(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x128, value); }
	inline bool SetHiddenEditorViews(t_structHelper inst, uint64_t value) { inst.WriteOffset(0x138, value); }
	inline bool bHidden()
	{
		return boolField140& 0x1;
	}
	inline bool SetbHidden(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x140, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bNetTemporary()
	{
		return boolField140& 0x2;
	}
	inline bool SetbNetTemporary(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x140, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bNetStartup()
	{
		return boolField140& 0x4;
	}
	inline bool SetbNetStartup(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x140, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bOnlyRelevantToOwner()
	{
		return boolField140& 0x8;
	}
	inline bool SetbOnlyRelevantToOwner(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x140, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bAlwaysRelevant()
	{
		return boolField140& 0x10;
	}
	inline bool SetbAlwaysRelevant(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x140, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bReplicateMovement()
	{
		return boolField140& 0x20;
	}
	inline bool SetbReplicateMovement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x140, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bCloseAttachedActorChannelsWhenCloseActorChannel()
	{
		return boolField141& 0x1;
	}
	inline bool SetbCloseAttachedActorChannelsWhenCloseActorChannel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x141, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTearOff()
	{
		return boolField142& 0x1;
	}
	inline bool SetbTearOff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x142, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bExchangedRoles()
	{
		return boolField142& 0x2;
	}
	inline bool SetbExchangedRoles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x142, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bNetLoadOnClient()
	{
		return boolField142& 0x8;
	}
	inline bool SetbNetLoadOnClient(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x142, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bNetUseOwnerRelevancy()
	{
		return boolField142& 0x10;
	}
	inline bool SetbNetUseOwnerRelevancy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x142, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bBlockInput()
	{
		return boolField142& 0x20;
	}
	inline bool SetbBlockInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x142, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bAllowTickBeforeBeginPlay()
	{
		return boolField142& 0x80;
	}
	inline bool SetbAllowTickBeforeBeginPlay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x142, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bAutoDestroyWhenFinished()
	{
		return boolField143& 0x1;
	}
	inline bool SetbAutoDestroyWhenFinished(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x143, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCanBeDamaged()
	{
		return boolField143& 0x2;
	}
	inline bool SetbCanBeDamaged(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x143, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bActorIsBeingDestroyed()
	{
		return boolField143& 0x4;
	}
	inline bool SetbActorIsBeingDestroyed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x143, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bCollideWhenPlacing()
	{
		return boolField143& 0x8;
	}
	inline bool SetbCollideWhenPlacing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x143, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bFindCameraComponentWhenViewTarget()
	{
		return boolField143& 0x10;
	}
	inline bool SetbFindCameraComponentWhenViewTarget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x143, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bRelevantForNetworkReplays()
	{
		return boolField143& 0x20;
	}
	inline bool SetbRelevantForNetworkReplays(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x143, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bGenerateOverlapEventsDuringLevelStreaming()
	{
		return boolField143& 0x40;
	}
	inline bool SetbGenerateOverlapEventsDuringLevelStreaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x143, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bIgnoreDestroyActorFromBlueprint()
	{
		return boolField143& 0x80;
	}
	inline bool SetbIgnoreDestroyActorFromBlueprint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x143, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bCanBeInCluster()
	{
		return boolField144& 0x1;
	}
	inline bool SetbCanBeInCluster(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x144, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetChildren(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x148, value); }
	inline bool SetRole(t_structHelper inst, TEnumAsByte<enum ENetRole> value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetCustomTimeDilation(t_structHelper inst, float value) { inst.WriteOffset(0x1CC, value); }
	inline bool SetOnEndCursorOver(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1D0, value); }
	inline bool bAllowReceiveTickEventOnDedicatedServer()
	{
		return boolField1E0& 0x1;
	}
	inline bool SetbAllowReceiveTickEventOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bActorSeamlessTraveled()
	{
		return boolField1E0& 0x10;
	}
	inline bool SetbActorSeamlessTraveled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E0, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bIgnoresOriginShifting()
	{
		return boolField1E0& 0x20;
	}
	inline bool SetbIgnoresOriginShifting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E0, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bEnableAutoLODGeneration()
	{
		return boolField1E0& 0x40;
	}
	inline bool SetbEnableAutoLODGeneration(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E0, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetTags(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetMinNetUpdateFrequency(t_structHelper inst, float value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetNetCullDistanceSquared(t_structHelper inst, float value) { inst.WriteOffset(0x1FC, value); }
	inline bool SetOnActorEndOverlap(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x200, value); }
	inline bool SetParentComponentActor(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x260, value); }
	inline bool SetOnTakeAnyDamage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x268, value); }
	inline bool SetNetPriority(t_structHelper inst, float value) { inst.WriteOffset(0x278, value); }
	inline bool SetOnInputTouchLeave(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x280, value); }
	inline bool SetAutoReceiveInput(t_structHelper inst, TEnumAsByte<enum EAutoReceiveInput> value) { inst.WriteOffset(0x290, value); }
	inline bool SetOnReleased(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x298, value); }
	inline bool SetOnInputTouchEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetNetUpdateFrequency(t_structHelper inst, float value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetNetTag(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2BC, value); }
	inline bool SetInputPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetLayers(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetOnTakePointDamage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetRootComponent(t_structHelper inst, EncryptedExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetInputConsumeOption(t_structHelper inst, TEnumAsByte<enum EInputConsumeOptions> value) { inst.WriteOffset(0x300, value); }
	inline bool SetOnActorHit(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x308, value); }
	inline bool SetInputComponent(t_structHelper inst, ExternalPtr<struct UInputComponent> value) { inst.WriteOffset(0x320, value); }
	inline bool SetInitialLifeSpan(t_structHelper inst, float value) { inst.WriteOffset(0x330, value); }
	inline bool SetOnBeginCursorOver(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x338, value); }
	inline bool SetPrimaryActorTick(t_structHelper inst, FActorTickFunction value) { inst.WriteOffset(0x348, value); }
	inline bool SetSpawnCollisionHandlingMethod(t_structHelper inst, TEnumAsByte<enum ESpawnActorCollisionHandlingMethod> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetOnDestroyed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetOnEndPlay(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetOnClicked(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetControllingMatineeActors(t_structHelper inst, TArray<ExternalPtr<struct UMatineeActor>> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetBlueprintCreatedComponents(t_structHelper inst, TArray<ExternalPtr<struct UActorComponent>> value) { inst.WriteOffset(0x3F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUActor = sizeof(UActor); // 1040
    static_assert(sizeof(UActor) == 0x410, "Size of UActor is not correct.");
	auto constexpr UActor_InstanceComponents_Offset = offsetof(UActor, InstanceComponents);
	static_assert(UActor_InstanceComponents_Offset == 0x30, "UActor::InstanceComponents offset is not 30");
	auto constexpr UActor_Instigator_Offset = offsetof(UActor, Instigator);
	static_assert(UActor_Instigator_Offset == 0x48, "UActor::Instigator offset is not 48");
	auto constexpr UActor_ParentComponent_Offset = offsetof(UActor, ParentComponent);
	static_assert(UActor_ParentComponent_Offset == 0x60, "UActor::ParentComponent offset is not 60");
	auto constexpr UActor_boolField6C_Offset = offsetof(UActor, boolField6C);
	static_assert(UActor_boolField6C_Offset == 0x6c, "UActor::boolField6C offset is not 6c");
	auto constexpr UActor_NetDriverName_Offset = offsetof(UActor, NetDriverName);
	static_assert(UActor_NetDriverName_Offset == 0x70, "UActor::NetDriverName offset is not 70");
	auto constexpr UActor_RemoteRole_Offset = offsetof(UActor, RemoteRole);
	static_assert(UActor_RemoteRole_Offset == 0x78, "UActor::RemoteRole offset is not 78");
	auto constexpr UActor_Owner_Offset = offsetof(UActor, Owner);
	static_assert(UActor_Owner_Offset == 0x80, "UActor::Owner offset is not 80");
	auto constexpr UActor_ReplicatedMovement_Offset = offsetof(UActor, ReplicatedMovement);
	static_assert(UActor_ReplicatedMovement_Offset == 0x90, "UActor::ReplicatedMovement offset is not 90");
	auto constexpr UActor_AttachmentReplication_Offset = offsetof(UActor, AttachmentReplication);
	static_assert(UActor_AttachmentReplication_Offset == 0xc8, "UActor::AttachmentReplication offset is not c8");
	auto constexpr UActor_OnInputTouchEnter_Offset = offsetof(UActor, OnInputTouchEnter);
	static_assert(UActor_OnInputTouchEnter_Offset == 0x108, "UActor::OnInputTouchEnter offset is not 108");
	auto constexpr UActor_OnInputTouchBegin_Offset = offsetof(UActor, OnInputTouchBegin);
	static_assert(UActor_OnInputTouchBegin_Offset == 0x118, "UActor::OnInputTouchBegin offset is not 118");
	auto constexpr UActor_OnActorBeginOverlap_Offset = offsetof(UActor, OnActorBeginOverlap);
	static_assert(UActor_OnActorBeginOverlap_Offset == 0x128, "UActor::OnActorBeginOverlap offset is not 128");
	auto constexpr UActor_HiddenEditorViews_Offset = offsetof(UActor, HiddenEditorViews);
	static_assert(UActor_HiddenEditorViews_Offset == 0x138, "UActor::HiddenEditorViews offset is not 138");
	auto constexpr UActor_boolField140_Offset = offsetof(UActor, boolField140);
	static_assert(UActor_boolField140_Offset == 0x140, "UActor::boolField140 offset is not 140");
	auto constexpr UActor_boolField141_Offset = offsetof(UActor, boolField141);
	static_assert(UActor_boolField141_Offset == 0x141, "UActor::boolField141 offset is not 141");
	auto constexpr UActor_boolField142_Offset = offsetof(UActor, boolField142);
	static_assert(UActor_boolField142_Offset == 0x142, "UActor::boolField142 offset is not 142");
	auto constexpr UActor_boolField143_Offset = offsetof(UActor, boolField143);
	static_assert(UActor_boolField143_Offset == 0x143, "UActor::boolField143 offset is not 143");
	auto constexpr UActor_boolField144_Offset = offsetof(UActor, boolField144);
	static_assert(UActor_boolField144_Offset == 0x144, "UActor::boolField144 offset is not 144");
	auto constexpr UActor_Children_Offset = offsetof(UActor, Children);
	static_assert(UActor_Children_Offset == 0x148, "UActor::Children offset is not 148");
	auto constexpr UActor_OwnedComponents_Offset = offsetof(UActor, OwnedComponents);
	static_assert(UActor_OwnedComponents_Offset == 0x178, "UActor::OwnedComponents offset is not 178");
	auto constexpr UActor_Role_Offset = offsetof(UActor, Role);
	static_assert(UActor_Role_Offset == 0x1c8, "UActor::Role offset is not 1c8");
	auto constexpr UActor_CustomTimeDilation_Offset = offsetof(UActor, CustomTimeDilation);
	static_assert(UActor_CustomTimeDilation_Offset == 0x1cc, "UActor::CustomTimeDilation offset is not 1cc");
	auto constexpr UActor_OnEndCursorOver_Offset = offsetof(UActor, OnEndCursorOver);
	static_assert(UActor_OnEndCursorOver_Offset == 0x1d0, "UActor::OnEndCursorOver offset is not 1d0");
	auto constexpr UActor_boolField1E0_Offset = offsetof(UActor, boolField1E0);
	static_assert(UActor_boolField1E0_Offset == 0x1e0, "UActor::boolField1E0 offset is not 1e0");
	auto constexpr UActor_Tags_Offset = offsetof(UActor, Tags);
	static_assert(UActor_Tags_Offset == 0x1e8, "UActor::Tags offset is not 1e8");
	auto constexpr UActor_MinNetUpdateFrequency_Offset = offsetof(UActor, MinNetUpdateFrequency);
	static_assert(UActor_MinNetUpdateFrequency_Offset == 0x1f8, "UActor::MinNetUpdateFrequency offset is not 1f8");
	auto constexpr UActor_NetCullDistanceSquared_Offset = offsetof(UActor, NetCullDistanceSquared);
	static_assert(UActor_NetCullDistanceSquared_Offset == 0x1fc, "UActor::NetCullDistanceSquared offset is not 1fc");
	auto constexpr UActor_OnActorEndOverlap_Offset = offsetof(UActor, OnActorEndOverlap);
	static_assert(UActor_OnActorEndOverlap_Offset == 0x200, "UActor::OnActorEndOverlap offset is not 200");
	auto constexpr UActor_ParentComponentActor_Offset = offsetof(UActor, ParentComponentActor);
	static_assert(UActor_ParentComponentActor_Offset == 0x260, "UActor::ParentComponentActor offset is not 260");
	auto constexpr UActor_OnTakeAnyDamage_Offset = offsetof(UActor, OnTakeAnyDamage);
	static_assert(UActor_OnTakeAnyDamage_Offset == 0x268, "UActor::OnTakeAnyDamage offset is not 268");
	auto constexpr UActor_NetPriority_Offset = offsetof(UActor, NetPriority);
	static_assert(UActor_NetPriority_Offset == 0x278, "UActor::NetPriority offset is not 278");
	auto constexpr UActor_OnInputTouchLeave_Offset = offsetof(UActor, OnInputTouchLeave);
	static_assert(UActor_OnInputTouchLeave_Offset == 0x280, "UActor::OnInputTouchLeave offset is not 280");
	auto constexpr UActor_AutoReceiveInput_Offset = offsetof(UActor, AutoReceiveInput);
	static_assert(UActor_AutoReceiveInput_Offset == 0x290, "UActor::AutoReceiveInput offset is not 290");
	auto constexpr UActor_OnReleased_Offset = offsetof(UActor, OnReleased);
	static_assert(UActor_OnReleased_Offset == 0x298, "UActor::OnReleased offset is not 298");
	auto constexpr UActor_OnInputTouchEnd_Offset = offsetof(UActor, OnInputTouchEnd);
	static_assert(UActor_OnInputTouchEnd_Offset == 0x2a8, "UActor::OnInputTouchEnd offset is not 2a8");
	auto constexpr UActor_NetUpdateFrequency_Offset = offsetof(UActor, NetUpdateFrequency);
	static_assert(UActor_NetUpdateFrequency_Offset == 0x2b8, "UActor::NetUpdateFrequency offset is not 2b8");
	auto constexpr UActor_NetTag_Offset = offsetof(UActor, NetTag);
	static_assert(UActor_NetTag_Offset == 0x2bc, "UActor::NetTag offset is not 2bc");
	auto constexpr UActor_InputPriority_Offset = offsetof(UActor, InputPriority);
	static_assert(UActor_InputPriority_Offset == 0x2c8, "UActor::InputPriority offset is not 2c8");
	auto constexpr UActor_Layers_Offset = offsetof(UActor, Layers);
	static_assert(UActor_Layers_Offset == 0x2d0, "UActor::Layers offset is not 2d0");
	auto constexpr UActor_OnTakePointDamage_Offset = offsetof(UActor, OnTakePointDamage);
	static_assert(UActor_OnTakePointDamage_Offset == 0x2e0, "UActor::OnTakePointDamage offset is not 2e0");
	auto constexpr UActor_RootComponent_Offset = offsetof(UActor, RootComponent);
	static_assert(UActor_RootComponent_Offset == 0x2f0, "UActor::RootComponent offset is not 2f0");
	auto constexpr UActor_InputConsumeOption_Offset = offsetof(UActor, InputConsumeOption);
	static_assert(UActor_InputConsumeOption_Offset == 0x300, "UActor::InputConsumeOption offset is not 300");
	auto constexpr UActor_OnActorHit_Offset = offsetof(UActor, OnActorHit);
	static_assert(UActor_OnActorHit_Offset == 0x308, "UActor::OnActorHit offset is not 308");
	auto constexpr UActor_InputComponent_Offset = offsetof(UActor, InputComponent);
	static_assert(UActor_InputComponent_Offset == 0x320, "UActor::InputComponent offset is not 320");
	auto constexpr UActor_InitialLifeSpan_Offset = offsetof(UActor, InitialLifeSpan);
	static_assert(UActor_InitialLifeSpan_Offset == 0x330, "UActor::InitialLifeSpan offset is not 330");
	auto constexpr UActor_OnBeginCursorOver_Offset = offsetof(UActor, OnBeginCursorOver);
	static_assert(UActor_OnBeginCursorOver_Offset == 0x338, "UActor::OnBeginCursorOver offset is not 338");
	auto constexpr UActor_PrimaryActorTick_Offset = offsetof(UActor, PrimaryActorTick);
	static_assert(UActor_PrimaryActorTick_Offset == 0x348, "UActor::PrimaryActorTick offset is not 348");
	auto constexpr UActor_SpawnCollisionHandlingMethod_Offset = offsetof(UActor, SpawnCollisionHandlingMethod);
	static_assert(UActor_SpawnCollisionHandlingMethod_Offset == 0x3a0, "UActor::SpawnCollisionHandlingMethod offset is not 3a0");
	auto constexpr UActor_OnDestroyed_Offset = offsetof(UActor, OnDestroyed);
	static_assert(UActor_OnDestroyed_Offset == 0x3a8, "UActor::OnDestroyed offset is not 3a8");
	auto constexpr UActor_OnEndPlay_Offset = offsetof(UActor, OnEndPlay);
	static_assert(UActor_OnEndPlay_Offset == 0x3b8, "UActor::OnEndPlay offset is not 3b8");
	auto constexpr UActor_OnClicked_Offset = offsetof(UActor, OnClicked);
	static_assert(UActor_OnClicked_Offset == 0x3d0, "UActor::OnClicked offset is not 3d0");
	auto constexpr UActor_ControllingMatineeActors_Offset = offsetof(UActor, ControllingMatineeActors);
	static_assert(UActor_ControllingMatineeActors_Offset == 0x3e0, "UActor::ControllingMatineeActors offset is not 3e0");
	auto constexpr UActor_BlueprintCreatedComponents_Offset = offsetof(UActor, BlueprintCreatedComponents);
	static_assert(UActor_BlueprintCreatedComponents_Offset == 0x3f0, "UActor::BlueprintCreatedComponents offset is not 3f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
