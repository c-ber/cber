#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBuilderPoly // Size: 0x28
{
public:
    TArray<int32_t> VertexIndices; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.BuilderPoly.VertexIndices */
    int32_t Direction; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.BuilderPoly.Direction */
    uint8_t UnknownData14[0x4];
    FName ItemName; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.BuilderPoly.ItemName */
    int32_t PolyFlags; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.BuilderPoly.PolyFlags */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBuilderPoly = sizeof(FBuilderPoly); // 40
    static_assert(sizeof(FBuilderPoly) == 0x28, "Size of FBuilderPoly is not correct.");
	auto constexpr FBuilderPoly_VertexIndices_Offset = offsetof(FBuilderPoly, VertexIndices);
	static_assert(FBuilderPoly_VertexIndices_Offset == 0x0, "FBuilderPoly::VertexIndices offset is not 0");
	auto constexpr FBuilderPoly_Direction_Offset = offsetof(FBuilderPoly, Direction);
	static_assert(FBuilderPoly_Direction_Offset == 0x10, "FBuilderPoly::Direction offset is not 10");
	auto constexpr FBuilderPoly_ItemName_Offset = offsetof(FBuilderPoly, ItemName);
	static_assert(FBuilderPoly_ItemName_Offset == 0x18, "FBuilderPoly::ItemName offset is not 18");
	auto constexpr FBuilderPoly_PolyFlags_Offset = offsetof(FBuilderPoly, PolyFlags);
	static_assert(FBuilderPoly_PolyFlags_Offset == 0x20, "FBuilderPoly::PolyFlags offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
