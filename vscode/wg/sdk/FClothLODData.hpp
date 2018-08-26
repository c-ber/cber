#pragma once
#include "FClothPhysicalMeshData.hpp"
#include "FClothCollisionData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothLODData // Size: 0xE8
{
public:
    FClothPhysicalMeshData PhysicalMeshData; /* Ofs: 0x0 Size: 0x98 StructProperty ClothingSystemRuntime.ClothLODData.PhysicalMeshData */
    FClothCollisionData CollisionData; /* Ofs: 0x98 Size: 0x30 StructProperty ClothingSystemRuntime.ClothLODData.CollisionData */
    uint8_t UnknownDataC8[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothLODData = sizeof(FClothLODData); // 232
    static_assert(sizeof(FClothLODData) == 0xE8, "Size of FClothLODData is not correct.");
	auto constexpr FClothLODData_PhysicalMeshData_Offset = offsetof(FClothLODData, PhysicalMeshData);
	static_assert(FClothLODData_PhysicalMeshData_Offset == 0x0, "FClothLODData::PhysicalMeshData offset is not 0");
	auto constexpr FClothLODData_CollisionData_Offset = offsetof(FClothLODData, CollisionData);
	static_assert(FClothLODData_CollisionData_Offset == 0x98, "FClothLODData::CollisionData offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
