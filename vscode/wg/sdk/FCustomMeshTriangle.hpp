#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomMeshTriangle // Size: 0x24
{
public:
    FVector Vertex0; /* Ofs: 0x0 Size: 0xC StructProperty CustomMeshComponent.CustomMeshTriangle.Vertex0 */
    FVector Vertex1; /* Ofs: 0xC Size: 0xC StructProperty CustomMeshComponent.CustomMeshTriangle.Vertex1 */
    FVector Vertex2; /* Ofs: 0x18 Size: 0xC StructProperty CustomMeshComponent.CustomMeshTriangle.Vertex2 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomMeshTriangle = sizeof(FCustomMeshTriangle); // 36
    static_assert(sizeof(FCustomMeshTriangle) == 0x24, "Size of FCustomMeshTriangle is not correct.");
	auto constexpr FCustomMeshTriangle_Vertex0_Offset = offsetof(FCustomMeshTriangle, Vertex0);
	static_assert(FCustomMeshTriangle_Vertex0_Offset == 0x0, "FCustomMeshTriangle::Vertex0 offset is not 0");
	auto constexpr FCustomMeshTriangle_Vertex1_Offset = offsetof(FCustomMeshTriangle, Vertex1);
	static_assert(FCustomMeshTriangle_Vertex1_Offset == 0xc, "FCustomMeshTriangle::Vertex1 offset is not c");
	auto constexpr FCustomMeshTriangle_Vertex2_Offset = offsetof(FCustomMeshTriangle, Vertex2);
	static_assert(FCustomMeshTriangle_Vertex2_Offset == 0x18, "FCustomMeshTriangle::Vertex2 offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
