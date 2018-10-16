#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSideMeshManager // Size: 0x20
{
public:
    ExternalPtr<struct UStaticMesh> Prototype; /* Ofs: 0x0 Size: 0x8 ObjectProperty RoadRuntime.SideMeshManager.Prototype */
    ExternalPtr<struct UActor> Owner; /* Ofs: 0x8 Size: 0x8 ObjectProperty RoadRuntime.SideMeshManager.Owner */
    ExternalPtr<struct UHierarchicalInstancedStaticMeshComponent> SideMeshes; /* Ofs: 0x10 Size: 0x8 ObjectProperty RoadRuntime.SideMeshManager.SideMeshes */
    int32_t SocketIndex; /* Ofs: 0x18 Size: 0x4 IntProperty RoadRuntime.SideMeshManager.SocketIndex */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSideMeshManager = sizeof(FSideMeshManager); // 32
    static_assert(sizeof(FSideMeshManager) == 0x20, "Size of FSideMeshManager is not correct.");
	auto constexpr FSideMeshManager_Prototype_Offset = offsetof(FSideMeshManager, Prototype);
	static_assert(FSideMeshManager_Prototype_Offset == 0x0, "FSideMeshManager::Prototype offset is not 0");
	auto constexpr FSideMeshManager_Owner_Offset = offsetof(FSideMeshManager, Owner);
	static_assert(FSideMeshManager_Owner_Offset == 0x8, "FSideMeshManager::Owner offset is not 8");
	auto constexpr FSideMeshManager_SideMeshes_Offset = offsetof(FSideMeshManager, SideMeshes);
	static_assert(FSideMeshManager_SideMeshes_Offset == 0x10, "FSideMeshManager::SideMeshes offset is not 10");
	auto constexpr FSideMeshManager_SocketIndex_Offset = offsetof(FSideMeshManager, SocketIndex);
	static_assert(FSideMeshManager_SocketIndex_Offset == 0x18, "FSideMeshManager::SocketIndex offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
