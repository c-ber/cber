#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponRollAnim // Size: 0x10
{
public:
    ExternalPtr<struct UAnimMontage> RollLeft; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.WeaponRollAnim.RollLeft */
    ExternalPtr<struct UAnimMontage> RollRight; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.WeaponRollAnim.RollRight */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponRollAnim = sizeof(FWeaponRollAnim); // 16
    static_assert(sizeof(FWeaponRollAnim) == 0x10, "Size of FWeaponRollAnim is not correct.");
	auto constexpr FWeaponRollAnim_RollLeft_Offset = offsetof(FWeaponRollAnim, RollLeft);
	static_assert(FWeaponRollAnim_RollLeft_Offset == 0x0, "FWeaponRollAnim::RollLeft offset is not 0");
	auto constexpr FWeaponRollAnim_RollRight_Offset = offsetof(FWeaponRollAnim, RollRight);
	static_assert(FWeaponRollAnim_RollRight_Offset == 0x8, "FWeaponRollAnim::RollRight offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
