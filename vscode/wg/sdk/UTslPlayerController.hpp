#pragma once
#include "UTslBasePlayerController.hpp"
#include "FVector.hpp"
#include "ECameraViewBehaviour.hpp"
#include "FVector_NetQuantizeNormal.hpp"
#include "EObserverAuthorityType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPlayerController // Size: 0xCD0
	: public UTslBasePlayerController // Size: 0x790
{
private:
	typedef UTslPlayerController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1326); // id32("Class TslGame.TslPlayerController")
		return ptr;
	}
	ExternalPtr<struct UTslGamepadPCInputComponent> TslGamepadInputComponent; /* Ofs: 0x790 Size: 0x8 - ObjectProperty TslGame.TslPlayerController.TslGamepadInputComponent */
	FScriptMulticastDelegate OnShowReplayTimeline; /* Ofs: 0x798 Size: 0x10 - MulticastDelegateProperty TslGame.TslPlayerController.OnShowReplayTimeline */
	uint8_t UnknownData7A8[0x178];
	FVector CameraPeekLeftMove; /* Ofs: 0x920 Size: 0xC - StructProperty TslGame.TslPlayerController.CameraPeekLeftMove */
	FVector CameraPeekRightMove; /* Ofs: 0x92C Size: 0xC - StructProperty TslGame.TslPlayerController.CameraPeekRightMove */
	uint8_t UnknownData938[0x10];
	TEnumAsByte<enum ECameraViewBehaviour> CameraViewBehaviour; /* Ofs: 0x948 Size: 0x1 - EnumProperty TslGame.TslPlayerController.CameraViewBehaviour */
	uint8_t UnknownData949[0x13];
	FVector_NetQuantizeNormal SpectatorAccumViewRotation; /* Ofs: 0x95C Size: 0xC - StructProperty TslGame.TslPlayerController.SpectatorAccumViewRotation */
	TEnumAsByte<enum EObserverAuthorityType> ObserverAuthorityType; /* Ofs: 0x968 Size: 0x1 - EnumProperty TslGame.TslPlayerController.ObserverAuthorityType */
	uint8_t UnknownData969[0x37];
	ExternalPtr<struct UActorComponent> InteractionTargetComponent; /* Ofs: 0x9A0 Size: 0x8 - ObjectProperty TslGame.TslPlayerController.InteractionTargetComponent */
	ExternalPtr<struct UTslCharacter> SpectatorViewCharacter; /* Ofs: 0x9A8 Size: 0x8 - ObjectProperty TslGame.TslPlayerController.SpectatorViewCharacter */
	uint8_t UnknownData9B0[0x10];
	ExternalPtr<struct UTslAchievement> Achievement; /* Ofs: 0x9C0 Size: 0x8 - ObjectProperty TslGame.TslPlayerController.Achievement */
	ExternalPtr<struct UMeshComponent> SpectatorScopeMesh; /* Ofs: 0x9C8 Size: 0x8 - ObjectProperty TslGame.TslPlayerController.SpectatorScopeMesh */
	uint8_t UnknownData9D0[0x60];
	TArray<struct FNearClippingLevelOverZ> NearClippingLevelsOverZ; /* Ofs: 0xA30 Size: 0x10 - ArrayProperty TslGame.TslPlayerController.NearClippingLevelsOverZ */
	float MaxValidPing; /* Ofs: 0xA40 Size: 0x4 - FloatProperty TslGame.TslPlayerController.MaxValidPing */
	float DefaultFOV; /* Ofs: 0xA44 Size: 0x4 - FloatProperty TslGame.TslPlayerController.DefaultFOV */
	float InteractGamepadHoldTime; /* Ofs: 0xA48 Size: 0x4 - FloatProperty TslGame.TslPlayerController.InteractGamepadHoldTime */
	uint8_t UnknownDataA4C[0x4];
	ExternalPtr<struct UVivoxComponent> VivoxComponent; /* Ofs: 0xA50 Size: 0x8 - ObjectProperty TslGame.TslPlayerController.VivoxComponent */
	TArray<ExternalPtr<struct UTeam>> Teams; /* Ofs: 0xA58 Size: 0x10 - ArrayProperty TslGame.TslPlayerController.Teams */
	TArray<ExternalPtr<struct UTeam>> KillerTeams; /* Ofs: 0xA68 Size: 0x10 - ArrayProperty TslGame.TslPlayerController.KillerTeams */
	TArray<ExternalPtr<struct UTslCharacter>> ReplicateTeamMembers; /* Ofs: 0xA78 Size: 0x10 - ArrayProperty TslGame.TslPlayerController.ReplicateTeamMembers */
	TArray<ExternalPtr<struct UTslCharacter>> ReplicateKillerTeamMembers; /* Ofs: 0xA88 Size: 0x10 - ArrayProperty TslGame.TslPlayerController.ReplicateKillerTeamMembers */
	uint8_t UnknownDataA98[0x50];
	TArray<ExternalPtr<struct UTslCharacter>> ReplicateCharacter; /* Ofs: 0xAE8 Size: 0x10 - ArrayProperty TslGame.TslPlayerController.ReplicateCharacter */
	TArray<ExternalPtr<struct UCarePackageItem>> ReplicateCarePackageItemList; /* Ofs: 0xAF8 Size: 0x10 - ArrayProperty TslGame.TslPlayerController.ReplicateCarePackageItemList */
	uint8_t UnknownDataB08[0x20];
	float DeathResultDelaySeconds; /* Ofs: 0xB28 Size: 0x4 - FloatProperty TslGame.TslPlayerController.DeathResultDelaySeconds */
	uint8_t UnknownDataB2C[0x11C];
	uint8_t boolFieldC48;
	uint8_t UnknownDataC49[0x1F];
	ExternalPtr<struct UClass> OutlineEffectClass; /* Ofs: 0xC68 Size: 0x8 - ClassProperty TslGame.TslPlayerController.OutlineEffectClass */
	FStringAssetReference MaterialParameterCollection; /* Ofs: 0xC70 Size: 0x10 - StructProperty TslGame.TslPlayerController.MaterialParameterCollection */
	ExternalPtr<struct UTslPostProcessEffect> OutlineEffect; /* Ofs: 0xC80 Size: 0x8 - ObjectProperty TslGame.TslPlayerController.OutlineEffect */
	ExternalPtr<struct UMaterialParameterCollection> LoadedMaterialParameterCollection; /* Ofs: 0xC88 Size: 0x8 - ObjectProperty TslGame.TslPlayerController.LoadedMaterialParameterCollection */
	uint8_t boolFieldC90;
	uint8_t boolFieldC91;
	uint8_t UnknownDataC92[0x3E];


	inline bool SetTslGamepadInputComponent(t_structHelper inst, ExternalPtr<struct UTslGamepadPCInputComponent> value) { inst.WriteOffset(0x790, value); }
	inline bool SetOnShowReplayTimeline(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x798, value); }
	inline bool SetCameraPeekLeftMove(t_structHelper inst, FVector value) { inst.WriteOffset(0x920, value); }
	inline bool SetCameraPeekRightMove(t_structHelper inst, FVector value) { inst.WriteOffset(0x92C, value); }
	inline bool SetCameraViewBehaviour(t_structHelper inst, TEnumAsByte<enum ECameraViewBehaviour> value) { inst.WriteOffset(0x948, value); }
	inline bool SetSpectatorAccumViewRotation(t_structHelper inst, FVector_NetQuantizeNormal value) { inst.WriteOffset(0x95C, value); }
	inline bool SetObserverAuthorityType(t_structHelper inst, TEnumAsByte<enum EObserverAuthorityType> value) { inst.WriteOffset(0x968, value); }
	inline bool SetInteractionTargetComponent(t_structHelper inst, ExternalPtr<struct UActorComponent> value) { inst.WriteOffset(0x9A0, value); }
	inline bool SetSpectatorViewCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x9A8, value); }
	inline bool SetAchievement(t_structHelper inst, ExternalPtr<struct UTslAchievement> value) { inst.WriteOffset(0x9C0, value); }
	inline bool SetSpectatorScopeMesh(t_structHelper inst, ExternalPtr<struct UMeshComponent> value) { inst.WriteOffset(0x9C8, value); }
	inline bool SetNearClippingLevelsOverZ(t_structHelper inst, TArray<struct FNearClippingLevelOverZ> value) { inst.WriteOffset(0xA30, value); }
	inline bool SetMaxValidPing(t_structHelper inst, float value) { inst.WriteOffset(0xA40, value); }
	inline bool SetDefaultFOV(t_structHelper inst, float value) { inst.WriteOffset(0xA44, value); }
	inline bool SetInteractGamepadHoldTime(t_structHelper inst, float value) { inst.WriteOffset(0xA48, value); }
	inline bool SetVivoxComponent(t_structHelper inst, ExternalPtr<struct UVivoxComponent> value) { inst.WriteOffset(0xA50, value); }
	inline bool SetTeams(t_structHelper inst, TArray<ExternalPtr<struct UTeam>> value) { inst.WriteOffset(0xA58, value); }
	inline bool SetKillerTeams(t_structHelper inst, TArray<ExternalPtr<struct UTeam>> value) { inst.WriteOffset(0xA68, value); }
	inline bool SetReplicateTeamMembers(t_structHelper inst, TArray<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0xA78, value); }
	inline bool SetReplicateKillerTeamMembers(t_structHelper inst, TArray<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0xA88, value); }
	inline bool SetReplicateCharacter(t_structHelper inst, TArray<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0xAE8, value); }
	inline bool SetReplicateCarePackageItemList(t_structHelper inst, TArray<ExternalPtr<struct UCarePackageItem>> value) { inst.WriteOffset(0xAF8, value); }
	inline bool SetDeathResultDelaySeconds(t_structHelper inst, float value) { inst.WriteOffset(0xB28, value); }
	inline bool bUseTPAntibotClient()
	{
		return boolFieldC48& 0x1;
	}
	inline bool SetbUseTPAntibotClient(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOutlineEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xC68, value); }
	inline bool SetMaterialParameterCollection(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0xC70, value); }
	inline bool SetOutlineEffect(t_structHelper inst, ExternalPtr<struct UTslPostProcessEffect> value) { inst.WriteOffset(0xC80, value); }
	inline bool SetLoadedMaterialParameterCollection(t_structHelper inst, ExternalPtr<struct UMaterialParameterCollection> value) { inst.WriteOffset(0xC88, value); }
	inline bool bIsAllLv3EquippedAlready()
	{
		return boolFieldC90& 0x1;
	}
	inline bool SetbIsAllLv3EquippedAlready(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsRankingAlreadyUpdated()
	{
		return boolFieldC91& 0x1;
	}
	inline bool SetbIsRankingAlreadyUpdated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC91, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPlayerController = sizeof(UTslPlayerController); // 3280
    static_assert(sizeof(UTslPlayerController) == 0xCD0, "Size of UTslPlayerController is not correct.");
	auto constexpr UTslPlayerController_TslGamepadInputComponent_Offset = offsetof(UTslPlayerController, TslGamepadInputComponent);
	static_assert(UTslPlayerController_TslGamepadInputComponent_Offset == 0x790, "UTslPlayerController::TslGamepadInputComponent offset is not 790");
	auto constexpr UTslPlayerController_OnShowReplayTimeline_Offset = offsetof(UTslPlayerController, OnShowReplayTimeline);
	static_assert(UTslPlayerController_OnShowReplayTimeline_Offset == 0x798, "UTslPlayerController::OnShowReplayTimeline offset is not 798");
	auto constexpr UTslPlayerController_CameraPeekLeftMove_Offset = offsetof(UTslPlayerController, CameraPeekLeftMove);
	static_assert(UTslPlayerController_CameraPeekLeftMove_Offset == 0x920, "UTslPlayerController::CameraPeekLeftMove offset is not 920");
	auto constexpr UTslPlayerController_CameraPeekRightMove_Offset = offsetof(UTslPlayerController, CameraPeekRightMove);
	static_assert(UTslPlayerController_CameraPeekRightMove_Offset == 0x92c, "UTslPlayerController::CameraPeekRightMove offset is not 92c");
	auto constexpr UTslPlayerController_CameraViewBehaviour_Offset = offsetof(UTslPlayerController, CameraViewBehaviour);
	static_assert(UTslPlayerController_CameraViewBehaviour_Offset == 0x948, "UTslPlayerController::CameraViewBehaviour offset is not 948");
	auto constexpr UTslPlayerController_SpectatorAccumViewRotation_Offset = offsetof(UTslPlayerController, SpectatorAccumViewRotation);
	static_assert(UTslPlayerController_SpectatorAccumViewRotation_Offset == 0x95c, "UTslPlayerController::SpectatorAccumViewRotation offset is not 95c");
	auto constexpr UTslPlayerController_ObserverAuthorityType_Offset = offsetof(UTslPlayerController, ObserverAuthorityType);
	static_assert(UTslPlayerController_ObserverAuthorityType_Offset == 0x968, "UTslPlayerController::ObserverAuthorityType offset is not 968");
	auto constexpr UTslPlayerController_InteractionTargetComponent_Offset = offsetof(UTslPlayerController, InteractionTargetComponent);
	static_assert(UTslPlayerController_InteractionTargetComponent_Offset == 0x9a0, "UTslPlayerController::InteractionTargetComponent offset is not 9a0");
	auto constexpr UTslPlayerController_SpectatorViewCharacter_Offset = offsetof(UTslPlayerController, SpectatorViewCharacter);
	static_assert(UTslPlayerController_SpectatorViewCharacter_Offset == 0x9a8, "UTslPlayerController::SpectatorViewCharacter offset is not 9a8");
	auto constexpr UTslPlayerController_Achievement_Offset = offsetof(UTslPlayerController, Achievement);
	static_assert(UTslPlayerController_Achievement_Offset == 0x9c0, "UTslPlayerController::Achievement offset is not 9c0");
	auto constexpr UTslPlayerController_SpectatorScopeMesh_Offset = offsetof(UTslPlayerController, SpectatorScopeMesh);
	static_assert(UTslPlayerController_SpectatorScopeMesh_Offset == 0x9c8, "UTslPlayerController::SpectatorScopeMesh offset is not 9c8");
	auto constexpr UTslPlayerController_NearClippingLevelsOverZ_Offset = offsetof(UTslPlayerController, NearClippingLevelsOverZ);
	static_assert(UTslPlayerController_NearClippingLevelsOverZ_Offset == 0xa30, "UTslPlayerController::NearClippingLevelsOverZ offset is not a30");
	auto constexpr UTslPlayerController_MaxValidPing_Offset = offsetof(UTslPlayerController, MaxValidPing);
	static_assert(UTslPlayerController_MaxValidPing_Offset == 0xa40, "UTslPlayerController::MaxValidPing offset is not a40");
	auto constexpr UTslPlayerController_DefaultFOV_Offset = offsetof(UTslPlayerController, DefaultFOV);
	static_assert(UTslPlayerController_DefaultFOV_Offset == 0xa44, "UTslPlayerController::DefaultFOV offset is not a44");
	auto constexpr UTslPlayerController_InteractGamepadHoldTime_Offset = offsetof(UTslPlayerController, InteractGamepadHoldTime);
	static_assert(UTslPlayerController_InteractGamepadHoldTime_Offset == 0xa48, "UTslPlayerController::InteractGamepadHoldTime offset is not a48");
	auto constexpr UTslPlayerController_VivoxComponent_Offset = offsetof(UTslPlayerController, VivoxComponent);
	static_assert(UTslPlayerController_VivoxComponent_Offset == 0xa50, "UTslPlayerController::VivoxComponent offset is not a50");
	auto constexpr UTslPlayerController_Teams_Offset = offsetof(UTslPlayerController, Teams);
	static_assert(UTslPlayerController_Teams_Offset == 0xa58, "UTslPlayerController::Teams offset is not a58");
	auto constexpr UTslPlayerController_KillerTeams_Offset = offsetof(UTslPlayerController, KillerTeams);
	static_assert(UTslPlayerController_KillerTeams_Offset == 0xa68, "UTslPlayerController::KillerTeams offset is not a68");
	auto constexpr UTslPlayerController_ReplicateTeamMembers_Offset = offsetof(UTslPlayerController, ReplicateTeamMembers);
	static_assert(UTslPlayerController_ReplicateTeamMembers_Offset == 0xa78, "UTslPlayerController::ReplicateTeamMembers offset is not a78");
	auto constexpr UTslPlayerController_ReplicateKillerTeamMembers_Offset = offsetof(UTslPlayerController, ReplicateKillerTeamMembers);
	static_assert(UTslPlayerController_ReplicateKillerTeamMembers_Offset == 0xa88, "UTslPlayerController::ReplicateKillerTeamMembers offset is not a88");
	auto constexpr UTslPlayerController_ReplicateCharacter_Offset = offsetof(UTslPlayerController, ReplicateCharacter);
	static_assert(UTslPlayerController_ReplicateCharacter_Offset == 0xae8, "UTslPlayerController::ReplicateCharacter offset is not ae8");
	auto constexpr UTslPlayerController_ReplicateCarePackageItemList_Offset = offsetof(UTslPlayerController, ReplicateCarePackageItemList);
	static_assert(UTslPlayerController_ReplicateCarePackageItemList_Offset == 0xaf8, "UTslPlayerController::ReplicateCarePackageItemList offset is not af8");
	auto constexpr UTslPlayerController_DeathResultDelaySeconds_Offset = offsetof(UTslPlayerController, DeathResultDelaySeconds);
	static_assert(UTslPlayerController_DeathResultDelaySeconds_Offset == 0xb28, "UTslPlayerController::DeathResultDelaySeconds offset is not b28");
	auto constexpr UTslPlayerController_boolFieldC48_Offset = offsetof(UTslPlayerController, boolFieldC48);
	static_assert(UTslPlayerController_boolFieldC48_Offset == 0xc48, "UTslPlayerController::boolFieldC48 offset is not c48");
	auto constexpr UTslPlayerController_OutlineEffectClass_Offset = offsetof(UTslPlayerController, OutlineEffectClass);
	static_assert(UTslPlayerController_OutlineEffectClass_Offset == 0xc68, "UTslPlayerController::OutlineEffectClass offset is not c68");
	auto constexpr UTslPlayerController_MaterialParameterCollection_Offset = offsetof(UTslPlayerController, MaterialParameterCollection);
	static_assert(UTslPlayerController_MaterialParameterCollection_Offset == 0xc70, "UTslPlayerController::MaterialParameterCollection offset is not c70");
	auto constexpr UTslPlayerController_OutlineEffect_Offset = offsetof(UTslPlayerController, OutlineEffect);
	static_assert(UTslPlayerController_OutlineEffect_Offset == 0xc80, "UTslPlayerController::OutlineEffect offset is not c80");
	auto constexpr UTslPlayerController_LoadedMaterialParameterCollection_Offset = offsetof(UTslPlayerController, LoadedMaterialParameterCollection);
	static_assert(UTslPlayerController_LoadedMaterialParameterCollection_Offset == 0xc88, "UTslPlayerController::LoadedMaterialParameterCollection offset is not c88");
	auto constexpr UTslPlayerController_boolFieldC90_Offset = offsetof(UTslPlayerController, boolFieldC90);
	static_assert(UTslPlayerController_boolFieldC90_Offset == 0xc90, "UTslPlayerController::boolFieldC90 offset is not c90");
	auto constexpr UTslPlayerController_boolFieldC91_Offset = offsetof(UTslPlayerController, boolFieldC91);
	static_assert(UTslPlayerController_boolFieldC91_Offset == 0xc91, "UTslPlayerController::boolFieldC91 offset is not c91");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
