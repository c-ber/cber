#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_LegIK // Size: 0x98
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    float ReachPrecision; /* Ofs: 0x70 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_LegIK.ReachPrecision */
    int32_t MaxIterations; /* Ofs: 0x74 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_LegIK.MaxIterations */
    TArray<struct FAnimLegIKDefinition> LegsDefinition; /* Ofs: 0x78 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_LegIK.LegsDefinition */
    TArray<struct FAnimLegIKData> LegsData; /* Ofs: 0x88 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_LegIK.LegsData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_LegIK = sizeof(FAnimNode_LegIK); // 152
    static_assert(sizeof(FAnimNode_LegIK) == 0x98, "Size of FAnimNode_LegIK is not correct.");
	auto constexpr FAnimNode_LegIK_ReachPrecision_Offset = offsetof(FAnimNode_LegIK, ReachPrecision);
	static_assert(FAnimNode_LegIK_ReachPrecision_Offset == 0x70, "FAnimNode_LegIK::ReachPrecision offset is not 70");
	auto constexpr FAnimNode_LegIK_MaxIterations_Offset = offsetof(FAnimNode_LegIK, MaxIterations);
	static_assert(FAnimNode_LegIK_MaxIterations_Offset == 0x74, "FAnimNode_LegIK::MaxIterations offset is not 74");
	auto constexpr FAnimNode_LegIK_LegsDefinition_Offset = offsetof(FAnimNode_LegIK, LegsDefinition);
	static_assert(FAnimNode_LegIK_LegsDefinition_Offset == 0x78, "FAnimNode_LegIK::LegsDefinition offset is not 78");
	auto constexpr FAnimNode_LegIK_LegsData_Offset = offsetof(FAnimNode_LegIK, LegsData);
	static_assert(FAnimNode_LegIK_LegsData_Offset == 0x88, "FAnimNode_LegIK::LegsData offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
