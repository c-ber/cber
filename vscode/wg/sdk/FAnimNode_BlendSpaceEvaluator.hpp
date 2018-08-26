#pragma once
#include "FAnimNode_BlendSpacePlayer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_BlendSpaceEvaluator // Size: 0x130
 : public FAnimNode_BlendSpacePlayer // Size: 0x128
{
public:
    float NormalizedTime; /* Ofs: 0x128 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BlendSpaceEvaluator.NormalizedTime */
    uint8_t UnknownData12C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_BlendSpaceEvaluator = sizeof(FAnimNode_BlendSpaceEvaluator); // 304
    static_assert(sizeof(FAnimNode_BlendSpaceEvaluator) == 0x130, "Size of FAnimNode_BlendSpaceEvaluator is not correct.");
	auto constexpr FAnimNode_BlendSpaceEvaluator_NormalizedTime_Offset = offsetof(FAnimNode_BlendSpaceEvaluator, NormalizedTime);
	static_assert(FAnimNode_BlendSpaceEvaluator_NormalizedTime_Offset == 0x128, "FAnimNode_BlendSpaceEvaluator::NormalizedTime offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
