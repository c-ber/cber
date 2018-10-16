#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCameraPreviewInfo // Size: 0x30
{
public:
    ExternalPtr<struct UClass> PawnClass; /* Ofs: 0x0 Size: 0x8 ClassProperty Engine.CameraPreviewInfo.PawnClass */
    ExternalPtr<struct UAnimSequence> AnimSeq; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.CameraPreviewInfo.AnimSeq */
    FVector Location; /* Ofs: 0x10 Size: 0xC StructProperty Engine.CameraPreviewInfo.Location */
    FRotator Rotation; /* Ofs: 0x1C Size: 0xC StructProperty Engine.CameraPreviewInfo.Rotation */
    ExternalPtr<struct UPawn> PawnInst; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.CameraPreviewInfo.PawnInst */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCameraPreviewInfo = sizeof(FCameraPreviewInfo); // 48
    static_assert(sizeof(FCameraPreviewInfo) == 0x30, "Size of FCameraPreviewInfo is not correct.");
	auto constexpr FCameraPreviewInfo_PawnClass_Offset = offsetof(FCameraPreviewInfo, PawnClass);
	static_assert(FCameraPreviewInfo_PawnClass_Offset == 0x0, "FCameraPreviewInfo::PawnClass offset is not 0");
	auto constexpr FCameraPreviewInfo_AnimSeq_Offset = offsetof(FCameraPreviewInfo, AnimSeq);
	static_assert(FCameraPreviewInfo_AnimSeq_Offset == 0x8, "FCameraPreviewInfo::AnimSeq offset is not 8");
	auto constexpr FCameraPreviewInfo_Location_Offset = offsetof(FCameraPreviewInfo, Location);
	static_assert(FCameraPreviewInfo_Location_Offset == 0x10, "FCameraPreviewInfo::Location offset is not 10");
	auto constexpr FCameraPreviewInfo_Rotation_Offset = offsetof(FCameraPreviewInfo, Rotation);
	static_assert(FCameraPreviewInfo_Rotation_Offset == 0x1c, "FCameraPreviewInfo::Rotation offset is not 1c");
	auto constexpr FCameraPreviewInfo_PawnInst_Offset = offsetof(FCameraPreviewInfo, PawnInst);
	static_assert(FCameraPreviewInfo_PawnInst_Offset == 0x28, "FCameraPreviewInfo::PawnInst offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
