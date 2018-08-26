#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FReferenceBoneFrame.hpp"
#include "FAxis.hpp"
#include "FAnimCurveParam.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_TwistCorrectiveNode // Size: 0xF8
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FReferenceBoneFrame BaseFrame; /* Ofs: 0x70 Size: 0x28 StructProperty AnimGraphRuntime.AnimNode_TwistCorrectiveNode.BaseFrame */
    FReferenceBoneFrame TwistFrame; /* Ofs: 0x98 Size: 0x28 StructProperty AnimGraphRuntime.AnimNode_TwistCorrectiveNode.TwistFrame */
    FAxis TwistPlaneNormalAxis; /* Ofs: 0xC0 Size: 0x10 StructProperty AnimGraphRuntime.AnimNode_TwistCorrectiveNode.TwistPlaneNormalAxis */
    float RangeMax; /* Ofs: 0xD0 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_TwistCorrectiveNode.RangeMax */
    float RemappedMin; /* Ofs: 0xD4 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_TwistCorrectiveNode.RemappedMin */
    float RemappedMax; /* Ofs: 0xD8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_TwistCorrectiveNode.RemappedMax */
    uint8_t UnknownDataDC[0x4];
    FAnimCurveParam Curve; /* Ofs: 0xE0 Size: 0x10 StructProperty AnimGraphRuntime.AnimNode_TwistCorrectiveNode.Curve */
    uint8_t UnknownDataF0[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_TwistCorrectiveNode = sizeof(FAnimNode_TwistCorrectiveNode); // 248
    static_assert(sizeof(FAnimNode_TwistCorrectiveNode) == 0xF8, "Size of FAnimNode_TwistCorrectiveNode is not correct.");
	auto constexpr FAnimNode_TwistCorrectiveNode_BaseFrame_Offset = offsetof(FAnimNode_TwistCorrectiveNode, BaseFrame);
	static_assert(FAnimNode_TwistCorrectiveNode_BaseFrame_Offset == 0x70, "FAnimNode_TwistCorrectiveNode::BaseFrame offset is not 70");
	auto constexpr FAnimNode_TwistCorrectiveNode_TwistFrame_Offset = offsetof(FAnimNode_TwistCorrectiveNode, TwistFrame);
	static_assert(FAnimNode_TwistCorrectiveNode_TwistFrame_Offset == 0x98, "FAnimNode_TwistCorrectiveNode::TwistFrame offset is not 98");
	auto constexpr FAnimNode_TwistCorrectiveNode_TwistPlaneNormalAxis_Offset = offsetof(FAnimNode_TwistCorrectiveNode, TwistPlaneNormalAxis);
	static_assert(FAnimNode_TwistCorrectiveNode_TwistPlaneNormalAxis_Offset == 0xc0, "FAnimNode_TwistCorrectiveNode::TwistPlaneNormalAxis offset is not c0");
	auto constexpr FAnimNode_TwistCorrectiveNode_RangeMax_Offset = offsetof(FAnimNode_TwistCorrectiveNode, RangeMax);
	static_assert(FAnimNode_TwistCorrectiveNode_RangeMax_Offset == 0xd0, "FAnimNode_TwistCorrectiveNode::RangeMax offset is not d0");
	auto constexpr FAnimNode_TwistCorrectiveNode_RemappedMin_Offset = offsetof(FAnimNode_TwistCorrectiveNode, RemappedMin);
	static_assert(FAnimNode_TwistCorrectiveNode_RemappedMin_Offset == 0xd4, "FAnimNode_TwistCorrectiveNode::RemappedMin offset is not d4");
	auto constexpr FAnimNode_TwistCorrectiveNode_RemappedMax_Offset = offsetof(FAnimNode_TwistCorrectiveNode, RemappedMax);
	static_assert(FAnimNode_TwistCorrectiveNode_RemappedMax_Offset == 0xd8, "FAnimNode_TwistCorrectiveNode::RemappedMax offset is not d8");
	auto constexpr FAnimNode_TwistCorrectiveNode_Curve_Offset = offsetof(FAnimNode_TwistCorrectiveNode, Curve);
	static_assert(FAnimNode_TwistCorrectiveNode_Curve_Offset == 0xe0, "FAnimNode_TwistCorrectiveNode::Curve offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
