#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAggregateGeometry2D // Size: 0x30
{
public:
    TArray<struct FCircleElement2D> CircleElements; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.AggregateGeometry2D.CircleElements */
    TArray<struct FBoxElement2D> BoxElements; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.AggregateGeometry2D.BoxElements */
    TArray<struct FConvexElement2D> ConvexElements; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.AggregateGeometry2D.ConvexElements */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAggregateGeometry2D = sizeof(FAggregateGeometry2D); // 48
    static_assert(sizeof(FAggregateGeometry2D) == 0x30, "Size of FAggregateGeometry2D is not correct.");
	auto constexpr FAggregateGeometry2D_CircleElements_Offset = offsetof(FAggregateGeometry2D, CircleElements);
	static_assert(FAggregateGeometry2D_CircleElements_Offset == 0x0, "FAggregateGeometry2D::CircleElements offset is not 0");
	auto constexpr FAggregateGeometry2D_BoxElements_Offset = offsetof(FAggregateGeometry2D, BoxElements);
	static_assert(FAggregateGeometry2D_BoxElements_Offset == 0x10, "FAggregateGeometry2D::BoxElements offset is not 10");
	auto constexpr FAggregateGeometry2D_ConvexElements_Offset = offsetof(FAggregateGeometry2D, ConvexElements);
	static_assert(FAggregateGeometry2D_ConvexElements_Offset == 0x20, "FAggregateGeometry2D::ConvexElements offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
