#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInputBlendPose // Size: 0x10
{
public:
    TArray<struct FBranchFilter> BranchFilters; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.InputBlendPose.BranchFilters */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInputBlendPose = sizeof(FInputBlendPose); // 16
    static_assert(sizeof(FInputBlendPose) == 0x10, "Size of FInputBlendPose is not correct.");
	auto constexpr FInputBlendPose_BranchFilters_Offset = offsetof(FInputBlendPose, BranchFilters);
	static_assert(FInputBlendPose_BranchFilters_Offset == 0x0, "FInputBlendPose::BranchFilters offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
