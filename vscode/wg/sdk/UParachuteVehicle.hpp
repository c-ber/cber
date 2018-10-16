#pragma once
#include "UPawn.hpp"
#include "FSkinParam.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteVehicle // Size: 0x5E0
	: public UPawn // Size: 0x470
{
private:
	typedef UParachuteVehicle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1940); // id32("Class TslGame.ParachuteVehicle")
		return ptr;
	}
	uint8_t UnknownData470[0x10];
	FScriptDelegate OnRelease; /* Ofs: 0x480 Size: 0x10 - DelegateProperty TslGame.ParachuteVehicle.OnRelease */
	FScriptDelegate OnLand; /* Ofs: 0x490 Size: 0x10 - DelegateProperty TslGame.ParachuteVehicle.OnLand */
	ExternalPtr<struct UAkAudioEvent> ReleaseSound_Local; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.ReleaseSound_Local */
	ExternalPtr<struct UAkAudioEvent> ReleaseSound_Remote; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.ReleaseSound_Remote */
	ExternalPtr<struct UAkAudioEvent> LandSound_Local; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.LandSound_Local */
	ExternalPtr<struct UAkAudioEvent> LandSound_Remote; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.LandSound_Remote */
	ExternalPtr<struct UAkAudioEvent> FallingStartSound_Local; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.FallingStartSound_Local */
	ExternalPtr<struct UAkAudioEvent> FallingStartSound_Remote; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.FallingStartSound_Remote */
	ExternalPtr<struct UAkComponent> AkSoundCom; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.AkSoundCom */
	ExternalPtr<struct UTslPawnInputBindingComponent> TslPawnInputBindingComponent; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.TslPawnInputBindingComponent */
	ExternalPtr<struct UTslGamepadPawnInputComponent> TslGamepadInputComponent; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.TslGamepadInputComponent */
	ExternalPtr<struct UGamePadInputAixsComponent> GamePadInputAixsComponent; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.GamePadInputAixsComponent */
	ExternalPtr<struct USkeletalMeshComponent> MeshComponent; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.MeshComponent */
	ExternalPtr<struct UParachuteVehicleMovement> ParachuteMovementComponent; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.ParachuteMovementComponent */
	ExternalPtr<struct UFreeFallMovement> FreeFallMovementComponent; /* Ofs: 0x500 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.FreeFallMovementComponent */
	ExternalPtr<struct UTslVehicleSeatComponent> VehicleSeatComponent; /* Ofs: 0x508 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.VehicleSeatComponent */
	ExternalPtr<struct UDoublePhaseInteractionComponent> InteractionComponent; /* Ofs: 0x510 Size: 0x8 - ObjectProperty TslGame.ParachuteVehicle.InteractionComponent */
	TWeakObjectPtr<ExternalPtr<struct UTslCharacter>> LastDriver; /* Ofs: 0x518 Size: 0x8 - WeakObjectProperty TslGame.ParachuteVehicle.LastDriver */
	uint8_t UnknownData520[0x8];
	FName FreeFallFirstPersonCameraName; /* Ofs: 0x528 Size: 0x8 - NameProperty TslGame.ParachuteVehicle.FreeFallFirstPersonCameraName */
	FName FreeFallThirdPersonCameraName; /* Ofs: 0x530 Size: 0x8 - NameProperty TslGame.ParachuteVehicle.FreeFallThirdPersonCameraName */
	float FreeFallCameraPitchMin; /* Ofs: 0x538 Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.FreeFallCameraPitchMin */
	float FreeFallCameraPitchMax; /* Ofs: 0x53C Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.FreeFallCameraPitchMax */
	float ReleasingAltitude; /* Ofs: 0x540 Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.ReleasingAltitude */
	float ForceReleasingAltitude; /* Ofs: 0x544 Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.ForceReleasingAltitude */
	uint8_t UnknownData548[0x18];
	float SweepMoveHeight; /* Ofs: 0x560 Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.SweepMoveHeight */
	float LandingHeight; /* Ofs: 0x564 Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.LandingHeight */
	float LandingDuration; /* Ofs: 0x568 Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.LandingDuration */
	uint8_t UnknownData56C[0x4];
	ExternalPtr<struct UClass> LandingBuff; /* Ofs: 0x570 Size: 0x8 - ClassProperty TslGame.ParachuteVehicle.LandingBuff */
	uint8_t UnknownData578[0xC];
	float StuckCheckDistance; /* Ofs: 0x584 Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.StuckCheckDistance */
	float StuckCheckDuration; /* Ofs: 0x588 Size: 0x4 - FloatProperty TslGame.ParachuteVehicle.StuckCheckDuration */
	uint8_t UnknownData58C[0xC];
	uint8_t boolField598;
	uint8_t UnknownData599[0x7];
	FSkinParam SkinParam; /* Ofs: 0x5A0 Size: 0x10 - StructProperty TslGame.ParachuteVehicle.SkinParam */
	FRotator InitialRotation; /* Ofs: 0x5B0 Size: 0xC - StructProperty TslGame.ParachuteVehicle.InitialRotation */
	FVector InitialVelocity; /* Ofs: 0x5BC Size: 0xC - StructProperty TslGame.ParachuteVehicle.InitialVelocity */
	FVector RideSocketOffset; /* Ofs: 0x5C8 Size: 0xC - StructProperty TslGame.ParachuteVehicle.RideSocketOffset */
	FVector LeaveSocketOffset; /* Ofs: 0x5D4 Size: 0xC - StructProperty TslGame.ParachuteVehicle.LeaveSocketOffset */


	inline bool SetOnRelease(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x480, value); }
	inline bool SetOnLand(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x490, value); }
	inline bool SetReleaseSound_Local(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetReleaseSound_Remote(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetLandSound_Local(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetLandSound_Remote(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetFallingStartSound_Local(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetFallingStartSound_Remote(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetAkSoundCom(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetTslPawnInputBindingComponent(t_structHelper inst, ExternalPtr<struct UTslPawnInputBindingComponent> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetTslGamepadInputComponent(t_structHelper inst, ExternalPtr<struct UTslGamepadPawnInputComponent> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetGamePadInputAixsComponent(t_structHelper inst, ExternalPtr<struct UGamePadInputAixsComponent> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetMeshComponent(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetParachuteMovementComponent(t_structHelper inst, ExternalPtr<struct UParachuteVehicleMovement> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetFreeFallMovementComponent(t_structHelper inst, ExternalPtr<struct UFreeFallMovement> value) { inst.WriteOffset(0x500, value); }
	inline bool SetVehicleSeatComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleSeatComponent> value) { inst.WriteOffset(0x508, value); }
	inline bool SetInteractionComponent(t_structHelper inst, ExternalPtr<struct UDoublePhaseInteractionComponent> value) { inst.WriteOffset(0x510, value); }
	inline bool SetLastDriver(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0x518, value); }
	inline bool SetFreeFallFirstPersonCameraName(t_structHelper inst, FName value) { inst.WriteOffset(0x528, value); }
	inline bool SetFreeFallThirdPersonCameraName(t_structHelper inst, FName value) { inst.WriteOffset(0x530, value); }
	inline bool SetFreeFallCameraPitchMin(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetFreeFallCameraPitchMax(t_structHelper inst, float value) { inst.WriteOffset(0x53C, value); }
	inline bool SetReleasingAltitude(t_structHelper inst, float value) { inst.WriteOffset(0x540, value); }
	inline bool SetForceReleasingAltitude(t_structHelper inst, float value) { inst.WriteOffset(0x544, value); }
	inline bool SetSweepMoveHeight(t_structHelper inst, float value) { inst.WriteOffset(0x560, value); }
	inline bool SetLandingHeight(t_structHelper inst, float value) { inst.WriteOffset(0x564, value); }
	inline bool SetLandingDuration(t_structHelper inst, float value) { inst.WriteOffset(0x568, value); }
	inline bool SetLandingBuff(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x570, value); }
	inline bool SetStuckCheckDistance(t_structHelper inst, float value) { inst.WriteOffset(0x584, value); }
	inline bool SetStuckCheckDuration(t_structHelper inst, float value) { inst.WriteOffset(0x588, value); }
	inline bool ForwardInputRepApplied()
	{
		return boolField598& 0x2;
	}
	inline bool SetForwardInputRepApplied(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x598, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool ForwardInputRepIsForward()
	{
		return boolField598& 0x4;
	}
	inline bool SetForwardInputRepIsForward(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x598, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool RightInputRepApplied()
	{
		return boolField598& 0x8;
	}
	inline bool SetRightInputRepApplied(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x598, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool RightInputRepIsRight()
	{
		return boolField598& 0x10;
	}
	inline bool SetRightInputRepIsRight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x598, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bIsReleased()
	{
		return boolField598& 0x20;
	}
	inline bool SetbIsReleased(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x598, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bIsDriven()
	{
		return boolField598& 0x40;
	}
	inline bool SetbIsDriven(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x598, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetSkinParam(t_structHelper inst, FSkinParam value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetInitialRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetInitialVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x5BC, value); }
	inline bool SetRideSocketOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetLeaveSocketOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x5D4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteVehicle = sizeof(UParachuteVehicle); // 1504
    static_assert(sizeof(UParachuteVehicle) == 0x5E0, "Size of UParachuteVehicle is not correct.");
	auto constexpr UParachuteVehicle_OnRelease_Offset = offsetof(UParachuteVehicle, OnRelease);
	static_assert(UParachuteVehicle_OnRelease_Offset == 0x480, "UParachuteVehicle::OnRelease offset is not 480");
	auto constexpr UParachuteVehicle_OnLand_Offset = offsetof(UParachuteVehicle, OnLand);
	static_assert(UParachuteVehicle_OnLand_Offset == 0x490, "UParachuteVehicle::OnLand offset is not 490");
	auto constexpr UParachuteVehicle_ReleaseSound_Local_Offset = offsetof(UParachuteVehicle, ReleaseSound_Local);
	static_assert(UParachuteVehicle_ReleaseSound_Local_Offset == 0x4a0, "UParachuteVehicle::ReleaseSound_Local offset is not 4a0");
	auto constexpr UParachuteVehicle_ReleaseSound_Remote_Offset = offsetof(UParachuteVehicle, ReleaseSound_Remote);
	static_assert(UParachuteVehicle_ReleaseSound_Remote_Offset == 0x4a8, "UParachuteVehicle::ReleaseSound_Remote offset is not 4a8");
	auto constexpr UParachuteVehicle_LandSound_Local_Offset = offsetof(UParachuteVehicle, LandSound_Local);
	static_assert(UParachuteVehicle_LandSound_Local_Offset == 0x4b0, "UParachuteVehicle::LandSound_Local offset is not 4b0");
	auto constexpr UParachuteVehicle_LandSound_Remote_Offset = offsetof(UParachuteVehicle, LandSound_Remote);
	static_assert(UParachuteVehicle_LandSound_Remote_Offset == 0x4b8, "UParachuteVehicle::LandSound_Remote offset is not 4b8");
	auto constexpr UParachuteVehicle_FallingStartSound_Local_Offset = offsetof(UParachuteVehicle, FallingStartSound_Local);
	static_assert(UParachuteVehicle_FallingStartSound_Local_Offset == 0x4c0, "UParachuteVehicle::FallingStartSound_Local offset is not 4c0");
	auto constexpr UParachuteVehicle_FallingStartSound_Remote_Offset = offsetof(UParachuteVehicle, FallingStartSound_Remote);
	static_assert(UParachuteVehicle_FallingStartSound_Remote_Offset == 0x4c8, "UParachuteVehicle::FallingStartSound_Remote offset is not 4c8");
	auto constexpr UParachuteVehicle_AkSoundCom_Offset = offsetof(UParachuteVehicle, AkSoundCom);
	static_assert(UParachuteVehicle_AkSoundCom_Offset == 0x4d0, "UParachuteVehicle::AkSoundCom offset is not 4d0");
	auto constexpr UParachuteVehicle_TslPawnInputBindingComponent_Offset = offsetof(UParachuteVehicle, TslPawnInputBindingComponent);
	static_assert(UParachuteVehicle_TslPawnInputBindingComponent_Offset == 0x4d8, "UParachuteVehicle::TslPawnInputBindingComponent offset is not 4d8");
	auto constexpr UParachuteVehicle_TslGamepadInputComponent_Offset = offsetof(UParachuteVehicle, TslGamepadInputComponent);
	static_assert(UParachuteVehicle_TslGamepadInputComponent_Offset == 0x4e0, "UParachuteVehicle::TslGamepadInputComponent offset is not 4e0");
	auto constexpr UParachuteVehicle_GamePadInputAixsComponent_Offset = offsetof(UParachuteVehicle, GamePadInputAixsComponent);
	static_assert(UParachuteVehicle_GamePadInputAixsComponent_Offset == 0x4e8, "UParachuteVehicle::GamePadInputAixsComponent offset is not 4e8");
	auto constexpr UParachuteVehicle_MeshComponent_Offset = offsetof(UParachuteVehicle, MeshComponent);
	static_assert(UParachuteVehicle_MeshComponent_Offset == 0x4f0, "UParachuteVehicle::MeshComponent offset is not 4f0");
	auto constexpr UParachuteVehicle_ParachuteMovementComponent_Offset = offsetof(UParachuteVehicle, ParachuteMovementComponent);
	static_assert(UParachuteVehicle_ParachuteMovementComponent_Offset == 0x4f8, "UParachuteVehicle::ParachuteMovementComponent offset is not 4f8");
	auto constexpr UParachuteVehicle_FreeFallMovementComponent_Offset = offsetof(UParachuteVehicle, FreeFallMovementComponent);
	static_assert(UParachuteVehicle_FreeFallMovementComponent_Offset == 0x500, "UParachuteVehicle::FreeFallMovementComponent offset is not 500");
	auto constexpr UParachuteVehicle_VehicleSeatComponent_Offset = offsetof(UParachuteVehicle, VehicleSeatComponent);
	static_assert(UParachuteVehicle_VehicleSeatComponent_Offset == 0x508, "UParachuteVehicle::VehicleSeatComponent offset is not 508");
	auto constexpr UParachuteVehicle_InteractionComponent_Offset = offsetof(UParachuteVehicle, InteractionComponent);
	static_assert(UParachuteVehicle_InteractionComponent_Offset == 0x510, "UParachuteVehicle::InteractionComponent offset is not 510");
	auto constexpr UParachuteVehicle_LastDriver_Offset = offsetof(UParachuteVehicle, LastDriver);
	static_assert(UParachuteVehicle_LastDriver_Offset == 0x518, "UParachuteVehicle::LastDriver offset is not 518");
	auto constexpr UParachuteVehicle_FreeFallFirstPersonCameraName_Offset = offsetof(UParachuteVehicle, FreeFallFirstPersonCameraName);
	static_assert(UParachuteVehicle_FreeFallFirstPersonCameraName_Offset == 0x528, "UParachuteVehicle::FreeFallFirstPersonCameraName offset is not 528");
	auto constexpr UParachuteVehicle_FreeFallThirdPersonCameraName_Offset = offsetof(UParachuteVehicle, FreeFallThirdPersonCameraName);
	static_assert(UParachuteVehicle_FreeFallThirdPersonCameraName_Offset == 0x530, "UParachuteVehicle::FreeFallThirdPersonCameraName offset is not 530");
	auto constexpr UParachuteVehicle_FreeFallCameraPitchMin_Offset = offsetof(UParachuteVehicle, FreeFallCameraPitchMin);
	static_assert(UParachuteVehicle_FreeFallCameraPitchMin_Offset == 0x538, "UParachuteVehicle::FreeFallCameraPitchMin offset is not 538");
	auto constexpr UParachuteVehicle_FreeFallCameraPitchMax_Offset = offsetof(UParachuteVehicle, FreeFallCameraPitchMax);
	static_assert(UParachuteVehicle_FreeFallCameraPitchMax_Offset == 0x53c, "UParachuteVehicle::FreeFallCameraPitchMax offset is not 53c");
	auto constexpr UParachuteVehicle_ReleasingAltitude_Offset = offsetof(UParachuteVehicle, ReleasingAltitude);
	static_assert(UParachuteVehicle_ReleasingAltitude_Offset == 0x540, "UParachuteVehicle::ReleasingAltitude offset is not 540");
	auto constexpr UParachuteVehicle_ForceReleasingAltitude_Offset = offsetof(UParachuteVehicle, ForceReleasingAltitude);
	static_assert(UParachuteVehicle_ForceReleasingAltitude_Offset == 0x544, "UParachuteVehicle::ForceReleasingAltitude offset is not 544");
	auto constexpr UParachuteVehicle_SweepMoveHeight_Offset = offsetof(UParachuteVehicle, SweepMoveHeight);
	static_assert(UParachuteVehicle_SweepMoveHeight_Offset == 0x560, "UParachuteVehicle::SweepMoveHeight offset is not 560");
	auto constexpr UParachuteVehicle_LandingHeight_Offset = offsetof(UParachuteVehicle, LandingHeight);
	static_assert(UParachuteVehicle_LandingHeight_Offset == 0x564, "UParachuteVehicle::LandingHeight offset is not 564");
	auto constexpr UParachuteVehicle_LandingDuration_Offset = offsetof(UParachuteVehicle, LandingDuration);
	static_assert(UParachuteVehicle_LandingDuration_Offset == 0x568, "UParachuteVehicle::LandingDuration offset is not 568");
	auto constexpr UParachuteVehicle_LandingBuff_Offset = offsetof(UParachuteVehicle, LandingBuff);
	static_assert(UParachuteVehicle_LandingBuff_Offset == 0x570, "UParachuteVehicle::LandingBuff offset is not 570");
	auto constexpr UParachuteVehicle_StuckCheckDistance_Offset = offsetof(UParachuteVehicle, StuckCheckDistance);
	static_assert(UParachuteVehicle_StuckCheckDistance_Offset == 0x584, "UParachuteVehicle::StuckCheckDistance offset is not 584");
	auto constexpr UParachuteVehicle_StuckCheckDuration_Offset = offsetof(UParachuteVehicle, StuckCheckDuration);
	static_assert(UParachuteVehicle_StuckCheckDuration_Offset == 0x588, "UParachuteVehicle::StuckCheckDuration offset is not 588");
	auto constexpr UParachuteVehicle_boolField598_Offset = offsetof(UParachuteVehicle, boolField598);
	static_assert(UParachuteVehicle_boolField598_Offset == 0x598, "UParachuteVehicle::boolField598 offset is not 598");
	auto constexpr UParachuteVehicle_SkinParam_Offset = offsetof(UParachuteVehicle, SkinParam);
	static_assert(UParachuteVehicle_SkinParam_Offset == 0x5a0, "UParachuteVehicle::SkinParam offset is not 5a0");
	auto constexpr UParachuteVehicle_InitialRotation_Offset = offsetof(UParachuteVehicle, InitialRotation);
	static_assert(UParachuteVehicle_InitialRotation_Offset == 0x5b0, "UParachuteVehicle::InitialRotation offset is not 5b0");
	auto constexpr UParachuteVehicle_InitialVelocity_Offset = offsetof(UParachuteVehicle, InitialVelocity);
	static_assert(UParachuteVehicle_InitialVelocity_Offset == 0x5bc, "UParachuteVehicle::InitialVelocity offset is not 5bc");
	auto constexpr UParachuteVehicle_RideSocketOffset_Offset = offsetof(UParachuteVehicle, RideSocketOffset);
	static_assert(UParachuteVehicle_RideSocketOffset_Offset == 0x5c8, "UParachuteVehicle::RideSocketOffset offset is not 5c8");
	auto constexpr UParachuteVehicle_LeaveSocketOffset_Offset = offsetof(UParachuteVehicle, LeaveSocketOffset);
	static_assert(UParachuteVehicle_LeaveSocketOffset_Offset == 0x5d4, "UParachuteVehicle::LeaveSocketOffset offset is not 5d4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
