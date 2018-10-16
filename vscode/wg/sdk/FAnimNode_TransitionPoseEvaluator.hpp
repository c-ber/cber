#pragma once
#include "FAnimNode_Base.hpp"
#include "EEvaluatorDataSource.hpp"
#include "EEvaluatorMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_TransitionPoseEvaluator // Size: 0x78
 : public FAnimNode_Base // Size: 0x30
{
public:
    TEnumAsByte<enum EEvaluatorDataSource> DataSource; /* Ofs: 0x30 Size: 0x1 ByteProperty Engine.AnimNode_TransitionPoseEvaluator.DataSource */
    TEnumAsByte<enum EEvaluatorMode> EvaluatorMode; /* Ofs: 0x31 Size: 0x1 ByteProperty Engine.AnimNode_TransitionPoseEvaluator.EvaluatorMode */
    uint8_t UnknownData32[0x2];
    int32_t FramesToCachePose; /* Ofs: 0x34 Size: 0x4 IntProperty Engine.AnimNode_TransitionPoseEvaluator.FramesToCachePose */
    uint8_t UnknownData38[0x38];
    int32_t CacheFramesRemaining; /* Ofs: 0x70 Size: 0x4 IntProperty Engine.AnimNode_TransitionPoseEvaluator.CacheFramesRemaining */
    uint8_t UnknownData74[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_TransitionPoseEvaluator = sizeof(FAnimNode_TransitionPoseEvaluator); // 120
    static_assert(sizeof(FAnimNode_TransitionPoseEvaluator) == 0x78, "Size of FAnimNode_TransitionPoseEvaluator is not correct.");
	auto constexpr FAnimNode_TransitionPoseEvaluator_DataSource_Offset = offsetof(FAnimNode_TransitionPoseEvaluator, DataSource);
	static_assert(FAnimNode_TransitionPoseEvaluator_DataSource_Offset == 0x30, "FAnimNode_TransitionPoseEvaluator::DataSource offset is not 30");
	auto constexpr FAnimNode_TransitionPoseEvaluator_EvaluatorMode_Offset = offsetof(FAnimNode_TransitionPoseEvaluator, EvaluatorMode);
	static_assert(FAnimNode_TransitionPoseEvaluator_EvaluatorMode_Offset == 0x31, "FAnimNode_TransitionPoseEvaluator::EvaluatorMode offset is not 31");
	auto constexpr FAnimNode_TransitionPoseEvaluator_FramesToCachePose_Offset = offsetof(FAnimNode_TransitionPoseEvaluator, FramesToCachePose);
	static_assert(FAnimNode_TransitionPoseEvaluator_FramesToCachePose_Offset == 0x34, "FAnimNode_TransitionPoseEvaluator::FramesToCachePose offset is not 34");
	auto constexpr FAnimNode_TransitionPoseEvaluator_CacheFramesRemaining_Offset = offsetof(FAnimNode_TransitionPoseEvaluator, CacheFramesRemaining);
	static_assert(FAnimNode_TransitionPoseEvaluator_CacheFramesRemaining_Offset == 0x70, "FAnimNode_TransitionPoseEvaluator::CacheFramesRemaining offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
