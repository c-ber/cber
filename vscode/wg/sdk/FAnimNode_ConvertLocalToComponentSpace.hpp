#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_ConvertLocalToComponentSpace // Size: 0x48
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink LocalPose; /* Ofs: 0x30 Size: 0x18 StructProperty Engine.AnimNode_ConvertLocalToComponentSpace.LocalPose */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_ConvertLocalToComponentSpace = sizeof(FAnimNode_ConvertLocalToComponentSpace); // 72
    static_assert(sizeof(FAnimNode_ConvertLocalToComponentSpace) == 0x48, "Size of FAnimNode_ConvertLocalToComponentSpace is not correct.");
	auto constexpr FAnimNode_ConvertLocalToComponentSpace_LocalPose_Offset = offsetof(FAnimNode_ConvertLocalToComponentSpace, LocalPose);
	static_assert(FAnimNode_ConvertLocalToComponentSpace_LocalPose_Offset == 0x30, "FAnimNode_ConvertLocalToComponentSpace::LocalPose offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
