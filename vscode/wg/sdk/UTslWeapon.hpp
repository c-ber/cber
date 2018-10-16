#pragma once
#include "UActor.hpp"
#include "EAttachmentCalculateType.hpp"
#include "EWeaponHand.hpp"
#include "FCanvasIcon.hpp"
#include "EAnimWeaponType.hpp"
#include "FWeaponData.hpp"
#include "FWeaponBasicAnim.hpp"
#include "EWeaponAttachmentSlotID.hpp"
#include "FWeaponRollAnim.hpp"
#include "FSkinParam.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWeapon // Size: 0x8A0
	: public UActor // Size: 0x410
{
private:
	typedef UTslWeapon t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(36); // id32("Class TslGame.TslWeapon")
		return ptr;
	}
	uint8_t UnknownData410[0x8];
	float WeaponIconRatio; /* Ofs: 0x418 Size: 0x4 - FloatProperty TslGame.TslWeapon.WeaponIconRatio */
	TEnumAsByte<enum EAttachmentCalculateType> AttachmentAniRateCalculateType; /* Ofs: 0x41C Size: 0x1 - EnumProperty TslGame.TslWeapon.AttachmentAniRateCalculateType */
	uint8_t UnknownData41D[0x3];
	ExternalPtr<struct UParticleSystem> MuzzleFx; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.TslWeapon.MuzzleFx */
	TEnumAsByte<enum EWeaponHand> WeaponHand; /* Ofs: 0x428 Size: 0x1 - EnumProperty TslGame.TslWeapon.WeaponHand */
	uint8_t UnknownData429[0x7];
	ExternalPtr<struct UAkAudioEvent> UnequipSoundAk; /* Ofs: 0x430 Size: 0x8 - ObjectProperty TslGame.TslWeapon.UnequipSoundAk */
	ExternalPtr<struct UAkAudioEvent> ReloadSoundAk; /* Ofs: 0x438 Size: 0x8 - ObjectProperty TslGame.TslWeapon.ReloadSoundAk */
	ExternalPtr<struct UClass> FireCameraShake; /* Ofs: 0x440 Size: 0x8 - ClassProperty TslGame.TslWeapon.FireCameraShake */
	ExternalPtr<struct UClass> ShellFxClass; /* Ofs: 0x448 Size: 0x8 - ClassProperty TslGame.TslWeapon.ShellFxClass */
	FCanvasIcon SecondaryClipIcon; /* Ofs: 0x450 Size: 0x18 - StructProperty TslGame.TslWeapon.SecondaryClipIcon */
	TArray<struct FWeaponAttachmentPositionData> AttachmentPositionData; /* Ofs: 0x468 Size: 0x10 - ArrayProperty TslGame.TslWeapon.AttachmentPositionData */
	FCanvasIcon PrimaryIcon; /* Ofs: 0x478 Size: 0x18 - StructProperty TslGame.TslWeapon.PrimaryIcon */
	int32_t PrimaryClipIconOffset; /* Ofs: 0x490 Size: 0x4 - IntProperty TslGame.TslWeapon.PrimaryClipIconOffset */
	TEnumAsByte<enum EAnimWeaponType> AnimWeaponType; /* Ofs: 0x494 Size: 0x1 - EnumProperty TslGame.TslWeapon.AnimWeaponType */
	uint8_t UnknownData495[0x3];
	float AmmoIconsCount; /* Ofs: 0x498 Size: 0x4 - FloatProperty TslGame.TslWeapon.AmmoIconsCount */
	uint8_t UnknownData49C[0x14];
	FCanvasIcon PrimaryClipIcon; /* Ofs: 0x4B0 Size: 0x18 - StructProperty TslGame.TslWeapon.PrimaryClipIcon */
	ExternalPtr<struct UAkAudioEvent> FireLoopSoundAk; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty TslGame.TslWeapon.FireLoopSoundAk */
	uint8_t UnknownData4D0[0x8];
	FName ShellFxAttachPoint; /* Ofs: 0x4D8 Size: 0x8 - NameProperty TslGame.TslWeapon.ShellFxAttachPoint */
	EncryptedExternalPtr<struct UTslCharacter> MyPawn; /* Ofs: 0x4E0 Size: 0x10 - EncryptedObjectProperty TslGame.TslWeapon.MyPawn */
	ExternalPtr<struct UAkAudioEvent> ScopingFinishSoundAk; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty TslGame.TslWeapon.ScopingFinishSoundAk */
	ExternalPtr<struct UAkAudioEvent> ScopingStartSoundAk; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty TslGame.TslWeapon.ScopingStartSoundAk */
	uint8_t UnknownData500[0x10];
	uint8_t boolField510;
	uint8_t UnknownData511[0x7];
	ExternalPtr<struct UForceFeedbackEffect> FireForceFeedback; /* Ofs: 0x518 Size: 0x8 - ObjectProperty TslGame.TslWeapon.FireForceFeedback */
	FName FiringAttachPoint; /* Ofs: 0x520 Size: 0x8 - NameProperty TslGame.TslWeapon.FiringAttachPoint */
	ExternalPtr<struct UParticleSystemComponent> MuzzlePSC; /* Ofs: 0x528 Size: 0x8 - ObjectProperty TslGame.TslWeapon.MuzzlePSC */
	FWeaponData WeaponConfig; /* Ofs: 0x530 Size: 0xA8 - StructProperty TslGame.TslWeapon.WeaponConfig */
	int32_t SecondaryClipIconOffset; /* Ofs: 0x5D8 Size: 0x4 - IntProperty TslGame.TslWeapon.SecondaryClipIconOffset */
	uint8_t UnknownData5DC[0x4];
	ExternalPtr<struct UAkAudioEvent> AimingStartSoundAk; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty TslGame.TslWeapon.AimingStartSoundAk */
	FCanvasIcon Crosshair[5]; /* Ofs: 0x5 Size: 0x18 - StructProperty TslGame.TslWeapon.Crosshair */
	ExternalPtr<struct UAkAudioEvent> OutOfAmmoSoundAk; /* Ofs: 0x660 Size: 0x8 - ObjectProperty TslGame.TslWeapon.OutOfAmmoSoundAk */
	ExternalPtr<struct UAkAudioEvent> EquipSoundAk; /* Ofs: 0x668 Size: 0x8 - ObjectProperty TslGame.TslWeapon.EquipSoundAk */
	float HipDuration; /* Ofs: 0x670 Size: 0x4 - FloatProperty TslGame.TslWeapon.HipDuration */
	uint8_t UnknownData674[0x4];
	FScriptMulticastDelegate OnUpdatedSkinData; /* Ofs: 0x678 Size: 0x10 - MulticastDelegateProperty TslGame.TslWeapon.OnUpdatedSkinData */
	uint8_t boolField688;
	uint8_t UnknownData689[0x7];
	FWeaponBasicAnim WeaponAnim; /* Ofs: 0x690 Size: 0x18 - StructProperty TslGame.TslWeapon.WeaponAnim */
	TMap<EWeaponAttachmentSlotID, struct UAsyncStaticMeshComponent> AttachedStaticComponentMap; /* Ofs: 0x6A8 Size: 0x50 - MapProperty TslGame.TslWeapon.AttachedStaticComponentMap */
	uint8_t UnknownData6F8[0x8];
	ExternalPtr<struct UAkComponent> AkComponent; /* Ofs: 0x700 Size: 0x8 - ObjectProperty TslGame.TslWeapon.AkComponent */
	FCanvasIcon AimingCrosshair[5]; /* Ofs: 0x5 Size: 0x18 - StructProperty TslGame.TslWeapon.AimingCrosshair */
	FName MuzzleAttachPoint; /* Ofs: 0x780 Size: 0x8 - NameProperty TslGame.TslWeapon.MuzzleAttachPoint */
	uint8_t UnknownData788[0x4];
	TEnumAsByte<enum EAttachmentCalculateType> AttachmentRecoilPatternScaleCalculateType; /* Ofs: 0x78C Size: 0x1 - EnumProperty TslGame.TslWeapon.AttachmentRecoilPatternScaleCalculateType */
	uint8_t UnknownData78D[0xB];
	FWeaponRollAnim ProneRollAnim; /* Ofs: 0x798 Size: 0x10 - StructProperty TslGame.TslWeapon.ProneRollAnim */
	ExternalPtr<struct UParticleSystemComponent> MuzzlePSCSecondary; /* Ofs: 0x7A8 Size: 0x8 - ObjectProperty TslGame.TslWeapon.MuzzlePSCSecondary */
	TArray<struct FWeaponAttachmentAssetData> DefaultAttachedItemAssets; /* Ofs: 0x7B0 Size: 0x10 - ArrayProperty TslGame.TslWeapon.DefaultAttachedItemAssets */
	uint8_t boolField7C0;
	uint8_t UnknownData7C1[0x7];
	ExternalPtr<struct UAkAudioEvent> AimingFinishSoundAk; /* Ofs: 0x7C8 Size: 0x8 - ObjectProperty TslGame.TslWeapon.AimingFinishSoundAk */
	FScriptMulticastDelegate OnUpdatedAttachment; /* Ofs: 0x7D0 Size: 0x10 - MulticastDelegateProperty TslGame.TslWeapon.OnUpdatedAttachment */
	uint8_t boolField7E0;
	uint8_t UnknownData7E1[0x7];
	TArray<ExternalPtr<struct UClass>> AttachedItemClasses; /* Ofs: 0x7E8 Size: 0x10 - ArrayProperty TslGame.TslWeapon.AttachedItemClasses */
	ExternalPtr<struct UTexture> WeaponIcon; /* Ofs: 0x7F8 Size: 0x8 - ObjectProperty TslGame.TslWeapon.WeaponIcon */
	EncryptedExternalPtr<struct USceneComponent> RootScene; /* Ofs: 0x800 Size: 0x10 - EncryptedObjectProperty TslGame.TslWeapon.RootScene */
	uint8_t UnknownData810[0x20];
	ExternalPtr<struct UAkAudioEvent> FireSoundAk; /* Ofs: 0x830 Size: 0x8 - ObjectProperty TslGame.TslWeapon.FireSoundAk */
	FCanvasIcon SecondaryIcon; /* Ofs: 0x838 Size: 0x18 - StructProperty TslGame.TslWeapon.SecondaryIcon */
	EncryptedExternalPtr<struct USkeletalMeshComponent> Mesh3P; /* Ofs: 0x850 Size: 0x10 - EncryptedObjectProperty TslGame.TslWeapon.Mesh3P */
	uint8_t UnknownData860[0x8];
	ExternalPtr<struct UAkAudioEvent> FireFinishSoundAk; /* Ofs: 0x868 Size: 0x8 - ObjectProperty TslGame.TslWeapon.FireFinishSoundAk */
	FName WeaponTag; /* Ofs: 0x870 Size: 0x8 - NameProperty TslGame.TslWeapon.WeaponTag */
	uint8_t boolField878;
	uint8_t UnknownData879[0x7];
	FSkinParam SkinParam; /* Ofs: 0x880 Size: 0x10 - StructProperty TslGame.TslWeapon.SkinParam */
	FName WeaponMeshName; /* Ofs: 0x890 Size: 0x8 - NameProperty TslGame.TslWeapon.WeaponMeshName */
	uint8_t UnknownData898[0x8];


	inline bool SetWeaponIconRatio(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetAttachmentAniRateCalculateType(t_structHelper inst, TEnumAsByte<enum EAttachmentCalculateType> value) { inst.WriteOffset(0x41C, value); }
	inline bool SetMuzzleFx(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x420, value); }
	inline bool SetWeaponHand(t_structHelper inst, TEnumAsByte<enum EWeaponHand> value) { inst.WriteOffset(0x428, value); }
	inline bool SetUnequipSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetReloadSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x438, value); }
	inline bool SetFireCameraShake(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x440, value); }
	inline bool SetShellFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x448, value); }
	inline bool SetSecondaryClipIcon(t_structHelper inst, FCanvasIcon value) { inst.WriteOffset(0x450, value); }
	inline bool SetAttachmentPositionData(t_structHelper inst, TArray<struct FWeaponAttachmentPositionData> value) { inst.WriteOffset(0x468, value); }
	inline bool SetPrimaryIcon(t_structHelper inst, FCanvasIcon value) { inst.WriteOffset(0x478, value); }
	inline bool SetPrimaryClipIconOffset(t_structHelper inst, int32_t value) { inst.WriteOffset(0x490, value); }
	inline bool SetAnimWeaponType(t_structHelper inst, TEnumAsByte<enum EAnimWeaponType> value) { inst.WriteOffset(0x494, value); }
	inline bool SetAmmoIconsCount(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetPrimaryClipIcon(t_structHelper inst, FCanvasIcon value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetFireLoopSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetShellFxAttachPoint(t_structHelper inst, FName value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetMyPawn(t_structHelper inst, EncryptedExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetScopingFinishSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetScopingStartSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4F8, value); }
	inline bool UseCustomAimingCrosshair()
	{
		return boolField510& 0x1;
	}
	inline bool SetUseCustomAimingCrosshair(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x510, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFireForceFeedback(t_structHelper inst, ExternalPtr<struct UForceFeedbackEffect> value) { inst.WriteOffset(0x518, value); }
	inline bool SetFiringAttachPoint(t_structHelper inst, FName value) { inst.WriteOffset(0x520, value); }
	inline bool SetMuzzlePSC(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x528, value); }
	inline bool SetWeaponConfig(t_structHelper inst, FWeaponData value) { inst.WriteOffset(0x530, value); }
	inline bool SetSecondaryClipIconOffset(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetAimingStartSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetOutOfAmmoSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x660, value); }
	inline bool SetEquipSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x668, value); }
	inline bool SetHipDuration(t_structHelper inst, float value) { inst.WriteOffset(0x670, value); }
	inline bool SetOnUpdatedSkinData(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x678, value); }
	inline bool bHideCrosshairWhileNotAiming()
	{
		return boolField688& 0x1;
	}
	inline bool SetbHideCrosshairWhileNotAiming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x688, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeaponAnim(t_structHelper inst, FWeaponBasicAnim value) { inst.WriteOffset(0x690, value); }
	inline bool SetAttachedStaticComponentMap(t_structHelper inst, TMap<EWeaponAttachmentSlotID, struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x6A8, value); }
	inline bool SetAkComponent(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x700, value); }
	inline bool SetMuzzleAttachPoint(t_structHelper inst, FName value) { inst.WriteOffset(0x780, value); }
	inline bool SetAttachmentRecoilPatternScaleCalculateType(t_structHelper inst, TEnumAsByte<enum EAttachmentCalculateType> value) { inst.WriteOffset(0x78C, value); }
	inline bool SetProneRollAnim(t_structHelper inst, FWeaponRollAnim value) { inst.WriteOffset(0x798, value); }
	inline bool SetMuzzlePSCSecondary(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x7A8, value); }
	inline bool SetDefaultAttachedItemAssets(t_structHelper inst, TArray<struct FWeaponAttachmentAssetData> value) { inst.WriteOffset(0x7B0, value); }
	inline bool UseCustomCrosshair()
	{
		return boolField7C0& 0x1;
	}
	inline bool SetUseCustomCrosshair(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAimingFinishSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x7C8, value); }
	inline bool SetOnUpdatedAttachment(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x7D0, value); }
	inline bool UseLaserDot()
	{
		return boolField7E0& 0x1;
	}
	inline bool SetUseLaserDot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAttachedItemClasses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x7E8, value); }
	inline bool SetWeaponIcon(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x7F8, value); }
	inline bool SetRootScene(t_structHelper inst, EncryptedExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x800, value); }
	inline bool SetFireSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x830, value); }
	inline bool SetSecondaryIcon(t_structHelper inst, FCanvasIcon value) { inst.WriteOffset(0x838, value); }
	inline bool SetMesh3P(t_structHelper inst, EncryptedExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x850, value); }
	inline bool SetFireFinishSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x868, value); }
	inline bool SetWeaponTag(t_structHelper inst, FName value) { inst.WriteOffset(0x870, value); }
	inline bool bLoopedMuzzleFX()
	{
		return boolField878& 0x1;
	}
	inline bool SetbLoopedMuzzleFX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLoopedFireSound()
	{
		return boolField878& 0x2;
	}
	inline bool SetbLoopedFireSound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetSkinParam(t_structHelper inst, FSkinParam value) { inst.WriteOffset(0x880, value); }
	inline bool SetWeaponMeshName(t_structHelper inst, FName value) { inst.WriteOffset(0x890, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWeapon = sizeof(UTslWeapon); // 2208
    static_assert(sizeof(UTslWeapon) == 0x8A0, "Size of UTslWeapon is not correct.");
	auto constexpr UTslWeapon_WeaponIconRatio_Offset = offsetof(UTslWeapon, WeaponIconRatio);
	static_assert(UTslWeapon_WeaponIconRatio_Offset == 0x418, "UTslWeapon::WeaponIconRatio offset is not 418");
	auto constexpr UTslWeapon_AttachmentAniRateCalculateType_Offset = offsetof(UTslWeapon, AttachmentAniRateCalculateType);
	static_assert(UTslWeapon_AttachmentAniRateCalculateType_Offset == 0x41c, "UTslWeapon::AttachmentAniRateCalculateType offset is not 41c");
	auto constexpr UTslWeapon_MuzzleFx_Offset = offsetof(UTslWeapon, MuzzleFx);
	static_assert(UTslWeapon_MuzzleFx_Offset == 0x420, "UTslWeapon::MuzzleFx offset is not 420");
	auto constexpr UTslWeapon_WeaponHand_Offset = offsetof(UTslWeapon, WeaponHand);
	static_assert(UTslWeapon_WeaponHand_Offset == 0x428, "UTslWeapon::WeaponHand offset is not 428");
	auto constexpr UTslWeapon_UnequipSoundAk_Offset = offsetof(UTslWeapon, UnequipSoundAk);
	static_assert(UTslWeapon_UnequipSoundAk_Offset == 0x430, "UTslWeapon::UnequipSoundAk offset is not 430");
	auto constexpr UTslWeapon_ReloadSoundAk_Offset = offsetof(UTslWeapon, ReloadSoundAk);
	static_assert(UTslWeapon_ReloadSoundAk_Offset == 0x438, "UTslWeapon::ReloadSoundAk offset is not 438");
	auto constexpr UTslWeapon_FireCameraShake_Offset = offsetof(UTslWeapon, FireCameraShake);
	static_assert(UTslWeapon_FireCameraShake_Offset == 0x440, "UTslWeapon::FireCameraShake offset is not 440");
	auto constexpr UTslWeapon_ShellFxClass_Offset = offsetof(UTslWeapon, ShellFxClass);
	static_assert(UTslWeapon_ShellFxClass_Offset == 0x448, "UTslWeapon::ShellFxClass offset is not 448");
	auto constexpr UTslWeapon_SecondaryClipIcon_Offset = offsetof(UTslWeapon, SecondaryClipIcon);
	static_assert(UTslWeapon_SecondaryClipIcon_Offset == 0x450, "UTslWeapon::SecondaryClipIcon offset is not 450");
	auto constexpr UTslWeapon_AttachmentPositionData_Offset = offsetof(UTslWeapon, AttachmentPositionData);
	static_assert(UTslWeapon_AttachmentPositionData_Offset == 0x468, "UTslWeapon::AttachmentPositionData offset is not 468");
	auto constexpr UTslWeapon_PrimaryIcon_Offset = offsetof(UTslWeapon, PrimaryIcon);
	static_assert(UTslWeapon_PrimaryIcon_Offset == 0x478, "UTslWeapon::PrimaryIcon offset is not 478");
	auto constexpr UTslWeapon_PrimaryClipIconOffset_Offset = offsetof(UTslWeapon, PrimaryClipIconOffset);
	static_assert(UTslWeapon_PrimaryClipIconOffset_Offset == 0x490, "UTslWeapon::PrimaryClipIconOffset offset is not 490");
	auto constexpr UTslWeapon_AnimWeaponType_Offset = offsetof(UTslWeapon, AnimWeaponType);
	static_assert(UTslWeapon_AnimWeaponType_Offset == 0x494, "UTslWeapon::AnimWeaponType offset is not 494");
	auto constexpr UTslWeapon_AmmoIconsCount_Offset = offsetof(UTslWeapon, AmmoIconsCount);
	static_assert(UTslWeapon_AmmoIconsCount_Offset == 0x498, "UTslWeapon::AmmoIconsCount offset is not 498");
	auto constexpr UTslWeapon_PrimaryClipIcon_Offset = offsetof(UTslWeapon, PrimaryClipIcon);
	static_assert(UTslWeapon_PrimaryClipIcon_Offset == 0x4b0, "UTslWeapon::PrimaryClipIcon offset is not 4b0");
	auto constexpr UTslWeapon_FireLoopSoundAk_Offset = offsetof(UTslWeapon, FireLoopSoundAk);
	static_assert(UTslWeapon_FireLoopSoundAk_Offset == 0x4c8, "UTslWeapon::FireLoopSoundAk offset is not 4c8");
	auto constexpr UTslWeapon_ShellFxAttachPoint_Offset = offsetof(UTslWeapon, ShellFxAttachPoint);
	static_assert(UTslWeapon_ShellFxAttachPoint_Offset == 0x4d8, "UTslWeapon::ShellFxAttachPoint offset is not 4d8");
	auto constexpr UTslWeapon_MyPawn_Offset = offsetof(UTslWeapon, MyPawn);
	static_assert(UTslWeapon_MyPawn_Offset == 0x4e0, "UTslWeapon::MyPawn offset is not 4e0");
	auto constexpr UTslWeapon_ScopingFinishSoundAk_Offset = offsetof(UTslWeapon, ScopingFinishSoundAk);
	static_assert(UTslWeapon_ScopingFinishSoundAk_Offset == 0x4f0, "UTslWeapon::ScopingFinishSoundAk offset is not 4f0");
	auto constexpr UTslWeapon_ScopingStartSoundAk_Offset = offsetof(UTslWeapon, ScopingStartSoundAk);
	static_assert(UTslWeapon_ScopingStartSoundAk_Offset == 0x4f8, "UTslWeapon::ScopingStartSoundAk offset is not 4f8");
	auto constexpr UTslWeapon_boolField510_Offset = offsetof(UTslWeapon, boolField510);
	static_assert(UTslWeapon_boolField510_Offset == 0x510, "UTslWeapon::boolField510 offset is not 510");
	auto constexpr UTslWeapon_FireForceFeedback_Offset = offsetof(UTslWeapon, FireForceFeedback);
	static_assert(UTslWeapon_FireForceFeedback_Offset == 0x518, "UTslWeapon::FireForceFeedback offset is not 518");
	auto constexpr UTslWeapon_FiringAttachPoint_Offset = offsetof(UTslWeapon, FiringAttachPoint);
	static_assert(UTslWeapon_FiringAttachPoint_Offset == 0x520, "UTslWeapon::FiringAttachPoint offset is not 520");
	auto constexpr UTslWeapon_MuzzlePSC_Offset = offsetof(UTslWeapon, MuzzlePSC);
	static_assert(UTslWeapon_MuzzlePSC_Offset == 0x528, "UTslWeapon::MuzzlePSC offset is not 528");
	auto constexpr UTslWeapon_WeaponConfig_Offset = offsetof(UTslWeapon, WeaponConfig);
	static_assert(UTslWeapon_WeaponConfig_Offset == 0x530, "UTslWeapon::WeaponConfig offset is not 530");
	auto constexpr UTslWeapon_SecondaryClipIconOffset_Offset = offsetof(UTslWeapon, SecondaryClipIconOffset);
	static_assert(UTslWeapon_SecondaryClipIconOffset_Offset == 0x5d8, "UTslWeapon::SecondaryClipIconOffset offset is not 5d8");
	auto constexpr UTslWeapon_AimingStartSoundAk_Offset = offsetof(UTslWeapon, AimingStartSoundAk);
	static_assert(UTslWeapon_AimingStartSoundAk_Offset == 0x5e0, "UTslWeapon::AimingStartSoundAk offset is not 5e0");
	auto constexpr UTslWeapon_Crosshair_Offset = offsetof(UTslWeapon, Crosshair);
	static_assert(UTslWeapon_Crosshair_Offset == 0x5e8, "UTslWeapon::Crosshair offset is not 5e8");
	auto constexpr UTslWeapon_OutOfAmmoSoundAk_Offset = offsetof(UTslWeapon, OutOfAmmoSoundAk);
	static_assert(UTslWeapon_OutOfAmmoSoundAk_Offset == 0x660, "UTslWeapon::OutOfAmmoSoundAk offset is not 660");
	auto constexpr UTslWeapon_EquipSoundAk_Offset = offsetof(UTslWeapon, EquipSoundAk);
	static_assert(UTslWeapon_EquipSoundAk_Offset == 0x668, "UTslWeapon::EquipSoundAk offset is not 668");
	auto constexpr UTslWeapon_HipDuration_Offset = offsetof(UTslWeapon, HipDuration);
	static_assert(UTslWeapon_HipDuration_Offset == 0x670, "UTslWeapon::HipDuration offset is not 670");
	auto constexpr UTslWeapon_OnUpdatedSkinData_Offset = offsetof(UTslWeapon, OnUpdatedSkinData);
	static_assert(UTslWeapon_OnUpdatedSkinData_Offset == 0x678, "UTslWeapon::OnUpdatedSkinData offset is not 678");
	auto constexpr UTslWeapon_boolField688_Offset = offsetof(UTslWeapon, boolField688);
	static_assert(UTslWeapon_boolField688_Offset == 0x688, "UTslWeapon::boolField688 offset is not 688");
	auto constexpr UTslWeapon_WeaponAnim_Offset = offsetof(UTslWeapon, WeaponAnim);
	static_assert(UTslWeapon_WeaponAnim_Offset == 0x690, "UTslWeapon::WeaponAnim offset is not 690");
	auto constexpr UTslWeapon_AttachedStaticComponentMap_Offset = offsetof(UTslWeapon, AttachedStaticComponentMap);
	static_assert(UTslWeapon_AttachedStaticComponentMap_Offset == 0x6a8, "UTslWeapon::AttachedStaticComponentMap offset is not 6a8");
	auto constexpr UTslWeapon_AkComponent_Offset = offsetof(UTslWeapon, AkComponent);
	static_assert(UTslWeapon_AkComponent_Offset == 0x700, "UTslWeapon::AkComponent offset is not 700");
	auto constexpr UTslWeapon_AimingCrosshair_Offset = offsetof(UTslWeapon, AimingCrosshair);
	static_assert(UTslWeapon_AimingCrosshair_Offset == 0x708, "UTslWeapon::AimingCrosshair offset is not 708");
	auto constexpr UTslWeapon_MuzzleAttachPoint_Offset = offsetof(UTslWeapon, MuzzleAttachPoint);
	static_assert(UTslWeapon_MuzzleAttachPoint_Offset == 0x780, "UTslWeapon::MuzzleAttachPoint offset is not 780");
	auto constexpr UTslWeapon_AttachmentRecoilPatternScaleCalculateType_Offset = offsetof(UTslWeapon, AttachmentRecoilPatternScaleCalculateType);
	static_assert(UTslWeapon_AttachmentRecoilPatternScaleCalculateType_Offset == 0x78c, "UTslWeapon::AttachmentRecoilPatternScaleCalculateType offset is not 78c");
	auto constexpr UTslWeapon_ProneRollAnim_Offset = offsetof(UTslWeapon, ProneRollAnim);
	static_assert(UTslWeapon_ProneRollAnim_Offset == 0x798, "UTslWeapon::ProneRollAnim offset is not 798");
	auto constexpr UTslWeapon_MuzzlePSCSecondary_Offset = offsetof(UTslWeapon, MuzzlePSCSecondary);
	static_assert(UTslWeapon_MuzzlePSCSecondary_Offset == 0x7a8, "UTslWeapon::MuzzlePSCSecondary offset is not 7a8");
	auto constexpr UTslWeapon_DefaultAttachedItemAssets_Offset = offsetof(UTslWeapon, DefaultAttachedItemAssets);
	static_assert(UTslWeapon_DefaultAttachedItemAssets_Offset == 0x7b0, "UTslWeapon::DefaultAttachedItemAssets offset is not 7b0");
	auto constexpr UTslWeapon_boolField7C0_Offset = offsetof(UTslWeapon, boolField7C0);
	static_assert(UTslWeapon_boolField7C0_Offset == 0x7c0, "UTslWeapon::boolField7C0 offset is not 7c0");
	auto constexpr UTslWeapon_AimingFinishSoundAk_Offset = offsetof(UTslWeapon, AimingFinishSoundAk);
	static_assert(UTslWeapon_AimingFinishSoundAk_Offset == 0x7c8, "UTslWeapon::AimingFinishSoundAk offset is not 7c8");
	auto constexpr UTslWeapon_OnUpdatedAttachment_Offset = offsetof(UTslWeapon, OnUpdatedAttachment);
	static_assert(UTslWeapon_OnUpdatedAttachment_Offset == 0x7d0, "UTslWeapon::OnUpdatedAttachment offset is not 7d0");
	auto constexpr UTslWeapon_boolField7E0_Offset = offsetof(UTslWeapon, boolField7E0);
	static_assert(UTslWeapon_boolField7E0_Offset == 0x7e0, "UTslWeapon::boolField7E0 offset is not 7e0");
	auto constexpr UTslWeapon_AttachedItemClasses_Offset = offsetof(UTslWeapon, AttachedItemClasses);
	static_assert(UTslWeapon_AttachedItemClasses_Offset == 0x7e8, "UTslWeapon::AttachedItemClasses offset is not 7e8");
	auto constexpr UTslWeapon_WeaponIcon_Offset = offsetof(UTslWeapon, WeaponIcon);
	static_assert(UTslWeapon_WeaponIcon_Offset == 0x7f8, "UTslWeapon::WeaponIcon offset is not 7f8");
	auto constexpr UTslWeapon_RootScene_Offset = offsetof(UTslWeapon, RootScene);
	static_assert(UTslWeapon_RootScene_Offset == 0x800, "UTslWeapon::RootScene offset is not 800");
	auto constexpr UTslWeapon_FireSoundAk_Offset = offsetof(UTslWeapon, FireSoundAk);
	static_assert(UTslWeapon_FireSoundAk_Offset == 0x830, "UTslWeapon::FireSoundAk offset is not 830");
	auto constexpr UTslWeapon_SecondaryIcon_Offset = offsetof(UTslWeapon, SecondaryIcon);
	static_assert(UTslWeapon_SecondaryIcon_Offset == 0x838, "UTslWeapon::SecondaryIcon offset is not 838");
	auto constexpr UTslWeapon_Mesh3P_Offset = offsetof(UTslWeapon, Mesh3P);
	static_assert(UTslWeapon_Mesh3P_Offset == 0x850, "UTslWeapon::Mesh3P offset is not 850");
	auto constexpr UTslWeapon_FireFinishSoundAk_Offset = offsetof(UTslWeapon, FireFinishSoundAk);
	static_assert(UTslWeapon_FireFinishSoundAk_Offset == 0x868, "UTslWeapon::FireFinishSoundAk offset is not 868");
	auto constexpr UTslWeapon_WeaponTag_Offset = offsetof(UTslWeapon, WeaponTag);
	static_assert(UTslWeapon_WeaponTag_Offset == 0x870, "UTslWeapon::WeaponTag offset is not 870");
	auto constexpr UTslWeapon_boolField878_Offset = offsetof(UTslWeapon, boolField878);
	static_assert(UTslWeapon_boolField878_Offset == 0x878, "UTslWeapon::boolField878 offset is not 878");
	auto constexpr UTslWeapon_SkinParam_Offset = offsetof(UTslWeapon, SkinParam);
	static_assert(UTslWeapon_SkinParam_Offset == 0x880, "UTslWeapon::SkinParam offset is not 880");
	auto constexpr UTslWeapon_WeaponMeshName_Offset = offsetof(UTslWeapon, WeaponMeshName);
	static_assert(UTslWeapon_WeaponMeshName_Offset == 0x890, "UTslWeapon::WeaponMeshName offset is not 890");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
