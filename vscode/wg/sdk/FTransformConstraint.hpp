#pragma once
#include "FConstraintDescription.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTransformConstraint // Size: 0x28
{
public:
    FConstraintDescription Operator; /* Ofs: 0x0 Size: 0xD StructProperty AnimationCore.TransformConstraint.Operator */
    uint8_t UnknownDataD[0x3];
    FName SourceNode; /* Ofs: 0x10 Size: 0x8 NameProperty AnimationCore.TransformConstraint.SourceNode */
    FName TargetNode; /* Ofs: 0x18 Size: 0x8 NameProperty AnimationCore.TransformConstraint.TargetNode */
    float Weight; /* Ofs: 0x20 Size: 0x4 FloatProperty AnimationCore.TransformConstraint.Weight */
    bool bMaintainOffset; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty AnimationCore.TransformConstraint.bMaintainOffset */
    uint8_t UnknownData25[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTransformConstraint = sizeof(FTransformConstraint); // 40
    static_assert(sizeof(FTransformConstraint) == 0x28, "Size of FTransformConstraint is not correct.");
	auto constexpr FTransformConstraint_Operator_Offset = offsetof(FTransformConstraint, Operator);
	static_assert(FTransformConstraint_Operator_Offset == 0x0, "FTransformConstraint::Operator offset is not 0");
	auto constexpr FTransformConstraint_SourceNode_Offset = offsetof(FTransformConstraint, SourceNode);
	static_assert(FTransformConstraint_SourceNode_Offset == 0x10, "FTransformConstraint::SourceNode offset is not 10");
	auto constexpr FTransformConstraint_TargetNode_Offset = offsetof(FTransformConstraint, TargetNode);
	static_assert(FTransformConstraint_TargetNode_Offset == 0x18, "FTransformConstraint::TargetNode offset is not 18");
	auto constexpr FTransformConstraint_Weight_Offset = offsetof(FTransformConstraint, Weight);
	static_assert(FTransformConstraint_Weight_Offset == 0x20, "FTransformConstraint::Weight offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
