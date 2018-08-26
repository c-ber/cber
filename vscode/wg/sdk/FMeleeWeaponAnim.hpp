#pragma once
#include "FDecalEffectDataSet.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeleeWeaponAnim // Size: 0x2B0
{
public:
    ExternalPtr<struct UAnimMontage> AttackAnim; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.MeleeWeaponAnim.AttackAnim */
    FDecalEffectDataSet AttackDecalEffectDataSet; /* Ofs: 0x8 Size: 0x2A8 StructProperty TslGame.MeleeWeaponAnim.AttackDecalEffectDataSet */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeleeWeaponAnim = sizeof(FMeleeWeaponAnim); // 688
    static_assert(sizeof(FMeleeWeaponAnim) == 0x2B0, "Size of FMeleeWeaponAnim is not correct.");
	auto constexpr FMeleeWeaponAnim_AttackAnim_Offset = offsetof(FMeleeWeaponAnim, AttackAnim);
	static_assert(FMeleeWeaponAnim_AttackAnim_Offset == 0x0, "FMeleeWeaponAnim::AttackAnim offset is not 0");
	auto constexpr FMeleeWeaponAnim_AttackDecalEffectDataSet_Offset = offsetof(FMeleeWeaponAnim, AttackDecalEffectDataSet);
	static_assert(FMeleeWeaponAnim_AttackDecalEffectDataSet_Offset == 0x8, "FMeleeWeaponAnim::AttackDecalEffectDataSet offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
