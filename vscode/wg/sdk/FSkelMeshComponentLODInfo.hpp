#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkelMeshComponentLODInfo // Size: 0x20
{
public:
    TArray<bool> HiddenMaterials; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.SkelMeshComponentLODInfo.HiddenMaterials */
    uint8_t UnknownData10[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkelMeshComponentLODInfo = sizeof(FSkelMeshComponentLODInfo); // 32
    static_assert(sizeof(FSkelMeshComponentLODInfo) == 0x20, "Size of FSkelMeshComponentLODInfo is not correct.");
	auto constexpr FSkelMeshComponentLODInfo_HiddenMaterials_Offset = offsetof(FSkelMeshComponentLODInfo, HiddenMaterials);
	static_assert(FSkelMeshComponentLODInfo_HiddenMaterials_Offset == 0x0, "FSkelMeshComponentLODInfo::HiddenMaterials offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
