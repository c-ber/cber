#pragma once
#include "FVector.hpp"
#include "FProcMeshTangent.hpp"
#include "FColor.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FProcMeshVertex // Size: 0x34
{
public:
    FVector Position; /* Ofs: 0x0 Size: 0xC StructProperty ProceduralMeshComponent.ProcMeshVertex.Position */
    FVector Normal; /* Ofs: 0xC Size: 0xC StructProperty ProceduralMeshComponent.ProcMeshVertex.Normal */
    FProcMeshTangent Tangent; /* Ofs: 0x18 Size: 0x10 StructProperty ProceduralMeshComponent.ProcMeshVertex.Tangent */
    FColor Color; /* Ofs: 0x28 Size: 0x4 StructProperty ProceduralMeshComponent.ProcMeshVertex.Color */
    FVector2D UV0; /* Ofs: 0x2C Size: 0x8 StructProperty ProceduralMeshComponent.ProcMeshVertex.UV0 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFProcMeshVertex = sizeof(FProcMeshVertex); // 52
    static_assert(sizeof(FProcMeshVertex) == 0x34, "Size of FProcMeshVertex is not correct.");
	auto constexpr FProcMeshVertex_Position_Offset = offsetof(FProcMeshVertex, Position);
	static_assert(FProcMeshVertex_Position_Offset == 0x0, "FProcMeshVertex::Position offset is not 0");
	auto constexpr FProcMeshVertex_Normal_Offset = offsetof(FProcMeshVertex, Normal);
	static_assert(FProcMeshVertex_Normal_Offset == 0xc, "FProcMeshVertex::Normal offset is not c");
	auto constexpr FProcMeshVertex_Tangent_Offset = offsetof(FProcMeshVertex, Tangent);
	static_assert(FProcMeshVertex_Tangent_Offset == 0x18, "FProcMeshVertex::Tangent offset is not 18");
	auto constexpr FProcMeshVertex_Color_Offset = offsetof(FProcMeshVertex, Color);
	static_assert(FProcMeshVertex_Color_Offset == 0x28, "FProcMeshVertex::Color offset is not 28");
	auto constexpr FProcMeshVertex_UV0_Offset = offsetof(FProcMeshVertex, UV0);
	static_assert(FProcMeshVertex_UV0_Offset == 0x2c, "FProcMeshVertex::UV0 offset is not 2c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
