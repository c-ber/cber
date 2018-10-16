#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_UseCachedPose // Size: 0x50
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink LinkToCachingNode; /* Ofs: 0x30 Size: 0x18 StructProperty Engine.AnimNode_UseCachedPose.LinkToCachingNode */
    FName CachePoseName; /* Ofs: 0x48 Size: 0x8 NameProperty Engine.AnimNode_UseCachedPose.CachePoseName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_UseCachedPose = sizeof(FAnimNode_UseCachedPose); // 80
    static_assert(sizeof(FAnimNode_UseCachedPose) == 0x50, "Size of FAnimNode_UseCachedPose is not correct.");
	auto constexpr FAnimNode_UseCachedPose_LinkToCachingNode_Offset = offsetof(FAnimNode_UseCachedPose, LinkToCachingNode);
	static_assert(FAnimNode_UseCachedPose_LinkToCachingNode_Offset == 0x30, "FAnimNode_UseCachedPose::LinkToCachingNode offset is not 30");
	auto constexpr FAnimNode_UseCachedPose_CachePoseName_Offset = offsetof(FAnimNode_UseCachedPose, CachePoseName);
	static_assert(FAnimNode_UseCachedPose_CachePoseName_Offset == 0x48, "FAnimNode_UseCachedPose::CachePoseName offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
