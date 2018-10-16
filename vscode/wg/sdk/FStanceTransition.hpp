#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStanceTransition // Size: 0x10
{
public:
    ExternalPtr<struct UAnimMontage> TransitionAnim; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.StanceTransition.TransitionAnim */
    bool CanPlayInMoving; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty TslGame.StanceTransition.CanPlayInMoving */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStanceTransition = sizeof(FStanceTransition); // 16
    static_assert(sizeof(FStanceTransition) == 0x10, "Size of FStanceTransition is not correct.");
	auto constexpr FStanceTransition_TransitionAnim_Offset = offsetof(FStanceTransition, TransitionAnim);
	static_assert(FStanceTransition_TransitionAnim_Offset == 0x0, "FStanceTransition::TransitionAnim offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
