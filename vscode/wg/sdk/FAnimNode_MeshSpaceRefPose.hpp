#pragma once
#include "FAnimNode_Base.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_MeshSpaceRefPose // Size: 0x30
 : public FAnimNode_Base // Size: 0x30
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_MeshSpaceRefPose = sizeof(FAnimNode_MeshSpaceRefPose); // 48
    static_assert(sizeof(FAnimNode_MeshSpaceRefPose) == 0x30, "Size of FAnimNode_MeshSpaceRefPose is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
