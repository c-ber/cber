#pragma once
#include "FVector2D.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSlateMeshVertex // Size: 0x3C
{
public:
    FVector2D Position; /* Ofs: 0x0 Size: 0x8 StructProperty UMG.SlateMeshVertex.Position */
    FColor Color; /* Ofs: 0x8 Size: 0x4 StructProperty UMG.SlateMeshVertex.Color */
    FVector2D UV0; /* Ofs: 0xC Size: 0x8 StructProperty UMG.SlateMeshVertex.UV0 */
    FVector2D UV1; /* Ofs: 0x14 Size: 0x8 StructProperty UMG.SlateMeshVertex.UV1 */
    FVector2D UV2; /* Ofs: 0x1C Size: 0x8 StructProperty UMG.SlateMeshVertex.UV2 */
    FVector2D UV3; /* Ofs: 0x24 Size: 0x8 StructProperty UMG.SlateMeshVertex.UV3 */
    FVector2D UV4; /* Ofs: 0x2C Size: 0x8 StructProperty UMG.SlateMeshVertex.UV4 */
    FVector2D UV5; /* Ofs: 0x34 Size: 0x8 StructProperty UMG.SlateMeshVertex.UV5 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSlateMeshVertex = sizeof(FSlateMeshVertex); // 60
    static_assert(sizeof(FSlateMeshVertex) == 0x3C, "Size of FSlateMeshVertex is not correct.");
	auto constexpr FSlateMeshVertex_Position_Offset = offsetof(FSlateMeshVertex, Position);
	static_assert(FSlateMeshVertex_Position_Offset == 0x0, "FSlateMeshVertex::Position offset is not 0");
	auto constexpr FSlateMeshVertex_Color_Offset = offsetof(FSlateMeshVertex, Color);
	static_assert(FSlateMeshVertex_Color_Offset == 0x8, "FSlateMeshVertex::Color offset is not 8");
	auto constexpr FSlateMeshVertex_UV0_Offset = offsetof(FSlateMeshVertex, UV0);
	static_assert(FSlateMeshVertex_UV0_Offset == 0xc, "FSlateMeshVertex::UV0 offset is not c");
	auto constexpr FSlateMeshVertex_UV1_Offset = offsetof(FSlateMeshVertex, UV1);
	static_assert(FSlateMeshVertex_UV1_Offset == 0x14, "FSlateMeshVertex::UV1 offset is not 14");
	auto constexpr FSlateMeshVertex_UV2_Offset = offsetof(FSlateMeshVertex, UV2);
	static_assert(FSlateMeshVertex_UV2_Offset == 0x1c, "FSlateMeshVertex::UV2 offset is not 1c");
	auto constexpr FSlateMeshVertex_UV3_Offset = offsetof(FSlateMeshVertex, UV3);
	static_assert(FSlateMeshVertex_UV3_Offset == 0x24, "FSlateMeshVertex::UV3 offset is not 24");
	auto constexpr FSlateMeshVertex_UV4_Offset = offsetof(FSlateMeshVertex, UV4);
	static_assert(FSlateMeshVertex_UV4_Offset == 0x2c, "FSlateMeshVertex::UV4 offset is not 2c");
	auto constexpr FSlateMeshVertex_UV5_Offset = offsetof(FSlateMeshVertex, UV5);
	static_assert(FSlateMeshVertex_UV5_Offset == 0x34, "FSlateMeshVertex::UV5 offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
