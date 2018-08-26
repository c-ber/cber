#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBakedAnimationStateMachine // Size: 0x30
{
public:
    FName MachineName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BakedAnimationStateMachine.MachineName */
    int32_t InitialState; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.BakedAnimationStateMachine.InitialState */
    uint8_t UnknownDataC[0x4];
    TArray<struct FBakedAnimationState> States; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.BakedAnimationStateMachine.States */
    TArray<struct FAnimationTransitionBetweenStates> Transitions; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.BakedAnimationStateMachine.Transitions */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBakedAnimationStateMachine = sizeof(FBakedAnimationStateMachine); // 48
    static_assert(sizeof(FBakedAnimationStateMachine) == 0x30, "Size of FBakedAnimationStateMachine is not correct.");
	auto constexpr FBakedAnimationStateMachine_MachineName_Offset = offsetof(FBakedAnimationStateMachine, MachineName);
	static_assert(FBakedAnimationStateMachine_MachineName_Offset == 0x0, "FBakedAnimationStateMachine::MachineName offset is not 0");
	auto constexpr FBakedAnimationStateMachine_InitialState_Offset = offsetof(FBakedAnimationStateMachine, InitialState);
	static_assert(FBakedAnimationStateMachine_InitialState_Offset == 0x8, "FBakedAnimationStateMachine::InitialState offset is not 8");
	auto constexpr FBakedAnimationStateMachine_States_Offset = offsetof(FBakedAnimationStateMachine, States);
	static_assert(FBakedAnimationStateMachine_States_Offset == 0x10, "FBakedAnimationStateMachine::States offset is not 10");
	auto constexpr FBakedAnimationStateMachine_Transitions_Offset = offsetof(FBakedAnimationStateMachine, Transitions);
	static_assert(FBakedAnimationStateMachine_Transitions_Offset == 0x20, "FBakedAnimationStateMachine::Transitions offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
