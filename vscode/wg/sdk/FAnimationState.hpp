#pragma once
#include "FAnimationStateBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimationState // Size: 0x28
 : public FAnimationStateBase // Size: 0x8
{
public:
    TArray<struct FAnimationTransitionRule> Transitions; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.AnimationState.Transitions */
    int32_t StateRootNodeIndex; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.AnimationState.StateRootNodeIndex */
    int32_t StartNotify; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.AnimationState.StartNotify */
    int32_t EndNotify; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.AnimationState.EndNotify */
    int32_t FullyBlendedNotify; /* Ofs: 0x24 Size: 0x4 IntProperty Engine.AnimationState.FullyBlendedNotify */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimationState = sizeof(FAnimationState); // 40
    static_assert(sizeof(FAnimationState) == 0x28, "Size of FAnimationState is not correct.");
	auto constexpr FAnimationState_Transitions_Offset = offsetof(FAnimationState, Transitions);
	static_assert(FAnimationState_Transitions_Offset == 0x8, "FAnimationState::Transitions offset is not 8");
	auto constexpr FAnimationState_StateRootNodeIndex_Offset = offsetof(FAnimationState, StateRootNodeIndex);
	static_assert(FAnimationState_StateRootNodeIndex_Offset == 0x18, "FAnimationState::StateRootNodeIndex offset is not 18");
	auto constexpr FAnimationState_StartNotify_Offset = offsetof(FAnimationState, StartNotify);
	static_assert(FAnimationState_StartNotify_Offset == 0x1c, "FAnimationState::StartNotify offset is not 1c");
	auto constexpr FAnimationState_EndNotify_Offset = offsetof(FAnimationState, EndNotify);
	static_assert(FAnimationState_EndNotify_Offset == 0x20, "FAnimationState::EndNotify offset is not 20");
	auto constexpr FAnimationState_FullyBlendedNotify_Offset = offsetof(FAnimationState, FullyBlendedNotify);
	static_assert(FAnimationState_FullyBlendedNotify_Offset == 0x24, "FAnimationState::FullyBlendedNotify offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
