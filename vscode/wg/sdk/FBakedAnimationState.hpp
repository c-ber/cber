#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBakedAnimationState // Size: 0x48
{
public:
    FName StateName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BakedAnimationState.StateName */
    TArray<struct FBakedStateExitTransition> Transitions; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.BakedAnimationState.Transitions */
    int32_t StateRootNodeIndex; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.BakedAnimationState.StateRootNodeIndex */
    int32_t StartNotify; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.BakedAnimationState.StartNotify */
    int32_t EndNotify; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.BakedAnimationState.EndNotify */
    int32_t FullyBlendedNotify; /* Ofs: 0x24 Size: 0x4 IntProperty Engine.BakedAnimationState.FullyBlendedNotify */
    bool bIsAConduit; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty Engine.BakedAnimationState.bIsAConduit */
    uint8_t UnknownData29[0x3];
    int32_t EntryRuleNodeIndex; /* Ofs: 0x2C Size: 0x4 IntProperty Engine.BakedAnimationState.EntryRuleNodeIndex */
    TArray<int32_t> PlayerNodeIndices; /* Ofs: 0x30 Size: 0x10 ArrayProperty Engine.BakedAnimationState.PlayerNodeIndices */
    bool bAlwaysResetOnEntry; /* Ofs: 0x40 Size: 0x1 BitMask: 01 BoolProperty Engine.BakedAnimationState.bAlwaysResetOnEntry */
    uint8_t UnknownData41[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBakedAnimationState = sizeof(FBakedAnimationState); // 72
    static_assert(sizeof(FBakedAnimationState) == 0x48, "Size of FBakedAnimationState is not correct.");
	auto constexpr FBakedAnimationState_StateName_Offset = offsetof(FBakedAnimationState, StateName);
	static_assert(FBakedAnimationState_StateName_Offset == 0x0, "FBakedAnimationState::StateName offset is not 0");
	auto constexpr FBakedAnimationState_Transitions_Offset = offsetof(FBakedAnimationState, Transitions);
	static_assert(FBakedAnimationState_Transitions_Offset == 0x8, "FBakedAnimationState::Transitions offset is not 8");
	auto constexpr FBakedAnimationState_StateRootNodeIndex_Offset = offsetof(FBakedAnimationState, StateRootNodeIndex);
	static_assert(FBakedAnimationState_StateRootNodeIndex_Offset == 0x18, "FBakedAnimationState::StateRootNodeIndex offset is not 18");
	auto constexpr FBakedAnimationState_StartNotify_Offset = offsetof(FBakedAnimationState, StartNotify);
	static_assert(FBakedAnimationState_StartNotify_Offset == 0x1c, "FBakedAnimationState::StartNotify offset is not 1c");
	auto constexpr FBakedAnimationState_EndNotify_Offset = offsetof(FBakedAnimationState, EndNotify);
	static_assert(FBakedAnimationState_EndNotify_Offset == 0x20, "FBakedAnimationState::EndNotify offset is not 20");
	auto constexpr FBakedAnimationState_FullyBlendedNotify_Offset = offsetof(FBakedAnimationState, FullyBlendedNotify);
	static_assert(FBakedAnimationState_FullyBlendedNotify_Offset == 0x24, "FBakedAnimationState::FullyBlendedNotify offset is not 24");
	auto constexpr FBakedAnimationState_EntryRuleNodeIndex_Offset = offsetof(FBakedAnimationState, EntryRuleNodeIndex);
	static_assert(FBakedAnimationState_EntryRuleNodeIndex_Offset == 0x2c, "FBakedAnimationState::EntryRuleNodeIndex offset is not 2c");
	auto constexpr FBakedAnimationState_PlayerNodeIndices_Offset = offsetof(FBakedAnimationState, PlayerNodeIndices);
	static_assert(FBakedAnimationState_PlayerNodeIndices_Offset == 0x30, "FBakedAnimationState::PlayerNodeIndices offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
