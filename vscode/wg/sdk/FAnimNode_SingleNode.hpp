#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SingleNode // Size: 0x58
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink SourcePose; /* Ofs: 0x30 Size: 0x18 StructProperty Engine.AnimNode_SingleNode.SourcePose */
    uint8_t UnknownData48[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SingleNode = sizeof(FAnimNode_SingleNode); // 88
    static_assert(sizeof(FAnimNode_SingleNode) == 0x58, "Size of FAnimNode_SingleNode is not correct.");
	auto constexpr FAnimNode_SingleNode_SourcePose_Offset = offsetof(FAnimNode_SingleNode, SourcePose);
	static_assert(FAnimNode_SingleNode_SourcePose_Offset == 0x30, "FAnimNode_SingleNode::SourcePose offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
