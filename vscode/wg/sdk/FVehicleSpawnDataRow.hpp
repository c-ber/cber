#pragma once
#include "FTableRowBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleSpawnDataRow // Size: 0x20
 : public FTableRowBase // Size: 0x8
{
public:
    FName CategoryFilter; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.VehicleSpawnDataRow.CategoryFilter */
    ExternalPtr<struct UClass> Vehicle; /* Ofs: 0x10 Size: 0x8 ClassProperty TslGame.VehicleSpawnDataRow.Vehicle */
    int32_t Weight; /* Ofs: 0x18 Size: 0x4 IntProperty TslGame.VehicleSpawnDataRow.Weight */
    bool bSnapToFloor; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty TslGame.VehicleSpawnDataRow.bSnapToFloor */
    uint8_t UnknownData1D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleSpawnDataRow = sizeof(FVehicleSpawnDataRow); // 32
    static_assert(sizeof(FVehicleSpawnDataRow) == 0x20, "Size of FVehicleSpawnDataRow is not correct.");
	auto constexpr FVehicleSpawnDataRow_CategoryFilter_Offset = offsetof(FVehicleSpawnDataRow, CategoryFilter);
	static_assert(FVehicleSpawnDataRow_CategoryFilter_Offset == 0x8, "FVehicleSpawnDataRow::CategoryFilter offset is not 8");
	auto constexpr FVehicleSpawnDataRow_Vehicle_Offset = offsetof(FVehicleSpawnDataRow, Vehicle);
	static_assert(FVehicleSpawnDataRow_Vehicle_Offset == 0x10, "FVehicleSpawnDataRow::Vehicle offset is not 10");
	auto constexpr FVehicleSpawnDataRow_Weight_Offset = offsetof(FVehicleSpawnDataRow, Weight);
	static_assert(FVehicleSpawnDataRow_Weight_Offset == 0x18, "FVehicleSpawnDataRow::Weight offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
