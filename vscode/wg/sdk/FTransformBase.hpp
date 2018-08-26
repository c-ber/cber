#pragma once
#include "FTransformBaseConstraint.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTransformBase // Size: 0x28
{
public:
    FName Node; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.TransformBase.Node */
    FTransformBaseConstraint Constraints[2]; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.TransformBase.Constraints */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTransformBase = sizeof(FTransformBase); // 40
    static_assert(sizeof(FTransformBase) == 0x28, "Size of FTransformBase is not correct.");
	auto constexpr FTransformBase_Node_Offset = offsetof(FTransformBase, Node);
	static_assert(FTransformBase_Node_Offset == 0x0, "FTransformBase::Node offset is not 0");
	auto constexpr FTransformBase_Constraints_Offset = offsetof(FTransformBase, Constraints);
	static_assert(FTransformBase_Constraints_Offset == 0x8, "FTransformBase::Constraints offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
