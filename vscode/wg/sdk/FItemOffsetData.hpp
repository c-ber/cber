#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FItemOffsetData // Size: 0x118
{
public:
    FVector SlotOffset_Primary_Location; /* Ofs: 0x0 Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_Primary_Location */
    FVector SlotOffset_Secondary_Location; /* Ofs: 0xC Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_Secondary_Location */
    FVector SlotOffset_SideArm_Location; /* Ofs: 0x18 Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_SideArm_Location */
    FVector SlotOffset_Melee_Location; /* Ofs: 0x24 Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_Melee_Location */
    FVector SlotOffset_Thrown_Location; /* Ofs: 0x30 Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_Thrown_Location */
    FRotator SlotOffset_Primary_Rotation; /* Ofs: 0x3C Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_Primary_Rotation */
    FRotator SlotOffset_Secondary_Rotation; /* Ofs: 0x48 Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_Secondary_Rotation */
    FRotator SlotOffset_SideArm_Rotation; /* Ofs: 0x54 Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_SideArm_Rotation */
    FRotator SlotOffset_Melee_Rotation; /* Ofs: 0x60 Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_Melee_Rotation */
    FRotator SlotOffset_Thrown_Rotation; /* Ofs: 0x6C Size: 0xC StructProperty TslGame.ItemOffsetData.SlotOffset_Thrown_Rotation */
    TMap<struct UClass, struct FTransform> SlotOffset_Primary_PerWeapon; /* Ofs: 0x78 Size: 0x50 MapProperty TslGame.ItemOffsetData.SlotOffset_Primary_PerWeapon */
    TMap<struct UClass, struct FTransform> SlotOffset_Secondary_PerWeapon; /* Ofs: 0xC8 Size: 0x50 MapProperty TslGame.ItemOffsetData.SlotOffset_Secondary_PerWeapon */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFItemOffsetData = sizeof(FItemOffsetData); // 280
    static_assert(sizeof(FItemOffsetData) == 0x118, "Size of FItemOffsetData is not correct.");
	auto constexpr FItemOffsetData_SlotOffset_Primary_Location_Offset = offsetof(FItemOffsetData, SlotOffset_Primary_Location);
	static_assert(FItemOffsetData_SlotOffset_Primary_Location_Offset == 0x0, "FItemOffsetData::SlotOffset_Primary_Location offset is not 0");
	auto constexpr FItemOffsetData_SlotOffset_Secondary_Location_Offset = offsetof(FItemOffsetData, SlotOffset_Secondary_Location);
	static_assert(FItemOffsetData_SlotOffset_Secondary_Location_Offset == 0xc, "FItemOffsetData::SlotOffset_Secondary_Location offset is not c");
	auto constexpr FItemOffsetData_SlotOffset_SideArm_Location_Offset = offsetof(FItemOffsetData, SlotOffset_SideArm_Location);
	static_assert(FItemOffsetData_SlotOffset_SideArm_Location_Offset == 0x18, "FItemOffsetData::SlotOffset_SideArm_Location offset is not 18");
	auto constexpr FItemOffsetData_SlotOffset_Melee_Location_Offset = offsetof(FItemOffsetData, SlotOffset_Melee_Location);
	static_assert(FItemOffsetData_SlotOffset_Melee_Location_Offset == 0x24, "FItemOffsetData::SlotOffset_Melee_Location offset is not 24");
	auto constexpr FItemOffsetData_SlotOffset_Thrown_Location_Offset = offsetof(FItemOffsetData, SlotOffset_Thrown_Location);
	static_assert(FItemOffsetData_SlotOffset_Thrown_Location_Offset == 0x30, "FItemOffsetData::SlotOffset_Thrown_Location offset is not 30");
	auto constexpr FItemOffsetData_SlotOffset_Primary_Rotation_Offset = offsetof(FItemOffsetData, SlotOffset_Primary_Rotation);
	static_assert(FItemOffsetData_SlotOffset_Primary_Rotation_Offset == 0x3c, "FItemOffsetData::SlotOffset_Primary_Rotation offset is not 3c");
	auto constexpr FItemOffsetData_SlotOffset_Secondary_Rotation_Offset = offsetof(FItemOffsetData, SlotOffset_Secondary_Rotation);
	static_assert(FItemOffsetData_SlotOffset_Secondary_Rotation_Offset == 0x48, "FItemOffsetData::SlotOffset_Secondary_Rotation offset is not 48");
	auto constexpr FItemOffsetData_SlotOffset_SideArm_Rotation_Offset = offsetof(FItemOffsetData, SlotOffset_SideArm_Rotation);
	static_assert(FItemOffsetData_SlotOffset_SideArm_Rotation_Offset == 0x54, "FItemOffsetData::SlotOffset_SideArm_Rotation offset is not 54");
	auto constexpr FItemOffsetData_SlotOffset_Melee_Rotation_Offset = offsetof(FItemOffsetData, SlotOffset_Melee_Rotation);
	static_assert(FItemOffsetData_SlotOffset_Melee_Rotation_Offset == 0x60, "FItemOffsetData::SlotOffset_Melee_Rotation offset is not 60");
	auto constexpr FItemOffsetData_SlotOffset_Thrown_Rotation_Offset = offsetof(FItemOffsetData, SlotOffset_Thrown_Rotation);
	static_assert(FItemOffsetData_SlotOffset_Thrown_Rotation_Offset == 0x6c, "FItemOffsetData::SlotOffset_Thrown_Rotation offset is not 6c");
	auto constexpr FItemOffsetData_SlotOffset_Primary_PerWeapon_Offset = offsetof(FItemOffsetData, SlotOffset_Primary_PerWeapon);
	static_assert(FItemOffsetData_SlotOffset_Primary_PerWeapon_Offset == 0x78, "FItemOffsetData::SlotOffset_Primary_PerWeapon offset is not 78");
	auto constexpr FItemOffsetData_SlotOffset_Secondary_PerWeapon_Offset = offsetof(FItemOffsetData, SlotOffset_Secondary_PerWeapon);
	static_assert(FItemOffsetData_SlotOffset_Secondary_PerWeapon_Offset == 0xc8, "FItemOffsetData::SlotOffset_Secondary_PerWeapon offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
