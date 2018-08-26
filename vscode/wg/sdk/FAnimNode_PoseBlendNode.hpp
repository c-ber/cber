#pragma once
#include "FAnimNode_PoseHandler.hpp"
#include "FPoseLink.hpp"
#include "EAlphaBlendOption.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_PoseBlendNode // Size: 0xC8
 : public FAnimNode_PoseHandler // Size: 0xA0
{
public:
    FPoseLink SourcePose; /* Ofs: 0xA0 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_PoseBlendNode.SourcePose */
    TEnumAsByte<enum EAlphaBlendOption> BlendOption; /* Ofs: 0xB8 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_PoseBlendNode.BlendOption */
    uint8_t UnknownDataB9[0x7];
    ExternalPtr<struct UCurveFloat> CustomCurve; /* Ofs: 0xC0 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_PoseBlendNode.CustomCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_PoseBlendNode = sizeof(FAnimNode_PoseBlendNode); // 200
    static_assert(sizeof(FAnimNode_PoseBlendNode) == 0xC8, "Size of FAnimNode_PoseBlendNode is not correct.");
	auto constexpr FAnimNode_PoseBlendNode_SourcePose_Offset = offsetof(FAnimNode_PoseBlendNode, SourcePose);
	static_assert(FAnimNode_PoseBlendNode_SourcePose_Offset == 0xa0, "FAnimNode_PoseBlendNode::SourcePose offset is not a0");
	auto constexpr FAnimNode_PoseBlendNode_BlendOption_Offset = offsetof(FAnimNode_PoseBlendNode, BlendOption);
	static_assert(FAnimNode_PoseBlendNode_BlendOption_Offset == 0xb8, "FAnimNode_PoseBlendNode::BlendOption offset is not b8");
	auto constexpr FAnimNode_PoseBlendNode_CustomCurve_Offset = offsetof(FAnimNode_PoseBlendNode, CustomCurve);
	static_assert(FAnimNode_PoseBlendNode_CustomCurve_Offset == 0xc0, "FAnimNode_PoseBlendNode::CustomCurve offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
