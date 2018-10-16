#pragma once
#include "FBoneReference.hpp"
#include "FAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReferenceBoneFrame // Size: 0x28
{
public:
    FBoneReference Bone; /* Ofs: 0x0 Size: 0x18 StructProperty AnimGraphRuntime.ReferenceBoneFrame.Bone */
    FAxis Axis; /* Ofs: 0x18 Size: 0x10 StructProperty AnimGraphRuntime.ReferenceBoneFrame.Axis */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReferenceBoneFrame = sizeof(FReferenceBoneFrame); // 40
    static_assert(sizeof(FReferenceBoneFrame) == 0x28, "Size of FReferenceBoneFrame is not correct.");
	auto constexpr FReferenceBoneFrame_Bone_Offset = offsetof(FReferenceBoneFrame, Bone);
	static_assert(FReferenceBoneFrame_Bone_Offset == 0x0, "FReferenceBoneFrame::Bone offset is not 0");
	auto constexpr FReferenceBoneFrame_Axis_Offset = offsetof(FReferenceBoneFrame, Axis);
	static_assert(FReferenceBoneFrame_Axis_Offset == 0x18, "FReferenceBoneFrame::Axis offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
