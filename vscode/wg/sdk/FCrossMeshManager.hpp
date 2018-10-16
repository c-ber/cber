#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCrossMeshManager // Size: 0x20
{
public:
    ExternalPtr<struct UStaticMesh> Prototype; /* Ofs: 0x0 Size: 0x8 ObjectProperty RoadRuntime.CrossMeshManager.Prototype */
    ExternalPtr<struct UActor> Owner; /* Ofs: 0x8 Size: 0x8 ObjectProperty RoadRuntime.CrossMeshManager.Owner */
    ExternalPtr<struct UStaticMeshComponent> SideMesh; /* Ofs: 0x10 Size: 0x8 ObjectProperty RoadRuntime.CrossMeshManager.SideMesh */
    int32_t SocketIndex; /* Ofs: 0x18 Size: 0x4 IntProperty RoadRuntime.CrossMeshManager.SocketIndex */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCrossMeshManager = sizeof(FCrossMeshManager); // 32
    static_assert(sizeof(FCrossMeshManager) == 0x20, "Size of FCrossMeshManager is not correct.");
	auto constexpr FCrossMeshManager_Prototype_Offset = offsetof(FCrossMeshManager, Prototype);
	static_assert(FCrossMeshManager_Prototype_Offset == 0x0, "FCrossMeshManager::Prototype offset is not 0");
	auto constexpr FCrossMeshManager_Owner_Offset = offsetof(FCrossMeshManager, Owner);
	static_assert(FCrossMeshManager_Owner_Offset == 0x8, "FCrossMeshManager::Owner offset is not 8");
	auto constexpr FCrossMeshManager_SideMesh_Offset = offsetof(FCrossMeshManager, SideMesh);
	static_assert(FCrossMeshManager_SideMesh_Offset == 0x10, "FCrossMeshManager::SideMesh offset is not 10");
	auto constexpr FCrossMeshManager_SocketIndex_Offset = offsetof(FCrossMeshManager, SocketIndex);
	static_assert(FCrossMeshManager_SocketIndex_Offset == 0x18, "FCrossMeshManager::SocketIndex offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
