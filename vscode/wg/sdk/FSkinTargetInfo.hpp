#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinTargetInfo // Size: 0x10
{
public:
    FName TargetName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.SkinTargetInfo.TargetName */
    ExternalPtr<struct UMeshComponent> TargetMesh; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.SkinTargetInfo.TargetMesh */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinTargetInfo = sizeof(FSkinTargetInfo); // 16
    static_assert(sizeof(FSkinTargetInfo) == 0x10, "Size of FSkinTargetInfo is not correct.");
	auto constexpr FSkinTargetInfo_TargetName_Offset = offsetof(FSkinTargetInfo, TargetName);
	static_assert(FSkinTargetInfo_TargetName_Offset == 0x0, "FSkinTargetInfo::TargetName offset is not 0");
	auto constexpr FSkinTargetInfo_TargetMesh_Offset = offsetof(FSkinTargetInfo, TargetMesh);
	static_assert(FSkinTargetInfo_TargetMesh_Offset == 0x8, "FSkinTargetInfo::TargetMesh offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
