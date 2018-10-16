#pragma once
#include "UMutableCharacter.hpp"
#include "ESlotOffsetType.hpp"
#include "FVector.hpp"
#include "EEquipableItemSoundType.hpp"
#include "FTakeHitInfo.hpp"
#include "ETargetingType.hpp"
#include "FRotator.hpp"
#include "FVector_NetQuantizeNormal.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "FCharacterAnim.hpp"
#include "FVector2D.hpp"
#include "EStanceMode.hpp"
#include "ECastAnim.hpp"
#include "FTimerHandle.hpp"
#include "FAnimUpdateRateSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCharacter // Size: 0x19C0
	: public UMutableCharacter // Size: 0x8C0
{
private:
	typedef UTslCharacter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1882); // id32("Class TslGame.TslCharacter")
		return ptr;
	}
	uint8_t UnknownData8C0[0x4];
	float VaultingDirection_CP; /* Ofs: 0x8C4 Size: 0x4 - FloatProperty TslGame.TslCharacter.VaultingDirection_CP */
	uint8_t UnknownData8C8[0x10];
	float SprintingAutoDoubleTapTimeLimit; /* Ofs: 0x8D8 Size: 0x4 - FloatProperty TslGame.TslCharacter.SprintingAutoDoubleTapTimeLimit */
	uint8_t UnknownData8DC[0x4];
	FScriptMulticastDelegate OnReloadPadInput; /* Ofs: 0x8E0 Size: 0x10 - MulticastDelegateProperty TslGame.TslCharacter.OnReloadPadInput */
	uint8_t boolField8F0;
	uint8_t boolField8F1;
	uint8_t UnknownData8F2[0x2];
	TWeakObjectPtr<ExternalPtr<struct UTslPlayerState>> CurrentAttackerPlayerState; /* Ofs: 0x8F4 Size: 0x8 - WeakObjectProperty TslGame.TslCharacter.CurrentAttackerPlayerState */
	TWeakObjectPtr<ExternalPtr<struct UTslPlayerState>> LastAttackedPlayerState; /* Ofs: 0x8FC Size: 0x8 - WeakObjectProperty TslGame.TslCharacter.LastAttackedPlayerState */
	uint8_t UnknownData904[0x40];
	float HoldBreathStopInterpSpeed; /* Ofs: 0x944 Size: 0x4 - FloatProperty TslGame.TslCharacter.HoldBreathStopInterpSpeed */
	float HoldBreathSwayScalar; /* Ofs: 0x948 Size: 0x4 - FloatProperty TslGame.TslCharacter.HoldBreathSwayScalar */
	float HoldBreathSwayReturnMod; /* Ofs: 0x94C Size: 0x4 - FloatProperty TslGame.TslCharacter.HoldBreathSwayReturnMod */
	uint8_t UnknownData950[0x2C];
	float FOV_OnScopingEaseExp; /* Ofs: 0x97C Size: 0x4 - FloatProperty TslGame.TslCharacter.FOV_OnScopingEaseExp */
	FScriptMulticastDelegate NoBagSpaceDelgate; /* Ofs: 0x980 Size: 0x10 - MulticastDelegateProperty TslGame.TslCharacter.NoBagSpaceDelgate */
	uint8_t boolField990;
	uint8_t UnknownData991[0x7];
	TMap<ESlotOffsetType, struct FItemOffsetData> ItemOffsetConfig; /* Ofs: 0x998 Size: 0x50 - MapProperty TslGame.TslCharacter.ItemOffsetConfig */
	ExternalPtr<struct UTslGamepadPawnInputComponent> TslGamepadInputComponent; /* Ofs: 0x9E8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.TslGamepadInputComponent */
	uint8_t UnknownData9F0[0x8];
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Primary; /* Ofs: 0x9F8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.CharacterAccessory_Primary */
	float JumpDelay; /* Ofs: 0xA00 Size: 0x4 - FloatProperty TslGame.TslCharacter.JumpDelay */
	uint8_t UnknownDataA04[0x4];
	ExternalPtr<struct UClass> PainKillerClass; /* Ofs: 0xA08 Size: 0x8 - ClassProperty TslGame.TslCharacter.PainKillerClass */
	EncryptedExternalPtr<struct UTslCharacter> RevivingCharacter; /* Ofs: 0xA10 Size: 0x10 - EncryptedObjectProperty TslGame.TslCharacter.RevivingCharacter */
	uint8_t CharacterState; /* Ofs: 0xA20 Size: 0x1 - ByteProperty TslGame.TslCharacter.CharacterState */
	uint8_t UnknownDataA21[0x3];
	float JumpLastTimer; /* Ofs: 0xA24 Size: 0x4 - FloatProperty TslGame.TslCharacter.JumpLastTimer */
	TArray<ExternalPtr<struct UClass>> BoostItemClasses; /* Ofs: 0xA28 Size: 0x10 - ArrayProperty TslGame.TslCharacter.BoostItemClasses */
	float Sprint_MaxSpeed; /* Ofs: 0xA38 Size: 0x4 - FloatProperty TslGame.TslCharacter.Sprint_MaxSpeed */
	uint8_t UnknownDataA3C[0xC];
	ExternalPtr<struct UCharacterBreathComponent> BreathComponent; /* Ofs: 0xA48 Size: 0x8 - ObjectProperty TslGame.TslCharacter.BreathComponent */
	ExternalPtr<struct UCharacterBreathComponent> BreathComponentADS; /* Ofs: 0xA50 Size: 0x8 - ObjectProperty TslGame.TslCharacter.BreathComponentADS */
	FName BreathPoint; /* Ofs: 0xA58 Size: 0x8 - NameProperty TslGame.TslCharacter.BreathPoint */
	ExternalPtr<struct UClass> UnderwaterChokeEffectClass; /* Ofs: 0xA60 Size: 0x8 - ClassProperty TslGame.TslCharacter.UnderwaterChokeEffectClass */
	ExternalPtr<struct UTslParticle> UnderwaterChokeEffect; /* Ofs: 0xA68 Size: 0x8 - ObjectProperty TslGame.TslCharacter.UnderwaterChokeEffect */
	uint8_t UnknownDataA70[0x10];
	FVector VaultEndVelocity_CP; /* Ofs: 0xA80 Size: 0xC - StructProperty TslGame.TslCharacter.VaultEndVelocity_CP */
	float ProneFallVerticalVelocityThreshold; /* Ofs: 0xA8C Size: 0x4 - FloatProperty TslGame.TslCharacter.ProneFallVerticalVelocityThreshold */
	FName ParachuteAttachPoint; /* Ofs: 0xA90 Size: 0x8 - NameProperty TslGame.TslCharacter.ParachuteAttachPoint */
	float HeavyFallVerticalVelocityThreshold; /* Ofs: 0xA98 Size: 0x4 - FloatProperty TslGame.TslCharacter.HeavyFallVerticalVelocityThreshold */
	float BoostGauge; /* Ofs: 0xA9C Size: 0x4 - FloatProperty TslGame.TslCharacter.BoostGauge */
	uint8_t boolFieldAA0;
	uint8_t UnknownDataAA1[0x7];
	TArray<ExternalPtr<struct UClass>> HealItemClasses; /* Ofs: 0xAA8 Size: 0x10 - ArrayProperty TslGame.TslCharacter.HealItemClasses */
	float SimulatedHit_ImpulsePower; /* Ofs: 0xAB8 Size: 0x4 - FloatProperty TslGame.TslCharacter.SimulatedHit_ImpulsePower */
	uint8_t UnknownDataABC[0x4];
	ExternalPtr<struct UCastComponent> CastComponent; /* Ofs: 0xAC0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.CastComponent */
	uint8_t boolFieldAC8;
	uint8_t UnknownDataAC9[0x3];
	float SimulatedHit_RecoveryPerSecond; /* Ofs: 0xACC Size: 0x4 - FloatProperty TslGame.TslCharacter.SimulatedHit_RecoveryPerSecond */
	FVector JumpStartLocation_CP; /* Ofs: 0xAD0 Size: 0xC - StructProperty TslGame.TslCharacter.JumpStartLocation_CP */
	uint8_t UnknownDataADC[0x4];
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Melee; /* Ofs: 0xAE0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.CharacterAccessory_Melee */
	uint8_t boolFieldAE8;
	uint8_t UnknownDataAE9[0x1F];
	ExternalPtr<struct UHackReporterComponent> HackReporterComponent; /* Ofs: 0xB08 Size: 0x8 - ObjectProperty TslGame.TslCharacter.HackReporterComponent */
	int32_t SpectatedCount; /* Ofs: 0xB10 Size: 0x4 - IntProperty TslGame.TslCharacter.SpectatedCount */
	uint8_t UnknownDataB14[0x4];
	ExternalPtr<struct UClass> FootStepEffectClassInGrass; /* Ofs: 0xB18 Size: 0x8 - ClassProperty TslGame.TslCharacter.FootStepEffectClassInGrass */
	uint8_t UnknownDataB20[0x8];
	float Health; /* Ofs: 0xB28 Size: 0x4 - FloatProperty TslGame.TslCharacter.Health */
	uint8_t UnknownDataB2C[0x4];
	ExternalPtr<struct UClass> ParachuteType; /* Ofs: 0xB30 Size: 0x8 - ClassProperty TslGame.TslCharacter.ParachuteType */
	ExternalPtr<struct UClass> MedKitClass; /* Ofs: 0xB38 Size: 0x8 - ClassProperty TslGame.TslCharacter.MedKitClass */
	FName SwimPoint; /* Ofs: 0xB40 Size: 0x8 - NameProperty TslGame.TslCharacter.SwimPoint */
	float SwimableWaterDepth; /* Ofs: 0xB48 Size: 0x4 - FloatProperty TslGame.TslCharacter.SwimableWaterDepth */
	float CrouchWaterDepth; /* Ofs: 0xB4C Size: 0x4 - FloatProperty TslGame.TslCharacter.CrouchWaterDepth */
	float ProneWaterDepth; /* Ofs: 0xB50 Size: 0x4 - FloatProperty TslGame.TslCharacter.ProneWaterDepth */
	float WaterFloorDetectionLength; /* Ofs: 0xB54 Size: 0x4 - FloatProperty TslGame.TslCharacter.WaterFloorDetectionLength */
	float SwimMaxControllerPitch; /* Ofs: 0xB58 Size: 0x4 - FloatProperty TslGame.TslCharacter.SwimMaxControllerPitch */
	float UnderwaterSwimGapFromSurface; /* Ofs: 0xB5C Size: 0x4 - FloatProperty TslGame.TslCharacter.UnderwaterSwimGapFromSurface */
	float SwimableCharacterLengthOnSurface; /* Ofs: 0xB60 Size: 0x4 - FloatProperty TslGame.TslCharacter.SwimableCharacterLengthOnSurface */
	uint8_t UnknownDataB64[0x4];
	ExternalPtr<struct UClass> SwimTrailEffectClass; /* Ofs: 0xB68 Size: 0x8 - ClassProperty TslGame.TslCharacter.SwimTrailEffectClass */
	ExternalPtr<struct UTslParticle> SwimTrailEffect; /* Ofs: 0xB70 Size: 0x8 - ObjectProperty TslGame.TslCharacter.SwimTrailEffect */
	FName ParticleSocket_SwimIdleRipple; /* Ofs: 0xB78 Size: 0x8 - NameProperty TslGame.TslCharacter.ParticleSocket_SwimIdleRipple */
	ExternalPtr<struct UClass> SwimIdleRippleEffectClass; /* Ofs: 0xB80 Size: 0x8 - ClassProperty TslGame.TslCharacter.SwimIdleRippleEffectClass */
	int32_t maxNumSwimIdleRippleEffect; /* Ofs: 0xB88 Size: 0x4 - IntProperty TslGame.TslCharacter.maxNumSwimIdleRippleEffect */
	float SwimIdleRippleOffsetFromSurface; /* Ofs: 0xB8C Size: 0x4 - FloatProperty TslGame.TslCharacter.SwimIdleRippleOffsetFromSurface */
	uint8_t UnknownDataB90[0x10];
	TMap<struct UCameraComponent, float> SavedCameraFOV; /* Ofs: 0xBA0 Size: 0x50 - MapProperty TslGame.TslCharacter.SavedCameraFOV */
	ExternalPtr<struct UTslParticle> FootStepEffect; /* Ofs: 0xBF0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.FootStepEffect */
	uint8_t UnknownDataBF8[0x8];
	float GroggyHealth; /* Ofs: 0xC00 Size: 0x4 - FloatProperty TslGame.TslCharacter.GroggyHealth */
	uint8_t UnknownDataC04[0xC];
	float SimlatedHit_PunchLightPower; /* Ofs: 0xC10 Size: 0x4 - FloatProperty TslGame.TslCharacter.SimlatedHit_PunchLightPower */
	uint8_t UnknownDataC14[0x4];
	ExternalPtr<struct UClass> MolotovClass; /* Ofs: 0xC18 Size: 0x8 - ClassProperty TslGame.TslCharacter.MolotovClass */
	float PunchHeavy_Damage; /* Ofs: 0xC20 Size: 0x4 - FloatProperty TslGame.TslCharacter.PunchHeavy_Damage */
	uint8_t UnknownDataC24[0x4];
	ExternalPtr<struct UClass> BandageClass; /* Ofs: 0xC28 Size: 0x8 - ClassProperty TslGame.TslCharacter.BandageClass */
	uint8_t UnknownDataC30[0x4];
	float GroggyDamageWeight; /* Ofs: 0xC34 Size: 0x4 - FloatProperty TslGame.TslCharacter.GroggyDamageWeight */
	float SimlatedHit_PunchHeavyPower; /* Ofs: 0xC38 Size: 0x4 - FloatProperty TslGame.TslCharacter.SimlatedHit_PunchHeavyPower */
	uint8_t UnknownDataC3C[0xC];
	FVector LeanLeftTraceOffset; /* Ofs: 0xC48 Size: 0xC - StructProperty TslGame.TslCharacter.LeanLeftTraceOffset */
	uint8_t boolFieldC54;
	uint8_t UnknownDataC55[0x3];
	ExternalPtr<struct UClass> FootStepEffectClassInWater; /* Ofs: 0xC58 Size: 0x8 - ClassProperty TslGame.TslCharacter.FootStepEffectClassInWater */
	uint8_t UnknownDataC60[0x8];
	ExternalPtr<struct UAkAudioEvent> RemoteVolumeControlOn; /* Ofs: 0xC68 Size: 0x8 - ObjectProperty TslGame.TslCharacter.RemoteVolumeControlOn */
	FVector LeanRightTraceOffset; /* Ofs: 0xC70 Size: 0xC - StructProperty TslGame.TslCharacter.LeanRightTraceOffset */
	FVector LandPredictedLocation_CP; /* Ofs: 0xC7C Size: 0xC - StructProperty TslGame.TslCharacter.LandPredictedLocation_CP */
	uint8_t boolFieldC88;
	uint8_t UnknownDataC89[0x17];
	float FallHeight_CP; /* Ofs: 0xCA0 Size: 0x4 - FloatProperty TslGame.TslCharacter.FallHeight_CP */
	float MinimumParachuteAltitude; /* Ofs: 0xCA4 Size: 0x4 - FloatProperty TslGame.TslCharacter.MinimumParachuteAltitude */
	ExternalPtr<struct UClass> FirstAidClass; /* Ofs: 0xCA8 Size: 0x8 - ClassProperty TslGame.TslCharacter.FirstAidClass */
	float FootSoundObstructionCheckMaxDistance; /* Ofs: 0xCB0 Size: 0x4 - FloatProperty TslGame.TslCharacter.FootSoundObstructionCheckMaxDistance */
	uint8_t UnknownDataCB4[0x4];
	ExternalPtr<struct UTslViewTargetTempComponent> ViewTargetTempComponent; /* Ofs: 0xCB8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.ViewTargetTempComponent */
	ExternalPtr<struct UClass> FootStepEffectClassInMud; /* Ofs: 0xCC0 Size: 0x8 - ClassProperty TslGame.TslCharacter.FootStepEffectClassInMud */
	uint8_t UnknownDataCC8[0x8];
	float SprintingFOV; /* Ofs: 0xCD0 Size: 0x4 - FloatProperty TslGame.TslCharacter.SprintingFOV */
	float Punch_Damage; /* Ofs: 0xCD4 Size: 0x4 - FloatProperty TslGame.TslCharacter.Punch_Damage */
	uint8_t UnknownDataCD8[0x8];
	float PunchHeavy_Radius; /* Ofs: 0xCE0 Size: 0x4 - FloatProperty TslGame.TslCharacter.PunchHeavy_Radius */
	float DecreaseGroggyHealthPerSecond; /* Ofs: 0xCE4 Size: 0x4 - FloatProperty TslGame.TslCharacter.DecreaseGroggyHealthPerSecond */
	float LeanOffset_Prone; /* Ofs: 0xCE8 Size: 0x4 - FloatProperty TslGame.TslCharacter.LeanOffset_Prone */
	uint8_t UnknownDataCEC[0x4];
	FName ParticleSocketFootLeft; /* Ofs: 0xCF0 Size: 0x8 - NameProperty TslGame.TslCharacter.ParticleSocketFootLeft */
	uint8_t UnknownDataCF8[0x8];
	ExternalPtr<struct UBuffComponet> BuffComponent; /* Ofs: 0xD00 Size: 0x8 - ObjectProperty TslGame.TslCharacter.BuffComponent */
	float ForceReleasingParachuteAltitude; /* Ofs: 0xD08 Size: 0x4 - FloatProperty TslGame.TslCharacter.ForceReleasingParachuteAltitude */
	uint8_t boolFieldD0C;
	uint8_t UnknownDataD0D[0x3];
	ExternalPtr<struct UClass> DropPackageType; /* Ofs: 0xD10 Size: 0x8 - ClassProperty TslGame.TslCharacter.DropPackageType */
	FString CharacterName; /* Ofs: 0xD18 Size: 0x10 - StrProperty TslGame.TslCharacter.CharacterName */
	uint8_t UnknownDataD28[0x4];
	float HealthMax; /* Ofs: 0xD2C Size: 0x4 - FloatProperty TslGame.TslCharacter.HealthMax */
	float IndoorCheckHalfConeAngle; /* Ofs: 0xD30 Size: 0x4 - FloatProperty TslGame.TslCharacter.IndoorCheckHalfConeAngle */
	uint8_t UnknownDataD34[0x4];
	ExternalPtr<struct UClass> LaunchDamageTypeClass; /* Ofs: 0xD38 Size: 0x8 - ClassProperty TslGame.TslCharacter.LaunchDamageTypeClass */
	ExternalPtr<struct UClass> FootStepEffectClassInSand; /* Ofs: 0xD40 Size: 0x8 - ClassProperty TslGame.TslCharacter.FootStepEffectClassInSand */
	ExternalPtr<struct UClass> GroggyDamageType; /* Ofs: 0xD48 Size: 0x8 - ClassProperty TslGame.TslCharacter.GroggyDamageType */
	uint8_t UnknownDataD50[0x4];
	float Sprint_MinSpeed; /* Ofs: 0xD54 Size: 0x4 - FloatProperty TslGame.TslCharacter.Sprint_MinSpeed */
	ExternalPtr<struct UClass> PunchImpactEffect; /* Ofs: 0xD58 Size: 0x8 - ClassProperty TslGame.TslCharacter.PunchImpactEffect */
	TArray<ExternalPtr<struct UClass>> ComponentsToDestroyOnDedicatedServer; /* Ofs: 0xD60 Size: 0x10 - ArrayProperty TslGame.TslCharacter.ComponentsToDestroyOnDedicatedServer */
	uint8_t UnknownDataD70[0x8];
	ExternalPtr<struct UClass> GrenadeClass; /* Ofs: 0xD78 Size: 0x8 - ClassProperty TslGame.TslCharacter.GrenadeClass */
	ExternalPtr<struct UWeaponProcessor> WeaponProcessor; /* Ofs: 0xD80 Size: 0x8 - ObjectProperty TslGame.TslCharacter.WeaponProcessor */
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Secondary; /* Ofs: 0xD88 Size: 0x8 - ObjectProperty TslGame.TslCharacter.CharacterAccessory_Secondary */
	uint8_t UnknownDataD90[0x8];
	ExternalPtr<struct UTslCharacterValidateLocationComponent> ValidateLocationComponent; /* Ofs: 0xD98 Size: 0x8 - ObjectProperty TslGame.TslCharacter.ValidateLocationComponent */
	uint8_t UnknownDataDA0[0x20];
	float FootSoundObstructionCheckInterval; /* Ofs: 0xDC0 Size: 0x4 - FloatProperty TslGame.TslCharacter.FootSoundObstructionCheckInterval */
	uint8_t UnknownDataDC4[0x14];
	FVector VaultLastLocation_CP; /* Ofs: 0xDD8 Size: 0xC - StructProperty TslGame.TslCharacter.VaultLastLocation_CP */
	float HeavyFallMovementStopTime; /* Ofs: 0xDE4 Size: 0x4 - FloatProperty TslGame.TslCharacter.HeavyFallMovementStopTime */
	int32_t IndoorCheckSamplingQueueSize; /* Ofs: 0xDE8 Size: 0x4 - IntProperty TslGame.TslCharacter.IndoorCheckSamplingQueueSize */
	float DecreaseBoostGaugeByTime; /* Ofs: 0xDEC Size: 0x4 - FloatProperty TslGame.TslCharacter.DecreaseBoostGaugeByTime */
	uint8_t UnknownDataDF0[0x10];
	ExternalPtr<struct UCurveFloat> CameraFovRatioCurve; /* Ofs: 0xE00 Size: 0x8 - ObjectProperty TslGame.TslCharacter.CameraFovRatioCurve */
	double LastLaunchTime; /* Ofs: 0xE08 Size: 0x8 - DoubleProperty TslGame.TslCharacter.LastLaunchTime */
	uint8_t UnknownDataE10[0x10];
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Thrown; /* Ofs: 0xE20 Size: 0x8 - ObjectProperty TslGame.TslCharacter.CharacterAccessory_Thrown */
	float ExtremeFallVerticalVelocityThreshold; /* Ofs: 0xE28 Size: 0x4 - FloatProperty TslGame.TslCharacter.ExtremeFallVerticalVelocityThreshold */
	float Punch_Distance; /* Ofs: 0xE2C Size: 0x4 - FloatProperty TslGame.TslCharacter.Punch_Distance */
	EncryptedExternalPtr<struct UTeam> Team; /* Ofs: 0xE30 Size: 0x10 - EncryptedObjectProperty TslGame.TslCharacter.Team */
	int32_t LastTeamNum; /* Ofs: 0xE40 Size: 0x4 - IntProperty TslGame.TslCharacter.LastTeamNum */
	float ReleasingParachuteAltitude; /* Ofs: 0xE44 Size: 0x4 - FloatProperty TslGame.TslCharacter.ReleasingParachuteAltitude */
	uint8_t UnknownDataE48[0x3];
	TEnumAsByte<enum EEquipableItemSoundType> ShoesSoundType; /* Ofs: 0xE4B Size: 0x1 - EnumProperty TslGame.TslCharacter.ShoesSoundType */
	float IndoorCheckDistance; /* Ofs: 0xE4C Size: 0x4 - FloatProperty TslGame.TslCharacter.IndoorCheckDistance */
	uint8_t UnknownDataE50[0x8];
	uint8_t boolFieldE58;
	uint8_t UnknownDataE59[0x7];
	ExternalPtr<struct UTslAccessoryComponent> CharacterAccessory_Sidearm; /* Ofs: 0xE60 Size: 0x8 - ObjectProperty TslGame.TslCharacter.CharacterAccessory_Sidearm */
	float GroggyHealthMax; /* Ofs: 0xE68 Size: 0x4 - FloatProperty TslGame.TslCharacter.GroggyHealthMax */
	float VaultTimer_CP; /* Ofs: 0xE6C Size: 0x4 - FloatProperty TslGame.TslCharacter.VaultTimer_CP */
	ExternalPtr<struct UBluezoneInOutSoundEffectComponent> BluezoneInOutSoundEffect; /* Ofs: 0xE70 Size: 0x8 - ObjectProperty TslGame.TslCharacter.BluezoneInOutSoundEffect */
	uint8_t UnknownDataE78[0x28];
	TArray<struct FBuffWithBoostGauge> BuffWithBoostGauge; /* Ofs: 0xEA0 Size: 0x10 - ArrayProperty TslGame.TslCharacter.BuffWithBoostGauge */
	uint8_t UnknownDataEB0[0x8];
	ExternalPtr<struct UClass> UnarmedDamageType; /* Ofs: 0xEB8 Size: 0x8 - ClassProperty TslGame.TslCharacter.UnarmedDamageType */
	uint8_t UnknownDataEC0[0x10];
	FName HeadAttachPoint; /* Ofs: 0xED0 Size: 0x8 - NameProperty TslGame.TslCharacter.HeadAttachPoint */
	float CameraHeadHideDistance; /* Ofs: 0xED8 Size: 0x4 - FloatProperty TslGame.TslCharacter.CameraHeadHideDistance */
	FVector InitCameraLocation; /* Ofs: 0xEDC Size: 0xC - StructProperty TslGame.TslCharacter.InitCameraLocation */
	FVector CrouchedCameraMove; /* Ofs: 0xEE8 Size: 0xC - StructProperty TslGame.TslCharacter.CrouchedCameraMove */
	FVector PronedCameraMove; /* Ofs: 0xEF4 Size: 0xC - StructProperty TslGame.TslCharacter.PronedCameraMove */
	FVector GroggyCameraMove; /* Ofs: 0xF00 Size: 0xC - StructProperty TslGame.TslCharacter.GroggyCameraMove */
	float CrouchedCameraMoveSpeed; /* Ofs: 0xF0C Size: 0x4 - FloatProperty TslGame.TslCharacter.CrouchedCameraMoveSpeed */
	float PronedCameraMoveSpeed; /* Ofs: 0xF10 Size: 0x4 - FloatProperty TslGame.TslCharacter.PronedCameraMoveSpeed */
	float GroggyCameraMoveSpeed; /* Ofs: 0xF14 Size: 0x4 - FloatProperty TslGame.TslCharacter.GroggyCameraMoveSpeed */
	uint8_t UnknownDataF18[0x48];
	FTakeHitInfo LastTakeHitInfo; /* Ofs: 0xF60 Size: 0x58 - StructProperty TslGame.TslCharacter.LastTakeHitInfo */
	uint8_t UnknownDataFB8[0x4];
	float TargetingSpeedModifier; /* Ofs: 0xFBC Size: 0x4 - FloatProperty TslGame.TslCharacter.TargetingSpeedModifier */
	TEnumAsByte<enum ETargetingType> TargetingType; /* Ofs: 0xFC0 Size: 0x1 - EnumProperty TslGame.TslCharacter.TargetingType */
	uint8_t UnknownDataFC1[0x3];
	float Stand_RunningSpeedModifier; /* Ofs: 0xFC4 Size: 0x4 - FloatProperty TslGame.TslCharacter.Stand_RunningSpeedModifier */
	float Stand_SprintingSpeedModifier; /* Ofs: 0xFC8 Size: 0x4 - FloatProperty TslGame.TslCharacter.Stand_SprintingSpeedModifier */
	float Stand_SprintingBigGunModifier; /* Ofs: 0xFCC Size: 0x4 - FloatProperty TslGame.TslCharacter.Stand_SprintingBigGunModifier */
	float Stand_SprintingRifleModifier; /* Ofs: 0xFD0 Size: 0x4 - FloatProperty TslGame.TslCharacter.Stand_SprintingRifleModifier */
	float Stand_SprintingSmallGunMOdifier; /* Ofs: 0xFD4 Size: 0x4 - FloatProperty TslGame.TslCharacter.Stand_SprintingSmallGunMOdifier */
	float Crouch_RunningSpeedModifier; /* Ofs: 0xFD8 Size: 0x4 - FloatProperty TslGame.TslCharacter.Crouch_RunningSpeedModifier */
	float Crouch_SprintingSpeedModifier; /* Ofs: 0xFDC Size: 0x4 - FloatProperty TslGame.TslCharacter.Crouch_SprintingSpeedModifier */
	float Prone_RunningSpeedModifier; /* Ofs: 0xFE0 Size: 0x4 - FloatProperty TslGame.TslCharacter.Prone_RunningSpeedModifier */
	float Prone_SprintingSpeedModifier; /* Ofs: 0xFE4 Size: 0x4 - FloatProperty TslGame.TslCharacter.Prone_SprintingSpeedModifier */
	float ReviveCastingTime; /* Ofs: 0xFE8 Size: 0x4 - FloatProperty TslGame.TslCharacter.ReviveCastingTime */
	uint8_t boolFieldFEC;
	uint8_t boolFieldFED;
	uint8_t UnknownDataFEE[0x6];
	uint8_t boolFieldFF4;
	uint8_t UnknownDataFF5[0x3];
	uint8_t boolFieldFF8;
	uint8_t UnknownDataFF9[0x3];
	FRotator GunDirectionSway; /* Ofs: 0xFFC Size: 0xC - StructProperty TslGame.TslCharacter.GunDirectionSway */
	FVector_NetQuantizeNormal AimOffsets; /* Ofs: 0x1008 Size: 0xC - StructProperty TslGame.TslCharacter.AimOffsets */
	uint8_t boolField1014;
	uint8_t UnknownData1015[0x3];
	FVector_NetQuantizeNormal LastAimOffsets; /* Ofs: 0x1018 Size: 0xC - StructProperty TslGame.TslCharacter.LastAimOffsets */
	uint8_t UnknownData1024[0xC];
	float AimoffsetsLastRepTime; /* Ofs: 0x1030 Size: 0x4 - FloatProperty TslGame.TslCharacter.AimoffsetsLastRepTime */
	uint8_t UnknownData1034[0x2C];
	FRotator CurrentAutoRotator; /* Ofs: 0x1060 Size: 0xC - StructProperty TslGame.TslCharacter.CurrentAutoRotator */
	float AutoPitchValueMax; /* Ofs: 0x106C Size: 0x4 - FloatProperty TslGame.TslCharacter.AutoPitchValueMax */
	float AutoPitchBlendSpeed; /* Ofs: 0x1070 Size: 0x4 - FloatProperty TslGame.TslCharacter.AutoPitchBlendSpeed */
	uint8_t UnknownData1074[0xC];
	ExternalPtr<struct UCurveFloat> Curve_JumpCamera; /* Ofs: 0x1080 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_JumpCamera */
	ExternalPtr<struct UCurveVector> Curve_FPPCameraOffsetByFOV; /* Ofs: 0x1088 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_FPPCameraOffsetByFOV */
	ExternalPtr<struct UCurveFloat> Curve_DBNOFadeOut; /* Ofs: 0x1090 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_DBNOFadeOut */
	float DBNOFadeOutLerpSpeed; /* Ofs: 0x1098 Size: 0x4 - FloatProperty TslGame.TslCharacter.DBNOFadeOutLerpSpeed */
	uint8_t UnknownData109C[0x4];
	ExternalPtr<struct UCurveFloat> Curve_StandWalk; /* Ofs: 0x10A0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_StandWalk */
	ExternalPtr<struct UCurveFloat> Curve_StandRun; /* Ofs: 0x10A8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_StandRun */
	ExternalPtr<struct UCurveFloat> Curve_StandSprint; /* Ofs: 0x10B0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_StandSprint */
	ExternalPtr<struct UCurveFloat> Curve_CrouchWalk; /* Ofs: 0x10B8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_CrouchWalk */
	ExternalPtr<struct UCurveFloat> Curve_CrouchRun; /* Ofs: 0x10C0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_CrouchRun */
	ExternalPtr<struct UCurveFloat> Curve_CrouchSprint; /* Ofs: 0x10C8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_CrouchSprint */
	ExternalPtr<struct UCurveFloat> Curve_ProneWalk; /* Ofs: 0x10D0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_ProneWalk */
	ExternalPtr<struct UCurveFloat> Curve_ProneRun; /* Ofs: 0x10D8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_ProneRun */
	ExternalPtr<struct UCurveFloat> Curve_ProneSprint; /* Ofs: 0x10E0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_ProneSprint */
	ExternalPtr<struct UCurveFloat> Curve_Swim; /* Ofs: 0x10E8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_Swim */
	ExternalPtr<struct UCurveFloat> Curve_UnderwaterSwim; /* Ofs: 0x10F0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_UnderwaterSwim */
	ExternalPtr<struct UCurveFloat> Curve_StandScope; /* Ofs: 0x10F8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_StandScope */
	ExternalPtr<struct UCurveFloat> Curve_CrouchScope; /* Ofs: 0x1100 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_CrouchScope */
	ExternalPtr<struct UCurveFloat> Curve_ProneScope; /* Ofs: 0x1108 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_ProneScope */
	ExternalPtr<struct UCurveFloat> Curve_StandAim; /* Ofs: 0x1110 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_StandAim */
	ExternalPtr<struct UCurveFloat> Curve_CrouchAim; /* Ofs: 0x1118 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_CrouchAim */
	ExternalPtr<struct UCurveFloat> Curve_ProneAim; /* Ofs: 0x1120 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_ProneAim */
	ExternalPtr<struct UCurveFloat> Curve_DBNO; /* Ofs: 0x1128 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_DBNO */
	ExternalPtr<struct UCurveFloat> Curve_GroundAngle; /* Ofs: 0x1130 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_GroundAngle */
	ExternalPtr<struct UCurveVector> Curve_WeaponSway; /* Ofs: 0x1138 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_WeaponSway */
	ExternalPtr<struct UCurveVector> Curve_WeaponSway_HoldBreath; /* Ofs: 0x1140 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_WeaponSway_HoldBreath */
	ExternalPtr<struct UCurveFloat> Curve_WeaponSwayFOVModifier; /* Ofs: 0x1148 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_WeaponSwayFOVModifier */
	ExternalPtr<struct UCurveFloat> Curve_TurningLerp; /* Ofs: 0x1150 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_TurningLerp */
	ExternalPtr<struct UCurveFloat> Curve_TurningLerpLocomotion; /* Ofs: 0x1158 Size: 0x8 - ObjectProperty TslGame.TslCharacter.Curve_TurningLerpLocomotion */
	uint8_t UnknownData1160[0x4];
	float DirectionalSpeedModifier; /* Ofs: 0x1164 Size: 0x4 - FloatProperty TslGame.TslCharacter.DirectionalSpeedModifier */
	float PointDamageForceMultiplier; /* Ofs: 0x1168 Size: 0x4 - FloatProperty TslGame.TslCharacter.PointDamageForceMultiplier */
	float PointDamageForce_MapMin; /* Ofs: 0x116C Size: 0x4 - FloatProperty TslGame.TslCharacter.PointDamageForce_MapMin */
	float PointDamageForce_MapMax; /* Ofs: 0x1170 Size: 0x4 - FloatProperty TslGame.TslCharacter.PointDamageForce_MapMax */
	float RadialDamageForceMultiplier; /* Ofs: 0x1174 Size: 0x4 - FloatProperty TslGame.TslCharacter.RadialDamageForceMultiplier */
	TEnumAsByte<enum ERadialImpulseFalloff> RadialDamageFalloffType; /* Ofs: 0x1178 Size: 0x1 - ByteProperty TslGame.TslCharacter.RadialDamageFalloffType */
	uint8_t UnknownData1179[0x7];
	ExternalPtr<struct UAnimMontage> RollLeftAnim; /* Ofs: 0x1180 Size: 0x8 - ObjectProperty TslGame.TslCharacter.RollLeftAnim */
	ExternalPtr<struct UAnimMontage> RollRightAnim; /* Ofs: 0x1188 Size: 0x8 - ObjectProperty TslGame.TslCharacter.RollRightAnim */
	FCharacterAnim CharacterAnim; /* Ofs: 0x1190 Size: 0x10 - StructProperty TslGame.TslCharacter.CharacterAnim */
	EncryptedExternalPtr<struct UController> NetOwnerController; /* Ofs: 0x11A0 Size: 0x10 - EncryptedObjectProperty TslGame.TslCharacter.NetOwnerController */
	float LeanAlphaSpeed; /* Ofs: 0x11B0 Size: 0x4 - FloatProperty TslGame.TslCharacter.LeanAlphaSpeed */
	float TurnSpeedHip; /* Ofs: 0x11B4 Size: 0x4 - FloatProperty TslGame.TslCharacter.TurnSpeedHip */
	float TurnSpeedAimed; /* Ofs: 0x11B8 Size: 0x4 - FloatProperty TslGame.TslCharacter.TurnSpeedAimed */
	float TurnSpeedOverLimit; /* Ofs: 0x11BC Size: 0x4 - FloatProperty TslGame.TslCharacter.TurnSpeedOverLimit */
	float MinTurnAngleHip; /* Ofs: 0x11C0 Size: 0x4 - FloatProperty TslGame.TslCharacter.MinTurnAngleHip */
	float MinTurnAngleAim; /* Ofs: 0x11C4 Size: 0x4 - FloatProperty TslGame.TslCharacter.MinTurnAngleAim */
	float TurnLinearEndThreshold; /* Ofs: 0x11C8 Size: 0x4 - FloatProperty TslGame.TslCharacter.TurnLinearEndThreshold */
	uint8_t boolField11CC;
	uint8_t UnknownData11CD[0x3];
	float TurnNonLinearEndThreshold; /* Ofs: 0x11D0 Size: 0x4 - FloatProperty TslGame.TslCharacter.TurnNonLinearEndThreshold */
	float TurnNonLinearInterpSpeed; /* Ofs: 0x11D4 Size: 0x4 - FloatProperty TslGame.TslCharacter.TurnNonLinearInterpSpeed */
	float CapsuleTurnInterpSpeedLocomotion; /* Ofs: 0x11D8 Size: 0x4 - FloatProperty TslGame.TslCharacter.CapsuleTurnInterpSpeedLocomotion */
	float CapsuleTurnInterpSpeedLocomotionSprint; /* Ofs: 0x11DC Size: 0x4 - FloatProperty TslGame.TslCharacter.CapsuleTurnInterpSpeedLocomotionSprint */
	float CapsuleTurnInterpSpeedLocomotionProne; /* Ofs: 0x11E0 Size: 0x4 - FloatProperty TslGame.TslCharacter.CapsuleTurnInterpSpeedLocomotionProne */
	float CapsuleTurnInterpSpeedStationary; /* Ofs: 0x11E4 Size: 0x4 - FloatProperty TslGame.TslCharacter.CapsuleTurnInterpSpeedStationary */
	uint8_t UnknownData11E8[0x18];
	FName FPPCameraBoneName; /* Ofs: 0x1200 Size: 0x8 - NameProperty TslGame.TslCharacter.FPPCameraBoneName */
	FName TPPCameraBoneName; /* Ofs: 0x1208 Size: 0x8 - NameProperty TslGame.TslCharacter.TPPCameraBoneName */
	uint8_t UnknownData1210[0x10];
	float AimStateDefaultTime; /* Ofs: 0x1220 Size: 0x4 - FloatProperty TslGame.TslCharacter.AimStateDefaultTime */
	float AimStateReturnTime; /* Ofs: 0x1224 Size: 0x4 - FloatProperty TslGame.TslCharacter.AimStateReturnTime */
	float AimStateDrawTime; /* Ofs: 0x1228 Size: 0x4 - FloatProperty TslGame.TslCharacter.AimStateDrawTime */
	uint8_t UnknownData122C[0x8];
	uint8_t boolField1234;
	uint8_t boolField1235;
	uint8_t UnknownData1236[0x6];
	float CanGroggyDamageTime; /* Ofs: 0x123C Size: 0x4 - FloatProperty TslGame.TslCharacter.CanGroggyDamageTime */
	FText GroggyStartText; /* Ofs: 0x1240 Size: 0x18 - TextProperty TslGame.TslCharacter.GroggyStartText */
	FText GroggyCancelText; /* Ofs: 0x1258 Size: 0x18 - TextProperty TslGame.TslCharacter.GroggyCancelText */
	FText GroggyFinishText; /* Ofs: 0x1270 Size: 0x18 - TextProperty TslGame.TslCharacter.GroggyFinishText */
	uint8_t UnknownData1288[0xC];
	FRotator BlendTargetViewRotation; /* Ofs: 0x1294 Size: 0xC - StructProperty TslGame.TslCharacter.BlendTargetViewRotation */
	FVector2D DesiredDirection; /* Ofs: 0x12A0 Size: 0x8 - StructProperty TslGame.TslCharacter.DesiredDirection */
	ExternalPtr<struct UClass> InvulnerablilityBuff; /* Ofs: 0x12A8 Size: 0x8 - ClassProperty TslGame.TslCharacter.InvulnerablilityBuff */
	uint8_t boolField12B0;
	uint8_t UnknownData12B1[0xF];
	EncryptedExternalPtr<struct UPlayerState> AuthorizedPlayerState; /* Ofs: 0x12C0 Size: 0x10 - EncryptedObjectProperty TslGame.TslCharacter.AuthorizedPlayerState */
	ExternalPtr<struct UTslVaultingHelper> VaultingHelperRef; /* Ofs: 0x12D0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.VaultingHelperRef */
	float IndoorCheckSuccessRate; /* Ofs: 0x12D8 Size: 0x4 - FloatProperty TslGame.TslCharacter.IndoorCheckSuccessRate */
	uint8_t UnknownData12DC[0x4];
	ExternalPtr<struct UClass> SmokeBombClass; /* Ofs: 0x12E0 Size: 0x8 - ClassProperty TslGame.TslCharacter.SmokeBombClass */
	FVector Punch_InitialLocation; /* Ofs: 0x12E8 Size: 0xC - StructProperty TslGame.TslCharacter.Punch_InitialLocation */
	uint8_t boolField12F4;
	uint8_t UnknownData12F5[0x3];
	ExternalPtr<struct UAkAudioEvent> GroggyToDieAkEvent; /* Ofs: 0x12F8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.GroggyToDieAkEvent */
	float BuffFinalSpreadFactor; /* Ofs: 0x1300 Size: 0x4 - FloatProperty TslGame.TslCharacter.BuffFinalSpreadFactor */
	uint8_t UnknownData1304[0x4];
	ExternalPtr<struct UClass> FootStepEffectClassInIce; /* Ofs: 0x1308 Size: 0x8 - ClassProperty TslGame.TslCharacter.FootStepEffectClassInIce */
	ExternalPtr<struct UStanceComponent> StanceComponent; /* Ofs: 0x1310 Size: 0x8 - ObjectProperty TslGame.TslCharacter.StanceComponent */
	float SimulatedHit_Value; /* Ofs: 0x1318 Size: 0x4 - FloatProperty TslGame.TslCharacter.SimulatedHit_Value */
	uint8_t UnknownData131C[0x4];
	FName ParticleSocketFootRight; /* Ofs: 0x1320 Size: 0x8 - NameProperty TslGame.TslCharacter.ParticleSocketFootRight */
	ExternalPtr<struct UClass> FootStepEffectClassInRock; /* Ofs: 0x1328 Size: 0x8 - ClassProperty TslGame.TslCharacter.FootStepEffectClassInRock */
	float MinimumBreathToHold; /* Ofs: 0x1330 Size: 0x4 - FloatProperty TslGame.TslCharacter.MinimumBreathToHold */
	uint8_t UnknownData1334[0xC];
	ExternalPtr<struct UClass> EnergyDrinkClass; /* Ofs: 0x1340 Size: 0x8 - ClassProperty TslGame.TslCharacter.EnergyDrinkClass */
	uint8_t boolField1348;
	uint8_t UnknownData1349[0x3];
	int32_t IndoorCheckAccuracyMultiplier; /* Ofs: 0x134C Size: 0x4 - IntProperty TslGame.TslCharacter.IndoorCheckAccuracyMultiplier */
	float BoostGaugeMax; /* Ofs: 0x1350 Size: 0x4 - FloatProperty TslGame.TslCharacter.BoostGaugeMax */
	uint8_t UnknownData1354[0x4];
	ExternalPtr<struct UClass> AdrenalineClass; /* Ofs: 0x1358 Size: 0x8 - ClassProperty TslGame.TslCharacter.AdrenalineClass */
	EncryptedExternalPtr<struct UInventoryFacade> InventoryFacade; /* Ofs: 0x1360 Size: 0x10 - EncryptedObjectProperty TslGame.TslCharacter.InventoryFacade */
	float VaultEndVelocityVectorClamp; /* Ofs: 0x1370 Size: 0x4 - FloatProperty TslGame.TslCharacter.VaultEndVelocityVectorClamp */
	TWeakObjectPtr<ExternalPtr<struct UTslPlayerState>> LaunchInstigator; /* Ofs: 0x1374 Size: 0x8 - WeakObjectProperty TslGame.TslCharacter.LaunchInstigator */
	uint8_t UnknownData137C[0x4];
	ExternalPtr<struct UTslThrowableTrajectoryViewComponent> ThrowableTrajectoryViewComponent; /* Ofs: 0x1380 Size: 0x8 - ObjectProperty TslGame.TslCharacter.ThrowableTrajectoryViewComponent */
	uint8_t UnknownData1388[0x18];
	ExternalPtr<struct UTslPlayerState> GroggyPlayerInstigator; /* Ofs: 0x13A0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.GroggyPlayerInstigator */
	FVector VaultEndVelocityVectorMutliplier; /* Ofs: 0x13A8 Size: 0xC - StructProperty TslGame.TslCharacter.VaultEndVelocityVectorMutliplier */
	float LeanOffset_Stand; /* Ofs: 0x13B4 Size: 0x4 - FloatProperty TslGame.TslCharacter.LeanOffset_Stand */
	uint8_t boolField13B8;
	uint8_t UnknownData13B9[0x7];
	ExternalPtr<struct UClass> ZombieDamageType; /* Ofs: 0x13C0 Size: 0x8 - ClassProperty TslGame.TslCharacter.ZombieDamageType */
	ExternalPtr<struct UClass> FootStepEffectClassInSnow; /* Ofs: 0x13C8 Size: 0x8 - ClassProperty TslGame.TslCharacter.FootStepEffectClassInSnow */
	float HealthByRevive; /* Ofs: 0x13D0 Size: 0x4 - FloatProperty TslGame.TslCharacter.HealthByRevive */
	uint8_t UnknownData13D4[0x1C];
	ExternalPtr<struct UVaultingData> CurrentVaultData_CP; /* Ofs: 0x13F0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.CurrentVaultData_CP */
	ExternalPtr<struct UBluezoneInOutComponent> BluezoneInOut; /* Ofs: 0x13F8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.BluezoneInOut */
	EncryptedExternalPtr<struct UCameraComponent> SavedCamera; /* Ofs: 0x1400 Size: 0x10 - EncryptedObjectProperty TslGame.TslCharacter.SavedCamera */
	TArray<ExternalPtr<struct UAkAudioBank>> Banks; /* Ofs: 0x1410 Size: 0x10 - ArrayProperty TslGame.TslCharacter.Banks */
	float ExtremeFallMovementStopTime; /* Ofs: 0x1420 Size: 0x4 - FloatProperty TslGame.TslCharacter.ExtremeFallMovementStopTime */
	uint8_t UnknownData1424[0x4];
	FScriptMulticastDelegate OnCharacterWeaponRecoil; /* Ofs: 0x1428 Size: 0x10 - MulticastDelegateProperty TslGame.TslCharacter.OnCharacterWeaponRecoil */
	ExternalPtr<struct UInteractorComponent> InteractorComponent; /* Ofs: 0x1438 Size: 0x8 - ObjectProperty TslGame.TslCharacter.InteractorComponent */
	ExternalPtr<struct UInteractionComponent> InteractionComponent; /* Ofs: 0x1440 Size: 0x8 - ObjectProperty TslGame.TslCharacter.InteractionComponent */
	uint8_t UnknownData1448[0x18];
	ExternalPtr<struct UVehicleRiderComponent> VehicleRiderComponent; /* Ofs: 0x1460 Size: 0x8 - ObjectProperty TslGame.TslCharacter.VehicleRiderComponent */
	ExternalPtr<struct UClass> OutSidePlayerAreaEffectClass; /* Ofs: 0x1468 Size: 0x8 - ClassProperty TslGame.TslCharacter.OutSidePlayerAreaEffectClass */
	ExternalPtr<struct UTslPostProcessEffect> OutSidePlayerAreaEffect; /* Ofs: 0x1470 Size: 0x8 - ObjectProperty TslGame.TslCharacter.OutSidePlayerAreaEffect */
	ExternalPtr<struct UClass> DBNOEffectClass; /* Ofs: 0x1478 Size: 0x8 - ClassProperty TslGame.TslCharacter.DBNOEffectClass */
	ExternalPtr<struct UTslPostProcessEffect> DBNOEffect; /* Ofs: 0x1480 Size: 0x8 - ObjectProperty TslGame.TslCharacter.DBNOEffect */
	uint8_t UnknownData1488[0x1E0];
	ExternalPtr<struct USkeletalMeshComponent> ShadowMesh; /* Ofs: 0x1668 Size: 0x8 - ObjectProperty TslGame.TslCharacter.ShadowMesh */
	ExternalPtr<struct UTslEquippedWeaponsProxy> WeaponsShadows; /* Ofs: 0x1670 Size: 0x8 - ObjectProperty TslGame.TslCharacter.WeaponsShadows */
	ExternalPtr<struct UCharacterWeaponAnimInfoComponent> ShadowWeaponAnimInfoComponent; /* Ofs: 0x1678 Size: 0x8 - ObjectProperty TslGame.TslCharacter.ShadowWeaponAnimInfoComponent */
	float TargetingFOV; /* Ofs: 0x1680 Size: 0x4 - FloatProperty TslGame.TslCharacter.TargetingFOV */
	float AimingDelay; /* Ofs: 0x1684 Size: 0x4 - FloatProperty TslGame.TslCharacter.AimingDelay */
	uint8_t UnknownData1688[0x8];
	float AttackStateOffDelayTime; /* Ofs: 0x1690 Size: 0x4 - FloatProperty TslGame.TslCharacter.AttackStateOffDelayTime */
	float HitStateOffDelayTime; /* Ofs: 0x1694 Size: 0x4 - FloatProperty TslGame.TslCharacter.HitStateOffDelayTime */
	float HitMePlayerStateOffDelayTime; /* Ofs: 0x1698 Size: 0x4 - FloatProperty TslGame.TslCharacter.HitMePlayerStateOffDelayTime */
	uint8_t UnknownData169C[0x3C];
	ExternalPtr<struct UTslPlayerDamageConfig> DamageConfig; /* Ofs: 0x16D8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.DamageConfig */
	uint8_t UnknownData16E0[0x4];
	float FallDamageFactor; /* Ofs: 0x16E4 Size: 0x4 - FloatProperty TslGame.TslCharacter.FallDamageFactor */
	float FallDamageVelocityMin; /* Ofs: 0x16E8 Size: 0x4 - FloatProperty TslGame.TslCharacter.FallDamageVelocityMin */
	uint8_t boolField16EC;
	uint8_t UnknownData16ED[0x3];
	float CorpseLifeSpan; /* Ofs: 0x16F0 Size: 0x4 - FloatProperty TslGame.TslCharacter.CorpseLifeSpan */
	uint8_t boolField16F4;
	uint8_t UnknownData16F5[0x3];
	FName RagdollPoseCacheName; /* Ofs: 0x16F8 Size: 0x8 - NameProperty TslGame.TslCharacter.RagdollPoseCacheName */
	float PoseCachingCorpseLifespan; /* Ofs: 0x1700 Size: 0x4 - FloatProperty TslGame.TslCharacter.PoseCachingCorpseLifespan */
	float RagdollCacheDelayTime; /* Ofs: 0x1704 Size: 0x4 - FloatProperty TslGame.TslCharacter.RagdollCacheDelayTime */
	uint8_t UnknownData1708[0xC4];
	TEnumAsByte<enum EStanceMode> PreReplicatedStanceMode; /* Ofs: 0x17CC Size: 0x1 - ByteProperty TslGame.TslCharacter.PreReplicatedStanceMode */
	uint8_t UnknownData17CD[0xB];
	ExternalPtr<struct UController> LastPossessedController; /* Ofs: 0x17D8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.LastPossessedController */
	uint8_t UnknownData17E0[0x10];
	ExternalPtr<struct UTslPawnInputBindingComponent> TslPawnInputBindingComponent; /* Ofs: 0x17F0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.TslPawnInputBindingComponent */
	uint8_t UnknownData17F8[0x8];
	ExternalPtr<struct UClass> FlashBangClass; /* Ofs: 0x1800 Size: 0x8 - ClassProperty TslGame.TslCharacter.FlashBangClass */
	uint8_t CurrentWeaponZoomLevel; /* Ofs: 0x1808 Size: 0x1 - ByteProperty TslGame.TslCharacter.CurrentWeaponZoomLevel */
	uint8_t UnknownData1809[0x3];
	float VaultProbeLoopTime; /* Ofs: 0x180C Size: 0x4 - FloatProperty TslGame.TslCharacter.VaultProbeLoopTime */
	ExternalPtr<struct UGamePadInputAixsComponent> GamePadInputAixsComponent; /* Ofs: 0x1810 Size: 0x8 - ObjectProperty TslGame.TslCharacter.GamePadInputAixsComponent */
	uint8_t UnknownData1818[0x8];
	FString CharacterNetId; /* Ofs: 0x1820 Size: 0x10 - StrProperty TslGame.TslCharacter.CharacterNetId */
	ExternalPtr<struct UAkAudioEvent> SoundClearAk; /* Ofs: 0x1830 Size: 0x8 - ObjectProperty TslGame.TslCharacter.SoundClearAk */
	uint8_t UnknownData1838[0x4];
	TWeakObjectPtr<ExternalPtr<struct UActor>> LaunchCauser; /* Ofs: 0x183C Size: 0x8 - WeakObjectProperty TslGame.TslCharacter.LaunchCauser */
	uint8_t UnknownData1844[0xC];
	uint8_t boolField1850;
	TEnumAsByte<enum ECastAnim> Remote_CastAnim; /* Ofs: 0x1851 Size: 0x1 - EnumProperty TslGame.TslCharacter.Remote_CastAnim */
	uint8_t UnknownData1852[0x2];
	float DecreaseTimerSecond; /* Ofs: 0x1854 Size: 0x4 - FloatProperty TslGame.TslCharacter.DecreaseTimerSecond */
	ExternalPtr<struct UClass> FootStepEffectClassInDirt; /* Ofs: 0x1858 Size: 0x8 - ClassProperty TslGame.TslCharacter.FootStepEffectClassInDirt */
	float LeanOffset_Crouch; /* Ofs: 0x1860 Size: 0x4 - FloatProperty TslGame.TslCharacter.LeanOffset_Crouch */
	float Punch_Radius; /* Ofs: 0x1864 Size: 0x4 - FloatProperty TslGame.TslCharacter.Punch_Radius */
	ExternalPtr<struct UAkAudioEvent> RemoteVolumeControlOff; /* Ofs: 0x1868 Size: 0x8 - ObjectProperty TslGame.TslCharacter.RemoteVolumeControlOff */
	float GamepadReloadHoldTime; /* Ofs: 0x1870 Size: 0x4 - FloatProperty TslGame.TslCharacter.GamepadReloadHoldTime */
	uint8_t UnknownData1874[0x4];
	FTimerHandle TimerHandle_GamepadReloadHold; /* Ofs: 0x1878 Size: 0x8 - StructProperty TslGame.TslCharacter.TimerHandle_GamepadReloadHold */
	FAnimUpdateRateSettings AnimationUpdateRateSettings; /* Ofs: 0x1880 Size: 0x78 - StructProperty TslGame.TslCharacter.AnimationUpdateRateSettings */
	float TO_CulledMovementTickrate; /* Ofs: 0x18F8 Size: 0x4 - FloatProperty TslGame.TslCharacter.TO_CulledMovementTickrate */
	float TO_CulledActorTickInterval; /* Ofs: 0x18FC Size: 0x4 - FloatProperty TslGame.TslCharacter.TO_CulledActorTickInterval */
	float TO_MinimumDistance; /* Ofs: 0x1900 Size: 0x4 - FloatProperty TslGame.TslCharacter.TO_MinimumDistance */
	uint8_t boolField1904;
	uint8_t boolField1905;
	uint8_t boolField1906;
	uint8_t UnknownData1907[0x1];
	float TO_RenderedTolerance; /* Ofs: 0x1908 Size: 0x4 - FloatProperty TslGame.TslCharacter.TO_RenderedTolerance */
	uint8_t boolField190C;
	uint8_t boolField190D;
	uint8_t boolField190E;
	uint8_t UnknownData190F[0xD];
	float GamepadUnarmHoldTime; /* Ofs: 0x191C Size: 0x4 - FloatProperty TslGame.TslCharacter.GamepadUnarmHoldTime */
	uint8_t UnknownData1920[0x41];
	uint8_t boolField1961;
	uint8_t UnknownData1962[0x6];
	ExternalPtr<struct UCharacterWeaponAnimInfoComponent> WeaponAnimInfoComponent; /* Ofs: 0x1968 Size: 0x8 - ObjectProperty TslGame.TslCharacter.WeaponAnimInfoComponent */
	uint8_t UnknownData1970[0x4];
	uint8_t boolField1974;
	uint8_t UnknownData1975[0x3];
	TArray<struct FZombieCustomizationData> ZombieCustomizationData; /* Ofs: 0x1978 Size: 0x10 - ArrayProperty TslGame.TslCharacter.ZombieCustomizationData */
	uint8_t UnknownData1988[0x10];
	float PunchHeavy_Distance; /* Ofs: 0x1998 Size: 0x4 - FloatProperty TslGame.TslCharacter.PunchHeavy_Distance */
	float SimulatedHit_Initial; /* Ofs: 0x199C Size: 0x4 - FloatProperty TslGame.TslCharacter.SimulatedHit_Initial */
	ExternalPtr<struct USkinHelperComponent> SkinHelper; /* Ofs: 0x19A0 Size: 0x8 - ObjectProperty TslGame.TslCharacter.SkinHelper */
	ExternalPtr<struct UTslEmoteComponent> EmoteComponent; /* Ofs: 0x19A8 Size: 0x8 - ObjectProperty TslGame.TslCharacter.EmoteComponent */
	uint8_t boolField19B0;
	uint8_t UnknownData19B1[0xF];


	inline bool SetVaultingDirection_CP(t_structHelper inst, float value) { inst.WriteOffset(0x8C4, value); }
	inline bool SetSprintingAutoDoubleTapTimeLimit(t_structHelper inst, float value) { inst.WriteOffset(0x8D8, value); }
	inline bool SetOnReloadPadInput(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x8E0, value); }
	inline bool bPeekLeftToggled()
	{
		return boolField8F0& 0x1;
	}
	inline bool SetbPeekLeftToggled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPeekRightToggled()
	{
		return boolField8F1& 0x1;
	}
	inline bool SetbPeekRightToggled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCurrentAttackerPlayerState(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UTslPlayerState>> value) { inst.WriteOffset(0x8F4, value); }
	inline bool SetLastAttackedPlayerState(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UTslPlayerState>> value) { inst.WriteOffset(0x8FC, value); }
	inline bool SetHoldBreathStopInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x944, value); }
	inline bool SetHoldBreathSwayScalar(t_structHelper inst, float value) { inst.WriteOffset(0x948, value); }
	inline bool SetHoldBreathSwayReturnMod(t_structHelper inst, float value) { inst.WriteOffset(0x94C, value); }
	inline bool SetFOV_OnScopingEaseExp(t_structHelper inst, float value) { inst.WriteOffset(0x97C, value); }
	inline bool SetNoBagSpaceDelgate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x980, value); }
	inline bool bIsDying()
	{
		return boolField990& 0x1;
	}
	inline bool SetbIsDying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x990, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetItemOffsetConfig(t_structHelper inst, TMap<ESlotOffsetType, struct FItemOffsetData> value) { inst.WriteOffset(0x998, value); }
	inline bool SetTslGamepadInputComponent(t_structHelper inst, ExternalPtr<struct UTslGamepadPawnInputComponent> value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetCharacterAccessory_Primary(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetJumpDelay(t_structHelper inst, float value) { inst.WriteOffset(0xA00, value); }
	inline bool SetPainKillerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA08, value); }
	inline bool SetRevivingCharacter(t_structHelper inst, EncryptedExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0xA10, value); }
	inline bool SetCharacterState(t_structHelper inst, uint8_t value) { inst.WriteOffset(0xA20, value); }
	inline bool SetJumpLastTimer(t_structHelper inst, float value) { inst.WriteOffset(0xA24, value); }
	inline bool SetBoostItemClasses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0xA28, value); }
	inline bool SetSprint_MaxSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xA38, value); }
	inline bool SetBreathComponent(t_structHelper inst, ExternalPtr<struct UCharacterBreathComponent> value) { inst.WriteOffset(0xA48, value); }
	inline bool SetBreathComponentADS(t_structHelper inst, ExternalPtr<struct UCharacterBreathComponent> value) { inst.WriteOffset(0xA50, value); }
	inline bool SetBreathPoint(t_structHelper inst, FName value) { inst.WriteOffset(0xA58, value); }
	inline bool SetUnderwaterChokeEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA60, value); }
	inline bool SetUnderwaterChokeEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0xA68, value); }
	inline bool SetVaultEndVelocity_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xA80, value); }
	inline bool SetProneFallVerticalVelocityThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xA8C, value); }
	inline bool SetParachuteAttachPoint(t_structHelper inst, FName value) { inst.WriteOffset(0xA90, value); }
	inline bool SetHeavyFallVerticalVelocityThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xA98, value); }
	inline bool SetBoostGauge(t_structHelper inst, float value) { inst.WriteOffset(0xA9C, value); }
	inline bool bIsVaultingSystemEnabled()
	{
		return boolFieldAA0& 0x1;
	}
	inline bool SetbIsVaultingSystemEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHealItemClasses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0xAA8, value); }
	inline bool SetSimulatedHit_ImpulsePower(t_structHelper inst, float value) { inst.WriteOffset(0xAB8, value); }
	inline bool SetCastComponent(t_structHelper inst, ExternalPtr<struct UCastComponent> value) { inst.WriteOffset(0xAC0, value); }
	inline bool bIsHoldingBreath()
	{
		return boolFieldAC8& 0x1;
	}
	inline bool SetbIsHoldingBreath(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSimulatedHit_RecoveryPerSecond(t_structHelper inst, float value) { inst.WriteOffset(0xACC, value); }
	inline bool SetJumpStartLocation_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xAD0, value); }
	inline bool SetCharacterAccessory_Melee(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0xAE0, value); }
	inline bool bParachuteLandingAssist()
	{
		return boolFieldAE8& 0x1;
	}
	inline bool SetbParachuteLandingAssist(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHackReporterComponent(t_structHelper inst, ExternalPtr<struct UHackReporterComponent> value) { inst.WriteOffset(0xB08, value); }
	inline bool SetSpectatedCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB10, value); }
	inline bool SetFootStepEffectClassInGrass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB18, value); }
	inline bool SetHealth(t_structHelper inst, float value) { inst.WriteOffset(0xB28, value); }
	inline bool SetParachuteType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB30, value); }
	inline bool SetMedKitClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB38, value); }
	inline bool SetSwimPoint(t_structHelper inst, FName value) { inst.WriteOffset(0xB40, value); }
	inline bool SetSwimableWaterDepth(t_structHelper inst, float value) { inst.WriteOffset(0xB48, value); }
	inline bool SetCrouchWaterDepth(t_structHelper inst, float value) { inst.WriteOffset(0xB4C, value); }
	inline bool SetProneWaterDepth(t_structHelper inst, float value) { inst.WriteOffset(0xB50, value); }
	inline bool SetWaterFloorDetectionLength(t_structHelper inst, float value) { inst.WriteOffset(0xB54, value); }
	inline bool SetSwimMaxControllerPitch(t_structHelper inst, float value) { inst.WriteOffset(0xB58, value); }
	inline bool SetUnderwaterSwimGapFromSurface(t_structHelper inst, float value) { inst.WriteOffset(0xB5C, value); }
	inline bool SetSwimableCharacterLengthOnSurface(t_structHelper inst, float value) { inst.WriteOffset(0xB60, value); }
	inline bool SetSwimTrailEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB68, value); }
	inline bool SetSwimTrailEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0xB70, value); }
	inline bool SetParticleSocket_SwimIdleRipple(t_structHelper inst, FName value) { inst.WriteOffset(0xB78, value); }
	inline bool SetSwimIdleRippleEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB80, value); }
	inline bool SetmaxNumSwimIdleRippleEffect(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB88, value); }
	inline bool SetSwimIdleRippleOffsetFromSurface(t_structHelper inst, float value) { inst.WriteOffset(0xB8C, value); }
	inline bool SetSavedCameraFOV(t_structHelper inst, TMap<struct UCameraComponent, float> value) { inst.WriteOffset(0xBA0, value); }
	inline bool SetFootStepEffect(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0xBF0, value); }
	inline bool SetGroggyHealth(t_structHelper inst, float value) { inst.WriteOffset(0xC00, value); }
	inline bool SetSimlatedHit_PunchLightPower(t_structHelper inst, float value) { inst.WriteOffset(0xC10, value); }
	inline bool SetMolotovClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xC18, value); }
	inline bool SetPunchHeavy_Damage(t_structHelper inst, float value) { inst.WriteOffset(0xC20, value); }
	inline bool SetBandageClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xC28, value); }
	inline bool SetGroggyDamageWeight(t_structHelper inst, float value) { inst.WriteOffset(0xC34, value); }
	inline bool SetSimlatedHit_PunchHeavyPower(t_structHelper inst, float value) { inst.WriteOffset(0xC38, value); }
	inline bool SetLeanLeftTraceOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0xC48, value); }
	inline bool bInvertTargeting()
	{
		return boolFieldC54& 0x1;
	}
	inline bool SetbInvertTargeting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFootStepEffectClassInWater(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xC58, value); }
	inline bool SetRemoteVolumeControlOn(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0xC68, value); }
	inline bool SetLeanRightTraceOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0xC70, value); }
	inline bool SetLandPredictedLocation_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xC7C, value); }
	inline bool bIsScopingRemote()
	{
		return boolFieldC88& 0x1;
	}
	inline bool SetbIsScopingRemote(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsAimingRemote()
	{
		return boolFieldC88& 0x2;
	}
	inline bool SetbIsAimingRemote(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC88, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsFirstPersonRemote()
	{
		return boolFieldC88& 0x4;
	}
	inline bool SetbIsFirstPersonRemote(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC88, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bIsInVehicleRemote()
	{
		return boolFieldC88& 0x8;
	}
	inline bool SetbIsInVehicleRemote(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC88, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bIsBurning()
	{
		return boolFieldC88& 0x10;
	}
	inline bool SetbIsBurning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC88, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bIsFlashed()
	{
		return boolFieldC88& 0x20;
	}
	inline bool SetbIsFlashed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC88, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetFallHeight_CP(t_structHelper inst, float value) { inst.WriteOffset(0xCA0, value); }
	inline bool SetMinimumParachuteAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xCA4, value); }
	inline bool SetFirstAidClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xCA8, value); }
	inline bool SetFootSoundObstructionCheckMaxDistance(t_structHelper inst, float value) { inst.WriteOffset(0xCB0, value); }
	inline bool SetViewTargetTempComponent(t_structHelper inst, ExternalPtr<struct UTslViewTargetTempComponent> value) { inst.WriteOffset(0xCB8, value); }
	inline bool SetFootStepEffectClassInMud(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xCC0, value); }
	inline bool SetSprintingFOV(t_structHelper inst, float value) { inst.WriteOffset(0xCD0, value); }
	inline bool SetPunch_Damage(t_structHelper inst, float value) { inst.WriteOffset(0xCD4, value); }
	inline bool SetPunchHeavy_Radius(t_structHelper inst, float value) { inst.WriteOffset(0xCE0, value); }
	inline bool SetDecreaseGroggyHealthPerSecond(t_structHelper inst, float value) { inst.WriteOffset(0xCE4, value); }
	inline bool SetLeanOffset_Prone(t_structHelper inst, float value) { inst.WriteOffset(0xCE8, value); }
	inline bool SetParticleSocketFootLeft(t_structHelper inst, FName value) { inst.WriteOffset(0xCF0, value); }
	inline bool SetBuffComponent(t_structHelper inst, ExternalPtr<struct UBuffComponet> value) { inst.WriteOffset(0xD00, value); }
	inline bool SetForceReleasingParachuteAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xD08, value); }
	inline bool bServerFinishedVault()
	{
		return boolFieldD0C& 0x1;
	}
	inline bool SetbServerFinishedVault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD0C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDropPackageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xD10, value); }
	inline bool SetCharacterName(t_structHelper inst, FString value) { inst.WriteOffset(0xD18, value); }
	inline bool SetHealthMax(t_structHelper inst, float value) { inst.WriteOffset(0xD2C, value); }
	inline bool SetIndoorCheckHalfConeAngle(t_structHelper inst, float value) { inst.WriteOffset(0xD30, value); }
	inline bool SetLaunchDamageTypeClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xD38, value); }
	inline bool SetFootStepEffectClassInSand(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xD40, value); }
	inline bool SetGroggyDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xD48, value); }
	inline bool SetSprint_MinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xD54, value); }
	inline bool SetPunchImpactEffect(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xD58, value); }
	inline bool SetComponentsToDestroyOnDedicatedServer(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0xD60, value); }
	inline bool SetGrenadeClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xD78, value); }
	inline bool SetWeaponProcessor(t_structHelper inst, ExternalPtr<struct UWeaponProcessor> value) { inst.WriteOffset(0xD80, value); }
	inline bool SetCharacterAccessory_Secondary(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0xD88, value); }
	inline bool SetValidateLocationComponent(t_structHelper inst, ExternalPtr<struct UTslCharacterValidateLocationComponent> value) { inst.WriteOffset(0xD98, value); }
	inline bool SetFootSoundObstructionCheckInterval(t_structHelper inst, float value) { inst.WriteOffset(0xDC0, value); }
	inline bool SetVaultLastLocation_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0xDD8, value); }
	inline bool SetHeavyFallMovementStopTime(t_structHelper inst, float value) { inst.WriteOffset(0xDE4, value); }
	inline bool SetIndoorCheckSamplingQueueSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0xDE8, value); }
	inline bool SetDecreaseBoostGaugeByTime(t_structHelper inst, float value) { inst.WriteOffset(0xDEC, value); }
	inline bool SetCameraFovRatioCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xE00, value); }
	inline bool SetLastLaunchTime(t_structHelper inst, double value) { inst.WriteOffset(0xE08, value); }
	inline bool SetCharacterAccessory_Thrown(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0xE20, value); }
	inline bool SetExtremeFallVerticalVelocityThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xE28, value); }
	inline bool SetPunch_Distance(t_structHelper inst, float value) { inst.WriteOffset(0xE2C, value); }
	inline bool SetTeam(t_structHelper inst, EncryptedExternalPtr<struct UTeam> value) { inst.WriteOffset(0xE30, value); }
	inline bool SetLastTeamNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE40, value); }
	inline bool SetReleasingParachuteAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xE44, value); }
	inline bool SetShoesSoundType(t_structHelper inst, TEnumAsByte<enum EEquipableItemSoundType> value) { inst.WriteOffset(0xE4B, value); }
	inline bool SetIndoorCheckDistance(t_structHelper inst, float value) { inst.WriteOffset(0xE4C, value); }
	inline bool bAcceptHitsWhileNotAlive()
	{
		return boolFieldE58& 0x1;
	}
	inline bool SetbAcceptHitsWhileNotAlive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCharacterAccessory_Sidearm(t_structHelper inst, ExternalPtr<struct UTslAccessoryComponent> value) { inst.WriteOffset(0xE60, value); }
	inline bool SetGroggyHealthMax(t_structHelper inst, float value) { inst.WriteOffset(0xE68, value); }
	inline bool SetVaultTimer_CP(t_structHelper inst, float value) { inst.WriteOffset(0xE6C, value); }
	inline bool SetBluezoneInOutSoundEffect(t_structHelper inst, ExternalPtr<struct UBluezoneInOutSoundEffectComponent> value) { inst.WriteOffset(0xE70, value); }
	inline bool SetBuffWithBoostGauge(t_structHelper inst, TArray<struct FBuffWithBoostGauge> value) { inst.WriteOffset(0xEA0, value); }
	inline bool SetUnarmedDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xEB8, value); }
	inline bool SetHeadAttachPoint(t_structHelper inst, FName value) { inst.WriteOffset(0xED0, value); }
	inline bool SetCameraHeadHideDistance(t_structHelper inst, float value) { inst.WriteOffset(0xED8, value); }
	inline bool SetInitCameraLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0xEDC, value); }
	inline bool SetCrouchedCameraMove(t_structHelper inst, FVector value) { inst.WriteOffset(0xEE8, value); }
	inline bool SetPronedCameraMove(t_structHelper inst, FVector value) { inst.WriteOffset(0xEF4, value); }
	inline bool SetGroggyCameraMove(t_structHelper inst, FVector value) { inst.WriteOffset(0xF00, value); }
	inline bool SetCrouchedCameraMoveSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xF0C, value); }
	inline bool SetPronedCameraMoveSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xF10, value); }
	inline bool SetGroggyCameraMoveSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xF14, value); }
	inline bool SetLastTakeHitInfo(t_structHelper inst, FTakeHitInfo value) { inst.WriteOffset(0xF60, value); }
	inline bool SetTargetingSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFBC, value); }
	inline bool SetTargetingType(t_structHelper inst, TEnumAsByte<enum ETargetingType> value) { inst.WriteOffset(0xFC0, value); }
	inline bool SetStand_RunningSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFC4, value); }
	inline bool SetStand_SprintingSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFC8, value); }
	inline bool SetStand_SprintingBigGunModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFCC, value); }
	inline bool SetStand_SprintingRifleModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFD0, value); }
	inline bool SetStand_SprintingSmallGunMOdifier(t_structHelper inst, float value) { inst.WriteOffset(0xFD4, value); }
	inline bool SetCrouch_RunningSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFD8, value); }
	inline bool SetCrouch_SprintingSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFDC, value); }
	inline bool SetProne_RunningSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFE0, value); }
	inline bool SetProne_SprintingSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0xFE4, value); }
	inline bool SetReviveCastingTime(t_structHelper inst, float value) { inst.WriteOffset(0xFE8, value); }
	inline bool bWantsToRun()
	{
		return boolFieldFEC& 0x1;
	}
	inline bool SetbWantsToRun(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFEC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWantsToSprint()
	{
		return boolFieldFEC& 0x2;
	}
	inline bool SetbWantsToSprint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFEC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bWantsToSprintingAuto()
	{
		return boolFieldFEC& 0x4;
	}
	inline bool SetbWantsToSprintingAuto(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFEC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bWantsToRollingLeft()
	{
		return boolFieldFEC& 0x8;
	}
	inline bool SetbWantsToRollingLeft(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFEC, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bWantsToRollingRight()
	{
		return boolFieldFEC& 0x10;
	}
	inline bool SetbWantsToRollingRight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFEC, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bIsPeekLeft()
	{
		return boolFieldFEC& 0x20;
	}
	inline bool SetbIsPeekLeft(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFEC, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bIsPeekRight()
	{
		return boolFieldFEC& 0x40;
	}
	inline bool SetbIsPeekRight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFEC, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool IgnoreRotation()
	{
		return boolFieldFEC& 0x80;
	}
	inline bool SetIgnoreRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFEC, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bIsGroggying()
	{
		return boolFieldFED& 0x1;
	}
	inline bool SetbIsGroggying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFED, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsThirdPerson()
	{
		return boolFieldFF4& 0x1;
	}
	inline bool SetbIsThirdPerson(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFF4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsReviving()
	{
		return boolFieldFF4& 0x4;
	}
	inline bool SetbIsReviving(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFF4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bIsWeaponObstructed()
	{
		return boolFieldFF4& 0x8;
	}
	inline bool SetbIsWeaponObstructed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFF4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bIsCoatEquipped()
	{
		return boolFieldFF4& 0x10;
	}
	inline bool SetbIsCoatEquipped(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFF4, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bIsZombie()
	{
		return boolFieldFF4& 0x20;
	}
	inline bool SetbIsZombie(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFF4, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bIsThrowHigh()
	{
		return boolFieldFF4& 0x40;
	}
	inline bool SetbIsThrowHigh(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFF4, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bUseRightShoulderAiming()
	{
		return boolFieldFF8& 0x1;
	}
	inline bool SetbUseRightShoulderAiming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGunDirectionSway(t_structHelper inst, FRotator value) { inst.WriteOffset(0xFFC, value); }
	inline bool SetAimOffsets(t_structHelper inst, FVector_NetQuantizeNormal value) { inst.WriteOffset(0x1008, value); }
	inline bool bHasShieldEquipped()
	{
		return boolField1014& 0x1;
	}
	inline bool SetbHasShieldEquipped(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1014, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLastAimOffsets(t_structHelper inst, FVector_NetQuantizeNormal value) { inst.WriteOffset(0x1018, value); }
	inline bool SetAimoffsetsLastRepTime(t_structHelper inst, float value) { inst.WriteOffset(0x1030, value); }
	inline bool SetCurrentAutoRotator(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1060, value); }
	inline bool SetAutoPitchValueMax(t_structHelper inst, float value) { inst.WriteOffset(0x106C, value); }
	inline bool SetAutoPitchBlendSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x1070, value); }
	inline bool SetCurve_JumpCamera(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1080, value); }
	inline bool SetCurve_FPPCameraOffsetByFOV(t_structHelper inst, ExternalPtr<struct UCurveVector> value) { inst.WriteOffset(0x1088, value); }
	inline bool SetCurve_DBNOFadeOut(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1090, value); }
	inline bool SetDBNOFadeOutLerpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x1098, value); }
	inline bool SetCurve_StandWalk(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10A0, value); }
	inline bool SetCurve_StandRun(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10A8, value); }
	inline bool SetCurve_StandSprint(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10B0, value); }
	inline bool SetCurve_CrouchWalk(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10B8, value); }
	inline bool SetCurve_CrouchRun(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10C0, value); }
	inline bool SetCurve_CrouchSprint(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10C8, value); }
	inline bool SetCurve_ProneWalk(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10D0, value); }
	inline bool SetCurve_ProneRun(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10D8, value); }
	inline bool SetCurve_ProneSprint(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10E0, value); }
	inline bool SetCurve_Swim(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10E8, value); }
	inline bool SetCurve_UnderwaterSwim(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10F0, value); }
	inline bool SetCurve_StandScope(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x10F8, value); }
	inline bool SetCurve_CrouchScope(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1100, value); }
	inline bool SetCurve_ProneScope(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1108, value); }
	inline bool SetCurve_StandAim(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1110, value); }
	inline bool SetCurve_CrouchAim(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1118, value); }
	inline bool SetCurve_ProneAim(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1120, value); }
	inline bool SetCurve_DBNO(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1128, value); }
	inline bool SetCurve_GroundAngle(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1130, value); }
	inline bool SetCurve_WeaponSway(t_structHelper inst, ExternalPtr<struct UCurveVector> value) { inst.WriteOffset(0x1138, value); }
	inline bool SetCurve_WeaponSway_HoldBreath(t_structHelper inst, ExternalPtr<struct UCurveVector> value) { inst.WriteOffset(0x1140, value); }
	inline bool SetCurve_WeaponSwayFOVModifier(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1148, value); }
	inline bool SetCurve_TurningLerp(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1150, value); }
	inline bool SetCurve_TurningLerpLocomotion(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x1158, value); }
	inline bool SetDirectionalSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0x1164, value); }
	inline bool SetPointDamageForceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x1168, value); }
	inline bool SetPointDamageForce_MapMin(t_structHelper inst, float value) { inst.WriteOffset(0x116C, value); }
	inline bool SetPointDamageForce_MapMax(t_structHelper inst, float value) { inst.WriteOffset(0x1170, value); }
	inline bool SetRadialDamageForceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x1174, value); }
	inline bool SetRadialDamageFalloffType(t_structHelper inst, TEnumAsByte<enum ERadialImpulseFalloff> value) { inst.WriteOffset(0x1178, value); }
	inline bool SetRollLeftAnim(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0x1180, value); }
	inline bool SetRollRightAnim(t_structHelper inst, ExternalPtr<struct UAnimMontage> value) { inst.WriteOffset(0x1188, value); }
	inline bool SetCharacterAnim(t_structHelper inst, FCharacterAnim value) { inst.WriteOffset(0x1190, value); }
	inline bool SetNetOwnerController(t_structHelper inst, EncryptedExternalPtr<struct UController> value) { inst.WriteOffset(0x11A0, value); }
	inline bool SetLeanAlphaSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x11B0, value); }
	inline bool SetTurnSpeedHip(t_structHelper inst, float value) { inst.WriteOffset(0x11B4, value); }
	inline bool SetTurnSpeedAimed(t_structHelper inst, float value) { inst.WriteOffset(0x11B8, value); }
	inline bool SetTurnSpeedOverLimit(t_structHelper inst, float value) { inst.WriteOffset(0x11BC, value); }
	inline bool SetMinTurnAngleHip(t_structHelper inst, float value) { inst.WriteOffset(0x11C0, value); }
	inline bool SetMinTurnAngleAim(t_structHelper inst, float value) { inst.WriteOffset(0x11C4, value); }
	inline bool SetTurnLinearEndThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x11C8, value); }
	inline bool bNonLinearTurn()
	{
		return boolField11CC& 0x1;
	}
	inline bool SetbNonLinearTurn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x11CC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTurnNonLinearEndThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x11D0, value); }
	inline bool SetTurnNonLinearInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x11D4, value); }
	inline bool SetCapsuleTurnInterpSpeedLocomotion(t_structHelper inst, float value) { inst.WriteOffset(0x11D8, value); }
	inline bool SetCapsuleTurnInterpSpeedLocomotionSprint(t_structHelper inst, float value) { inst.WriteOffset(0x11DC, value); }
	inline bool SetCapsuleTurnInterpSpeedLocomotionProne(t_structHelper inst, float value) { inst.WriteOffset(0x11E0, value); }
	inline bool SetCapsuleTurnInterpSpeedStationary(t_structHelper inst, float value) { inst.WriteOffset(0x11E4, value); }
	inline bool SetFPPCameraBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x1200, value); }
	inline bool SetTPPCameraBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x1208, value); }
	inline bool SetAimStateDefaultTime(t_structHelper inst, float value) { inst.WriteOffset(0x1220, value); }
	inline bool SetAimStateReturnTime(t_structHelper inst, float value) { inst.WriteOffset(0x1224, value); }
	inline bool SetAimStateDrawTime(t_structHelper inst, float value) { inst.WriteOffset(0x1228, value); }
	inline bool bAimStateActive()
	{
		return boolField1234& 0x1;
	}
	inline bool SetbAimStateActive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1234, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFreeMode()
	{
		return boolField1235& 0x1;
	}
	inline bool SetbFreeMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1235, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCanGroggyDamageTime(t_structHelper inst, float value) { inst.WriteOffset(0x123C, value); }
	inline bool SetGroggyStartText(t_structHelper inst, FText value) { inst.WriteOffset(0x1240, value); }
	inline bool SetGroggyCancelText(t_structHelper inst, FText value) { inst.WriteOffset(0x1258, value); }
	inline bool SetGroggyFinishText(t_structHelper inst, FText value) { inst.WriteOffset(0x1270, value); }
	inline bool SetBlendTargetViewRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1294, value); }
	inline bool SetDesiredDirection(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x12A0, value); }
	inline bool SetInvulnerablilityBuff(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x12A8, value); }
	inline bool bInvulnerablilityEffectVisible()
	{
		return boolField12B0& 0x1;
	}
	inline bool SetbInvulnerablilityEffectVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x12B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAuthorizedPlayerState(t_structHelper inst, EncryptedExternalPtr<struct UPlayerState> value) { inst.WriteOffset(0x12C0, value); }
	inline bool SetVaultingHelperRef(t_structHelper inst, ExternalPtr<struct UTslVaultingHelper> value) { inst.WriteOffset(0x12D0, value); }
	inline bool SetIndoorCheckSuccessRate(t_structHelper inst, float value) { inst.WriteOffset(0x12D8, value); }
	inline bool SetSmokeBombClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x12E0, value); }
	inline bool SetPunch_InitialLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x12E8, value); }
	inline bool bIsClimbing_CP()
	{
		return boolField12F4& 0x1;
	}
	inline bool SetbIsClimbing_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x12F4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGroggyToDieAkEvent(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x12F8, value); }
	inline bool SetBuffFinalSpreadFactor(t_structHelper inst, float value) { inst.WriteOffset(0x1300, value); }
	inline bool SetFootStepEffectClassInIce(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1308, value); }
	inline bool SetStanceComponent(t_structHelper inst, ExternalPtr<struct UStanceComponent> value) { inst.WriteOffset(0x1310, value); }
	inline bool SetSimulatedHit_Value(t_structHelper inst, float value) { inst.WriteOffset(0x1318, value); }
	inline bool SetParticleSocketFootRight(t_structHelper inst, FName value) { inst.WriteOffset(0x1320, value); }
	inline bool SetFootStepEffectClassInRock(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1328, value); }
	inline bool SetMinimumBreathToHold(t_structHelper inst, float value) { inst.WriteOffset(0x1330, value); }
	inline bool SetEnergyDrinkClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1340, value); }
	inline bool bEndVaultToFall_CP()
	{
		return boolField1348& 0x1;
	}
	inline bool SetbEndVaultToFall_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1348, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetIndoorCheckAccuracyMultiplier(t_structHelper inst, int32_t value) { inst.WriteOffset(0x134C, value); }
	inline bool SetBoostGaugeMax(t_structHelper inst, float value) { inst.WriteOffset(0x1350, value); }
	inline bool SetAdrenalineClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1358, value); }
	inline bool SetInventoryFacade(t_structHelper inst, EncryptedExternalPtr<struct UInventoryFacade> value) { inst.WriteOffset(0x1360, value); }
	inline bool SetVaultEndVelocityVectorClamp(t_structHelper inst, float value) { inst.WriteOffset(0x1370, value); }
	inline bool SetLaunchInstigator(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UTslPlayerState>> value) { inst.WriteOffset(0x1374, value); }
	inline bool SetThrowableTrajectoryViewComponent(t_structHelper inst, ExternalPtr<struct UTslThrowableTrajectoryViewComponent> value) { inst.WriteOffset(0x1380, value); }
	inline bool SetGroggyPlayerInstigator(t_structHelper inst, ExternalPtr<struct UTslPlayerState> value) { inst.WriteOffset(0x13A0, value); }
	inline bool SetVaultEndVelocityVectorMutliplier(t_structHelper inst, FVector value) { inst.WriteOffset(0x13A8, value); }
	inline bool SetLeanOffset_Stand(t_structHelper inst, float value) { inst.WriteOffset(0x13B4, value); }
	inline bool bIsVaulting_CP()
	{
		return boolField13B8& 0x1;
	}
	inline bool SetbIsVaulting_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x13B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetZombieDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x13C0, value); }
	inline bool SetFootStepEffectClassInSnow(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x13C8, value); }
	inline bool SetHealthByRevive(t_structHelper inst, float value) { inst.WriteOffset(0x13D0, value); }
	inline bool SetCurrentVaultData_CP(t_structHelper inst, ExternalPtr<struct UVaultingData> value) { inst.WriteOffset(0x13F0, value); }
	inline bool SetBluezoneInOut(t_structHelper inst, ExternalPtr<struct UBluezoneInOutComponent> value) { inst.WriteOffset(0x13F8, value); }
	inline bool SetSavedCamera(t_structHelper inst, EncryptedExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x1400, value); }
	inline bool SetBanks(t_structHelper inst, TArray<ExternalPtr<struct UAkAudioBank>> value) { inst.WriteOffset(0x1410, value); }
	inline bool SetExtremeFallMovementStopTime(t_structHelper inst, float value) { inst.WriteOffset(0x1420, value); }
	inline bool SetOnCharacterWeaponRecoil(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1428, value); }
	inline bool SetInteractorComponent(t_structHelper inst, ExternalPtr<struct UInteractorComponent> value) { inst.WriteOffset(0x1438, value); }
	inline bool SetInteractionComponent(t_structHelper inst, ExternalPtr<struct UInteractionComponent> value) { inst.WriteOffset(0x1440, value); }
	inline bool SetVehicleRiderComponent(t_structHelper inst, ExternalPtr<struct UVehicleRiderComponent> value) { inst.WriteOffset(0x1460, value); }
	inline bool SetOutSidePlayerAreaEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1468, value); }
	inline bool SetOutSidePlayerAreaEffect(t_structHelper inst, ExternalPtr<struct UTslPostProcessEffect> value) { inst.WriteOffset(0x1470, value); }
	inline bool SetDBNOEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1478, value); }
	inline bool SetDBNOEffect(t_structHelper inst, ExternalPtr<struct UTslPostProcessEffect> value) { inst.WriteOffset(0x1480, value); }
	inline bool SetShadowMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x1668, value); }
	inline bool SetWeaponsShadows(t_structHelper inst, ExternalPtr<struct UTslEquippedWeaponsProxy> value) { inst.WriteOffset(0x1670, value); }
	inline bool SetShadowWeaponAnimInfoComponent(t_structHelper inst, ExternalPtr<struct UCharacterWeaponAnimInfoComponent> value) { inst.WriteOffset(0x1678, value); }
	inline bool SetTargetingFOV(t_structHelper inst, float value) { inst.WriteOffset(0x1680, value); }
	inline bool SetAimingDelay(t_structHelper inst, float value) { inst.WriteOffset(0x1684, value); }
	inline bool SetAttackStateOffDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x1690, value); }
	inline bool SetHitStateOffDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x1694, value); }
	inline bool SetHitMePlayerStateOffDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x1698, value); }
	inline bool SetDamageConfig(t_structHelper inst, ExternalPtr<struct UTslPlayerDamageConfig> value) { inst.WriteOffset(0x16D8, value); }
	inline bool SetFallDamageFactor(t_structHelper inst, float value) { inst.WriteOffset(0x16E4, value); }
	inline bool SetFallDamageVelocityMin(t_structHelper inst, float value) { inst.WriteOffset(0x16E8, value); }
	inline bool bIsActiveRagdollActive()
	{
		return boolField16EC& 0x1;
	}
	inline bool SetbIsActiveRagdollActive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x16EC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCorpseLifeSpan(t_structHelper inst, float value) { inst.WriteOffset(0x16F0, value); }
	inline bool bUseRagdollPoseCaching()
	{
		return boolField16F4& 0x1;
	}
	inline bool SetbUseRagdollPoseCaching(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x16F4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRagdollPoseCacheName(t_structHelper inst, FName value) { inst.WriteOffset(0x16F8, value); }
	inline bool SetPoseCachingCorpseLifespan(t_structHelper inst, float value) { inst.WriteOffset(0x1700, value); }
	inline bool SetRagdollCacheDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x1704, value); }
	inline bool SetPreReplicatedStanceMode(t_structHelper inst, TEnumAsByte<enum EStanceMode> value) { inst.WriteOffset(0x17CC, value); }
	inline bool SetLastPossessedController(t_structHelper inst, ExternalPtr<struct UController> value) { inst.WriteOffset(0x17D8, value); }
	inline bool SetTslPawnInputBindingComponent(t_structHelper inst, ExternalPtr<struct UTslPawnInputBindingComponent> value) { inst.WriteOffset(0x17F0, value); }
	inline bool SetFlashBangClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1800, value); }
	inline bool SetCurrentWeaponZoomLevel(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x1808, value); }
	inline bool SetVaultProbeLoopTime(t_structHelper inst, float value) { inst.WriteOffset(0x180C, value); }
	inline bool SetGamePadInputAixsComponent(t_structHelper inst, ExternalPtr<struct UGamePadInputAixsComponent> value) { inst.WriteOffset(0x1810, value); }
	inline bool SetCharacterNetId(t_structHelper inst, FString value) { inst.WriteOffset(0x1820, value); }
	inline bool SetSoundClearAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x1830, value); }
	inline bool SetLaunchCauser(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x183C, value); }
	inline bool bWantsToVault()
	{
		return boolField1850& 0x1;
	}
	inline bool SetbWantsToVault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1850, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRemote_CastAnim(t_structHelper inst, TEnumAsByte<enum ECastAnim> value) { inst.WriteOffset(0x1851, value); }
	inline bool SetDecreaseTimerSecond(t_structHelper inst, float value) { inst.WriteOffset(0x1854, value); }
	inline bool SetFootStepEffectClassInDirt(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1858, value); }
	inline bool SetLeanOffset_Crouch(t_structHelper inst, float value) { inst.WriteOffset(0x1860, value); }
	inline bool SetPunch_Radius(t_structHelper inst, float value) { inst.WriteOffset(0x1864, value); }
	inline bool SetRemoteVolumeControlOff(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x1868, value); }
	inline bool SetGamepadReloadHoldTime(t_structHelper inst, float value) { inst.WriteOffset(0x1870, value); }
	inline bool SetTimerHandle_GamepadReloadHold(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x1878, value); }
	inline bool SetAnimationUpdateRateSettings(t_structHelper inst, FAnimUpdateRateSettings value) { inst.WriteOffset(0x1880, value); }
	inline bool SetTO_CulledMovementTickrate(t_structHelper inst, float value) { inst.WriteOffset(0x18F8, value); }
	inline bool SetTO_CulledActorTickInterval(t_structHelper inst, float value) { inst.WriteOffset(0x18FC, value); }
	inline bool SetTO_MinimumDistance(t_structHelper inst, float value) { inst.WriteOffset(0x1900, value); }
	inline bool bRunTickOptimization()
	{
		return boolField1904& 0x1;
	}
	inline bool SetbRunTickOptimization(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1904, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRunTickOptimization_Anim()
	{
		return boolField1905& 0x1;
	}
	inline bool SetbRunTickOptimization_Anim(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1905, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRunTickOptimization_Movement()
	{
		return boolField1906& 0x1;
	}
	inline bool SetbRunTickOptimization_Movement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1906, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTO_RenderedTolerance(t_structHelper inst, float value) { inst.WriteOffset(0x1908, value); }
	inline bool bTickOptimization_Move_Active()
	{
		return boolField190C& 0x1;
	}
	inline bool SetbTickOptimization_Move_Active(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x190C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTickOptimization_Anim_Active()
	{
		return boolField190D& 0x1;
	}
	inline bool SetbTickOptimization_Anim_Active(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x190D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTickOptimization_Actor_Active()
	{
		return boolField190E& 0x1;
	}
	inline bool SetbTickOptimization_Actor_Active(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x190E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGamepadUnarmHoldTime(t_structHelper inst, float value) { inst.WriteOffset(0x191C, value); }
	inline bool bIsDemoVaulting_CP()
	{
		return boolField1961& 0x1;
	}
	inline bool SetbIsDemoVaulting_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1961, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponAnimInfoComponent(t_structHelper inst, ExternalPtr<struct UCharacterWeaponAnimInfoComponent> value) { inst.WriteOffset(0x1968, value); }
	inline bool bWantsToCancelVault()
	{
		return boolField1974& 0x1;
	}
	inline bool SetbWantsToCancelVault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1974, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetZombieCustomizationData(t_structHelper inst, TArray<struct FZombieCustomizationData> value) { inst.WriteOffset(0x1978, value); }
	inline bool SetPunchHeavy_Distance(t_structHelper inst, float value) { inst.WriteOffset(0x1998, value); }
	inline bool SetSimulatedHit_Initial(t_structHelper inst, float value) { inst.WriteOffset(0x199C, value); }
	inline bool SetSkinHelper(t_structHelper inst, ExternalPtr<struct USkinHelperComponent> value) { inst.WriteOffset(0x19A0, value); }
	inline bool SetEmoteComponent(t_structHelper inst, ExternalPtr<struct UTslEmoteComponent> value) { inst.WriteOffset(0x19A8, value); }
	inline bool bIsCameraUnderWater()
	{
		return boolField19B0& 0x1;
	}
	inline bool SetbIsCameraUnderWater(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x19B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCharacter = sizeof(UTslCharacter); // 6592
    static_assert(sizeof(UTslCharacter) == 0x19C0, "Size of UTslCharacter is not correct.");
	auto constexpr UTslCharacter_VaultingDirection_CP_Offset = offsetof(UTslCharacter, VaultingDirection_CP);
	static_assert(UTslCharacter_VaultingDirection_CP_Offset == 0x8c4, "UTslCharacter::VaultingDirection_CP offset is not 8c4");
	auto constexpr UTslCharacter_SprintingAutoDoubleTapTimeLimit_Offset = offsetof(UTslCharacter, SprintingAutoDoubleTapTimeLimit);
	static_assert(UTslCharacter_SprintingAutoDoubleTapTimeLimit_Offset == 0x8d8, "UTslCharacter::SprintingAutoDoubleTapTimeLimit offset is not 8d8");
	auto constexpr UTslCharacter_OnReloadPadInput_Offset = offsetof(UTslCharacter, OnReloadPadInput);
	static_assert(UTslCharacter_OnReloadPadInput_Offset == 0x8e0, "UTslCharacter::OnReloadPadInput offset is not 8e0");
	auto constexpr UTslCharacter_boolField8F0_Offset = offsetof(UTslCharacter, boolField8F0);
	static_assert(UTslCharacter_boolField8F0_Offset == 0x8f0, "UTslCharacter::boolField8F0 offset is not 8f0");
	auto constexpr UTslCharacter_boolField8F1_Offset = offsetof(UTslCharacter, boolField8F1);
	static_assert(UTslCharacter_boolField8F1_Offset == 0x8f1, "UTslCharacter::boolField8F1 offset is not 8f1");
	auto constexpr UTslCharacter_CurrentAttackerPlayerState_Offset = offsetof(UTslCharacter, CurrentAttackerPlayerState);
	static_assert(UTslCharacter_CurrentAttackerPlayerState_Offset == 0x8f4, "UTslCharacter::CurrentAttackerPlayerState offset is not 8f4");
	auto constexpr UTslCharacter_LastAttackedPlayerState_Offset = offsetof(UTslCharacter, LastAttackedPlayerState);
	static_assert(UTslCharacter_LastAttackedPlayerState_Offset == 0x8fc, "UTslCharacter::LastAttackedPlayerState offset is not 8fc");
	auto constexpr UTslCharacter_HoldBreathStopInterpSpeed_Offset = offsetof(UTslCharacter, HoldBreathStopInterpSpeed);
	static_assert(UTslCharacter_HoldBreathStopInterpSpeed_Offset == 0x944, "UTslCharacter::HoldBreathStopInterpSpeed offset is not 944");
	auto constexpr UTslCharacter_HoldBreathSwayScalar_Offset = offsetof(UTslCharacter, HoldBreathSwayScalar);
	static_assert(UTslCharacter_HoldBreathSwayScalar_Offset == 0x948, "UTslCharacter::HoldBreathSwayScalar offset is not 948");
	auto constexpr UTslCharacter_HoldBreathSwayReturnMod_Offset = offsetof(UTslCharacter, HoldBreathSwayReturnMod);
	static_assert(UTslCharacter_HoldBreathSwayReturnMod_Offset == 0x94c, "UTslCharacter::HoldBreathSwayReturnMod offset is not 94c");
	auto constexpr UTslCharacter_FOV_OnScopingEaseExp_Offset = offsetof(UTslCharacter, FOV_OnScopingEaseExp);
	static_assert(UTslCharacter_FOV_OnScopingEaseExp_Offset == 0x97c, "UTslCharacter::FOV_OnScopingEaseExp offset is not 97c");
	auto constexpr UTslCharacter_NoBagSpaceDelgate_Offset = offsetof(UTslCharacter, NoBagSpaceDelgate);
	static_assert(UTslCharacter_NoBagSpaceDelgate_Offset == 0x980, "UTslCharacter::NoBagSpaceDelgate offset is not 980");
	auto constexpr UTslCharacter_boolField990_Offset = offsetof(UTslCharacter, boolField990);
	static_assert(UTslCharacter_boolField990_Offset == 0x990, "UTslCharacter::boolField990 offset is not 990");
	auto constexpr UTslCharacter_ItemOffsetConfig_Offset = offsetof(UTslCharacter, ItemOffsetConfig);
	static_assert(UTslCharacter_ItemOffsetConfig_Offset == 0x998, "UTslCharacter::ItemOffsetConfig offset is not 998");
	auto constexpr UTslCharacter_TslGamepadInputComponent_Offset = offsetof(UTslCharacter, TslGamepadInputComponent);
	static_assert(UTslCharacter_TslGamepadInputComponent_Offset == 0x9e8, "UTslCharacter::TslGamepadInputComponent offset is not 9e8");
	auto constexpr UTslCharacter_CharacterAccessory_Primary_Offset = offsetof(UTslCharacter, CharacterAccessory_Primary);
	static_assert(UTslCharacter_CharacterAccessory_Primary_Offset == 0x9f8, "UTslCharacter::CharacterAccessory_Primary offset is not 9f8");
	auto constexpr UTslCharacter_JumpDelay_Offset = offsetof(UTslCharacter, JumpDelay);
	static_assert(UTslCharacter_JumpDelay_Offset == 0xa00, "UTslCharacter::JumpDelay offset is not a00");
	auto constexpr UTslCharacter_PainKillerClass_Offset = offsetof(UTslCharacter, PainKillerClass);
	static_assert(UTslCharacter_PainKillerClass_Offset == 0xa08, "UTslCharacter::PainKillerClass offset is not a08");
	auto constexpr UTslCharacter_RevivingCharacter_Offset = offsetof(UTslCharacter, RevivingCharacter);
	static_assert(UTslCharacter_RevivingCharacter_Offset == 0xa10, "UTslCharacter::RevivingCharacter offset is not a10");
	auto constexpr UTslCharacter_CharacterState_Offset = offsetof(UTslCharacter, CharacterState);
	static_assert(UTslCharacter_CharacterState_Offset == 0xa20, "UTslCharacter::CharacterState offset is not a20");
	auto constexpr UTslCharacter_JumpLastTimer_Offset = offsetof(UTslCharacter, JumpLastTimer);
	static_assert(UTslCharacter_JumpLastTimer_Offset == 0xa24, "UTslCharacter::JumpLastTimer offset is not a24");
	auto constexpr UTslCharacter_BoostItemClasses_Offset = offsetof(UTslCharacter, BoostItemClasses);
	static_assert(UTslCharacter_BoostItemClasses_Offset == 0xa28, "UTslCharacter::BoostItemClasses offset is not a28");
	auto constexpr UTslCharacter_Sprint_MaxSpeed_Offset = offsetof(UTslCharacter, Sprint_MaxSpeed);
	static_assert(UTslCharacter_Sprint_MaxSpeed_Offset == 0xa38, "UTslCharacter::Sprint_MaxSpeed offset is not a38");
	auto constexpr UTslCharacter_BreathComponent_Offset = offsetof(UTslCharacter, BreathComponent);
	static_assert(UTslCharacter_BreathComponent_Offset == 0xa48, "UTslCharacter::BreathComponent offset is not a48");
	auto constexpr UTslCharacter_BreathComponentADS_Offset = offsetof(UTslCharacter, BreathComponentADS);
	static_assert(UTslCharacter_BreathComponentADS_Offset == 0xa50, "UTslCharacter::BreathComponentADS offset is not a50");
	auto constexpr UTslCharacter_BreathPoint_Offset = offsetof(UTslCharacter, BreathPoint);
	static_assert(UTslCharacter_BreathPoint_Offset == 0xa58, "UTslCharacter::BreathPoint offset is not a58");
	auto constexpr UTslCharacter_UnderwaterChokeEffectClass_Offset = offsetof(UTslCharacter, UnderwaterChokeEffectClass);
	static_assert(UTslCharacter_UnderwaterChokeEffectClass_Offset == 0xa60, "UTslCharacter::UnderwaterChokeEffectClass offset is not a60");
	auto constexpr UTslCharacter_UnderwaterChokeEffect_Offset = offsetof(UTslCharacter, UnderwaterChokeEffect);
	static_assert(UTslCharacter_UnderwaterChokeEffect_Offset == 0xa68, "UTslCharacter::UnderwaterChokeEffect offset is not a68");
	auto constexpr UTslCharacter_VaultEndVelocity_CP_Offset = offsetof(UTslCharacter, VaultEndVelocity_CP);
	static_assert(UTslCharacter_VaultEndVelocity_CP_Offset == 0xa80, "UTslCharacter::VaultEndVelocity_CP offset is not a80");
	auto constexpr UTslCharacter_ProneFallVerticalVelocityThreshold_Offset = offsetof(UTslCharacter, ProneFallVerticalVelocityThreshold);
	static_assert(UTslCharacter_ProneFallVerticalVelocityThreshold_Offset == 0xa8c, "UTslCharacter::ProneFallVerticalVelocityThreshold offset is not a8c");
	auto constexpr UTslCharacter_ParachuteAttachPoint_Offset = offsetof(UTslCharacter, ParachuteAttachPoint);
	static_assert(UTslCharacter_ParachuteAttachPoint_Offset == 0xa90, "UTslCharacter::ParachuteAttachPoint offset is not a90");
	auto constexpr UTslCharacter_HeavyFallVerticalVelocityThreshold_Offset = offsetof(UTslCharacter, HeavyFallVerticalVelocityThreshold);
	static_assert(UTslCharacter_HeavyFallVerticalVelocityThreshold_Offset == 0xa98, "UTslCharacter::HeavyFallVerticalVelocityThreshold offset is not a98");
	auto constexpr UTslCharacter_BoostGauge_Offset = offsetof(UTslCharacter, BoostGauge);
	static_assert(UTslCharacter_BoostGauge_Offset == 0xa9c, "UTslCharacter::BoostGauge offset is not a9c");
	auto constexpr UTslCharacter_boolFieldAA0_Offset = offsetof(UTslCharacter, boolFieldAA0);
	static_assert(UTslCharacter_boolFieldAA0_Offset == 0xaa0, "UTslCharacter::boolFieldAA0 offset is not aa0");
	auto constexpr UTslCharacter_HealItemClasses_Offset = offsetof(UTslCharacter, HealItemClasses);
	static_assert(UTslCharacter_HealItemClasses_Offset == 0xaa8, "UTslCharacter::HealItemClasses offset is not aa8");
	auto constexpr UTslCharacter_SimulatedHit_ImpulsePower_Offset = offsetof(UTslCharacter, SimulatedHit_ImpulsePower);
	static_assert(UTslCharacter_SimulatedHit_ImpulsePower_Offset == 0xab8, "UTslCharacter::SimulatedHit_ImpulsePower offset is not ab8");
	auto constexpr UTslCharacter_CastComponent_Offset = offsetof(UTslCharacter, CastComponent);
	static_assert(UTslCharacter_CastComponent_Offset == 0xac0, "UTslCharacter::CastComponent offset is not ac0");
	auto constexpr UTslCharacter_boolFieldAC8_Offset = offsetof(UTslCharacter, boolFieldAC8);
	static_assert(UTslCharacter_boolFieldAC8_Offset == 0xac8, "UTslCharacter::boolFieldAC8 offset is not ac8");
	auto constexpr UTslCharacter_SimulatedHit_RecoveryPerSecond_Offset = offsetof(UTslCharacter, SimulatedHit_RecoveryPerSecond);
	static_assert(UTslCharacter_SimulatedHit_RecoveryPerSecond_Offset == 0xacc, "UTslCharacter::SimulatedHit_RecoveryPerSecond offset is not acc");
	auto constexpr UTslCharacter_JumpStartLocation_CP_Offset = offsetof(UTslCharacter, JumpStartLocation_CP);
	static_assert(UTslCharacter_JumpStartLocation_CP_Offset == 0xad0, "UTslCharacter::JumpStartLocation_CP offset is not ad0");
	auto constexpr UTslCharacter_CharacterAccessory_Melee_Offset = offsetof(UTslCharacter, CharacterAccessory_Melee);
	static_assert(UTslCharacter_CharacterAccessory_Melee_Offset == 0xae0, "UTslCharacter::CharacterAccessory_Melee offset is not ae0");
	auto constexpr UTslCharacter_boolFieldAE8_Offset = offsetof(UTslCharacter, boolFieldAE8);
	static_assert(UTslCharacter_boolFieldAE8_Offset == 0xae8, "UTslCharacter::boolFieldAE8 offset is not ae8");
	auto constexpr UTslCharacter_HackReporterComponent_Offset = offsetof(UTslCharacter, HackReporterComponent);
	static_assert(UTslCharacter_HackReporterComponent_Offset == 0xb08, "UTslCharacter::HackReporterComponent offset is not b08");
	auto constexpr UTslCharacter_SpectatedCount_Offset = offsetof(UTslCharacter, SpectatedCount);
	static_assert(UTslCharacter_SpectatedCount_Offset == 0xb10, "UTslCharacter::SpectatedCount offset is not b10");
	auto constexpr UTslCharacter_FootStepEffectClassInGrass_Offset = offsetof(UTslCharacter, FootStepEffectClassInGrass);
	static_assert(UTslCharacter_FootStepEffectClassInGrass_Offset == 0xb18, "UTslCharacter::FootStepEffectClassInGrass offset is not b18");
	auto constexpr UTslCharacter_Health_Offset = offsetof(UTslCharacter, Health);
	static_assert(UTslCharacter_Health_Offset == 0xb28, "UTslCharacter::Health offset is not b28");
	auto constexpr UTslCharacter_ParachuteType_Offset = offsetof(UTslCharacter, ParachuteType);
	static_assert(UTslCharacter_ParachuteType_Offset == 0xb30, "UTslCharacter::ParachuteType offset is not b30");
	auto constexpr UTslCharacter_MedKitClass_Offset = offsetof(UTslCharacter, MedKitClass);
	static_assert(UTslCharacter_MedKitClass_Offset == 0xb38, "UTslCharacter::MedKitClass offset is not b38");
	auto constexpr UTslCharacter_SwimPoint_Offset = offsetof(UTslCharacter, SwimPoint);
	static_assert(UTslCharacter_SwimPoint_Offset == 0xb40, "UTslCharacter::SwimPoint offset is not b40");
	auto constexpr UTslCharacter_SwimableWaterDepth_Offset = offsetof(UTslCharacter, SwimableWaterDepth);
	static_assert(UTslCharacter_SwimableWaterDepth_Offset == 0xb48, "UTslCharacter::SwimableWaterDepth offset is not b48");
	auto constexpr UTslCharacter_CrouchWaterDepth_Offset = offsetof(UTslCharacter, CrouchWaterDepth);
	static_assert(UTslCharacter_CrouchWaterDepth_Offset == 0xb4c, "UTslCharacter::CrouchWaterDepth offset is not b4c");
	auto constexpr UTslCharacter_ProneWaterDepth_Offset = offsetof(UTslCharacter, ProneWaterDepth);
	static_assert(UTslCharacter_ProneWaterDepth_Offset == 0xb50, "UTslCharacter::ProneWaterDepth offset is not b50");
	auto constexpr UTslCharacter_WaterFloorDetectionLength_Offset = offsetof(UTslCharacter, WaterFloorDetectionLength);
	static_assert(UTslCharacter_WaterFloorDetectionLength_Offset == 0xb54, "UTslCharacter::WaterFloorDetectionLength offset is not b54");
	auto constexpr UTslCharacter_SwimMaxControllerPitch_Offset = offsetof(UTslCharacter, SwimMaxControllerPitch);
	static_assert(UTslCharacter_SwimMaxControllerPitch_Offset == 0xb58, "UTslCharacter::SwimMaxControllerPitch offset is not b58");
	auto constexpr UTslCharacter_UnderwaterSwimGapFromSurface_Offset = offsetof(UTslCharacter, UnderwaterSwimGapFromSurface);
	static_assert(UTslCharacter_UnderwaterSwimGapFromSurface_Offset == 0xb5c, "UTslCharacter::UnderwaterSwimGapFromSurface offset is not b5c");
	auto constexpr UTslCharacter_SwimableCharacterLengthOnSurface_Offset = offsetof(UTslCharacter, SwimableCharacterLengthOnSurface);
	static_assert(UTslCharacter_SwimableCharacterLengthOnSurface_Offset == 0xb60, "UTslCharacter::SwimableCharacterLengthOnSurface offset is not b60");
	auto constexpr UTslCharacter_SwimTrailEffectClass_Offset = offsetof(UTslCharacter, SwimTrailEffectClass);
	static_assert(UTslCharacter_SwimTrailEffectClass_Offset == 0xb68, "UTslCharacter::SwimTrailEffectClass offset is not b68");
	auto constexpr UTslCharacter_SwimTrailEffect_Offset = offsetof(UTslCharacter, SwimTrailEffect);
	static_assert(UTslCharacter_SwimTrailEffect_Offset == 0xb70, "UTslCharacter::SwimTrailEffect offset is not b70");
	auto constexpr UTslCharacter_ParticleSocket_SwimIdleRipple_Offset = offsetof(UTslCharacter, ParticleSocket_SwimIdleRipple);
	static_assert(UTslCharacter_ParticleSocket_SwimIdleRipple_Offset == 0xb78, "UTslCharacter::ParticleSocket_SwimIdleRipple offset is not b78");
	auto constexpr UTslCharacter_SwimIdleRippleEffectClass_Offset = offsetof(UTslCharacter, SwimIdleRippleEffectClass);
	static_assert(UTslCharacter_SwimIdleRippleEffectClass_Offset == 0xb80, "UTslCharacter::SwimIdleRippleEffectClass offset is not b80");
	auto constexpr UTslCharacter_maxNumSwimIdleRippleEffect_Offset = offsetof(UTslCharacter, maxNumSwimIdleRippleEffect);
	static_assert(UTslCharacter_maxNumSwimIdleRippleEffect_Offset == 0xb88, "UTslCharacter::maxNumSwimIdleRippleEffect offset is not b88");
	auto constexpr UTslCharacter_SwimIdleRippleOffsetFromSurface_Offset = offsetof(UTslCharacter, SwimIdleRippleOffsetFromSurface);
	static_assert(UTslCharacter_SwimIdleRippleOffsetFromSurface_Offset == 0xb8c, "UTslCharacter::SwimIdleRippleOffsetFromSurface offset is not b8c");
	auto constexpr UTslCharacter_SavedCameraFOV_Offset = offsetof(UTslCharacter, SavedCameraFOV);
	static_assert(UTslCharacter_SavedCameraFOV_Offset == 0xba0, "UTslCharacter::SavedCameraFOV offset is not ba0");
	auto constexpr UTslCharacter_FootStepEffect_Offset = offsetof(UTslCharacter, FootStepEffect);
	static_assert(UTslCharacter_FootStepEffect_Offset == 0xbf0, "UTslCharacter::FootStepEffect offset is not bf0");
	auto constexpr UTslCharacter_GroggyHealth_Offset = offsetof(UTslCharacter, GroggyHealth);
	static_assert(UTslCharacter_GroggyHealth_Offset == 0xc00, "UTslCharacter::GroggyHealth offset is not c00");
	auto constexpr UTslCharacter_SimlatedHit_PunchLightPower_Offset = offsetof(UTslCharacter, SimlatedHit_PunchLightPower);
	static_assert(UTslCharacter_SimlatedHit_PunchLightPower_Offset == 0xc10, "UTslCharacter::SimlatedHit_PunchLightPower offset is not c10");
	auto constexpr UTslCharacter_MolotovClass_Offset = offsetof(UTslCharacter, MolotovClass);
	static_assert(UTslCharacter_MolotovClass_Offset == 0xc18, "UTslCharacter::MolotovClass offset is not c18");
	auto constexpr UTslCharacter_PunchHeavy_Damage_Offset = offsetof(UTslCharacter, PunchHeavy_Damage);
	static_assert(UTslCharacter_PunchHeavy_Damage_Offset == 0xc20, "UTslCharacter::PunchHeavy_Damage offset is not c20");
	auto constexpr UTslCharacter_BandageClass_Offset = offsetof(UTslCharacter, BandageClass);
	static_assert(UTslCharacter_BandageClass_Offset == 0xc28, "UTslCharacter::BandageClass offset is not c28");
	auto constexpr UTslCharacter_GroggyDamageWeight_Offset = offsetof(UTslCharacter, GroggyDamageWeight);
	static_assert(UTslCharacter_GroggyDamageWeight_Offset == 0xc34, "UTslCharacter::GroggyDamageWeight offset is not c34");
	auto constexpr UTslCharacter_SimlatedHit_PunchHeavyPower_Offset = offsetof(UTslCharacter, SimlatedHit_PunchHeavyPower);
	static_assert(UTslCharacter_SimlatedHit_PunchHeavyPower_Offset == 0xc38, "UTslCharacter::SimlatedHit_PunchHeavyPower offset is not c38");
	auto constexpr UTslCharacter_LeanLeftTraceOffset_Offset = offsetof(UTslCharacter, LeanLeftTraceOffset);
	static_assert(UTslCharacter_LeanLeftTraceOffset_Offset == 0xc48, "UTslCharacter::LeanLeftTraceOffset offset is not c48");
	auto constexpr UTslCharacter_boolFieldC54_Offset = offsetof(UTslCharacter, boolFieldC54);
	static_assert(UTslCharacter_boolFieldC54_Offset == 0xc54, "UTslCharacter::boolFieldC54 offset is not c54");
	auto constexpr UTslCharacter_FootStepEffectClassInWater_Offset = offsetof(UTslCharacter, FootStepEffectClassInWater);
	static_assert(UTslCharacter_FootStepEffectClassInWater_Offset == 0xc58, "UTslCharacter::FootStepEffectClassInWater offset is not c58");
	auto constexpr UTslCharacter_RemoteVolumeControlOn_Offset = offsetof(UTslCharacter, RemoteVolumeControlOn);
	static_assert(UTslCharacter_RemoteVolumeControlOn_Offset == 0xc68, "UTslCharacter::RemoteVolumeControlOn offset is not c68");
	auto constexpr UTslCharacter_LeanRightTraceOffset_Offset = offsetof(UTslCharacter, LeanRightTraceOffset);
	static_assert(UTslCharacter_LeanRightTraceOffset_Offset == 0xc70, "UTslCharacter::LeanRightTraceOffset offset is not c70");
	auto constexpr UTslCharacter_LandPredictedLocation_CP_Offset = offsetof(UTslCharacter, LandPredictedLocation_CP);
	static_assert(UTslCharacter_LandPredictedLocation_CP_Offset == 0xc7c, "UTslCharacter::LandPredictedLocation_CP offset is not c7c");
	auto constexpr UTslCharacter_boolFieldC88_Offset = offsetof(UTslCharacter, boolFieldC88);
	static_assert(UTslCharacter_boolFieldC88_Offset == 0xc88, "UTslCharacter::boolFieldC88 offset is not c88");
	auto constexpr UTslCharacter_FallHeight_CP_Offset = offsetof(UTslCharacter, FallHeight_CP);
	static_assert(UTslCharacter_FallHeight_CP_Offset == 0xca0, "UTslCharacter::FallHeight_CP offset is not ca0");
	auto constexpr UTslCharacter_MinimumParachuteAltitude_Offset = offsetof(UTslCharacter, MinimumParachuteAltitude);
	static_assert(UTslCharacter_MinimumParachuteAltitude_Offset == 0xca4, "UTslCharacter::MinimumParachuteAltitude offset is not ca4");
	auto constexpr UTslCharacter_FirstAidClass_Offset = offsetof(UTslCharacter, FirstAidClass);
	static_assert(UTslCharacter_FirstAidClass_Offset == 0xca8, "UTslCharacter::FirstAidClass offset is not ca8");
	auto constexpr UTslCharacter_FootSoundObstructionCheckMaxDistance_Offset = offsetof(UTslCharacter, FootSoundObstructionCheckMaxDistance);
	static_assert(UTslCharacter_FootSoundObstructionCheckMaxDistance_Offset == 0xcb0, "UTslCharacter::FootSoundObstructionCheckMaxDistance offset is not cb0");
	auto constexpr UTslCharacter_ViewTargetTempComponent_Offset = offsetof(UTslCharacter, ViewTargetTempComponent);
	static_assert(UTslCharacter_ViewTargetTempComponent_Offset == 0xcb8, "UTslCharacter::ViewTargetTempComponent offset is not cb8");
	auto constexpr UTslCharacter_FootStepEffectClassInMud_Offset = offsetof(UTslCharacter, FootStepEffectClassInMud);
	static_assert(UTslCharacter_FootStepEffectClassInMud_Offset == 0xcc0, "UTslCharacter::FootStepEffectClassInMud offset is not cc0");
	auto constexpr UTslCharacter_SprintingFOV_Offset = offsetof(UTslCharacter, SprintingFOV);
	static_assert(UTslCharacter_SprintingFOV_Offset == 0xcd0, "UTslCharacter::SprintingFOV offset is not cd0");
	auto constexpr UTslCharacter_Punch_Damage_Offset = offsetof(UTslCharacter, Punch_Damage);
	static_assert(UTslCharacter_Punch_Damage_Offset == 0xcd4, "UTslCharacter::Punch_Damage offset is not cd4");
	auto constexpr UTslCharacter_PunchHeavy_Radius_Offset = offsetof(UTslCharacter, PunchHeavy_Radius);
	static_assert(UTslCharacter_PunchHeavy_Radius_Offset == 0xce0, "UTslCharacter::PunchHeavy_Radius offset is not ce0");
	auto constexpr UTslCharacter_DecreaseGroggyHealthPerSecond_Offset = offsetof(UTslCharacter, DecreaseGroggyHealthPerSecond);
	static_assert(UTslCharacter_DecreaseGroggyHealthPerSecond_Offset == 0xce4, "UTslCharacter::DecreaseGroggyHealthPerSecond offset is not ce4");
	auto constexpr UTslCharacter_LeanOffset_Prone_Offset = offsetof(UTslCharacter, LeanOffset_Prone);
	static_assert(UTslCharacter_LeanOffset_Prone_Offset == 0xce8, "UTslCharacter::LeanOffset_Prone offset is not ce8");
	auto constexpr UTslCharacter_ParticleSocketFootLeft_Offset = offsetof(UTslCharacter, ParticleSocketFootLeft);
	static_assert(UTslCharacter_ParticleSocketFootLeft_Offset == 0xcf0, "UTslCharacter::ParticleSocketFootLeft offset is not cf0");
	auto constexpr UTslCharacter_BuffComponent_Offset = offsetof(UTslCharacter, BuffComponent);
	static_assert(UTslCharacter_BuffComponent_Offset == 0xd00, "UTslCharacter::BuffComponent offset is not d00");
	auto constexpr UTslCharacter_ForceReleasingParachuteAltitude_Offset = offsetof(UTslCharacter, ForceReleasingParachuteAltitude);
	static_assert(UTslCharacter_ForceReleasingParachuteAltitude_Offset == 0xd08, "UTslCharacter::ForceReleasingParachuteAltitude offset is not d08");
	auto constexpr UTslCharacter_boolFieldD0C_Offset = offsetof(UTslCharacter, boolFieldD0C);
	static_assert(UTslCharacter_boolFieldD0C_Offset == 0xd0c, "UTslCharacter::boolFieldD0C offset is not d0c");
	auto constexpr UTslCharacter_DropPackageType_Offset = offsetof(UTslCharacter, DropPackageType);
	static_assert(UTslCharacter_DropPackageType_Offset == 0xd10, "UTslCharacter::DropPackageType offset is not d10");
	auto constexpr UTslCharacter_CharacterName_Offset = offsetof(UTslCharacter, CharacterName);
	static_assert(UTslCharacter_CharacterName_Offset == 0xd18, "UTslCharacter::CharacterName offset is not d18");
	auto constexpr UTslCharacter_HealthMax_Offset = offsetof(UTslCharacter, HealthMax);
	static_assert(UTslCharacter_HealthMax_Offset == 0xd2c, "UTslCharacter::HealthMax offset is not d2c");
	auto constexpr UTslCharacter_IndoorCheckHalfConeAngle_Offset = offsetof(UTslCharacter, IndoorCheckHalfConeAngle);
	static_assert(UTslCharacter_IndoorCheckHalfConeAngle_Offset == 0xd30, "UTslCharacter::IndoorCheckHalfConeAngle offset is not d30");
	auto constexpr UTslCharacter_LaunchDamageTypeClass_Offset = offsetof(UTslCharacter, LaunchDamageTypeClass);
	static_assert(UTslCharacter_LaunchDamageTypeClass_Offset == 0xd38, "UTslCharacter::LaunchDamageTypeClass offset is not d38");
	auto constexpr UTslCharacter_FootStepEffectClassInSand_Offset = offsetof(UTslCharacter, FootStepEffectClassInSand);
	static_assert(UTslCharacter_FootStepEffectClassInSand_Offset == 0xd40, "UTslCharacter::FootStepEffectClassInSand offset is not d40");
	auto constexpr UTslCharacter_GroggyDamageType_Offset = offsetof(UTslCharacter, GroggyDamageType);
	static_assert(UTslCharacter_GroggyDamageType_Offset == 0xd48, "UTslCharacter::GroggyDamageType offset is not d48");
	auto constexpr UTslCharacter_Sprint_MinSpeed_Offset = offsetof(UTslCharacter, Sprint_MinSpeed);
	static_assert(UTslCharacter_Sprint_MinSpeed_Offset == 0xd54, "UTslCharacter::Sprint_MinSpeed offset is not d54");
	auto constexpr UTslCharacter_PunchImpactEffect_Offset = offsetof(UTslCharacter, PunchImpactEffect);
	static_assert(UTslCharacter_PunchImpactEffect_Offset == 0xd58, "UTslCharacter::PunchImpactEffect offset is not d58");
	auto constexpr UTslCharacter_ComponentsToDestroyOnDedicatedServer_Offset = offsetof(UTslCharacter, ComponentsToDestroyOnDedicatedServer);
	static_assert(UTslCharacter_ComponentsToDestroyOnDedicatedServer_Offset == 0xd60, "UTslCharacter::ComponentsToDestroyOnDedicatedServer offset is not d60");
	auto constexpr UTslCharacter_GrenadeClass_Offset = offsetof(UTslCharacter, GrenadeClass);
	static_assert(UTslCharacter_GrenadeClass_Offset == 0xd78, "UTslCharacter::GrenadeClass offset is not d78");
	auto constexpr UTslCharacter_WeaponProcessor_Offset = offsetof(UTslCharacter, WeaponProcessor);
	static_assert(UTslCharacter_WeaponProcessor_Offset == 0xd80, "UTslCharacter::WeaponProcessor offset is not d80");
	auto constexpr UTslCharacter_CharacterAccessory_Secondary_Offset = offsetof(UTslCharacter, CharacterAccessory_Secondary);
	static_assert(UTslCharacter_CharacterAccessory_Secondary_Offset == 0xd88, "UTslCharacter::CharacterAccessory_Secondary offset is not d88");
	auto constexpr UTslCharacter_ValidateLocationComponent_Offset = offsetof(UTslCharacter, ValidateLocationComponent);
	static_assert(UTslCharacter_ValidateLocationComponent_Offset == 0xd98, "UTslCharacter::ValidateLocationComponent offset is not d98");
	auto constexpr UTslCharacter_FootSoundObstructionCheckInterval_Offset = offsetof(UTslCharacter, FootSoundObstructionCheckInterval);
	static_assert(UTslCharacter_FootSoundObstructionCheckInterval_Offset == 0xdc0, "UTslCharacter::FootSoundObstructionCheckInterval offset is not dc0");
	auto constexpr UTslCharacter_VaultLastLocation_CP_Offset = offsetof(UTslCharacter, VaultLastLocation_CP);
	static_assert(UTslCharacter_VaultLastLocation_CP_Offset == 0xdd8, "UTslCharacter::VaultLastLocation_CP offset is not dd8");
	auto constexpr UTslCharacter_HeavyFallMovementStopTime_Offset = offsetof(UTslCharacter, HeavyFallMovementStopTime);
	static_assert(UTslCharacter_HeavyFallMovementStopTime_Offset == 0xde4, "UTslCharacter::HeavyFallMovementStopTime offset is not de4");
	auto constexpr UTslCharacter_IndoorCheckSamplingQueueSize_Offset = offsetof(UTslCharacter, IndoorCheckSamplingQueueSize);
	static_assert(UTslCharacter_IndoorCheckSamplingQueueSize_Offset == 0xde8, "UTslCharacter::IndoorCheckSamplingQueueSize offset is not de8");
	auto constexpr UTslCharacter_DecreaseBoostGaugeByTime_Offset = offsetof(UTslCharacter, DecreaseBoostGaugeByTime);
	static_assert(UTslCharacter_DecreaseBoostGaugeByTime_Offset == 0xdec, "UTslCharacter::DecreaseBoostGaugeByTime offset is not dec");
	auto constexpr UTslCharacter_CameraFovRatioCurve_Offset = offsetof(UTslCharacter, CameraFovRatioCurve);
	static_assert(UTslCharacter_CameraFovRatioCurve_Offset == 0xe00, "UTslCharacter::CameraFovRatioCurve offset is not e00");
	auto constexpr UTslCharacter_LastLaunchTime_Offset = offsetof(UTslCharacter, LastLaunchTime);
	static_assert(UTslCharacter_LastLaunchTime_Offset == 0xe08, "UTslCharacter::LastLaunchTime offset is not e08");
	auto constexpr UTslCharacter_CharacterAccessory_Thrown_Offset = offsetof(UTslCharacter, CharacterAccessory_Thrown);
	static_assert(UTslCharacter_CharacterAccessory_Thrown_Offset == 0xe20, "UTslCharacter::CharacterAccessory_Thrown offset is not e20");
	auto constexpr UTslCharacter_ExtremeFallVerticalVelocityThreshold_Offset = offsetof(UTslCharacter, ExtremeFallVerticalVelocityThreshold);
	static_assert(UTslCharacter_ExtremeFallVerticalVelocityThreshold_Offset == 0xe28, "UTslCharacter::ExtremeFallVerticalVelocityThreshold offset is not e28");
	auto constexpr UTslCharacter_Punch_Distance_Offset = offsetof(UTslCharacter, Punch_Distance);
	static_assert(UTslCharacter_Punch_Distance_Offset == 0xe2c, "UTslCharacter::Punch_Distance offset is not e2c");
	auto constexpr UTslCharacter_Team_Offset = offsetof(UTslCharacter, Team);
	static_assert(UTslCharacter_Team_Offset == 0xe30, "UTslCharacter::Team offset is not e30");
	auto constexpr UTslCharacter_LastTeamNum_Offset = offsetof(UTslCharacter, LastTeamNum);
	static_assert(UTslCharacter_LastTeamNum_Offset == 0xe40, "UTslCharacter::LastTeamNum offset is not e40");
	auto constexpr UTslCharacter_ReleasingParachuteAltitude_Offset = offsetof(UTslCharacter, ReleasingParachuteAltitude);
	static_assert(UTslCharacter_ReleasingParachuteAltitude_Offset == 0xe44, "UTslCharacter::ReleasingParachuteAltitude offset is not e44");
	auto constexpr UTslCharacter_ShoesSoundType_Offset = offsetof(UTslCharacter, ShoesSoundType);
	static_assert(UTslCharacter_ShoesSoundType_Offset == 0xe4b, "UTslCharacter::ShoesSoundType offset is not e4b");
	auto constexpr UTslCharacter_IndoorCheckDistance_Offset = offsetof(UTslCharacter, IndoorCheckDistance);
	static_assert(UTslCharacter_IndoorCheckDistance_Offset == 0xe4c, "UTslCharacter::IndoorCheckDistance offset is not e4c");
	auto constexpr UTslCharacter_boolFieldE58_Offset = offsetof(UTslCharacter, boolFieldE58);
	static_assert(UTslCharacter_boolFieldE58_Offset == 0xe58, "UTslCharacter::boolFieldE58 offset is not e58");
	auto constexpr UTslCharacter_CharacterAccessory_Sidearm_Offset = offsetof(UTslCharacter, CharacterAccessory_Sidearm);
	static_assert(UTslCharacter_CharacterAccessory_Sidearm_Offset == 0xe60, "UTslCharacter::CharacterAccessory_Sidearm offset is not e60");
	auto constexpr UTslCharacter_GroggyHealthMax_Offset = offsetof(UTslCharacter, GroggyHealthMax);
	static_assert(UTslCharacter_GroggyHealthMax_Offset == 0xe68, "UTslCharacter::GroggyHealthMax offset is not e68");
	auto constexpr UTslCharacter_VaultTimer_CP_Offset = offsetof(UTslCharacter, VaultTimer_CP);
	static_assert(UTslCharacter_VaultTimer_CP_Offset == 0xe6c, "UTslCharacter::VaultTimer_CP offset is not e6c");
	auto constexpr UTslCharacter_BluezoneInOutSoundEffect_Offset = offsetof(UTslCharacter, BluezoneInOutSoundEffect);
	static_assert(UTslCharacter_BluezoneInOutSoundEffect_Offset == 0xe70, "UTslCharacter::BluezoneInOutSoundEffect offset is not e70");
	auto constexpr UTslCharacter_BuffWithBoostGauge_Offset = offsetof(UTslCharacter, BuffWithBoostGauge);
	static_assert(UTslCharacter_BuffWithBoostGauge_Offset == 0xea0, "UTslCharacter::BuffWithBoostGauge offset is not ea0");
	auto constexpr UTslCharacter_UnarmedDamageType_Offset = offsetof(UTslCharacter, UnarmedDamageType);
	static_assert(UTslCharacter_UnarmedDamageType_Offset == 0xeb8, "UTslCharacter::UnarmedDamageType offset is not eb8");
	auto constexpr UTslCharacter_HeadAttachPoint_Offset = offsetof(UTslCharacter, HeadAttachPoint);
	static_assert(UTslCharacter_HeadAttachPoint_Offset == 0xed0, "UTslCharacter::HeadAttachPoint offset is not ed0");
	auto constexpr UTslCharacter_CameraHeadHideDistance_Offset = offsetof(UTslCharacter, CameraHeadHideDistance);
	static_assert(UTslCharacter_CameraHeadHideDistance_Offset == 0xed8, "UTslCharacter::CameraHeadHideDistance offset is not ed8");
	auto constexpr UTslCharacter_InitCameraLocation_Offset = offsetof(UTslCharacter, InitCameraLocation);
	static_assert(UTslCharacter_InitCameraLocation_Offset == 0xedc, "UTslCharacter::InitCameraLocation offset is not edc");
	auto constexpr UTslCharacter_CrouchedCameraMove_Offset = offsetof(UTslCharacter, CrouchedCameraMove);
	static_assert(UTslCharacter_CrouchedCameraMove_Offset == 0xee8, "UTslCharacter::CrouchedCameraMove offset is not ee8");
	auto constexpr UTslCharacter_PronedCameraMove_Offset = offsetof(UTslCharacter, PronedCameraMove);
	static_assert(UTslCharacter_PronedCameraMove_Offset == 0xef4, "UTslCharacter::PronedCameraMove offset is not ef4");
	auto constexpr UTslCharacter_GroggyCameraMove_Offset = offsetof(UTslCharacter, GroggyCameraMove);
	static_assert(UTslCharacter_GroggyCameraMove_Offset == 0xf00, "UTslCharacter::GroggyCameraMove offset is not f00");
	auto constexpr UTslCharacter_CrouchedCameraMoveSpeed_Offset = offsetof(UTslCharacter, CrouchedCameraMoveSpeed);
	static_assert(UTslCharacter_CrouchedCameraMoveSpeed_Offset == 0xf0c, "UTslCharacter::CrouchedCameraMoveSpeed offset is not f0c");
	auto constexpr UTslCharacter_PronedCameraMoveSpeed_Offset = offsetof(UTslCharacter, PronedCameraMoveSpeed);
	static_assert(UTslCharacter_PronedCameraMoveSpeed_Offset == 0xf10, "UTslCharacter::PronedCameraMoveSpeed offset is not f10");
	auto constexpr UTslCharacter_GroggyCameraMoveSpeed_Offset = offsetof(UTslCharacter, GroggyCameraMoveSpeed);
	static_assert(UTslCharacter_GroggyCameraMoveSpeed_Offset == 0xf14, "UTslCharacter::GroggyCameraMoveSpeed offset is not f14");
	auto constexpr UTslCharacter_LastTakeHitInfo_Offset = offsetof(UTslCharacter, LastTakeHitInfo);
	static_assert(UTslCharacter_LastTakeHitInfo_Offset == 0xf60, "UTslCharacter::LastTakeHitInfo offset is not f60");
	auto constexpr UTslCharacter_TargetingSpeedModifier_Offset = offsetof(UTslCharacter, TargetingSpeedModifier);
	static_assert(UTslCharacter_TargetingSpeedModifier_Offset == 0xfbc, "UTslCharacter::TargetingSpeedModifier offset is not fbc");
	auto constexpr UTslCharacter_TargetingType_Offset = offsetof(UTslCharacter, TargetingType);
	static_assert(UTslCharacter_TargetingType_Offset == 0xfc0, "UTslCharacter::TargetingType offset is not fc0");
	auto constexpr UTslCharacter_Stand_RunningSpeedModifier_Offset = offsetof(UTslCharacter, Stand_RunningSpeedModifier);
	static_assert(UTslCharacter_Stand_RunningSpeedModifier_Offset == 0xfc4, "UTslCharacter::Stand_RunningSpeedModifier offset is not fc4");
	auto constexpr UTslCharacter_Stand_SprintingSpeedModifier_Offset = offsetof(UTslCharacter, Stand_SprintingSpeedModifier);
	static_assert(UTslCharacter_Stand_SprintingSpeedModifier_Offset == 0xfc8, "UTslCharacter::Stand_SprintingSpeedModifier offset is not fc8");
	auto constexpr UTslCharacter_Stand_SprintingBigGunModifier_Offset = offsetof(UTslCharacter, Stand_SprintingBigGunModifier);
	static_assert(UTslCharacter_Stand_SprintingBigGunModifier_Offset == 0xfcc, "UTslCharacter::Stand_SprintingBigGunModifier offset is not fcc");
	auto constexpr UTslCharacter_Stand_SprintingRifleModifier_Offset = offsetof(UTslCharacter, Stand_SprintingRifleModifier);
	static_assert(UTslCharacter_Stand_SprintingRifleModifier_Offset == 0xfd0, "UTslCharacter::Stand_SprintingRifleModifier offset is not fd0");
	auto constexpr UTslCharacter_Stand_SprintingSmallGunMOdifier_Offset = offsetof(UTslCharacter, Stand_SprintingSmallGunMOdifier);
	static_assert(UTslCharacter_Stand_SprintingSmallGunMOdifier_Offset == 0xfd4, "UTslCharacter::Stand_SprintingSmallGunMOdifier offset is not fd4");
	auto constexpr UTslCharacter_Crouch_RunningSpeedModifier_Offset = offsetof(UTslCharacter, Crouch_RunningSpeedModifier);
	static_assert(UTslCharacter_Crouch_RunningSpeedModifier_Offset == 0xfd8, "UTslCharacter::Crouch_RunningSpeedModifier offset is not fd8");
	auto constexpr UTslCharacter_Crouch_SprintingSpeedModifier_Offset = offsetof(UTslCharacter, Crouch_SprintingSpeedModifier);
	static_assert(UTslCharacter_Crouch_SprintingSpeedModifier_Offset == 0xfdc, "UTslCharacter::Crouch_SprintingSpeedModifier offset is not fdc");
	auto constexpr UTslCharacter_Prone_RunningSpeedModifier_Offset = offsetof(UTslCharacter, Prone_RunningSpeedModifier);
	static_assert(UTslCharacter_Prone_RunningSpeedModifier_Offset == 0xfe0, "UTslCharacter::Prone_RunningSpeedModifier offset is not fe0");
	auto constexpr UTslCharacter_Prone_SprintingSpeedModifier_Offset = offsetof(UTslCharacter, Prone_SprintingSpeedModifier);
	static_assert(UTslCharacter_Prone_SprintingSpeedModifier_Offset == 0xfe4, "UTslCharacter::Prone_SprintingSpeedModifier offset is not fe4");
	auto constexpr UTslCharacter_ReviveCastingTime_Offset = offsetof(UTslCharacter, ReviveCastingTime);
	static_assert(UTslCharacter_ReviveCastingTime_Offset == 0xfe8, "UTslCharacter::ReviveCastingTime offset is not fe8");
	auto constexpr UTslCharacter_boolFieldFEC_Offset = offsetof(UTslCharacter, boolFieldFEC);
	static_assert(UTslCharacter_boolFieldFEC_Offset == 0xfec, "UTslCharacter::boolFieldFEC offset is not fec");
	auto constexpr UTslCharacter_boolFieldFED_Offset = offsetof(UTslCharacter, boolFieldFED);
	static_assert(UTslCharacter_boolFieldFED_Offset == 0xfed, "UTslCharacter::boolFieldFED offset is not fed");
	auto constexpr UTslCharacter_boolFieldFF4_Offset = offsetof(UTslCharacter, boolFieldFF4);
	static_assert(UTslCharacter_boolFieldFF4_Offset == 0xff4, "UTslCharacter::boolFieldFF4 offset is not ff4");
	auto constexpr UTslCharacter_boolFieldFF8_Offset = offsetof(UTslCharacter, boolFieldFF8);
	static_assert(UTslCharacter_boolFieldFF8_Offset == 0xff8, "UTslCharacter::boolFieldFF8 offset is not ff8");
	auto constexpr UTslCharacter_GunDirectionSway_Offset = offsetof(UTslCharacter, GunDirectionSway);
	static_assert(UTslCharacter_GunDirectionSway_Offset == 0xffc, "UTslCharacter::GunDirectionSway offset is not ffc");
	auto constexpr UTslCharacter_AimOffsets_Offset = offsetof(UTslCharacter, AimOffsets);
	static_assert(UTslCharacter_AimOffsets_Offset == 0x1008, "UTslCharacter::AimOffsets offset is not 1008");
	auto constexpr UTslCharacter_boolField1014_Offset = offsetof(UTslCharacter, boolField1014);
	static_assert(UTslCharacter_boolField1014_Offset == 0x1014, "UTslCharacter::boolField1014 offset is not 1014");
	auto constexpr UTslCharacter_LastAimOffsets_Offset = offsetof(UTslCharacter, LastAimOffsets);
	static_assert(UTslCharacter_LastAimOffsets_Offset == 0x1018, "UTslCharacter::LastAimOffsets offset is not 1018");
	auto constexpr UTslCharacter_AimoffsetsLastRepTime_Offset = offsetof(UTslCharacter, AimoffsetsLastRepTime);
	static_assert(UTslCharacter_AimoffsetsLastRepTime_Offset == 0x1030, "UTslCharacter::AimoffsetsLastRepTime offset is not 1030");
	auto constexpr UTslCharacter_CurrentAutoRotator_Offset = offsetof(UTslCharacter, CurrentAutoRotator);
	static_assert(UTslCharacter_CurrentAutoRotator_Offset == 0x1060, "UTslCharacter::CurrentAutoRotator offset is not 1060");
	auto constexpr UTslCharacter_AutoPitchValueMax_Offset = offsetof(UTslCharacter, AutoPitchValueMax);
	static_assert(UTslCharacter_AutoPitchValueMax_Offset == 0x106c, "UTslCharacter::AutoPitchValueMax offset is not 106c");
	auto constexpr UTslCharacter_AutoPitchBlendSpeed_Offset = offsetof(UTslCharacter, AutoPitchBlendSpeed);
	static_assert(UTslCharacter_AutoPitchBlendSpeed_Offset == 0x1070, "UTslCharacter::AutoPitchBlendSpeed offset is not 1070");
	auto constexpr UTslCharacter_Curve_JumpCamera_Offset = offsetof(UTslCharacter, Curve_JumpCamera);
	static_assert(UTslCharacter_Curve_JumpCamera_Offset == 0x1080, "UTslCharacter::Curve_JumpCamera offset is not 1080");
	auto constexpr UTslCharacter_Curve_FPPCameraOffsetByFOV_Offset = offsetof(UTslCharacter, Curve_FPPCameraOffsetByFOV);
	static_assert(UTslCharacter_Curve_FPPCameraOffsetByFOV_Offset == 0x1088, "UTslCharacter::Curve_FPPCameraOffsetByFOV offset is not 1088");
	auto constexpr UTslCharacter_Curve_DBNOFadeOut_Offset = offsetof(UTslCharacter, Curve_DBNOFadeOut);
	static_assert(UTslCharacter_Curve_DBNOFadeOut_Offset == 0x1090, "UTslCharacter::Curve_DBNOFadeOut offset is not 1090");
	auto constexpr UTslCharacter_DBNOFadeOutLerpSpeed_Offset = offsetof(UTslCharacter, DBNOFadeOutLerpSpeed);
	static_assert(UTslCharacter_DBNOFadeOutLerpSpeed_Offset == 0x1098, "UTslCharacter::DBNOFadeOutLerpSpeed offset is not 1098");
	auto constexpr UTslCharacter_Curve_StandWalk_Offset = offsetof(UTslCharacter, Curve_StandWalk);
	static_assert(UTslCharacter_Curve_StandWalk_Offset == 0x10a0, "UTslCharacter::Curve_StandWalk offset is not 10a0");
	auto constexpr UTslCharacter_Curve_StandRun_Offset = offsetof(UTslCharacter, Curve_StandRun);
	static_assert(UTslCharacter_Curve_StandRun_Offset == 0x10a8, "UTslCharacter::Curve_StandRun offset is not 10a8");
	auto constexpr UTslCharacter_Curve_StandSprint_Offset = offsetof(UTslCharacter, Curve_StandSprint);
	static_assert(UTslCharacter_Curve_StandSprint_Offset == 0x10b0, "UTslCharacter::Curve_StandSprint offset is not 10b0");
	auto constexpr UTslCharacter_Curve_CrouchWalk_Offset = offsetof(UTslCharacter, Curve_CrouchWalk);
	static_assert(UTslCharacter_Curve_CrouchWalk_Offset == 0x10b8, "UTslCharacter::Curve_CrouchWalk offset is not 10b8");
	auto constexpr UTslCharacter_Curve_CrouchRun_Offset = offsetof(UTslCharacter, Curve_CrouchRun);
	static_assert(UTslCharacter_Curve_CrouchRun_Offset == 0x10c0, "UTslCharacter::Curve_CrouchRun offset is not 10c0");
	auto constexpr UTslCharacter_Curve_CrouchSprint_Offset = offsetof(UTslCharacter, Curve_CrouchSprint);
	static_assert(UTslCharacter_Curve_CrouchSprint_Offset == 0x10c8, "UTslCharacter::Curve_CrouchSprint offset is not 10c8");
	auto constexpr UTslCharacter_Curve_ProneWalk_Offset = offsetof(UTslCharacter, Curve_ProneWalk);
	static_assert(UTslCharacter_Curve_ProneWalk_Offset == 0x10d0, "UTslCharacter::Curve_ProneWalk offset is not 10d0");
	auto constexpr UTslCharacter_Curve_ProneRun_Offset = offsetof(UTslCharacter, Curve_ProneRun);
	static_assert(UTslCharacter_Curve_ProneRun_Offset == 0x10d8, "UTslCharacter::Curve_ProneRun offset is not 10d8");
	auto constexpr UTslCharacter_Curve_ProneSprint_Offset = offsetof(UTslCharacter, Curve_ProneSprint);
	static_assert(UTslCharacter_Curve_ProneSprint_Offset == 0x10e0, "UTslCharacter::Curve_ProneSprint offset is not 10e0");
	auto constexpr UTslCharacter_Curve_Swim_Offset = offsetof(UTslCharacter, Curve_Swim);
	static_assert(UTslCharacter_Curve_Swim_Offset == 0x10e8, "UTslCharacter::Curve_Swim offset is not 10e8");
	auto constexpr UTslCharacter_Curve_UnderwaterSwim_Offset = offsetof(UTslCharacter, Curve_UnderwaterSwim);
	static_assert(UTslCharacter_Curve_UnderwaterSwim_Offset == 0x10f0, "UTslCharacter::Curve_UnderwaterSwim offset is not 10f0");
	auto constexpr UTslCharacter_Curve_StandScope_Offset = offsetof(UTslCharacter, Curve_StandScope);
	static_assert(UTslCharacter_Curve_StandScope_Offset == 0x10f8, "UTslCharacter::Curve_StandScope offset is not 10f8");
	auto constexpr UTslCharacter_Curve_CrouchScope_Offset = offsetof(UTslCharacter, Curve_CrouchScope);
	static_assert(UTslCharacter_Curve_CrouchScope_Offset == 0x1100, "UTslCharacter::Curve_CrouchScope offset is not 1100");
	auto constexpr UTslCharacter_Curve_ProneScope_Offset = offsetof(UTslCharacter, Curve_ProneScope);
	static_assert(UTslCharacter_Curve_ProneScope_Offset == 0x1108, "UTslCharacter::Curve_ProneScope offset is not 1108");
	auto constexpr UTslCharacter_Curve_StandAim_Offset = offsetof(UTslCharacter, Curve_StandAim);
	static_assert(UTslCharacter_Curve_StandAim_Offset == 0x1110, "UTslCharacter::Curve_StandAim offset is not 1110");
	auto constexpr UTslCharacter_Curve_CrouchAim_Offset = offsetof(UTslCharacter, Curve_CrouchAim);
	static_assert(UTslCharacter_Curve_CrouchAim_Offset == 0x1118, "UTslCharacter::Curve_CrouchAim offset is not 1118");
	auto constexpr UTslCharacter_Curve_ProneAim_Offset = offsetof(UTslCharacter, Curve_ProneAim);
	static_assert(UTslCharacter_Curve_ProneAim_Offset == 0x1120, "UTslCharacter::Curve_ProneAim offset is not 1120");
	auto constexpr UTslCharacter_Curve_DBNO_Offset = offsetof(UTslCharacter, Curve_DBNO);
	static_assert(UTslCharacter_Curve_DBNO_Offset == 0x1128, "UTslCharacter::Curve_DBNO offset is not 1128");
	auto constexpr UTslCharacter_Curve_GroundAngle_Offset = offsetof(UTslCharacter, Curve_GroundAngle);
	static_assert(UTslCharacter_Curve_GroundAngle_Offset == 0x1130, "UTslCharacter::Curve_GroundAngle offset is not 1130");
	auto constexpr UTslCharacter_Curve_WeaponSway_Offset = offsetof(UTslCharacter, Curve_WeaponSway);
	static_assert(UTslCharacter_Curve_WeaponSway_Offset == 0x1138, "UTslCharacter::Curve_WeaponSway offset is not 1138");
	auto constexpr UTslCharacter_Curve_WeaponSway_HoldBreath_Offset = offsetof(UTslCharacter, Curve_WeaponSway_HoldBreath);
	static_assert(UTslCharacter_Curve_WeaponSway_HoldBreath_Offset == 0x1140, "UTslCharacter::Curve_WeaponSway_HoldBreath offset is not 1140");
	auto constexpr UTslCharacter_Curve_WeaponSwayFOVModifier_Offset = offsetof(UTslCharacter, Curve_WeaponSwayFOVModifier);
	static_assert(UTslCharacter_Curve_WeaponSwayFOVModifier_Offset == 0x1148, "UTslCharacter::Curve_WeaponSwayFOVModifier offset is not 1148");
	auto constexpr UTslCharacter_Curve_TurningLerp_Offset = offsetof(UTslCharacter, Curve_TurningLerp);
	static_assert(UTslCharacter_Curve_TurningLerp_Offset == 0x1150, "UTslCharacter::Curve_TurningLerp offset is not 1150");
	auto constexpr UTslCharacter_Curve_TurningLerpLocomotion_Offset = offsetof(UTslCharacter, Curve_TurningLerpLocomotion);
	static_assert(UTslCharacter_Curve_TurningLerpLocomotion_Offset == 0x1158, "UTslCharacter::Curve_TurningLerpLocomotion offset is not 1158");
	auto constexpr UTslCharacter_DirectionalSpeedModifier_Offset = offsetof(UTslCharacter, DirectionalSpeedModifier);
	static_assert(UTslCharacter_DirectionalSpeedModifier_Offset == 0x1164, "UTslCharacter::DirectionalSpeedModifier offset is not 1164");
	auto constexpr UTslCharacter_PointDamageForceMultiplier_Offset = offsetof(UTslCharacter, PointDamageForceMultiplier);
	static_assert(UTslCharacter_PointDamageForceMultiplier_Offset == 0x1168, "UTslCharacter::PointDamageForceMultiplier offset is not 1168");
	auto constexpr UTslCharacter_PointDamageForce_MapMin_Offset = offsetof(UTslCharacter, PointDamageForce_MapMin);
	static_assert(UTslCharacter_PointDamageForce_MapMin_Offset == 0x116c, "UTslCharacter::PointDamageForce_MapMin offset is not 116c");
	auto constexpr UTslCharacter_PointDamageForce_MapMax_Offset = offsetof(UTslCharacter, PointDamageForce_MapMax);
	static_assert(UTslCharacter_PointDamageForce_MapMax_Offset == 0x1170, "UTslCharacter::PointDamageForce_MapMax offset is not 1170");
	auto constexpr UTslCharacter_RadialDamageForceMultiplier_Offset = offsetof(UTslCharacter, RadialDamageForceMultiplier);
	static_assert(UTslCharacter_RadialDamageForceMultiplier_Offset == 0x1174, "UTslCharacter::RadialDamageForceMultiplier offset is not 1174");
	auto constexpr UTslCharacter_RadialDamageFalloffType_Offset = offsetof(UTslCharacter, RadialDamageFalloffType);
	static_assert(UTslCharacter_RadialDamageFalloffType_Offset == 0x1178, "UTslCharacter::RadialDamageFalloffType offset is not 1178");
	auto constexpr UTslCharacter_RollLeftAnim_Offset = offsetof(UTslCharacter, RollLeftAnim);
	static_assert(UTslCharacter_RollLeftAnim_Offset == 0x1180, "UTslCharacter::RollLeftAnim offset is not 1180");
	auto constexpr UTslCharacter_RollRightAnim_Offset = offsetof(UTslCharacter, RollRightAnim);
	static_assert(UTslCharacter_RollRightAnim_Offset == 0x1188, "UTslCharacter::RollRightAnim offset is not 1188");
	auto constexpr UTslCharacter_CharacterAnim_Offset = offsetof(UTslCharacter, CharacterAnim);
	static_assert(UTslCharacter_CharacterAnim_Offset == 0x1190, "UTslCharacter::CharacterAnim offset is not 1190");
	auto constexpr UTslCharacter_NetOwnerController_Offset = offsetof(UTslCharacter, NetOwnerController);
	static_assert(UTslCharacter_NetOwnerController_Offset == 0x11a0, "UTslCharacter::NetOwnerController offset is not 11a0");
	auto constexpr UTslCharacter_LeanAlphaSpeed_Offset = offsetof(UTslCharacter, LeanAlphaSpeed);
	static_assert(UTslCharacter_LeanAlphaSpeed_Offset == 0x11b0, "UTslCharacter::LeanAlphaSpeed offset is not 11b0");
	auto constexpr UTslCharacter_TurnSpeedHip_Offset = offsetof(UTslCharacter, TurnSpeedHip);
	static_assert(UTslCharacter_TurnSpeedHip_Offset == 0x11b4, "UTslCharacter::TurnSpeedHip offset is not 11b4");
	auto constexpr UTslCharacter_TurnSpeedAimed_Offset = offsetof(UTslCharacter, TurnSpeedAimed);
	static_assert(UTslCharacter_TurnSpeedAimed_Offset == 0x11b8, "UTslCharacter::TurnSpeedAimed offset is not 11b8");
	auto constexpr UTslCharacter_TurnSpeedOverLimit_Offset = offsetof(UTslCharacter, TurnSpeedOverLimit);
	static_assert(UTslCharacter_TurnSpeedOverLimit_Offset == 0x11bc, "UTslCharacter::TurnSpeedOverLimit offset is not 11bc");
	auto constexpr UTslCharacter_MinTurnAngleHip_Offset = offsetof(UTslCharacter, MinTurnAngleHip);
	static_assert(UTslCharacter_MinTurnAngleHip_Offset == 0x11c0, "UTslCharacter::MinTurnAngleHip offset is not 11c0");
	auto constexpr UTslCharacter_MinTurnAngleAim_Offset = offsetof(UTslCharacter, MinTurnAngleAim);
	static_assert(UTslCharacter_MinTurnAngleAim_Offset == 0x11c4, "UTslCharacter::MinTurnAngleAim offset is not 11c4");
	auto constexpr UTslCharacter_TurnLinearEndThreshold_Offset = offsetof(UTslCharacter, TurnLinearEndThreshold);
	static_assert(UTslCharacter_TurnLinearEndThreshold_Offset == 0x11c8, "UTslCharacter::TurnLinearEndThreshold offset is not 11c8");
	auto constexpr UTslCharacter_boolField11CC_Offset = offsetof(UTslCharacter, boolField11CC);
	static_assert(UTslCharacter_boolField11CC_Offset == 0x11cc, "UTslCharacter::boolField11CC offset is not 11cc");
	auto constexpr UTslCharacter_TurnNonLinearEndThreshold_Offset = offsetof(UTslCharacter, TurnNonLinearEndThreshold);
	static_assert(UTslCharacter_TurnNonLinearEndThreshold_Offset == 0x11d0, "UTslCharacter::TurnNonLinearEndThreshold offset is not 11d0");
	auto constexpr UTslCharacter_TurnNonLinearInterpSpeed_Offset = offsetof(UTslCharacter, TurnNonLinearInterpSpeed);
	static_assert(UTslCharacter_TurnNonLinearInterpSpeed_Offset == 0x11d4, "UTslCharacter::TurnNonLinearInterpSpeed offset is not 11d4");
	auto constexpr UTslCharacter_CapsuleTurnInterpSpeedLocomotion_Offset = offsetof(UTslCharacter, CapsuleTurnInterpSpeedLocomotion);
	static_assert(UTslCharacter_CapsuleTurnInterpSpeedLocomotion_Offset == 0x11d8, "UTslCharacter::CapsuleTurnInterpSpeedLocomotion offset is not 11d8");
	auto constexpr UTslCharacter_CapsuleTurnInterpSpeedLocomotionSprint_Offset = offsetof(UTslCharacter, CapsuleTurnInterpSpeedLocomotionSprint);
	static_assert(UTslCharacter_CapsuleTurnInterpSpeedLocomotionSprint_Offset == 0x11dc, "UTslCharacter::CapsuleTurnInterpSpeedLocomotionSprint offset is not 11dc");
	auto constexpr UTslCharacter_CapsuleTurnInterpSpeedLocomotionProne_Offset = offsetof(UTslCharacter, CapsuleTurnInterpSpeedLocomotionProne);
	static_assert(UTslCharacter_CapsuleTurnInterpSpeedLocomotionProne_Offset == 0x11e0, "UTslCharacter::CapsuleTurnInterpSpeedLocomotionProne offset is not 11e0");
	auto constexpr UTslCharacter_CapsuleTurnInterpSpeedStationary_Offset = offsetof(UTslCharacter, CapsuleTurnInterpSpeedStationary);
	static_assert(UTslCharacter_CapsuleTurnInterpSpeedStationary_Offset == 0x11e4, "UTslCharacter::CapsuleTurnInterpSpeedStationary offset is not 11e4");
	auto constexpr UTslCharacter_FPPCameraBoneName_Offset = offsetof(UTslCharacter, FPPCameraBoneName);
	static_assert(UTslCharacter_FPPCameraBoneName_Offset == 0x1200, "UTslCharacter::FPPCameraBoneName offset is not 1200");
	auto constexpr UTslCharacter_TPPCameraBoneName_Offset = offsetof(UTslCharacter, TPPCameraBoneName);
	static_assert(UTslCharacter_TPPCameraBoneName_Offset == 0x1208, "UTslCharacter::TPPCameraBoneName offset is not 1208");
	auto constexpr UTslCharacter_AimStateDefaultTime_Offset = offsetof(UTslCharacter, AimStateDefaultTime);
	static_assert(UTslCharacter_AimStateDefaultTime_Offset == 0x1220, "UTslCharacter::AimStateDefaultTime offset is not 1220");
	auto constexpr UTslCharacter_AimStateReturnTime_Offset = offsetof(UTslCharacter, AimStateReturnTime);
	static_assert(UTslCharacter_AimStateReturnTime_Offset == 0x1224, "UTslCharacter::AimStateReturnTime offset is not 1224");
	auto constexpr UTslCharacter_AimStateDrawTime_Offset = offsetof(UTslCharacter, AimStateDrawTime);
	static_assert(UTslCharacter_AimStateDrawTime_Offset == 0x1228, "UTslCharacter::AimStateDrawTime offset is not 1228");
	auto constexpr UTslCharacter_boolField1234_Offset = offsetof(UTslCharacter, boolField1234);
	static_assert(UTslCharacter_boolField1234_Offset == 0x1234, "UTslCharacter::boolField1234 offset is not 1234");
	auto constexpr UTslCharacter_boolField1235_Offset = offsetof(UTslCharacter, boolField1235);
	static_assert(UTslCharacter_boolField1235_Offset == 0x1235, "UTslCharacter::boolField1235 offset is not 1235");
	auto constexpr UTslCharacter_CanGroggyDamageTime_Offset = offsetof(UTslCharacter, CanGroggyDamageTime);
	static_assert(UTslCharacter_CanGroggyDamageTime_Offset == 0x123c, "UTslCharacter::CanGroggyDamageTime offset is not 123c");
	auto constexpr UTslCharacter_GroggyStartText_Offset = offsetof(UTslCharacter, GroggyStartText);
	static_assert(UTslCharacter_GroggyStartText_Offset == 0x1240, "UTslCharacter::GroggyStartText offset is not 1240");
	auto constexpr UTslCharacter_GroggyCancelText_Offset = offsetof(UTslCharacter, GroggyCancelText);
	static_assert(UTslCharacter_GroggyCancelText_Offset == 0x1258, "UTslCharacter::GroggyCancelText offset is not 1258");
	auto constexpr UTslCharacter_GroggyFinishText_Offset = offsetof(UTslCharacter, GroggyFinishText);
	static_assert(UTslCharacter_GroggyFinishText_Offset == 0x1270, "UTslCharacter::GroggyFinishText offset is not 1270");
	auto constexpr UTslCharacter_BlendTargetViewRotation_Offset = offsetof(UTslCharacter, BlendTargetViewRotation);
	static_assert(UTslCharacter_BlendTargetViewRotation_Offset == 0x1294, "UTslCharacter::BlendTargetViewRotation offset is not 1294");
	auto constexpr UTslCharacter_DesiredDirection_Offset = offsetof(UTslCharacter, DesiredDirection);
	static_assert(UTslCharacter_DesiredDirection_Offset == 0x12a0, "UTslCharacter::DesiredDirection offset is not 12a0");
	auto constexpr UTslCharacter_InvulnerablilityBuff_Offset = offsetof(UTslCharacter, InvulnerablilityBuff);
	static_assert(UTslCharacter_InvulnerablilityBuff_Offset == 0x12a8, "UTslCharacter::InvulnerablilityBuff offset is not 12a8");
	auto constexpr UTslCharacter_boolField12B0_Offset = offsetof(UTslCharacter, boolField12B0);
	static_assert(UTslCharacter_boolField12B0_Offset == 0x12b0, "UTslCharacter::boolField12B0 offset is not 12b0");
	auto constexpr UTslCharacter_AuthorizedPlayerState_Offset = offsetof(UTslCharacter, AuthorizedPlayerState);
	static_assert(UTslCharacter_AuthorizedPlayerState_Offset == 0x12c0, "UTslCharacter::AuthorizedPlayerState offset is not 12c0");
	auto constexpr UTslCharacter_VaultingHelperRef_Offset = offsetof(UTslCharacter, VaultingHelperRef);
	static_assert(UTslCharacter_VaultingHelperRef_Offset == 0x12d0, "UTslCharacter::VaultingHelperRef offset is not 12d0");
	auto constexpr UTslCharacter_IndoorCheckSuccessRate_Offset = offsetof(UTslCharacter, IndoorCheckSuccessRate);
	static_assert(UTslCharacter_IndoorCheckSuccessRate_Offset == 0x12d8, "UTslCharacter::IndoorCheckSuccessRate offset is not 12d8");
	auto constexpr UTslCharacter_SmokeBombClass_Offset = offsetof(UTslCharacter, SmokeBombClass);
	static_assert(UTslCharacter_SmokeBombClass_Offset == 0x12e0, "UTslCharacter::SmokeBombClass offset is not 12e0");
	auto constexpr UTslCharacter_Punch_InitialLocation_Offset = offsetof(UTslCharacter, Punch_InitialLocation);
	static_assert(UTslCharacter_Punch_InitialLocation_Offset == 0x12e8, "UTslCharacter::Punch_InitialLocation offset is not 12e8");
	auto constexpr UTslCharacter_boolField12F4_Offset = offsetof(UTslCharacter, boolField12F4);
	static_assert(UTslCharacter_boolField12F4_Offset == 0x12f4, "UTslCharacter::boolField12F4 offset is not 12f4");
	auto constexpr UTslCharacter_GroggyToDieAkEvent_Offset = offsetof(UTslCharacter, GroggyToDieAkEvent);
	static_assert(UTslCharacter_GroggyToDieAkEvent_Offset == 0x12f8, "UTslCharacter::GroggyToDieAkEvent offset is not 12f8");
	auto constexpr UTslCharacter_BuffFinalSpreadFactor_Offset = offsetof(UTslCharacter, BuffFinalSpreadFactor);
	static_assert(UTslCharacter_BuffFinalSpreadFactor_Offset == 0x1300, "UTslCharacter::BuffFinalSpreadFactor offset is not 1300");
	auto constexpr UTslCharacter_FootStepEffectClassInIce_Offset = offsetof(UTslCharacter, FootStepEffectClassInIce);
	static_assert(UTslCharacter_FootStepEffectClassInIce_Offset == 0x1308, "UTslCharacter::FootStepEffectClassInIce offset is not 1308");
	auto constexpr UTslCharacter_StanceComponent_Offset = offsetof(UTslCharacter, StanceComponent);
	static_assert(UTslCharacter_StanceComponent_Offset == 0x1310, "UTslCharacter::StanceComponent offset is not 1310");
	auto constexpr UTslCharacter_SimulatedHit_Value_Offset = offsetof(UTslCharacter, SimulatedHit_Value);
	static_assert(UTslCharacter_SimulatedHit_Value_Offset == 0x1318, "UTslCharacter::SimulatedHit_Value offset is not 1318");
	auto constexpr UTslCharacter_ParticleSocketFootRight_Offset = offsetof(UTslCharacter, ParticleSocketFootRight);
	static_assert(UTslCharacter_ParticleSocketFootRight_Offset == 0x1320, "UTslCharacter::ParticleSocketFootRight offset is not 1320");
	auto constexpr UTslCharacter_FootStepEffectClassInRock_Offset = offsetof(UTslCharacter, FootStepEffectClassInRock);
	static_assert(UTslCharacter_FootStepEffectClassInRock_Offset == 0x1328, "UTslCharacter::FootStepEffectClassInRock offset is not 1328");
	auto constexpr UTslCharacter_MinimumBreathToHold_Offset = offsetof(UTslCharacter, MinimumBreathToHold);
	static_assert(UTslCharacter_MinimumBreathToHold_Offset == 0x1330, "UTslCharacter::MinimumBreathToHold offset is not 1330");
	auto constexpr UTslCharacter_EnergyDrinkClass_Offset = offsetof(UTslCharacter, EnergyDrinkClass);
	static_assert(UTslCharacter_EnergyDrinkClass_Offset == 0x1340, "UTslCharacter::EnergyDrinkClass offset is not 1340");
	auto constexpr UTslCharacter_boolField1348_Offset = offsetof(UTslCharacter, boolField1348);
	static_assert(UTslCharacter_boolField1348_Offset == 0x1348, "UTslCharacter::boolField1348 offset is not 1348");
	auto constexpr UTslCharacter_IndoorCheckAccuracyMultiplier_Offset = offsetof(UTslCharacter, IndoorCheckAccuracyMultiplier);
	static_assert(UTslCharacter_IndoorCheckAccuracyMultiplier_Offset == 0x134c, "UTslCharacter::IndoorCheckAccuracyMultiplier offset is not 134c");
	auto constexpr UTslCharacter_BoostGaugeMax_Offset = offsetof(UTslCharacter, BoostGaugeMax);
	static_assert(UTslCharacter_BoostGaugeMax_Offset == 0x1350, "UTslCharacter::BoostGaugeMax offset is not 1350");
	auto constexpr UTslCharacter_AdrenalineClass_Offset = offsetof(UTslCharacter, AdrenalineClass);
	static_assert(UTslCharacter_AdrenalineClass_Offset == 0x1358, "UTslCharacter::AdrenalineClass offset is not 1358");
	auto constexpr UTslCharacter_InventoryFacade_Offset = offsetof(UTslCharacter, InventoryFacade);
	static_assert(UTslCharacter_InventoryFacade_Offset == 0x1360, "UTslCharacter::InventoryFacade offset is not 1360");
	auto constexpr UTslCharacter_VaultEndVelocityVectorClamp_Offset = offsetof(UTslCharacter, VaultEndVelocityVectorClamp);
	static_assert(UTslCharacter_VaultEndVelocityVectorClamp_Offset == 0x1370, "UTslCharacter::VaultEndVelocityVectorClamp offset is not 1370");
	auto constexpr UTslCharacter_LaunchInstigator_Offset = offsetof(UTslCharacter, LaunchInstigator);
	static_assert(UTslCharacter_LaunchInstigator_Offset == 0x1374, "UTslCharacter::LaunchInstigator offset is not 1374");
	auto constexpr UTslCharacter_ThrowableTrajectoryViewComponent_Offset = offsetof(UTslCharacter, ThrowableTrajectoryViewComponent);
	static_assert(UTslCharacter_ThrowableTrajectoryViewComponent_Offset == 0x1380, "UTslCharacter::ThrowableTrajectoryViewComponent offset is not 1380");
	auto constexpr UTslCharacter_GroggyPlayerInstigator_Offset = offsetof(UTslCharacter, GroggyPlayerInstigator);
	static_assert(UTslCharacter_GroggyPlayerInstigator_Offset == 0x13a0, "UTslCharacter::GroggyPlayerInstigator offset is not 13a0");
	auto constexpr UTslCharacter_VaultEndVelocityVectorMutliplier_Offset = offsetof(UTslCharacter, VaultEndVelocityVectorMutliplier);
	static_assert(UTslCharacter_VaultEndVelocityVectorMutliplier_Offset == 0x13a8, "UTslCharacter::VaultEndVelocityVectorMutliplier offset is not 13a8");
	auto constexpr UTslCharacter_LeanOffset_Stand_Offset = offsetof(UTslCharacter, LeanOffset_Stand);
	static_assert(UTslCharacter_LeanOffset_Stand_Offset == 0x13b4, "UTslCharacter::LeanOffset_Stand offset is not 13b4");
	auto constexpr UTslCharacter_boolField13B8_Offset = offsetof(UTslCharacter, boolField13B8);
	static_assert(UTslCharacter_boolField13B8_Offset == 0x13b8, "UTslCharacter::boolField13B8 offset is not 13b8");
	auto constexpr UTslCharacter_ZombieDamageType_Offset = offsetof(UTslCharacter, ZombieDamageType);
	static_assert(UTslCharacter_ZombieDamageType_Offset == 0x13c0, "UTslCharacter::ZombieDamageType offset is not 13c0");
	auto constexpr UTslCharacter_FootStepEffectClassInSnow_Offset = offsetof(UTslCharacter, FootStepEffectClassInSnow);
	static_assert(UTslCharacter_FootStepEffectClassInSnow_Offset == 0x13c8, "UTslCharacter::FootStepEffectClassInSnow offset is not 13c8");
	auto constexpr UTslCharacter_HealthByRevive_Offset = offsetof(UTslCharacter, HealthByRevive);
	static_assert(UTslCharacter_HealthByRevive_Offset == 0x13d0, "UTslCharacter::HealthByRevive offset is not 13d0");
	auto constexpr UTslCharacter_CurrentVaultData_CP_Offset = offsetof(UTslCharacter, CurrentVaultData_CP);
	static_assert(UTslCharacter_CurrentVaultData_CP_Offset == 0x13f0, "UTslCharacter::CurrentVaultData_CP offset is not 13f0");
	auto constexpr UTslCharacter_BluezoneInOut_Offset = offsetof(UTslCharacter, BluezoneInOut);
	static_assert(UTslCharacter_BluezoneInOut_Offset == 0x13f8, "UTslCharacter::BluezoneInOut offset is not 13f8");
	auto constexpr UTslCharacter_SavedCamera_Offset = offsetof(UTslCharacter, SavedCamera);
	static_assert(UTslCharacter_SavedCamera_Offset == 0x1400, "UTslCharacter::SavedCamera offset is not 1400");
	auto constexpr UTslCharacter_Banks_Offset = offsetof(UTslCharacter, Banks);
	static_assert(UTslCharacter_Banks_Offset == 0x1410, "UTslCharacter::Banks offset is not 1410");
	auto constexpr UTslCharacter_ExtremeFallMovementStopTime_Offset = offsetof(UTslCharacter, ExtremeFallMovementStopTime);
	static_assert(UTslCharacter_ExtremeFallMovementStopTime_Offset == 0x1420, "UTslCharacter::ExtremeFallMovementStopTime offset is not 1420");
	auto constexpr UTslCharacter_OnCharacterWeaponRecoil_Offset = offsetof(UTslCharacter, OnCharacterWeaponRecoil);
	static_assert(UTslCharacter_OnCharacterWeaponRecoil_Offset == 0x1428, "UTslCharacter::OnCharacterWeaponRecoil offset is not 1428");
	auto constexpr UTslCharacter_InteractorComponent_Offset = offsetof(UTslCharacter, InteractorComponent);
	static_assert(UTslCharacter_InteractorComponent_Offset == 0x1438, "UTslCharacter::InteractorComponent offset is not 1438");
	auto constexpr UTslCharacter_InteractionComponent_Offset = offsetof(UTslCharacter, InteractionComponent);
	static_assert(UTslCharacter_InteractionComponent_Offset == 0x1440, "UTslCharacter::InteractionComponent offset is not 1440");
	auto constexpr UTslCharacter_VehicleRiderComponent_Offset = offsetof(UTslCharacter, VehicleRiderComponent);
	static_assert(UTslCharacter_VehicleRiderComponent_Offset == 0x1460, "UTslCharacter::VehicleRiderComponent offset is not 1460");
	auto constexpr UTslCharacter_OutSidePlayerAreaEffectClass_Offset = offsetof(UTslCharacter, OutSidePlayerAreaEffectClass);
	static_assert(UTslCharacter_OutSidePlayerAreaEffectClass_Offset == 0x1468, "UTslCharacter::OutSidePlayerAreaEffectClass offset is not 1468");
	auto constexpr UTslCharacter_OutSidePlayerAreaEffect_Offset = offsetof(UTslCharacter, OutSidePlayerAreaEffect);
	static_assert(UTslCharacter_OutSidePlayerAreaEffect_Offset == 0x1470, "UTslCharacter::OutSidePlayerAreaEffect offset is not 1470");
	auto constexpr UTslCharacter_DBNOEffectClass_Offset = offsetof(UTslCharacter, DBNOEffectClass);
	static_assert(UTslCharacter_DBNOEffectClass_Offset == 0x1478, "UTslCharacter::DBNOEffectClass offset is not 1478");
	auto constexpr UTslCharacter_DBNOEffect_Offset = offsetof(UTslCharacter, DBNOEffect);
	static_assert(UTslCharacter_DBNOEffect_Offset == 0x1480, "UTslCharacter::DBNOEffect offset is not 1480");
	auto constexpr UTslCharacter_ShadowMesh_Offset = offsetof(UTslCharacter, ShadowMesh);
	static_assert(UTslCharacter_ShadowMesh_Offset == 0x1668, "UTslCharacter::ShadowMesh offset is not 1668");
	auto constexpr UTslCharacter_WeaponsShadows_Offset = offsetof(UTslCharacter, WeaponsShadows);
	static_assert(UTslCharacter_WeaponsShadows_Offset == 0x1670, "UTslCharacter::WeaponsShadows offset is not 1670");
	auto constexpr UTslCharacter_ShadowWeaponAnimInfoComponent_Offset = offsetof(UTslCharacter, ShadowWeaponAnimInfoComponent);
	static_assert(UTslCharacter_ShadowWeaponAnimInfoComponent_Offset == 0x1678, "UTslCharacter::ShadowWeaponAnimInfoComponent offset is not 1678");
	auto constexpr UTslCharacter_TargetingFOV_Offset = offsetof(UTslCharacter, TargetingFOV);
	static_assert(UTslCharacter_TargetingFOV_Offset == 0x1680, "UTslCharacter::TargetingFOV offset is not 1680");
	auto constexpr UTslCharacter_AimingDelay_Offset = offsetof(UTslCharacter, AimingDelay);
	static_assert(UTslCharacter_AimingDelay_Offset == 0x1684, "UTslCharacter::AimingDelay offset is not 1684");
	auto constexpr UTslCharacter_AttackStateOffDelayTime_Offset = offsetof(UTslCharacter, AttackStateOffDelayTime);
	static_assert(UTslCharacter_AttackStateOffDelayTime_Offset == 0x1690, "UTslCharacter::AttackStateOffDelayTime offset is not 1690");
	auto constexpr UTslCharacter_HitStateOffDelayTime_Offset = offsetof(UTslCharacter, HitStateOffDelayTime);
	static_assert(UTslCharacter_HitStateOffDelayTime_Offset == 0x1694, "UTslCharacter::HitStateOffDelayTime offset is not 1694");
	auto constexpr UTslCharacter_HitMePlayerStateOffDelayTime_Offset = offsetof(UTslCharacter, HitMePlayerStateOffDelayTime);
	static_assert(UTslCharacter_HitMePlayerStateOffDelayTime_Offset == 0x1698, "UTslCharacter::HitMePlayerStateOffDelayTime offset is not 1698");
	auto constexpr UTslCharacter_DamageConfig_Offset = offsetof(UTslCharacter, DamageConfig);
	static_assert(UTslCharacter_DamageConfig_Offset == 0x16d8, "UTslCharacter::DamageConfig offset is not 16d8");
	auto constexpr UTslCharacter_FallDamageFactor_Offset = offsetof(UTslCharacter, FallDamageFactor);
	static_assert(UTslCharacter_FallDamageFactor_Offset == 0x16e4, "UTslCharacter::FallDamageFactor offset is not 16e4");
	auto constexpr UTslCharacter_FallDamageVelocityMin_Offset = offsetof(UTslCharacter, FallDamageVelocityMin);
	static_assert(UTslCharacter_FallDamageVelocityMin_Offset == 0x16e8, "UTslCharacter::FallDamageVelocityMin offset is not 16e8");
	auto constexpr UTslCharacter_boolField16EC_Offset = offsetof(UTslCharacter, boolField16EC);
	static_assert(UTslCharacter_boolField16EC_Offset == 0x16ec, "UTslCharacter::boolField16EC offset is not 16ec");
	auto constexpr UTslCharacter_CorpseLifeSpan_Offset = offsetof(UTslCharacter, CorpseLifeSpan);
	static_assert(UTslCharacter_CorpseLifeSpan_Offset == 0x16f0, "UTslCharacter::CorpseLifeSpan offset is not 16f0");
	auto constexpr UTslCharacter_boolField16F4_Offset = offsetof(UTslCharacter, boolField16F4);
	static_assert(UTslCharacter_boolField16F4_Offset == 0x16f4, "UTslCharacter::boolField16F4 offset is not 16f4");
	auto constexpr UTslCharacter_RagdollPoseCacheName_Offset = offsetof(UTslCharacter, RagdollPoseCacheName);
	static_assert(UTslCharacter_RagdollPoseCacheName_Offset == 0x16f8, "UTslCharacter::RagdollPoseCacheName offset is not 16f8");
	auto constexpr UTslCharacter_PoseCachingCorpseLifespan_Offset = offsetof(UTslCharacter, PoseCachingCorpseLifespan);
	static_assert(UTslCharacter_PoseCachingCorpseLifespan_Offset == 0x1700, "UTslCharacter::PoseCachingCorpseLifespan offset is not 1700");
	auto constexpr UTslCharacter_RagdollCacheDelayTime_Offset = offsetof(UTslCharacter, RagdollCacheDelayTime);
	static_assert(UTslCharacter_RagdollCacheDelayTime_Offset == 0x1704, "UTslCharacter::RagdollCacheDelayTime offset is not 1704");
	auto constexpr UTslCharacter_PreReplicatedStanceMode_Offset = offsetof(UTslCharacter, PreReplicatedStanceMode);
	static_assert(UTslCharacter_PreReplicatedStanceMode_Offset == 0x17cc, "UTslCharacter::PreReplicatedStanceMode offset is not 17cc");
	auto constexpr UTslCharacter_LastPossessedController_Offset = offsetof(UTslCharacter, LastPossessedController);
	static_assert(UTslCharacter_LastPossessedController_Offset == 0x17d8, "UTslCharacter::LastPossessedController offset is not 17d8");
	auto constexpr UTslCharacter_TslPawnInputBindingComponent_Offset = offsetof(UTslCharacter, TslPawnInputBindingComponent);
	static_assert(UTslCharacter_TslPawnInputBindingComponent_Offset == 0x17f0, "UTslCharacter::TslPawnInputBindingComponent offset is not 17f0");
	auto constexpr UTslCharacter_FlashBangClass_Offset = offsetof(UTslCharacter, FlashBangClass);
	static_assert(UTslCharacter_FlashBangClass_Offset == 0x1800, "UTslCharacter::FlashBangClass offset is not 1800");
	auto constexpr UTslCharacter_CurrentWeaponZoomLevel_Offset = offsetof(UTslCharacter, CurrentWeaponZoomLevel);
	static_assert(UTslCharacter_CurrentWeaponZoomLevel_Offset == 0x1808, "UTslCharacter::CurrentWeaponZoomLevel offset is not 1808");
	auto constexpr UTslCharacter_VaultProbeLoopTime_Offset = offsetof(UTslCharacter, VaultProbeLoopTime);
	static_assert(UTslCharacter_VaultProbeLoopTime_Offset == 0x180c, "UTslCharacter::VaultProbeLoopTime offset is not 180c");
	auto constexpr UTslCharacter_GamePadInputAixsComponent_Offset = offsetof(UTslCharacter, GamePadInputAixsComponent);
	static_assert(UTslCharacter_GamePadInputAixsComponent_Offset == 0x1810, "UTslCharacter::GamePadInputAixsComponent offset is not 1810");
	auto constexpr UTslCharacter_CharacterNetId_Offset = offsetof(UTslCharacter, CharacterNetId);
	static_assert(UTslCharacter_CharacterNetId_Offset == 0x1820, "UTslCharacter::CharacterNetId offset is not 1820");
	auto constexpr UTslCharacter_SoundClearAk_Offset = offsetof(UTslCharacter, SoundClearAk);
	static_assert(UTslCharacter_SoundClearAk_Offset == 0x1830, "UTslCharacter::SoundClearAk offset is not 1830");
	auto constexpr UTslCharacter_LaunchCauser_Offset = offsetof(UTslCharacter, LaunchCauser);
	static_assert(UTslCharacter_LaunchCauser_Offset == 0x183c, "UTslCharacter::LaunchCauser offset is not 183c");
	auto constexpr UTslCharacter_boolField1850_Offset = offsetof(UTslCharacter, boolField1850);
	static_assert(UTslCharacter_boolField1850_Offset == 0x1850, "UTslCharacter::boolField1850 offset is not 1850");
	auto constexpr UTslCharacter_Remote_CastAnim_Offset = offsetof(UTslCharacter, Remote_CastAnim);
	static_assert(UTslCharacter_Remote_CastAnim_Offset == 0x1851, "UTslCharacter::Remote_CastAnim offset is not 1851");
	auto constexpr UTslCharacter_DecreaseTimerSecond_Offset = offsetof(UTslCharacter, DecreaseTimerSecond);
	static_assert(UTslCharacter_DecreaseTimerSecond_Offset == 0x1854, "UTslCharacter::DecreaseTimerSecond offset is not 1854");
	auto constexpr UTslCharacter_FootStepEffectClassInDirt_Offset = offsetof(UTslCharacter, FootStepEffectClassInDirt);
	static_assert(UTslCharacter_FootStepEffectClassInDirt_Offset == 0x1858, "UTslCharacter::FootStepEffectClassInDirt offset is not 1858");
	auto constexpr UTslCharacter_LeanOffset_Crouch_Offset = offsetof(UTslCharacter, LeanOffset_Crouch);
	static_assert(UTslCharacter_LeanOffset_Crouch_Offset == 0x1860, "UTslCharacter::LeanOffset_Crouch offset is not 1860");
	auto constexpr UTslCharacter_Punch_Radius_Offset = offsetof(UTslCharacter, Punch_Radius);
	static_assert(UTslCharacter_Punch_Radius_Offset == 0x1864, "UTslCharacter::Punch_Radius offset is not 1864");
	auto constexpr UTslCharacter_RemoteVolumeControlOff_Offset = offsetof(UTslCharacter, RemoteVolumeControlOff);
	static_assert(UTslCharacter_RemoteVolumeControlOff_Offset == 0x1868, "UTslCharacter::RemoteVolumeControlOff offset is not 1868");
	auto constexpr UTslCharacter_GamepadReloadHoldTime_Offset = offsetof(UTslCharacter, GamepadReloadHoldTime);
	static_assert(UTslCharacter_GamepadReloadHoldTime_Offset == 0x1870, "UTslCharacter::GamepadReloadHoldTime offset is not 1870");
	auto constexpr UTslCharacter_TimerHandle_GamepadReloadHold_Offset = offsetof(UTslCharacter, TimerHandle_GamepadReloadHold);
	static_assert(UTslCharacter_TimerHandle_GamepadReloadHold_Offset == 0x1878, "UTslCharacter::TimerHandle_GamepadReloadHold offset is not 1878");
	auto constexpr UTslCharacter_AnimationUpdateRateSettings_Offset = offsetof(UTslCharacter, AnimationUpdateRateSettings);
	static_assert(UTslCharacter_AnimationUpdateRateSettings_Offset == 0x1880, "UTslCharacter::AnimationUpdateRateSettings offset is not 1880");
	auto constexpr UTslCharacter_TO_CulledMovementTickrate_Offset = offsetof(UTslCharacter, TO_CulledMovementTickrate);
	static_assert(UTslCharacter_TO_CulledMovementTickrate_Offset == 0x18f8, "UTslCharacter::TO_CulledMovementTickrate offset is not 18f8");
	auto constexpr UTslCharacter_TO_CulledActorTickInterval_Offset = offsetof(UTslCharacter, TO_CulledActorTickInterval);
	static_assert(UTslCharacter_TO_CulledActorTickInterval_Offset == 0x18fc, "UTslCharacter::TO_CulledActorTickInterval offset is not 18fc");
	auto constexpr UTslCharacter_TO_MinimumDistance_Offset = offsetof(UTslCharacter, TO_MinimumDistance);
	static_assert(UTslCharacter_TO_MinimumDistance_Offset == 0x1900, "UTslCharacter::TO_MinimumDistance offset is not 1900");
	auto constexpr UTslCharacter_boolField1904_Offset = offsetof(UTslCharacter, boolField1904);
	static_assert(UTslCharacter_boolField1904_Offset == 0x1904, "UTslCharacter::boolField1904 offset is not 1904");
	auto constexpr UTslCharacter_boolField1905_Offset = offsetof(UTslCharacter, boolField1905);
	static_assert(UTslCharacter_boolField1905_Offset == 0x1905, "UTslCharacter::boolField1905 offset is not 1905");
	auto constexpr UTslCharacter_boolField1906_Offset = offsetof(UTslCharacter, boolField1906);
	static_assert(UTslCharacter_boolField1906_Offset == 0x1906, "UTslCharacter::boolField1906 offset is not 1906");
	auto constexpr UTslCharacter_TO_RenderedTolerance_Offset = offsetof(UTslCharacter, TO_RenderedTolerance);
	static_assert(UTslCharacter_TO_RenderedTolerance_Offset == 0x1908, "UTslCharacter::TO_RenderedTolerance offset is not 1908");
	auto constexpr UTslCharacter_boolField190C_Offset = offsetof(UTslCharacter, boolField190C);
	static_assert(UTslCharacter_boolField190C_Offset == 0x190c, "UTslCharacter::boolField190C offset is not 190c");
	auto constexpr UTslCharacter_boolField190D_Offset = offsetof(UTslCharacter, boolField190D);
	static_assert(UTslCharacter_boolField190D_Offset == 0x190d, "UTslCharacter::boolField190D offset is not 190d");
	auto constexpr UTslCharacter_boolField190E_Offset = offsetof(UTslCharacter, boolField190E);
	static_assert(UTslCharacter_boolField190E_Offset == 0x190e, "UTslCharacter::boolField190E offset is not 190e");
	auto constexpr UTslCharacter_GamepadUnarmHoldTime_Offset = offsetof(UTslCharacter, GamepadUnarmHoldTime);
	static_assert(UTslCharacter_GamepadUnarmHoldTime_Offset == 0x191c, "UTslCharacter::GamepadUnarmHoldTime offset is not 191c");
	auto constexpr UTslCharacter_boolField1961_Offset = offsetof(UTslCharacter, boolField1961);
	static_assert(UTslCharacter_boolField1961_Offset == 0x1961, "UTslCharacter::boolField1961 offset is not 1961");
	auto constexpr UTslCharacter_WeaponAnimInfoComponent_Offset = offsetof(UTslCharacter, WeaponAnimInfoComponent);
	static_assert(UTslCharacter_WeaponAnimInfoComponent_Offset == 0x1968, "UTslCharacter::WeaponAnimInfoComponent offset is not 1968");
	auto constexpr UTslCharacter_boolField1974_Offset = offsetof(UTslCharacter, boolField1974);
	static_assert(UTslCharacter_boolField1974_Offset == 0x1974, "UTslCharacter::boolField1974 offset is not 1974");
	auto constexpr UTslCharacter_ZombieCustomizationData_Offset = offsetof(UTslCharacter, ZombieCustomizationData);
	static_assert(UTslCharacter_ZombieCustomizationData_Offset == 0x1978, "UTslCharacter::ZombieCustomizationData offset is not 1978");
	auto constexpr UTslCharacter_PunchHeavy_Distance_Offset = offsetof(UTslCharacter, PunchHeavy_Distance);
	static_assert(UTslCharacter_PunchHeavy_Distance_Offset == 0x1998, "UTslCharacter::PunchHeavy_Distance offset is not 1998");
	auto constexpr UTslCharacter_SimulatedHit_Initial_Offset = offsetof(UTslCharacter, SimulatedHit_Initial);
	static_assert(UTslCharacter_SimulatedHit_Initial_Offset == 0x199c, "UTslCharacter::SimulatedHit_Initial offset is not 199c");
	auto constexpr UTslCharacter_SkinHelper_Offset = offsetof(UTslCharacter, SkinHelper);
	static_assert(UTslCharacter_SkinHelper_Offset == 0x19a0, "UTslCharacter::SkinHelper offset is not 19a0");
	auto constexpr UTslCharacter_EmoteComponent_Offset = offsetof(UTslCharacter, EmoteComponent);
	static_assert(UTslCharacter_EmoteComponent_Offset == 0x19a8, "UTslCharacter::EmoteComponent offset is not 19a8");
	auto constexpr UTslCharacter_boolField19B0_Offset = offsetof(UTslCharacter, boolField19B0);
	static_assert(UTslCharacter_boolField19B0_Offset == 0x19b0, "UTslCharacter::boolField19B0 offset is not 19b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
