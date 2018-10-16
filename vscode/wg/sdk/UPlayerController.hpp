#pragma once
#include "UController.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "EMouseCursor.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerController // Size: 0x780
	: public UController // Size: 0x490
{
private:
	typedef UPlayerController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(697); // id32("Class Engine.PlayerController")
		return ptr;
	}
	EncryptedExternalPtr<struct UPlayer> Player; /* Ofs: 0x490 Size: 0x10 - EncryptedObjectProperty Engine.PlayerController.Player */
	uint8_t UnknownData4A0[0x10];
	EncryptedExternalPtr<struct UPawn> AcknowledgedPawn; /* Ofs: 0x4B0 Size: 0x10 - EncryptedObjectProperty Engine.PlayerController.AcknowledgedPawn */
	ExternalPtr<struct UInterpTrackInstDirector> ControllingDirTrackInst; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty Engine.PlayerController.ControllingDirTrackInst */
	uint8_t UnknownData4C8[0x8];
	ExternalPtr<struct UHUD> MyHUD; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty Engine.PlayerController.MyHUD */
	ExternalPtr<struct UPlayerCameraManager> PlayerCameraManager; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty Engine.PlayerController.PlayerCameraManager */
	ExternalPtr<struct UClass> PlayerCameraManagerClass; /* Ofs: 0x4E0 Size: 0x8 - ClassProperty Engine.PlayerController.PlayerCameraManagerClass */
	uint8_t boolField4E8;
	uint8_t UnknownData4E9[0x3];
	FRotator TargetViewRotation; /* Ofs: 0x4EC Size: 0xC - StructProperty Engine.PlayerController.TargetViewRotation */
	uint8_t UnknownData4F8[0xC];
	float SmoothTargetViewRotationSpeed; /* Ofs: 0x504 Size: 0x4 - FloatProperty Engine.PlayerController.SmoothTargetViewRotationSpeed */
	TArray<ExternalPtr<struct UActor>> HiddenActors; /* Ofs: 0x508 Size: 0x10 - ArrayProperty Engine.PlayerController.HiddenActors */
	float LastSpectatorStateSynchTime; /* Ofs: 0x518 Size: 0x4 - FloatProperty Engine.PlayerController.LastSpectatorStateSynchTime */
	FVector LastSpectatorSyncLocation; /* Ofs: 0x51C Size: 0xC - StructProperty Engine.PlayerController.LastSpectatorSyncLocation */
	FRotator LastSpectatorSyncRotation; /* Ofs: 0x528 Size: 0xC - StructProperty Engine.PlayerController.LastSpectatorSyncRotation */
	int32_t ClientCap; /* Ofs: 0x534 Size: 0x4 - IntProperty Engine.PlayerController.ClientCap */
	ExternalPtr<struct UCheatManager> CheatManager; /* Ofs: 0x538 Size: 0x8 - ObjectProperty Engine.PlayerController.CheatManager */
	ExternalPtr<struct UClass> CheatClass; /* Ofs: 0x540 Size: 0x8 - ClassProperty Engine.PlayerController.CheatClass */
	ExternalPtr<struct UPlayerInput> PlayerInput; /* Ofs: 0x548 Size: 0x8 - ObjectProperty Engine.PlayerController.PlayerInput */
	TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; /* Ofs: 0x550 Size: 0x10 - ArrayProperty Engine.PlayerController.ActiveForceFeedbackEffects */
	uint8_t UnknownData560[0x90];
	uint8_t boolField5F0;
	uint8_t UnknownData5F1[0x3];
	uint8_t NetPlayerIndex; /* Ofs: 0x5F4 Size: 0x1 - ByteProperty Engine.PlayerController.NetPlayerIndex */
	uint8_t UnknownData5F5[0x3B];
	ExternalPtr<struct UNetConnection> PendingSwapConnection; /* Ofs: 0x630 Size: 0x8 - ObjectProperty Engine.PlayerController.PendingSwapConnection */
	ExternalPtr<struct UNetConnection> NetConnection; /* Ofs: 0x638 Size: 0x8 - ObjectProperty Engine.PlayerController.NetConnection */
	uint8_t UnknownData640[0xC];
	float InputYawScale; /* Ofs: 0x64C Size: 0x4 - FloatProperty Engine.PlayerController.InputYawScale */
	float InputPitchScale; /* Ofs: 0x650 Size: 0x4 - FloatProperty Engine.PlayerController.InputPitchScale */
	float InputRollScale; /* Ofs: 0x654 Size: 0x4 - FloatProperty Engine.PlayerController.InputRollScale */
	uint8_t boolField658;
	uint8_t UnknownData659[0x7];
	TArray<struct FKey> ClickEventKeys; /* Ofs: 0x660 Size: 0x10 - ArrayProperty Engine.PlayerController.ClickEventKeys */
	TEnumAsByte<enum EMouseCursor> DefaultMouseCursor; /* Ofs: 0x670 Size: 0x1 - ByteProperty Engine.PlayerController.DefaultMouseCursor */
	TEnumAsByte<enum EMouseCursor> CurrentMouseCursor; /* Ofs: 0x671 Size: 0x1 - ByteProperty Engine.PlayerController.CurrentMouseCursor */
	TEnumAsByte<enum ECollisionChannel> DefaultClickTraceChannel; /* Ofs: 0x672 Size: 0x1 - ByteProperty Engine.PlayerController.DefaultClickTraceChannel */
	TEnumAsByte<enum ECollisionChannel> CurrentClickTraceChannel; /* Ofs: 0x673 Size: 0x1 - ByteProperty Engine.PlayerController.CurrentClickTraceChannel */
	float HitResultTraceDistance; /* Ofs: 0x674 Size: 0x4 - FloatProperty Engine.PlayerController.HitResultTraceDistance */
	uint8_t UnknownData678[0x80];
	ExternalPtr<struct UInputComponent> InactiveStateInputComponent; /* Ofs: 0x6F8 Size: 0x8 - ObjectProperty Engine.PlayerController.InactiveStateInputComponent */
	uint8_t boolField700;
	uint8_t UnknownData701[0x17];
	ExternalPtr<struct UTouchInterface> CurrentTouchInterface; /* Ofs: 0x718 Size: 0x8 - ObjectProperty Engine.PlayerController.CurrentTouchInterface */
	uint8_t UnknownData720[0x40];
	ExternalPtr<struct USpectatorPawn> SpectatorPawn; /* Ofs: 0x760 Size: 0x8 - ObjectProperty Engine.PlayerController.SpectatorPawn */
	FVector SpawnLocation; /* Ofs: 0x768 Size: 0xC - StructProperty Engine.PlayerController.SpawnLocation */
	uint8_t UnknownData774[0x4];
	uint8_t boolField778;
	uint8_t UnknownData779[0x1];
	uint16_t SeamlessTravelCount; /* Ofs: 0x77A Size: 0x2 - UInt16Property Engine.PlayerController.SeamlessTravelCount */
	uint16_t LastCompletedSeamlessTravelCount; /* Ofs: 0x77C Size: 0x2 - UInt16Property Engine.PlayerController.LastCompletedSeamlessTravelCount */
	uint8_t UnknownData77E[0x2];


	inline bool SetPlayer(t_structHelper inst, EncryptedExternalPtr<struct UPlayer> value) { inst.WriteOffset(0x490, value); }
	inline bool SetAcknowledgedPawn(t_structHelper inst, EncryptedExternalPtr<struct UPawn> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetControllingDirTrackInst(t_structHelper inst, ExternalPtr<struct UInterpTrackInstDirector> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetMyHUD(t_structHelper inst, ExternalPtr<struct UHUD> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetPlayerCameraManager(t_structHelper inst, ExternalPtr<struct UPlayerCameraManager> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetPlayerCameraManagerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4E0, value); }
	inline bool bAutoManageActiveCameraTarget()
	{
		return boolField4E8& 0x1;
	}
	inline bool SetbAutoManageActiveCameraTarget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4E8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTargetViewRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetSmoothTargetViewRotationSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x504, value); }
	inline bool SetHiddenActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x508, value); }
	inline bool SetLastSpectatorStateSynchTime(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetLastSpectatorSyncLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x51C, value); }
	inline bool SetLastSpectatorSyncRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x528, value); }
	inline bool SetClientCap(t_structHelper inst, int32_t value) { inst.WriteOffset(0x534, value); }
	inline bool SetCheatManager(t_structHelper inst, ExternalPtr<struct UCheatManager> value) { inst.WriteOffset(0x538, value); }
	inline bool SetCheatClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x540, value); }
	inline bool SetPlayerInput(t_structHelper inst, ExternalPtr<struct UPlayerInput> value) { inst.WriteOffset(0x548, value); }
	inline bool SetActiveForceFeedbackEffects(t_structHelper inst, TArray<struct FActiveForceFeedbackEffect> value) { inst.WriteOffset(0x550, value); }
	inline bool bPlayerIsWaiting()
	{
		return boolField5F0& 0x8;
	}
	inline bool SetbPlayerIsWaiting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5F0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetNetPlayerIndex(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x5F4, value); }
	inline bool SetPendingSwapConnection(t_structHelper inst, ExternalPtr<struct UNetConnection> value) { inst.WriteOffset(0x630, value); }
	inline bool SetNetConnection(t_structHelper inst, ExternalPtr<struct UNetConnection> value) { inst.WriteOffset(0x638, value); }
	inline bool SetInputYawScale(t_structHelper inst, float value) { inst.WriteOffset(0x64C, value); }
	inline bool SetInputPitchScale(t_structHelper inst, float value) { inst.WriteOffset(0x650, value); }
	inline bool SetInputRollScale(t_structHelper inst, float value) { inst.WriteOffset(0x654, value); }
	inline bool bShowMouseCursor()
	{
		return boolField658& 0x1;
	}
	inline bool SetbShowMouseCursor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x658, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableClickEvents()
	{
		return boolField658& 0x2;
	}
	inline bool SetbEnableClickEvents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x658, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bEnableTouchEvents()
	{
		return boolField658& 0x4;
	}
	inline bool SetbEnableTouchEvents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x658, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bEnableMouseOverEvents()
	{
		return boolField658& 0x8;
	}
	inline bool SetbEnableMouseOverEvents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x658, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bEnableTouchOverEvents()
	{
		return boolField658& 0x10;
	}
	inline bool SetbEnableTouchOverEvents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x658, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bForceFeedbackEnabled()
	{
		return boolField658& 0x20;
	}
	inline bool SetbForceFeedbackEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x658, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetClickEventKeys(t_structHelper inst, TArray<struct FKey> value) { inst.WriteOffset(0x660, value); }
	inline bool SetDefaultMouseCursor(t_structHelper inst, TEnumAsByte<enum EMouseCursor> value) { inst.WriteOffset(0x670, value); }
	inline bool SetCurrentMouseCursor(t_structHelper inst, TEnumAsByte<enum EMouseCursor> value) { inst.WriteOffset(0x671, value); }
	inline bool SetDefaultClickTraceChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0x672, value); }
	inline bool SetCurrentClickTraceChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0x673, value); }
	inline bool SetHitResultTraceDistance(t_structHelper inst, float value) { inst.WriteOffset(0x674, value); }
	inline bool SetInactiveStateInputComponent(t_structHelper inst, ExternalPtr<struct UInputComponent> value) { inst.WriteOffset(0x6F8, value); }
	inline bool bShouldPerformFullTickWhenPaused()
	{
		return boolField700& 0x8;
	}
	inline bool SetbShouldPerformFullTickWhenPaused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x700, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetCurrentTouchInterface(t_structHelper inst, ExternalPtr<struct UTouchInterface> value) { inst.WriteOffset(0x718, value); }
	inline bool SetSpectatorPawn(t_structHelper inst, ExternalPtr<struct USpectatorPawn> value) { inst.WriteOffset(0x760, value); }
	inline bool SetSpawnLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x768, value); }
	inline bool bIsLocalPlayerController()
	{
		return boolField778& 0x1;
	}
	inline bool SetbIsLocalPlayerController(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x778, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSeamlessTravelCount(t_structHelper inst, uint16_t value) { inst.WriteOffset(0x77A, value); }
	inline bool SetLastCompletedSeamlessTravelCount(t_structHelper inst, uint16_t value) { inst.WriteOffset(0x77C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerController = sizeof(UPlayerController); // 1920
    static_assert(sizeof(UPlayerController) == 0x780, "Size of UPlayerController is not correct.");
	auto constexpr UPlayerController_Player_Offset = offsetof(UPlayerController, Player);
	static_assert(UPlayerController_Player_Offset == 0x490, "UPlayerController::Player offset is not 490");
	auto constexpr UPlayerController_AcknowledgedPawn_Offset = offsetof(UPlayerController, AcknowledgedPawn);
	static_assert(UPlayerController_AcknowledgedPawn_Offset == 0x4b0, "UPlayerController::AcknowledgedPawn offset is not 4b0");
	auto constexpr UPlayerController_ControllingDirTrackInst_Offset = offsetof(UPlayerController, ControllingDirTrackInst);
	static_assert(UPlayerController_ControllingDirTrackInst_Offset == 0x4c0, "UPlayerController::ControllingDirTrackInst offset is not 4c0");
	auto constexpr UPlayerController_MyHUD_Offset = offsetof(UPlayerController, MyHUD);
	static_assert(UPlayerController_MyHUD_Offset == 0x4d0, "UPlayerController::MyHUD offset is not 4d0");
	auto constexpr UPlayerController_PlayerCameraManager_Offset = offsetof(UPlayerController, PlayerCameraManager);
	static_assert(UPlayerController_PlayerCameraManager_Offset == 0x4d8, "UPlayerController::PlayerCameraManager offset is not 4d8");
	auto constexpr UPlayerController_PlayerCameraManagerClass_Offset = offsetof(UPlayerController, PlayerCameraManagerClass);
	static_assert(UPlayerController_PlayerCameraManagerClass_Offset == 0x4e0, "UPlayerController::PlayerCameraManagerClass offset is not 4e0");
	auto constexpr UPlayerController_boolField4E8_Offset = offsetof(UPlayerController, boolField4E8);
	static_assert(UPlayerController_boolField4E8_Offset == 0x4e8, "UPlayerController::boolField4E8 offset is not 4e8");
	auto constexpr UPlayerController_TargetViewRotation_Offset = offsetof(UPlayerController, TargetViewRotation);
	static_assert(UPlayerController_TargetViewRotation_Offset == 0x4ec, "UPlayerController::TargetViewRotation offset is not 4ec");
	auto constexpr UPlayerController_SmoothTargetViewRotationSpeed_Offset = offsetof(UPlayerController, SmoothTargetViewRotationSpeed);
	static_assert(UPlayerController_SmoothTargetViewRotationSpeed_Offset == 0x504, "UPlayerController::SmoothTargetViewRotationSpeed offset is not 504");
	auto constexpr UPlayerController_HiddenActors_Offset = offsetof(UPlayerController, HiddenActors);
	static_assert(UPlayerController_HiddenActors_Offset == 0x508, "UPlayerController::HiddenActors offset is not 508");
	auto constexpr UPlayerController_LastSpectatorStateSynchTime_Offset = offsetof(UPlayerController, LastSpectatorStateSynchTime);
	static_assert(UPlayerController_LastSpectatorStateSynchTime_Offset == 0x518, "UPlayerController::LastSpectatorStateSynchTime offset is not 518");
	auto constexpr UPlayerController_LastSpectatorSyncLocation_Offset = offsetof(UPlayerController, LastSpectatorSyncLocation);
	static_assert(UPlayerController_LastSpectatorSyncLocation_Offset == 0x51c, "UPlayerController::LastSpectatorSyncLocation offset is not 51c");
	auto constexpr UPlayerController_LastSpectatorSyncRotation_Offset = offsetof(UPlayerController, LastSpectatorSyncRotation);
	static_assert(UPlayerController_LastSpectatorSyncRotation_Offset == 0x528, "UPlayerController::LastSpectatorSyncRotation offset is not 528");
	auto constexpr UPlayerController_ClientCap_Offset = offsetof(UPlayerController, ClientCap);
	static_assert(UPlayerController_ClientCap_Offset == 0x534, "UPlayerController::ClientCap offset is not 534");
	auto constexpr UPlayerController_CheatManager_Offset = offsetof(UPlayerController, CheatManager);
	static_assert(UPlayerController_CheatManager_Offset == 0x538, "UPlayerController::CheatManager offset is not 538");
	auto constexpr UPlayerController_CheatClass_Offset = offsetof(UPlayerController, CheatClass);
	static_assert(UPlayerController_CheatClass_Offset == 0x540, "UPlayerController::CheatClass offset is not 540");
	auto constexpr UPlayerController_PlayerInput_Offset = offsetof(UPlayerController, PlayerInput);
	static_assert(UPlayerController_PlayerInput_Offset == 0x548, "UPlayerController::PlayerInput offset is not 548");
	auto constexpr UPlayerController_ActiveForceFeedbackEffects_Offset = offsetof(UPlayerController, ActiveForceFeedbackEffects);
	static_assert(UPlayerController_ActiveForceFeedbackEffects_Offset == 0x550, "UPlayerController::ActiveForceFeedbackEffects offset is not 550");
	auto constexpr UPlayerController_boolField5F0_Offset = offsetof(UPlayerController, boolField5F0);
	static_assert(UPlayerController_boolField5F0_Offset == 0x5f0, "UPlayerController::boolField5F0 offset is not 5f0");
	auto constexpr UPlayerController_NetPlayerIndex_Offset = offsetof(UPlayerController, NetPlayerIndex);
	static_assert(UPlayerController_NetPlayerIndex_Offset == 0x5f4, "UPlayerController::NetPlayerIndex offset is not 5f4");
	auto constexpr UPlayerController_PendingSwapConnection_Offset = offsetof(UPlayerController, PendingSwapConnection);
	static_assert(UPlayerController_PendingSwapConnection_Offset == 0x630, "UPlayerController::PendingSwapConnection offset is not 630");
	auto constexpr UPlayerController_NetConnection_Offset = offsetof(UPlayerController, NetConnection);
	static_assert(UPlayerController_NetConnection_Offset == 0x638, "UPlayerController::NetConnection offset is not 638");
	auto constexpr UPlayerController_InputYawScale_Offset = offsetof(UPlayerController, InputYawScale);
	static_assert(UPlayerController_InputYawScale_Offset == 0x64c, "UPlayerController::InputYawScale offset is not 64c");
	auto constexpr UPlayerController_InputPitchScale_Offset = offsetof(UPlayerController, InputPitchScale);
	static_assert(UPlayerController_InputPitchScale_Offset == 0x650, "UPlayerController::InputPitchScale offset is not 650");
	auto constexpr UPlayerController_InputRollScale_Offset = offsetof(UPlayerController, InputRollScale);
	static_assert(UPlayerController_InputRollScale_Offset == 0x654, "UPlayerController::InputRollScale offset is not 654");
	auto constexpr UPlayerController_boolField658_Offset = offsetof(UPlayerController, boolField658);
	static_assert(UPlayerController_boolField658_Offset == 0x658, "UPlayerController::boolField658 offset is not 658");
	auto constexpr UPlayerController_ClickEventKeys_Offset = offsetof(UPlayerController, ClickEventKeys);
	static_assert(UPlayerController_ClickEventKeys_Offset == 0x660, "UPlayerController::ClickEventKeys offset is not 660");
	auto constexpr UPlayerController_DefaultMouseCursor_Offset = offsetof(UPlayerController, DefaultMouseCursor);
	static_assert(UPlayerController_DefaultMouseCursor_Offset == 0x670, "UPlayerController::DefaultMouseCursor offset is not 670");
	auto constexpr UPlayerController_CurrentMouseCursor_Offset = offsetof(UPlayerController, CurrentMouseCursor);
	static_assert(UPlayerController_CurrentMouseCursor_Offset == 0x671, "UPlayerController::CurrentMouseCursor offset is not 671");
	auto constexpr UPlayerController_DefaultClickTraceChannel_Offset = offsetof(UPlayerController, DefaultClickTraceChannel);
	static_assert(UPlayerController_DefaultClickTraceChannel_Offset == 0x672, "UPlayerController::DefaultClickTraceChannel offset is not 672");
	auto constexpr UPlayerController_CurrentClickTraceChannel_Offset = offsetof(UPlayerController, CurrentClickTraceChannel);
	static_assert(UPlayerController_CurrentClickTraceChannel_Offset == 0x673, "UPlayerController::CurrentClickTraceChannel offset is not 673");
	auto constexpr UPlayerController_HitResultTraceDistance_Offset = offsetof(UPlayerController, HitResultTraceDistance);
	static_assert(UPlayerController_HitResultTraceDistance_Offset == 0x674, "UPlayerController::HitResultTraceDistance offset is not 674");
	auto constexpr UPlayerController_InactiveStateInputComponent_Offset = offsetof(UPlayerController, InactiveStateInputComponent);
	static_assert(UPlayerController_InactiveStateInputComponent_Offset == 0x6f8, "UPlayerController::InactiveStateInputComponent offset is not 6f8");
	auto constexpr UPlayerController_boolField700_Offset = offsetof(UPlayerController, boolField700);
	static_assert(UPlayerController_boolField700_Offset == 0x700, "UPlayerController::boolField700 offset is not 700");
	auto constexpr UPlayerController_CurrentTouchInterface_Offset = offsetof(UPlayerController, CurrentTouchInterface);
	static_assert(UPlayerController_CurrentTouchInterface_Offset == 0x718, "UPlayerController::CurrentTouchInterface offset is not 718");
	auto constexpr UPlayerController_SpectatorPawn_Offset = offsetof(UPlayerController, SpectatorPawn);
	static_assert(UPlayerController_SpectatorPawn_Offset == 0x760, "UPlayerController::SpectatorPawn offset is not 760");
	auto constexpr UPlayerController_SpawnLocation_Offset = offsetof(UPlayerController, SpawnLocation);
	static_assert(UPlayerController_SpawnLocation_Offset == 0x768, "UPlayerController::SpawnLocation offset is not 768");
	auto constexpr UPlayerController_boolField778_Offset = offsetof(UPlayerController, boolField778);
	static_assert(UPlayerController_boolField778_Offset == 0x778, "UPlayerController::boolField778 offset is not 778");
	auto constexpr UPlayerController_SeamlessTravelCount_Offset = offsetof(UPlayerController, SeamlessTravelCount);
	static_assert(UPlayerController_SeamlessTravelCount_Offset == 0x77a, "UPlayerController::SeamlessTravelCount offset is not 77a");
	auto constexpr UPlayerController_LastCompletedSeamlessTravelCount_Offset = offsetof(UPlayerController, LastCompletedSeamlessTravelCount);
	static_assert(UPlayerController_LastCompletedSeamlessTravelCount_Offset == 0x77c, "UPlayerController::LastCompletedSeamlessTravelCount offset is not 77c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
