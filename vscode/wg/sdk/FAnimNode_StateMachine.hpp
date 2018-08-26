#pragma once
#include "FAnimNode_Base.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_StateMachine // Size: 0xD8
 : public FAnimNode_Base // Size: 0x30
{
public:
    int32_t StateMachineIndexInClass; /* Ofs: 0x30 Size: 0x4 IntProperty Engine.AnimNode_StateMachine.StateMachineIndexInClass */
    int32_t MaxTransitionsPerFrame; /* Ofs: 0x34 Size: 0x4 IntProperty Engine.AnimNode_StateMachine.MaxTransitionsPerFrame */
    bool bSkipFirstUpdateTransition; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimNode_StateMachine.bSkipFirstUpdateTransition */
    uint8_t UnknownData39[0xF];
    int32_t CurrentState; /* Ofs: 0x48 Size: 0x4 IntProperty Engine.AnimNode_StateMachine.CurrentState */
    float ElapsedTime; /* Ofs: 0x4C Size: 0x4 FloatProperty Engine.AnimNode_StateMachine.ElapsedTime */
    uint8_t UnknownData50[0x88];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_StateMachine = sizeof(FAnimNode_StateMachine); // 216
    static_assert(sizeof(FAnimNode_StateMachine) == 0xD8, "Size of FAnimNode_StateMachine is not correct.");
	auto constexpr FAnimNode_StateMachine_StateMachineIndexInClass_Offset = offsetof(FAnimNode_StateMachine, StateMachineIndexInClass);
	static_assert(FAnimNode_StateMachine_StateMachineIndexInClass_Offset == 0x30, "FAnimNode_StateMachine::StateMachineIndexInClass offset is not 30");
	auto constexpr FAnimNode_StateMachine_MaxTransitionsPerFrame_Offset = offsetof(FAnimNode_StateMachine, MaxTransitionsPerFrame);
	static_assert(FAnimNode_StateMachine_MaxTransitionsPerFrame_Offset == 0x34, "FAnimNode_StateMachine::MaxTransitionsPerFrame offset is not 34");
	auto constexpr FAnimNode_StateMachine_CurrentState_Offset = offsetof(FAnimNode_StateMachine, CurrentState);
	static_assert(FAnimNode_StateMachine_CurrentState_Offset == 0x48, "FAnimNode_StateMachine::CurrentState offset is not 48");
	auto constexpr FAnimNode_StateMachine_ElapsedTime_Offset = offsetof(FAnimNode_StateMachine, ElapsedTime);
	static_assert(FAnimNode_StateMachine_ElapsedTime_Offset == 0x4c, "FAnimNode_StateMachine::ElapsedTime offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
