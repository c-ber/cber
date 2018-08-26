#pragma once
#include "UTslWeapon.hpp"
#include "EHitCheckType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWeapon_Melee // Size: 0x950
	: public UTslWeapon // Size: 0x8A0
{
private:
	typedef UTslWeapon_Melee t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(39); // id32("Class TslGame.TslWeapon_Melee")
		return ptr;
	}
//	ExternalPtr<struct UAkAudioEvent> AttackSoundAk; /* Ofs: 0x898 Size: 0x8 - ObjectProperty TslGame.TslWeapon_Melee.AttackSoundAk */
	TArray<struct FMeleeWeaponAnim> AttackAnims; /* Ofs: 0x8A0 Size: 0x10 - ArrayProperty TslGame.TslWeapon_Melee.AttackAnims */
	float Damage; /* Ofs: 0x8B0 Size: 0x4 - FloatProperty TslGame.TslWeapon_Melee.Damage */
	float WeaponImpact; /* Ofs: 0x8B4 Size: 0x4 - FloatProperty TslGame.TslWeapon_Melee.WeaponImpact */
	ExternalPtr<struct UClass> DamageType; /* Ofs: 0x8B8 Size: 0x8 - ClassProperty TslGame.TslWeapon_Melee.DamageType */
	TEnumAsByte<enum EHitCheckType> HitCheckType; /* Ofs: 0x8C0 Size: 0x1 - EnumProperty TslGame.TslWeapon_Melee.HitCheckType */
	uint8_t UnknownData8C1[0x7];
	ExternalPtr<struct UClass> ImpactTemplate; /* Ofs: 0x8C8 Size: 0x8 - ClassProperty TslGame.TslWeapon_Melee.ImpactTemplate */
	ExternalPtr<struct UCapsuleComponent> HitCapsuleComponent; /* Ofs: 0x8D0 Size: 0x8 - ObjectProperty TslGame.TslWeapon_Melee.HitCapsuleComponent */
	uint8_t UnknownData8D8[0x78];


//	inline bool SetAttackSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x898, value); }
	inline bool SetAttackAnims(t_structHelper inst, TArray<struct FMeleeWeaponAnim> value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetDamage(t_structHelper inst, float value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetWeaponImpact(t_structHelper inst, float value) { inst.WriteOffset(0x8B4, value); }
	inline bool SetDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetHitCheckType(t_structHelper inst, TEnumAsByte<enum EHitCheckType> value) { inst.WriteOffset(0x8C0, value); }
	inline bool SetImpactTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetHitCapsuleComponent(t_structHelper inst, ExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x8D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWeapon_Melee = sizeof(UTslWeapon_Melee); // 2384
    static_assert(sizeof(UTslWeapon_Melee) == 0x950, "Size of UTslWeapon_Melee is not correct.");
//	auto constexpr UTslWeapon_Melee_AttackSoundAk_Offset = offsetof(UTslWeapon_Melee, AttackSoundAk);
//	static_assert(UTslWeapon_Melee_AttackSoundAk_Offset == 0x898, "UTslWeapon_Melee::AttackSoundAk offset is not 898");
	auto constexpr UTslWeapon_Melee_AttackAnims_Offset = offsetof(UTslWeapon_Melee, AttackAnims);
	static_assert(UTslWeapon_Melee_AttackAnims_Offset == 0x8a0, "UTslWeapon_Melee::AttackAnims offset is not 8a0");
	auto constexpr UTslWeapon_Melee_Damage_Offset = offsetof(UTslWeapon_Melee, Damage);
	static_assert(UTslWeapon_Melee_Damage_Offset == 0x8b0, "UTslWeapon_Melee::Damage offset is not 8b0");
	auto constexpr UTslWeapon_Melee_WeaponImpact_Offset = offsetof(UTslWeapon_Melee, WeaponImpact);
	static_assert(UTslWeapon_Melee_WeaponImpact_Offset == 0x8b4, "UTslWeapon_Melee::WeaponImpact offset is not 8b4");
	auto constexpr UTslWeapon_Melee_DamageType_Offset = offsetof(UTslWeapon_Melee, DamageType);
	static_assert(UTslWeapon_Melee_DamageType_Offset == 0x8b8, "UTslWeapon_Melee::DamageType offset is not 8b8");
	auto constexpr UTslWeapon_Melee_HitCheckType_Offset = offsetof(UTslWeapon_Melee, HitCheckType);
	static_assert(UTslWeapon_Melee_HitCheckType_Offset == 0x8c0, "UTslWeapon_Melee::HitCheckType offset is not 8c0");
	auto constexpr UTslWeapon_Melee_ImpactTemplate_Offset = offsetof(UTslWeapon_Melee, ImpactTemplate);
	static_assert(UTslWeapon_Melee_ImpactTemplate_Offset == 0x8c8, "UTslWeapon_Melee::ImpactTemplate offset is not 8c8");
	auto constexpr UTslWeapon_Melee_HitCapsuleComponent_Offset = offsetof(UTslWeapon_Melee, HitCapsuleComponent);
	static_assert(UTslWeapon_Melee_HitCapsuleComponent_Offset == 0x8d0, "UTslWeapon_Melee::HitCapsuleComponent offset is not 8d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
