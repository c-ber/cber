#pragma once
#include "ESpritePolygonMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSpriteGeometryCollection // Size: 0x30
{
public:
    TArray<struct FSpriteGeometryShape> Shapes; /* Ofs: 0x0 Size: 0x10 ArrayProperty Paper2D.SpriteGeometryCollection.Shapes */
    TEnumAsByte<enum ESpritePolygonMode> GeometryType; /* Ofs: 0x10 Size: 0x1 ByteProperty Paper2D.SpriteGeometryCollection.GeometryType */
    uint8_t UnknownData11[0x3];
    int32_t PixelsPerSubdivisionX; /* Ofs: 0x14 Size: 0x4 IntProperty Paper2D.SpriteGeometryCollection.PixelsPerSubdivisionX */
    int32_t PixelsPerSubdivisionY; /* Ofs: 0x18 Size: 0x4 IntProperty Paper2D.SpriteGeometryCollection.PixelsPerSubdivisionY */
    bool bAvoidVertexMerging; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty Paper2D.SpriteGeometryCollection.bAvoidVertexMerging */
    uint8_t UnknownData1D[0x3];
    float AlphaThreshold; /* Ofs: 0x20 Size: 0x4 FloatProperty Paper2D.SpriteGeometryCollection.AlphaThreshold */
    float DetailAmount; /* Ofs: 0x24 Size: 0x4 FloatProperty Paper2D.SpriteGeometryCollection.DetailAmount */
    float SimplifyEpsilon; /* Ofs: 0x28 Size: 0x4 FloatProperty Paper2D.SpriteGeometryCollection.SimplifyEpsilon */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSpriteGeometryCollection = sizeof(FSpriteGeometryCollection); // 48
    static_assert(sizeof(FSpriteGeometryCollection) == 0x30, "Size of FSpriteGeometryCollection is not correct.");
	auto constexpr FSpriteGeometryCollection_Shapes_Offset = offsetof(FSpriteGeometryCollection, Shapes);
	static_assert(FSpriteGeometryCollection_Shapes_Offset == 0x0, "FSpriteGeometryCollection::Shapes offset is not 0");
	auto constexpr FSpriteGeometryCollection_GeometryType_Offset = offsetof(FSpriteGeometryCollection, GeometryType);
	static_assert(FSpriteGeometryCollection_GeometryType_Offset == 0x10, "FSpriteGeometryCollection::GeometryType offset is not 10");
	auto constexpr FSpriteGeometryCollection_PixelsPerSubdivisionX_Offset = offsetof(FSpriteGeometryCollection, PixelsPerSubdivisionX);
	static_assert(FSpriteGeometryCollection_PixelsPerSubdivisionX_Offset == 0x14, "FSpriteGeometryCollection::PixelsPerSubdivisionX offset is not 14");
	auto constexpr FSpriteGeometryCollection_PixelsPerSubdivisionY_Offset = offsetof(FSpriteGeometryCollection, PixelsPerSubdivisionY);
	static_assert(FSpriteGeometryCollection_PixelsPerSubdivisionY_Offset == 0x18, "FSpriteGeometryCollection::PixelsPerSubdivisionY offset is not 18");
	auto constexpr FSpriteGeometryCollection_AlphaThreshold_Offset = offsetof(FSpriteGeometryCollection, AlphaThreshold);
	static_assert(FSpriteGeometryCollection_AlphaThreshold_Offset == 0x20, "FSpriteGeometryCollection::AlphaThreshold offset is not 20");
	auto constexpr FSpriteGeometryCollection_DetailAmount_Offset = offsetof(FSpriteGeometryCollection, DetailAmount);
	static_assert(FSpriteGeometryCollection_DetailAmount_Offset == 0x24, "FSpriteGeometryCollection::DetailAmount offset is not 24");
	auto constexpr FSpriteGeometryCollection_SimplifyEpsilon_Offset = offsetof(FSpriteGeometryCollection, SimplifyEpsilon);
	static_assert(FSpriteGeometryCollection_SimplifyEpsilon_Offset == 0x28, "FSpriteGeometryCollection::SimplifyEpsilon offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
