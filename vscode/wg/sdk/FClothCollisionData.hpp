#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothCollisionData // Size: 0x30
{
public:
    TArray<struct FClothCollisionPrim_Sphere> Spheres; /* Ofs: 0x0 Size: 0x10 ArrayProperty ClothingSystemRuntimeInterface.ClothCollisionData.Spheres */
    TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; /* Ofs: 0x10 Size: 0x10 ArrayProperty ClothingSystemRuntimeInterface.ClothCollisionData.SphereConnections */
    TArray<struct FClothCollisionPrim_Convex> Convexes; /* Ofs: 0x20 Size: 0x10 ArrayProperty ClothingSystemRuntimeInterface.ClothCollisionData.Convexes */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothCollisionData = sizeof(FClothCollisionData); // 48
    static_assert(sizeof(FClothCollisionData) == 0x30, "Size of FClothCollisionData is not correct.");
	auto constexpr FClothCollisionData_Spheres_Offset = offsetof(FClothCollisionData, Spheres);
	static_assert(FClothCollisionData_Spheres_Offset == 0x0, "FClothCollisionData::Spheres offset is not 0");
	auto constexpr FClothCollisionData_SphereConnections_Offset = offsetof(FClothCollisionData, SphereConnections);
	static_assert(FClothCollisionData_SphereConnections_Offset == 0x10, "FClothCollisionData::SphereConnections offset is not 10");
	auto constexpr FClothCollisionData_Convexes_Offset = offsetof(FClothCollisionData, Convexes);
	static_assert(FClothCollisionData_Convexes_Offset == 0x20, "FClothCollisionData::Convexes offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
