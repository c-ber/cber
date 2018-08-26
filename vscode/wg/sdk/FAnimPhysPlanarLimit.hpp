#pragma once
#include "FBoneReference.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimPhysPlanarLimit // Size: 0x50
{
public:
    FBoneReference DrivingBone; /* Ofs: 0x0 Size: 0x18 StructProperty AnimGraphRuntime.AnimPhysPlanarLimit.DrivingBone */
    uint8_t UnknownData18[0x8];
    FTransform PlaneTransform; /* Ofs: 0x20 Size: 0x30 StructProperty AnimGraphRuntime.AnimPhysPlanarLimit.PlaneTransform */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimPhysPlanarLimit = sizeof(FAnimPhysPlanarLimit); // 80
    static_assert(sizeof(FAnimPhysPlanarLimit) == 0x50, "Size of FAnimPhysPlanarLimit is not correct.");
	auto constexpr FAnimPhysPlanarLimit_DrivingBone_Offset = offsetof(FAnimPhysPlanarLimit, DrivingBone);
	static_assert(FAnimPhysPlanarLimit_DrivingBone_Offset == 0x0, "FAnimPhysPlanarLimit::DrivingBone offset is not 0");
	auto constexpr FAnimPhysPlanarLimit_PlaneTransform_Offset = offsetof(FAnimPhysPlanarLimit, PlaneTransform);
	static_assert(FAnimPhysPlanarLimit_PlaneTransform_Offset == 0x20, "FAnimPhysPlanarLimit::PlaneTransform offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
