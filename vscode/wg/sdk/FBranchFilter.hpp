#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBranchFilter // Size: 0x10
{
public:
    FName BoneName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BranchFilter.BoneName */
    int32_t BlendDepth; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.BranchFilter.BlendDepth */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBranchFilter = sizeof(FBranchFilter); // 16
    static_assert(sizeof(FBranchFilter) == 0x10, "Size of FBranchFilter is not correct.");
	auto constexpr FBranchFilter_BoneName_Offset = offsetof(FBranchFilter, BoneName);
	static_assert(FBranchFilter_BoneName_Offset == 0x0, "FBranchFilter::BoneName offset is not 0");
	auto constexpr FBranchFilter_BlendDepth_Offset = offsetof(FBranchFilter, BlendDepth);
	static_assert(FBranchFilter_BlendDepth_Offset == 0x8, "FBranchFilter::BlendDepth offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
