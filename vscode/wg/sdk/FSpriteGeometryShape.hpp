#pragma once
#include "ESpriteShapeType.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSpriteGeometryShape // Size: 0x30
{
public:
    TEnumAsByte<enum ESpriteShapeType> ShapeType; /* Ofs: 0x0 Size: 0x1 EnumProperty Paper2D.SpriteGeometryShape.ShapeType */
    uint8_t UnknownData1[0x7];
    TArray<struct FVector2D> Vertices; /* Ofs: 0x8 Size: 0x10 ArrayProperty Paper2D.SpriteGeometryShape.Vertices */
    FVector2D BoxSize; /* Ofs: 0x18 Size: 0x8 StructProperty Paper2D.SpriteGeometryShape.BoxSize */
    FVector2D BoxPosition; /* Ofs: 0x20 Size: 0x8 StructProperty Paper2D.SpriteGeometryShape.BoxPosition */
    float Rotation; /* Ofs: 0x28 Size: 0x4 FloatProperty Paper2D.SpriteGeometryShape.Rotation */
    bool bNegativeWinding; /* Ofs: 0x2C Size: 0x1 BitMask: 01 BoolProperty Paper2D.SpriteGeometryShape.bNegativeWinding */
    uint8_t UnknownData2D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSpriteGeometryShape = sizeof(FSpriteGeometryShape); // 48
    static_assert(sizeof(FSpriteGeometryShape) == 0x30, "Size of FSpriteGeometryShape is not correct.");
	auto constexpr FSpriteGeometryShape_ShapeType_Offset = offsetof(FSpriteGeometryShape, ShapeType);
	static_assert(FSpriteGeometryShape_ShapeType_Offset == 0x0, "FSpriteGeometryShape::ShapeType offset is not 0");
	auto constexpr FSpriteGeometryShape_Vertices_Offset = offsetof(FSpriteGeometryShape, Vertices);
	static_assert(FSpriteGeometryShape_Vertices_Offset == 0x8, "FSpriteGeometryShape::Vertices offset is not 8");
	auto constexpr FSpriteGeometryShape_BoxSize_Offset = offsetof(FSpriteGeometryShape, BoxSize);
	static_assert(FSpriteGeometryShape_BoxSize_Offset == 0x18, "FSpriteGeometryShape::BoxSize offset is not 18");
	auto constexpr FSpriteGeometryShape_BoxPosition_Offset = offsetof(FSpriteGeometryShape, BoxPosition);
	static_assert(FSpriteGeometryShape_BoxPosition_Offset == 0x20, "FSpriteGeometryShape::BoxPosition offset is not 20");
	auto constexpr FSpriteGeometryShape_Rotation_Offset = offsetof(FSpriteGeometryShape, Rotation);
	static_assert(FSpriteGeometryShape_Rotation_Offset == 0x28, "FSpriteGeometryShape::Rotation offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
