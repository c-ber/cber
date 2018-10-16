#pragma once
#include "UTslCharacter.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ETimelineDirection.hpp"
#include "FTimerHandle.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "EVaultAnimType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerPawn_v2_C // Size: 0x1C60
	: public UTslCharacter // Size: 0x19C0
{
private:
	typedef UPlayerPawn_v2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(112230); // id32("BlueprintGeneratedClass PlayerPawn_v2.PlayerPawn_v2_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x19C0 Size: 0x8 - StructProperty PlayerPawn_v2.PlayerPawn_v2_C.UberGraphFrame */
	ExternalPtr<struct UTslCameraComponent> ScopingCamera; /* Ofs: 0x19C8 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.ScopingCamera */
	ExternalPtr<struct UTslCharacterSpringArmComponent> ThirdPersonSpringArm; /* Ofs: 0x19D0 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.ThirdPersonSpringArm */
	ExternalPtr<struct UTslCameraComponent> FirstPersonCamera; /* Ofs: 0x19D8 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.FirstPersonCamera */
	ExternalPtr<struct UCameraComponent> ThirdPersonCamera; /* Ofs: 0x19E0 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.ThirdPersonCamera */
	ExternalPtr<struct UPhysicalAnimationComponent> PhysicalAnimation; /* Ofs: 0x19E8 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.PhysicalAnimation */
	ExternalPtr<struct UTslAccessoryComponent> Slot_Thrown; /* Ofs: 0x19F0 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.Slot_Thrown */
	ExternalPtr<struct UTslAccessoryComponent> slot_melee; /* Ofs: 0x19F8 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.slot_melee */
	ExternalPtr<struct UTslAccessoryComponent> slot_sidearm; /* Ofs: 0x1A00 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.slot_sidearm */
	ExternalPtr<struct UTslAccessoryComponent> slot_secondary; /* Ofs: 0x1A08 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.slot_secondary */
	ExternalPtr<struct UTslAccessoryComponent> slot_primary; /* Ofs: 0x1A10 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.slot_primary */
	ExternalPtr<struct UArrowComponent> WeaponCollisionArrow; /* Ofs: 0x1A18 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.WeaponCollisionArrow */
	ExternalPtr<struct UArrowComponent> AudioListener; /* Ofs: 0x1A20 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.AudioListener */
	ExternalPtr<struct USphereComponent> BulletEffect_Sphere; /* Ofs: 0x1A28 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.BulletEffect_Sphere */
	ExternalPtr<struct USpringArmComponent> ScopingSpringArm; /* Ofs: 0x1A30 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.ScopingSpringArm */
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0x1A38 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonSpringArmInVehicle; /* Ofs: 0x1A40 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.ThirdPersonSpringArmInVehicle */
	ExternalPtr<struct UCameraComponent> FirstPersonCameraInVehicle; /* Ofs: 0x1A48 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.FirstPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FirstPersonSpringArmInVehicle; /* Ofs: 0x1A50 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.FirstPersonSpringArmInVehicle */
	ExternalPtr<struct USpringArmComponent> FirstPersonSpringArm; /* Ofs: 0x1A58 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.FirstPersonSpringArm */
	float _____0______0_DEE66D884AF1FD2B9A26539D66F76F92; /* Ofs: 0x1A60 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C._____0______0_DEE66D884AF1FD2B9A26539D66F76F92 */
	TEnumAsByte<enum ETimelineDirection> _____0__Direction_DEE66D884AF1FD2B9A26539D66F76F92; /* Ofs: 0x1A64 Size: 0x1 - ByteProperty PlayerPawn_v2.PlayerPawn_v2_C._____0__Direction_DEE66D884AF1FD2B9A26539D66F76F92 */
	uint8_t UnknownData1A65[0x3];
	ExternalPtr<struct UTimelineComponent> ______x__1; /* Ofs: 0x1A68 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.АР„З|·xЗ_1 */
	FTimerHandle TestInspectHandle; /* Ofs: 0x1A70 Size: 0x8 - StructProperty PlayerPawn_v2.PlayerPawn_v2_C.TestInspectHandle */
	ExternalPtr<struct UAnimInstance> BaseAnimInstance; /* Ofs: 0x1A78 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.BaseAnimInstance */
	uint8_t boolField1A80;
	uint8_t UnknownData1A81[0x3];
	float MinVCut; /* Ofs: 0x1A84 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.MinVCut */
	float MinZVCut; /* Ofs: 0x1A88 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.MinZVCut */
	float DmgFactor; /* Ofs: 0x1A8C Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.DmgFactor */
	float VDampingZ; /* Ofs: 0x1A90 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.VDampingZ */
	uint8_t UnknownData1A94[0x4];
	ExternalPtr<struct UClass> TestWeaponItemClass; /* Ofs: 0x1A98 Size: 0x8 - ClassProperty PlayerPawn_v2.PlayerPawn_v2_C.TestWeaponItemClass */
	ExternalPtr<struct UClass> TestAmmoItemClass; /* Ofs: 0x1AA0 Size: 0x8 - ClassProperty PlayerPawn_v2.PlayerPawn_v2_C.TestAmmoItemClass */
	FName RagdollBone; /* Ofs: 0x1AA8 Size: 0x8 - NameProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollBone */
	FName RagdollBone_1; /* Ofs: 0x1AB0 Size: 0x8 - NameProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollBone_1 */
	FName RagdollBone_2; /* Ofs: 0x1AB8 Size: 0x8 - NameProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollBone_2 */
	FName RagdollBone_3; /* Ofs: 0x1AC0 Size: 0x8 - NameProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollBone_3 */
	FName RagdollBone_4; /* Ofs: 0x1AC8 Size: 0x8 - NameProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollBone_4 */
	FName RagdollBone_5; /* Ofs: 0x1AD0 Size: 0x8 - NameProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollBone_5 */
	FName RagdollBone_6; /* Ofs: 0x1AD8 Size: 0x8 - NameProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollBone_6 */
	float MaxJumpZVelocity; /* Ofs: 0x1AE0 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.MaxJumpZVelocity */
	float MovementAfterJumpCounter; /* Ofs: 0x1AE4 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.MovementAfterJumpCounter */
	float MinJumpZVelocity; /* Ofs: 0x1AE8 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.MinJumpZVelocity */
	float MovementAfterJumpCounterDecrease; /* Ofs: 0x1AEC Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.MovementAfterJumpCounterDecrease */
	float MaxMovementAfterJumpCounter; /* Ofs: 0x1AF0 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.MaxMovementAfterJumpCounter */
	uint8_t UnknownData1AF4[0x4];
	ExternalPtr<struct UCurveVector> Curve_TPP2FPP; /* Ofs: 0x1AF8 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.Curve_TPP2FPP */
	ExternalPtr<struct UCurveVector> Curve_FPP2TPP; /* Ofs: 0x1B00 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.Curve_FPP2TPP */
	ExternalPtr<struct UCurveVector> Curve_TPP2FPP_Pitch; /* Ofs: 0x1B08 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.Curve_TPP2FPP_Pitch */
	ExternalPtr<struct UCurveVector> Curve_FPP2TPP_Pitch; /* Ofs: 0x1B10 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.Curve_FPP2TPP_Pitch */
	uint8_t boolField1B18;
	uint8_t UnknownData1B19[0x3];
	float ADS_ReadyAngle; /* Ofs: 0x1B1C Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.ADS_ReadyAngle */
	float SocketOffset_YZ; /* Ofs: 0x1B20 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.SocketOffset_YZ */
	FRotator DirectionInertia; /* Ofs: 0x1B24 Size: 0xC - StructProperty PlayerPawn_v2.PlayerPawn_v2_C.DirectionInertia */
	uint8_t boolField1B30;
	uint8_t UnknownData1B31[0x3];
	FRotator HitReaction_Direction; /* Ofs: 0x1B34 Size: 0xC - StructProperty PlayerPawn_v2.PlayerPawn_v2_C.HitReaction_Direction */
	ExternalPtr<struct UCurveFloat> HitReaction_Curve; /* Ofs: 0x1B40 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.HitReaction_Curve */
	float HitReaction_Time; /* Ofs: 0x1B48 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.HitReaction_Time */
	uint8_t boolField1B4C;
	uint8_t UnknownData1B4D[0x3];
	ExternalPtr<struct UTslWeapon_Gun> ActiveGunRef; /* Ofs: 0x1B50 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.ActiveGunRef */
	uint8_t boolField1B58;
	uint8_t UnknownData1B59[0x7];
	ExternalPtr<struct UW_AdaptiveCrosshair_C> CrosshairWidget; /* Ofs: 0x1B60 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.CrosshairWidget */
	FVector LastTraceCache; /* Ofs: 0x1B68 Size: 0xC - StructProperty PlayerPawn_v2.PlayerPawn_v2_C.LastTraceCache */
	float LastDistanceCache; /* Ofs: 0x1B74 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.LastDistanceCache */
	float LastDistanceCacheAlpha; /* Ofs: 0x1B78 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.LastDistanceCacheAlpha */
	uint8_t UnknownData1B7C[0x4];
	ExternalPtr<struct UBP_CameraMan_C> CameraManRef; /* Ofs: 0x1B80 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.CameraManRef */
	float YawTarget; /* Ofs: 0x1B88 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.YawTarget */
	float YawStep; /* Ofs: 0x1B8C Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.YawStep */
	float GameTime; /* Ofs: 0x1B90 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.GameTime */
	uint8_t UnknownData1B94[0x4];
	ExternalPtr<struct UCameraModifier_CameraShake> Shake; /* Ofs: 0x1B98 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.Shake */
	float WeaponCollisionAlpha; /* Ofs: 0x1BA0 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.WeaponCollisionAlpha */
	uint8_t UnknownData1BA4[0x4];
	ExternalPtr<struct UW_SprintBar_C> SprintBarWidget; /* Ofs: 0x1BA8 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.SprintBarWidget */
	ExternalPtr<struct UStaticMeshComponent> ImpactMeshRef; /* Ofs: 0x1BB0 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.ImpactMeshRef */
	uint8_t boolField1BB8;
	uint8_t boolField1BB9;
	uint8_t boolField1BBA;
	uint8_t boolField1BBB;
	uint8_t UnknownData1BBC[0x4];
	ExternalPtr<struct UTN_AudioTestActor_V2_C> AudioActorRef; /* Ofs: 0x1BC0 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.AudioActorRef */
	uint8_t boolField1BC8;
	uint8_t UnknownData1BC9[0x3];
	float ADSDebuffValue; /* Ofs: 0x1BCC Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.ADSDebuffValue */
	ExternalPtr<struct UCurveFloat> Curve_EjectDamage; /* Ofs: 0x1BD0 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.Curve_EjectDamage */
	ExternalPtr<struct UBP_BulletCamActor_C> WeaponBulletCamRef; /* Ofs: 0x1BD8 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.WeaponBulletCamRef */
	uint8_t boolField1BE0;
	uint8_t UnknownData1BE1[0x3];
	float VaultingTimer; /* Ofs: 0x1BE4 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.VaultingTimer */
	uint8_t boolField1BE8;
	uint8_t UnknownData1BE9[0x7];
	ExternalPtr<struct UBP_VaultHelperActor_C> VaultHelperRef; /* Ofs: 0x1BF0 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.VaultHelperRef */
	TEnumAsByte<enum EVaultAnimType> CurrentVaultType; /* Ofs: 0x1BF8 Size: 0x1 - EnumProperty PlayerPawn_v2.PlayerPawn_v2_C.CurrentVaultType */
	uint8_t UnknownData1BF9[0x3];
	FVector VaultEndVelocity; /* Ofs: 0x1BFC Size: 0xC - StructProperty PlayerPawn_v2.PlayerPawn_v2_C.VaultEndVelocity */
	FVector VaultLastLocation; /* Ofs: 0x1C08 Size: 0xC - StructProperty PlayerPawn_v2.PlayerPawn_v2_C.VaultLastLocation */
	uint8_t boolField1C14;
	uint8_t boolField1C15;
	uint8_t UnknownData1C16[0x2];
	float VaultingDirection; /* Ofs: 0x1C18 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.VaultingDirection */
	uint8_t UnknownData1C1C[0x4];
	ExternalPtr<struct UW_WeaponMenu_C> WeapMenuRef; /* Ofs: 0x1C20 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.WeapMenuRef */
	ExternalPtr<struct UBP_ActiveRagdollActor_C> RagdollActorRef; /* Ofs: 0x1C28 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollActorRef */
	FVector RagdollActorPos; /* Ofs: 0x1C30 Size: 0xC - StructProperty PlayerPawn_v2.PlayerPawn_v2_C.RagdollActorPos */
	float VaultCapsuleGroundOffset; /* Ofs: 0x1C3C Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.VaultCapsuleGroundOffset */
	ExternalPtr<struct UVaultingData> CurrentVaultData; /* Ofs: 0x1C40 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.CurrentVaultData */
	ExternalPtr<struct UTslAdaptiveCrosshairWidget> AdaptiveCrosshairWidget; /* Ofs: 0x1C48 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.AdaptiveCrosshairWidget */
	float LastVaultScanTime; /* Ofs: 0x1C50 Size: 0x4 - FloatProperty PlayerPawn_v2.PlayerPawn_v2_C.LastVaultScanTime */
	uint8_t boolField1C54;
	uint8_t UnknownData1C55[0x3];
	ExternalPtr<struct UW_RecoilDebugMenu_C> RecoilMenuRef; /* Ofs: 0x1C58 Size: 0x8 - ObjectProperty PlayerPawn_v2.PlayerPawn_v2_C.RecoilMenuRef */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x19C0, value); }
	inline bool SetScopingCamera(t_structHelper inst, ExternalPtr<struct UTslCameraComponent> value) { inst.WriteOffset(0x19C8, value); }
	inline bool SetThirdPersonSpringArm(t_structHelper inst, ExternalPtr<struct UTslCharacterSpringArmComponent> value) { inst.WriteOffset(0x19D0, value); }
	inline bool SetFirstPersonCamera(t_structHelper inst, ExternalPtr<struct UTslCameraComponent> value) { inst.WriteOffset(0x19D8, value); }
	inline bool SetThirdPersonCamera(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x19E0, value); }
	inline bool SetPhysicalAnimation(t_structHelper inst, ExternalPtr<struct UPhysicalAnimationComponent> value) { inst.WriteOffset(0x19E8, value); }
	inline bool SetSlot_Thrown(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x19F0, value); }
	inline bool Setslot_melee(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x19F8, value); }
	inline bool Setslot_sidearm(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x1A00, value); }
	inline bool Setslot_secondary(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x1A08, value); }
	inline bool Setslot_primary(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x1A10, value); }
	inline bool SetWeaponCollisionArrow(t_structHelper inst, ExternalPtr<struct UArrowComponent> value) { inst.WriteOffset(0x1A18, value); }
	inline bool SetAudioListener(t_structHelper inst, ExternalPtr<struct UArrowComponent> value) { inst.WriteOffset(0x1A20, value); }
	inline bool SetBulletEffect_Sphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x1A28, value); }
	inline bool SetScopingSpringArm(t_structHelper inst, ExternalPtr<struct USpringArmComponent> value) { inst.WriteOffset(0x1A30, value); }
	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x1A38, value); }
	inline bool SetThirdPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x1A40, value); }
	inline bool SetFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x1A48, value); }
	inline bool SetFirstPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x1A50, value); }
	inline bool SetFirstPersonSpringArm(t_structHelper inst, ExternalPtr<struct USpringArmComponent> value) { inst.WriteOffset(0x1A58, value); }
	inline bool Set_____0______0_DEE66D884AF1FD2B9A26539D66F76F92(t_structHelper inst, float value) { inst.WriteOffset(0x1A60, value); }
	inline bool Set_____0__Direction_DEE66D884AF1FD2B9A26539D66F76F92(t_structHelper inst, TEnumAsByte<enum ETimelineDirection> value) { inst.WriteOffset(0x1A64, value); }
	inline bool Set______x__1(t_structHelper inst, ExternalPtr<struct UTimelineComponent> value) { inst.WriteOffset(0x1A68, value); }
	inline bool SetTestInspectHandle(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x1A70, value); }
	inline bool SetBaseAnimInstance(t_structHelper inst, ExternalPtr<struct UAnimInstance> value) { inst.WriteOffset(0x1A78, value); }
	inline bool AudioListenerIsSet()
	{
		return boolField1A80& 0x1;
	}
	inline bool SetAudioListenerIsSet(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1A80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinVCut(t_structHelper inst, float value) { inst.WriteOffset(0x1A84, value); }
	inline bool SetMinZVCut(t_structHelper inst, float value) { inst.WriteOffset(0x1A88, value); }
	inline bool SetDmgFactor(t_structHelper inst, float value) { inst.WriteOffset(0x1A8C, value); }
	inline bool SetVDampingZ(t_structHelper inst, float value) { inst.WriteOffset(0x1A90, value); }
	inline bool SetTestWeaponItemClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1A98, value); }
	inline bool SetTestAmmoItemClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1AA0, value); }
	inline bool SetRagdollBone(t_structHelper inst, FName value) { inst.WriteOffset(0x1AA8, value); }
	inline bool SetRagdollBone_1(t_structHelper inst, FName value) { inst.WriteOffset(0x1AB0, value); }
	inline bool SetRagdollBone_2(t_structHelper inst, FName value) { inst.WriteOffset(0x1AB8, value); }
	inline bool SetRagdollBone_3(t_structHelper inst, FName value) { inst.WriteOffset(0x1AC0, value); }
	inline bool SetRagdollBone_4(t_structHelper inst, FName value) { inst.WriteOffset(0x1AC8, value); }
	inline bool SetRagdollBone_5(t_structHelper inst, FName value) { inst.WriteOffset(0x1AD0, value); }
	inline bool SetRagdollBone_6(t_structHelper inst, FName value) { inst.WriteOffset(0x1AD8, value); }
	inline bool SetMaxJumpZVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x1AE0, value); }
	inline bool SetMovementAfterJumpCounter(t_structHelper inst, float value) { inst.WriteOffset(0x1AE4, value); }
	inline bool SetMinJumpZVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x1AE8, value); }
	inline bool SetMovementAfterJumpCounterDecrease(t_structHelper inst, float value) { inst.WriteOffset(0x1AEC, value); }
	inline bool SetMaxMovementAfterJumpCounter(t_structHelper inst, float value) { inst.WriteOffset(0x1AF0, value); }
	inline bool SetCurve_TPP2FPP(t_structHelper inst, ExternalPtr<struct UCurveVector> value) { inst.WriteOffset(0x1AF8, value); }
	inline bool SetCurve_FPP2TPP(t_structHelper inst, ExternalPtr<struct UCurveVector> value) { inst.WriteOffset(0x1B00, value); }
	inline bool SetCurve_TPP2FPP_Pitch(t_structHelper inst, ExternalPtr<struct UCurveVector> value) { inst.WriteOffset(0x1B08, value); }
	inline bool SetCurve_FPP2TPP_Pitch(t_structHelper inst, ExternalPtr<struct UCurveVector> value) { inst.WriteOffset(0x1B10, value); }
	inline bool bIsWeaponShoulderAttached()
	{
		return boolField1B18& 0x1;
	}
	inline bool SetbIsWeaponShoulderAttached(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B18, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetADS_ReadyAngle(t_structHelper inst, float value) { inst.WriteOffset(0x1B1C, value); }
	inline bool SetSocketOffset_YZ(t_structHelper inst, float value) { inst.WriteOffset(0x1B20, value); }
	inline bool SetDirectionInertia(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1B24, value); }
	inline bool bProcessHitReaction()
	{
		return boolField1B30& 0x1;
	}
	inline bool SetbProcessHitReaction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHitReaction_Direction(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1B34, value); }
	inline bool SetHitReaction_Curve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1B40, value); }
	inline bool SetHitReaction_Time(t_structHelper inst, float value) { inst.WriteOffset(0x1B48, value); }
	inline bool bHasVest()
	{
		return boolField1B4C& 0x1;
	}
	inline bool SetbHasVest(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B4C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetActiveGunRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x1B50, value); }
	inline bool bCameraUnderWater()
	{
		return boolField1B58& 0x1;
	}
	inline bool SetbCameraUnderWater(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCrosshairWidget(t_structHelper inst, ExternalPtr<struct UW_AdaptiveCrosshair_C> value) { inst.WriteOffset(0x1B60, value); }
	inline bool SetLastTraceCache(t_structHelper inst, FVector value) { inst.WriteOffset(0x1B68, value); }
	inline bool SetLastDistanceCache(t_structHelper inst, float value) { inst.WriteOffset(0x1B74, value); }
	inline bool SetLastDistanceCacheAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x1B78, value); }
	inline bool SetCameraManRef(t_structHelper inst, ExternalPtr<struct UBP_CameraMan_C> value) { inst.WriteOffset(0x1B80, value); }
	inline bool SetYawTarget(t_structHelper inst, float value) { inst.WriteOffset(0x1B88, value); }
	inline bool SetYawStep(t_structHelper inst, float value) { inst.WriteOffset(0x1B8C, value); }
	inline bool SetGameTime(t_structHelper inst, float value) { inst.WriteOffset(0x1B90, value); }
	inline bool SetShake(t_structHelper inst, ExternalPtr<struct UCameraModifier_CameraShake> value) { inst.WriteOffset(0x1B98, value); }
	inline bool SetWeaponCollisionAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x1BA0, value); }
	inline bool SetSprintBarWidget(t_structHelper inst, ExternalPtr<struct UW_SprintBar_C> value) { inst.WriteOffset(0x1BA8, value); }
	inline bool SetImpactMeshRef(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x1BB0, value); }
	inline bool HeavyFallStarted()
	{
		return boolField1BB8& 0x1;
	}
	inline bool SetHeavyFallStarted(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BB8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool PhysicalAnimationInitialized()
	{
		return boolField1BB9& 0x1;
	}
	inline bool SetPhysicalAnimationInitialized(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BB9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsCrosshairObstructed()
	{
		return boolField1BBA& 0x1;
	}
	inline bool SetbIsCrosshairObstructed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BBA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsInMenu()
	{
		return boolField1BBB& 0x1;
	}
	inline bool SetbIsInMenu(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BBB, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAudioActorRef(t_structHelper inst, ExternalPtr<struct UTN_AudioTestActor_V2_C> value) { inst.WriteOffset(0x1BC0, value); }
	inline bool ADSDebuff()
	{
		return boolField1BC8& 0x1;
	}
	inline bool SetADSDebuff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BC8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetADSDebuffValue(t_structHelper inst, float value) { inst.WriteOffset(0x1BCC, value); }
	inline bool SetCurve_EjectDamage(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1BD0, value); }
	inline bool SetWeaponBulletCamRef(t_structHelper inst, ExternalPtr<struct UBP_BulletCamActor_C> value) { inst.WriteOffset(0x1BD8, value); }
	inline bool bIsVaulting()
	{
		return boolField1BE0& 0x1;
	}
	inline bool SetbIsVaulting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BE0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVaultingTimer(t_structHelper inst, float value) { inst.WriteOffset(0x1BE4, value); }
	inline bool bDrawDebugVault()
	{
		return boolField1BE8& 0x1;
	}
	inline bool SetbDrawDebugVault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVaultHelperRef(t_structHelper inst, ExternalPtr<struct UBP_VaultHelperActor_C> value) { inst.WriteOffset(0x1BF0, value); }
	inline bool SetCurrentVaultType(t_structHelper inst, TEnumAsByte<enum EVaultAnimType> value) { inst.WriteOffset(0x1BF8, value); }
	inline bool SetVaultEndVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x1BFC, value); }
	inline bool SetVaultLastLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x1C08, value); }
	inline bool bIsClimbing()
	{
		return boolField1C14& 0x1;
	}
	inline bool SetbIsClimbing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C14, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEndVaultToFall()
	{
		return boolField1C15& 0x1;
	}
	inline bool SetbEndVaultToFall(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C15, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVaultingDirection(t_structHelper inst, float value) { inst.WriteOffset(0x1C18, value); }
	inline bool SetWeapMenuRef(t_structHelper inst, ExternalPtr<struct UW_WeaponMenu_C> value) { inst.WriteOffset(0x1C20, value); }
	inline bool SetRagdollActorRef(t_structHelper inst, ExternalPtr<struct UBP_ActiveRagdollActor_C> value) { inst.WriteOffset(0x1C28, value); }
	inline bool SetRagdollActorPos(t_structHelper inst, FVector value) { inst.WriteOffset(0x1C30, value); }
	inline bool SetVaultCapsuleGroundOffset(t_structHelper inst, float value) { inst.WriteOffset(0x1C3C, value); }
	inline bool SetCurrentVaultData(t_structHelper inst, ExternalPtr<struct UVaultingData> value) { inst.WriteOffset(0x1C40, value); }
	inline bool SetAdaptiveCrosshairWidget(t_structHelper inst, ExternalPtr<struct UTslAdaptiveCrosshairWidget> value) { inst.WriteOffset(0x1C48, value); }
	inline bool SetLastVaultScanTime(t_structHelper inst, float value) { inst.WriteOffset(0x1C50, value); }
	inline bool bTestVault()
	{
		return boolField1C54& 0x1;
	}
	inline bool SetbTestVault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRecoilMenuRef(t_structHelper inst, ExternalPtr<struct UW_RecoilDebugMenu_C> value) { inst.WriteOffset(0x1C58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerPawn_v2_C = sizeof(UPlayerPawn_v2_C); // 7264
    static_assert(sizeof(UPlayerPawn_v2_C) == 0x1C60, "Size of UPlayerPawn_v2_C is not correct.");
	auto constexpr UPlayerPawn_v2_C_UberGraphFrame_Offset = offsetof(UPlayerPawn_v2_C, UberGraphFrame);
	static_assert(UPlayerPawn_v2_C_UberGraphFrame_Offset == 0x19c0, "UPlayerPawn_v2_C::UberGraphFrame offset is not 19c0");
	auto constexpr UPlayerPawn_v2_C_ScopingCamera_Offset = offsetof(UPlayerPawn_v2_C, ScopingCamera);
	static_assert(UPlayerPawn_v2_C_ScopingCamera_Offset == 0x19c8, "UPlayerPawn_v2_C::ScopingCamera offset is not 19c8");
	auto constexpr UPlayerPawn_v2_C_ThirdPersonSpringArm_Offset = offsetof(UPlayerPawn_v2_C, ThirdPersonSpringArm);
	static_assert(UPlayerPawn_v2_C_ThirdPersonSpringArm_Offset == 0x19d0, "UPlayerPawn_v2_C::ThirdPersonSpringArm offset is not 19d0");
	auto constexpr UPlayerPawn_v2_C_FirstPersonCamera_Offset = offsetof(UPlayerPawn_v2_C, FirstPersonCamera);
	static_assert(UPlayerPawn_v2_C_FirstPersonCamera_Offset == 0x19d8, "UPlayerPawn_v2_C::FirstPersonCamera offset is not 19d8");
	auto constexpr UPlayerPawn_v2_C_ThirdPersonCamera_Offset = offsetof(UPlayerPawn_v2_C, ThirdPersonCamera);
	static_assert(UPlayerPawn_v2_C_ThirdPersonCamera_Offset == 0x19e0, "UPlayerPawn_v2_C::ThirdPersonCamera offset is not 19e0");
	auto constexpr UPlayerPawn_v2_C_PhysicalAnimation_Offset = offsetof(UPlayerPawn_v2_C, PhysicalAnimation);
	static_assert(UPlayerPawn_v2_C_PhysicalAnimation_Offset == 0x19e8, "UPlayerPawn_v2_C::PhysicalAnimation offset is not 19e8");
	auto constexpr UPlayerPawn_v2_C_Slot_Thrown_Offset = offsetof(UPlayerPawn_v2_C, Slot_Thrown);
	static_assert(UPlayerPawn_v2_C_Slot_Thrown_Offset == 0x19f0, "UPlayerPawn_v2_C::Slot_Thrown offset is not 19f0");
	auto constexpr UPlayerPawn_v2_C_slot_melee_Offset = offsetof(UPlayerPawn_v2_C, slot_melee);
	static_assert(UPlayerPawn_v2_C_slot_melee_Offset == 0x19f8, "UPlayerPawn_v2_C::slot_melee offset is not 19f8");
	auto constexpr UPlayerPawn_v2_C_slot_sidearm_Offset = offsetof(UPlayerPawn_v2_C, slot_sidearm);
	static_assert(UPlayerPawn_v2_C_slot_sidearm_Offset == 0x1a00, "UPlayerPawn_v2_C::slot_sidearm offset is not 1a00");
	auto constexpr UPlayerPawn_v2_C_slot_secondary_Offset = offsetof(UPlayerPawn_v2_C, slot_secondary);
	static_assert(UPlayerPawn_v2_C_slot_secondary_Offset == 0x1a08, "UPlayerPawn_v2_C::slot_secondary offset is not 1a08");
	auto constexpr UPlayerPawn_v2_C_slot_primary_Offset = offsetof(UPlayerPawn_v2_C, slot_primary);
	static_assert(UPlayerPawn_v2_C_slot_primary_Offset == 0x1a10, "UPlayerPawn_v2_C::slot_primary offset is not 1a10");
	auto constexpr UPlayerPawn_v2_C_WeaponCollisionArrow_Offset = offsetof(UPlayerPawn_v2_C, WeaponCollisionArrow);
	static_assert(UPlayerPawn_v2_C_WeaponCollisionArrow_Offset == 0x1a18, "UPlayerPawn_v2_C::WeaponCollisionArrow offset is not 1a18");
	auto constexpr UPlayerPawn_v2_C_AudioListener_Offset = offsetof(UPlayerPawn_v2_C, AudioListener);
	static_assert(UPlayerPawn_v2_C_AudioListener_Offset == 0x1a20, "UPlayerPawn_v2_C::AudioListener offset is not 1a20");
	auto constexpr UPlayerPawn_v2_C_BulletEffect_Sphere_Offset = offsetof(UPlayerPawn_v2_C, BulletEffect_Sphere);
	static_assert(UPlayerPawn_v2_C_BulletEffect_Sphere_Offset == 0x1a28, "UPlayerPawn_v2_C::BulletEffect_Sphere offset is not 1a28");
	auto constexpr UPlayerPawn_v2_C_ScopingSpringArm_Offset = offsetof(UPlayerPawn_v2_C, ScopingSpringArm);
	static_assert(UPlayerPawn_v2_C_ScopingSpringArm_Offset == 0x1a30, "UPlayerPawn_v2_C::ScopingSpringArm offset is not 1a30");
	auto constexpr UPlayerPawn_v2_C_ThirdPersonCameraInVehicle_Offset = offsetof(UPlayerPawn_v2_C, ThirdPersonCameraInVehicle);
	static_assert(UPlayerPawn_v2_C_ThirdPersonCameraInVehicle_Offset == 0x1a38, "UPlayerPawn_v2_C::ThirdPersonCameraInVehicle offset is not 1a38");
	auto constexpr UPlayerPawn_v2_C_ThirdPersonSpringArmInVehicle_Offset = offsetof(UPlayerPawn_v2_C, ThirdPersonSpringArmInVehicle);
	static_assert(UPlayerPawn_v2_C_ThirdPersonSpringArmInVehicle_Offset == 0x1a40, "UPlayerPawn_v2_C::ThirdPersonSpringArmInVehicle offset is not 1a40");
	auto constexpr UPlayerPawn_v2_C_FirstPersonCameraInVehicle_Offset = offsetof(UPlayerPawn_v2_C, FirstPersonCameraInVehicle);
	static_assert(UPlayerPawn_v2_C_FirstPersonCameraInVehicle_Offset == 0x1a48, "UPlayerPawn_v2_C::FirstPersonCameraInVehicle offset is not 1a48");
	auto constexpr UPlayerPawn_v2_C_FirstPersonSpringArmInVehicle_Offset = offsetof(UPlayerPawn_v2_C, FirstPersonSpringArmInVehicle);
	static_assert(UPlayerPawn_v2_C_FirstPersonSpringArmInVehicle_Offset == 0x1a50, "UPlayerPawn_v2_C::FirstPersonSpringArmInVehicle offset is not 1a50");
	auto constexpr UPlayerPawn_v2_C_FirstPersonSpringArm_Offset = offsetof(UPlayerPawn_v2_C, FirstPersonSpringArm);
	static_assert(UPlayerPawn_v2_C_FirstPersonSpringArm_Offset == 0x1a58, "UPlayerPawn_v2_C::FirstPersonSpringArm offset is not 1a58");
	auto constexpr UPlayerPawn_v2_C______0______0_DEE66D884AF1FD2B9A26539D66F76F92_Offset = offsetof(UPlayerPawn_v2_C, _____0______0_DEE66D884AF1FD2B9A26539D66F76F92);
	static_assert(UPlayerPawn_v2_C______0______0_DEE66D884AF1FD2B9A26539D66F76F92_Offset == 0x1a60, "UPlayerPawn_v2_C::_____0______0_DEE66D884AF1FD2B9A26539D66F76F92 offset is not 1a60");
	auto constexpr UPlayerPawn_v2_C______0__Direction_DEE66D884AF1FD2B9A26539D66F76F92_Offset = offsetof(UPlayerPawn_v2_C, _____0__Direction_DEE66D884AF1FD2B9A26539D66F76F92);
	static_assert(UPlayerPawn_v2_C______0__Direction_DEE66D884AF1FD2B9A26539D66F76F92_Offset == 0x1a64, "UPlayerPawn_v2_C::_____0__Direction_DEE66D884AF1FD2B9A26539D66F76F92 offset is not 1a64");
	auto constexpr UPlayerPawn_v2_C_АР„З|·xЗ_1_Offset = offsetof(UPlayerPawn_v2_C, АР„З|·xЗ_1);
	static_assert(UPlayerPawn_v2_C_АР„З|·xЗ_1_Offset == 0x1a68, "UPlayerPawn_v2_C::АР„З|·xЗ_1 offset is not 1a68");
	auto constexpr UPlayerPawn_v2_C_TestInspectHandle_Offset = offsetof(UPlayerPawn_v2_C, TestInspectHandle);
	static_assert(UPlayerPawn_v2_C_TestInspectHandle_Offset == 0x1a70, "UPlayerPawn_v2_C::TestInspectHandle offset is not 1a70");
	auto constexpr UPlayerPawn_v2_C_BaseAnimInstance_Offset = offsetof(UPlayerPawn_v2_C, BaseAnimInstance);
	static_assert(UPlayerPawn_v2_C_BaseAnimInstance_Offset == 0x1a78, "UPlayerPawn_v2_C::BaseAnimInstance offset is not 1a78");
	auto constexpr UPlayerPawn_v2_C_boolField1A80_Offset = offsetof(UPlayerPawn_v2_C, boolField1A80);
	static_assert(UPlayerPawn_v2_C_boolField1A80_Offset == 0x1a80, "UPlayerPawn_v2_C::boolField1A80 offset is not 1a80");
	auto constexpr UPlayerPawn_v2_C_MinVCut_Offset = offsetof(UPlayerPawn_v2_C, MinVCut);
	static_assert(UPlayerPawn_v2_C_MinVCut_Offset == 0x1a84, "UPlayerPawn_v2_C::MinVCut offset is not 1a84");
	auto constexpr UPlayerPawn_v2_C_MinZVCut_Offset = offsetof(UPlayerPawn_v2_C, MinZVCut);
	static_assert(UPlayerPawn_v2_C_MinZVCut_Offset == 0x1a88, "UPlayerPawn_v2_C::MinZVCut offset is not 1a88");
	auto constexpr UPlayerPawn_v2_C_DmgFactor_Offset = offsetof(UPlayerPawn_v2_C, DmgFactor);
	static_assert(UPlayerPawn_v2_C_DmgFactor_Offset == 0x1a8c, "UPlayerPawn_v2_C::DmgFactor offset is not 1a8c");
	auto constexpr UPlayerPawn_v2_C_VDampingZ_Offset = offsetof(UPlayerPawn_v2_C, VDampingZ);
	static_assert(UPlayerPawn_v2_C_VDampingZ_Offset == 0x1a90, "UPlayerPawn_v2_C::VDampingZ offset is not 1a90");
	auto constexpr UPlayerPawn_v2_C_TestWeaponItemClass_Offset = offsetof(UPlayerPawn_v2_C, TestWeaponItemClass);
	static_assert(UPlayerPawn_v2_C_TestWeaponItemClass_Offset == 0x1a98, "UPlayerPawn_v2_C::TestWeaponItemClass offset is not 1a98");
	auto constexpr UPlayerPawn_v2_C_TestAmmoItemClass_Offset = offsetof(UPlayerPawn_v2_C, TestAmmoItemClass);
	static_assert(UPlayerPawn_v2_C_TestAmmoItemClass_Offset == 0x1aa0, "UPlayerPawn_v2_C::TestAmmoItemClass offset is not 1aa0");
	auto constexpr UPlayerPawn_v2_C_RagdollBone_Offset = offsetof(UPlayerPawn_v2_C, RagdollBone);
	static_assert(UPlayerPawn_v2_C_RagdollBone_Offset == 0x1aa8, "UPlayerPawn_v2_C::RagdollBone offset is not 1aa8");
	auto constexpr UPlayerPawn_v2_C_RagdollBone_1_Offset = offsetof(UPlayerPawn_v2_C, RagdollBone_1);
	static_assert(UPlayerPawn_v2_C_RagdollBone_1_Offset == 0x1ab0, "UPlayerPawn_v2_C::RagdollBone_1 offset is not 1ab0");
	auto constexpr UPlayerPawn_v2_C_RagdollBone_2_Offset = offsetof(UPlayerPawn_v2_C, RagdollBone_2);
	static_assert(UPlayerPawn_v2_C_RagdollBone_2_Offset == 0x1ab8, "UPlayerPawn_v2_C::RagdollBone_2 offset is not 1ab8");
	auto constexpr UPlayerPawn_v2_C_RagdollBone_3_Offset = offsetof(UPlayerPawn_v2_C, RagdollBone_3);
	static_assert(UPlayerPawn_v2_C_RagdollBone_3_Offset == 0x1ac0, "UPlayerPawn_v2_C::RagdollBone_3 offset is not 1ac0");
	auto constexpr UPlayerPawn_v2_C_RagdollBone_4_Offset = offsetof(UPlayerPawn_v2_C, RagdollBone_4);
	static_assert(UPlayerPawn_v2_C_RagdollBone_4_Offset == 0x1ac8, "UPlayerPawn_v2_C::RagdollBone_4 offset is not 1ac8");
	auto constexpr UPlayerPawn_v2_C_RagdollBone_5_Offset = offsetof(UPlayerPawn_v2_C, RagdollBone_5);
	static_assert(UPlayerPawn_v2_C_RagdollBone_5_Offset == 0x1ad0, "UPlayerPawn_v2_C::RagdollBone_5 offset is not 1ad0");
	auto constexpr UPlayerPawn_v2_C_RagdollBone_6_Offset = offsetof(UPlayerPawn_v2_C, RagdollBone_6);
	static_assert(UPlayerPawn_v2_C_RagdollBone_6_Offset == 0x1ad8, "UPlayerPawn_v2_C::RagdollBone_6 offset is not 1ad8");
	auto constexpr UPlayerPawn_v2_C_MaxJumpZVelocity_Offset = offsetof(UPlayerPawn_v2_C, MaxJumpZVelocity);
	static_assert(UPlayerPawn_v2_C_MaxJumpZVelocity_Offset == 0x1ae0, "UPlayerPawn_v2_C::MaxJumpZVelocity offset is not 1ae0");
	auto constexpr UPlayerPawn_v2_C_MovementAfterJumpCounter_Offset = offsetof(UPlayerPawn_v2_C, MovementAfterJumpCounter);
	static_assert(UPlayerPawn_v2_C_MovementAfterJumpCounter_Offset == 0x1ae4, "UPlayerPawn_v2_C::MovementAfterJumpCounter offset is not 1ae4");
	auto constexpr UPlayerPawn_v2_C_MinJumpZVelocity_Offset = offsetof(UPlayerPawn_v2_C, MinJumpZVelocity);
	static_assert(UPlayerPawn_v2_C_MinJumpZVelocity_Offset == 0x1ae8, "UPlayerPawn_v2_C::MinJumpZVelocity offset is not 1ae8");
	auto constexpr UPlayerPawn_v2_C_MovementAfterJumpCounterDecrease_Offset = offsetof(UPlayerPawn_v2_C, MovementAfterJumpCounterDecrease);
	static_assert(UPlayerPawn_v2_C_MovementAfterJumpCounterDecrease_Offset == 0x1aec, "UPlayerPawn_v2_C::MovementAfterJumpCounterDecrease offset is not 1aec");
	auto constexpr UPlayerPawn_v2_C_MaxMovementAfterJumpCounter_Offset = offsetof(UPlayerPawn_v2_C, MaxMovementAfterJumpCounter);
	static_assert(UPlayerPawn_v2_C_MaxMovementAfterJumpCounter_Offset == 0x1af0, "UPlayerPawn_v2_C::MaxMovementAfterJumpCounter offset is not 1af0");
	auto constexpr UPlayerPawn_v2_C_Curve_TPP2FPP_Offset = offsetof(UPlayerPawn_v2_C, Curve_TPP2FPP);
	static_assert(UPlayerPawn_v2_C_Curve_TPP2FPP_Offset == 0x1af8, "UPlayerPawn_v2_C::Curve_TPP2FPP offset is not 1af8");
	auto constexpr UPlayerPawn_v2_C_Curve_FPP2TPP_Offset = offsetof(UPlayerPawn_v2_C, Curve_FPP2TPP);
	static_assert(UPlayerPawn_v2_C_Curve_FPP2TPP_Offset == 0x1b00, "UPlayerPawn_v2_C::Curve_FPP2TPP offset is not 1b00");
	auto constexpr UPlayerPawn_v2_C_Curve_TPP2FPP_Pitch_Offset = offsetof(UPlayerPawn_v2_C, Curve_TPP2FPP_Pitch);
	static_assert(UPlayerPawn_v2_C_Curve_TPP2FPP_Pitch_Offset == 0x1b08, "UPlayerPawn_v2_C::Curve_TPP2FPP_Pitch offset is not 1b08");
	auto constexpr UPlayerPawn_v2_C_Curve_FPP2TPP_Pitch_Offset = offsetof(UPlayerPawn_v2_C, Curve_FPP2TPP_Pitch);
	static_assert(UPlayerPawn_v2_C_Curve_FPP2TPP_Pitch_Offset == 0x1b10, "UPlayerPawn_v2_C::Curve_FPP2TPP_Pitch offset is not 1b10");
	auto constexpr UPlayerPawn_v2_C_boolField1B18_Offset = offsetof(UPlayerPawn_v2_C, boolField1B18);
	static_assert(UPlayerPawn_v2_C_boolField1B18_Offset == 0x1b18, "UPlayerPawn_v2_C::boolField1B18 offset is not 1b18");
	auto constexpr UPlayerPawn_v2_C_ADS_ReadyAngle_Offset = offsetof(UPlayerPawn_v2_C, ADS_ReadyAngle);
	static_assert(UPlayerPawn_v2_C_ADS_ReadyAngle_Offset == 0x1b1c, "UPlayerPawn_v2_C::ADS_ReadyAngle offset is not 1b1c");
	auto constexpr UPlayerPawn_v2_C_SocketOffset_YZ_Offset = offsetof(UPlayerPawn_v2_C, SocketOffset_YZ);
	static_assert(UPlayerPawn_v2_C_SocketOffset_YZ_Offset == 0x1b20, "UPlayerPawn_v2_C::SocketOffset_YZ offset is not 1b20");
	auto constexpr UPlayerPawn_v2_C_DirectionInertia_Offset = offsetof(UPlayerPawn_v2_C, DirectionInertia);
	static_assert(UPlayerPawn_v2_C_DirectionInertia_Offset == 0x1b24, "UPlayerPawn_v2_C::DirectionInertia offset is not 1b24");
	auto constexpr UPlayerPawn_v2_C_boolField1B30_Offset = offsetof(UPlayerPawn_v2_C, boolField1B30);
	static_assert(UPlayerPawn_v2_C_boolField1B30_Offset == 0x1b30, "UPlayerPawn_v2_C::boolField1B30 offset is not 1b30");
	auto constexpr UPlayerPawn_v2_C_HitReaction_Direction_Offset = offsetof(UPlayerPawn_v2_C, HitReaction_Direction);
	static_assert(UPlayerPawn_v2_C_HitReaction_Direction_Offset == 0x1b34, "UPlayerPawn_v2_C::HitReaction_Direction offset is not 1b34");
	auto constexpr UPlayerPawn_v2_C_HitReaction_Curve_Offset = offsetof(UPlayerPawn_v2_C, HitReaction_Curve);
	static_assert(UPlayerPawn_v2_C_HitReaction_Curve_Offset == 0x1b40, "UPlayerPawn_v2_C::HitReaction_Curve offset is not 1b40");
	auto constexpr UPlayerPawn_v2_C_HitReaction_Time_Offset = offsetof(UPlayerPawn_v2_C, HitReaction_Time);
	static_assert(UPlayerPawn_v2_C_HitReaction_Time_Offset == 0x1b48, "UPlayerPawn_v2_C::HitReaction_Time offset is not 1b48");
	auto constexpr UPlayerPawn_v2_C_boolField1B4C_Offset = offsetof(UPlayerPawn_v2_C, boolField1B4C);
	static_assert(UPlayerPawn_v2_C_boolField1B4C_Offset == 0x1b4c, "UPlayerPawn_v2_C::boolField1B4C offset is not 1b4c");
	auto constexpr UPlayerPawn_v2_C_ActiveGunRef_Offset = offsetof(UPlayerPawn_v2_C, ActiveGunRef);
	static_assert(UPlayerPawn_v2_C_ActiveGunRef_Offset == 0x1b50, "UPlayerPawn_v2_C::ActiveGunRef offset is not 1b50");
	auto constexpr UPlayerPawn_v2_C_boolField1B58_Offset = offsetof(UPlayerPawn_v2_C, boolField1B58);
	static_assert(UPlayerPawn_v2_C_boolField1B58_Offset == 0x1b58, "UPlayerPawn_v2_C::boolField1B58 offset is not 1b58");
	auto constexpr UPlayerPawn_v2_C_CrosshairWidget_Offset = offsetof(UPlayerPawn_v2_C, CrosshairWidget);
	static_assert(UPlayerPawn_v2_C_CrosshairWidget_Offset == 0x1b60, "UPlayerPawn_v2_C::CrosshairWidget offset is not 1b60");
	auto constexpr UPlayerPawn_v2_C_LastTraceCache_Offset = offsetof(UPlayerPawn_v2_C, LastTraceCache);
	static_assert(UPlayerPawn_v2_C_LastTraceCache_Offset == 0x1b68, "UPlayerPawn_v2_C::LastTraceCache offset is not 1b68");
	auto constexpr UPlayerPawn_v2_C_LastDistanceCache_Offset = offsetof(UPlayerPawn_v2_C, LastDistanceCache);
	static_assert(UPlayerPawn_v2_C_LastDistanceCache_Offset == 0x1b74, "UPlayerPawn_v2_C::LastDistanceCache offset is not 1b74");
	auto constexpr UPlayerPawn_v2_C_LastDistanceCacheAlpha_Offset = offsetof(UPlayerPawn_v2_C, LastDistanceCacheAlpha);
	static_assert(UPlayerPawn_v2_C_LastDistanceCacheAlpha_Offset == 0x1b78, "UPlayerPawn_v2_C::LastDistanceCacheAlpha offset is not 1b78");
	auto constexpr UPlayerPawn_v2_C_CameraManRef_Offset = offsetof(UPlayerPawn_v2_C, CameraManRef);
	static_assert(UPlayerPawn_v2_C_CameraManRef_Offset == 0x1b80, "UPlayerPawn_v2_C::CameraManRef offset is not 1b80");
	auto constexpr UPlayerPawn_v2_C_YawTarget_Offset = offsetof(UPlayerPawn_v2_C, YawTarget);
	static_assert(UPlayerPawn_v2_C_YawTarget_Offset == 0x1b88, "UPlayerPawn_v2_C::YawTarget offset is not 1b88");
	auto constexpr UPlayerPawn_v2_C_YawStep_Offset = offsetof(UPlayerPawn_v2_C, YawStep);
	static_assert(UPlayerPawn_v2_C_YawStep_Offset == 0x1b8c, "UPlayerPawn_v2_C::YawStep offset is not 1b8c");
	auto constexpr UPlayerPawn_v2_C_GameTime_Offset = offsetof(UPlayerPawn_v2_C, GameTime);
	static_assert(UPlayerPawn_v2_C_GameTime_Offset == 0x1b90, "UPlayerPawn_v2_C::GameTime offset is not 1b90");
	auto constexpr UPlayerPawn_v2_C_Shake_Offset = offsetof(UPlayerPawn_v2_C, Shake);
	static_assert(UPlayerPawn_v2_C_Shake_Offset == 0x1b98, "UPlayerPawn_v2_C::Shake offset is not 1b98");
	auto constexpr UPlayerPawn_v2_C_WeaponCollisionAlpha_Offset = offsetof(UPlayerPawn_v2_C, WeaponCollisionAlpha);
	static_assert(UPlayerPawn_v2_C_WeaponCollisionAlpha_Offset == 0x1ba0, "UPlayerPawn_v2_C::WeaponCollisionAlpha offset is not 1ba0");
	auto constexpr UPlayerPawn_v2_C_SprintBarWidget_Offset = offsetof(UPlayerPawn_v2_C, SprintBarWidget);
	static_assert(UPlayerPawn_v2_C_SprintBarWidget_Offset == 0x1ba8, "UPlayerPawn_v2_C::SprintBarWidget offset is not 1ba8");
	auto constexpr UPlayerPawn_v2_C_ImpactMeshRef_Offset = offsetof(UPlayerPawn_v2_C, ImpactMeshRef);
	static_assert(UPlayerPawn_v2_C_ImpactMeshRef_Offset == 0x1bb0, "UPlayerPawn_v2_C::ImpactMeshRef offset is not 1bb0");
	auto constexpr UPlayerPawn_v2_C_boolField1BB8_Offset = offsetof(UPlayerPawn_v2_C, boolField1BB8);
	static_assert(UPlayerPawn_v2_C_boolField1BB8_Offset == 0x1bb8, "UPlayerPawn_v2_C::boolField1BB8 offset is not 1bb8");
	auto constexpr UPlayerPawn_v2_C_boolField1BB9_Offset = offsetof(UPlayerPawn_v2_C, boolField1BB9);
	static_assert(UPlayerPawn_v2_C_boolField1BB9_Offset == 0x1bb9, "UPlayerPawn_v2_C::boolField1BB9 offset is not 1bb9");
	auto constexpr UPlayerPawn_v2_C_boolField1BBA_Offset = offsetof(UPlayerPawn_v2_C, boolField1BBA);
	static_assert(UPlayerPawn_v2_C_boolField1BBA_Offset == 0x1bba, "UPlayerPawn_v2_C::boolField1BBA offset is not 1bba");
	auto constexpr UPlayerPawn_v2_C_boolField1BBB_Offset = offsetof(UPlayerPawn_v2_C, boolField1BBB);
	static_assert(UPlayerPawn_v2_C_boolField1BBB_Offset == 0x1bbb, "UPlayerPawn_v2_C::boolField1BBB offset is not 1bbb");
	auto constexpr UPlayerPawn_v2_C_AudioActorRef_Offset = offsetof(UPlayerPawn_v2_C, AudioActorRef);
	static_assert(UPlayerPawn_v2_C_AudioActorRef_Offset == 0x1bc0, "UPlayerPawn_v2_C::AudioActorRef offset is not 1bc0");
	auto constexpr UPlayerPawn_v2_C_boolField1BC8_Offset = offsetof(UPlayerPawn_v2_C, boolField1BC8);
	static_assert(UPlayerPawn_v2_C_boolField1BC8_Offset == 0x1bc8, "UPlayerPawn_v2_C::boolField1BC8 offset is not 1bc8");
	auto constexpr UPlayerPawn_v2_C_ADSDebuffValue_Offset = offsetof(UPlayerPawn_v2_C, ADSDebuffValue);
	static_assert(UPlayerPawn_v2_C_ADSDebuffValue_Offset == 0x1bcc, "UPlayerPawn_v2_C::ADSDebuffValue offset is not 1bcc");
	auto constexpr UPlayerPawn_v2_C_Curve_EjectDamage_Offset = offsetof(UPlayerPawn_v2_C, Curve_EjectDamage);
	static_assert(UPlayerPawn_v2_C_Curve_EjectDamage_Offset == 0x1bd0, "UPlayerPawn_v2_C::Curve_EjectDamage offset is not 1bd0");
	auto constexpr UPlayerPawn_v2_C_WeaponBulletCamRef_Offset = offsetof(UPlayerPawn_v2_C, WeaponBulletCamRef);
	static_assert(UPlayerPawn_v2_C_WeaponBulletCamRef_Offset == 0x1bd8, "UPlayerPawn_v2_C::WeaponBulletCamRef offset is not 1bd8");
	auto constexpr UPlayerPawn_v2_C_boolField1BE0_Offset = offsetof(UPlayerPawn_v2_C, boolField1BE0);
	static_assert(UPlayerPawn_v2_C_boolField1BE0_Offset == 0x1be0, "UPlayerPawn_v2_C::boolField1BE0 offset is not 1be0");
	auto constexpr UPlayerPawn_v2_C_VaultingTimer_Offset = offsetof(UPlayerPawn_v2_C, VaultingTimer);
	static_assert(UPlayerPawn_v2_C_VaultingTimer_Offset == 0x1be4, "UPlayerPawn_v2_C::VaultingTimer offset is not 1be4");
	auto constexpr UPlayerPawn_v2_C_boolField1BE8_Offset = offsetof(UPlayerPawn_v2_C, boolField1BE8);
	static_assert(UPlayerPawn_v2_C_boolField1BE8_Offset == 0x1be8, "UPlayerPawn_v2_C::boolField1BE8 offset is not 1be8");
	auto constexpr UPlayerPawn_v2_C_VaultHelperRef_Offset = offsetof(UPlayerPawn_v2_C, VaultHelperRef);
	static_assert(UPlayerPawn_v2_C_VaultHelperRef_Offset == 0x1bf0, "UPlayerPawn_v2_C::VaultHelperRef offset is not 1bf0");
	auto constexpr UPlayerPawn_v2_C_CurrentVaultType_Offset = offsetof(UPlayerPawn_v2_C, CurrentVaultType);
	static_assert(UPlayerPawn_v2_C_CurrentVaultType_Offset == 0x1bf8, "UPlayerPawn_v2_C::CurrentVaultType offset is not 1bf8");
	auto constexpr UPlayerPawn_v2_C_VaultEndVelocity_Offset = offsetof(UPlayerPawn_v2_C, VaultEndVelocity);
	static_assert(UPlayerPawn_v2_C_VaultEndVelocity_Offset == 0x1bfc, "UPlayerPawn_v2_C::VaultEndVelocity offset is not 1bfc");
	auto constexpr UPlayerPawn_v2_C_VaultLastLocation_Offset = offsetof(UPlayerPawn_v2_C, VaultLastLocation);
	static_assert(UPlayerPawn_v2_C_VaultLastLocation_Offset == 0x1c08, "UPlayerPawn_v2_C::VaultLastLocation offset is not 1c08");
	auto constexpr UPlayerPawn_v2_C_boolField1C14_Offset = offsetof(UPlayerPawn_v2_C, boolField1C14);
	static_assert(UPlayerPawn_v2_C_boolField1C14_Offset == 0x1c14, "UPlayerPawn_v2_C::boolField1C14 offset is not 1c14");
	auto constexpr UPlayerPawn_v2_C_boolField1C15_Offset = offsetof(UPlayerPawn_v2_C, boolField1C15);
	static_assert(UPlayerPawn_v2_C_boolField1C15_Offset == 0x1c15, "UPlayerPawn_v2_C::boolField1C15 offset is not 1c15");
	auto constexpr UPlayerPawn_v2_C_VaultingDirection_Offset = offsetof(UPlayerPawn_v2_C, VaultingDirection);
	static_assert(UPlayerPawn_v2_C_VaultingDirection_Offset == 0x1c18, "UPlayerPawn_v2_C::VaultingDirection offset is not 1c18");
	auto constexpr UPlayerPawn_v2_C_WeapMenuRef_Offset = offsetof(UPlayerPawn_v2_C, WeapMenuRef);
	static_assert(UPlayerPawn_v2_C_WeapMenuRef_Offset == 0x1c20, "UPlayerPawn_v2_C::WeapMenuRef offset is not 1c20");
	auto constexpr UPlayerPawn_v2_C_RagdollActorRef_Offset = offsetof(UPlayerPawn_v2_C, RagdollActorRef);
	static_assert(UPlayerPawn_v2_C_RagdollActorRef_Offset == 0x1c28, "UPlayerPawn_v2_C::RagdollActorRef offset is not 1c28");
	auto constexpr UPlayerPawn_v2_C_RagdollActorPos_Offset = offsetof(UPlayerPawn_v2_C, RagdollActorPos);
	static_assert(UPlayerPawn_v2_C_RagdollActorPos_Offset == 0x1c30, "UPlayerPawn_v2_C::RagdollActorPos offset is not 1c30");
	auto constexpr UPlayerPawn_v2_C_VaultCapsuleGroundOffset_Offset = offsetof(UPlayerPawn_v2_C, VaultCapsuleGroundOffset);
	static_assert(UPlayerPawn_v2_C_VaultCapsuleGroundOffset_Offset == 0x1c3c, "UPlayerPawn_v2_C::VaultCapsuleGroundOffset offset is not 1c3c");
	auto constexpr UPlayerPawn_v2_C_CurrentVaultData_Offset = offsetof(UPlayerPawn_v2_C, CurrentVaultData);
	static_assert(UPlayerPawn_v2_C_CurrentVaultData_Offset == 0x1c40, "UPlayerPawn_v2_C::CurrentVaultData offset is not 1c40");
	auto constexpr UPlayerPawn_v2_C_AdaptiveCrosshairWidget_Offset = offsetof(UPlayerPawn_v2_C, AdaptiveCrosshairWidget);
	static_assert(UPlayerPawn_v2_C_AdaptiveCrosshairWidget_Offset == 0x1c48, "UPlayerPawn_v2_C::AdaptiveCrosshairWidget offset is not 1c48");
	auto constexpr UPlayerPawn_v2_C_LastVaultScanTime_Offset = offsetof(UPlayerPawn_v2_C, LastVaultScanTime);
	static_assert(UPlayerPawn_v2_C_LastVaultScanTime_Offset == 0x1c50, "UPlayerPawn_v2_C::LastVaultScanTime offset is not 1c50");
	auto constexpr UPlayerPawn_v2_C_boolField1C54_Offset = offsetof(UPlayerPawn_v2_C, boolField1C54);
	static_assert(UPlayerPawn_v2_C_boolField1C54_Offset == 0x1c54, "UPlayerPawn_v2_C::boolField1C54 offset is not 1c54");
	auto constexpr UPlayerPawn_v2_C_RecoilMenuRef_Offset = offsetof(UPlayerPawn_v2_C, RecoilMenuRef);
	static_assert(UPlayerPawn_v2_C_RecoilMenuRef_Offset == 0x1c58, "UPlayerPawn_v2_C::RecoilMenuRef offset is not 1c58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
