#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FKAggregateGeom // Size: 0x48
{
public:
    TArray<struct FKSphereElem> SphereElems; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.KAggregateGeom.SphereElems */
    TArray<struct FKBoxElem> BoxElems; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.KAggregateGeom.BoxElems */
    TArray<struct FKSphylElem> SphylElems; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.KAggregateGeom.SphylElems */
    TArray<struct FKConvexElem> ConvexElems; /* Ofs: 0x30 Size: 0x10 ArrayProperty Engine.KAggregateGeom.ConvexElems */
    uint8_t UnknownData40[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKAggregateGeom = sizeof(FKAggregateGeom); // 72
    static_assert(sizeof(FKAggregateGeom) == 0x48, "Size of FKAggregateGeom is not correct.");
	auto constexpr FKAggregateGeom_SphereElems_Offset = offsetof(FKAggregateGeom, SphereElems);
	static_assert(FKAggregateGeom_SphereElems_Offset == 0x0, "FKAggregateGeom::SphereElems offset is not 0");
	auto constexpr FKAggregateGeom_BoxElems_Offset = offsetof(FKAggregateGeom, BoxElems);
	static_assert(FKAggregateGeom_BoxElems_Offset == 0x10, "FKAggregateGeom::BoxElems offset is not 10");
	auto constexpr FKAggregateGeom_SphylElems_Offset = offsetof(FKAggregateGeom, SphylElems);
	static_assert(FKAggregateGeom_SphylElems_Offset == 0x20, "FKAggregateGeom::SphylElems offset is not 20");
	auto constexpr FKAggregateGeom_ConvexElems_Offset = offsetof(FKAggregateGeom, ConvexElems);
	static_assert(FKAggregateGeom_ConvexElems_Offset == 0x30, "FKAggregateGeom::ConvexElems offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
