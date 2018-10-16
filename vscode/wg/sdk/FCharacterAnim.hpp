#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCharacterAnim // Size: 0x10
{
public:
    ExternalPtr<struct UAnimMontage> PickUpAnim; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.CharacterAnim.PickUpAnim */
    ExternalPtr<struct UAnimMontage> DeathAnim; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.CharacterAnim.DeathAnim */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCharacterAnim = sizeof(FCharacterAnim); // 16
    static_assert(sizeof(FCharacterAnim) == 0x10, "Size of FCharacterAnim is not correct.");
	auto constexpr FCharacterAnim_PickUpAnim_Offset = offsetof(FCharacterAnim, PickUpAnim);
	static_assert(FCharacterAnim_PickUpAnim_Offset == 0x0, "FCharacterAnim::PickUpAnim offset is not 0");
	auto constexpr FCharacterAnim_DeathAnim_Offset = offsetof(FCharacterAnim, DeathAnim);
	static_assert(FCharacterAnim_DeathAnim_Offset == 0x8, "FCharacterAnim::DeathAnim offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
