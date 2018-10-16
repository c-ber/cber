#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshSectionInfo // Size: 0x8
{
public:
    int32_t MaterialIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.MeshSectionInfo.MaterialIndex */
    bool bEnableCollision; /* Ofs: 0x4 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshSectionInfo.bEnableCollision */
    bool bCastShadow; /* Ofs: 0x5 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshSectionInfo.bCastShadow */
    bool bOverrideIndoorOutdoorMask; /* Ofs: 0x6 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshSectionInfo.bOverrideIndoorOutdoorMask */
    uint8_t IndoorOutdoorMask; /* Ofs: 0x7 Size: 0x1 ByteProperty Engine.MeshSectionInfo.IndoorOutdoorMask */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshSectionInfo = sizeof(FMeshSectionInfo); // 8
    static_assert(sizeof(FMeshSectionInfo) == 0x8, "Size of FMeshSectionInfo is not correct.");
	auto constexpr FMeshSectionInfo_MaterialIndex_Offset = offsetof(FMeshSectionInfo, MaterialIndex);
	static_assert(FMeshSectionInfo_MaterialIndex_Offset == 0x0, "FMeshSectionInfo::MaterialIndex offset is not 0");
	auto constexpr FMeshSectionInfo_IndoorOutdoorMask_Offset = offsetof(FMeshSectionInfo, IndoorOutdoorMask);
	static_assert(FMeshSectionInfo_IndoorOutdoorMask_Offset == 0x7, "FMeshSectionInfo::IndoorOutdoorMask offset is not 7");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
