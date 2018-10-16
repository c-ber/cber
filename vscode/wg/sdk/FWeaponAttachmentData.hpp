#pragma once
#include "EWeaponAttachmentSlotID.hpp"
#include "FBrightnessConfig.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"
#include "EWeaponGripLeftHand.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponAttachmentData // Size: 0x280
{
public:
    TEnumAsByte<enum EWeaponAttachmentSlotID> AttachmentSlotID; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.WeaponAttachmentData.AttachmentSlotID */
    uint8_t UnknownData1[0x7];
    FName AttachmentTag; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.WeaponAttachmentData.AttachmentTag */
    FName Name; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.WeaponAttachmentData.Name */
    FName MouseSensitiveName; /* Ofs: 0x18 Size: 0x8 NameProperty TslGame.WeaponAttachmentData.MouseSensitiveName */
    float MagnificationFOVMaxIncrement; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.MagnificationFOVMaxIncrement */
    int32_t MagnificationFOVSteps; /* Ofs: 0x24 Size: 0x4 IntProperty TslGame.WeaponAttachmentData.MagnificationFOVSteps */
    float MagnificationFOV; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.MagnificationFOV */
    uint8_t UnknownData2C[0x4];
    FBrightnessConfig ReticleBrightnessConfig; /* Ofs: 0x30 Size: 0x20 StructProperty TslGame.WeaponAttachmentData.ReticleBrightnessConfig */
    TArray<float> ZeroingDistances; /* Ofs: 0x50 Size: 0x10 ArrayProperty TslGame.WeaponAttachmentData.ZeroingDistances */
    TMap<struct UClass, struct UMaterialInstance> ReticleMaterialOverrides; /* Ofs: 0x60 Size: 0x50 MapProperty TslGame.WeaponAttachmentData.ReticleMaterialOverrides */
    TMap<struct UClass, struct UTexture2D> ReticleTextureOverrides; /* Ofs: 0xB0 Size: 0x50 MapProperty TslGame.WeaponAttachmentData.ReticleTextureOverrides */
    TMap<struct UClass, struct UReticleSettings> ReticleSettingsOverrides; /* Ofs: 0x100 Size: 0x50 MapProperty TslGame.WeaponAttachmentData.ReticleSettingsOverrides */
    ExternalPtr<struct UReticlePostprocessData> ScopePostprocessData; /* Ofs: 0x150 Size: 0x8 ObjectProperty TslGame.WeaponAttachmentData.ScopePostprocessData */
    float DecreaseRecoilPatternScale; /* Ofs: 0x158 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.DecreaseRecoilPatternScale */
    int32_t AmmoPerClip; /* Ofs: 0x15C Size: 0x4 IntProperty TslGame.WeaponAttachmentData.AmmoPerClip */
    float ReloadAnimationPlayRate; /* Ofs: 0x160 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.ReloadAnimationPlayRate */
    float MultipleFiringBulletsSpread; /* Ofs: 0x164 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.MultipleFiringBulletsSpread */
    float MultipleFiringSpreadBase; /* Ofs: 0x168 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.MultipleFiringSpreadBase */
    float MultipleAmmoSpeed; /* Ofs: 0x16C Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.MultipleAmmoSpeed */
    float RecoilMultiplierHorizontal; /* Ofs: 0x170 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.RecoilMultiplierHorizontal */
    float RecoilMultiplierVertical; /* Ofs: 0x174 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.RecoilMultiplierVertical */
    float RecoilRecoveryMultiplier; /* Ofs: 0x178 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.RecoilRecoveryMultiplier */
    float SwayMultiplier; /* Ofs: 0x17C Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.SwayMultiplier */
    float AnimationKickMultiplier; /* Ofs: 0x180 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.AnimationKickMultiplier */
    float DeviationMultiplier; /* Ofs: 0x184 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.DeviationMultiplier */
    float ADSSpeedMultiplier; /* Ofs: 0x188 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.ADSSpeedMultiplier */
    FVector FPPSocketOffset; /* Ofs: 0x18C Size: 0xC StructProperty TslGame.WeaponAttachmentData.FPPSocketOffset */
    int32_t GripType_MN; /* Ofs: 0x198 Size: 0x4 IntProperty TslGame.WeaponAttachmentData.GripType_MN */
    float BarrelLengthAdditive; /* Ofs: 0x19C Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.BarrelLengthAdditive */
    ExternalPtr<struct UParticleSystem> MuzzleFx; /* Ofs: 0x1A0 Size: 0x8 ObjectProperty TslGame.WeaponAttachmentData.MuzzleFx */
    FName MuzzleAttachPoint; /* Ofs: 0x1A8 Size: 0x8 NameProperty TslGame.WeaponAttachmentData.MuzzleAttachPoint */
    FVector IKHandOffset; /* Ofs: 0x1B0 Size: 0xC StructProperty TslGame.WeaponAttachmentData.IKHandOffset */
    FRotator IKHandRotation; /* Ofs: 0x1BC Size: 0xC StructProperty TslGame.WeaponAttachmentData.IKHandRotation */
    TEnumAsByte<enum EWeaponGripLeftHand> WeaponGripLeft; /* Ofs: 0x1C8 Size: 0x1 EnumProperty TslGame.WeaponAttachmentData.WeaponGripLeft */
    bool bIsSuppressor; /* Ofs: 0x1C9 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponAttachmentData.bIsSuppressor */
    uint8_t UnknownData1CA[0x6];
    ExternalPtr<struct UAkAudioEvent> MuzzleSound; /* Ofs: 0x1D0 Size: 0x8 ObjectProperty TslGame.WeaponAttachmentData.MuzzleSound */
    ExternalPtr<struct UAnimMontage> CharacterReloadTactical; /* Ofs: 0x1D8 Size: 0x8 ObjectProperty TslGame.WeaponAttachmentData.CharacterReloadTactical */
    ExternalPtr<struct UAnimMontage> WeaponReloadTactical; /* Ofs: 0x1E0 Size: 0x8 ObjectProperty TslGame.WeaponAttachmentData.WeaponReloadTactical */
    ExternalPtr<struct UAnimMontage> CharacterReloadCharge; /* Ofs: 0x1E8 Size: 0x8 ObjectProperty TslGame.WeaponAttachmentData.CharacterReloadCharge */
    ExternalPtr<struct UAnimMontage> WeaponReloadCharge; /* Ofs: 0x1F0 Size: 0x8 ObjectProperty TslGame.WeaponAttachmentData.WeaponReloadCharge */
    bool bUseCustomADSAlpha; /* Ofs: 0x1F8 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponAttachmentData.bUseCustomADSAlpha */
    uint8_t UnknownData1F9[0x7];
    ExternalPtr<struct UCurveVector> ADSAlphaVectorCurve; /* Ofs: 0x200 Size: 0x8 ObjectProperty TslGame.WeaponAttachmentData.ADSAlphaVectorCurve */
    bool bUsePelletGridOverride; /* Ofs: 0x208 Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponAttachmentData.bUsePelletGridOverride */
    uint8_t UnknownData209[0x7];
    TMap<int32_t, struct FVector2D> PelletGridOverride; /* Ofs: 0x210 Size: 0x50 MapProperty TslGame.WeaponAttachmentData.PelletGridOverride */
    float StabilitySpeedScalar; /* Ofs: 0x260 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.StabilitySpeedScalar */
    float StabilityMinForceAdditive; /* Ofs: 0x264 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.StabilityMinForceAdditive */
    float RecoilEarlyExitScale; /* Ofs: 0x268 Size: 0x4 FloatProperty TslGame.WeaponAttachmentData.RecoilEarlyExitScale */
    bool bUseReticleTypeOverride; /* Ofs: 0x26C Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponAttachmentData.bUseReticleTypeOverride */
    bool bUseDefaultReticleCaching; /* Ofs: 0x26D Size: 0x1 BitMask: 01 BoolProperty TslGame.WeaponAttachmentData.bUseDefaultReticleCaching */
    uint8_t UnknownData26E[0x2];
    TArray<struct FReticleTextureData> ReticleTextureDataArray; /* Ofs: 0x270 Size: 0x10 ArrayProperty TslGame.WeaponAttachmentData.ReticleTextureDataArray */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponAttachmentData = sizeof(FWeaponAttachmentData); // 640
    static_assert(sizeof(FWeaponAttachmentData) == 0x280, "Size of FWeaponAttachmentData is not correct.");
	auto constexpr FWeaponAttachmentData_AttachmentSlotID_Offset = offsetof(FWeaponAttachmentData, AttachmentSlotID);
	static_assert(FWeaponAttachmentData_AttachmentSlotID_Offset == 0x0, "FWeaponAttachmentData::AttachmentSlotID offset is not 0");
	auto constexpr FWeaponAttachmentData_AttachmentTag_Offset = offsetof(FWeaponAttachmentData, AttachmentTag);
	static_assert(FWeaponAttachmentData_AttachmentTag_Offset == 0x8, "FWeaponAttachmentData::AttachmentTag offset is not 8");
	auto constexpr FWeaponAttachmentData_Name_Offset = offsetof(FWeaponAttachmentData, Name);
	static_assert(FWeaponAttachmentData_Name_Offset == 0x10, "FWeaponAttachmentData::Name offset is not 10");
	auto constexpr FWeaponAttachmentData_MouseSensitiveName_Offset = offsetof(FWeaponAttachmentData, MouseSensitiveName);
	static_assert(FWeaponAttachmentData_MouseSensitiveName_Offset == 0x18, "FWeaponAttachmentData::MouseSensitiveName offset is not 18");
	auto constexpr FWeaponAttachmentData_MagnificationFOVMaxIncrement_Offset = offsetof(FWeaponAttachmentData, MagnificationFOVMaxIncrement);
	static_assert(FWeaponAttachmentData_MagnificationFOVMaxIncrement_Offset == 0x20, "FWeaponAttachmentData::MagnificationFOVMaxIncrement offset is not 20");
	auto constexpr FWeaponAttachmentData_MagnificationFOVSteps_Offset = offsetof(FWeaponAttachmentData, MagnificationFOVSteps);
	static_assert(FWeaponAttachmentData_MagnificationFOVSteps_Offset == 0x24, "FWeaponAttachmentData::MagnificationFOVSteps offset is not 24");
	auto constexpr FWeaponAttachmentData_MagnificationFOV_Offset = offsetof(FWeaponAttachmentData, MagnificationFOV);
	static_assert(FWeaponAttachmentData_MagnificationFOV_Offset == 0x28, "FWeaponAttachmentData::MagnificationFOV offset is not 28");
	auto constexpr FWeaponAttachmentData_ReticleBrightnessConfig_Offset = offsetof(FWeaponAttachmentData, ReticleBrightnessConfig);
	static_assert(FWeaponAttachmentData_ReticleBrightnessConfig_Offset == 0x30, "FWeaponAttachmentData::ReticleBrightnessConfig offset is not 30");
	auto constexpr FWeaponAttachmentData_ZeroingDistances_Offset = offsetof(FWeaponAttachmentData, ZeroingDistances);
	static_assert(FWeaponAttachmentData_ZeroingDistances_Offset == 0x50, "FWeaponAttachmentData::ZeroingDistances offset is not 50");
	auto constexpr FWeaponAttachmentData_ReticleMaterialOverrides_Offset = offsetof(FWeaponAttachmentData, ReticleMaterialOverrides);
	static_assert(FWeaponAttachmentData_ReticleMaterialOverrides_Offset == 0x60, "FWeaponAttachmentData::ReticleMaterialOverrides offset is not 60");
	auto constexpr FWeaponAttachmentData_ReticleTextureOverrides_Offset = offsetof(FWeaponAttachmentData, ReticleTextureOverrides);
	static_assert(FWeaponAttachmentData_ReticleTextureOverrides_Offset == 0xb0, "FWeaponAttachmentData::ReticleTextureOverrides offset is not b0");
	auto constexpr FWeaponAttachmentData_ReticleSettingsOverrides_Offset = offsetof(FWeaponAttachmentData, ReticleSettingsOverrides);
	static_assert(FWeaponAttachmentData_ReticleSettingsOverrides_Offset == 0x100, "FWeaponAttachmentData::ReticleSettingsOverrides offset is not 100");
	auto constexpr FWeaponAttachmentData_ScopePostprocessData_Offset = offsetof(FWeaponAttachmentData, ScopePostprocessData);
	static_assert(FWeaponAttachmentData_ScopePostprocessData_Offset == 0x150, "FWeaponAttachmentData::ScopePostprocessData offset is not 150");
	auto constexpr FWeaponAttachmentData_DecreaseRecoilPatternScale_Offset = offsetof(FWeaponAttachmentData, DecreaseRecoilPatternScale);
	static_assert(FWeaponAttachmentData_DecreaseRecoilPatternScale_Offset == 0x158, "FWeaponAttachmentData::DecreaseRecoilPatternScale offset is not 158");
	auto constexpr FWeaponAttachmentData_AmmoPerClip_Offset = offsetof(FWeaponAttachmentData, AmmoPerClip);
	static_assert(FWeaponAttachmentData_AmmoPerClip_Offset == 0x15c, "FWeaponAttachmentData::AmmoPerClip offset is not 15c");
	auto constexpr FWeaponAttachmentData_ReloadAnimationPlayRate_Offset = offsetof(FWeaponAttachmentData, ReloadAnimationPlayRate);
	static_assert(FWeaponAttachmentData_ReloadAnimationPlayRate_Offset == 0x160, "FWeaponAttachmentData::ReloadAnimationPlayRate offset is not 160");
	auto constexpr FWeaponAttachmentData_MultipleFiringBulletsSpread_Offset = offsetof(FWeaponAttachmentData, MultipleFiringBulletsSpread);
	static_assert(FWeaponAttachmentData_MultipleFiringBulletsSpread_Offset == 0x164, "FWeaponAttachmentData::MultipleFiringBulletsSpread offset is not 164");
	auto constexpr FWeaponAttachmentData_MultipleFiringSpreadBase_Offset = offsetof(FWeaponAttachmentData, MultipleFiringSpreadBase);
	static_assert(FWeaponAttachmentData_MultipleFiringSpreadBase_Offset == 0x168, "FWeaponAttachmentData::MultipleFiringSpreadBase offset is not 168");
	auto constexpr FWeaponAttachmentData_MultipleAmmoSpeed_Offset = offsetof(FWeaponAttachmentData, MultipleAmmoSpeed);
	static_assert(FWeaponAttachmentData_MultipleAmmoSpeed_Offset == 0x16c, "FWeaponAttachmentData::MultipleAmmoSpeed offset is not 16c");
	auto constexpr FWeaponAttachmentData_RecoilMultiplierHorizontal_Offset = offsetof(FWeaponAttachmentData, RecoilMultiplierHorizontal);
	static_assert(FWeaponAttachmentData_RecoilMultiplierHorizontal_Offset == 0x170, "FWeaponAttachmentData::RecoilMultiplierHorizontal offset is not 170");
	auto constexpr FWeaponAttachmentData_RecoilMultiplierVertical_Offset = offsetof(FWeaponAttachmentData, RecoilMultiplierVertical);
	static_assert(FWeaponAttachmentData_RecoilMultiplierVertical_Offset == 0x174, "FWeaponAttachmentData::RecoilMultiplierVertical offset is not 174");
	auto constexpr FWeaponAttachmentData_RecoilRecoveryMultiplier_Offset = offsetof(FWeaponAttachmentData, RecoilRecoveryMultiplier);
	static_assert(FWeaponAttachmentData_RecoilRecoveryMultiplier_Offset == 0x178, "FWeaponAttachmentData::RecoilRecoveryMultiplier offset is not 178");
	auto constexpr FWeaponAttachmentData_SwayMultiplier_Offset = offsetof(FWeaponAttachmentData, SwayMultiplier);
	static_assert(FWeaponAttachmentData_SwayMultiplier_Offset == 0x17c, "FWeaponAttachmentData::SwayMultiplier offset is not 17c");
	auto constexpr FWeaponAttachmentData_AnimationKickMultiplier_Offset = offsetof(FWeaponAttachmentData, AnimationKickMultiplier);
	static_assert(FWeaponAttachmentData_AnimationKickMultiplier_Offset == 0x180, "FWeaponAttachmentData::AnimationKickMultiplier offset is not 180");
	auto constexpr FWeaponAttachmentData_DeviationMultiplier_Offset = offsetof(FWeaponAttachmentData, DeviationMultiplier);
	static_assert(FWeaponAttachmentData_DeviationMultiplier_Offset == 0x184, "FWeaponAttachmentData::DeviationMultiplier offset is not 184");
	auto constexpr FWeaponAttachmentData_ADSSpeedMultiplier_Offset = offsetof(FWeaponAttachmentData, ADSSpeedMultiplier);
	static_assert(FWeaponAttachmentData_ADSSpeedMultiplier_Offset == 0x188, "FWeaponAttachmentData::ADSSpeedMultiplier offset is not 188");
	auto constexpr FWeaponAttachmentData_FPPSocketOffset_Offset = offsetof(FWeaponAttachmentData, FPPSocketOffset);
	static_assert(FWeaponAttachmentData_FPPSocketOffset_Offset == 0x18c, "FWeaponAttachmentData::FPPSocketOffset offset is not 18c");
	auto constexpr FWeaponAttachmentData_GripType_MN_Offset = offsetof(FWeaponAttachmentData, GripType_MN);
	static_assert(FWeaponAttachmentData_GripType_MN_Offset == 0x198, "FWeaponAttachmentData::GripType_MN offset is not 198");
	auto constexpr FWeaponAttachmentData_BarrelLengthAdditive_Offset = offsetof(FWeaponAttachmentData, BarrelLengthAdditive);
	static_assert(FWeaponAttachmentData_BarrelLengthAdditive_Offset == 0x19c, "FWeaponAttachmentData::BarrelLengthAdditive offset is not 19c");
	auto constexpr FWeaponAttachmentData_MuzzleFx_Offset = offsetof(FWeaponAttachmentData, MuzzleFx);
	static_assert(FWeaponAttachmentData_MuzzleFx_Offset == 0x1a0, "FWeaponAttachmentData::MuzzleFx offset is not 1a0");
	auto constexpr FWeaponAttachmentData_MuzzleAttachPoint_Offset = offsetof(FWeaponAttachmentData, MuzzleAttachPoint);
	static_assert(FWeaponAttachmentData_MuzzleAttachPoint_Offset == 0x1a8, "FWeaponAttachmentData::MuzzleAttachPoint offset is not 1a8");
	auto constexpr FWeaponAttachmentData_IKHandOffset_Offset = offsetof(FWeaponAttachmentData, IKHandOffset);
	static_assert(FWeaponAttachmentData_IKHandOffset_Offset == 0x1b0, "FWeaponAttachmentData::IKHandOffset offset is not 1b0");
	auto constexpr FWeaponAttachmentData_IKHandRotation_Offset = offsetof(FWeaponAttachmentData, IKHandRotation);
	static_assert(FWeaponAttachmentData_IKHandRotation_Offset == 0x1bc, "FWeaponAttachmentData::IKHandRotation offset is not 1bc");
	auto constexpr FWeaponAttachmentData_WeaponGripLeft_Offset = offsetof(FWeaponAttachmentData, WeaponGripLeft);
	static_assert(FWeaponAttachmentData_WeaponGripLeft_Offset == 0x1c8, "FWeaponAttachmentData::WeaponGripLeft offset is not 1c8");
	auto constexpr FWeaponAttachmentData_MuzzleSound_Offset = offsetof(FWeaponAttachmentData, MuzzleSound);
	static_assert(FWeaponAttachmentData_MuzzleSound_Offset == 0x1d0, "FWeaponAttachmentData::MuzzleSound offset is not 1d0");
	auto constexpr FWeaponAttachmentData_CharacterReloadTactical_Offset = offsetof(FWeaponAttachmentData, CharacterReloadTactical);
	static_assert(FWeaponAttachmentData_CharacterReloadTactical_Offset == 0x1d8, "FWeaponAttachmentData::CharacterReloadTactical offset is not 1d8");
	auto constexpr FWeaponAttachmentData_WeaponReloadTactical_Offset = offsetof(FWeaponAttachmentData, WeaponReloadTactical);
	static_assert(FWeaponAttachmentData_WeaponReloadTactical_Offset == 0x1e0, "FWeaponAttachmentData::WeaponReloadTactical offset is not 1e0");
	auto constexpr FWeaponAttachmentData_CharacterReloadCharge_Offset = offsetof(FWeaponAttachmentData, CharacterReloadCharge);
	static_assert(FWeaponAttachmentData_CharacterReloadCharge_Offset == 0x1e8, "FWeaponAttachmentData::CharacterReloadCharge offset is not 1e8");
	auto constexpr FWeaponAttachmentData_WeaponReloadCharge_Offset = offsetof(FWeaponAttachmentData, WeaponReloadCharge);
	static_assert(FWeaponAttachmentData_WeaponReloadCharge_Offset == 0x1f0, "FWeaponAttachmentData::WeaponReloadCharge offset is not 1f0");
	auto constexpr FWeaponAttachmentData_ADSAlphaVectorCurve_Offset = offsetof(FWeaponAttachmentData, ADSAlphaVectorCurve);
	static_assert(FWeaponAttachmentData_ADSAlphaVectorCurve_Offset == 0x200, "FWeaponAttachmentData::ADSAlphaVectorCurve offset is not 200");
	auto constexpr FWeaponAttachmentData_PelletGridOverride_Offset = offsetof(FWeaponAttachmentData, PelletGridOverride);
	static_assert(FWeaponAttachmentData_PelletGridOverride_Offset == 0x210, "FWeaponAttachmentData::PelletGridOverride offset is not 210");
	auto constexpr FWeaponAttachmentData_StabilitySpeedScalar_Offset = offsetof(FWeaponAttachmentData, StabilitySpeedScalar);
	static_assert(FWeaponAttachmentData_StabilitySpeedScalar_Offset == 0x260, "FWeaponAttachmentData::StabilitySpeedScalar offset is not 260");
	auto constexpr FWeaponAttachmentData_StabilityMinForceAdditive_Offset = offsetof(FWeaponAttachmentData, StabilityMinForceAdditive);
	static_assert(FWeaponAttachmentData_StabilityMinForceAdditive_Offset == 0x264, "FWeaponAttachmentData::StabilityMinForceAdditive offset is not 264");
	auto constexpr FWeaponAttachmentData_RecoilEarlyExitScale_Offset = offsetof(FWeaponAttachmentData, RecoilEarlyExitScale);
	static_assert(FWeaponAttachmentData_RecoilEarlyExitScale_Offset == 0x268, "FWeaponAttachmentData::RecoilEarlyExitScale offset is not 268");
	auto constexpr FWeaponAttachmentData_ReticleTextureDataArray_Offset = offsetof(FWeaponAttachmentData, ReticleTextureDataArray);
	static_assert(FWeaponAttachmentData_ReticleTextureDataArray_Offset == 0x270, "FWeaponAttachmentData::ReticleTextureDataArray offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
