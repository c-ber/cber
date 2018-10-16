#pragma once
#include "FAnimNode_AssetPlayerBase.hpp"
#include "ESequenceEvalReinit.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SequenceEvaluator // Size: 0x70
 : public FAnimNode_AssetPlayerBase // Size: 0x58
{
public:
    ExternalPtr<struct UAnimSequenceBase> Sequence; /* Ofs: 0x58 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_SequenceEvaluator.Sequence */
    float ExplicitTime; /* Ofs: 0x60 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SequenceEvaluator.ExplicitTime */
    bool bShouldLoop; /* Ofs: 0x64 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SequenceEvaluator.bShouldLoop */
    bool bTeleportToExplicitTime; /* Ofs: 0x65 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SequenceEvaluator.bTeleportToExplicitTime */
    uint8_t UnknownData66[0x2];
    float StartPosition; /* Ofs: 0x68 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_SequenceEvaluator.StartPosition */
    TEnumAsByte<enum ESequenceEvalReinit> ReinitializationBehavior; /* Ofs: 0x6C Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_SequenceEvaluator.ReinitializationBehavior */
    bool bReinitialized; /* Ofs: 0x6D Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_SequenceEvaluator.bReinitialized */
    uint8_t UnknownData6E[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SequenceEvaluator = sizeof(FAnimNode_SequenceEvaluator); // 112
    static_assert(sizeof(FAnimNode_SequenceEvaluator) == 0x70, "Size of FAnimNode_SequenceEvaluator is not correct.");
	auto constexpr FAnimNode_SequenceEvaluator_Sequence_Offset = offsetof(FAnimNode_SequenceEvaluator, Sequence);
	static_assert(FAnimNode_SequenceEvaluator_Sequence_Offset == 0x58, "FAnimNode_SequenceEvaluator::Sequence offset is not 58");
	auto constexpr FAnimNode_SequenceEvaluator_ExplicitTime_Offset = offsetof(FAnimNode_SequenceEvaluator, ExplicitTime);
	static_assert(FAnimNode_SequenceEvaluator_ExplicitTime_Offset == 0x60, "FAnimNode_SequenceEvaluator::ExplicitTime offset is not 60");
	auto constexpr FAnimNode_SequenceEvaluator_StartPosition_Offset = offsetof(FAnimNode_SequenceEvaluator, StartPosition);
	static_assert(FAnimNode_SequenceEvaluator_StartPosition_Offset == 0x68, "FAnimNode_SequenceEvaluator::StartPosition offset is not 68");
	auto constexpr FAnimNode_SequenceEvaluator_ReinitializationBehavior_Offset = offsetof(FAnimNode_SequenceEvaluator, ReinitializationBehavior);
	static_assert(FAnimNode_SequenceEvaluator_ReinitializationBehavior_Offset == 0x6c, "FAnimNode_SequenceEvaluator::ReinitializationBehavior offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
