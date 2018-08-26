#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponAnim // Size: 0x10
{
public:
    ExternalPtr<struct UAnimMontage> Pawn1P; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.WeaponAnim.Pawn1P */
    ExternalPtr<struct UAnimMontage> Pawn3P; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.WeaponAnim.Pawn3P */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponAnim = sizeof(FWeaponAnim); // 16
    static_assert(sizeof(FWeaponAnim) == 0x10, "Size of FWeaponAnim is not correct.");
	auto constexpr FWeaponAnim_Pawn1P_Offset = offsetof(FWeaponAnim, Pawn1P);
	static_assert(FWeaponAnim_Pawn1P_Offset == 0x0, "FWeaponAnim::Pawn1P offset is not 0");
	auto constexpr FWeaponAnim_Pawn3P_Offset = offsetof(FWeaponAnim, Pawn3P);
	static_assert(FWeaponAnim_Pawn3P_Offset == 0x8, "FWeaponAnim::Pawn3P offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
