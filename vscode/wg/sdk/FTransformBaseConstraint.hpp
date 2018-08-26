#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTransformBaseConstraint // Size: 0x10
{
public:
    TArray<struct FRigTransformConstraint> TransformConstraints; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.TransformBaseConstraint.TransformConstraints */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTransformBaseConstraint = sizeof(FTransformBaseConstraint); // 16
    static_assert(sizeof(FTransformBaseConstraint) == 0x10, "Size of FTransformBaseConstraint is not correct.");
	auto constexpr FTransformBaseConstraint_TransformConstraints_Offset = offsetof(FTransformBaseConstraint, TransformConstraints);
	static_assert(FTransformBaseConstraint_TransformConstraints_Offset == 0x0, "FTransformBaseConstraint::TransformConstraints offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
