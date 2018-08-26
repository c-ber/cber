#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBakedStateExitTransition // Size: 0x20
{
public:
    int32_t CanTakeDelegateIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.BakedStateExitTransition.CanTakeDelegateIndex */
    int32_t CustomResultNodeIndex; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.BakedStateExitTransition.CustomResultNodeIndex */
    int32_t TransitionIndex; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.BakedStateExitTransition.TransitionIndex */
    bool bDesiredTransitionReturnValue; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.BakedStateExitTransition.bDesiredTransitionReturnValue */
    bool bAutomaticRemainingTimeRule; /* Ofs: 0xD Size: 0x1 BitMask: 01 BoolProperty Engine.BakedStateExitTransition.bAutomaticRemainingTimeRule */
    uint8_t UnknownDataE[0x2];
    TArray<int32_t> PoseEvaluatorLinks; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.BakedStateExitTransition.PoseEvaluatorLinks */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBakedStateExitTransition = sizeof(FBakedStateExitTransition); // 32
    static_assert(sizeof(FBakedStateExitTransition) == 0x20, "Size of FBakedStateExitTransition is not correct.");
	auto constexpr FBakedStateExitTransition_CanTakeDelegateIndex_Offset = offsetof(FBakedStateExitTransition, CanTakeDelegateIndex);
	static_assert(FBakedStateExitTransition_CanTakeDelegateIndex_Offset == 0x0, "FBakedStateExitTransition::CanTakeDelegateIndex offset is not 0");
	auto constexpr FBakedStateExitTransition_CustomResultNodeIndex_Offset = offsetof(FBakedStateExitTransition, CustomResultNodeIndex);
	static_assert(FBakedStateExitTransition_CustomResultNodeIndex_Offset == 0x4, "FBakedStateExitTransition::CustomResultNodeIndex offset is not 4");
	auto constexpr FBakedStateExitTransition_TransitionIndex_Offset = offsetof(FBakedStateExitTransition, TransitionIndex);
	static_assert(FBakedStateExitTransition_TransitionIndex_Offset == 0x8, "FBakedStateExitTransition::TransitionIndex offset is not 8");
	auto constexpr FBakedStateExitTransition_PoseEvaluatorLinks_Offset = offsetof(FBakedStateExitTransition, PoseEvaluatorLinks);
	static_assert(FBakedStateExitTransition_PoseEvaluatorLinks_Offset == 0x10, "FBakedStateExitTransition::PoseEvaluatorLinks offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
