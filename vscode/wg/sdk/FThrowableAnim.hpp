#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FThrowableAnim // Size: 0x18
{
public:
    ExternalPtr<struct UAnimMontage> PinOff; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.ThrowableAnim.PinOff */
    ExternalPtr<struct UAnimMontage> Cooking; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.ThrowableAnim.Cooking */
    ExternalPtr<struct UAnimMontage> Release; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.ThrowableAnim.Release */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFThrowableAnim = sizeof(FThrowableAnim); // 24
    static_assert(sizeof(FThrowableAnim) == 0x18, "Size of FThrowableAnim is not correct.");
	auto constexpr FThrowableAnim_PinOff_Offset = offsetof(FThrowableAnim, PinOff);
	static_assert(FThrowableAnim_PinOff_Offset == 0x0, "FThrowableAnim::PinOff offset is not 0");
	auto constexpr FThrowableAnim_Cooking_Offset = offsetof(FThrowableAnim, Cooking);
	static_assert(FThrowableAnim_Cooking_Offset == 0x8, "FThrowableAnim::Cooking offset is not 8");
	auto constexpr FThrowableAnim_Release_Offset = offsetof(FThrowableAnim, Release);
	static_assert(FThrowableAnim_Release_Offset == 0x10, "FThrowableAnim::Release offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
