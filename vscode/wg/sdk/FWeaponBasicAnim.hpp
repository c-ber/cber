#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponBasicAnim // Size: 0x18
{
public:
    ExternalPtr<struct UAnimMontage> PullOut; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.WeaponBasicAnim.PullOut */
    ExternalPtr<struct UAnimMontage> PutIn; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.WeaponBasicAnim.PutIn */
    ExternalPtr<struct UAnimMontage> Pickup; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.WeaponBasicAnim.Pickup */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponBasicAnim = sizeof(FWeaponBasicAnim); // 24
    static_assert(sizeof(FWeaponBasicAnim) == 0x18, "Size of FWeaponBasicAnim is not correct.");
	auto constexpr FWeaponBasicAnim_PullOut_Offset = offsetof(FWeaponBasicAnim, PullOut);
	static_assert(FWeaponBasicAnim_PullOut_Offset == 0x0, "FWeaponBasicAnim::PullOut offset is not 0");
	auto constexpr FWeaponBasicAnim_PutIn_Offset = offsetof(FWeaponBasicAnim, PutIn);
	static_assert(FWeaponBasicAnim_PutIn_Offset == 0x8, "FWeaponBasicAnim::PutIn offset is not 8");
	auto constexpr FWeaponBasicAnim_Pickup_Offset = offsetof(FWeaponBasicAnim, Pickup);
	static_assert(FWeaponBasicAnim_Pickup_Offset == 0x10, "FWeaponBasicAnim::Pickup offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
