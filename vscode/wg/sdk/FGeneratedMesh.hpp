#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGeneratedMesh // Size: 0x10
{
public:
    int32_t ID; /* Ofs: 0x0 Size: 0x4 IntProperty CustomizableObject.GeneratedMesh.ID */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UStaticMesh> Mesh; /* Ofs: 0x8 Size: 0x8 ObjectProperty CustomizableObject.GeneratedMesh.Mesh */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGeneratedMesh = sizeof(FGeneratedMesh); // 16
    static_assert(sizeof(FGeneratedMesh) == 0x10, "Size of FGeneratedMesh is not correct.");
	auto constexpr FGeneratedMesh_ID_Offset = offsetof(FGeneratedMesh, ID);
	static_assert(FGeneratedMesh_ID_Offset == 0x0, "FGeneratedMesh::ID offset is not 0");
	auto constexpr FGeneratedMesh_Mesh_Offset = offsetof(FGeneratedMesh, Mesh);
	static_assert(FGeneratedMesh_Mesh_Offset == 0x8, "FGeneratedMesh::Mesh offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
