#pragma once
#include "UTslWeapon.hpp"
#include "FWeaponGunData.hpp"
#include "FWeaponDeviationData.hpp"
#include "FWeaponGunAnim.hpp"
#include "FWeaponPPSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWeapon_Gun // Size: 0xCB0
	: public UTslWeapon // Size: 0x8A0
{
private:
	typedef UTslWeapon_Gun t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(37); // id32("Class TslGame.TslWeapon_Gun")
		return ptr;
	}
//	uint8_t boolField898;
	ExternalPtr<struct UAkAudioEvent> VariableZoomStepAk; /* Ofs: 0x8A0 Size: 0x8 - ObjectProperty TslGame.TslWeapon_Gun.VariableZoomStepAk */
	ExternalPtr<struct UAkAudioEvent> ZeroingStepAk; /* Ofs: 0x8A8 Size: 0x8 - ObjectProperty TslGame.TslWeapon_Gun.ZeroingStepAk */
	uint8_t UnknownData8B0[0x4];
	int32_t AmmoPerClip; /* Ofs: 0x8B4 Size: 0x4 - IntProperty TslGame.TslWeapon_Gun.AmmoPerClip */
	int32_t CurrentAmmoData; /* Ofs: 0x8B8 Size: 0x4 - IntProperty TslGame.TslWeapon_Gun.CurrentAmmoData */
	int32_t CurrentZeroLevel; /* Ofs: 0x8BC Size: 0x4 - IntProperty TslGame.TslWeapon_Gun.CurrentZeroLevel */
	uint8_t boolField8C0;
	uint8_t UnknownData8C1[0x27];
	int32_t FiringModeIndex; /* Ofs: 0x8E8 Size: 0x4 - IntProperty TslGame.TslWeapon_Gun.FiringModeIndex */
	uint8_t UnknownData8EC[0xA4];
	FWeaponGunData WeaponGunConfig; /* Ofs: 0x990 Size: 0x108 - StructProperty TslGame.TslWeapon_Gun.WeaponGunConfig */
	FWeaponDeviationData WeaponDeviationConfig; /* Ofs: 0xA98 Size: 0x44 - StructProperty TslGame.TslWeapon_Gun.WeaponDeviationConfig */
	uint8_t UnknownDataADC[0x4];
	FWeaponGunAnim WeaponGunAnim; /* Ofs: 0xAE0 Size: 0x118 - StructProperty TslGame.TslWeapon_Gun.WeaponGunAnim */
	FWeaponPPSettings WeaponGunPostprocessSettings; /* Ofs: 0xBF8 Size: 0x90 - StructProperty TslGame.TslWeapon_Gun.WeaponGunPostprocessSettings */
	ExternalPtr<struct UReticlePostprocessData> ReticlePostprocessData; /* Ofs: 0xC88 Size: 0x8 - ObjectProperty TslGame.TslWeapon_Gun.ReticlePostprocessData */
	FName ScopingAttachPoint; /* Ofs: 0xC90 Size: 0x8 - NameProperty TslGame.TslWeapon_Gun.ScopingAttachPoint */
	FName ScopingFocusPoint; /* Ofs: 0xC98 Size: 0x8 - NameProperty TslGame.TslWeapon_Gun.ScopingFocusPoint */
	uint8_t boolFieldCA0;
	uint8_t UnknownDataCA1[0xF];


	inline bool SetVariableZoomStepAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetZeroingStepAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x8A8, value); }
	inline bool SetAmmoPerClip(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8B4, value); }
	inline bool SetCurrentAmmoData(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetCurrentZeroLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8BC, value); }
	inline bool bIsHipped()
	{
		return boolField8C0& 0x1;
	}
	inline bool SetbIsHipped(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFiringModeIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetWeaponGunConfig(t_structHelper inst, FWeaponGunData value) { inst.WriteOffset(0x990, value); }
	inline bool SetWeaponDeviationConfig(t_structHelper inst, FWeaponDeviationData value) { inst.WriteOffset(0xA98, value); }
	inline bool SetWeaponGunAnim(t_structHelper inst, FWeaponGunAnim value) { inst.WriteOffset(0xAE0, value); }
	inline bool SetWeaponGunPostprocessSettings(t_structHelper inst, FWeaponPPSettings value) { inst.WriteOffset(0xBF8, value); }
	inline bool SetReticlePostprocessData(t_structHelper inst, ExternalPtr<struct UReticlePostprocessData> value) { inst.WriteOffset(0xC88, value); }
	inline bool SetScopingAttachPoint(t_structHelper inst, FName value) { inst.WriteOffset(0xC90, value); }
	inline bool SetScopingFocusPoint(t_structHelper inst, FName value) { inst.WriteOffset(0xC98, value); }
	inline bool bLoackLoadedAmmo()
	{
		return boolFieldCA0& 0x1;
	}
	inline bool SetbLoackLoadedAmmo(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWeapon_Gun = sizeof(UTslWeapon_Gun); // 3248
    static_assert(sizeof(UTslWeapon_Gun) == 0xCB0, "Size of UTslWeapon_Gun is not correct.");
//	auto constexpr UTslWeapon_Gun_boolField898_Offset = offsetof(UTslWeapon_Gun, boolField898);
//	static_assert(UTslWeapon_Gun_boolField898_Offset == 0x898, "UTslWeapon_Gun::boolField898 offset is not 898");
	auto constexpr UTslWeapon_Gun_VariableZoomStepAk_Offset = offsetof(UTslWeapon_Gun, VariableZoomStepAk);
	static_assert(UTslWeapon_Gun_VariableZoomStepAk_Offset == 0x8a0, "UTslWeapon_Gun::VariableZoomStepAk offset is not 8a0");
	auto constexpr UTslWeapon_Gun_ZeroingStepAk_Offset = offsetof(UTslWeapon_Gun, ZeroingStepAk);
	static_assert(UTslWeapon_Gun_ZeroingStepAk_Offset == 0x8a8, "UTslWeapon_Gun::ZeroingStepAk offset is not 8a8");
	auto constexpr UTslWeapon_Gun_AmmoPerClip_Offset = offsetof(UTslWeapon_Gun, AmmoPerClip);
	static_assert(UTslWeapon_Gun_AmmoPerClip_Offset == 0x8b4, "UTslWeapon_Gun::AmmoPerClip offset is not 8b4");
	auto constexpr UTslWeapon_Gun_CurrentAmmoData_Offset = offsetof(UTslWeapon_Gun, CurrentAmmoData);
	static_assert(UTslWeapon_Gun_CurrentAmmoData_Offset == 0x8b8, "UTslWeapon_Gun::CurrentAmmoData offset is not 8b8");
	auto constexpr UTslWeapon_Gun_CurrentZeroLevel_Offset = offsetof(UTslWeapon_Gun, CurrentZeroLevel);
	static_assert(UTslWeapon_Gun_CurrentZeroLevel_Offset == 0x8bc, "UTslWeapon_Gun::CurrentZeroLevel offset is not 8bc");
	auto constexpr UTslWeapon_Gun_boolField8C0_Offset = offsetof(UTslWeapon_Gun, boolField8C0);
	static_assert(UTslWeapon_Gun_boolField8C0_Offset == 0x8c0, "UTslWeapon_Gun::boolField8C0 offset is not 8c0");
	auto constexpr UTslWeapon_Gun_FiringModeIndex_Offset = offsetof(UTslWeapon_Gun, FiringModeIndex);
	static_assert(UTslWeapon_Gun_FiringModeIndex_Offset == 0x8e8, "UTslWeapon_Gun::FiringModeIndex offset is not 8e8");
	auto constexpr UTslWeapon_Gun_WeaponGunConfig_Offset = offsetof(UTslWeapon_Gun, WeaponGunConfig);
	static_assert(UTslWeapon_Gun_WeaponGunConfig_Offset == 0x990, "UTslWeapon_Gun::WeaponGunConfig offset is not 990");
	auto constexpr UTslWeapon_Gun_WeaponDeviationConfig_Offset = offsetof(UTslWeapon_Gun, WeaponDeviationConfig);
	static_assert(UTslWeapon_Gun_WeaponDeviationConfig_Offset == 0xa98, "UTslWeapon_Gun::WeaponDeviationConfig offset is not a98");
	auto constexpr UTslWeapon_Gun_WeaponGunAnim_Offset = offsetof(UTslWeapon_Gun, WeaponGunAnim);
	static_assert(UTslWeapon_Gun_WeaponGunAnim_Offset == 0xae0, "UTslWeapon_Gun::WeaponGunAnim offset is not ae0");
	auto constexpr UTslWeapon_Gun_WeaponGunPostprocessSettings_Offset = offsetof(UTslWeapon_Gun, WeaponGunPostprocessSettings);
	static_assert(UTslWeapon_Gun_WeaponGunPostprocessSettings_Offset == 0xbf8, "UTslWeapon_Gun::WeaponGunPostprocessSettings offset is not bf8");
	auto constexpr UTslWeapon_Gun_ReticlePostprocessData_Offset = offsetof(UTslWeapon_Gun, ReticlePostprocessData);
	static_assert(UTslWeapon_Gun_ReticlePostprocessData_Offset == 0xc88, "UTslWeapon_Gun::ReticlePostprocessData offset is not c88");
	auto constexpr UTslWeapon_Gun_ScopingAttachPoint_Offset = offsetof(UTslWeapon_Gun, ScopingAttachPoint);
	static_assert(UTslWeapon_Gun_ScopingAttachPoint_Offset == 0xc90, "UTslWeapon_Gun::ScopingAttachPoint offset is not c90");
	auto constexpr UTslWeapon_Gun_ScopingFocusPoint_Offset = offsetof(UTslWeapon_Gun, ScopingFocusPoint);
	static_assert(UTslWeapon_Gun_ScopingFocusPoint_Offset == 0xc98, "UTslWeapon_Gun::ScopingFocusPoint offset is not c98");
	auto constexpr UTslWeapon_Gun_boolFieldCA0_Offset = offsetof(UTslWeapon_Gun, boolFieldCA0);
	static_assert(UTslWeapon_Gun_boolFieldCA0_Offset == 0xca0, "UTslWeapon_Gun::boolFieldCA0 offset is not ca0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
