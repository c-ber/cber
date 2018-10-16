#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_RotateRootBone // Size: 0x60
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink BasePose; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_RotateRootBone.BasePose */
    float Pitch; /* Ofs: 0x48 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_RotateRootBone.Pitch */
    float Yaw; /* Ofs: 0x4C Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_RotateRootBone.Yaw */
    FRotator MeshToComponent; /* Ofs: 0x50 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_RotateRootBone.MeshToComponent */
    uint8_t UnknownData5C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_RotateRootBone = sizeof(FAnimNode_RotateRootBone); // 96
    static_assert(sizeof(FAnimNode_RotateRootBone) == 0x60, "Size of FAnimNode_RotateRootBone is not correct.");
	auto constexpr FAnimNode_RotateRootBone_BasePose_Offset = offsetof(FAnimNode_RotateRootBone, BasePose);
	static_assert(FAnimNode_RotateRootBone_BasePose_Offset == 0x30, "FAnimNode_RotateRootBone::BasePose offset is not 30");
	auto constexpr FAnimNode_RotateRootBone_Pitch_Offset = offsetof(FAnimNode_RotateRootBone, Pitch);
	static_assert(FAnimNode_RotateRootBone_Pitch_Offset == 0x48, "FAnimNode_RotateRootBone::Pitch offset is not 48");
	auto constexpr FAnimNode_RotateRootBone_Yaw_Offset = offsetof(FAnimNode_RotateRootBone, Yaw);
	static_assert(FAnimNode_RotateRootBone_Yaw_Offset == 0x4c, "FAnimNode_RotateRootBone::Yaw offset is not 4c");
	auto constexpr FAnimNode_RotateRootBone_MeshToComponent_Offset = offsetof(FAnimNode_RotateRootBone, MeshToComponent);
	static_assert(FAnimNode_RotateRootBone_MeshToComponent_Offset == 0x50, "FAnimNode_RotateRootBone::MeshToComponent offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
