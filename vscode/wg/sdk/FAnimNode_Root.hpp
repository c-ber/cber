#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_Root // Size: 0x48
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink Result; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_Root.Result */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_Root = sizeof(FAnimNode_Root); // 72
    static_assert(sizeof(FAnimNode_Root) == 0x48, "Size of FAnimNode_Root is not correct.");
	auto constexpr FAnimNode_Root_Result_Offset = offsetof(FAnimNode_Root, Result);
	static_assert(FAnimNode_Root_Result_Offset == 0x30, "FAnimNode_Root::Result offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
