#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimationTransitionRule // Size: 0x10
{
public:
    FName RuleToExecute; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimationTransitionRule.RuleToExecute */
    bool TransitionReturnVal; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimationTransitionRule.TransitionReturnVal */
    uint8_t UnknownData9[0x3];
    int32_t TransitionIndex; /* Ofs: 0xC Size: 0x4 IntProperty Engine.AnimationTransitionRule.TransitionIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimationTransitionRule = sizeof(FAnimationTransitionRule); // 16
    static_assert(sizeof(FAnimationTransitionRule) == 0x10, "Size of FAnimationTransitionRule is not correct.");
	auto constexpr FAnimationTransitionRule_RuleToExecute_Offset = offsetof(FAnimationTransitionRule, RuleToExecute);
	static_assert(FAnimationTransitionRule_RuleToExecute_Offset == 0x0, "FAnimationTransitionRule::RuleToExecute offset is not 0");
	auto constexpr FAnimationTransitionRule_TransitionIndex_Offset = offsetof(FAnimationTransitionRule, TransitionIndex);
	static_assert(FAnimationTransitionRule_TransitionIndex_Offset == 0xc, "FAnimationTransitionRule::TransitionIndex offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
