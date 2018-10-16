#pragma once
#include "EConstraintTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRigTransformConstraint // Size: 0x18
{
public:
    TEnumAsByte<enum EConstraintTransform> TranformType; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.RigTransformConstraint.TranformType */
    uint8_t UnknownData1[0x7];
    FName ParentSpace; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.RigTransformConstraint.ParentSpace */
    float Weight; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.RigTransformConstraint.Weight */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRigTransformConstraint = sizeof(FRigTransformConstraint); // 24
    static_assert(sizeof(FRigTransformConstraint) == 0x18, "Size of FRigTransformConstraint is not correct.");
	auto constexpr FRigTransformConstraint_TranformType_Offset = offsetof(FRigTransformConstraint, TranformType);
	static_assert(FRigTransformConstraint_TranformType_Offset == 0x0, "FRigTransformConstraint::TranformType offset is not 0");
	auto constexpr FRigTransformConstraint_ParentSpace_Offset = offsetof(FRigTransformConstraint, ParentSpace);
	static_assert(FRigTransformConstraint_ParentSpace_Offset == 0x8, "FRigTransformConstraint::ParentSpace offset is not 8");
	auto constexpr FRigTransformConstraint_Weight_Offset = offsetof(FRigTransformConstraint, Weight);
	static_assert(FRigTransformConstraint_Weight_Offset == 0x10, "FRigTransformConstraint::Weight offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
