#pragma once
#include "FBoneReference.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSplineIKCachedBoneData // Size: 0x20
{
public:
    FBoneReference Bone; /* Ofs: 0x0 Size: 0x18 StructProperty AnimGraphRuntime.SplineIKCachedBoneData.Bone */
    int32_t RefSkeletonIndex; /* Ofs: 0x18 Size: 0x4 IntProperty AnimGraphRuntime.SplineIKCachedBoneData.RefSkeletonIndex */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSplineIKCachedBoneData = sizeof(FSplineIKCachedBoneData); // 32
    static_assert(sizeof(FSplineIKCachedBoneData) == 0x20, "Size of FSplineIKCachedBoneData is not correct.");
	auto constexpr FSplineIKCachedBoneData_Bone_Offset = offsetof(FSplineIKCachedBoneData, Bone);
	static_assert(FSplineIKCachedBoneData_Bone_Offset == 0x0, "FSplineIKCachedBoneData::Bone offset is not 0");
	auto constexpr FSplineIKCachedBoneData_RefSkeletonIndex_Offset = offsetof(FSplineIKCachedBoneData, RefSkeletonIndex);
	static_assert(FSplineIKCachedBoneData_RefSkeletonIndex_Offset == 0x18, "FSplineIKCachedBoneData::RefSkeletonIndex offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
