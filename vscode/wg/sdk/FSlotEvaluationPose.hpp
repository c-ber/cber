#pragma once
#include "EAdditiveAnimationType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSlotEvaluationPose // Size: 0x40
{
public:
    TEnumAsByte<enum EAdditiveAnimationType> AdditiveType; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.SlotEvaluationPose.AdditiveType */
    uint8_t UnknownData1[0x3];
    float Weight; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.SlotEvaluationPose.Weight */
    uint8_t UnknownData8[0x38];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSlotEvaluationPose = sizeof(FSlotEvaluationPose); // 64
    static_assert(sizeof(FSlotEvaluationPose) == 0x40, "Size of FSlotEvaluationPose is not correct.");
	auto constexpr FSlotEvaluationPose_AdditiveType_Offset = offsetof(FSlotEvaluationPose, AdditiveType);
	static_assert(FSlotEvaluationPose_AdditiveType_Offset == 0x0, "FSlotEvaluationPose::AdditiveType offset is not 0");
	auto constexpr FSlotEvaluationPose_Weight_Offset = offsetof(FSlotEvaluationPose, Weight);
	static_assert(FSlotEvaluationPose_Weight_Offset == 0x4, "FSlotEvaluationPose::Weight offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
