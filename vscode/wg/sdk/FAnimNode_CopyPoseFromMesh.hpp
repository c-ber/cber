#pragma once
#include "FAnimNode_Base.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_CopyPoseFromMesh // Size: 0x90
 : public FAnimNode_Base // Size: 0x30
{
public:
    ExternalPtr<struct USkeletalMeshComponent> SourceMeshComponent; /* Ofs: 0x30 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_CopyPoseFromMesh.SourceMeshComponent */
    uint8_t UnknownData38[0x58];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_CopyPoseFromMesh = sizeof(FAnimNode_CopyPoseFromMesh); // 144
    static_assert(sizeof(FAnimNode_CopyPoseFromMesh) == 0x90, "Size of FAnimNode_CopyPoseFromMesh is not correct.");
	auto constexpr FAnimNode_CopyPoseFromMesh_SourceMeshComponent_Offset = offsetof(FAnimNode_CopyPoseFromMesh, SourceMeshComponent);
	static_assert(FAnimNode_CopyPoseFromMesh_SourceMeshComponent_Offset == 0x30, "FAnimNode_CopyPoseFromMesh::SourceMeshComponent offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
