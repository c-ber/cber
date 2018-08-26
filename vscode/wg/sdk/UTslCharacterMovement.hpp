#pragma once
#include "UCharacterMovementComponent.hpp"
#include "FVector.hpp"
#include "EVaultAnimType.hpp"
#include "FVector2D.hpp"
#include "FVaultingTask.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCharacterMovement // Size: 0xC10
	: public UCharacterMovementComponent // Size: 0x880
{
private:
	typedef UTslCharacterMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1313); // id32("Class TslGame.TslCharacterMovement")
		return ptr;
	}
	int32_t BroSimulateMovement; /* Ofs: 0x880 Size: 0x4 - IntProperty TslGame.TslCharacterMovement.BroSimulateMovement */
	uint8_t UnknownData884[0x4];
	FVector NetComputedPosition; /* Ofs: 0x888 Size: 0xC - StructProperty TslGame.TslCharacterMovement.NetComputedPosition */
	uint8_t UnknownData894[0x94];
	float MaxProneSpeed; /* Ofs: 0x928 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxProneSpeed */
	float MaxGroggySpeed; /* Ofs: 0x92C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxGroggySpeed */
	float JumpedHalfHeight; /* Ofs: 0x930 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.JumpedHalfHeight */
	float JumpVelocityLossScale; /* Ofs: 0x934 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.JumpVelocityLossScale */
	float ToFallVelocityDTScale; /* Ofs: 0x938 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.ToFallVelocityDTScale */
	float ToFallVelocityClamp; /* Ofs: 0x93C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.ToFallVelocityClamp */
	float SpeedToJumpModifier; /* Ofs: 0x940 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.SpeedToJumpModifier */
	float MinJumpZVelocity; /* Ofs: 0x944 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MinJumpZVelocity */
	float MaxJumpZVelocity; /* Ofs: 0x948 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxJumpZVelocity */
	float LandingJumpDecreaseModifier; /* Ofs: 0x94C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.LandingJumpDecreaseModifier */
	float RecoveryWalkSpeedRatePerSec; /* Ofs: 0x950 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.RecoveryWalkSpeedRatePerSec */
	float MinWalkSpeedModifier; /* Ofs: 0x954 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MinWalkSpeedModifier */
	float WalkSpeedModifierUnit; /* Ofs: 0x958 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.WalkSpeedModifierUnit */
	float MinStandingJumpXYSpeed; /* Ofs: 0x95C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MinStandingJumpXYSpeed */
	float SpeedInWaterModifier; /* Ofs: 0x960 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.SpeedInWaterModifier */
	uint8_t boolField964;
	uint8_t UnknownData965[0x3];
	TMap<EVaultAnimType, struct UVaultingData> VaultingDataMap; /* Ofs: 0x968 Size: 0x50 - MapProperty TslGame.TslCharacterMovement.VaultingDataMap */
	int32_t HeightFor200; /* Ofs: 0x9B8 Size: 0x4 - IntProperty TslGame.TslCharacterMovement.HeightFor200 */
	int32_t HeightFor160; /* Ofs: 0x9BC Size: 0x4 - IntProperty TslGame.TslCharacterMovement.HeightFor160 */
	int32_t HeightFor120; /* Ofs: 0x9C0 Size: 0x4 - IntProperty TslGame.TslCharacterMovement.HeightFor120 */
	int32_t HeightFor90; /* Ofs: 0x9C4 Size: 0x4 - IntProperty TslGame.TslCharacterMovement.HeightFor90 */
	int32_t HeightFor60; /* Ofs: 0x9C8 Size: 0x4 - IntProperty TslGame.TslCharacterMovement.HeightFor60 */
	float SizeForNarrow; /* Ofs: 0x9CC Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.SizeForNarrow */
	int32_t SizeForSlide; /* Ofs: 0x9D0 Size: 0x4 - IntProperty TslGame.TslCharacterMovement.SizeForSlide */
	float VelocityForMobile; /* Ofs: 0x9D4 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.VelocityForMobile */
	float GlobalVaultScale; /* Ofs: 0x9D8 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.GlobalVaultScale */
	float VaultCancelDTScalar; /* Ofs: 0x9DC Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.VaultCancelDTScalar */
	float MinVelocityForStaticVaultCheck; /* Ofs: 0x9E0 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MinVelocityForStaticVaultCheck */
	FVector2D MaxVaultDistanceByVelocityInMap; /* Ofs: 0x9E4 Size: 0x8 - StructProperty TslGame.TslCharacterMovement.MaxVaultDistanceByVelocityInMap */
	FVector2D MaxVaultDistanceByVelocityOutMap; /* Ofs: 0x9EC Size: 0x8 - StructProperty TslGame.TslCharacterMovement.MaxVaultDistanceByVelocityOutMap */
	FVaultingTask CurrentVaultingTask; /* Ofs: 0x9F4 Size: 0x40 - StructProperty TslGame.TslCharacterMovement.CurrentVaultingTask */
	uint8_t UnknownDataA34[0x4];
	ExternalPtr<struct UVaultingData> CurrentVaultingData; /* Ofs: 0xA38 Size: 0x8 - ObjectProperty TslGame.TslCharacterMovement.CurrentVaultingData */
	float V_Timer_CP; /* Ofs: 0xA40 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.V_Timer_CP */
	float AnimMultiplierPreApex; /* Ofs: 0xA44 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.AnimMultiplierPreApex */
	float AnimMultiplierPostApex; /* Ofs: 0xA48 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.AnimMultiplierPostApex */
	uint8_t boolFieldA4C;
	uint8_t UnknownDataA4D[0x3];
	FVector CharacterRelLocation; /* Ofs: 0xA50 Size: 0xC - StructProperty TslGame.TslCharacterMovement.CharacterRelLocation */
	FVector LastVaultLocation; /* Ofs: 0xA5C Size: 0xC - StructProperty TslGame.TslCharacterMovement.LastVaultLocation */
	FVector AveragedVelocity; /* Ofs: 0xA68 Size: 0xC - StructProperty TslGame.TslCharacterMovement.AveragedVelocity */
	float LastVaultTime; /* Ofs: 0xA74 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.LastVaultTime */
	float VaultCancelAnimSpeed; /* Ofs: 0xA78 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.VaultCancelAnimSpeed */
	uint8_t boolFieldA7C;
	uint8_t UnknownDataA7D[0x3];
	float VaultingDistanceLimit; /* Ofs: 0xA80 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.VaultingDistanceLimit */
	uint8_t UnknownDataA84[0x78];
	float MaxSwimAcceleration; /* Ofs: 0xAFC Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxSwimAcceleration */
	float MaxZSpeedOutOfWaterModifier; /* Ofs: 0xB00 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxZSpeedOutOfWaterModifier */
	FRotator MaxSwimmingRotationRate; /* Ofs: 0xB04 Size: 0xC - StructProperty TslGame.TslCharacterMovement.MaxSwimmingRotationRate */
	FRotator SwimmingRotationAcceleration; /* Ofs: 0xB10 Size: 0xC - StructProperty TslGame.TslCharacterMovement.SwimmingRotationAcceleration */
	float MaxZSpeedOutOfWaterModifierForStandingSwimming; /* Ofs: 0xB1C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxZSpeedOutOfWaterModifierForStandingSwimming */
	float WaveRidingModifier; /* Ofs: 0xB20 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.WaveRidingModifier */
	float WaveRidingSmoothingFactor; /* Ofs: 0xB24 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.WaveRidingSmoothingFactor */
	float WaveRidingModifierUnderWater; /* Ofs: 0xB28 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.WaveRidingModifierUnderWater */
	float StayingUnderWaterDepthBand; /* Ofs: 0xB2C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.StayingUnderWaterDepthBand */
	uint8_t UnknownDataB30[0x4];
	float MaxUnderwaterSwimSpeed; /* Ofs: 0xB34 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxUnderwaterSwimSpeed */
	float MaxUnderwaterSwimAcceleration; /* Ofs: 0xB38 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxUnderwaterSwimAcceleration */
	float BrakingDecelerationUnderwaterSwimming; /* Ofs: 0xB3C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.BrakingDecelerationUnderwaterSwimming */
	FRotator MaxUnderwaterSwimmingRotationRate; /* Ofs: 0xB40 Size: 0xC - StructProperty TslGame.TslCharacterMovement.MaxUnderwaterSwimmingRotationRate */
	FRotator UnderwaterSwimmingRotationAcceleration; /* Ofs: 0xB4C Size: 0xC - StructProperty TslGame.TslCharacterMovement.UnderwaterSwimmingRotationAcceleration */
	float MinimumHighAltitude; /* Ofs: 0xB58 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MinimumHighAltitude */
	uint8_t UnknownDataB5C[0x4];
	float MaxFallLateralSpeedAtHighAltitude; /* Ofs: 0xB60 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxFallLateralSpeedAtHighAltitude */
	float TerminalVelocityAtHighAltitude; /* Ofs: 0xB64 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.TerminalVelocityAtHighAltitude */
	float DecreaseTerminalVelocityAtHighAltitude; /* Ofs: 0xB68 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.DecreaseTerminalVelocityAtHighAltitude */
	float MaxFallAccelerationAtHighAltitude; /* Ofs: 0xB6C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.MaxFallAccelerationAtHighAltitude */
	FRotator FallRotationRateAtHighAltitude; /* Ofs: 0xB70 Size: 0xC - StructProperty TslGame.TslCharacterMovement.FallRotationRateAtHighAltitude */
	float AirControlAtHighAltitude; /* Ofs: 0xB7C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.AirControlAtHighAltitude */
	float AirControlBoostMultiplierAtHighAltitude; /* Ofs: 0xB80 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.AirControlBoostMultiplierAtHighAltitude */
	float AirControlBoostVelocityThresholdAtHighAltitude; /* Ofs: 0xB84 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.AirControlBoostVelocityThresholdAtHighAltitude */
	ExternalPtr<struct UClass> FallingDamageType; /* Ofs: 0xB88 Size: 0x8 - ClassProperty TslGame.TslCharacterMovement.FallingDamageType */
	ExternalPtr<struct UCurveFloat> EjectDamageCurve; /* Ofs: 0xB90 Size: 0x8 - ObjectProperty TslGame.TslCharacterMovement.EjectDamageCurve */
	float FallingDamageMinZCut; /* Ofs: 0xB98 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.FallingDamageMinZCut */
	float FallingDamageVDampingZ; /* Ofs: 0xB9C Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.FallingDamageVDampingZ */
	float FallingDamageFactor; /* Ofs: 0xBA0 Size: 0x4 - FloatProperty TslGame.TslCharacterMovement.FallingDamageFactor */
	uint8_t UnknownDataBA4[0xC];
	uint8_t boolFieldBB0;
	uint8_t UnknownDataBB1[0x5F];


	inline bool SetBroSimulateMovement(t_structHelper inst, int32_t value) { inst.WriteOffset(0x880, value); }
	inline bool SetNetComputedPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x888, value); }
	inline bool SetMaxProneSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x928, value); }
	inline bool SetMaxGroggySpeed(t_structHelper inst, float value) { inst.WriteOffset(0x92C, value); }
	inline bool SetJumpedHalfHeight(t_structHelper inst, float value) { inst.WriteOffset(0x930, value); }
	inline bool SetJumpVelocityLossScale(t_structHelper inst, float value) { inst.WriteOffset(0x934, value); }
	inline bool SetToFallVelocityDTScale(t_structHelper inst, float value) { inst.WriteOffset(0x938, value); }
	inline bool SetToFallVelocityClamp(t_structHelper inst, float value) { inst.WriteOffset(0x93C, value); }
	inline bool SetSpeedToJumpModifier(t_structHelper inst, float value) { inst.WriteOffset(0x940, value); }
	inline bool SetMinJumpZVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x944, value); }
	inline bool SetMaxJumpZVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x948, value); }
	inline bool SetLandingJumpDecreaseModifier(t_structHelper inst, float value) { inst.WriteOffset(0x94C, value); }
	inline bool SetRecoveryWalkSpeedRatePerSec(t_structHelper inst, float value) { inst.WriteOffset(0x950, value); }
	inline bool SetMinWalkSpeedModifier(t_structHelper inst, float value) { inst.WriteOffset(0x954, value); }
	inline bool SetWalkSpeedModifierUnit(t_structHelper inst, float value) { inst.WriteOffset(0x958, value); }
	inline bool SetMinStandingJumpXYSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x95C, value); }
	inline bool SetSpeedInWaterModifier(t_structHelper inst, float value) { inst.WriteOffset(0x960, value); }
	inline bool bUseCPVault()
	{
		return boolField964& 0x1;
	}
	inline bool SetbUseCPVault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x964, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVaultingDataMap(t_structHelper inst, TMap<EVaultAnimType, struct UVaultingData> value) { inst.WriteOffset(0x968, value); }
	inline bool SetHeightFor200(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9B8, value); }
	inline bool SetHeightFor160(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9BC, value); }
	inline bool SetHeightFor120(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9C0, value); }
	inline bool SetHeightFor90(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9C4, value); }
	inline bool SetHeightFor60(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9C8, value); }
	inline bool SetSizeForNarrow(t_structHelper inst, float value) { inst.WriteOffset(0x9CC, value); }
	inline bool SetSizeForSlide(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9D0, value); }
	inline bool SetVelocityForMobile(t_structHelper inst, float value) { inst.WriteOffset(0x9D4, value); }
	inline bool SetGlobalVaultScale(t_structHelper inst, float value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetVaultCancelDTScalar(t_structHelper inst, float value) { inst.WriteOffset(0x9DC, value); }
	inline bool SetMinVelocityForStaticVaultCheck(t_structHelper inst, float value) { inst.WriteOffset(0x9E0, value); }
	inline bool SetMaxVaultDistanceByVelocityInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9E4, value); }
	inline bool SetMaxVaultDistanceByVelocityOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9EC, value); }
	inline bool SetCurrentVaultingTask(t_structHelper inst, FVaultingTask value) { inst.WriteOffset(0x9F4, value); }
	inline bool SetCurrentVaultingData(t_structHelper inst, ExternalPtr<struct UVaultingData> value) { inst.WriteOffset(0xA38, value); }
	inline bool SetV_Timer_CP(t_structHelper inst, float value) { inst.WriteOffset(0xA40, value); }
	inline bool SetAnimMultiplierPreApex(t_structHelper inst, float value) { inst.WriteOffset(0xA44, value); }
	inline bool SetAnimMultiplierPostApex(t_structHelper inst, float value) { inst.WriteOffset(0xA48, value); }
	inline bool bIsVaulting_CP()
	{
		return boolFieldA4C& 0x1;
	}
	inline bool SetbIsVaulting_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA4C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCharacterRelLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0xA50, value); }
	inline bool SetLastVaultLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0xA5C, value); }
	inline bool SetAveragedVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0xA68, value); }
	inline bool SetLastVaultTime(t_structHelper inst, float value) { inst.WriteOffset(0xA74, value); }
	inline bool SetVaultCancelAnimSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xA78, value); }
	inline bool bWantsToCancelVault()
	{
		return boolFieldA7C& 0x1;
	}
	inline bool SetbWantsToCancelVault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA7C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVaultingDistanceLimit(t_structHelper inst, float value) { inst.WriteOffset(0xA80, value); }
	inline bool SetMaxSwimAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0xAFC, value); }
	inline bool SetMaxZSpeedOutOfWaterModifier(t_structHelper inst, float value) { inst.WriteOffset(0xB00, value); }
	inline bool SetMaxSwimmingRotationRate(t_structHelper inst, FRotator value) { inst.WriteOffset(0xB04, value); }
	inline bool SetSwimmingRotationAcceleration(t_structHelper inst, FRotator value) { inst.WriteOffset(0xB10, value); }
	inline bool SetMaxZSpeedOutOfWaterModifierForStandingSwimming(t_structHelper inst, float value) { inst.WriteOffset(0xB1C, value); }
	inline bool SetWaveRidingModifier(t_structHelper inst, float value) { inst.WriteOffset(0xB20, value); }
	inline bool SetWaveRidingSmoothingFactor(t_structHelper inst, float value) { inst.WriteOffset(0xB24, value); }
	inline bool SetWaveRidingModifierUnderWater(t_structHelper inst, float value) { inst.WriteOffset(0xB28, value); }
	inline bool SetStayingUnderWaterDepthBand(t_structHelper inst, float value) { inst.WriteOffset(0xB2C, value); }
	inline bool SetMaxUnderwaterSwimSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xB34, value); }
	inline bool SetMaxUnderwaterSwimAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0xB38, value); }
	inline bool SetBrakingDecelerationUnderwaterSwimming(t_structHelper inst, float value) { inst.WriteOffset(0xB3C, value); }
	inline bool SetMaxUnderwaterSwimmingRotationRate(t_structHelper inst, FRotator value) { inst.WriteOffset(0xB40, value); }
	inline bool SetUnderwaterSwimmingRotationAcceleration(t_structHelper inst, FRotator value) { inst.WriteOffset(0xB4C, value); }
	inline bool SetMinimumHighAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xB58, value); }
	inline bool SetMaxFallLateralSpeedAtHighAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xB60, value); }
	inline bool SetTerminalVelocityAtHighAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xB64, value); }
	inline bool SetDecreaseTerminalVelocityAtHighAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xB68, value); }
	inline bool SetMaxFallAccelerationAtHighAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xB6C, value); }
	inline bool SetFallRotationRateAtHighAltitude(t_structHelper inst, FRotator value) { inst.WriteOffset(0xB70, value); }
	inline bool SetAirControlAtHighAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xB7C, value); }
	inline bool SetAirControlBoostMultiplierAtHighAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xB80, value); }
	inline bool SetAirControlBoostVelocityThresholdAtHighAltitude(t_structHelper inst, float value) { inst.WriteOffset(0xB84, value); }
	inline bool SetFallingDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB88, value); }
	inline bool SetEjectDamageCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB90, value); }
	inline bool SetFallingDamageMinZCut(t_structHelper inst, float value) { inst.WriteOffset(0xB98, value); }
	inline bool SetFallingDamageVDampingZ(t_structHelper inst, float value) { inst.WriteOffset(0xB9C, value); }
	inline bool SetFallingDamageFactor(t_structHelper inst, float value) { inst.WriteOffset(0xBA0, value); }
	inline bool UseBlockedHitDamage()
	{
		return boolFieldBB0& 0x1;
	}
	inline bool SetUseBlockedHitDamage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBB0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCharacterMovement = sizeof(UTslCharacterMovement); // 3088
    static_assert(sizeof(UTslCharacterMovement) == 0xC10, "Size of UTslCharacterMovement is not correct.");
	auto constexpr UTslCharacterMovement_BroSimulateMovement_Offset = offsetof(UTslCharacterMovement, BroSimulateMovement);
	static_assert(UTslCharacterMovement_BroSimulateMovement_Offset == 0x880, "UTslCharacterMovement::BroSimulateMovement offset is not 880");
	auto constexpr UTslCharacterMovement_NetComputedPosition_Offset = offsetof(UTslCharacterMovement, NetComputedPosition);
	static_assert(UTslCharacterMovement_NetComputedPosition_Offset == 0x888, "UTslCharacterMovement::NetComputedPosition offset is not 888");
	auto constexpr UTslCharacterMovement_MaxProneSpeed_Offset = offsetof(UTslCharacterMovement, MaxProneSpeed);
	static_assert(UTslCharacterMovement_MaxProneSpeed_Offset == 0x928, "UTslCharacterMovement::MaxProneSpeed offset is not 928");
	auto constexpr UTslCharacterMovement_MaxGroggySpeed_Offset = offsetof(UTslCharacterMovement, MaxGroggySpeed);
	static_assert(UTslCharacterMovement_MaxGroggySpeed_Offset == 0x92c, "UTslCharacterMovement::MaxGroggySpeed offset is not 92c");
	auto constexpr UTslCharacterMovement_JumpedHalfHeight_Offset = offsetof(UTslCharacterMovement, JumpedHalfHeight);
	static_assert(UTslCharacterMovement_JumpedHalfHeight_Offset == 0x930, "UTslCharacterMovement::JumpedHalfHeight offset is not 930");
	auto constexpr UTslCharacterMovement_JumpVelocityLossScale_Offset = offsetof(UTslCharacterMovement, JumpVelocityLossScale);
	static_assert(UTslCharacterMovement_JumpVelocityLossScale_Offset == 0x934, "UTslCharacterMovement::JumpVelocityLossScale offset is not 934");
	auto constexpr UTslCharacterMovement_ToFallVelocityDTScale_Offset = offsetof(UTslCharacterMovement, ToFallVelocityDTScale);
	static_assert(UTslCharacterMovement_ToFallVelocityDTScale_Offset == 0x938, "UTslCharacterMovement::ToFallVelocityDTScale offset is not 938");
	auto constexpr UTslCharacterMovement_ToFallVelocityClamp_Offset = offsetof(UTslCharacterMovement, ToFallVelocityClamp);
	static_assert(UTslCharacterMovement_ToFallVelocityClamp_Offset == 0x93c, "UTslCharacterMovement::ToFallVelocityClamp offset is not 93c");
	auto constexpr UTslCharacterMovement_SpeedToJumpModifier_Offset = offsetof(UTslCharacterMovement, SpeedToJumpModifier);
	static_assert(UTslCharacterMovement_SpeedToJumpModifier_Offset == 0x940, "UTslCharacterMovement::SpeedToJumpModifier offset is not 940");
	auto constexpr UTslCharacterMovement_MinJumpZVelocity_Offset = offsetof(UTslCharacterMovement, MinJumpZVelocity);
	static_assert(UTslCharacterMovement_MinJumpZVelocity_Offset == 0x944, "UTslCharacterMovement::MinJumpZVelocity offset is not 944");
	auto constexpr UTslCharacterMovement_MaxJumpZVelocity_Offset = offsetof(UTslCharacterMovement, MaxJumpZVelocity);
	static_assert(UTslCharacterMovement_MaxJumpZVelocity_Offset == 0x948, "UTslCharacterMovement::MaxJumpZVelocity offset is not 948");
	auto constexpr UTslCharacterMovement_LandingJumpDecreaseModifier_Offset = offsetof(UTslCharacterMovement, LandingJumpDecreaseModifier);
	static_assert(UTslCharacterMovement_LandingJumpDecreaseModifier_Offset == 0x94c, "UTslCharacterMovement::LandingJumpDecreaseModifier offset is not 94c");
	auto constexpr UTslCharacterMovement_RecoveryWalkSpeedRatePerSec_Offset = offsetof(UTslCharacterMovement, RecoveryWalkSpeedRatePerSec);
	static_assert(UTslCharacterMovement_RecoveryWalkSpeedRatePerSec_Offset == 0x950, "UTslCharacterMovement::RecoveryWalkSpeedRatePerSec offset is not 950");
	auto constexpr UTslCharacterMovement_MinWalkSpeedModifier_Offset = offsetof(UTslCharacterMovement, MinWalkSpeedModifier);
	static_assert(UTslCharacterMovement_MinWalkSpeedModifier_Offset == 0x954, "UTslCharacterMovement::MinWalkSpeedModifier offset is not 954");
	auto constexpr UTslCharacterMovement_WalkSpeedModifierUnit_Offset = offsetof(UTslCharacterMovement, WalkSpeedModifierUnit);
	static_assert(UTslCharacterMovement_WalkSpeedModifierUnit_Offset == 0x958, "UTslCharacterMovement::WalkSpeedModifierUnit offset is not 958");
	auto constexpr UTslCharacterMovement_MinStandingJumpXYSpeed_Offset = offsetof(UTslCharacterMovement, MinStandingJumpXYSpeed);
	static_assert(UTslCharacterMovement_MinStandingJumpXYSpeed_Offset == 0x95c, "UTslCharacterMovement::MinStandingJumpXYSpeed offset is not 95c");
	auto constexpr UTslCharacterMovement_SpeedInWaterModifier_Offset = offsetof(UTslCharacterMovement, SpeedInWaterModifier);
	static_assert(UTslCharacterMovement_SpeedInWaterModifier_Offset == 0x960, "UTslCharacterMovement::SpeedInWaterModifier offset is not 960");
	auto constexpr UTslCharacterMovement_boolField964_Offset = offsetof(UTslCharacterMovement, boolField964);
	static_assert(UTslCharacterMovement_boolField964_Offset == 0x964, "UTslCharacterMovement::boolField964 offset is not 964");
	auto constexpr UTslCharacterMovement_VaultingDataMap_Offset = offsetof(UTslCharacterMovement, VaultingDataMap);
	static_assert(UTslCharacterMovement_VaultingDataMap_Offset == 0x968, "UTslCharacterMovement::VaultingDataMap offset is not 968");
	auto constexpr UTslCharacterMovement_HeightFor200_Offset = offsetof(UTslCharacterMovement, HeightFor200);
	static_assert(UTslCharacterMovement_HeightFor200_Offset == 0x9b8, "UTslCharacterMovement::HeightFor200 offset is not 9b8");
	auto constexpr UTslCharacterMovement_HeightFor160_Offset = offsetof(UTslCharacterMovement, HeightFor160);
	static_assert(UTslCharacterMovement_HeightFor160_Offset == 0x9bc, "UTslCharacterMovement::HeightFor160 offset is not 9bc");
	auto constexpr UTslCharacterMovement_HeightFor120_Offset = offsetof(UTslCharacterMovement, HeightFor120);
	static_assert(UTslCharacterMovement_HeightFor120_Offset == 0x9c0, "UTslCharacterMovement::HeightFor120 offset is not 9c0");
	auto constexpr UTslCharacterMovement_HeightFor90_Offset = offsetof(UTslCharacterMovement, HeightFor90);
	static_assert(UTslCharacterMovement_HeightFor90_Offset == 0x9c4, "UTslCharacterMovement::HeightFor90 offset is not 9c4");
	auto constexpr UTslCharacterMovement_HeightFor60_Offset = offsetof(UTslCharacterMovement, HeightFor60);
	static_assert(UTslCharacterMovement_HeightFor60_Offset == 0x9c8, "UTslCharacterMovement::HeightFor60 offset is not 9c8");
	auto constexpr UTslCharacterMovement_SizeForNarrow_Offset = offsetof(UTslCharacterMovement, SizeForNarrow);
	static_assert(UTslCharacterMovement_SizeForNarrow_Offset == 0x9cc, "UTslCharacterMovement::SizeForNarrow offset is not 9cc");
	auto constexpr UTslCharacterMovement_SizeForSlide_Offset = offsetof(UTslCharacterMovement, SizeForSlide);
	static_assert(UTslCharacterMovement_SizeForSlide_Offset == 0x9d0, "UTslCharacterMovement::SizeForSlide offset is not 9d0");
	auto constexpr UTslCharacterMovement_VelocityForMobile_Offset = offsetof(UTslCharacterMovement, VelocityForMobile);
	static_assert(UTslCharacterMovement_VelocityForMobile_Offset == 0x9d4, "UTslCharacterMovement::VelocityForMobile offset is not 9d4");
	auto constexpr UTslCharacterMovement_GlobalVaultScale_Offset = offsetof(UTslCharacterMovement, GlobalVaultScale);
	static_assert(UTslCharacterMovement_GlobalVaultScale_Offset == 0x9d8, "UTslCharacterMovement::GlobalVaultScale offset is not 9d8");
	auto constexpr UTslCharacterMovement_VaultCancelDTScalar_Offset = offsetof(UTslCharacterMovement, VaultCancelDTScalar);
	static_assert(UTslCharacterMovement_VaultCancelDTScalar_Offset == 0x9dc, "UTslCharacterMovement::VaultCancelDTScalar offset is not 9dc");
	auto constexpr UTslCharacterMovement_MinVelocityForStaticVaultCheck_Offset = offsetof(UTslCharacterMovement, MinVelocityForStaticVaultCheck);
	static_assert(UTslCharacterMovement_MinVelocityForStaticVaultCheck_Offset == 0x9e0, "UTslCharacterMovement::MinVelocityForStaticVaultCheck offset is not 9e0");
	auto constexpr UTslCharacterMovement_MaxVaultDistanceByVelocityInMap_Offset = offsetof(UTslCharacterMovement, MaxVaultDistanceByVelocityInMap);
	static_assert(UTslCharacterMovement_MaxVaultDistanceByVelocityInMap_Offset == 0x9e4, "UTslCharacterMovement::MaxVaultDistanceByVelocityInMap offset is not 9e4");
	auto constexpr UTslCharacterMovement_MaxVaultDistanceByVelocityOutMap_Offset = offsetof(UTslCharacterMovement, MaxVaultDistanceByVelocityOutMap);
	static_assert(UTslCharacterMovement_MaxVaultDistanceByVelocityOutMap_Offset == 0x9ec, "UTslCharacterMovement::MaxVaultDistanceByVelocityOutMap offset is not 9ec");
	auto constexpr UTslCharacterMovement_CurrentVaultingTask_Offset = offsetof(UTslCharacterMovement, CurrentVaultingTask);
	static_assert(UTslCharacterMovement_CurrentVaultingTask_Offset == 0x9f4, "UTslCharacterMovement::CurrentVaultingTask offset is not 9f4");
	auto constexpr UTslCharacterMovement_CurrentVaultingData_Offset = offsetof(UTslCharacterMovement, CurrentVaultingData);
	static_assert(UTslCharacterMovement_CurrentVaultingData_Offset == 0xa38, "UTslCharacterMovement::CurrentVaultingData offset is not a38");
	auto constexpr UTslCharacterMovement_V_Timer_CP_Offset = offsetof(UTslCharacterMovement, V_Timer_CP);
	static_assert(UTslCharacterMovement_V_Timer_CP_Offset == 0xa40, "UTslCharacterMovement::V_Timer_CP offset is not a40");
	auto constexpr UTslCharacterMovement_AnimMultiplierPreApex_Offset = offsetof(UTslCharacterMovement, AnimMultiplierPreApex);
	static_assert(UTslCharacterMovement_AnimMultiplierPreApex_Offset == 0xa44, "UTslCharacterMovement::AnimMultiplierPreApex offset is not a44");
	auto constexpr UTslCharacterMovement_AnimMultiplierPostApex_Offset = offsetof(UTslCharacterMovement, AnimMultiplierPostApex);
	static_assert(UTslCharacterMovement_AnimMultiplierPostApex_Offset == 0xa48, "UTslCharacterMovement::AnimMultiplierPostApex offset is not a48");
	auto constexpr UTslCharacterMovement_boolFieldA4C_Offset = offsetof(UTslCharacterMovement, boolFieldA4C);
	static_assert(UTslCharacterMovement_boolFieldA4C_Offset == 0xa4c, "UTslCharacterMovement::boolFieldA4C offset is not a4c");
	auto constexpr UTslCharacterMovement_CharacterRelLocation_Offset = offsetof(UTslCharacterMovement, CharacterRelLocation);
	static_assert(UTslCharacterMovement_CharacterRelLocation_Offset == 0xa50, "UTslCharacterMovement::CharacterRelLocation offset is not a50");
	auto constexpr UTslCharacterMovement_LastVaultLocation_Offset = offsetof(UTslCharacterMovement, LastVaultLocation);
	static_assert(UTslCharacterMovement_LastVaultLocation_Offset == 0xa5c, "UTslCharacterMovement::LastVaultLocation offset is not a5c");
	auto constexpr UTslCharacterMovement_AveragedVelocity_Offset = offsetof(UTslCharacterMovement, AveragedVelocity);
	static_assert(UTslCharacterMovement_AveragedVelocity_Offset == 0xa68, "UTslCharacterMovement::AveragedVelocity offset is not a68");
	auto constexpr UTslCharacterMovement_LastVaultTime_Offset = offsetof(UTslCharacterMovement, LastVaultTime);
	static_assert(UTslCharacterMovement_LastVaultTime_Offset == 0xa74, "UTslCharacterMovement::LastVaultTime offset is not a74");
	auto constexpr UTslCharacterMovement_VaultCancelAnimSpeed_Offset = offsetof(UTslCharacterMovement, VaultCancelAnimSpeed);
	static_assert(UTslCharacterMovement_VaultCancelAnimSpeed_Offset == 0xa78, "UTslCharacterMovement::VaultCancelAnimSpeed offset is not a78");
	auto constexpr UTslCharacterMovement_boolFieldA7C_Offset = offsetof(UTslCharacterMovement, boolFieldA7C);
	static_assert(UTslCharacterMovement_boolFieldA7C_Offset == 0xa7c, "UTslCharacterMovement::boolFieldA7C offset is not a7c");
	auto constexpr UTslCharacterMovement_VaultingDistanceLimit_Offset = offsetof(UTslCharacterMovement, VaultingDistanceLimit);
	static_assert(UTslCharacterMovement_VaultingDistanceLimit_Offset == 0xa80, "UTslCharacterMovement::VaultingDistanceLimit offset is not a80");
	auto constexpr UTslCharacterMovement_MaxSwimAcceleration_Offset = offsetof(UTslCharacterMovement, MaxSwimAcceleration);
	static_assert(UTslCharacterMovement_MaxSwimAcceleration_Offset == 0xafc, "UTslCharacterMovement::MaxSwimAcceleration offset is not afc");
	auto constexpr UTslCharacterMovement_MaxZSpeedOutOfWaterModifier_Offset = offsetof(UTslCharacterMovement, MaxZSpeedOutOfWaterModifier);
	static_assert(UTslCharacterMovement_MaxZSpeedOutOfWaterModifier_Offset == 0xb00, "UTslCharacterMovement::MaxZSpeedOutOfWaterModifier offset is not b00");
	auto constexpr UTslCharacterMovement_MaxSwimmingRotationRate_Offset = offsetof(UTslCharacterMovement, MaxSwimmingRotationRate);
	static_assert(UTslCharacterMovement_MaxSwimmingRotationRate_Offset == 0xb04, "UTslCharacterMovement::MaxSwimmingRotationRate offset is not b04");
	auto constexpr UTslCharacterMovement_SwimmingRotationAcceleration_Offset = offsetof(UTslCharacterMovement, SwimmingRotationAcceleration);
	static_assert(UTslCharacterMovement_SwimmingRotationAcceleration_Offset == 0xb10, "UTslCharacterMovement::SwimmingRotationAcceleration offset is not b10");
	auto constexpr UTslCharacterMovement_MaxZSpeedOutOfWaterModifierForStandingSwimming_Offset = offsetof(UTslCharacterMovement, MaxZSpeedOutOfWaterModifierForStandingSwimming);
	static_assert(UTslCharacterMovement_MaxZSpeedOutOfWaterModifierForStandingSwimming_Offset == 0xb1c, "UTslCharacterMovement::MaxZSpeedOutOfWaterModifierForStandingSwimming offset is not b1c");
	auto constexpr UTslCharacterMovement_WaveRidingModifier_Offset = offsetof(UTslCharacterMovement, WaveRidingModifier);
	static_assert(UTslCharacterMovement_WaveRidingModifier_Offset == 0xb20, "UTslCharacterMovement::WaveRidingModifier offset is not b20");
	auto constexpr UTslCharacterMovement_WaveRidingSmoothingFactor_Offset = offsetof(UTslCharacterMovement, WaveRidingSmoothingFactor);
	static_assert(UTslCharacterMovement_WaveRidingSmoothingFactor_Offset == 0xb24, "UTslCharacterMovement::WaveRidingSmoothingFactor offset is not b24");
	auto constexpr UTslCharacterMovement_WaveRidingModifierUnderWater_Offset = offsetof(UTslCharacterMovement, WaveRidingModifierUnderWater);
	static_assert(UTslCharacterMovement_WaveRidingModifierUnderWater_Offset == 0xb28, "UTslCharacterMovement::WaveRidingModifierUnderWater offset is not b28");
	auto constexpr UTslCharacterMovement_StayingUnderWaterDepthBand_Offset = offsetof(UTslCharacterMovement, StayingUnderWaterDepthBand);
	static_assert(UTslCharacterMovement_StayingUnderWaterDepthBand_Offset == 0xb2c, "UTslCharacterMovement::StayingUnderWaterDepthBand offset is not b2c");
	auto constexpr UTslCharacterMovement_MaxUnderwaterSwimSpeed_Offset = offsetof(UTslCharacterMovement, MaxUnderwaterSwimSpeed);
	static_assert(UTslCharacterMovement_MaxUnderwaterSwimSpeed_Offset == 0xb34, "UTslCharacterMovement::MaxUnderwaterSwimSpeed offset is not b34");
	auto constexpr UTslCharacterMovement_MaxUnderwaterSwimAcceleration_Offset = offsetof(UTslCharacterMovement, MaxUnderwaterSwimAcceleration);
	static_assert(UTslCharacterMovement_MaxUnderwaterSwimAcceleration_Offset == 0xb38, "UTslCharacterMovement::MaxUnderwaterSwimAcceleration offset is not b38");
	auto constexpr UTslCharacterMovement_BrakingDecelerationUnderwaterSwimming_Offset = offsetof(UTslCharacterMovement, BrakingDecelerationUnderwaterSwimming);
	static_assert(UTslCharacterMovement_BrakingDecelerationUnderwaterSwimming_Offset == 0xb3c, "UTslCharacterMovement::BrakingDecelerationUnderwaterSwimming offset is not b3c");
	auto constexpr UTslCharacterMovement_MaxUnderwaterSwimmingRotationRate_Offset = offsetof(UTslCharacterMovement, MaxUnderwaterSwimmingRotationRate);
	static_assert(UTslCharacterMovement_MaxUnderwaterSwimmingRotationRate_Offset == 0xb40, "UTslCharacterMovement::MaxUnderwaterSwimmingRotationRate offset is not b40");
	auto constexpr UTslCharacterMovement_UnderwaterSwimmingRotationAcceleration_Offset = offsetof(UTslCharacterMovement, UnderwaterSwimmingRotationAcceleration);
	static_assert(UTslCharacterMovement_UnderwaterSwimmingRotationAcceleration_Offset == 0xb4c, "UTslCharacterMovement::UnderwaterSwimmingRotationAcceleration offset is not b4c");
	auto constexpr UTslCharacterMovement_MinimumHighAltitude_Offset = offsetof(UTslCharacterMovement, MinimumHighAltitude);
	static_assert(UTslCharacterMovement_MinimumHighAltitude_Offset == 0xb58, "UTslCharacterMovement::MinimumHighAltitude offset is not b58");
	auto constexpr UTslCharacterMovement_MaxFallLateralSpeedAtHighAltitude_Offset = offsetof(UTslCharacterMovement, MaxFallLateralSpeedAtHighAltitude);
	static_assert(UTslCharacterMovement_MaxFallLateralSpeedAtHighAltitude_Offset == 0xb60, "UTslCharacterMovement::MaxFallLateralSpeedAtHighAltitude offset is not b60");
	auto constexpr UTslCharacterMovement_TerminalVelocityAtHighAltitude_Offset = offsetof(UTslCharacterMovement, TerminalVelocityAtHighAltitude);
	static_assert(UTslCharacterMovement_TerminalVelocityAtHighAltitude_Offset == 0xb64, "UTslCharacterMovement::TerminalVelocityAtHighAltitude offset is not b64");
	auto constexpr UTslCharacterMovement_DecreaseTerminalVelocityAtHighAltitude_Offset = offsetof(UTslCharacterMovement, DecreaseTerminalVelocityAtHighAltitude);
	static_assert(UTslCharacterMovement_DecreaseTerminalVelocityAtHighAltitude_Offset == 0xb68, "UTslCharacterMovement::DecreaseTerminalVelocityAtHighAltitude offset is not b68");
	auto constexpr UTslCharacterMovement_MaxFallAccelerationAtHighAltitude_Offset = offsetof(UTslCharacterMovement, MaxFallAccelerationAtHighAltitude);
	static_assert(UTslCharacterMovement_MaxFallAccelerationAtHighAltitude_Offset == 0xb6c, "UTslCharacterMovement::MaxFallAccelerationAtHighAltitude offset is not b6c");
	auto constexpr UTslCharacterMovement_FallRotationRateAtHighAltitude_Offset = offsetof(UTslCharacterMovement, FallRotationRateAtHighAltitude);
	static_assert(UTslCharacterMovement_FallRotationRateAtHighAltitude_Offset == 0xb70, "UTslCharacterMovement::FallRotationRateAtHighAltitude offset is not b70");
	auto constexpr UTslCharacterMovement_AirControlAtHighAltitude_Offset = offsetof(UTslCharacterMovement, AirControlAtHighAltitude);
	static_assert(UTslCharacterMovement_AirControlAtHighAltitude_Offset == 0xb7c, "UTslCharacterMovement::AirControlAtHighAltitude offset is not b7c");
	auto constexpr UTslCharacterMovement_AirControlBoostMultiplierAtHighAltitude_Offset = offsetof(UTslCharacterMovement, AirControlBoostMultiplierAtHighAltitude);
	static_assert(UTslCharacterMovement_AirControlBoostMultiplierAtHighAltitude_Offset == 0xb80, "UTslCharacterMovement::AirControlBoostMultiplierAtHighAltitude offset is not b80");
	auto constexpr UTslCharacterMovement_AirControlBoostVelocityThresholdAtHighAltitude_Offset = offsetof(UTslCharacterMovement, AirControlBoostVelocityThresholdAtHighAltitude);
	static_assert(UTslCharacterMovement_AirControlBoostVelocityThresholdAtHighAltitude_Offset == 0xb84, "UTslCharacterMovement::AirControlBoostVelocityThresholdAtHighAltitude offset is not b84");
	auto constexpr UTslCharacterMovement_FallingDamageType_Offset = offsetof(UTslCharacterMovement, FallingDamageType);
	static_assert(UTslCharacterMovement_FallingDamageType_Offset == 0xb88, "UTslCharacterMovement::FallingDamageType offset is not b88");
	auto constexpr UTslCharacterMovement_EjectDamageCurve_Offset = offsetof(UTslCharacterMovement, EjectDamageCurve);
	static_assert(UTslCharacterMovement_EjectDamageCurve_Offset == 0xb90, "UTslCharacterMovement::EjectDamageCurve offset is not b90");
	auto constexpr UTslCharacterMovement_FallingDamageMinZCut_Offset = offsetof(UTslCharacterMovement, FallingDamageMinZCut);
	static_assert(UTslCharacterMovement_FallingDamageMinZCut_Offset == 0xb98, "UTslCharacterMovement::FallingDamageMinZCut offset is not b98");
	auto constexpr UTslCharacterMovement_FallingDamageVDampingZ_Offset = offsetof(UTslCharacterMovement, FallingDamageVDampingZ);
	static_assert(UTslCharacterMovement_FallingDamageVDampingZ_Offset == 0xb9c, "UTslCharacterMovement::FallingDamageVDampingZ offset is not b9c");
	auto constexpr UTslCharacterMovement_FallingDamageFactor_Offset = offsetof(UTslCharacterMovement, FallingDamageFactor);
	static_assert(UTslCharacterMovement_FallingDamageFactor_Offset == 0xba0, "UTslCharacterMovement::FallingDamageFactor offset is not ba0");
	auto constexpr UTslCharacterMovement_boolFieldBB0_Offset = offsetof(UTslCharacterMovement, boolFieldBB0);
	static_assert(UTslCharacterMovement_boolFieldBB0_Offset == 0xbb0, "UTslCharacterMovement::boolFieldBB0 offset is not bb0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
