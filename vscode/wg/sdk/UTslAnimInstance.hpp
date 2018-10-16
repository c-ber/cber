#pragma once
#include "UAnimInstance.hpp"
#include "EAnimPawnState.hpp"
#include "FRotator.hpp"
#include "EAnimStance.hpp"
#include "EAnimWeaponType.hpp"
#include "FVector.hpp"
#include "FTransform.hpp"
#include "FVector2D.hpp"
#include "EVehicleAnimType.hpp"
#include "EVaultAnimType.hpp"
#include "ECastAnim.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAnimInstance // Size: 0xFD0
	: public UAnimInstance // Size: 0x380
{
private:
	typedef UTslAnimInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1316); // id32("Class TslGame.TslAnimInstance")
		return ptr;
	}
	FScriptMulticastDelegate WeaponFire; /* Ofs: 0x380 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.WeaponFire */
	FScriptMulticastDelegate WeaponFireCycle; /* Ofs: 0x390 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.WeaponFireCycle */
	FScriptMulticastDelegate EquipPrimary; /* Ofs: 0x3A0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.EquipPrimary */
	FScriptMulticastDelegate EquipSecondary; /* Ofs: 0x3B0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.EquipSecondary */
	FScriptMulticastDelegate EqupiSidearm; /* Ofs: 0x3C0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.EqupiSidearm */
	FScriptMulticastDelegate EquipMelee; /* Ofs: 0x3D0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.EquipMelee */
	FScriptMulticastDelegate EquipThrown; /* Ofs: 0x3E0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.EquipThrown */
	FScriptMulticastDelegate UnEquipPrimary; /* Ofs: 0x3F0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.UnEquipPrimary */
	FScriptMulticastDelegate UnEquipSecondary; /* Ofs: 0x400 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.UnEquipSecondary */
	FScriptMulticastDelegate UnEqupiSidearm; /* Ofs: 0x410 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.UnEqupiSidearm */
	FScriptMulticastDelegate UnEquipMelee; /* Ofs: 0x420 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.UnEquipMelee */
	FScriptMulticastDelegate UnEquipThrown; /* Ofs: 0x430 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.UnEquipThrown */
	FScriptMulticastDelegate ToggleFireMode; /* Ofs: 0x440 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ToggleFireMode */
	FScriptMulticastDelegate ReloadTactical; /* Ofs: 0x450 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ReloadTactical */
	FScriptMulticastDelegate ReloadCharge; /* Ofs: 0x460 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ReloadCharge */
	FScriptMulticastDelegate ReloadByOneStart; /* Ofs: 0x470 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ReloadByOneStart */
	FScriptMulticastDelegate ReloadByOneStop; /* Ofs: 0x480 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ReloadByOneStop */
	FScriptMulticastDelegate ReloadByOneSingle; /* Ofs: 0x490 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ReloadByOneSingle */
	FScriptMulticastDelegate EquipThrownGrenade; /* Ofs: 0x4A0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.EquipThrownGrenade */
	FScriptMulticastDelegate EquipThrownMolotov; /* Ofs: 0x4B0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.EquipThrownMolotov */
	FScriptMulticastDelegate EquipThrownOther; /* Ofs: 0x4C0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.EquipThrownOther */
	FScriptMulticastDelegate ThrowPrepare; /* Ofs: 0x4D0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ThrowPrepare */
	FScriptMulticastDelegate ThrowCooking; /* Ofs: 0x4E0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ThrowCooking */
	FScriptMulticastDelegate ThrowStart; /* Ofs: 0x4F0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ThrowStart */
	FScriptMulticastDelegate ThrowDrop; /* Ofs: 0x500 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ThrowDrop */
	FScriptMulticastDelegate LandHeavy; /* Ofs: 0x510 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.LandHeavy */
	FScriptMulticastDelegate LandExtreme; /* Ofs: 0x520 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.LandExtreme */
	FScriptMulticastDelegate ReloadCancel; /* Ofs: 0x530 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ReloadCancel */
	FScriptMulticastDelegate CharacterPickup; /* Ofs: 0x540 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.CharacterPickup */
	FScriptMulticastDelegate UnarmedAttack; /* Ofs: 0x550 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.UnarmedAttack */
	FScriptMulticastDelegate PowerupUsed; /* Ofs: 0x560 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.PowerupUsed */
	FScriptMulticastDelegate ChangeCharacterAppearance; /* Ofs: 0x570 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.ChangeCharacterAppearance */
	FScriptMulticastDelegate OnCastStart; /* Ofs: 0x580 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.OnCastStart */
	FScriptMulticastDelegate OnCastCancel; /* Ofs: 0x590 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.OnCastCancel */
	FScriptMulticastDelegate OnCastFinish; /* Ofs: 0x5A0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.OnCastFinish */
	FScriptMulticastDelegate OnEmotePlay; /* Ofs: 0x5B0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.OnEmotePlay */
	FScriptMulticastDelegate OnEmotePlayRNG; /* Ofs: 0x5C0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.OnEmotePlayRNG */
	FScriptMulticastDelegate OnEmoteStop; /* Ofs: 0x5D0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.OnEmoteStop */
	FScriptMulticastDelegate OnNegativeEffectApplied; /* Ofs: 0x5E0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.OnNegativeEffectApplied */
	FScriptMulticastDelegate OnNegativeEffectRemoved; /* Ofs: 0x5F0 Size: 0x10 - MulticastDelegateProperty TslGame.TslAnimInstance.OnNegativeEffectRemoved */
	uint8_t UnknownData600[0x8];
	ExternalPtr<struct UTslCharacter> CharacterReference; /* Ofs: 0x608 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.CharacterReference */
	ExternalPtr<struct USkeletalMeshComponent> CharacterMesh_CP; /* Ofs: 0x610 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.CharacterMesh_CP */
	TEnumAsByte<enum EAnimPawnState> PreEvalPawnState; /* Ofs: 0x618 Size: 0x1 - EnumProperty TslGame.TslAnimInstance.PreEvalPawnState */
	uint8_t UnknownData619[0x3];
	float LocomotionSpeed_CP; /* Ofs: 0x61C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocomotionSpeed_CP */
	float LocomotionSpeed2D_CP; /* Ofs: 0x620 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocomotionSpeed2D_CP */
	uint8_t boolField624;
	uint8_t UnknownData625[0x3];
	float LocomotionDirection_CP; /* Ofs: 0x628 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocomotionDirection_CP */
	float LocomotionDirectionClamped_CP; /* Ofs: 0x62C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocomotionDirectionClamped_CP */
	float LocomotionJumpDirection_CP; /* Ofs: 0x630 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocomotionJumpDirection_CP */
	float LeanYaw_CP; /* Ofs: 0x634 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanYaw_CP */
	FRotator LastAbsoluteDirection_CP; /* Ofs: 0x638 Size: 0xC - StructProperty TslGame.TslAnimInstance.LastAbsoluteDirection_CP */
	FRotator ControlRotation_CP; /* Ofs: 0x644 Size: 0xC - StructProperty TslGame.TslAnimInstance.ControlRotation_CP */
	FRotator ControlRotationLastMovement_CP; /* Ofs: 0x650 Size: 0xC - StructProperty TslGame.TslAnimInstance.ControlRotationLastMovement_CP */
	FRotator CharacterRotation_CP; /* Ofs: 0x65C Size: 0xC - StructProperty TslGame.TslAnimInstance.CharacterRotation_CP */
	TEnumAsByte<enum EAnimStance> Stance_CP; /* Ofs: 0x668 Size: 0x1 - EnumProperty TslGame.TslAnimInstance.Stance_CP */
	uint8_t boolField669;
	uint8_t boolField66A;
	uint8_t UnknownData66B[0x1];
	float WeaponGripType_CP; /* Ofs: 0x66C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponGripType_CP */
	float SprintAlpha_CP; /* Ofs: 0x670 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintAlpha_CP */
	float SprintLocoAlpha_CP; /* Ofs: 0x674 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoAlpha_CP */
	float SprintAlphaPitchComponent_CP; /* Ofs: 0x678 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintAlphaPitchComponent_CP */
	float SprintAlphaSprintLimit_High; /* Ofs: 0x67C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintAlphaSprintLimit_High */
	float SprintAlphaSprintLimit_Low; /* Ofs: 0x680 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintAlphaSprintLimit_Low */
	float SprintValue_CP; /* Ofs: 0x684 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintValue_CP */
	uint8_t boolField688;
	uint8_t UnknownData689[0x3];
	float LocalThrowModeSwitchAlpha_CP; /* Ofs: 0x68C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalThrowModeSwitchAlpha_CP */
	uint8_t boolField690;
	uint8_t boolField691;
	uint8_t boolField692;
	uint8_t boolField693;
	uint8_t boolField694;
	TEnumAsByte<enum EAnimStance> DBNOEntryStance; /* Ofs: 0x695 Size: 0x1 - EnumProperty TslGame.TslAnimInstance.DBNOEntryStance */
	uint8_t boolField696;
	uint8_t boolField697;
	uint8_t boolField698;
	uint8_t UnknownData699[0x3];
	int32_t PlayerID_CP; /* Ofs: 0x69C Size: 0x4 - IntProperty TslGame.TslAnimInstance.PlayerID_CP */
	int32_t AirCraftIDAnim_CP; /* Ofs: 0x6A0 Size: 0x4 - IntProperty TslGame.TslAnimInstance.AirCraftIDAnim_CP */
	uint8_t boolField6A4;
	uint8_t UnknownData6A5[0x3];
	ExternalPtr<struct UAnimMontage> PistolEquipMontageRefCP; /* Ofs: 0x6A8 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.PistolEquipMontageRefCP */
	uint8_t boolField6B0;
	uint8_t boolField6B1;
	uint8_t UnknownData6B2[0x2];
	float LocalPlayerAlpha; /* Ofs: 0x6B4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalPlayerAlpha */
	uint8_t boolField6B8;
	uint8_t boolField6B9;
	uint8_t boolField6BA;
	uint8_t boolField6BB;
	uint8_t boolField6BC;
	uint8_t UnknownData6BD[0x3];
	float PunchingAlpha_CP; /* Ofs: 0x6C0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.PunchingAlpha_CP */
	TEnumAsByte<enum EAnimWeaponType> Weapon_CP; /* Ofs: 0x6C4 Size: 0x1 - EnumProperty TslGame.TslAnimInstance.Weapon_CP */
	uint8_t boolField6C5;
	uint8_t boolField6C6;
	uint8_t boolField6C7;
	float ThrowableAdditionalAimYaw_CP; /* Ofs: 0x6C8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.ThrowableAdditionalAimYaw_CP */
	uint8_t UnknownData6CC[0x4];
	ExternalPtr<struct UAnimMontage> CurrentRecoilMontage_CP; /* Ofs: 0x6D0 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.CurrentRecoilMontage_CP */
	ExternalPtr<struct UBlendSpace1D> GripBlendSpace_CP; /* Ofs: 0x6D8 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.GripBlendSpace_CP */
	ExternalPtr<struct UBlendSpaceBase> GripBlendSpaceLH_CP; /* Ofs: 0x6E0 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.GripBlendSpaceLH_CP */
	float LHGripIndex_CP; /* Ofs: 0x6E8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LHGripIndex_CP */
	uint8_t boolField6EC;
	uint8_t UnknownData6ED[0x3];
	FVector HandWeaponOffset_CP; /* Ofs: 0x6F0 Size: 0xC - StructProperty TslGame.TslAnimInstance.HandWeaponOffset_CP */
	FVector HandWeaponOffsetTarget; /* Ofs: 0x6FC Size: 0xC - StructProperty TslGame.TslAnimInstance.HandWeaponOffsetTarget */
	uint8_t UnknownData708[0x8];
	FTransform WeaponInertia_CP; /* Ofs: 0x710 Size: 0x30 - StructProperty TslGame.TslAnimInstance.WeaponInertia_CP */
	float ReloadAlpha_CP; /* Ofs: 0x740 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.ReloadAlpha_CP */
	float HandWeaponOffsetAlpha_CP; /* Ofs: 0x744 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.HandWeaponOffsetAlpha_CP */
	FRotator RightClavicleRotation_CP; /* Ofs: 0x748 Size: 0xC - StructProperty TslGame.TslAnimInstance.RightClavicleRotation_CP */
	float FinalRecoilAlpha_CP; /* Ofs: 0x754 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FinalRecoilAlpha_CP */
	ExternalPtr<struct UCurveFloat> ADSSocketByFOV_CP; /* Ofs: 0x758 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.ADSSocketByFOV_CP */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_CP; /* Ofs: 0x760 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_CP */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_Pistol; /* Ofs: 0x768 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_Pistol */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_SMG; /* Ofs: 0x770 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_SMG */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_Rifle; /* Ofs: 0x778 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_Rifle */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_Sniper; /* Ofs: 0x780 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_Sniper */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_Pistol_FPP; /* Ofs: 0x788 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_Pistol_FPP */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_SMG_FPP; /* Ofs: 0x790 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_SMG_FPP */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_Rifle_FPP; /* Ofs: 0x798 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_Rifle_FPP */
	ExternalPtr<struct UBlendSpaceBase> WeaponLocomotionBlendspace_Sniper_FPP; /* Ofs: 0x7A0 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.WeaponLocomotionBlendspace_Sniper_FPP */
	float WeaponInertiaX_Scalar_CP; /* Ofs: 0x7A8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaX_Scalar_CP */
	float WeaponInertiaY_Scalar_CP; /* Ofs: 0x7AC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaY_Scalar_CP */
	float WeaponInertiaX_Clamp_CP; /* Ofs: 0x7B0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaX_Clamp_CP */
	float WeaponInertiaY_Clamp_CP; /* Ofs: 0x7B4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaY_Clamp_CP */
	float WeaponInertia_InerpSpeed_CP; /* Ofs: 0x7B8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertia_InerpSpeed_CP */
	float WeaponInertiaX_Scalar_ADS_CP; /* Ofs: 0x7BC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaX_Scalar_ADS_CP */
	float WeaponInertiaY_Scalar_ADS_CP; /* Ofs: 0x7C0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaY_Scalar_ADS_CP */
	float WeaponInertiaX_Clamp_ADS_CP; /* Ofs: 0x7C4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaX_Clamp_ADS_CP */
	float WeaponInertiaY_Clamp_ADS_CP; /* Ofs: 0x7C8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaY_Clamp_ADS_CP */
	float WeaponInertia_InerpSpeed_ADS_CP; /* Ofs: 0x7CC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertia_InerpSpeed_ADS_CP */
	float WeaponInertia_InerpSpeed_YawScalar_CP; /* Ofs: 0x7D0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertia_InerpSpeed_YawScalar_CP */
	float WeaponInertia_YawToRollScalar_CP; /* Ofs: 0x7D4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertia_YawToRollScalar_CP */
	float WeaponInertia_YawToRollScalar_ADS_CP; /* Ofs: 0x7D8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertia_YawToRollScalar_ADS_CP */
	float WeaponInertiaRoll_Clamp_ADS_CP; /* Ofs: 0x7DC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaRoll_Clamp_ADS_CP */
	float WeaponInertiaRoll_Clamp_CP; /* Ofs: 0x7E0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertiaRoll_Clamp_CP */
	float HandWeaponOffsetInterpSpeed; /* Ofs: 0x7E4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.HandWeaponOffsetInterpSpeed */
	FName EmoteMontageSlotName_CP; /* Ofs: 0x7E8 Size: 0x8 - NameProperty TslGame.TslAnimInstance.EmoteMontageSlotName_CP */
	float WeaponInertia_Yaw_CP; /* Ofs: 0x7F0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertia_Yaw_CP */
	float WeaponInertia_Pitch_CP; /* Ofs: 0x7F4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertia_Pitch_CP */
	float WeaponInertia_Roll_CP; /* Ofs: 0x7F8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponInertia_Roll_CP */
	float SprintWeaponLoweringAlpha_CP; /* Ofs: 0x7FC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintWeaponLoweringAlpha_CP */
	uint8_t boolField800;
	uint8_t UnknownData801[0x3];
	float RecoilRollValue_CP; /* Ofs: 0x804 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RecoilRollValue_CP */
	float RecoilTimer_CP; /* Ofs: 0x808 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RecoilTimer_CP */
	float RecoilRollRand_CP; /* Ofs: 0x80C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RecoilRollRand_CP */
	float RecoilPlayStartTime_CP; /* Ofs: 0x810 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RecoilPlayStartTime_CP */
	float RecoilBlendInTime_CP; /* Ofs: 0x814 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RecoilBlendInTime_CP */
	float RecoilTimerScale_CP; /* Ofs: 0x818 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RecoilTimerScale_CP */
	uint8_t UnknownData81C[0x4];
	ExternalPtr<struct UCurveFloat> RecoilRollCurve_CP; /* Ofs: 0x820 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.RecoilRollCurve_CP */
	float WeaponStabilityAlpha_CP; /* Ofs: 0x828 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponStabilityAlpha_CP */
	float WeaponStabilityRefSpeed_CP; /* Ofs: 0x82C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponStabilityRefSpeed_CP */
	FVector2D WeaponStabilityRefMapIn_CP; /* Ofs: 0x830 Size: 0x8 - StructProperty TslGame.TslAnimInstance.WeaponStabilityRefMapIn_CP */
	FVector2D WeaponStabilityRefMapOut_CP; /* Ofs: 0x838 Size: 0x8 - StructProperty TslGame.TslAnimInstance.WeaponStabilityRefMapOut_CP */
	float WeaponStabilityInterpSpeed_CP; /* Ofs: 0x840 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponStabilityInterpSpeed_CP */
	uint8_t boolField844;
	uint8_t boolField845;
	uint8_t UnknownData846[0x2];
	float WeaponAimState_CP; /* Ofs: 0x848 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponAimState_CP */
	float SprintAlphaModifier_CP; /* Ofs: 0x84C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintAlphaModifier_CP */
	uint8_t boolField850;
	uint8_t boolField851;
	uint8_t boolField852;
	uint8_t UnknownData853[0x1];
	float FlareReadyAlpha_CP; /* Ofs: 0x854 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FlareReadyAlpha_CP */
	float WeaponAimStateInterpolated_CP; /* Ofs: 0x858 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponAimStateInterpolated_CP */
	float Yaw_CP; /* Ofs: 0x85C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.Yaw_CP */
	float RotationYaw_CP; /* Ofs: 0x860 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RotationYaw_CP */
	float Pitch_CP; /* Ofs: 0x864 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.Pitch_CP */
	float YawNormalized_CP; /* Ofs: 0x868 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.YawNormalized_CP */
	float DesiredPitch_CP; /* Ofs: 0x86C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.DesiredPitch_CP */
	uint8_t AimDirectionCardinal_CP; /* Ofs: 0x870 Size: 0x1 - ByteProperty TslGame.TslAnimInstance.AimDirectionCardinal_CP */
	uint8_t UnknownData871[0x3];
	FRotator AORot_CP; /* Ofs: 0x874 Size: 0xC - StructProperty TslGame.TslAnimInstance.AORot_CP */
	FRotator AORotBackwards_CP; /* Ofs: 0x880 Size: 0xC - StructProperty TslGame.TslAnimInstance.AORotBackwards_CP */
	float SwimmingPitch_CP; /* Ofs: 0x88C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SwimmingPitch_CP */
	float ForceAddAimOffset_CP; /* Ofs: 0x890 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.ForceAddAimOffset_CP */
	float WeaponCollisionAlpha_CP; /* Ofs: 0x894 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponCollisionAlpha_CP */
	uint8_t boolField898;
	uint8_t UnknownData899[0x3];
	float WeaponCollisionReloadAlpha_CP; /* Ofs: 0x89C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponCollisionReloadAlpha_CP */
	uint8_t boolField8A0;
	uint8_t boolField8A1;
	uint8_t boolField8A2;
	uint8_t UnknownData8A3[0x1];
	float FallingAlpha_CP; /* Ofs: 0x8A4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FallingAlpha_CP */
	FVector2D FallingMap2D; /* Ofs: 0x8A8 Size: 0x8 - StructProperty TslGame.TslAnimInstance.FallingMap2D */
	FVector2D FallingMapZ; /* Ofs: 0x8B0 Size: 0x8 - StructProperty TslGame.TslAnimInstance.FallingMapZ */
	uint8_t boolField8B8;
	uint8_t UnknownData8B9[0x7];
	ExternalPtr<struct UAnimMontage> MontageFallingRifle_CP; /* Ofs: 0x8C0 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MontageFallingRifle_CP */
	ExternalPtr<struct UAnimMontage> MontageFallingUnarmed_CP; /* Ofs: 0x8C8 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MontageFallingUnarmed_CP */
	float LandingAlpha_CP; /* Ofs: 0x8D0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LandingAlpha_CP */
	uint8_t boolField8D4;
	uint8_t UnknownData8D5[0x3];
	float JumpHeight_CP; /* Ofs: 0x8D8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.JumpHeight_CP */
	float FallHeight_CP; /* Ofs: 0x8DC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FallHeight_CP */
	FVector JumpStartLocation_CP; /* Ofs: 0x8E0 Size: 0xC - StructProperty TslGame.TslAnimInstance.JumpStartLocation_CP */
	FVector LandPredictionVector_CP; /* Ofs: 0x8EC Size: 0xC - StructProperty TslGame.TslAnimInstance.LandPredictionVector_CP */
	float LeanLeftAlpha_CP; /* Ofs: 0x8F8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanLeftAlpha_CP */
	float LeanRightAlpha_CP; /* Ofs: 0x8FC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanRightAlpha_CP */
	float LeanTwoSideAlpha_CP; /* Ofs: 0x900 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanTwoSideAlpha_CP */
	float LeanLeftApplyTranslation_CP; /* Ofs: 0x904 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanLeftApplyTranslation_CP */
	float LeanInterpSpeed_CP; /* Ofs: 0x908 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanInterpSpeed_CP */
	float LeanInterpSpeedCollisionClamp_CP; /* Ofs: 0x90C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanInterpSpeedCollisionClamp_CP */
	uint8_t boolField910;
	uint8_t boolField911;
	uint8_t boolField912;
	uint8_t UnknownData913[0x1];
	float FreefallX_CP; /* Ofs: 0x914 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FreefallX_CP */
	float FreefallY_CP; /* Ofs: 0x918 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FreefallY_CP */
	float FreeFallAlpha_CP; /* Ofs: 0x91C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FreeFallAlpha_CP */
	uint8_t boolField920;
	uint8_t boolField921;
	uint8_t UnknownData922[0x2];
	float Freefall_Yaw_CP; /* Ofs: 0x924 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.Freefall_Yaw_CP */
	float Freefall_Pitch_CP; /* Ofs: 0x928 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.Freefall_Pitch_CP */
	uint8_t boolField92C;
	uint8_t boolField92D;
	uint8_t boolField92E;
	uint8_t boolField92F;
	uint8_t boolField930;
	uint8_t UnknownData931[0x3];
	float RotationPlayrateAimed_CP; /* Ofs: 0x934 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RotationPlayrateAimed_CP */
	float RotationPlayrateAimedAdditiveSpine_CP; /* Ofs: 0x938 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.RotationPlayrateAimedAdditiveSpine_CP */
	FRotator LastRotation_CP; /* Ofs: 0x93C Size: 0xC - StructProperty TslGame.TslAnimInstance.LastRotation_CP */
	FRotator Freelook_Body_CP; /* Ofs: 0x948 Size: 0xC - StructProperty TslGame.TslAnimInstance.Freelook_Body_CP */
	FRotator Freelook_Delta_CP; /* Ofs: 0x954 Size: 0xC - StructProperty TslGame.TslAnimInstance.Freelook_Delta_CP */
	int32_t IdleIndex_CP; /* Ofs: 0x960 Size: 0x4 - IntProperty TslGame.TslAnimInstance.IdleIndex_CP */
	int32_t LastIdleIndex_CP; /* Ofs: 0x964 Size: 0x4 - IntProperty TslGame.TslAnimInstance.LastIdleIndex_CP */
	float IdleTimer_CP; /* Ofs: 0x968 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.IdleTimer_CP */
	float IdleTriggerRandom; /* Ofs: 0x96C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.IdleTriggerRandom */
	float IdleTriggerTimeMin_CP; /* Ofs: 0x970 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.IdleTriggerTimeMin_CP */
	float IdleTriggerTimeVariation_CP; /* Ofs: 0x974 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.IdleTriggerTimeVariation_CP */
	uint8_t UnknownData978[0x8];
	FTransform SlotPrimary_CP; /* Ofs: 0x980 Size: 0x30 - StructProperty TslGame.TslAnimInstance.SlotPrimary_CP */
	FTransform SlotSecondary_CP; /* Ofs: 0x9B0 Size: 0x30 - StructProperty TslGame.TslAnimInstance.SlotSecondary_CP */
	FTransform SlotMelee_CP; /* Ofs: 0x9E0 Size: 0x30 - StructProperty TslGame.TslAnimInstance.SlotMelee_CP */
	FTransform SlotThrown_CP; /* Ofs: 0xA10 Size: 0x30 - StructProperty TslGame.TslAnimInstance.SlotThrown_CP */
	FVector SlotPrimary_Offset_CP; /* Ofs: 0xA40 Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotPrimary_Offset_CP */
	FVector SlotSecondary_Offset_CP; /* Ofs: 0xA4C Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotSecondary_Offset_CP */
	FVector SlotPrimary_Location_CP; /* Ofs: 0xA58 Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotPrimary_Location_CP */
	FVector SlotSecondary_Location_CP; /* Ofs: 0xA64 Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotSecondary_Location_CP */
	FVector SlotMelee_Location_CP; /* Ofs: 0xA70 Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotMelee_Location_CP */
	FVector SlotThrown_Location_CP; /* Ofs: 0xA7C Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotThrown_Location_CP */
	FRotator SlotPrimary_Rotation_CP; /* Ofs: 0xA88 Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotPrimary_Rotation_CP */
	FRotator SlotSecondary_Rotation_CP; /* Ofs: 0xA94 Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotSecondary_Rotation_CP */
	FRotator SlotMelee_Rotation_CP; /* Ofs: 0xAA0 Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotMelee_Rotation_CP */
	FRotator SlotThrown_Rotation_CP; /* Ofs: 0xAAC Size: 0xC - StructProperty TslGame.TslAnimInstance.SlotThrown_Rotation_CP */
	TMap<struct UClass, struct FTransform> SlotPrimaryOffsetsPerWeapon; /* Ofs: 0xAB8 Size: 0x50 - MapProperty TslGame.TslAnimInstance.SlotPrimaryOffsetsPerWeapon */
	TMap<struct UClass, struct FTransform> SlotSecondaryOffsetsPerWeapon; /* Ofs: 0xB08 Size: 0x50 - MapProperty TslGame.TslAnimInstance.SlotSecondaryOffsetsPerWeapon */
	float AnimDynamicsStandAlpha_CP; /* Ofs: 0xB58 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.AnimDynamicsStandAlpha_CP */
	float AnimDynamicsStandSprintAlpha_CP; /* Ofs: 0xB5C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.AnimDynamicsStandSprintAlpha_CP */
	float AnimDynamicsCrouchAlpha_CP; /* Ofs: 0xB60 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.AnimDynamicsCrouchAlpha_CP */
	float AnimDynamicsProneAlpha_CP; /* Ofs: 0xB64 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.AnimDynamicsProneAlpha_CP */
	FVector EFCoat_CP; /* Ofs: 0xB68 Size: 0xC - StructProperty TslGame.TslAnimInstance.EFCoat_CP */
	uint8_t boolFieldB74;
	uint8_t UnknownDataB75[0x3];
	float LocalFPPAlpha_CP; /* Ofs: 0xB78 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalFPPAlpha_CP */
	float LocalFPPAlphaVehicleAimAO_CP; /* Ofs: 0xB7C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalFPPAlphaVehicleAimAO_CP */
	uint8_t boolFieldB80;
	uint8_t boolFieldB81;
	uint8_t boolFieldB82;
	uint8_t boolFieldB83;
	float LocalSteerInput_CP; /* Ofs: 0xB84 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalSteerInput_CP */
	float LocalSteerInputMoto_CP; /* Ofs: 0xB88 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalSteerInputMoto_CP */
	float LocalStopMoto_CP; /* Ofs: 0xB8C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalStopMoto_CP */
	float LocalThrottleInput_CP; /* Ofs: 0xB90 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalThrottleInput_CP */
	FRotator GasThighRot_CP; /* Ofs: 0xB94 Size: 0xC - StructProperty TslGame.TslAnimInstance.GasThighRot_CP */
	FRotator GasAnkleRot_CP; /* Ofs: 0xBA0 Size: 0xC - StructProperty TslGame.TslAnimInstance.GasAnkleRot_CP */
	uint8_t UnknownDataBAC[0x4];
	FTransform GasKneeTransformX_CP; /* Ofs: 0xBB0 Size: 0x30 - StructProperty TslGame.TslAnimInstance.GasKneeTransformX_CP */
	float LocalBrakeInput_CP; /* Ofs: 0xBE0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocalBrakeInput_CP */
	uint8_t UnknownDataBE4[0xC];
	FTransform BrakeKneeTransform_CP; /* Ofs: 0xBF0 Size: 0x30 - StructProperty TslGame.TslAnimInstance.BrakeKneeTransform_CP */
	FRotator BrakeAnkleRot_CP; /* Ofs: 0xC20 Size: 0xC - StructProperty TslGame.TslAnimInstance.BrakeAnkleRot_CP */
	float BackwardAOAlpha_CP; /* Ofs: 0xC2C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.BackwardAOAlpha_CP */
	float AimBlendAlpha_CP; /* Ofs: 0xC30 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.AimBlendAlpha_CP */
	uint8_t boolFieldC34;
	uint8_t UnknownDataC35[0x3];
	float GroundContactMoto_CP; /* Ofs: 0xC38 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.GroundContactMoto_CP */
	float AirControlPitchInput_CP; /* Ofs: 0xC3C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.AirControlPitchInput_CP */
	FTransform DriverIK_CP; /* Ofs: 0xC40 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DriverIK_CP */
	float PassengerIKAlpha_CP; /* Ofs: 0xC70 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.PassengerIKAlpha_CP */
	FVector DriverSpineLocWS_CP; /* Ofs: 0xC74 Size: 0xC - StructProperty TslGame.TslAnimInstance.DriverSpineLocWS_CP */
	TEnumAsByte<enum EVehicleAnimType> VehicleSeatType_CP; /* Ofs: 0xC80 Size: 0x1 - EnumProperty TslGame.TslAnimInstance.VehicleSeatType_CP */
	uint8_t boolFieldC81;
	uint8_t boolFieldC82;
	uint8_t boolFieldC83;
	float AnimHairAlpha; /* Ofs: 0xC84 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.AnimHairAlpha */
	float VaultTimer_CP; /* Ofs: 0xC88 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultTimer_CP */
	float VaultTimerLast_CP; /* Ofs: 0xC8C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultTimerLast_CP */
	TEnumAsByte<enum EVaultAnimType> LocalVaultType_CP; /* Ofs: 0xC90 Size: 0x1 - EnumProperty TslGame.TslAnimInstance.LocalVaultType_CP */
	uint8_t UnknownDataC91[0x7];
	ExternalPtr<struct UAnimSequenceBase> VaultAnimSequence_CP; /* Ofs: 0xC98 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.VaultAnimSequence_CP */
	float VaultAnimLength_CP; /* Ofs: 0xCA0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultAnimLength_CP */
	uint8_t UnknownDataCA4[0x4];
	ExternalPtr<struct UCurveFloat> VaultCurve_CP; /* Ofs: 0xCA8 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.VaultCurve_CP */
	float VaultBlendInTime_CP; /* Ofs: 0xCB0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultBlendInTime_CP */
	float VaultBlendOutTime_CP; /* Ofs: 0xCB4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultBlendOutTime_CP */
	uint8_t boolFieldCB8;
	uint8_t UnknownDataCB9[0x3];
	float VaultBlendOutProgressTime_CP; /* Ofs: 0xCBC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultBlendOutProgressTime_CP */
	float VaultBlendOutExactTime_CP; /* Ofs: 0xCC0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultBlendOutExactTime_CP */
	float VaultLastActionTimer_CP; /* Ofs: 0xCC4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultLastActionTimer_CP */
	float VaultAnimTime_CP; /* Ofs: 0xCC8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultAnimTime_CP */
	float VaultBlendOutTimeBuffer; /* Ofs: 0xCCC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultBlendOutTimeBuffer */
	TEnumAsByte<enum ECastAnim> CurrentCastAnim_CP; /* Ofs: 0xCD0 Size: 0x1 - EnumProperty TslGame.TslAnimInstance.CurrentCastAnim_CP */
	uint8_t boolFieldCD1;
	uint8_t UnknownDataCD2[0x2];
	float WeaponIKLH_CP; /* Ofs: 0xCD4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponIKLH_CP */
	float WeaponIKRH_CP; /* Ofs: 0xCD8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.WeaponIKRH_CP */
	float MontageIKLH_CP; /* Ofs: 0xCDC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.MontageIKLH_CP */
	float MontageIKRH_CP; /* Ofs: 0xCE0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.MontageIKRH_CP */
	float IgnoreWeaponTransform_CP; /* Ofs: 0xCE4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.IgnoreWeaponTransform_CP */
	float PickupIKAlpha_CP; /* Ofs: 0xCE8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.PickupIKAlpha_CP */
	float TargetIKRH_CP; /* Ofs: 0xCEC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.TargetIKRH_CP */
	float TargetIKLH_CP; /* Ofs: 0xCF0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.TargetIKLH_CP */
	float ForceLegsFromAnim_CP; /* Ofs: 0xCF4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.ForceLegsFromAnim_CP */
	ExternalPtr<struct UTslWeapon_Gun> LastGunCache_CP; /* Ofs: 0xCF8 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.LastGunCache_CP */
	ExternalPtr<struct UTslWheeledVehicle> CachedWheeledVehicle_CP; /* Ofs: 0xD00 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.CachedWheeledVehicle_CP */
	ExternalPtr<struct UTslFloatingVehicle> CachedFloatingVehicle_CP; /* Ofs: 0xD08 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.CachedFloatingVehicle_CP */
	ExternalPtr<struct UBlendSpaceBase> PassengerAimBS_CP; /* Ofs: 0xD10 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.PassengerAimBS_CP */
	ExternalPtr<struct UBlendSpaceBase> PassengerTransitionOut_CP; /* Ofs: 0xD18 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.PassengerTransitionOut_CP */
	ExternalPtr<struct UBlendSpaceBase> PassengerTransitionIn_CP; /* Ofs: 0xD20 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.PassengerTransitionIn_CP */
	ExternalPtr<struct UAnimSequenceBase> PassengerIdle_Rifle_CP; /* Ofs: 0xD28 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.PassengerIdle_Rifle_CP */
	ExternalPtr<struct UAnimSequenceBase> PassengerIdle_Unarmed_CP; /* Ofs: 0xD30 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.PassengerIdle_Unarmed_CP */
	ExternalPtr<struct UAnimSequenceBase> PassengerIdle_Grenade_CP; /* Ofs: 0xD38 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.PassengerIdle_Grenade_CP */
	ExternalPtr<struct UAnimSequenceBase> PassengerIdle_Melee_CP; /* Ofs: 0xD40 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.PassengerIdle_Melee_CP */
	ExternalPtr<struct UCurveFloat> CurveAimState_CP; /* Ofs: 0xD48 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.CurveAimState_CP */
	uint8_t UnknownDataD50[0x8];
	uint8_t boolFieldD58;
	uint8_t boolFieldD59;
	uint8_t boolFieldD5A;
	uint8_t UnknownDataD5B[0x9];
	float AnimatedHairsAlpha; /* Ofs: 0xD64 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.AnimatedHairsAlpha */
	uint8_t boolFieldD68;
	uint8_t UnknownDataD69[0x7];
	ExternalPtr<struct UAnimMontage> MontageMeleeAttack1; /* Ofs: 0xD70 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MontageMeleeAttack1 */
	ExternalPtr<struct UAnimMontage> MontageMeleeAttack2; /* Ofs: 0xD78 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MontageMeleeAttack2 */
	ExternalPtr<struct UAnimMontage> MontageMeleeAttack3; /* Ofs: 0xD80 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MontageMeleeAttack3 */
	ExternalPtr<struct UAnimMontage> MontagePunchingAttack1; /* Ofs: 0xD88 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MontagePunchingAttack1 */
	ExternalPtr<struct UAnimMontage> MontagePunchingAttack2; /* Ofs: 0xD90 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MontagePunchingAttack2 */
	ExternalPtr<struct UAnimMontage> MontagePunchingAttack3; /* Ofs: 0xD98 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MontagePunchingAttack3 */
	float FPPSprintAnimScalar; /* Ofs: 0xDA0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FPPSprintAnimScalar */
	FVector FPP_PrimaryAndSecondaryItemOffset; /* Ofs: 0xDA4 Size: 0xC - StructProperty TslGame.TslAnimInstance.FPP_PrimaryAndSecondaryItemOffset */
	float PunchingAlphaOneTarget_CP; /* Ofs: 0xDB0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.PunchingAlphaOneTarget_CP */
	float PunchingAlphaInterpSpeed; /* Ofs: 0xDB4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.PunchingAlphaInterpSpeed */
	float SprintWeaponLoweringScalar_CP; /* Ofs: 0xDB8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintWeaponLoweringScalar_CP */
	float ThrowStateSwitchInterpSpeed; /* Ofs: 0xDBC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.ThrowStateSwitchInterpSpeed */
	float VaultingEvalTimeout; /* Ofs: 0xDC0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.VaultingEvalTimeout */
	uint8_t UnknownDataDC4[0x4];
	ExternalPtr<struct UAnimDB> UnarmedAnimDB_CP; /* Ofs: 0xDC8 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.UnarmedAnimDB_CP */
	ExternalPtr<struct UAnimDB> RifleAnimDB_CP; /* Ofs: 0xDD0 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.RifleAnimDB_CP */
	ExternalPtr<struct UAnimDB> MeleeAnimDB_CP; /* Ofs: 0xDD8 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.MeleeAnimDB_CP */
	ExternalPtr<struct UAnimDB> GrenadeAnimDB_CP; /* Ofs: 0xDE0 Size: 0x8 - ObjectProperty TslGame.TslAnimInstance.GrenadeAnimDB_CP */
	uint8_t UnknownDataDE8[0x8];
	FTransform DefaultSlotPrimary_Male_CP; /* Ofs: 0xDF0 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DefaultSlotPrimary_Male_CP */
	FTransform DefaultSlotSecondary_Male_CP; /* Ofs: 0xE20 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DefaultSlotSecondary_Male_CP */
	FTransform DefaultSlotMelee_Male_CP; /* Ofs: 0xE50 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DefaultSlotMelee_Male_CP */
	FTransform DefaultSlotThrown_Male_CP; /* Ofs: 0xE80 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DefaultSlotThrown_Male_CP */
	FTransform DefaultSlotPrimary_Female_CP; /* Ofs: 0xEB0 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DefaultSlotPrimary_Female_CP */
	FTransform DefaultSlotSecondary_Female_CP; /* Ofs: 0xEE0 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DefaultSlotSecondary_Female_CP */
	FTransform DefaultSlotThrown_Female_CP; /* Ofs: 0xF10 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DefaultSlotThrown_Female_CP */
	FTransform DefaultSlotMelee_Female_CP; /* Ofs: 0xF40 Size: 0x30 - StructProperty TslGame.TslAnimInstance.DefaultSlotMelee_Female_CP */
	float SprintLocoTimeMultiplier; /* Ofs: 0xF70 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoTimeMultiplier */
	float SprintLocoTimeMultiplier_FPP; /* Ofs: 0xF74 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoTimeMultiplier_FPP */
	float SprintLocoTimeAlphaScalar; /* Ofs: 0xF78 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoTimeAlphaScalar */
	float SprintLocoTimeAlphaScalar_FPP; /* Ofs: 0xF7C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoTimeAlphaScalar_FPP */
	float SprintLocoInstantScalar; /* Ofs: 0xF80 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoInstantScalar */
	float LocomotionDirectionInterp; /* Ofs: 0xF84 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LocomotionDirectionInterp */
	float LeanYawInterpSpeedMin; /* Ofs: 0xF88 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanYawInterpSpeedMin */
	float LeanYawInterpSpeedMax; /* Ofs: 0xF8C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanYawInterpSpeedMax */
	float LeanYawGlobalMultiplier; /* Ofs: 0xF90 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanYawGlobalMultiplier */
	float LeanYawClamp; /* Ofs: 0xF94 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.LeanYawClamp */
	float SprintLocoStandLimit_High; /* Ofs: 0xF98 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoStandLimit_High */
	float SprintLocoCrouchLimit_High; /* Ofs: 0xF9C Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoCrouchLimit_High */
	float SprintLocoProneLimit_High; /* Ofs: 0xFA0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoProneLimit_High */
	float SprintLocoStandLimit_Low; /* Ofs: 0xFA4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoStandLimit_Low */
	float SprintLocoCrouchLimit_Low; /* Ofs: 0xFA8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoCrouchLimit_Low */
	float SprintLocoProneLimit_Low; /* Ofs: 0xFAC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoProneLimit_Low */
	float SprintLocoLimitInterpSpeed; /* Ofs: 0xFB0 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.SprintLocoLimitInterpSpeed */
	float FlarePitchActivationLimit_Stand; /* Ofs: 0xFB4 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FlarePitchActivationLimit_Stand */
	float FlarePitchActivationLimit_Prone; /* Ofs: 0xFB8 Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FlarePitchActivationLimit_Prone */
	float FlareReadyInterpSpeed; /* Ofs: 0xFBC Size: 0x4 - FloatProperty TslGame.TslAnimInstance.FlareReadyInterpSpeed */
	FRotator RightClavicleCompensation; /* Ofs: 0xFC0 Size: 0xC - StructProperty TslGame.TslAnimInstance.RightClavicleCompensation */
	uint8_t UnknownDataFCC[0x4];


	inline bool SetWeaponFire(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x380, value); }
	inline bool SetWeaponFireCycle(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x390, value); }
	inline bool SetEquipPrimary(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetEquipSecondary(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetEqupiSidearm(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetEquipMelee(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetEquipThrown(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetUnEquipPrimary(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetUnEquipSecondary(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x400, value); }
	inline bool SetUnEqupiSidearm(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x410, value); }
	inline bool SetUnEquipMelee(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x420, value); }
	inline bool SetUnEquipThrown(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x430, value); }
	inline bool SetToggleFireMode(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x440, value); }
	inline bool SetReloadTactical(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x450, value); }
	inline bool SetReloadCharge(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x460, value); }
	inline bool SetReloadByOneStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x470, value); }
	inline bool SetReloadByOneStop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x480, value); }
	inline bool SetReloadByOneSingle(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x490, value); }
	inline bool SetEquipThrownGrenade(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetEquipThrownMolotov(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetEquipThrownOther(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetThrowPrepare(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetThrowCooking(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetThrowStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetThrowDrop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x500, value); }
	inline bool SetLandHeavy(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x510, value); }
	inline bool SetLandExtreme(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x520, value); }
	inline bool SetReloadCancel(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x530, value); }
	inline bool SetCharacterPickup(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x540, value); }
	inline bool SetUnarmedAttack(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x550, value); }
	inline bool SetPowerupUsed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x560, value); }
	inline bool SetChangeCharacterAppearance(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x570, value); }
	inline bool SetOnCastStart(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x580, value); }
	inline bool SetOnCastCancel(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x590, value); }
	inline bool SetOnCastFinish(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetOnEmotePlay(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetOnEmotePlayRNG(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetOnEmoteStop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetOnNegativeEffectApplied(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetOnNegativeEffectRemoved(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetCharacterReference(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x608, value); }
	inline bool SetCharacterMesh_CP(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x610, value); }
	inline bool SetPreEvalPawnState(t_structHelper inst, TEnumAsByte<enum EAnimPawnState> value) { inst.WriteOffset(0x618, value); }
	inline bool SetLocomotionSpeed_CP(t_structHelper inst, float value) { inst.WriteOffset(0x61C, value); }
	inline bool SetLocomotionSpeed2D_CP(t_structHelper inst, float value) { inst.WriteOffset(0x620, value); }
	inline bool bIsMoving_CP()
	{
		return boolField624& 0x1;
	}
	inline bool SetbIsMoving_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x624, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLocomotionDirection_CP(t_structHelper inst, float value) { inst.WriteOffset(0x628, value); }
	inline bool SetLocomotionDirectionClamped_CP(t_structHelper inst, float value) { inst.WriteOffset(0x62C, value); }
	inline bool SetLocomotionJumpDirection_CP(t_structHelper inst, float value) { inst.WriteOffset(0x630, value); }
	inline bool SetLeanYaw_CP(t_structHelper inst, float value) { inst.WriteOffset(0x634, value); }
	inline bool SetLastAbsoluteDirection_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x638, value); }
	inline bool SetControlRotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x644, value); }
	inline bool SetControlRotationLastMovement_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x650, value); }
	inline bool SetCharacterRotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x65C, value); }
	inline bool SetStance_CP(t_structHelper inst, TEnumAsByte<enum EAnimStance> value) { inst.WriteOffset(0x668, value); }
	inline bool bIsSprintingFast_CP()
	{
		return boolField669& 0x1;
	}
	inline bool SetbIsSprintingFast_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x669, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsSprinting_CP()
	{
		return boolField66A& 0x1;
	}
	inline bool SetbIsSprinting_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x66A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponGripType_CP(t_structHelper inst, float value) { inst.WriteOffset(0x66C, value); }
	inline bool SetSprintAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x670, value); }
	inline bool SetSprintLocoAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x674, value); }
	inline bool SetSprintAlphaPitchComponent_CP(t_structHelper inst, float value) { inst.WriteOffset(0x678, value); }
	inline bool SetSprintAlphaSprintLimit_High(t_structHelper inst, float value) { inst.WriteOffset(0x67C, value); }
	inline bool SetSprintAlphaSprintLimit_Low(t_structHelper inst, float value) { inst.WriteOffset(0x680, value); }
	inline bool SetSprintValue_CP(t_structHelper inst, float value) { inst.WriteOffset(0x684, value); }
	inline bool bLocalQuickThrowHigh_CP()
	{
		return boolField688& 0x1;
	}
	inline bool SetbLocalQuickThrowHigh_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x688, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLocalThrowModeSwitchAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x68C, value); }
	inline bool bIsJumping_CP()
	{
		return boolField690& 0x1;
	}
	inline bool SetbIsJumping_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x690, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bJumpForward_CP()
	{
		return boolField691& 0x1;
	}
	inline bool SetbJumpForward_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x691, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsSwimming_CP()
	{
		return boolField692& 0x1;
	}
	inline bool SetbIsSwimming_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x692, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsUnderWater_CP()
	{
		return boolField693& 0x1;
	}
	inline bool SetbIsUnderWater_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x693, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsDBNO_CP()
	{
		return boolField694& 0x1;
	}
	inline bool SetbIsDBNO_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x694, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDBNOEntryStance(t_structHelper inst, TEnumAsByte<enum EAnimStance> value) { inst.WriteOffset(0x695, value); }
	inline bool bIsReviving_CP()
	{
		return boolField696& 0x1;
	}
	inline bool SetbIsReviving_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x696, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsUpperbody_CP()
	{
		return boolField697& 0x1;
	}
	inline bool SetbIsUpperbody_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x697, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsTransitioning_CP()
	{
		return boolField698& 0x1;
	}
	inline bool SetbIsTransitioning_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x698, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlayerID_CP(t_structHelper inst, int32_t value) { inst.WriteOffset(0x69C, value); }
	inline bool SetAirCraftIDAnim_CP(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6A0, value); }
	inline bool bIsEquippingPistol_CP()
	{
		return boolField6A4& 0x1;
	}
	inline bool SetbIsEquippingPistol_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6A4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPistolEquipMontageRefCP(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0x6A8, value); }
	inline bool bIsFlying_CP()
	{
		return boolField6B0& 0x1;
	}
	inline bool SetbIsFlying_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsLocalPlayer()
	{
		return boolField6B1& 0x1;
	}
	inline bool SetbIsLocalPlayer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6B1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLocalPlayerAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x6B4, value); }
	inline bool bIsRagdollCacheActive_CP()
	{
		return boolField6B8& 0x1;
	}
	inline bool SetbIsRagdollCacheActive_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsBurning_CP()
	{
		return boolField6B9& 0x1;
	}
	inline bool SetbIsBurning_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6B9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsFlashed_CP()
	{
		return boolField6BA& 0x1;
	}
	inline bool SetbIsFlashed_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6BA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsAffectedByStatus_CP()
	{
		return boolField6BB& 0x1;
	}
	inline bool SetbIsAffectedByStatus_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6BB, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsPunching_CP()
	{
		return boolField6BC& 0x1;
	}
	inline bool SetbIsPunching_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6BC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPunchingAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x6C0, value); }
	inline bool SetWeapon_CP(t_structHelper inst, TEnumAsByte<enum EAnimWeaponType> value) { inst.WriteOffset(0x6C4, value); }
	inline bool bIsArmedWithGun_CP()
	{
		return boolField6C5& 0x1;
	}
	inline bool SetbIsArmedWithGun_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsArmedWithThrown_CP()
	{
		return boolField6C6& 0x1;
	}
	inline bool SetbIsArmedWithThrown_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C6, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsPreparingThrow_CP()
	{
		return boolField6C7& 0x1;
	}
	inline bool SetbIsPreparingThrow_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C7, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetThrowableAdditionalAimYaw_CP(t_structHelper inst, float value) { inst.WriteOffset(0x6C8, value); }
	inline bool SetCurrentRecoilMontage_CP(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0x6D0, value); }
	inline bool SetGripBlendSpace_CP(t_structHelper inst, ExternalPtr<struct UBlendSpace1D> value) { inst.WriteOffset(0x6D8, value); }
	inline bool SetGripBlendSpaceLH_CP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x6E0, value); }
	inline bool SetLHGripIndex_CP(t_structHelper inst, float value) { inst.WriteOffset(0x6E8, value); }
	inline bool bIsReloading_CP()
	{
		return boolField6EC& 0x1;
	}
	inline bool SetbIsReloading_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6EC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHandWeaponOffset_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetHandWeaponOffsetTarget(t_structHelper inst, FVector value) { inst.WriteOffset(0x6FC, value); }
	inline bool SetWeaponInertia_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0x710, value); }
	inline bool SetReloadAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x740, value); }
	inline bool SetHandWeaponOffsetAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x744, value); }
	inline bool SetRightClavicleRotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x748, value); }
	inline bool SetFinalRecoilAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x754, value); }
	inline bool SetADSSocketByFOV_CP(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x758, value); }
	inline bool SetWeaponLocomotionBlendspace_CP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x760, value); }
	inline bool SetWeaponLocomotionBlendspace_Pistol(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x768, value); }
	inline bool SetWeaponLocomotionBlendspace_SMG(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x770, value); }
	inline bool SetWeaponLocomotionBlendspace_Rifle(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x778, value); }
	inline bool SetWeaponLocomotionBlendspace_Sniper(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x780, value); }
	inline bool SetWeaponLocomotionBlendspace_Pistol_FPP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x788, value); }
	inline bool SetWeaponLocomotionBlendspace_SMG_FPP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x790, value); }
	inline bool SetWeaponLocomotionBlendspace_Rifle_FPP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x798, value); }
	inline bool SetWeaponLocomotionBlendspace_Sniper_FPP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetWeaponInertiaX_Scalar_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7A8, value); }
	inline bool SetWeaponInertiaY_Scalar_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7AC, value); }
	inline bool SetWeaponInertiaX_Clamp_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7B0, value); }
	inline bool SetWeaponInertiaY_Clamp_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7B4, value); }
	inline bool SetWeaponInertia_InerpSpeed_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7B8, value); }
	inline bool SetWeaponInertiaX_Scalar_ADS_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7BC, value); }
	inline bool SetWeaponInertiaY_Scalar_ADS_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7C0, value); }
	inline bool SetWeaponInertiaX_Clamp_ADS_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7C4, value); }
	inline bool SetWeaponInertiaY_Clamp_ADS_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7C8, value); }
	inline bool SetWeaponInertia_InerpSpeed_ADS_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7CC, value); }
	inline bool SetWeaponInertia_InerpSpeed_YawScalar_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7D0, value); }
	inline bool SetWeaponInertia_YawToRollScalar_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7D4, value); }
	inline bool SetWeaponInertia_YawToRollScalar_ADS_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7D8, value); }
	inline bool SetWeaponInertiaRoll_Clamp_ADS_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7DC, value); }
	inline bool SetWeaponInertiaRoll_Clamp_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7E0, value); }
	inline bool SetHandWeaponOffsetInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x7E4, value); }
	inline bool SetEmoteMontageSlotName_CP(t_structHelper inst, FName value) { inst.WriteOffset(0x7E8, value); }
	inline bool SetWeaponInertia_Yaw_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7F0, value); }
	inline bool SetWeaponInertia_Pitch_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7F4, value); }
	inline bool SetWeaponInertia_Roll_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7F8, value); }
	inline bool SetSprintWeaponLoweringAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x7FC, value); }
	inline bool bIsShieldEquipped_CP()
	{
		return boolField800& 0x1;
	}
	inline bool SetbIsShieldEquipped_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x800, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRecoilRollValue_CP(t_structHelper inst, float value) { inst.WriteOffset(0x804, value); }
	inline bool SetRecoilTimer_CP(t_structHelper inst, float value) { inst.WriteOffset(0x808, value); }
	inline bool SetRecoilRollRand_CP(t_structHelper inst, float value) { inst.WriteOffset(0x80C, value); }
	inline bool SetRecoilPlayStartTime_CP(t_structHelper inst, float value) { inst.WriteOffset(0x810, value); }
	inline bool SetRecoilBlendInTime_CP(t_structHelper inst, float value) { inst.WriteOffset(0x814, value); }
	inline bool SetRecoilTimerScale_CP(t_structHelper inst, float value) { inst.WriteOffset(0x818, value); }
	inline bool SetRecoilRollCurve_CP(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x820, value); }
	inline bool SetWeaponStabilityAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x828, value); }
	inline bool SetWeaponStabilityRefSpeed_CP(t_structHelper inst, float value) { inst.WriteOffset(0x82C, value); }
	inline bool SetWeaponStabilityRefMapIn_CP(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x830, value); }
	inline bool SetWeaponStabilityRefMapOut_CP(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x838, value); }
	inline bool SetWeaponStabilityInterpSpeed_CP(t_structHelper inst, float value) { inst.WriteOffset(0x840, value); }
	inline bool bIsAiming_CP()
	{
		return boolField844& 0x1;
	}
	inline bool SetbIsAiming_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x844, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsScoping_CP()
	{
		return boolField845& 0x1;
	}
	inline bool SetbIsScoping_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x845, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponAimState_CP(t_structHelper inst, float value) { inst.WriteOffset(0x848, value); }
	inline bool SetSprintAlphaModifier_CP(t_structHelper inst, float value) { inst.WriteOffset(0x84C, value); }
	inline bool bIsAimingBackward_CP()
	{
		return boolField850& 0x1;
	}
	inline bool SetbIsAimingBackward_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x850, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsRelaxed_CP()
	{
		return boolField851& 0x1;
	}
	inline bool SetbIsRelaxed_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x851, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsFlareReady()
	{
		return boolField852& 0x1;
	}
	inline bool SetbIsFlareReady(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x852, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFlareReadyAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x854, value); }
	inline bool SetWeaponAimStateInterpolated_CP(t_structHelper inst, float value) { inst.WriteOffset(0x858, value); }
	inline bool SetYaw_CP(t_structHelper inst, float value) { inst.WriteOffset(0x85C, value); }
	inline bool SetRotationYaw_CP(t_structHelper inst, float value) { inst.WriteOffset(0x860, value); }
	inline bool SetPitch_CP(t_structHelper inst, float value) { inst.WriteOffset(0x864, value); }
	inline bool SetYawNormalized_CP(t_structHelper inst, float value) { inst.WriteOffset(0x868, value); }
	inline bool SetDesiredPitch_CP(t_structHelper inst, float value) { inst.WriteOffset(0x86C, value); }
	inline bool SetAimDirectionCardinal_CP(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x870, value); }
	inline bool SetAORot_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x874, value); }
	inline bool SetAORotBackwards_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x880, value); }
	inline bool SetSwimmingPitch_CP(t_structHelper inst, float value) { inst.WriteOffset(0x88C, value); }
	inline bool SetForceAddAimOffset_CP(t_structHelper inst, float value) { inst.WriteOffset(0x890, value); }
	inline bool SetWeaponCollisionAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x894, value); }
	inline bool bWeaponObstructedHigh_CP()
	{
		return boolField898& 0x1;
	}
	inline bool SetbWeaponObstructedHigh_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x898, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponCollisionReloadAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x89C, value); }
	inline bool bWeaponCollisionActive_CP()
	{
		return boolField8A0& 0x1;
	}
	inline bool SetbWeaponCollisionActive_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsFalling_CP()
	{
		return boolField8A1& 0x1;
	}
	inline bool SetbIsFalling_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8A1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWasFalling_CP()
	{
		return boolField8A2& 0x1;
	}
	inline bool SetbWasFalling_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8A2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFallingAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x8A4, value); }
	inline bool SetFallingMap2D(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8A8, value); }
	inline bool SetFallingMapZ(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8B0, value); }
	inline bool bForceFall_CP()
	{
		return boolField8B8& 0x1;
	}
	inline bool SetbForceFall_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMontageFallingRifle_CP(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0x8C0, value); }
	inline bool SetMontageFallingUnarmed_CP(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetLandingAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x8D0, value); }
	inline bool bLocalForceProne_CP()
	{
		return boolField8D4& 0x1;
	}
	inline bool SetbLocalForceProne_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8D4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetJumpHeight_CP(t_structHelper inst, float value) { inst.WriteOffset(0x8D8, value); }
	inline bool SetFallHeight_CP(t_structHelper inst, float value) { inst.WriteOffset(0x8DC, value); }
	inline bool SetJumpStartLocation_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0x8E0, value); }
	inline bool SetLandPredictionVector_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0x8EC, value); }
	inline bool SetLeanLeftAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetLeanRightAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x8FC, value); }
	inline bool SetLeanTwoSideAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x900, value); }
	inline bool SetLeanLeftApplyTranslation_CP(t_structHelper inst, float value) { inst.WriteOffset(0x904, value); }
	inline bool SetLeanInterpSpeed_CP(t_structHelper inst, float value) { inst.WriteOffset(0x908, value); }
	inline bool SetLeanInterpSpeedCollisionClamp_CP(t_structHelper inst, float value) { inst.WriteOffset(0x90C, value); }
	inline bool bUseLinearLeanInterp()
	{
		return boolField910& 0x1;
	}
	inline bool SetbUseLinearLeanInterp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x910, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsFreefalling_CP()
	{
		return boolField911& 0x1;
	}
	inline bool SetbIsFreefalling_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x911, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsParachuting_CP()
	{
		return boolField912& 0x1;
	}
	inline bool SetbIsParachuting_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x912, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFreefallX_CP(t_structHelper inst, float value) { inst.WriteOffset(0x914, value); }
	inline bool SetFreefallY_CP(t_structHelper inst, float value) { inst.WriteOffset(0x918, value); }
	inline bool SetFreeFallAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x91C, value); }
	inline bool bIsParachuteLanding_CP()
	{
		return boolField920& 0x1;
	}
	inline bool SetbIsParachuteLanding_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x920, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsParachuteMoving_CP()
	{
		return boolField921& 0x1;
	}
	inline bool SetbIsParachuteMoving_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x921, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFreefall_Yaw_CP(t_structHelper inst, float value) { inst.WriteOffset(0x924, value); }
	inline bool SetFreefall_Pitch_CP(t_structHelper inst, float value) { inst.WriteOffset(0x928, value); }
	inline bool bIsFreelooking_CP()
	{
		return boolField92C& 0x1;
	}
	inline bool SetbIsFreelooking_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x92C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMeleeAttacking_CP()
	{
		return boolField92D& 0x1;
	}
	inline bool SetbIsMeleeAttacking_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x92D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLocalForceRotationHipLeft_CP()
	{
		return boolField92E& 0x1;
	}
	inline bool SetbLocalForceRotationHipLeft_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x92E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLocalForceRotationHipRight_CP()
	{
		return boolField92F& 0x1;
	}
	inline bool SetbLocalForceRotationHipRight_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x92F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLocalForceRotationAimed_CP()
	{
		return boolField930& 0x1;
	}
	inline bool SetbLocalForceRotationAimed_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x930, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRotationPlayrateAimed_CP(t_structHelper inst, float value) { inst.WriteOffset(0x934, value); }
	inline bool SetRotationPlayrateAimedAdditiveSpine_CP(t_structHelper inst, float value) { inst.WriteOffset(0x938, value); }
	inline bool SetLastRotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x93C, value); }
	inline bool SetFreelook_Body_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x948, value); }
	inline bool SetFreelook_Delta_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x954, value); }
	inline bool SetIdleIndex_CP(t_structHelper inst, int32_t value) { inst.WriteOffset(0x960, value); }
	inline bool SetLastIdleIndex_CP(t_structHelper inst, int32_t value) { inst.WriteOffset(0x964, value); }
	inline bool SetIdleTimer_CP(t_structHelper inst, float value) { inst.WriteOffset(0x968, value); }
	inline bool SetIdleTriggerRandom(t_structHelper inst, float value) { inst.WriteOffset(0x96C, value); }
	inline bool SetIdleTriggerTimeMin_CP(t_structHelper inst, float value) { inst.WriteOffset(0x970, value); }
	inline bool SetIdleTriggerTimeVariation_CP(t_structHelper inst, float value) { inst.WriteOffset(0x974, value); }
	inline bool SetSlotPrimary_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0x980, value); }
	inline bool SetSlotSecondary_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0x9B0, value); }
	inline bool SetSlotMelee_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0x9E0, value); }
	inline bool SetSlotThrown_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xA10, value); }
	inline bool SetSlotPrimary_Offset_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xA40, value); }
	inline bool SetSlotSecondary_Offset_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xA4C, value); }
	inline bool SetSlotPrimary_Location_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xA58, value); }
	inline bool SetSlotSecondary_Location_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xA64, value); }
	inline bool SetSlotMelee_Location_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xA70, value); }
	inline bool SetSlotThrown_Location_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xA7C, value); }
	inline bool SetSlotPrimary_Rotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0xA88, value); }
	inline bool SetSlotSecondary_Rotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0xA94, value); }
	inline bool SetSlotMelee_Rotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0xAA0, value); }
	inline bool SetSlotThrown_Rotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0xAAC, value); }
	inline bool SetSlotPrimaryOffsetsPerWeapon(t_structHelper inst, TMap<struct UClass, struct FTransform> value) { inst.WriteOffset(0xAB8, value); }
	inline bool SetSlotSecondaryOffsetsPerWeapon(t_structHelper inst, TMap<struct UClass, struct FTransform> value) { inst.WriteOffset(0xB08, value); }
	inline bool SetAnimDynamicsStandAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB58, value); }
	inline bool SetAnimDynamicsStandSprintAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB5C, value); }
	inline bool SetAnimDynamicsCrouchAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB60, value); }
	inline bool SetAnimDynamicsProneAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB64, value); }
	inline bool SetEFCoat_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xB68, value); }
	inline bool bLocalFPP_CP()
	{
		return boolFieldB74& 0x1;
	}
	inline bool SetbLocalFPP_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB74, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLocalFPPAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB78, value); }
	inline bool SetLocalFPPAlphaVehicleAimAO_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB7C, value); }
	inline bool bIsInAircraft_CP()
	{
		return boolFieldB80& 0x1;
	}
	inline bool SetbIsInAircraft_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsDriver_CP()
	{
		return boolFieldB81& 0x1;
	}
	inline bool SetbIsDriver_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB81, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsSitting_CP()
	{
		return boolFieldB82& 0x1;
	}
	inline bool SetbIsSitting_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB82, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsInVehicle_CP()
	{
		return boolFieldB83& 0x1;
	}
	inline bool SetbIsInVehicle_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB83, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLocalSteerInput_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB84, value); }
	inline bool SetLocalSteerInputMoto_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB88, value); }
	inline bool SetLocalStopMoto_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB8C, value); }
	inline bool SetLocalThrottleInput_CP(t_structHelper inst, float value) { inst.WriteOffset(0xB90, value); }
	inline bool SetGasThighRot_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0xB94, value); }
	inline bool SetGasAnkleRot_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0xBA0, value); }
	inline bool SetGasKneeTransformX_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xBB0, value); }
	inline bool SetLocalBrakeInput_CP(t_structHelper inst, float value) { inst.WriteOffset(0xBE0, value); }
	inline bool SetBrakeKneeTransform_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xBF0, value); }
	inline bool SetBrakeAnkleRot_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0xC20, value); }
	inline bool SetBackwardAOAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xC2C, value); }
	inline bool SetAimBlendAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xC30, value); }
	inline bool bHasContact_CP()
	{
		return boolFieldC34& 0x1;
	}
	inline bool SetbHasContact_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC34, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGroundContactMoto_CP(t_structHelper inst, float value) { inst.WriteOffset(0xC38, value); }
	inline bool SetAirControlPitchInput_CP(t_structHelper inst, float value) { inst.WriteOffset(0xC3C, value); }
	inline bool SetDriverIK_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xC40, value); }
	inline bool SetPassengerIKAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xC70, value); }
	inline bool SetDriverSpineLocWS_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xC74, value); }
	inline bool SetVehicleSeatType_CP(t_structHelper inst, TEnumAsByte<enum EVehicleAnimType> value) { inst.WriteOffset(0xC80, value); }
	inline bool bMotoHasDriver_CP()
	{
		return boolFieldC81& 0x1;
	}
	inline bool SetbMotoHasDriver_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC81, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bVaultCanceled()
	{
		return boolFieldC82& 0x1;
	}
	inline bool SetbVaultCanceled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC82, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsVaulting_CP()
	{
		return boolFieldC83& 0x1;
	}
	inline bool SetbIsVaulting_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC83, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAnimHairAlpha(t_structHelper inst, float value) { inst.WriteOffset(0xC84, value); }
	inline bool SetVaultTimer_CP(t_structHelper inst, float value) { inst.WriteOffset(0xC88, value); }
	inline bool SetVaultTimerLast_CP(t_structHelper inst, float value) { inst.WriteOffset(0xC8C, value); }
	inline bool SetLocalVaultType_CP(t_structHelper inst, TEnumAsByte<enum EVaultAnimType> value) { inst.WriteOffset(0xC90, value); }
	inline bool SetVaultAnimSequence_CP(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0xC98, value); }
	inline bool SetVaultAnimLength_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCA0, value); }
	inline bool SetVaultCurve_CP(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xCA8, value); }
	inline bool SetVaultBlendInTime_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCB0, value); }
	inline bool SetVaultBlendOutTime_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCB4, value); }
	inline bool bEndVaultToFall_CP()
	{
		return boolFieldCB8& 0x1;
	}
	inline bool SetbEndVaultToFall_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCB8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVaultBlendOutProgressTime_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCBC, value); }
	inline bool SetVaultBlendOutExactTime_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCC0, value); }
	inline bool SetVaultLastActionTimer_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCC4, value); }
	inline bool SetVaultAnimTime_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCC8, value); }
	inline bool SetVaultBlendOutTimeBuffer(t_structHelper inst, float value) { inst.WriteOffset(0xCCC, value); }
	inline bool SetCurrentCastAnim_CP(t_structHelper inst, TEnumAsByte<enum ECastAnim> value) { inst.WriteOffset(0xCD0, value); }
	inline bool bIsActiveRagdoll_CP()
	{
		return boolFieldCD1& 0x1;
	}
	inline bool SetbIsActiveRagdoll_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCD1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponIKLH_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCD4, value); }
	inline bool SetWeaponIKRH_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCD8, value); }
	inline bool SetMontageIKLH_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCDC, value); }
	inline bool SetMontageIKRH_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCE0, value); }
	inline bool SetIgnoreWeaponTransform_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCE4, value); }
	inline bool SetPickupIKAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCE8, value); }
	inline bool SetTargetIKRH_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCEC, value); }
	inline bool SetTargetIKLH_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCF0, value); }
	inline bool SetForceLegsFromAnim_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCF4, value); }
	inline bool SetLastGunCache_CP(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0xCF8, value); }
	inline bool SetCachedWheeledVehicle_CP(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicle> value) { inst.WriteOffset(0xD00, value); }
	inline bool SetCachedFloatingVehicle_CP(t_structHelper inst, ExternalPtr<struct UTslFloatingVehicle> value) { inst.WriteOffset(0xD08, value); }
	inline bool SetPassengerAimBS_CP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0xD10, value); }
	inline bool SetPassengerTransitionOut_CP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0xD18, value); }
	inline bool SetPassengerTransitionIn_CP(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0xD20, value); }
	inline bool SetPassengerIdle_Rifle_CP(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0xD28, value); }
	inline bool SetPassengerIdle_Unarmed_CP(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0xD30, value); }
	inline bool SetPassengerIdle_Grenade_CP(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0xD38, value); }
	inline bool SetPassengerIdle_Melee_CP(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0xD40, value); }
	inline bool SetCurveAimState_CP(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xD48, value); }
	inline bool bIsLOD1()
	{
		return boolFieldD58& 0x1;
	}
	inline bool SetbIsLOD1(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsLOD2()
	{
		return boolFieldD59& 0x1;
	}
	inline bool SetbIsLOD2(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD59, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsWearingCoat()
	{
		return boolFieldD5A& 0x1;
	}
	inline bool SetbIsWearingCoat(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD5A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAnimatedHairsAlpha(t_structHelper inst, float value) { inst.WriteOffset(0xD64, value); }
	inline bool bIsParentalControl()
	{
		return boolFieldD68& 0x1;
	}
	inline bool SetbIsParentalControl(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMontageMeleeAttack1(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0xD70, value); }
	inline bool SetMontageMeleeAttack2(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0xD78, value); }
	inline bool SetMontageMeleeAttack3(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0xD80, value); }
	inline bool SetMontagePunchingAttack1(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0xD88, value); }
	inline bool SetMontagePunchingAttack2(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0xD90, value); }
	inline bool SetMontagePunchingAttack3(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0xD98, value); }
	inline bool SetFPPSprintAnimScalar(t_structHelper inst, float value) { inst.WriteOffset(0xDA0, value); }
	inline bool SetFPP_PrimaryAndSecondaryItemOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0xDA4, value); }
	inline bool SetPunchingAlphaOneTarget_CP(t_structHelper inst, float value) { inst.WriteOffset(0xDB0, value); }
	inline bool SetPunchingAlphaInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xDB4, value); }
	inline bool SetSprintWeaponLoweringScalar_CP(t_structHelper inst, float value) { inst.WriteOffset(0xDB8, value); }
	inline bool SetThrowStateSwitchInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xDBC, value); }
	inline bool SetVaultingEvalTimeout(t_structHelper inst, float value) { inst.WriteOffset(0xDC0, value); }
	inline bool SetUnarmedAnimDB_CP(t_structHelper inst, ExternalPtr<struct UAnimDB> value) { inst.WriteOffset(0xDC8, value); }
	inline bool SetRifleAnimDB_CP(t_structHelper inst, ExternalPtr<struct UAnimDB> value) { inst.WriteOffset(0xDD0, value); }
	inline bool SetMeleeAnimDB_CP(t_structHelper inst, ExternalPtr<struct UAnimDB> value) { inst.WriteOffset(0xDD8, value); }
	inline bool SetGrenadeAnimDB_CP(t_structHelper inst, ExternalPtr<struct UAnimDB> value) { inst.WriteOffset(0xDE0, value); }
	inline bool SetDefaultSlotPrimary_Male_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xDF0, value); }
	inline bool SetDefaultSlotSecondary_Male_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xE20, value); }
	inline bool SetDefaultSlotMelee_Male_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xE50, value); }
	inline bool SetDefaultSlotThrown_Male_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xE80, value); }
	inline bool SetDefaultSlotPrimary_Female_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xEB0, value); }
	inline bool SetDefaultSlotSecondary_Female_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xEE0, value); }
	inline bool SetDefaultSlotThrown_Female_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xF10, value); }
	inline bool SetDefaultSlotMelee_Female_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0xF40, value); }
	inline bool SetSprintLocoTimeMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xF70, value); }
	inline bool SetSprintLocoTimeMultiplier_FPP(t_structHelper inst, float value) { inst.WriteOffset(0xF74, value); }
	inline bool SetSprintLocoTimeAlphaScalar(t_structHelper inst, float value) { inst.WriteOffset(0xF78, value); }
	inline bool SetSprintLocoTimeAlphaScalar_FPP(t_structHelper inst, float value) { inst.WriteOffset(0xF7C, value); }
	inline bool SetSprintLocoInstantScalar(t_structHelper inst, float value) { inst.WriteOffset(0xF80, value); }
	inline bool SetLocomotionDirectionInterp(t_structHelper inst, float value) { inst.WriteOffset(0xF84, value); }
	inline bool SetLeanYawInterpSpeedMin(t_structHelper inst, float value) { inst.WriteOffset(0xF88, value); }
	inline bool SetLeanYawInterpSpeedMax(t_structHelper inst, float value) { inst.WriteOffset(0xF8C, value); }
	inline bool SetLeanYawGlobalMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xF90, value); }
	inline bool SetLeanYawClamp(t_structHelper inst, float value) { inst.WriteOffset(0xF94, value); }
	inline bool SetSprintLocoStandLimit_High(t_structHelper inst, float value) { inst.WriteOffset(0xF98, value); }
	inline bool SetSprintLocoCrouchLimit_High(t_structHelper inst, float value) { inst.WriteOffset(0xF9C, value); }
	inline bool SetSprintLocoProneLimit_High(t_structHelper inst, float value) { inst.WriteOffset(0xFA0, value); }
	inline bool SetSprintLocoStandLimit_Low(t_structHelper inst, float value) { inst.WriteOffset(0xFA4, value); }
	inline bool SetSprintLocoCrouchLimit_Low(t_structHelper inst, float value) { inst.WriteOffset(0xFA8, value); }
	inline bool SetSprintLocoProneLimit_Low(t_structHelper inst, float value) { inst.WriteOffset(0xFAC, value); }
	inline bool SetSprintLocoLimitInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xFB0, value); }
	inline bool SetFlarePitchActivationLimit_Stand(t_structHelper inst, float value) { inst.WriteOffset(0xFB4, value); }
	inline bool SetFlarePitchActivationLimit_Prone(t_structHelper inst, float value) { inst.WriteOffset(0xFB8, value); }
	inline bool SetFlareReadyInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xFBC, value); }
	inline bool SetRightClavicleCompensation(t_structHelper inst, FRotator value) { inst.WriteOffset(0xFC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAnimInstance = sizeof(UTslAnimInstance); // 4048
    static_assert(sizeof(UTslAnimInstance) == 0xFD0, "Size of UTslAnimInstance is not correct.");
	auto constexpr UTslAnimInstance_WeaponFire_Offset = offsetof(UTslAnimInstance, WeaponFire);
	static_assert(UTslAnimInstance_WeaponFire_Offset == 0x380, "UTslAnimInstance::WeaponFire offset is not 380");
	auto constexpr UTslAnimInstance_WeaponFireCycle_Offset = offsetof(UTslAnimInstance, WeaponFireCycle);
	static_assert(UTslAnimInstance_WeaponFireCycle_Offset == 0x390, "UTslAnimInstance::WeaponFireCycle offset is not 390");
	auto constexpr UTslAnimInstance_EquipPrimary_Offset = offsetof(UTslAnimInstance, EquipPrimary);
	static_assert(UTslAnimInstance_EquipPrimary_Offset == 0x3a0, "UTslAnimInstance::EquipPrimary offset is not 3a0");
	auto constexpr UTslAnimInstance_EquipSecondary_Offset = offsetof(UTslAnimInstance, EquipSecondary);
	static_assert(UTslAnimInstance_EquipSecondary_Offset == 0x3b0, "UTslAnimInstance::EquipSecondary offset is not 3b0");
	auto constexpr UTslAnimInstance_EqupiSidearm_Offset = offsetof(UTslAnimInstance, EqupiSidearm);
	static_assert(UTslAnimInstance_EqupiSidearm_Offset == 0x3c0, "UTslAnimInstance::EqupiSidearm offset is not 3c0");
	auto constexpr UTslAnimInstance_EquipMelee_Offset = offsetof(UTslAnimInstance, EquipMelee);
	static_assert(UTslAnimInstance_EquipMelee_Offset == 0x3d0, "UTslAnimInstance::EquipMelee offset is not 3d0");
	auto constexpr UTslAnimInstance_EquipThrown_Offset = offsetof(UTslAnimInstance, EquipThrown);
	static_assert(UTslAnimInstance_EquipThrown_Offset == 0x3e0, "UTslAnimInstance::EquipThrown offset is not 3e0");
	auto constexpr UTslAnimInstance_UnEquipPrimary_Offset = offsetof(UTslAnimInstance, UnEquipPrimary);
	static_assert(UTslAnimInstance_UnEquipPrimary_Offset == 0x3f0, "UTslAnimInstance::UnEquipPrimary offset is not 3f0");
	auto constexpr UTslAnimInstance_UnEquipSecondary_Offset = offsetof(UTslAnimInstance, UnEquipSecondary);
	static_assert(UTslAnimInstance_UnEquipSecondary_Offset == 0x400, "UTslAnimInstance::UnEquipSecondary offset is not 400");
	auto constexpr UTslAnimInstance_UnEqupiSidearm_Offset = offsetof(UTslAnimInstance, UnEqupiSidearm);
	static_assert(UTslAnimInstance_UnEqupiSidearm_Offset == 0x410, "UTslAnimInstance::UnEqupiSidearm offset is not 410");
	auto constexpr UTslAnimInstance_UnEquipMelee_Offset = offsetof(UTslAnimInstance, UnEquipMelee);
	static_assert(UTslAnimInstance_UnEquipMelee_Offset == 0x420, "UTslAnimInstance::UnEquipMelee offset is not 420");
	auto constexpr UTslAnimInstance_UnEquipThrown_Offset = offsetof(UTslAnimInstance, UnEquipThrown);
	static_assert(UTslAnimInstance_UnEquipThrown_Offset == 0x430, "UTslAnimInstance::UnEquipThrown offset is not 430");
	auto constexpr UTslAnimInstance_ToggleFireMode_Offset = offsetof(UTslAnimInstance, ToggleFireMode);
	static_assert(UTslAnimInstance_ToggleFireMode_Offset == 0x440, "UTslAnimInstance::ToggleFireMode offset is not 440");
	auto constexpr UTslAnimInstance_ReloadTactical_Offset = offsetof(UTslAnimInstance, ReloadTactical);
	static_assert(UTslAnimInstance_ReloadTactical_Offset == 0x450, "UTslAnimInstance::ReloadTactical offset is not 450");
	auto constexpr UTslAnimInstance_ReloadCharge_Offset = offsetof(UTslAnimInstance, ReloadCharge);
	static_assert(UTslAnimInstance_ReloadCharge_Offset == 0x460, "UTslAnimInstance::ReloadCharge offset is not 460");
	auto constexpr UTslAnimInstance_ReloadByOneStart_Offset = offsetof(UTslAnimInstance, ReloadByOneStart);
	static_assert(UTslAnimInstance_ReloadByOneStart_Offset == 0x470, "UTslAnimInstance::ReloadByOneStart offset is not 470");
	auto constexpr UTslAnimInstance_ReloadByOneStop_Offset = offsetof(UTslAnimInstance, ReloadByOneStop);
	static_assert(UTslAnimInstance_ReloadByOneStop_Offset == 0x480, "UTslAnimInstance::ReloadByOneStop offset is not 480");
	auto constexpr UTslAnimInstance_ReloadByOneSingle_Offset = offsetof(UTslAnimInstance, ReloadByOneSingle);
	static_assert(UTslAnimInstance_ReloadByOneSingle_Offset == 0x490, "UTslAnimInstance::ReloadByOneSingle offset is not 490");
	auto constexpr UTslAnimInstance_EquipThrownGrenade_Offset = offsetof(UTslAnimInstance, EquipThrownGrenade);
	static_assert(UTslAnimInstance_EquipThrownGrenade_Offset == 0x4a0, "UTslAnimInstance::EquipThrownGrenade offset is not 4a0");
	auto constexpr UTslAnimInstance_EquipThrownMolotov_Offset = offsetof(UTslAnimInstance, EquipThrownMolotov);
	static_assert(UTslAnimInstance_EquipThrownMolotov_Offset == 0x4b0, "UTslAnimInstance::EquipThrownMolotov offset is not 4b0");
	auto constexpr UTslAnimInstance_EquipThrownOther_Offset = offsetof(UTslAnimInstance, EquipThrownOther);
	static_assert(UTslAnimInstance_EquipThrownOther_Offset == 0x4c0, "UTslAnimInstance::EquipThrownOther offset is not 4c0");
	auto constexpr UTslAnimInstance_ThrowPrepare_Offset = offsetof(UTslAnimInstance, ThrowPrepare);
	static_assert(UTslAnimInstance_ThrowPrepare_Offset == 0x4d0, "UTslAnimInstance::ThrowPrepare offset is not 4d0");
	auto constexpr UTslAnimInstance_ThrowCooking_Offset = offsetof(UTslAnimInstance, ThrowCooking);
	static_assert(UTslAnimInstance_ThrowCooking_Offset == 0x4e0, "UTslAnimInstance::ThrowCooking offset is not 4e0");
	auto constexpr UTslAnimInstance_ThrowStart_Offset = offsetof(UTslAnimInstance, ThrowStart);
	static_assert(UTslAnimInstance_ThrowStart_Offset == 0x4f0, "UTslAnimInstance::ThrowStart offset is not 4f0");
	auto constexpr UTslAnimInstance_ThrowDrop_Offset = offsetof(UTslAnimInstance, ThrowDrop);
	static_assert(UTslAnimInstance_ThrowDrop_Offset == 0x500, "UTslAnimInstance::ThrowDrop offset is not 500");
	auto constexpr UTslAnimInstance_LandHeavy_Offset = offsetof(UTslAnimInstance, LandHeavy);
	static_assert(UTslAnimInstance_LandHeavy_Offset == 0x510, "UTslAnimInstance::LandHeavy offset is not 510");
	auto constexpr UTslAnimInstance_LandExtreme_Offset = offsetof(UTslAnimInstance, LandExtreme);
	static_assert(UTslAnimInstance_LandExtreme_Offset == 0x520, "UTslAnimInstance::LandExtreme offset is not 520");
	auto constexpr UTslAnimInstance_ReloadCancel_Offset = offsetof(UTslAnimInstance, ReloadCancel);
	static_assert(UTslAnimInstance_ReloadCancel_Offset == 0x530, "UTslAnimInstance::ReloadCancel offset is not 530");
	auto constexpr UTslAnimInstance_CharacterPickup_Offset = offsetof(UTslAnimInstance, CharacterPickup);
	static_assert(UTslAnimInstance_CharacterPickup_Offset == 0x540, "UTslAnimInstance::CharacterPickup offset is not 540");
	auto constexpr UTslAnimInstance_UnarmedAttack_Offset = offsetof(UTslAnimInstance, UnarmedAttack);
	static_assert(UTslAnimInstance_UnarmedAttack_Offset == 0x550, "UTslAnimInstance::UnarmedAttack offset is not 550");
	auto constexpr UTslAnimInstance_PowerupUsed_Offset = offsetof(UTslAnimInstance, PowerupUsed);
	static_assert(UTslAnimInstance_PowerupUsed_Offset == 0x560, "UTslAnimInstance::PowerupUsed offset is not 560");
	auto constexpr UTslAnimInstance_ChangeCharacterAppearance_Offset = offsetof(UTslAnimInstance, ChangeCharacterAppearance);
	static_assert(UTslAnimInstance_ChangeCharacterAppearance_Offset == 0x570, "UTslAnimInstance::ChangeCharacterAppearance offset is not 570");
	auto constexpr UTslAnimInstance_OnCastStart_Offset = offsetof(UTslAnimInstance, OnCastStart);
	static_assert(UTslAnimInstance_OnCastStart_Offset == 0x580, "UTslAnimInstance::OnCastStart offset is not 580");
	auto constexpr UTslAnimInstance_OnCastCancel_Offset = offsetof(UTslAnimInstance, OnCastCancel);
	static_assert(UTslAnimInstance_OnCastCancel_Offset == 0x590, "UTslAnimInstance::OnCastCancel offset is not 590");
	auto constexpr UTslAnimInstance_OnCastFinish_Offset = offsetof(UTslAnimInstance, OnCastFinish);
	static_assert(UTslAnimInstance_OnCastFinish_Offset == 0x5a0, "UTslAnimInstance::OnCastFinish offset is not 5a0");
	auto constexpr UTslAnimInstance_OnEmotePlay_Offset = offsetof(UTslAnimInstance, OnEmotePlay);
	static_assert(UTslAnimInstance_OnEmotePlay_Offset == 0x5b0, "UTslAnimInstance::OnEmotePlay offset is not 5b0");
	auto constexpr UTslAnimInstance_OnEmotePlayRNG_Offset = offsetof(UTslAnimInstance, OnEmotePlayRNG);
	static_assert(UTslAnimInstance_OnEmotePlayRNG_Offset == 0x5c0, "UTslAnimInstance::OnEmotePlayRNG offset is not 5c0");
	auto constexpr UTslAnimInstance_OnEmoteStop_Offset = offsetof(UTslAnimInstance, OnEmoteStop);
	static_assert(UTslAnimInstance_OnEmoteStop_Offset == 0x5d0, "UTslAnimInstance::OnEmoteStop offset is not 5d0");
	auto constexpr UTslAnimInstance_OnNegativeEffectApplied_Offset = offsetof(UTslAnimInstance, OnNegativeEffectApplied);
	static_assert(UTslAnimInstance_OnNegativeEffectApplied_Offset == 0x5e0, "UTslAnimInstance::OnNegativeEffectApplied offset is not 5e0");
	auto constexpr UTslAnimInstance_OnNegativeEffectRemoved_Offset = offsetof(UTslAnimInstance, OnNegativeEffectRemoved);
	static_assert(UTslAnimInstance_OnNegativeEffectRemoved_Offset == 0x5f0, "UTslAnimInstance::OnNegativeEffectRemoved offset is not 5f0");
	auto constexpr UTslAnimInstance_CharacterReference_Offset = offsetof(UTslAnimInstance, CharacterReference);
	static_assert(UTslAnimInstance_CharacterReference_Offset == 0x608, "UTslAnimInstance::CharacterReference offset is not 608");
	auto constexpr UTslAnimInstance_CharacterMesh_CP_Offset = offsetof(UTslAnimInstance, CharacterMesh_CP);
	static_assert(UTslAnimInstance_CharacterMesh_CP_Offset == 0x610, "UTslAnimInstance::CharacterMesh_CP offset is not 610");
	auto constexpr UTslAnimInstance_PreEvalPawnState_Offset = offsetof(UTslAnimInstance, PreEvalPawnState);
	static_assert(UTslAnimInstance_PreEvalPawnState_Offset == 0x618, "UTslAnimInstance::PreEvalPawnState offset is not 618");
	auto constexpr UTslAnimInstance_LocomotionSpeed_CP_Offset = offsetof(UTslAnimInstance, LocomotionSpeed_CP);
	static_assert(UTslAnimInstance_LocomotionSpeed_CP_Offset == 0x61c, "UTslAnimInstance::LocomotionSpeed_CP offset is not 61c");
	auto constexpr UTslAnimInstance_LocomotionSpeed2D_CP_Offset = offsetof(UTslAnimInstance, LocomotionSpeed2D_CP);
	static_assert(UTslAnimInstance_LocomotionSpeed2D_CP_Offset == 0x620, "UTslAnimInstance::LocomotionSpeed2D_CP offset is not 620");
	auto constexpr UTslAnimInstance_boolField624_Offset = offsetof(UTslAnimInstance, boolField624);
	static_assert(UTslAnimInstance_boolField624_Offset == 0x624, "UTslAnimInstance::boolField624 offset is not 624");
	auto constexpr UTslAnimInstance_LocomotionDirection_CP_Offset = offsetof(UTslAnimInstance, LocomotionDirection_CP);
	static_assert(UTslAnimInstance_LocomotionDirection_CP_Offset == 0x628, "UTslAnimInstance::LocomotionDirection_CP offset is not 628");
	auto constexpr UTslAnimInstance_LocomotionDirectionClamped_CP_Offset = offsetof(UTslAnimInstance, LocomotionDirectionClamped_CP);
	static_assert(UTslAnimInstance_LocomotionDirectionClamped_CP_Offset == 0x62c, "UTslAnimInstance::LocomotionDirectionClamped_CP offset is not 62c");
	auto constexpr UTslAnimInstance_LocomotionJumpDirection_CP_Offset = offsetof(UTslAnimInstance, LocomotionJumpDirection_CP);
	static_assert(UTslAnimInstance_LocomotionJumpDirection_CP_Offset == 0x630, "UTslAnimInstance::LocomotionJumpDirection_CP offset is not 630");
	auto constexpr UTslAnimInstance_LeanYaw_CP_Offset = offsetof(UTslAnimInstance, LeanYaw_CP);
	static_assert(UTslAnimInstance_LeanYaw_CP_Offset == 0x634, "UTslAnimInstance::LeanYaw_CP offset is not 634");
	auto constexpr UTslAnimInstance_LastAbsoluteDirection_CP_Offset = offsetof(UTslAnimInstance, LastAbsoluteDirection_CP);
	static_assert(UTslAnimInstance_LastAbsoluteDirection_CP_Offset == 0x638, "UTslAnimInstance::LastAbsoluteDirection_CP offset is not 638");
	auto constexpr UTslAnimInstance_ControlRotation_CP_Offset = offsetof(UTslAnimInstance, ControlRotation_CP);
	static_assert(UTslAnimInstance_ControlRotation_CP_Offset == 0x644, "UTslAnimInstance::ControlRotation_CP offset is not 644");
	auto constexpr UTslAnimInstance_ControlRotationLastMovement_CP_Offset = offsetof(UTslAnimInstance, ControlRotationLastMovement_CP);
	static_assert(UTslAnimInstance_ControlRotationLastMovement_CP_Offset == 0x650, "UTslAnimInstance::ControlRotationLastMovement_CP offset is not 650");
	auto constexpr UTslAnimInstance_CharacterRotation_CP_Offset = offsetof(UTslAnimInstance, CharacterRotation_CP);
	static_assert(UTslAnimInstance_CharacterRotation_CP_Offset == 0x65c, "UTslAnimInstance::CharacterRotation_CP offset is not 65c");
	auto constexpr UTslAnimInstance_Stance_CP_Offset = offsetof(UTslAnimInstance, Stance_CP);
	static_assert(UTslAnimInstance_Stance_CP_Offset == 0x668, "UTslAnimInstance::Stance_CP offset is not 668");
	auto constexpr UTslAnimInstance_boolField669_Offset = offsetof(UTslAnimInstance, boolField669);
	static_assert(UTslAnimInstance_boolField669_Offset == 0x669, "UTslAnimInstance::boolField669 offset is not 669");
	auto constexpr UTslAnimInstance_boolField66A_Offset = offsetof(UTslAnimInstance, boolField66A);
	static_assert(UTslAnimInstance_boolField66A_Offset == 0x66a, "UTslAnimInstance::boolField66A offset is not 66a");
	auto constexpr UTslAnimInstance_WeaponGripType_CP_Offset = offsetof(UTslAnimInstance, WeaponGripType_CP);
	static_assert(UTslAnimInstance_WeaponGripType_CP_Offset == 0x66c, "UTslAnimInstance::WeaponGripType_CP offset is not 66c");
	auto constexpr UTslAnimInstance_SprintAlpha_CP_Offset = offsetof(UTslAnimInstance, SprintAlpha_CP);
	static_assert(UTslAnimInstance_SprintAlpha_CP_Offset == 0x670, "UTslAnimInstance::SprintAlpha_CP offset is not 670");
	auto constexpr UTslAnimInstance_SprintLocoAlpha_CP_Offset = offsetof(UTslAnimInstance, SprintLocoAlpha_CP);
	static_assert(UTslAnimInstance_SprintLocoAlpha_CP_Offset == 0x674, "UTslAnimInstance::SprintLocoAlpha_CP offset is not 674");
	auto constexpr UTslAnimInstance_SprintAlphaPitchComponent_CP_Offset = offsetof(UTslAnimInstance, SprintAlphaPitchComponent_CP);
	static_assert(UTslAnimInstance_SprintAlphaPitchComponent_CP_Offset == 0x678, "UTslAnimInstance::SprintAlphaPitchComponent_CP offset is not 678");
	auto constexpr UTslAnimInstance_SprintAlphaSprintLimit_High_Offset = offsetof(UTslAnimInstance, SprintAlphaSprintLimit_High);
	static_assert(UTslAnimInstance_SprintAlphaSprintLimit_High_Offset == 0x67c, "UTslAnimInstance::SprintAlphaSprintLimit_High offset is not 67c");
	auto constexpr UTslAnimInstance_SprintAlphaSprintLimit_Low_Offset = offsetof(UTslAnimInstance, SprintAlphaSprintLimit_Low);
	static_assert(UTslAnimInstance_SprintAlphaSprintLimit_Low_Offset == 0x680, "UTslAnimInstance::SprintAlphaSprintLimit_Low offset is not 680");
	auto constexpr UTslAnimInstance_SprintValue_CP_Offset = offsetof(UTslAnimInstance, SprintValue_CP);
	static_assert(UTslAnimInstance_SprintValue_CP_Offset == 0x684, "UTslAnimInstance::SprintValue_CP offset is not 684");
	auto constexpr UTslAnimInstance_boolField688_Offset = offsetof(UTslAnimInstance, boolField688);
	static_assert(UTslAnimInstance_boolField688_Offset == 0x688, "UTslAnimInstance::boolField688 offset is not 688");
	auto constexpr UTslAnimInstance_LocalThrowModeSwitchAlpha_CP_Offset = offsetof(UTslAnimInstance, LocalThrowModeSwitchAlpha_CP);
	static_assert(UTslAnimInstance_LocalThrowModeSwitchAlpha_CP_Offset == 0x68c, "UTslAnimInstance::LocalThrowModeSwitchAlpha_CP offset is not 68c");
	auto constexpr UTslAnimInstance_boolField690_Offset = offsetof(UTslAnimInstance, boolField690);
	static_assert(UTslAnimInstance_boolField690_Offset == 0x690, "UTslAnimInstance::boolField690 offset is not 690");
	auto constexpr UTslAnimInstance_boolField691_Offset = offsetof(UTslAnimInstance, boolField691);
	static_assert(UTslAnimInstance_boolField691_Offset == 0x691, "UTslAnimInstance::boolField691 offset is not 691");
	auto constexpr UTslAnimInstance_boolField692_Offset = offsetof(UTslAnimInstance, boolField692);
	static_assert(UTslAnimInstance_boolField692_Offset == 0x692, "UTslAnimInstance::boolField692 offset is not 692");
	auto constexpr UTslAnimInstance_boolField693_Offset = offsetof(UTslAnimInstance, boolField693);
	static_assert(UTslAnimInstance_boolField693_Offset == 0x693, "UTslAnimInstance::boolField693 offset is not 693");
	auto constexpr UTslAnimInstance_boolField694_Offset = offsetof(UTslAnimInstance, boolField694);
	static_assert(UTslAnimInstance_boolField694_Offset == 0x694, "UTslAnimInstance::boolField694 offset is not 694");
	auto constexpr UTslAnimInstance_DBNOEntryStance_Offset = offsetof(UTslAnimInstance, DBNOEntryStance);
	static_assert(UTslAnimInstance_DBNOEntryStance_Offset == 0x695, "UTslAnimInstance::DBNOEntryStance offset is not 695");
	auto constexpr UTslAnimInstance_boolField696_Offset = offsetof(UTslAnimInstance, boolField696);
	static_assert(UTslAnimInstance_boolField696_Offset == 0x696, "UTslAnimInstance::boolField696 offset is not 696");
	auto constexpr UTslAnimInstance_boolField697_Offset = offsetof(UTslAnimInstance, boolField697);
	static_assert(UTslAnimInstance_boolField697_Offset == 0x697, "UTslAnimInstance::boolField697 offset is not 697");
	auto constexpr UTslAnimInstance_boolField698_Offset = offsetof(UTslAnimInstance, boolField698);
	static_assert(UTslAnimInstance_boolField698_Offset == 0x698, "UTslAnimInstance::boolField698 offset is not 698");
	auto constexpr UTslAnimInstance_PlayerID_CP_Offset = offsetof(UTslAnimInstance, PlayerID_CP);
	static_assert(UTslAnimInstance_PlayerID_CP_Offset == 0x69c, "UTslAnimInstance::PlayerID_CP offset is not 69c");
	auto constexpr UTslAnimInstance_AirCraftIDAnim_CP_Offset = offsetof(UTslAnimInstance, AirCraftIDAnim_CP);
	static_assert(UTslAnimInstance_AirCraftIDAnim_CP_Offset == 0x6a0, "UTslAnimInstance::AirCraftIDAnim_CP offset is not 6a0");
	auto constexpr UTslAnimInstance_boolField6A4_Offset = offsetof(UTslAnimInstance, boolField6A4);
	static_assert(UTslAnimInstance_boolField6A4_Offset == 0x6a4, "UTslAnimInstance::boolField6A4 offset is not 6a4");
	auto constexpr UTslAnimInstance_PistolEquipMontageRefCP_Offset = offsetof(UTslAnimInstance, PistolEquipMontageRefCP);
	static_assert(UTslAnimInstance_PistolEquipMontageRefCP_Offset == 0x6a8, "UTslAnimInstance::PistolEquipMontageRefCP offset is not 6a8");
	auto constexpr UTslAnimInstance_boolField6B0_Offset = offsetof(UTslAnimInstance, boolField6B0);
	static_assert(UTslAnimInstance_boolField6B0_Offset == 0x6b0, "UTslAnimInstance::boolField6B0 offset is not 6b0");
	auto constexpr UTslAnimInstance_boolField6B1_Offset = offsetof(UTslAnimInstance, boolField6B1);
	static_assert(UTslAnimInstance_boolField6B1_Offset == 0x6b1, "UTslAnimInstance::boolField6B1 offset is not 6b1");
	auto constexpr UTslAnimInstance_LocalPlayerAlpha_Offset = offsetof(UTslAnimInstance, LocalPlayerAlpha);
	static_assert(UTslAnimInstance_LocalPlayerAlpha_Offset == 0x6b4, "UTslAnimInstance::LocalPlayerAlpha offset is not 6b4");
	auto constexpr UTslAnimInstance_boolField6B8_Offset = offsetof(UTslAnimInstance, boolField6B8);
	static_assert(UTslAnimInstance_boolField6B8_Offset == 0x6b8, "UTslAnimInstance::boolField6B8 offset is not 6b8");
	auto constexpr UTslAnimInstance_boolField6B9_Offset = offsetof(UTslAnimInstance, boolField6B9);
	static_assert(UTslAnimInstance_boolField6B9_Offset == 0x6b9, "UTslAnimInstance::boolField6B9 offset is not 6b9");
	auto constexpr UTslAnimInstance_boolField6BA_Offset = offsetof(UTslAnimInstance, boolField6BA);
	static_assert(UTslAnimInstance_boolField6BA_Offset == 0x6ba, "UTslAnimInstance::boolField6BA offset is not 6ba");
	auto constexpr UTslAnimInstance_boolField6BB_Offset = offsetof(UTslAnimInstance, boolField6BB);
	static_assert(UTslAnimInstance_boolField6BB_Offset == 0x6bb, "UTslAnimInstance::boolField6BB offset is not 6bb");
	auto constexpr UTslAnimInstance_boolField6BC_Offset = offsetof(UTslAnimInstance, boolField6BC);
	static_assert(UTslAnimInstance_boolField6BC_Offset == 0x6bc, "UTslAnimInstance::boolField6BC offset is not 6bc");
	auto constexpr UTslAnimInstance_PunchingAlpha_CP_Offset = offsetof(UTslAnimInstance, PunchingAlpha_CP);
	static_assert(UTslAnimInstance_PunchingAlpha_CP_Offset == 0x6c0, "UTslAnimInstance::PunchingAlpha_CP offset is not 6c0");
	auto constexpr UTslAnimInstance_Weapon_CP_Offset = offsetof(UTslAnimInstance, Weapon_CP);
	static_assert(UTslAnimInstance_Weapon_CP_Offset == 0x6c4, "UTslAnimInstance::Weapon_CP offset is not 6c4");
	auto constexpr UTslAnimInstance_boolField6C5_Offset = offsetof(UTslAnimInstance, boolField6C5);
	static_assert(UTslAnimInstance_boolField6C5_Offset == 0x6c5, "UTslAnimInstance::boolField6C5 offset is not 6c5");
	auto constexpr UTslAnimInstance_boolField6C6_Offset = offsetof(UTslAnimInstance, boolField6C6);
	static_assert(UTslAnimInstance_boolField6C6_Offset == 0x6c6, "UTslAnimInstance::boolField6C6 offset is not 6c6");
	auto constexpr UTslAnimInstance_boolField6C7_Offset = offsetof(UTslAnimInstance, boolField6C7);
	static_assert(UTslAnimInstance_boolField6C7_Offset == 0x6c7, "UTslAnimInstance::boolField6C7 offset is not 6c7");
	auto constexpr UTslAnimInstance_ThrowableAdditionalAimYaw_CP_Offset = offsetof(UTslAnimInstance, ThrowableAdditionalAimYaw_CP);
	static_assert(UTslAnimInstance_ThrowableAdditionalAimYaw_CP_Offset == 0x6c8, "UTslAnimInstance::ThrowableAdditionalAimYaw_CP offset is not 6c8");
	auto constexpr UTslAnimInstance_CurrentRecoilMontage_CP_Offset = offsetof(UTslAnimInstance, CurrentRecoilMontage_CP);
	static_assert(UTslAnimInstance_CurrentRecoilMontage_CP_Offset == 0x6d0, "UTslAnimInstance::CurrentRecoilMontage_CP offset is not 6d0");
	auto constexpr UTslAnimInstance_GripBlendSpace_CP_Offset = offsetof(UTslAnimInstance, GripBlendSpace_CP);
	static_assert(UTslAnimInstance_GripBlendSpace_CP_Offset == 0x6d8, "UTslAnimInstance::GripBlendSpace_CP offset is not 6d8");
	auto constexpr UTslAnimInstance_GripBlendSpaceLH_CP_Offset = offsetof(UTslAnimInstance, GripBlendSpaceLH_CP);
	static_assert(UTslAnimInstance_GripBlendSpaceLH_CP_Offset == 0x6e0, "UTslAnimInstance::GripBlendSpaceLH_CP offset is not 6e0");
	auto constexpr UTslAnimInstance_LHGripIndex_CP_Offset = offsetof(UTslAnimInstance, LHGripIndex_CP);
	static_assert(UTslAnimInstance_LHGripIndex_CP_Offset == 0x6e8, "UTslAnimInstance::LHGripIndex_CP offset is not 6e8");
	auto constexpr UTslAnimInstance_boolField6EC_Offset = offsetof(UTslAnimInstance, boolField6EC);
	static_assert(UTslAnimInstance_boolField6EC_Offset == 0x6ec, "UTslAnimInstance::boolField6EC offset is not 6ec");
	auto constexpr UTslAnimInstance_HandWeaponOffset_CP_Offset = offsetof(UTslAnimInstance, HandWeaponOffset_CP);
	static_assert(UTslAnimInstance_HandWeaponOffset_CP_Offset == 0x6f0, "UTslAnimInstance::HandWeaponOffset_CP offset is not 6f0");
	auto constexpr UTslAnimInstance_HandWeaponOffsetTarget_Offset = offsetof(UTslAnimInstance, HandWeaponOffsetTarget);
	static_assert(UTslAnimInstance_HandWeaponOffsetTarget_Offset == 0x6fc, "UTslAnimInstance::HandWeaponOffsetTarget offset is not 6fc");
	auto constexpr UTslAnimInstance_WeaponInertia_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_CP);
	static_assert(UTslAnimInstance_WeaponInertia_CP_Offset == 0x710, "UTslAnimInstance::WeaponInertia_CP offset is not 710");
	auto constexpr UTslAnimInstance_ReloadAlpha_CP_Offset = offsetof(UTslAnimInstance, ReloadAlpha_CP);
	static_assert(UTslAnimInstance_ReloadAlpha_CP_Offset == 0x740, "UTslAnimInstance::ReloadAlpha_CP offset is not 740");
	auto constexpr UTslAnimInstance_HandWeaponOffsetAlpha_CP_Offset = offsetof(UTslAnimInstance, HandWeaponOffsetAlpha_CP);
	static_assert(UTslAnimInstance_HandWeaponOffsetAlpha_CP_Offset == 0x744, "UTslAnimInstance::HandWeaponOffsetAlpha_CP offset is not 744");
	auto constexpr UTslAnimInstance_RightClavicleRotation_CP_Offset = offsetof(UTslAnimInstance, RightClavicleRotation_CP);
	static_assert(UTslAnimInstance_RightClavicleRotation_CP_Offset == 0x748, "UTslAnimInstance::RightClavicleRotation_CP offset is not 748");
	auto constexpr UTslAnimInstance_FinalRecoilAlpha_CP_Offset = offsetof(UTslAnimInstance, FinalRecoilAlpha_CP);
	static_assert(UTslAnimInstance_FinalRecoilAlpha_CP_Offset == 0x754, "UTslAnimInstance::FinalRecoilAlpha_CP offset is not 754");
	auto constexpr UTslAnimInstance_ADSSocketByFOV_CP_Offset = offsetof(UTslAnimInstance, ADSSocketByFOV_CP);
	static_assert(UTslAnimInstance_ADSSocketByFOV_CP_Offset == 0x758, "UTslAnimInstance::ADSSocketByFOV_CP offset is not 758");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_CP_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_CP);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_CP_Offset == 0x760, "UTslAnimInstance::WeaponLocomotionBlendspace_CP offset is not 760");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_Pistol_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_Pistol);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_Pistol_Offset == 0x768, "UTslAnimInstance::WeaponLocomotionBlendspace_Pistol offset is not 768");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_SMG_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_SMG);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_SMG_Offset == 0x770, "UTslAnimInstance::WeaponLocomotionBlendspace_SMG offset is not 770");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_Rifle_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_Rifle);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_Rifle_Offset == 0x778, "UTslAnimInstance::WeaponLocomotionBlendspace_Rifle offset is not 778");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_Sniper_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_Sniper);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_Sniper_Offset == 0x780, "UTslAnimInstance::WeaponLocomotionBlendspace_Sniper offset is not 780");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_Pistol_FPP_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_Pistol_FPP);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_Pistol_FPP_Offset == 0x788, "UTslAnimInstance::WeaponLocomotionBlendspace_Pistol_FPP offset is not 788");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_SMG_FPP_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_SMG_FPP);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_SMG_FPP_Offset == 0x790, "UTslAnimInstance::WeaponLocomotionBlendspace_SMG_FPP offset is not 790");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_Rifle_FPP_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_Rifle_FPP);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_Rifle_FPP_Offset == 0x798, "UTslAnimInstance::WeaponLocomotionBlendspace_Rifle_FPP offset is not 798");
	auto constexpr UTslAnimInstance_WeaponLocomotionBlendspace_Sniper_FPP_Offset = offsetof(UTslAnimInstance, WeaponLocomotionBlendspace_Sniper_FPP);
	static_assert(UTslAnimInstance_WeaponLocomotionBlendspace_Sniper_FPP_Offset == 0x7a0, "UTslAnimInstance::WeaponLocomotionBlendspace_Sniper_FPP offset is not 7a0");
	auto constexpr UTslAnimInstance_WeaponInertiaX_Scalar_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaX_Scalar_CP);
	static_assert(UTslAnimInstance_WeaponInertiaX_Scalar_CP_Offset == 0x7a8, "UTslAnimInstance::WeaponInertiaX_Scalar_CP offset is not 7a8");
	auto constexpr UTslAnimInstance_WeaponInertiaY_Scalar_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaY_Scalar_CP);
	static_assert(UTslAnimInstance_WeaponInertiaY_Scalar_CP_Offset == 0x7ac, "UTslAnimInstance::WeaponInertiaY_Scalar_CP offset is not 7ac");
	auto constexpr UTslAnimInstance_WeaponInertiaX_Clamp_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaX_Clamp_CP);
	static_assert(UTslAnimInstance_WeaponInertiaX_Clamp_CP_Offset == 0x7b0, "UTslAnimInstance::WeaponInertiaX_Clamp_CP offset is not 7b0");
	auto constexpr UTslAnimInstance_WeaponInertiaY_Clamp_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaY_Clamp_CP);
	static_assert(UTslAnimInstance_WeaponInertiaY_Clamp_CP_Offset == 0x7b4, "UTslAnimInstance::WeaponInertiaY_Clamp_CP offset is not 7b4");
	auto constexpr UTslAnimInstance_WeaponInertia_InerpSpeed_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_InerpSpeed_CP);
	static_assert(UTslAnimInstance_WeaponInertia_InerpSpeed_CP_Offset == 0x7b8, "UTslAnimInstance::WeaponInertia_InerpSpeed_CP offset is not 7b8");
	auto constexpr UTslAnimInstance_WeaponInertiaX_Scalar_ADS_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaX_Scalar_ADS_CP);
	static_assert(UTslAnimInstance_WeaponInertiaX_Scalar_ADS_CP_Offset == 0x7bc, "UTslAnimInstance::WeaponInertiaX_Scalar_ADS_CP offset is not 7bc");
	auto constexpr UTslAnimInstance_WeaponInertiaY_Scalar_ADS_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaY_Scalar_ADS_CP);
	static_assert(UTslAnimInstance_WeaponInertiaY_Scalar_ADS_CP_Offset == 0x7c0, "UTslAnimInstance::WeaponInertiaY_Scalar_ADS_CP offset is not 7c0");
	auto constexpr UTslAnimInstance_WeaponInertiaX_Clamp_ADS_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaX_Clamp_ADS_CP);
	static_assert(UTslAnimInstance_WeaponInertiaX_Clamp_ADS_CP_Offset == 0x7c4, "UTslAnimInstance::WeaponInertiaX_Clamp_ADS_CP offset is not 7c4");
	auto constexpr UTslAnimInstance_WeaponInertiaY_Clamp_ADS_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaY_Clamp_ADS_CP);
	static_assert(UTslAnimInstance_WeaponInertiaY_Clamp_ADS_CP_Offset == 0x7c8, "UTslAnimInstance::WeaponInertiaY_Clamp_ADS_CP offset is not 7c8");
	auto constexpr UTslAnimInstance_WeaponInertia_InerpSpeed_ADS_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_InerpSpeed_ADS_CP);
	static_assert(UTslAnimInstance_WeaponInertia_InerpSpeed_ADS_CP_Offset == 0x7cc, "UTslAnimInstance::WeaponInertia_InerpSpeed_ADS_CP offset is not 7cc");
	auto constexpr UTslAnimInstance_WeaponInertia_InerpSpeed_YawScalar_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_InerpSpeed_YawScalar_CP);
	static_assert(UTslAnimInstance_WeaponInertia_InerpSpeed_YawScalar_CP_Offset == 0x7d0, "UTslAnimInstance::WeaponInertia_InerpSpeed_YawScalar_CP offset is not 7d0");
	auto constexpr UTslAnimInstance_WeaponInertia_YawToRollScalar_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_YawToRollScalar_CP);
	static_assert(UTslAnimInstance_WeaponInertia_YawToRollScalar_CP_Offset == 0x7d4, "UTslAnimInstance::WeaponInertia_YawToRollScalar_CP offset is not 7d4");
	auto constexpr UTslAnimInstance_WeaponInertia_YawToRollScalar_ADS_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_YawToRollScalar_ADS_CP);
	static_assert(UTslAnimInstance_WeaponInertia_YawToRollScalar_ADS_CP_Offset == 0x7d8, "UTslAnimInstance::WeaponInertia_YawToRollScalar_ADS_CP offset is not 7d8");
	auto constexpr UTslAnimInstance_WeaponInertiaRoll_Clamp_ADS_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaRoll_Clamp_ADS_CP);
	static_assert(UTslAnimInstance_WeaponInertiaRoll_Clamp_ADS_CP_Offset == 0x7dc, "UTslAnimInstance::WeaponInertiaRoll_Clamp_ADS_CP offset is not 7dc");
	auto constexpr UTslAnimInstance_WeaponInertiaRoll_Clamp_CP_Offset = offsetof(UTslAnimInstance, WeaponInertiaRoll_Clamp_CP);
	static_assert(UTslAnimInstance_WeaponInertiaRoll_Clamp_CP_Offset == 0x7e0, "UTslAnimInstance::WeaponInertiaRoll_Clamp_CP offset is not 7e0");
	auto constexpr UTslAnimInstance_HandWeaponOffsetInterpSpeed_Offset = offsetof(UTslAnimInstance, HandWeaponOffsetInterpSpeed);
	static_assert(UTslAnimInstance_HandWeaponOffsetInterpSpeed_Offset == 0x7e4, "UTslAnimInstance::HandWeaponOffsetInterpSpeed offset is not 7e4");
	auto constexpr UTslAnimInstance_EmoteMontageSlotName_CP_Offset = offsetof(UTslAnimInstance, EmoteMontageSlotName_CP);
	static_assert(UTslAnimInstance_EmoteMontageSlotName_CP_Offset == 0x7e8, "UTslAnimInstance::EmoteMontageSlotName_CP offset is not 7e8");
	auto constexpr UTslAnimInstance_WeaponInertia_Yaw_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_Yaw_CP);
	static_assert(UTslAnimInstance_WeaponInertia_Yaw_CP_Offset == 0x7f0, "UTslAnimInstance::WeaponInertia_Yaw_CP offset is not 7f0");
	auto constexpr UTslAnimInstance_WeaponInertia_Pitch_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_Pitch_CP);
	static_assert(UTslAnimInstance_WeaponInertia_Pitch_CP_Offset == 0x7f4, "UTslAnimInstance::WeaponInertia_Pitch_CP offset is not 7f4");
	auto constexpr UTslAnimInstance_WeaponInertia_Roll_CP_Offset = offsetof(UTslAnimInstance, WeaponInertia_Roll_CP);
	static_assert(UTslAnimInstance_WeaponInertia_Roll_CP_Offset == 0x7f8, "UTslAnimInstance::WeaponInertia_Roll_CP offset is not 7f8");
	auto constexpr UTslAnimInstance_SprintWeaponLoweringAlpha_CP_Offset = offsetof(UTslAnimInstance, SprintWeaponLoweringAlpha_CP);
	static_assert(UTslAnimInstance_SprintWeaponLoweringAlpha_CP_Offset == 0x7fc, "UTslAnimInstance::SprintWeaponLoweringAlpha_CP offset is not 7fc");
	auto constexpr UTslAnimInstance_boolField800_Offset = offsetof(UTslAnimInstance, boolField800);
	static_assert(UTslAnimInstance_boolField800_Offset == 0x800, "UTslAnimInstance::boolField800 offset is not 800");
	auto constexpr UTslAnimInstance_RecoilRollValue_CP_Offset = offsetof(UTslAnimInstance, RecoilRollValue_CP);
	static_assert(UTslAnimInstance_RecoilRollValue_CP_Offset == 0x804, "UTslAnimInstance::RecoilRollValue_CP offset is not 804");
	auto constexpr UTslAnimInstance_RecoilTimer_CP_Offset = offsetof(UTslAnimInstance, RecoilTimer_CP);
	static_assert(UTslAnimInstance_RecoilTimer_CP_Offset == 0x808, "UTslAnimInstance::RecoilTimer_CP offset is not 808");
	auto constexpr UTslAnimInstance_RecoilRollRand_CP_Offset = offsetof(UTslAnimInstance, RecoilRollRand_CP);
	static_assert(UTslAnimInstance_RecoilRollRand_CP_Offset == 0x80c, "UTslAnimInstance::RecoilRollRand_CP offset is not 80c");
	auto constexpr UTslAnimInstance_RecoilPlayStartTime_CP_Offset = offsetof(UTslAnimInstance, RecoilPlayStartTime_CP);
	static_assert(UTslAnimInstance_RecoilPlayStartTime_CP_Offset == 0x810, "UTslAnimInstance::RecoilPlayStartTime_CP offset is not 810");
	auto constexpr UTslAnimInstance_RecoilBlendInTime_CP_Offset = offsetof(UTslAnimInstance, RecoilBlendInTime_CP);
	static_assert(UTslAnimInstance_RecoilBlendInTime_CP_Offset == 0x814, "UTslAnimInstance::RecoilBlendInTime_CP offset is not 814");
	auto constexpr UTslAnimInstance_RecoilTimerScale_CP_Offset = offsetof(UTslAnimInstance, RecoilTimerScale_CP);
	static_assert(UTslAnimInstance_RecoilTimerScale_CP_Offset == 0x818, "UTslAnimInstance::RecoilTimerScale_CP offset is not 818");
	auto constexpr UTslAnimInstance_RecoilRollCurve_CP_Offset = offsetof(UTslAnimInstance, RecoilRollCurve_CP);
	static_assert(UTslAnimInstance_RecoilRollCurve_CP_Offset == 0x820, "UTslAnimInstance::RecoilRollCurve_CP offset is not 820");
	auto constexpr UTslAnimInstance_WeaponStabilityAlpha_CP_Offset = offsetof(UTslAnimInstance, WeaponStabilityAlpha_CP);
	static_assert(UTslAnimInstance_WeaponStabilityAlpha_CP_Offset == 0x828, "UTslAnimInstance::WeaponStabilityAlpha_CP offset is not 828");
	auto constexpr UTslAnimInstance_WeaponStabilityRefSpeed_CP_Offset = offsetof(UTslAnimInstance, WeaponStabilityRefSpeed_CP);
	static_assert(UTslAnimInstance_WeaponStabilityRefSpeed_CP_Offset == 0x82c, "UTslAnimInstance::WeaponStabilityRefSpeed_CP offset is not 82c");
	auto constexpr UTslAnimInstance_WeaponStabilityRefMapIn_CP_Offset = offsetof(UTslAnimInstance, WeaponStabilityRefMapIn_CP);
	static_assert(UTslAnimInstance_WeaponStabilityRefMapIn_CP_Offset == 0x830, "UTslAnimInstance::WeaponStabilityRefMapIn_CP offset is not 830");
	auto constexpr UTslAnimInstance_WeaponStabilityRefMapOut_CP_Offset = offsetof(UTslAnimInstance, WeaponStabilityRefMapOut_CP);
	static_assert(UTslAnimInstance_WeaponStabilityRefMapOut_CP_Offset == 0x838, "UTslAnimInstance::WeaponStabilityRefMapOut_CP offset is not 838");
	auto constexpr UTslAnimInstance_WeaponStabilityInterpSpeed_CP_Offset = offsetof(UTslAnimInstance, WeaponStabilityInterpSpeed_CP);
	static_assert(UTslAnimInstance_WeaponStabilityInterpSpeed_CP_Offset == 0x840, "UTslAnimInstance::WeaponStabilityInterpSpeed_CP offset is not 840");
	auto constexpr UTslAnimInstance_boolField844_Offset = offsetof(UTslAnimInstance, boolField844);
	static_assert(UTslAnimInstance_boolField844_Offset == 0x844, "UTslAnimInstance::boolField844 offset is not 844");
	auto constexpr UTslAnimInstance_boolField845_Offset = offsetof(UTslAnimInstance, boolField845);
	static_assert(UTslAnimInstance_boolField845_Offset == 0x845, "UTslAnimInstance::boolField845 offset is not 845");
	auto constexpr UTslAnimInstance_WeaponAimState_CP_Offset = offsetof(UTslAnimInstance, WeaponAimState_CP);
	static_assert(UTslAnimInstance_WeaponAimState_CP_Offset == 0x848, "UTslAnimInstance::WeaponAimState_CP offset is not 848");
	auto constexpr UTslAnimInstance_SprintAlphaModifier_CP_Offset = offsetof(UTslAnimInstance, SprintAlphaModifier_CP);
	static_assert(UTslAnimInstance_SprintAlphaModifier_CP_Offset == 0x84c, "UTslAnimInstance::SprintAlphaModifier_CP offset is not 84c");
	auto constexpr UTslAnimInstance_boolField850_Offset = offsetof(UTslAnimInstance, boolField850);
	static_assert(UTslAnimInstance_boolField850_Offset == 0x850, "UTslAnimInstance::boolField850 offset is not 850");
	auto constexpr UTslAnimInstance_boolField851_Offset = offsetof(UTslAnimInstance, boolField851);
	static_assert(UTslAnimInstance_boolField851_Offset == 0x851, "UTslAnimInstance::boolField851 offset is not 851");
	auto constexpr UTslAnimInstance_boolField852_Offset = offsetof(UTslAnimInstance, boolField852);
	static_assert(UTslAnimInstance_boolField852_Offset == 0x852, "UTslAnimInstance::boolField852 offset is not 852");
	auto constexpr UTslAnimInstance_FlareReadyAlpha_CP_Offset = offsetof(UTslAnimInstance, FlareReadyAlpha_CP);
	static_assert(UTslAnimInstance_FlareReadyAlpha_CP_Offset == 0x854, "UTslAnimInstance::FlareReadyAlpha_CP offset is not 854");
	auto constexpr UTslAnimInstance_WeaponAimStateInterpolated_CP_Offset = offsetof(UTslAnimInstance, WeaponAimStateInterpolated_CP);
	static_assert(UTslAnimInstance_WeaponAimStateInterpolated_CP_Offset == 0x858, "UTslAnimInstance::WeaponAimStateInterpolated_CP offset is not 858");
	auto constexpr UTslAnimInstance_Yaw_CP_Offset = offsetof(UTslAnimInstance, Yaw_CP);
	static_assert(UTslAnimInstance_Yaw_CP_Offset == 0x85c, "UTslAnimInstance::Yaw_CP offset is not 85c");
	auto constexpr UTslAnimInstance_RotationYaw_CP_Offset = offsetof(UTslAnimInstance, RotationYaw_CP);
	static_assert(UTslAnimInstance_RotationYaw_CP_Offset == 0x860, "UTslAnimInstance::RotationYaw_CP offset is not 860");
	auto constexpr UTslAnimInstance_Pitch_CP_Offset = offsetof(UTslAnimInstance, Pitch_CP);
	static_assert(UTslAnimInstance_Pitch_CP_Offset == 0x864, "UTslAnimInstance::Pitch_CP offset is not 864");
	auto constexpr UTslAnimInstance_YawNormalized_CP_Offset = offsetof(UTslAnimInstance, YawNormalized_CP);
	static_assert(UTslAnimInstance_YawNormalized_CP_Offset == 0x868, "UTslAnimInstance::YawNormalized_CP offset is not 868");
	auto constexpr UTslAnimInstance_DesiredPitch_CP_Offset = offsetof(UTslAnimInstance, DesiredPitch_CP);
	static_assert(UTslAnimInstance_DesiredPitch_CP_Offset == 0x86c, "UTslAnimInstance::DesiredPitch_CP offset is not 86c");
	auto constexpr UTslAnimInstance_AimDirectionCardinal_CP_Offset = offsetof(UTslAnimInstance, AimDirectionCardinal_CP);
	static_assert(UTslAnimInstance_AimDirectionCardinal_CP_Offset == 0x870, "UTslAnimInstance::AimDirectionCardinal_CP offset is not 870");
	auto constexpr UTslAnimInstance_AORot_CP_Offset = offsetof(UTslAnimInstance, AORot_CP);
	static_assert(UTslAnimInstance_AORot_CP_Offset == 0x874, "UTslAnimInstance::AORot_CP offset is not 874");
	auto constexpr UTslAnimInstance_AORotBackwards_CP_Offset = offsetof(UTslAnimInstance, AORotBackwards_CP);
	static_assert(UTslAnimInstance_AORotBackwards_CP_Offset == 0x880, "UTslAnimInstance::AORotBackwards_CP offset is not 880");
	auto constexpr UTslAnimInstance_SwimmingPitch_CP_Offset = offsetof(UTslAnimInstance, SwimmingPitch_CP);
	static_assert(UTslAnimInstance_SwimmingPitch_CP_Offset == 0x88c, "UTslAnimInstance::SwimmingPitch_CP offset is not 88c");
	auto constexpr UTslAnimInstance_ForceAddAimOffset_CP_Offset = offsetof(UTslAnimInstance, ForceAddAimOffset_CP);
	static_assert(UTslAnimInstance_ForceAddAimOffset_CP_Offset == 0x890, "UTslAnimInstance::ForceAddAimOffset_CP offset is not 890");
	auto constexpr UTslAnimInstance_WeaponCollisionAlpha_CP_Offset = offsetof(UTslAnimInstance, WeaponCollisionAlpha_CP);
	static_assert(UTslAnimInstance_WeaponCollisionAlpha_CP_Offset == 0x894, "UTslAnimInstance::WeaponCollisionAlpha_CP offset is not 894");
	auto constexpr UTslAnimInstance_boolField898_Offset = offsetof(UTslAnimInstance, boolField898);
	static_assert(UTslAnimInstance_boolField898_Offset == 0x898, "UTslAnimInstance::boolField898 offset is not 898");
	auto constexpr UTslAnimInstance_WeaponCollisionReloadAlpha_CP_Offset = offsetof(UTslAnimInstance, WeaponCollisionReloadAlpha_CP);
	static_assert(UTslAnimInstance_WeaponCollisionReloadAlpha_CP_Offset == 0x89c, "UTslAnimInstance::WeaponCollisionReloadAlpha_CP offset is not 89c");
	auto constexpr UTslAnimInstance_boolField8A0_Offset = offsetof(UTslAnimInstance, boolField8A0);
	static_assert(UTslAnimInstance_boolField8A0_Offset == 0x8a0, "UTslAnimInstance::boolField8A0 offset is not 8a0");
	auto constexpr UTslAnimInstance_boolField8A1_Offset = offsetof(UTslAnimInstance, boolField8A1);
	static_assert(UTslAnimInstance_boolField8A1_Offset == 0x8a1, "UTslAnimInstance::boolField8A1 offset is not 8a1");
	auto constexpr UTslAnimInstance_boolField8A2_Offset = offsetof(UTslAnimInstance, boolField8A2);
	static_assert(UTslAnimInstance_boolField8A2_Offset == 0x8a2, "UTslAnimInstance::boolField8A2 offset is not 8a2");
	auto constexpr UTslAnimInstance_FallingAlpha_CP_Offset = offsetof(UTslAnimInstance, FallingAlpha_CP);
	static_assert(UTslAnimInstance_FallingAlpha_CP_Offset == 0x8a4, "UTslAnimInstance::FallingAlpha_CP offset is not 8a4");
	auto constexpr UTslAnimInstance_FallingMap2D_Offset = offsetof(UTslAnimInstance, FallingMap2D);
	static_assert(UTslAnimInstance_FallingMap2D_Offset == 0x8a8, "UTslAnimInstance::FallingMap2D offset is not 8a8");
	auto constexpr UTslAnimInstance_FallingMapZ_Offset = offsetof(UTslAnimInstance, FallingMapZ);
	static_assert(UTslAnimInstance_FallingMapZ_Offset == 0x8b0, "UTslAnimInstance::FallingMapZ offset is not 8b0");
	auto constexpr UTslAnimInstance_boolField8B8_Offset = offsetof(UTslAnimInstance, boolField8B8);
	static_assert(UTslAnimInstance_boolField8B8_Offset == 0x8b8, "UTslAnimInstance::boolField8B8 offset is not 8b8");
	auto constexpr UTslAnimInstance_MontageFallingRifle_CP_Offset = offsetof(UTslAnimInstance, MontageFallingRifle_CP);
	static_assert(UTslAnimInstance_MontageFallingRifle_CP_Offset == 0x8c0, "UTslAnimInstance::MontageFallingRifle_CP offset is not 8c0");
	auto constexpr UTslAnimInstance_MontageFallingUnarmed_CP_Offset = offsetof(UTslAnimInstance, MontageFallingUnarmed_CP);
	static_assert(UTslAnimInstance_MontageFallingUnarmed_CP_Offset == 0x8c8, "UTslAnimInstance::MontageFallingUnarmed_CP offset is not 8c8");
	auto constexpr UTslAnimInstance_LandingAlpha_CP_Offset = offsetof(UTslAnimInstance, LandingAlpha_CP);
	static_assert(UTslAnimInstance_LandingAlpha_CP_Offset == 0x8d0, "UTslAnimInstance::LandingAlpha_CP offset is not 8d0");
	auto constexpr UTslAnimInstance_boolField8D4_Offset = offsetof(UTslAnimInstance, boolField8D4);
	static_assert(UTslAnimInstance_boolField8D4_Offset == 0x8d4, "UTslAnimInstance::boolField8D4 offset is not 8d4");
	auto constexpr UTslAnimInstance_JumpHeight_CP_Offset = offsetof(UTslAnimInstance, JumpHeight_CP);
	static_assert(UTslAnimInstance_JumpHeight_CP_Offset == 0x8d8, "UTslAnimInstance::JumpHeight_CP offset is not 8d8");
	auto constexpr UTslAnimInstance_FallHeight_CP_Offset = offsetof(UTslAnimInstance, FallHeight_CP);
	static_assert(UTslAnimInstance_FallHeight_CP_Offset == 0x8dc, "UTslAnimInstance::FallHeight_CP offset is not 8dc");
	auto constexpr UTslAnimInstance_JumpStartLocation_CP_Offset = offsetof(UTslAnimInstance, JumpStartLocation_CP);
	static_assert(UTslAnimInstance_JumpStartLocation_CP_Offset == 0x8e0, "UTslAnimInstance::JumpStartLocation_CP offset is not 8e0");
	auto constexpr UTslAnimInstance_LandPredictionVector_CP_Offset = offsetof(UTslAnimInstance, LandPredictionVector_CP);
	static_assert(UTslAnimInstance_LandPredictionVector_CP_Offset == 0x8ec, "UTslAnimInstance::LandPredictionVector_CP offset is not 8ec");
	auto constexpr UTslAnimInstance_LeanLeftAlpha_CP_Offset = offsetof(UTslAnimInstance, LeanLeftAlpha_CP);
	static_assert(UTslAnimInstance_LeanLeftAlpha_CP_Offset == 0x8f8, "UTslAnimInstance::LeanLeftAlpha_CP offset is not 8f8");
	auto constexpr UTslAnimInstance_LeanRightAlpha_CP_Offset = offsetof(UTslAnimInstance, LeanRightAlpha_CP);
	static_assert(UTslAnimInstance_LeanRightAlpha_CP_Offset == 0x8fc, "UTslAnimInstance::LeanRightAlpha_CP offset is not 8fc");
	auto constexpr UTslAnimInstance_LeanTwoSideAlpha_CP_Offset = offsetof(UTslAnimInstance, LeanTwoSideAlpha_CP);
	static_assert(UTslAnimInstance_LeanTwoSideAlpha_CP_Offset == 0x900, "UTslAnimInstance::LeanTwoSideAlpha_CP offset is not 900");
	auto constexpr UTslAnimInstance_LeanLeftApplyTranslation_CP_Offset = offsetof(UTslAnimInstance, LeanLeftApplyTranslation_CP);
	static_assert(UTslAnimInstance_LeanLeftApplyTranslation_CP_Offset == 0x904, "UTslAnimInstance::LeanLeftApplyTranslation_CP offset is not 904");
	auto constexpr UTslAnimInstance_LeanInterpSpeed_CP_Offset = offsetof(UTslAnimInstance, LeanInterpSpeed_CP);
	static_assert(UTslAnimInstance_LeanInterpSpeed_CP_Offset == 0x908, "UTslAnimInstance::LeanInterpSpeed_CP offset is not 908");
	auto constexpr UTslAnimInstance_LeanInterpSpeedCollisionClamp_CP_Offset = offsetof(UTslAnimInstance, LeanInterpSpeedCollisionClamp_CP);
	static_assert(UTslAnimInstance_LeanInterpSpeedCollisionClamp_CP_Offset == 0x90c, "UTslAnimInstance::LeanInterpSpeedCollisionClamp_CP offset is not 90c");
	auto constexpr UTslAnimInstance_boolField910_Offset = offsetof(UTslAnimInstance, boolField910);
	static_assert(UTslAnimInstance_boolField910_Offset == 0x910, "UTslAnimInstance::boolField910 offset is not 910");
	auto constexpr UTslAnimInstance_boolField911_Offset = offsetof(UTslAnimInstance, boolField911);
	static_assert(UTslAnimInstance_boolField911_Offset == 0x911, "UTslAnimInstance::boolField911 offset is not 911");
	auto constexpr UTslAnimInstance_boolField912_Offset = offsetof(UTslAnimInstance, boolField912);
	static_assert(UTslAnimInstance_boolField912_Offset == 0x912, "UTslAnimInstance::boolField912 offset is not 912");
	auto constexpr UTslAnimInstance_FreefallX_CP_Offset = offsetof(UTslAnimInstance, FreefallX_CP);
	static_assert(UTslAnimInstance_FreefallX_CP_Offset == 0x914, "UTslAnimInstance::FreefallX_CP offset is not 914");
	auto constexpr UTslAnimInstance_FreefallY_CP_Offset = offsetof(UTslAnimInstance, FreefallY_CP);
	static_assert(UTslAnimInstance_FreefallY_CP_Offset == 0x918, "UTslAnimInstance::FreefallY_CP offset is not 918");
	auto constexpr UTslAnimInstance_FreeFallAlpha_CP_Offset = offsetof(UTslAnimInstance, FreeFallAlpha_CP);
	static_assert(UTslAnimInstance_FreeFallAlpha_CP_Offset == 0x91c, "UTslAnimInstance::FreeFallAlpha_CP offset is not 91c");
	auto constexpr UTslAnimInstance_boolField920_Offset = offsetof(UTslAnimInstance, boolField920);
	static_assert(UTslAnimInstance_boolField920_Offset == 0x920, "UTslAnimInstance::boolField920 offset is not 920");
	auto constexpr UTslAnimInstance_boolField921_Offset = offsetof(UTslAnimInstance, boolField921);
	static_assert(UTslAnimInstance_boolField921_Offset == 0x921, "UTslAnimInstance::boolField921 offset is not 921");
	auto constexpr UTslAnimInstance_Freefall_Yaw_CP_Offset = offsetof(UTslAnimInstance, Freefall_Yaw_CP);
	static_assert(UTslAnimInstance_Freefall_Yaw_CP_Offset == 0x924, "UTslAnimInstance::Freefall_Yaw_CP offset is not 924");
	auto constexpr UTslAnimInstance_Freefall_Pitch_CP_Offset = offsetof(UTslAnimInstance, Freefall_Pitch_CP);
	static_assert(UTslAnimInstance_Freefall_Pitch_CP_Offset == 0x928, "UTslAnimInstance::Freefall_Pitch_CP offset is not 928");
	auto constexpr UTslAnimInstance_boolField92C_Offset = offsetof(UTslAnimInstance, boolField92C);
	static_assert(UTslAnimInstance_boolField92C_Offset == 0x92c, "UTslAnimInstance::boolField92C offset is not 92c");
	auto constexpr UTslAnimInstance_boolField92D_Offset = offsetof(UTslAnimInstance, boolField92D);
	static_assert(UTslAnimInstance_boolField92D_Offset == 0x92d, "UTslAnimInstance::boolField92D offset is not 92d");
	auto constexpr UTslAnimInstance_boolField92E_Offset = offsetof(UTslAnimInstance, boolField92E);
	static_assert(UTslAnimInstance_boolField92E_Offset == 0x92e, "UTslAnimInstance::boolField92E offset is not 92e");
	auto constexpr UTslAnimInstance_boolField92F_Offset = offsetof(UTslAnimInstance, boolField92F);
	static_assert(UTslAnimInstance_boolField92F_Offset == 0x92f, "UTslAnimInstance::boolField92F offset is not 92f");
	auto constexpr UTslAnimInstance_boolField930_Offset = offsetof(UTslAnimInstance, boolField930);
	static_assert(UTslAnimInstance_boolField930_Offset == 0x930, "UTslAnimInstance::boolField930 offset is not 930");
	auto constexpr UTslAnimInstance_RotationPlayrateAimed_CP_Offset = offsetof(UTslAnimInstance, RotationPlayrateAimed_CP);
	static_assert(UTslAnimInstance_RotationPlayrateAimed_CP_Offset == 0x934, "UTslAnimInstance::RotationPlayrateAimed_CP offset is not 934");
	auto constexpr UTslAnimInstance_RotationPlayrateAimedAdditiveSpine_CP_Offset = offsetof(UTslAnimInstance, RotationPlayrateAimedAdditiveSpine_CP);
	static_assert(UTslAnimInstance_RotationPlayrateAimedAdditiveSpine_CP_Offset == 0x938, "UTslAnimInstance::RotationPlayrateAimedAdditiveSpine_CP offset is not 938");
	auto constexpr UTslAnimInstance_LastRotation_CP_Offset = offsetof(UTslAnimInstance, LastRotation_CP);
	static_assert(UTslAnimInstance_LastRotation_CP_Offset == 0x93c, "UTslAnimInstance::LastRotation_CP offset is not 93c");
	auto constexpr UTslAnimInstance_Freelook_Body_CP_Offset = offsetof(UTslAnimInstance, Freelook_Body_CP);
	static_assert(UTslAnimInstance_Freelook_Body_CP_Offset == 0x948, "UTslAnimInstance::Freelook_Body_CP offset is not 948");
	auto constexpr UTslAnimInstance_Freelook_Delta_CP_Offset = offsetof(UTslAnimInstance, Freelook_Delta_CP);
	static_assert(UTslAnimInstance_Freelook_Delta_CP_Offset == 0x954, "UTslAnimInstance::Freelook_Delta_CP offset is not 954");
	auto constexpr UTslAnimInstance_IdleIndex_CP_Offset = offsetof(UTslAnimInstance, IdleIndex_CP);
	static_assert(UTslAnimInstance_IdleIndex_CP_Offset == 0x960, "UTslAnimInstance::IdleIndex_CP offset is not 960");
	auto constexpr UTslAnimInstance_LastIdleIndex_CP_Offset = offsetof(UTslAnimInstance, LastIdleIndex_CP);
	static_assert(UTslAnimInstance_LastIdleIndex_CP_Offset == 0x964, "UTslAnimInstance::LastIdleIndex_CP offset is not 964");
	auto constexpr UTslAnimInstance_IdleTimer_CP_Offset = offsetof(UTslAnimInstance, IdleTimer_CP);
	static_assert(UTslAnimInstance_IdleTimer_CP_Offset == 0x968, "UTslAnimInstance::IdleTimer_CP offset is not 968");
	auto constexpr UTslAnimInstance_IdleTriggerRandom_Offset = offsetof(UTslAnimInstance, IdleTriggerRandom);
	static_assert(UTslAnimInstance_IdleTriggerRandom_Offset == 0x96c, "UTslAnimInstance::IdleTriggerRandom offset is not 96c");
	auto constexpr UTslAnimInstance_IdleTriggerTimeMin_CP_Offset = offsetof(UTslAnimInstance, IdleTriggerTimeMin_CP);
	static_assert(UTslAnimInstance_IdleTriggerTimeMin_CP_Offset == 0x970, "UTslAnimInstance::IdleTriggerTimeMin_CP offset is not 970");
	auto constexpr UTslAnimInstance_IdleTriggerTimeVariation_CP_Offset = offsetof(UTslAnimInstance, IdleTriggerTimeVariation_CP);
	static_assert(UTslAnimInstance_IdleTriggerTimeVariation_CP_Offset == 0x974, "UTslAnimInstance::IdleTriggerTimeVariation_CP offset is not 974");
	auto constexpr UTslAnimInstance_SlotPrimary_CP_Offset = offsetof(UTslAnimInstance, SlotPrimary_CP);
	static_assert(UTslAnimInstance_SlotPrimary_CP_Offset == 0x980, "UTslAnimInstance::SlotPrimary_CP offset is not 980");
	auto constexpr UTslAnimInstance_SlotSecondary_CP_Offset = offsetof(UTslAnimInstance, SlotSecondary_CP);
	static_assert(UTslAnimInstance_SlotSecondary_CP_Offset == 0x9b0, "UTslAnimInstance::SlotSecondary_CP offset is not 9b0");
	auto constexpr UTslAnimInstance_SlotMelee_CP_Offset = offsetof(UTslAnimInstance, SlotMelee_CP);
	static_assert(UTslAnimInstance_SlotMelee_CP_Offset == 0x9e0, "UTslAnimInstance::SlotMelee_CP offset is not 9e0");
	auto constexpr UTslAnimInstance_SlotThrown_CP_Offset = offsetof(UTslAnimInstance, SlotThrown_CP);
	static_assert(UTslAnimInstance_SlotThrown_CP_Offset == 0xa10, "UTslAnimInstance::SlotThrown_CP offset is not a10");
	auto constexpr UTslAnimInstance_SlotPrimary_Offset_CP_Offset = offsetof(UTslAnimInstance, SlotPrimary_Offset_CP);
	static_assert(UTslAnimInstance_SlotPrimary_Offset_CP_Offset == 0xa40, "UTslAnimInstance::SlotPrimary_Offset_CP offset is not a40");
	auto constexpr UTslAnimInstance_SlotSecondary_Offset_CP_Offset = offsetof(UTslAnimInstance, SlotSecondary_Offset_CP);
	static_assert(UTslAnimInstance_SlotSecondary_Offset_CP_Offset == 0xa4c, "UTslAnimInstance::SlotSecondary_Offset_CP offset is not a4c");
	auto constexpr UTslAnimInstance_SlotPrimary_Location_CP_Offset = offsetof(UTslAnimInstance, SlotPrimary_Location_CP);
	static_assert(UTslAnimInstance_SlotPrimary_Location_CP_Offset == 0xa58, "UTslAnimInstance::SlotPrimary_Location_CP offset is not a58");
	auto constexpr UTslAnimInstance_SlotSecondary_Location_CP_Offset = offsetof(UTslAnimInstance, SlotSecondary_Location_CP);
	static_assert(UTslAnimInstance_SlotSecondary_Location_CP_Offset == 0xa64, "UTslAnimInstance::SlotSecondary_Location_CP offset is not a64");
	auto constexpr UTslAnimInstance_SlotMelee_Location_CP_Offset = offsetof(UTslAnimInstance, SlotMelee_Location_CP);
	static_assert(UTslAnimInstance_SlotMelee_Location_CP_Offset == 0xa70, "UTslAnimInstance::SlotMelee_Location_CP offset is not a70");
	auto constexpr UTslAnimInstance_SlotThrown_Location_CP_Offset = offsetof(UTslAnimInstance, SlotThrown_Location_CP);
	static_assert(UTslAnimInstance_SlotThrown_Location_CP_Offset == 0xa7c, "UTslAnimInstance::SlotThrown_Location_CP offset is not a7c");
	auto constexpr UTslAnimInstance_SlotPrimary_Rotation_CP_Offset = offsetof(UTslAnimInstance, SlotPrimary_Rotation_CP);
	static_assert(UTslAnimInstance_SlotPrimary_Rotation_CP_Offset == 0xa88, "UTslAnimInstance::SlotPrimary_Rotation_CP offset is not a88");
	auto constexpr UTslAnimInstance_SlotSecondary_Rotation_CP_Offset = offsetof(UTslAnimInstance, SlotSecondary_Rotation_CP);
	static_assert(UTslAnimInstance_SlotSecondary_Rotation_CP_Offset == 0xa94, "UTslAnimInstance::SlotSecondary_Rotation_CP offset is not a94");
	auto constexpr UTslAnimInstance_SlotMelee_Rotation_CP_Offset = offsetof(UTslAnimInstance, SlotMelee_Rotation_CP);
	static_assert(UTslAnimInstance_SlotMelee_Rotation_CP_Offset == 0xaa0, "UTslAnimInstance::SlotMelee_Rotation_CP offset is not aa0");
	auto constexpr UTslAnimInstance_SlotThrown_Rotation_CP_Offset = offsetof(UTslAnimInstance, SlotThrown_Rotation_CP);
	static_assert(UTslAnimInstance_SlotThrown_Rotation_CP_Offset == 0xaac, "UTslAnimInstance::SlotThrown_Rotation_CP offset is not aac");
	auto constexpr UTslAnimInstance_SlotPrimaryOffsetsPerWeapon_Offset = offsetof(UTslAnimInstance, SlotPrimaryOffsetsPerWeapon);
	static_assert(UTslAnimInstance_SlotPrimaryOffsetsPerWeapon_Offset == 0xab8, "UTslAnimInstance::SlotPrimaryOffsetsPerWeapon offset is not ab8");
	auto constexpr UTslAnimInstance_SlotSecondaryOffsetsPerWeapon_Offset = offsetof(UTslAnimInstance, SlotSecondaryOffsetsPerWeapon);
	static_assert(UTslAnimInstance_SlotSecondaryOffsetsPerWeapon_Offset == 0xb08, "UTslAnimInstance::SlotSecondaryOffsetsPerWeapon offset is not b08");
	auto constexpr UTslAnimInstance_AnimDynamicsStandAlpha_CP_Offset = offsetof(UTslAnimInstance, AnimDynamicsStandAlpha_CP);
	static_assert(UTslAnimInstance_AnimDynamicsStandAlpha_CP_Offset == 0xb58, "UTslAnimInstance::AnimDynamicsStandAlpha_CP offset is not b58");
	auto constexpr UTslAnimInstance_AnimDynamicsStandSprintAlpha_CP_Offset = offsetof(UTslAnimInstance, AnimDynamicsStandSprintAlpha_CP);
	static_assert(UTslAnimInstance_AnimDynamicsStandSprintAlpha_CP_Offset == 0xb5c, "UTslAnimInstance::AnimDynamicsStandSprintAlpha_CP offset is not b5c");
	auto constexpr UTslAnimInstance_AnimDynamicsCrouchAlpha_CP_Offset = offsetof(UTslAnimInstance, AnimDynamicsCrouchAlpha_CP);
	static_assert(UTslAnimInstance_AnimDynamicsCrouchAlpha_CP_Offset == 0xb60, "UTslAnimInstance::AnimDynamicsCrouchAlpha_CP offset is not b60");
	auto constexpr UTslAnimInstance_AnimDynamicsProneAlpha_CP_Offset = offsetof(UTslAnimInstance, AnimDynamicsProneAlpha_CP);
	static_assert(UTslAnimInstance_AnimDynamicsProneAlpha_CP_Offset == 0xb64, "UTslAnimInstance::AnimDynamicsProneAlpha_CP offset is not b64");
	auto constexpr UTslAnimInstance_EFCoat_CP_Offset = offsetof(UTslAnimInstance, EFCoat_CP);
	static_assert(UTslAnimInstance_EFCoat_CP_Offset == 0xb68, "UTslAnimInstance::EFCoat_CP offset is not b68");
	auto constexpr UTslAnimInstance_boolFieldB74_Offset = offsetof(UTslAnimInstance, boolFieldB74);
	static_assert(UTslAnimInstance_boolFieldB74_Offset == 0xb74, "UTslAnimInstance::boolFieldB74 offset is not b74");
	auto constexpr UTslAnimInstance_LocalFPPAlpha_CP_Offset = offsetof(UTslAnimInstance, LocalFPPAlpha_CP);
	static_assert(UTslAnimInstance_LocalFPPAlpha_CP_Offset == 0xb78, "UTslAnimInstance::LocalFPPAlpha_CP offset is not b78");
	auto constexpr UTslAnimInstance_LocalFPPAlphaVehicleAimAO_CP_Offset = offsetof(UTslAnimInstance, LocalFPPAlphaVehicleAimAO_CP);
	static_assert(UTslAnimInstance_LocalFPPAlphaVehicleAimAO_CP_Offset == 0xb7c, "UTslAnimInstance::LocalFPPAlphaVehicleAimAO_CP offset is not b7c");
	auto constexpr UTslAnimInstance_boolFieldB80_Offset = offsetof(UTslAnimInstance, boolFieldB80);
	static_assert(UTslAnimInstance_boolFieldB80_Offset == 0xb80, "UTslAnimInstance::boolFieldB80 offset is not b80");
	auto constexpr UTslAnimInstance_boolFieldB81_Offset = offsetof(UTslAnimInstance, boolFieldB81);
	static_assert(UTslAnimInstance_boolFieldB81_Offset == 0xb81, "UTslAnimInstance::boolFieldB81 offset is not b81");
	auto constexpr UTslAnimInstance_boolFieldB82_Offset = offsetof(UTslAnimInstance, boolFieldB82);
	static_assert(UTslAnimInstance_boolFieldB82_Offset == 0xb82, "UTslAnimInstance::boolFieldB82 offset is not b82");
	auto constexpr UTslAnimInstance_boolFieldB83_Offset = offsetof(UTslAnimInstance, boolFieldB83);
	static_assert(UTslAnimInstance_boolFieldB83_Offset == 0xb83, "UTslAnimInstance::boolFieldB83 offset is not b83");
	auto constexpr UTslAnimInstance_LocalSteerInput_CP_Offset = offsetof(UTslAnimInstance, LocalSteerInput_CP);
	static_assert(UTslAnimInstance_LocalSteerInput_CP_Offset == 0xb84, "UTslAnimInstance::LocalSteerInput_CP offset is not b84");
	auto constexpr UTslAnimInstance_LocalSteerInputMoto_CP_Offset = offsetof(UTslAnimInstance, LocalSteerInputMoto_CP);
	static_assert(UTslAnimInstance_LocalSteerInputMoto_CP_Offset == 0xb88, "UTslAnimInstance::LocalSteerInputMoto_CP offset is not b88");
	auto constexpr UTslAnimInstance_LocalStopMoto_CP_Offset = offsetof(UTslAnimInstance, LocalStopMoto_CP);
	static_assert(UTslAnimInstance_LocalStopMoto_CP_Offset == 0xb8c, "UTslAnimInstance::LocalStopMoto_CP offset is not b8c");
	auto constexpr UTslAnimInstance_LocalThrottleInput_CP_Offset = offsetof(UTslAnimInstance, LocalThrottleInput_CP);
	static_assert(UTslAnimInstance_LocalThrottleInput_CP_Offset == 0xb90, "UTslAnimInstance::LocalThrottleInput_CP offset is not b90");
	auto constexpr UTslAnimInstance_GasThighRot_CP_Offset = offsetof(UTslAnimInstance, GasThighRot_CP);
	static_assert(UTslAnimInstance_GasThighRot_CP_Offset == 0xb94, "UTslAnimInstance::GasThighRot_CP offset is not b94");
	auto constexpr UTslAnimInstance_GasAnkleRot_CP_Offset = offsetof(UTslAnimInstance, GasAnkleRot_CP);
	static_assert(UTslAnimInstance_GasAnkleRot_CP_Offset == 0xba0, "UTslAnimInstance::GasAnkleRot_CP offset is not ba0");
	auto constexpr UTslAnimInstance_GasKneeTransformX_CP_Offset = offsetof(UTslAnimInstance, GasKneeTransformX_CP);
	static_assert(UTslAnimInstance_GasKneeTransformX_CP_Offset == 0xbb0, "UTslAnimInstance::GasKneeTransformX_CP offset is not bb0");
	auto constexpr UTslAnimInstance_LocalBrakeInput_CP_Offset = offsetof(UTslAnimInstance, LocalBrakeInput_CP);
	static_assert(UTslAnimInstance_LocalBrakeInput_CP_Offset == 0xbe0, "UTslAnimInstance::LocalBrakeInput_CP offset is not be0");
	auto constexpr UTslAnimInstance_BrakeKneeTransform_CP_Offset = offsetof(UTslAnimInstance, BrakeKneeTransform_CP);
	static_assert(UTslAnimInstance_BrakeKneeTransform_CP_Offset == 0xbf0, "UTslAnimInstance::BrakeKneeTransform_CP offset is not bf0");
	auto constexpr UTslAnimInstance_BrakeAnkleRot_CP_Offset = offsetof(UTslAnimInstance, BrakeAnkleRot_CP);
	static_assert(UTslAnimInstance_BrakeAnkleRot_CP_Offset == 0xc20, "UTslAnimInstance::BrakeAnkleRot_CP offset is not c20");
	auto constexpr UTslAnimInstance_BackwardAOAlpha_CP_Offset = offsetof(UTslAnimInstance, BackwardAOAlpha_CP);
	static_assert(UTslAnimInstance_BackwardAOAlpha_CP_Offset == 0xc2c, "UTslAnimInstance::BackwardAOAlpha_CP offset is not c2c");
	auto constexpr UTslAnimInstance_AimBlendAlpha_CP_Offset = offsetof(UTslAnimInstance, AimBlendAlpha_CP);
	static_assert(UTslAnimInstance_AimBlendAlpha_CP_Offset == 0xc30, "UTslAnimInstance::AimBlendAlpha_CP offset is not c30");
	auto constexpr UTslAnimInstance_boolFieldC34_Offset = offsetof(UTslAnimInstance, boolFieldC34);
	static_assert(UTslAnimInstance_boolFieldC34_Offset == 0xc34, "UTslAnimInstance::boolFieldC34 offset is not c34");
	auto constexpr UTslAnimInstance_GroundContactMoto_CP_Offset = offsetof(UTslAnimInstance, GroundContactMoto_CP);
	static_assert(UTslAnimInstance_GroundContactMoto_CP_Offset == 0xc38, "UTslAnimInstance::GroundContactMoto_CP offset is not c38");
	auto constexpr UTslAnimInstance_AirControlPitchInput_CP_Offset = offsetof(UTslAnimInstance, AirControlPitchInput_CP);
	static_assert(UTslAnimInstance_AirControlPitchInput_CP_Offset == 0xc3c, "UTslAnimInstance::AirControlPitchInput_CP offset is not c3c");
	auto constexpr UTslAnimInstance_DriverIK_CP_Offset = offsetof(UTslAnimInstance, DriverIK_CP);
	static_assert(UTslAnimInstance_DriverIK_CP_Offset == 0xc40, "UTslAnimInstance::DriverIK_CP offset is not c40");
	auto constexpr UTslAnimInstance_PassengerIKAlpha_CP_Offset = offsetof(UTslAnimInstance, PassengerIKAlpha_CP);
	static_assert(UTslAnimInstance_PassengerIKAlpha_CP_Offset == 0xc70, "UTslAnimInstance::PassengerIKAlpha_CP offset is not c70");
	auto constexpr UTslAnimInstance_DriverSpineLocWS_CP_Offset = offsetof(UTslAnimInstance, DriverSpineLocWS_CP);
	static_assert(UTslAnimInstance_DriverSpineLocWS_CP_Offset == 0xc74, "UTslAnimInstance::DriverSpineLocWS_CP offset is not c74");
	auto constexpr UTslAnimInstance_VehicleSeatType_CP_Offset = offsetof(UTslAnimInstance, VehicleSeatType_CP);
	static_assert(UTslAnimInstance_VehicleSeatType_CP_Offset == 0xc80, "UTslAnimInstance::VehicleSeatType_CP offset is not c80");
	auto constexpr UTslAnimInstance_boolFieldC81_Offset = offsetof(UTslAnimInstance, boolFieldC81);
	static_assert(UTslAnimInstance_boolFieldC81_Offset == 0xc81, "UTslAnimInstance::boolFieldC81 offset is not c81");
	auto constexpr UTslAnimInstance_boolFieldC82_Offset = offsetof(UTslAnimInstance, boolFieldC82);
	static_assert(UTslAnimInstance_boolFieldC82_Offset == 0xc82, "UTslAnimInstance::boolFieldC82 offset is not c82");
	auto constexpr UTslAnimInstance_boolFieldC83_Offset = offsetof(UTslAnimInstance, boolFieldC83);
	static_assert(UTslAnimInstance_boolFieldC83_Offset == 0xc83, "UTslAnimInstance::boolFieldC83 offset is not c83");
	auto constexpr UTslAnimInstance_AnimHairAlpha_Offset = offsetof(UTslAnimInstance, AnimHairAlpha);
	static_assert(UTslAnimInstance_AnimHairAlpha_Offset == 0xc84, "UTslAnimInstance::AnimHairAlpha offset is not c84");
	auto constexpr UTslAnimInstance_VaultTimer_CP_Offset = offsetof(UTslAnimInstance, VaultTimer_CP);
	static_assert(UTslAnimInstance_VaultTimer_CP_Offset == 0xc88, "UTslAnimInstance::VaultTimer_CP offset is not c88");
	auto constexpr UTslAnimInstance_VaultTimerLast_CP_Offset = offsetof(UTslAnimInstance, VaultTimerLast_CP);
	static_assert(UTslAnimInstance_VaultTimerLast_CP_Offset == 0xc8c, "UTslAnimInstance::VaultTimerLast_CP offset is not c8c");
	auto constexpr UTslAnimInstance_LocalVaultType_CP_Offset = offsetof(UTslAnimInstance, LocalVaultType_CP);
	static_assert(UTslAnimInstance_LocalVaultType_CP_Offset == 0xc90, "UTslAnimInstance::LocalVaultType_CP offset is not c90");
	auto constexpr UTslAnimInstance_VaultAnimSequence_CP_Offset = offsetof(UTslAnimInstance, VaultAnimSequence_CP);
	static_assert(UTslAnimInstance_VaultAnimSequence_CP_Offset == 0xc98, "UTslAnimInstance::VaultAnimSequence_CP offset is not c98");
	auto constexpr UTslAnimInstance_VaultAnimLength_CP_Offset = offsetof(UTslAnimInstance, VaultAnimLength_CP);
	static_assert(UTslAnimInstance_VaultAnimLength_CP_Offset == 0xca0, "UTslAnimInstance::VaultAnimLength_CP offset is not ca0");
	auto constexpr UTslAnimInstance_VaultCurve_CP_Offset = offsetof(UTslAnimInstance, VaultCurve_CP);
	static_assert(UTslAnimInstance_VaultCurve_CP_Offset == 0xca8, "UTslAnimInstance::VaultCurve_CP offset is not ca8");
	auto constexpr UTslAnimInstance_VaultBlendInTime_CP_Offset = offsetof(UTslAnimInstance, VaultBlendInTime_CP);
	static_assert(UTslAnimInstance_VaultBlendInTime_CP_Offset == 0xcb0, "UTslAnimInstance::VaultBlendInTime_CP offset is not cb0");
	auto constexpr UTslAnimInstance_VaultBlendOutTime_CP_Offset = offsetof(UTslAnimInstance, VaultBlendOutTime_CP);
	static_assert(UTslAnimInstance_VaultBlendOutTime_CP_Offset == 0xcb4, "UTslAnimInstance::VaultBlendOutTime_CP offset is not cb4");
	auto constexpr UTslAnimInstance_boolFieldCB8_Offset = offsetof(UTslAnimInstance, boolFieldCB8);
	static_assert(UTslAnimInstance_boolFieldCB8_Offset == 0xcb8, "UTslAnimInstance::boolFieldCB8 offset is not cb8");
	auto constexpr UTslAnimInstance_VaultBlendOutProgressTime_CP_Offset = offsetof(UTslAnimInstance, VaultBlendOutProgressTime_CP);
	static_assert(UTslAnimInstance_VaultBlendOutProgressTime_CP_Offset == 0xcbc, "UTslAnimInstance::VaultBlendOutProgressTime_CP offset is not cbc");
	auto constexpr UTslAnimInstance_VaultBlendOutExactTime_CP_Offset = offsetof(UTslAnimInstance, VaultBlendOutExactTime_CP);
	static_assert(UTslAnimInstance_VaultBlendOutExactTime_CP_Offset == 0xcc0, "UTslAnimInstance::VaultBlendOutExactTime_CP offset is not cc0");
	auto constexpr UTslAnimInstance_VaultLastActionTimer_CP_Offset = offsetof(UTslAnimInstance, VaultLastActionTimer_CP);
	static_assert(UTslAnimInstance_VaultLastActionTimer_CP_Offset == 0xcc4, "UTslAnimInstance::VaultLastActionTimer_CP offset is not cc4");
	auto constexpr UTslAnimInstance_VaultAnimTime_CP_Offset = offsetof(UTslAnimInstance, VaultAnimTime_CP);
	static_assert(UTslAnimInstance_VaultAnimTime_CP_Offset == 0xcc8, "UTslAnimInstance::VaultAnimTime_CP offset is not cc8");
	auto constexpr UTslAnimInstance_VaultBlendOutTimeBuffer_Offset = offsetof(UTslAnimInstance, VaultBlendOutTimeBuffer);
	static_assert(UTslAnimInstance_VaultBlendOutTimeBuffer_Offset == 0xccc, "UTslAnimInstance::VaultBlendOutTimeBuffer offset is not ccc");
	auto constexpr UTslAnimInstance_CurrentCastAnim_CP_Offset = offsetof(UTslAnimInstance, CurrentCastAnim_CP);
	static_assert(UTslAnimInstance_CurrentCastAnim_CP_Offset == 0xcd0, "UTslAnimInstance::CurrentCastAnim_CP offset is not cd0");
	auto constexpr UTslAnimInstance_boolFieldCD1_Offset = offsetof(UTslAnimInstance, boolFieldCD1);
	static_assert(UTslAnimInstance_boolFieldCD1_Offset == 0xcd1, "UTslAnimInstance::boolFieldCD1 offset is not cd1");
	auto constexpr UTslAnimInstance_WeaponIKLH_CP_Offset = offsetof(UTslAnimInstance, WeaponIKLH_CP);
	static_assert(UTslAnimInstance_WeaponIKLH_CP_Offset == 0xcd4, "UTslAnimInstance::WeaponIKLH_CP offset is not cd4");
	auto constexpr UTslAnimInstance_WeaponIKRH_CP_Offset = offsetof(UTslAnimInstance, WeaponIKRH_CP);
	static_assert(UTslAnimInstance_WeaponIKRH_CP_Offset == 0xcd8, "UTslAnimInstance::WeaponIKRH_CP offset is not cd8");
	auto constexpr UTslAnimInstance_MontageIKLH_CP_Offset = offsetof(UTslAnimInstance, MontageIKLH_CP);
	static_assert(UTslAnimInstance_MontageIKLH_CP_Offset == 0xcdc, "UTslAnimInstance::MontageIKLH_CP offset is not cdc");
	auto constexpr UTslAnimInstance_MontageIKRH_CP_Offset = offsetof(UTslAnimInstance, MontageIKRH_CP);
	static_assert(UTslAnimInstance_MontageIKRH_CP_Offset == 0xce0, "UTslAnimInstance::MontageIKRH_CP offset is not ce0");
	auto constexpr UTslAnimInstance_IgnoreWeaponTransform_CP_Offset = offsetof(UTslAnimInstance, IgnoreWeaponTransform_CP);
	static_assert(UTslAnimInstance_IgnoreWeaponTransform_CP_Offset == 0xce4, "UTslAnimInstance::IgnoreWeaponTransform_CP offset is not ce4");
	auto constexpr UTslAnimInstance_PickupIKAlpha_CP_Offset = offsetof(UTslAnimInstance, PickupIKAlpha_CP);
	static_assert(UTslAnimInstance_PickupIKAlpha_CP_Offset == 0xce8, "UTslAnimInstance::PickupIKAlpha_CP offset is not ce8");
	auto constexpr UTslAnimInstance_TargetIKRH_CP_Offset = offsetof(UTslAnimInstance, TargetIKRH_CP);
	static_assert(UTslAnimInstance_TargetIKRH_CP_Offset == 0xcec, "UTslAnimInstance::TargetIKRH_CP offset is not cec");
	auto constexpr UTslAnimInstance_TargetIKLH_CP_Offset = offsetof(UTslAnimInstance, TargetIKLH_CP);
	static_assert(UTslAnimInstance_TargetIKLH_CP_Offset == 0xcf0, "UTslAnimInstance::TargetIKLH_CP offset is not cf0");
	auto constexpr UTslAnimInstance_ForceLegsFromAnim_CP_Offset = offsetof(UTslAnimInstance, ForceLegsFromAnim_CP);
	static_assert(UTslAnimInstance_ForceLegsFromAnim_CP_Offset == 0xcf4, "UTslAnimInstance::ForceLegsFromAnim_CP offset is not cf4");
	auto constexpr UTslAnimInstance_LastGunCache_CP_Offset = offsetof(UTslAnimInstance, LastGunCache_CP);
	static_assert(UTslAnimInstance_LastGunCache_CP_Offset == 0xcf8, "UTslAnimInstance::LastGunCache_CP offset is not cf8");
	auto constexpr UTslAnimInstance_CachedWheeledVehicle_CP_Offset = offsetof(UTslAnimInstance, CachedWheeledVehicle_CP);
	static_assert(UTslAnimInstance_CachedWheeledVehicle_CP_Offset == 0xd00, "UTslAnimInstance::CachedWheeledVehicle_CP offset is not d00");
	auto constexpr UTslAnimInstance_CachedFloatingVehicle_CP_Offset = offsetof(UTslAnimInstance, CachedFloatingVehicle_CP);
	static_assert(UTslAnimInstance_CachedFloatingVehicle_CP_Offset == 0xd08, "UTslAnimInstance::CachedFloatingVehicle_CP offset is not d08");
	auto constexpr UTslAnimInstance_PassengerAimBS_CP_Offset = offsetof(UTslAnimInstance, PassengerAimBS_CP);
	static_assert(UTslAnimInstance_PassengerAimBS_CP_Offset == 0xd10, "UTslAnimInstance::PassengerAimBS_CP offset is not d10");
	auto constexpr UTslAnimInstance_PassengerTransitionOut_CP_Offset = offsetof(UTslAnimInstance, PassengerTransitionOut_CP);
	static_assert(UTslAnimInstance_PassengerTransitionOut_CP_Offset == 0xd18, "UTslAnimInstance::PassengerTransitionOut_CP offset is not d18");
	auto constexpr UTslAnimInstance_PassengerTransitionIn_CP_Offset = offsetof(UTslAnimInstance, PassengerTransitionIn_CP);
	static_assert(UTslAnimInstance_PassengerTransitionIn_CP_Offset == 0xd20, "UTslAnimInstance::PassengerTransitionIn_CP offset is not d20");
	auto constexpr UTslAnimInstance_PassengerIdle_Rifle_CP_Offset = offsetof(UTslAnimInstance, PassengerIdle_Rifle_CP);
	static_assert(UTslAnimInstance_PassengerIdle_Rifle_CP_Offset == 0xd28, "UTslAnimInstance::PassengerIdle_Rifle_CP offset is not d28");
	auto constexpr UTslAnimInstance_PassengerIdle_Unarmed_CP_Offset = offsetof(UTslAnimInstance, PassengerIdle_Unarmed_CP);
	static_assert(UTslAnimInstance_PassengerIdle_Unarmed_CP_Offset == 0xd30, "UTslAnimInstance::PassengerIdle_Unarmed_CP offset is not d30");
	auto constexpr UTslAnimInstance_PassengerIdle_Grenade_CP_Offset = offsetof(UTslAnimInstance, PassengerIdle_Grenade_CP);
	static_assert(UTslAnimInstance_PassengerIdle_Grenade_CP_Offset == 0xd38, "UTslAnimInstance::PassengerIdle_Grenade_CP offset is not d38");
	auto constexpr UTslAnimInstance_PassengerIdle_Melee_CP_Offset = offsetof(UTslAnimInstance, PassengerIdle_Melee_CP);
	static_assert(UTslAnimInstance_PassengerIdle_Melee_CP_Offset == 0xd40, "UTslAnimInstance::PassengerIdle_Melee_CP offset is not d40");
	auto constexpr UTslAnimInstance_CurveAimState_CP_Offset = offsetof(UTslAnimInstance, CurveAimState_CP);
	static_assert(UTslAnimInstance_CurveAimState_CP_Offset == 0xd48, "UTslAnimInstance::CurveAimState_CP offset is not d48");
	auto constexpr UTslAnimInstance_boolFieldD58_Offset = offsetof(UTslAnimInstance, boolFieldD58);
	static_assert(UTslAnimInstance_boolFieldD58_Offset == 0xd58, "UTslAnimInstance::boolFieldD58 offset is not d58");
	auto constexpr UTslAnimInstance_boolFieldD59_Offset = offsetof(UTslAnimInstance, boolFieldD59);
	static_assert(UTslAnimInstance_boolFieldD59_Offset == 0xd59, "UTslAnimInstance::boolFieldD59 offset is not d59");
	auto constexpr UTslAnimInstance_boolFieldD5A_Offset = offsetof(UTslAnimInstance, boolFieldD5A);
	static_assert(UTslAnimInstance_boolFieldD5A_Offset == 0xd5a, "UTslAnimInstance::boolFieldD5A offset is not d5a");
	auto constexpr UTslAnimInstance_AnimatedHairsAlpha_Offset = offsetof(UTslAnimInstance, AnimatedHairsAlpha);
	static_assert(UTslAnimInstance_AnimatedHairsAlpha_Offset == 0xd64, "UTslAnimInstance::AnimatedHairsAlpha offset is not d64");
	auto constexpr UTslAnimInstance_boolFieldD68_Offset = offsetof(UTslAnimInstance, boolFieldD68);
	static_assert(UTslAnimInstance_boolFieldD68_Offset == 0xd68, "UTslAnimInstance::boolFieldD68 offset is not d68");
	auto constexpr UTslAnimInstance_MontageMeleeAttack1_Offset = offsetof(UTslAnimInstance, MontageMeleeAttack1);
	static_assert(UTslAnimInstance_MontageMeleeAttack1_Offset == 0xd70, "UTslAnimInstance::MontageMeleeAttack1 offset is not d70");
	auto constexpr UTslAnimInstance_MontageMeleeAttack2_Offset = offsetof(UTslAnimInstance, MontageMeleeAttack2);
	static_assert(UTslAnimInstance_MontageMeleeAttack2_Offset == 0xd78, "UTslAnimInstance::MontageMeleeAttack2 offset is not d78");
	auto constexpr UTslAnimInstance_MontageMeleeAttack3_Offset = offsetof(UTslAnimInstance, MontageMeleeAttack3);
	static_assert(UTslAnimInstance_MontageMeleeAttack3_Offset == 0xd80, "UTslAnimInstance::MontageMeleeAttack3 offset is not d80");
	auto constexpr UTslAnimInstance_MontagePunchingAttack1_Offset = offsetof(UTslAnimInstance, MontagePunchingAttack1);
	static_assert(UTslAnimInstance_MontagePunchingAttack1_Offset == 0xd88, "UTslAnimInstance::MontagePunchingAttack1 offset is not d88");
	auto constexpr UTslAnimInstance_MontagePunchingAttack2_Offset = offsetof(UTslAnimInstance, MontagePunchingAttack2);
	static_assert(UTslAnimInstance_MontagePunchingAttack2_Offset == 0xd90, "UTslAnimInstance::MontagePunchingAttack2 offset is not d90");
	auto constexpr UTslAnimInstance_MontagePunchingAttack3_Offset = offsetof(UTslAnimInstance, MontagePunchingAttack3);
	static_assert(UTslAnimInstance_MontagePunchingAttack3_Offset == 0xd98, "UTslAnimInstance::MontagePunchingAttack3 offset is not d98");
	auto constexpr UTslAnimInstance_FPPSprintAnimScalar_Offset = offsetof(UTslAnimInstance, FPPSprintAnimScalar);
	static_assert(UTslAnimInstance_FPPSprintAnimScalar_Offset == 0xda0, "UTslAnimInstance::FPPSprintAnimScalar offset is not da0");
	auto constexpr UTslAnimInstance_FPP_PrimaryAndSecondaryItemOffset_Offset = offsetof(UTslAnimInstance, FPP_PrimaryAndSecondaryItemOffset);
	static_assert(UTslAnimInstance_FPP_PrimaryAndSecondaryItemOffset_Offset == 0xda4, "UTslAnimInstance::FPP_PrimaryAndSecondaryItemOffset offset is not da4");
	auto constexpr UTslAnimInstance_PunchingAlphaOneTarget_CP_Offset = offsetof(UTslAnimInstance, PunchingAlphaOneTarget_CP);
	static_assert(UTslAnimInstance_PunchingAlphaOneTarget_CP_Offset == 0xdb0, "UTslAnimInstance::PunchingAlphaOneTarget_CP offset is not db0");
	auto constexpr UTslAnimInstance_PunchingAlphaInterpSpeed_Offset = offsetof(UTslAnimInstance, PunchingAlphaInterpSpeed);
	static_assert(UTslAnimInstance_PunchingAlphaInterpSpeed_Offset == 0xdb4, "UTslAnimInstance::PunchingAlphaInterpSpeed offset is not db4");
	auto constexpr UTslAnimInstance_SprintWeaponLoweringScalar_CP_Offset = offsetof(UTslAnimInstance, SprintWeaponLoweringScalar_CP);
	static_assert(UTslAnimInstance_SprintWeaponLoweringScalar_CP_Offset == 0xdb8, "UTslAnimInstance::SprintWeaponLoweringScalar_CP offset is not db8");
	auto constexpr UTslAnimInstance_ThrowStateSwitchInterpSpeed_Offset = offsetof(UTslAnimInstance, ThrowStateSwitchInterpSpeed);
	static_assert(UTslAnimInstance_ThrowStateSwitchInterpSpeed_Offset == 0xdbc, "UTslAnimInstance::ThrowStateSwitchInterpSpeed offset is not dbc");
	auto constexpr UTslAnimInstance_VaultingEvalTimeout_Offset = offsetof(UTslAnimInstance, VaultingEvalTimeout);
	static_assert(UTslAnimInstance_VaultingEvalTimeout_Offset == 0xdc0, "UTslAnimInstance::VaultingEvalTimeout offset is not dc0");
	auto constexpr UTslAnimInstance_UnarmedAnimDB_CP_Offset = offsetof(UTslAnimInstance, UnarmedAnimDB_CP);
	static_assert(UTslAnimInstance_UnarmedAnimDB_CP_Offset == 0xdc8, "UTslAnimInstance::UnarmedAnimDB_CP offset is not dc8");
	auto constexpr UTslAnimInstance_RifleAnimDB_CP_Offset = offsetof(UTslAnimInstance, RifleAnimDB_CP);
	static_assert(UTslAnimInstance_RifleAnimDB_CP_Offset == 0xdd0, "UTslAnimInstance::RifleAnimDB_CP offset is not dd0");
	auto constexpr UTslAnimInstance_MeleeAnimDB_CP_Offset = offsetof(UTslAnimInstance, MeleeAnimDB_CP);
	static_assert(UTslAnimInstance_MeleeAnimDB_CP_Offset == 0xdd8, "UTslAnimInstance::MeleeAnimDB_CP offset is not dd8");
	auto constexpr UTslAnimInstance_GrenadeAnimDB_CP_Offset = offsetof(UTslAnimInstance, GrenadeAnimDB_CP);
	static_assert(UTslAnimInstance_GrenadeAnimDB_CP_Offset == 0xde0, "UTslAnimInstance::GrenadeAnimDB_CP offset is not de0");
	auto constexpr UTslAnimInstance_DefaultSlotPrimary_Male_CP_Offset = offsetof(UTslAnimInstance, DefaultSlotPrimary_Male_CP);
	static_assert(UTslAnimInstance_DefaultSlotPrimary_Male_CP_Offset == 0xdf0, "UTslAnimInstance::DefaultSlotPrimary_Male_CP offset is not df0");
	auto constexpr UTslAnimInstance_DefaultSlotSecondary_Male_CP_Offset = offsetof(UTslAnimInstance, DefaultSlotSecondary_Male_CP);
	static_assert(UTslAnimInstance_DefaultSlotSecondary_Male_CP_Offset == 0xe20, "UTslAnimInstance::DefaultSlotSecondary_Male_CP offset is not e20");
	auto constexpr UTslAnimInstance_DefaultSlotMelee_Male_CP_Offset = offsetof(UTslAnimInstance, DefaultSlotMelee_Male_CP);
	static_assert(UTslAnimInstance_DefaultSlotMelee_Male_CP_Offset == 0xe50, "UTslAnimInstance::DefaultSlotMelee_Male_CP offset is not e50");
	auto constexpr UTslAnimInstance_DefaultSlotThrown_Male_CP_Offset = offsetof(UTslAnimInstance, DefaultSlotThrown_Male_CP);
	static_assert(UTslAnimInstance_DefaultSlotThrown_Male_CP_Offset == 0xe80, "UTslAnimInstance::DefaultSlotThrown_Male_CP offset is not e80");
	auto constexpr UTslAnimInstance_DefaultSlotPrimary_Female_CP_Offset = offsetof(UTslAnimInstance, DefaultSlotPrimary_Female_CP);
	static_assert(UTslAnimInstance_DefaultSlotPrimary_Female_CP_Offset == 0xeb0, "UTslAnimInstance::DefaultSlotPrimary_Female_CP offset is not eb0");
	auto constexpr UTslAnimInstance_DefaultSlotSecondary_Female_CP_Offset = offsetof(UTslAnimInstance, DefaultSlotSecondary_Female_CP);
	static_assert(UTslAnimInstance_DefaultSlotSecondary_Female_CP_Offset == 0xee0, "UTslAnimInstance::DefaultSlotSecondary_Female_CP offset is not ee0");
	auto constexpr UTslAnimInstance_DefaultSlotThrown_Female_CP_Offset = offsetof(UTslAnimInstance, DefaultSlotThrown_Female_CP);
	static_assert(UTslAnimInstance_DefaultSlotThrown_Female_CP_Offset == 0xf10, "UTslAnimInstance::DefaultSlotThrown_Female_CP offset is not f10");
	auto constexpr UTslAnimInstance_DefaultSlotMelee_Female_CP_Offset = offsetof(UTslAnimInstance, DefaultSlotMelee_Female_CP);
	static_assert(UTslAnimInstance_DefaultSlotMelee_Female_CP_Offset == 0xf40, "UTslAnimInstance::DefaultSlotMelee_Female_CP offset is not f40");
	auto constexpr UTslAnimInstance_SprintLocoTimeMultiplier_Offset = offsetof(UTslAnimInstance, SprintLocoTimeMultiplier);
	static_assert(UTslAnimInstance_SprintLocoTimeMultiplier_Offset == 0xf70, "UTslAnimInstance::SprintLocoTimeMultiplier offset is not f70");
	auto constexpr UTslAnimInstance_SprintLocoTimeMultiplier_FPP_Offset = offsetof(UTslAnimInstance, SprintLocoTimeMultiplier_FPP);
	static_assert(UTslAnimInstance_SprintLocoTimeMultiplier_FPP_Offset == 0xf74, "UTslAnimInstance::SprintLocoTimeMultiplier_FPP offset is not f74");
	auto constexpr UTslAnimInstance_SprintLocoTimeAlphaScalar_Offset = offsetof(UTslAnimInstance, SprintLocoTimeAlphaScalar);
	static_assert(UTslAnimInstance_SprintLocoTimeAlphaScalar_Offset == 0xf78, "UTslAnimInstance::SprintLocoTimeAlphaScalar offset is not f78");
	auto constexpr UTslAnimInstance_SprintLocoTimeAlphaScalar_FPP_Offset = offsetof(UTslAnimInstance, SprintLocoTimeAlphaScalar_FPP);
	static_assert(UTslAnimInstance_SprintLocoTimeAlphaScalar_FPP_Offset == 0xf7c, "UTslAnimInstance::SprintLocoTimeAlphaScalar_FPP offset is not f7c");
	auto constexpr UTslAnimInstance_SprintLocoInstantScalar_Offset = offsetof(UTslAnimInstance, SprintLocoInstantScalar);
	static_assert(UTslAnimInstance_SprintLocoInstantScalar_Offset == 0xf80, "UTslAnimInstance::SprintLocoInstantScalar offset is not f80");
	auto constexpr UTslAnimInstance_LocomotionDirectionInterp_Offset = offsetof(UTslAnimInstance, LocomotionDirectionInterp);
	static_assert(UTslAnimInstance_LocomotionDirectionInterp_Offset == 0xf84, "UTslAnimInstance::LocomotionDirectionInterp offset is not f84");
	auto constexpr UTslAnimInstance_LeanYawInterpSpeedMin_Offset = offsetof(UTslAnimInstance, LeanYawInterpSpeedMin);
	static_assert(UTslAnimInstance_LeanYawInterpSpeedMin_Offset == 0xf88, "UTslAnimInstance::LeanYawInterpSpeedMin offset is not f88");
	auto constexpr UTslAnimInstance_LeanYawInterpSpeedMax_Offset = offsetof(UTslAnimInstance, LeanYawInterpSpeedMax);
	static_assert(UTslAnimInstance_LeanYawInterpSpeedMax_Offset == 0xf8c, "UTslAnimInstance::LeanYawInterpSpeedMax offset is not f8c");
	auto constexpr UTslAnimInstance_LeanYawGlobalMultiplier_Offset = offsetof(UTslAnimInstance, LeanYawGlobalMultiplier);
	static_assert(UTslAnimInstance_LeanYawGlobalMultiplier_Offset == 0xf90, "UTslAnimInstance::LeanYawGlobalMultiplier offset is not f90");
	auto constexpr UTslAnimInstance_LeanYawClamp_Offset = offsetof(UTslAnimInstance, LeanYawClamp);
	static_assert(UTslAnimInstance_LeanYawClamp_Offset == 0xf94, "UTslAnimInstance::LeanYawClamp offset is not f94");
	auto constexpr UTslAnimInstance_SprintLocoStandLimit_High_Offset = offsetof(UTslAnimInstance, SprintLocoStandLimit_High);
	static_assert(UTslAnimInstance_SprintLocoStandLimit_High_Offset == 0xf98, "UTslAnimInstance::SprintLocoStandLimit_High offset is not f98");
	auto constexpr UTslAnimInstance_SprintLocoCrouchLimit_High_Offset = offsetof(UTslAnimInstance, SprintLocoCrouchLimit_High);
	static_assert(UTslAnimInstance_SprintLocoCrouchLimit_High_Offset == 0xf9c, "UTslAnimInstance::SprintLocoCrouchLimit_High offset is not f9c");
	auto constexpr UTslAnimInstance_SprintLocoProneLimit_High_Offset = offsetof(UTslAnimInstance, SprintLocoProneLimit_High);
	static_assert(UTslAnimInstance_SprintLocoProneLimit_High_Offset == 0xfa0, "UTslAnimInstance::SprintLocoProneLimit_High offset is not fa0");
	auto constexpr UTslAnimInstance_SprintLocoStandLimit_Low_Offset = offsetof(UTslAnimInstance, SprintLocoStandLimit_Low);
	static_assert(UTslAnimInstance_SprintLocoStandLimit_Low_Offset == 0xfa4, "UTslAnimInstance::SprintLocoStandLimit_Low offset is not fa4");
	auto constexpr UTslAnimInstance_SprintLocoCrouchLimit_Low_Offset = offsetof(UTslAnimInstance, SprintLocoCrouchLimit_Low);
	static_assert(UTslAnimInstance_SprintLocoCrouchLimit_Low_Offset == 0xfa8, "UTslAnimInstance::SprintLocoCrouchLimit_Low offset is not fa8");
	auto constexpr UTslAnimInstance_SprintLocoProneLimit_Low_Offset = offsetof(UTslAnimInstance, SprintLocoProneLimit_Low);
	static_assert(UTslAnimInstance_SprintLocoProneLimit_Low_Offset == 0xfac, "UTslAnimInstance::SprintLocoProneLimit_Low offset is not fac");
	auto constexpr UTslAnimInstance_SprintLocoLimitInterpSpeed_Offset = offsetof(UTslAnimInstance, SprintLocoLimitInterpSpeed);
	static_assert(UTslAnimInstance_SprintLocoLimitInterpSpeed_Offset == 0xfb0, "UTslAnimInstance::SprintLocoLimitInterpSpeed offset is not fb0");
	auto constexpr UTslAnimInstance_FlarePitchActivationLimit_Stand_Offset = offsetof(UTslAnimInstance, FlarePitchActivationLimit_Stand);
	static_assert(UTslAnimInstance_FlarePitchActivationLimit_Stand_Offset == 0xfb4, "UTslAnimInstance::FlarePitchActivationLimit_Stand offset is not fb4");
	auto constexpr UTslAnimInstance_FlarePitchActivationLimit_Prone_Offset = offsetof(UTslAnimInstance, FlarePitchActivationLimit_Prone);
	static_assert(UTslAnimInstance_FlarePitchActivationLimit_Prone_Offset == 0xfb8, "UTslAnimInstance::FlarePitchActivationLimit_Prone offset is not fb8");
	auto constexpr UTslAnimInstance_FlareReadyInterpSpeed_Offset = offsetof(UTslAnimInstance, FlareReadyInterpSpeed);
	static_assert(UTslAnimInstance_FlareReadyInterpSpeed_Offset == 0xfbc, "UTslAnimInstance::FlareReadyInterpSpeed offset is not fbc");
	auto constexpr UTslAnimInstance_RightClavicleCompensation_Offset = offsetof(UTslAnimInstance, RightClavicleCompensation);
	static_assert(UTslAnimInstance_RightClavicleCompensation_Offset == 0xfc0, "UTslAnimInstance::RightClavicleCompensation offset is not fc0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
