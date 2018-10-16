#pragma once
#include "FAnimNode_Base.hpp"
#include "FComponentSpacePoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_ConvertComponentToLocalSpace // Size: 0x48
 : public FAnimNode_Base // Size: 0x30
{
public:
    FComponentSpacePoseLink ComponentPose; /* Ofs: 0x30 Size: 0x18 StructProperty Engine.AnimNode_ConvertComponentToLocalSpace.ComponentPose */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_ConvertComponentToLocalSpace = sizeof(FAnimNode_ConvertComponentToLocalSpace); // 72
    static_assert(sizeof(FAnimNode_ConvertComponentToLocalSpace) == 0x48, "Size of FAnimNode_ConvertComponentToLocalSpace is not correct.");
	auto constexpr FAnimNode_ConvertComponentToLocalSpace_ComponentPose_Offset = offsetof(FAnimNode_ConvertComponentToLocalSpace, ComponentPose);
	static_assert(FAnimNode_ConvertComponentToLocalSpace_ComponentPose_Offset == 0x30, "FAnimNode_ConvertComponentToLocalSpace::ComponentPose offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
