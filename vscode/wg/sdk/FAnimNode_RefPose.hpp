#pragma once
#include "FAnimNode_Base.hpp"
#include "ERefPoseType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_RefPose // Size: 0x38
 : public FAnimNode_Base // Size: 0x30
{
public:
    TEnumAsByte<enum ERefPoseType> RefPoseType; /* Ofs: 0x30 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_RefPose.RefPoseType */
    uint8_t UnknownData31[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_RefPose = sizeof(FAnimNode_RefPose); // 56
    static_assert(sizeof(FAnimNode_RefPose) == 0x38, "Size of FAnimNode_RefPose is not correct.");
	auto constexpr FAnimNode_RefPose_RefPoseType_Offset = offsetof(FAnimNode_RefPose, RefPoseType);
	static_assert(FAnimNode_RefPose_RefPoseType_Offset == 0x30, "FAnimNode_RefPose::RefPoseType offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
