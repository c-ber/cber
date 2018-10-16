#pragma once
#include "FAnimationStateBase.hpp"
#include "EAlphaBlendOption.hpp"
#include "ETransitionLogicType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimationTransitionBetweenStates // Size: 0x40
 : public FAnimationStateBase // Size: 0x8
{
public:
    int32_t PreviousState; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.AnimationTransitionBetweenStates.PreviousState */
    int32_t NextState; /* Ofs: 0xC Size: 0x4 IntProperty Engine.AnimationTransitionBetweenStates.NextState */
    float CrossfadeDuration; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.AnimationTransitionBetweenStates.CrossfadeDuration */
    int32_t StartNotify; /* Ofs: 0x14 Size: 0x4 IntProperty Engine.AnimationTransitionBetweenStates.StartNotify */
    int32_t EndNotify; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.AnimationTransitionBetweenStates.EndNotify */
    int32_t InterruptNotify; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.AnimationTransitionBetweenStates.InterruptNotify */
    TEnumAsByte<enum EAlphaBlendOption> BlendMode; /* Ofs: 0x20 Size: 0x1 EnumProperty Engine.AnimationTransitionBetweenStates.BlendMode */
    uint8_t UnknownData21[0x7];
    ExternalPtr<struct UCurveFloat> CustomCurve; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.AnimationTransitionBetweenStates.CustomCurve */
    ExternalPtr<struct UBlendProfile> BlendProfile; /* Ofs: 0x30 Size: 0x8 ObjectProperty Engine.AnimationTransitionBetweenStates.BlendProfile */
    TEnumAsByte<enum ETransitionLogicType> LogicType; /* Ofs: 0x38 Size: 0x1 ByteProperty Engine.AnimationTransitionBetweenStates.LogicType */
    uint8_t UnknownData39[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimationTransitionBetweenStates = sizeof(FAnimationTransitionBetweenStates); // 64
    static_assert(sizeof(FAnimationTransitionBetweenStates) == 0x40, "Size of FAnimationTransitionBetweenStates is not correct.");
	auto constexpr FAnimationTransitionBetweenStates_PreviousState_Offset = offsetof(FAnimationTransitionBetweenStates, PreviousState);
	static_assert(FAnimationTransitionBetweenStates_PreviousState_Offset == 0x8, "FAnimationTransitionBetweenStates::PreviousState offset is not 8");
	auto constexpr FAnimationTransitionBetweenStates_NextState_Offset = offsetof(FAnimationTransitionBetweenStates, NextState);
	static_assert(FAnimationTransitionBetweenStates_NextState_Offset == 0xc, "FAnimationTransitionBetweenStates::NextState offset is not c");
	auto constexpr FAnimationTransitionBetweenStates_CrossfadeDuration_Offset = offsetof(FAnimationTransitionBetweenStates, CrossfadeDuration);
	static_assert(FAnimationTransitionBetweenStates_CrossfadeDuration_Offset == 0x10, "FAnimationTransitionBetweenStates::CrossfadeDuration offset is not 10");
	auto constexpr FAnimationTransitionBetweenStates_StartNotify_Offset = offsetof(FAnimationTransitionBetweenStates, StartNotify);
	static_assert(FAnimationTransitionBetweenStates_StartNotify_Offset == 0x14, "FAnimationTransitionBetweenStates::StartNotify offset is not 14");
	auto constexpr FAnimationTransitionBetweenStates_EndNotify_Offset = offsetof(FAnimationTransitionBetweenStates, EndNotify);
	static_assert(FAnimationTransitionBetweenStates_EndNotify_Offset == 0x18, "FAnimationTransitionBetweenStates::EndNotify offset is not 18");
	auto constexpr FAnimationTransitionBetweenStates_InterruptNotify_Offset = offsetof(FAnimationTransitionBetweenStates, InterruptNotify);
	static_assert(FAnimationTransitionBetweenStates_InterruptNotify_Offset == 0x1c, "FAnimationTransitionBetweenStates::InterruptNotify offset is not 1c");
	auto constexpr FAnimationTransitionBetweenStates_BlendMode_Offset = offsetof(FAnimationTransitionBetweenStates, BlendMode);
	static_assert(FAnimationTransitionBetweenStates_BlendMode_Offset == 0x20, "FAnimationTransitionBetweenStates::BlendMode offset is not 20");
	auto constexpr FAnimationTransitionBetweenStates_CustomCurve_Offset = offsetof(FAnimationTransitionBetweenStates, CustomCurve);
	static_assert(FAnimationTransitionBetweenStates_CustomCurve_Offset == 0x28, "FAnimationTransitionBetweenStates::CustomCurve offset is not 28");
	auto constexpr FAnimationTransitionBetweenStates_BlendProfile_Offset = offsetof(FAnimationTransitionBetweenStates, BlendProfile);
	static_assert(FAnimationTransitionBetweenStates_BlendProfile_Offset == 0x30, "FAnimationTransitionBetweenStates::BlendProfile offset is not 30");
	auto constexpr FAnimationTransitionBetweenStates_LogicType_Offset = offsetof(FAnimationTransitionBetweenStates, LogicType);
	static_assert(FAnimationTransitionBetweenStates_LogicType_Offset == 0x38, "FAnimationTransitionBetweenStates::LogicType offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
