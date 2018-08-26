#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FModePresetData // Size: 0x38
{
public:
    FName ModeName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.ModePresetData.ModeName */
    ExternalPtr<struct UDataTable> DropItemSpawnDataTable; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.ModePresetData.DropItemSpawnDataTable */
    ExternalPtr<struct UDataTable> DropItemSpawnTogetherDataTable; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.ModePresetData.DropItemSpawnTogetherDataTable */
    ExternalPtr<struct UDataTable> CarePackageItemSpawnDataTable; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.ModePresetData.CarePackageItemSpawnDataTable */
    ExternalPtr<struct UDataTable> CarePackageItemSpawnTogetherDataTable; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.ModePresetData.CarePackageItemSpawnTogetherDataTable */
    ExternalPtr<struct UDataTable> VehicleSpawnDataTable; /* Ofs: 0x28 Size: 0x8 ObjectProperty TslGame.ModePresetData.VehicleSpawnDataTable */
    ExternalPtr<struct UDataTable> BluezoneDataTable; /* Ofs: 0x30 Size: 0x8 ObjectProperty TslGame.ModePresetData.BluezoneDataTable */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFModePresetData = sizeof(FModePresetData); // 56
    static_assert(sizeof(FModePresetData) == 0x38, "Size of FModePresetData is not correct.");
	auto constexpr FModePresetData_ModeName_Offset = offsetof(FModePresetData, ModeName);
	static_assert(FModePresetData_ModeName_Offset == 0x0, "FModePresetData::ModeName offset is not 0");
	auto constexpr FModePresetData_DropItemSpawnDataTable_Offset = offsetof(FModePresetData, DropItemSpawnDataTable);
	static_assert(FModePresetData_DropItemSpawnDataTable_Offset == 0x8, "FModePresetData::DropItemSpawnDataTable offset is not 8");
	auto constexpr FModePresetData_DropItemSpawnTogetherDataTable_Offset = offsetof(FModePresetData, DropItemSpawnTogetherDataTable);
	static_assert(FModePresetData_DropItemSpawnTogetherDataTable_Offset == 0x10, "FModePresetData::DropItemSpawnTogetherDataTable offset is not 10");
	auto constexpr FModePresetData_CarePackageItemSpawnDataTable_Offset = offsetof(FModePresetData, CarePackageItemSpawnDataTable);
	static_assert(FModePresetData_CarePackageItemSpawnDataTable_Offset == 0x18, "FModePresetData::CarePackageItemSpawnDataTable offset is not 18");
	auto constexpr FModePresetData_CarePackageItemSpawnTogetherDataTable_Offset = offsetof(FModePresetData, CarePackageItemSpawnTogetherDataTable);
	static_assert(FModePresetData_CarePackageItemSpawnTogetherDataTable_Offset == 0x20, "FModePresetData::CarePackageItemSpawnTogetherDataTable offset is not 20");
	auto constexpr FModePresetData_VehicleSpawnDataTable_Offset = offsetof(FModePresetData, VehicleSpawnDataTable);
	static_assert(FModePresetData_VehicleSpawnDataTable_Offset == 0x28, "FModePresetData::VehicleSpawnDataTable offset is not 28");
	auto constexpr FModePresetData_BluezoneDataTable_Offset = offsetof(FModePresetData, BluezoneDataTable);
	static_assert(FModePresetData_BluezoneDataTable_Offset == 0x30, "FModePresetData::BluezoneDataTable offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
