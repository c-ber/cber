#pragma once
#include "ESkinMeshType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinMesh // Size: 0x28
{
public:
    TEnumAsByte<enum ESkinMeshType> MeshType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.SkinMesh.MeshType */
    uint8_t UnknownData1[0x7];
    TAssetPtr<ExternalPtr<struct UObject>> MeshAsset; /* Ofs: 0x8 Size: 0x1C AssetObjectProperty TslGame.SkinMesh.MeshAsset */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinMesh = sizeof(FSkinMesh); // 40
    static_assert(sizeof(FSkinMesh) == 0x28, "Size of FSkinMesh is not correct.");
	auto constexpr FSkinMesh_MeshType_Offset = offsetof(FSkinMesh, MeshType);
	static_assert(FSkinMesh_MeshType_Offset == 0x0, "FSkinMesh::MeshType offset is not 0");
	auto constexpr FSkinMesh_MeshAsset_Offset = offsetof(FSkinMesh, MeshAsset);
	static_assert(FSkinMesh_MeshAsset_Offset == 0x8, "FSkinMesh::MeshAsset offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
