#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SaveCachedPose // Size: 0xA8
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink Pose; /* Ofs: 0x30 Size: 0x18 StructProperty Engine.AnimNode_SaveCachedPose.Pose */
    FName CachePoseName; /* Ofs: 0x48 Size: 0x8 NameProperty Engine.AnimNode_SaveCachedPose.CachePoseName */
    float GlobalWeight; /* Ofs: 0x50 Size: 0x4 FloatProperty Engine.AnimNode_SaveCachedPose.GlobalWeight */
    uint8_t UnknownData54[0x54];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SaveCachedPose = sizeof(FAnimNode_SaveCachedPose); // 168
    static_assert(sizeof(FAnimNode_SaveCachedPose) == 0xA8, "Size of FAnimNode_SaveCachedPose is not correct.");
	auto constexpr FAnimNode_SaveCachedPose_Pose_Offset = offsetof(FAnimNode_SaveCachedPose, Pose);
	static_assert(FAnimNode_SaveCachedPose_Pose_Offset == 0x30, "FAnimNode_SaveCachedPose::Pose offset is not 30");
	auto constexpr FAnimNode_SaveCachedPose_CachePoseName_Offset = offsetof(FAnimNode_SaveCachedPose, CachePoseName);
	static_assert(FAnimNode_SaveCachedPose_CachePoseName_Offset == 0x48, "FAnimNode_SaveCachedPose::CachePoseName offset is not 48");
	auto constexpr FAnimNode_SaveCachedPose_GlobalWeight_Offset = offsetof(FAnimNode_SaveCachedPose, GlobalWeight);
	static_assert(FAnimNode_SaveCachedPose_GlobalWeight_Offset == 0x50, "FAnimNode_SaveCachedPose::GlobalWeight offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
