#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTrajectoryWeaponData // Size: 0x80
{
public:
    float AimingSpreadModifier; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.AimingSpreadModifier */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UClass> DamageType; /* Ofs: 0x8 Size: 0x8 ClassProperty TslGame.TrajectoryWeaponData.DamageType */
    float BDS; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.BDS */
    float CrouchRecoveryTime; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.CrouchRecoveryTime */
    bool bIsTrajectoryReplicationEnabled; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty TslGame.TrajectoryWeaponData.bIsTrajectoryReplicationEnabled */
    uint8_t UnknownData19[0x3];
    float ScopingSpreadModifier; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.ScopingSpreadModifier */
    float RecoveryInterval; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.RecoveryInterval */
    float ProneRecoveryTime; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.ProneRecoveryTime */
    float StandRecoveryTime; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.StandRecoveryTime */
    float SimulationSubstepTime; /* Ofs: 0x2C Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.SimulationSubstepTime */
    ExternalPtr<struct UCurveVector> BallisticCurve; /* Ofs: 0x30 Size: 0x8 ObjectProperty TslGame.TrajectoryWeaponData.BallisticCurve */
    float VDragCoefficient; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.VDragCoefficient */
    float RecoilSpeed; /* Ofs: 0x3C Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.RecoilSpeed */
    float RecoilRecoverySpeed; /* Ofs: 0x40 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.RecoilRecoverySpeed */
    float TravelDistanceMax; /* Ofs: 0x44 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.TravelDistanceMax */
    float RangeModifier; /* Ofs: 0x48 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.RangeModifier */
    float RecoilPatternScale; /* Ofs: 0x4C Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.RecoilPatternScale */
    TArray<struct FRecoilPatternData> RecoilPatterns; /* Ofs: 0x50 Size: 0x10 ArrayProperty TslGame.TrajectoryWeaponData.RecoilPatterns */
    int32_t HitDamage; /* Ofs: 0x60 Size: 0x4 IntProperty TslGame.TrajectoryWeaponData.HitDamage */
    float ReferenceDistance; /* Ofs: 0x64 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.ReferenceDistance */
    float InitialSpeed; /* Ofs: 0x68 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.InitialSpeed */
    float WeaponSpread; /* Ofs: 0x6C Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.WeaponSpread */
    bool IsPenetrable; /* Ofs: 0x70 Size: 0x1 BitMask: 01 BoolProperty TslGame.TrajectoryWeaponData.IsPenetrable */
    uint8_t UnknownData71[0x3];
    float FiringSpreadBase; /* Ofs: 0x74 Size: 0x4 FloatProperty TslGame.TrajectoryWeaponData.FiringSpreadBase */
    bool bUseAdvancedBallistics; /* Ofs: 0x78 Size: 0x1 BitMask: 01 BoolProperty TslGame.TrajectoryWeaponData.bUseAdvancedBallistics */
    uint8_t UnknownData79[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTrajectoryWeaponData = sizeof(FTrajectoryWeaponData); // 128
    static_assert(sizeof(FTrajectoryWeaponData) == 0x80, "Size of FTrajectoryWeaponData is not correct.");
	auto constexpr FTrajectoryWeaponData_AimingSpreadModifier_Offset = offsetof(FTrajectoryWeaponData, AimingSpreadModifier);
	static_assert(FTrajectoryWeaponData_AimingSpreadModifier_Offset == 0x0, "FTrajectoryWeaponData::AimingSpreadModifier offset is not 0");
	auto constexpr FTrajectoryWeaponData_DamageType_Offset = offsetof(FTrajectoryWeaponData, DamageType);
	static_assert(FTrajectoryWeaponData_DamageType_Offset == 0x8, "FTrajectoryWeaponData::DamageType offset is not 8");
	auto constexpr FTrajectoryWeaponData_BDS_Offset = offsetof(FTrajectoryWeaponData, BDS);
	static_assert(FTrajectoryWeaponData_BDS_Offset == 0x10, "FTrajectoryWeaponData::BDS offset is not 10");
	auto constexpr FTrajectoryWeaponData_CrouchRecoveryTime_Offset = offsetof(FTrajectoryWeaponData, CrouchRecoveryTime);
	static_assert(FTrajectoryWeaponData_CrouchRecoveryTime_Offset == 0x14, "FTrajectoryWeaponData::CrouchRecoveryTime offset is not 14");
	auto constexpr FTrajectoryWeaponData_ScopingSpreadModifier_Offset = offsetof(FTrajectoryWeaponData, ScopingSpreadModifier);
	static_assert(FTrajectoryWeaponData_ScopingSpreadModifier_Offset == 0x1c, "FTrajectoryWeaponData::ScopingSpreadModifier offset is not 1c");
	auto constexpr FTrajectoryWeaponData_RecoveryInterval_Offset = offsetof(FTrajectoryWeaponData, RecoveryInterval);
	static_assert(FTrajectoryWeaponData_RecoveryInterval_Offset == 0x20, "FTrajectoryWeaponData::RecoveryInterval offset is not 20");
	auto constexpr FTrajectoryWeaponData_ProneRecoveryTime_Offset = offsetof(FTrajectoryWeaponData, ProneRecoveryTime);
	static_assert(FTrajectoryWeaponData_ProneRecoveryTime_Offset == 0x24, "FTrajectoryWeaponData::ProneRecoveryTime offset is not 24");
	auto constexpr FTrajectoryWeaponData_StandRecoveryTime_Offset = offsetof(FTrajectoryWeaponData, StandRecoveryTime);
	static_assert(FTrajectoryWeaponData_StandRecoveryTime_Offset == 0x28, "FTrajectoryWeaponData::StandRecoveryTime offset is not 28");
	auto constexpr FTrajectoryWeaponData_SimulationSubstepTime_Offset = offsetof(FTrajectoryWeaponData, SimulationSubstepTime);
	static_assert(FTrajectoryWeaponData_SimulationSubstepTime_Offset == 0x2c, "FTrajectoryWeaponData::SimulationSubstepTime offset is not 2c");
	auto constexpr FTrajectoryWeaponData_BallisticCurve_Offset = offsetof(FTrajectoryWeaponData, BallisticCurve);
	static_assert(FTrajectoryWeaponData_BallisticCurve_Offset == 0x30, "FTrajectoryWeaponData::BallisticCurve offset is not 30");
	auto constexpr FTrajectoryWeaponData_VDragCoefficient_Offset = offsetof(FTrajectoryWeaponData, VDragCoefficient);
	static_assert(FTrajectoryWeaponData_VDragCoefficient_Offset == 0x38, "FTrajectoryWeaponData::VDragCoefficient offset is not 38");
	auto constexpr FTrajectoryWeaponData_RecoilSpeed_Offset = offsetof(FTrajectoryWeaponData, RecoilSpeed);
	static_assert(FTrajectoryWeaponData_RecoilSpeed_Offset == 0x3c, "FTrajectoryWeaponData::RecoilSpeed offset is not 3c");
	auto constexpr FTrajectoryWeaponData_RecoilRecoverySpeed_Offset = offsetof(FTrajectoryWeaponData, RecoilRecoverySpeed);
	static_assert(FTrajectoryWeaponData_RecoilRecoverySpeed_Offset == 0x40, "FTrajectoryWeaponData::RecoilRecoverySpeed offset is not 40");
	auto constexpr FTrajectoryWeaponData_TravelDistanceMax_Offset = offsetof(FTrajectoryWeaponData, TravelDistanceMax);
	static_assert(FTrajectoryWeaponData_TravelDistanceMax_Offset == 0x44, "FTrajectoryWeaponData::TravelDistanceMax offset is not 44");
	auto constexpr FTrajectoryWeaponData_RangeModifier_Offset = offsetof(FTrajectoryWeaponData, RangeModifier);
	static_assert(FTrajectoryWeaponData_RangeModifier_Offset == 0x48, "FTrajectoryWeaponData::RangeModifier offset is not 48");
	auto constexpr FTrajectoryWeaponData_RecoilPatternScale_Offset = offsetof(FTrajectoryWeaponData, RecoilPatternScale);
	static_assert(FTrajectoryWeaponData_RecoilPatternScale_Offset == 0x4c, "FTrajectoryWeaponData::RecoilPatternScale offset is not 4c");
	auto constexpr FTrajectoryWeaponData_RecoilPatterns_Offset = offsetof(FTrajectoryWeaponData, RecoilPatterns);
	static_assert(FTrajectoryWeaponData_RecoilPatterns_Offset == 0x50, "FTrajectoryWeaponData::RecoilPatterns offset is not 50");
	auto constexpr FTrajectoryWeaponData_HitDamage_Offset = offsetof(FTrajectoryWeaponData, HitDamage);
	static_assert(FTrajectoryWeaponData_HitDamage_Offset == 0x60, "FTrajectoryWeaponData::HitDamage offset is not 60");
	auto constexpr FTrajectoryWeaponData_ReferenceDistance_Offset = offsetof(FTrajectoryWeaponData, ReferenceDistance);
	static_assert(FTrajectoryWeaponData_ReferenceDistance_Offset == 0x64, "FTrajectoryWeaponData::ReferenceDistance offset is not 64");
	auto constexpr FTrajectoryWeaponData_InitialSpeed_Offset = offsetof(FTrajectoryWeaponData, InitialSpeed);
	static_assert(FTrajectoryWeaponData_InitialSpeed_Offset == 0x68, "FTrajectoryWeaponData::InitialSpeed offset is not 68");
	auto constexpr FTrajectoryWeaponData_WeaponSpread_Offset = offsetof(FTrajectoryWeaponData, WeaponSpread);
	static_assert(FTrajectoryWeaponData_WeaponSpread_Offset == 0x6c, "FTrajectoryWeaponData::WeaponSpread offset is not 6c");
	auto constexpr FTrajectoryWeaponData_FiringSpreadBase_Offset = offsetof(FTrajectoryWeaponData, FiringSpreadBase);
	static_assert(FTrajectoryWeaponData_FiringSpreadBase_Offset == 0x74, "FTrajectoryWeaponData::FiringSpreadBase offset is not 74");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
