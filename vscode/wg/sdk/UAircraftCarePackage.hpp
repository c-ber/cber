#pragma once
#include "UTslAircraftVehicle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAircraftCarePackage // Size: 0x5B0
	: public UTslAircraftVehicle // Size: 0x530
{
private:
	typedef UAircraftCarePackage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1889); // id32("Class TslGame.AircraftCarePackage")
		return ptr;
	}
//	ExternalPtr<struct UClass> CarePackageItemSpawnerClass; /* Ofs: 0x528 Size: 0x8 - ClassProperty TslGame.AircraftCarePackage.CarePackageItemSpawnerClass */
	ExternalPtr<struct UClass> CarePackageItemClass; /* Ofs: 0x530 Size: 0x8 - ClassProperty TslGame.AircraftCarePackage.CarePackageItemClass */
	TArray<struct FDropCarePackageTableData> DropCarePackageTableData; /* Ofs: 0x538 Size: 0x10 - ArrayProperty TslGame.AircraftCarePackage.DropCarePackageTableData */
	uint8_t boolField548;
	uint8_t UnknownData549[0x7];
	ExternalPtr<struct UClass> CustomCarepackageItem; /* Ofs: 0x550 Size: 0x8 - ClassProperty TslGame.AircraftCarePackage.CustomCarepackageItem */
	ExternalPtr<struct UGeneralItemSpawner> CarePackageItemSpawner; /* Ofs: 0x558 Size: 0x8 - ObjectProperty TslGame.AircraftCarePackage.CarePackageItemSpawner */
	TArray<ExternalPtr<struct UTslPassCarePackageArea>> PassCarePackageAreas; /* Ofs: 0x560 Size: 0x10 - ArrayProperty TslGame.AircraftCarePackage.PassCarePackageAreas */
	TArray<ExternalPtr<struct UTslPassCarePackageAreaRectangle>> PassCarePackageAreasRectangle; /* Ofs: 0x570 Size: 0x10 - ArrayProperty TslGame.AircraftCarePackage.PassCarePackageAreasRectangle */
	uint8_t UnknownData580[0x30];


//	inline bool SetCarePackageItemSpawnerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x528, value); }
	inline bool SetCarePackageItemClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x530, value); }
	inline bool SetDropCarePackageTableData(t_structHelper inst, TArray<struct FDropCarePackageTableData> value) { inst.WriteOffset(0x538, value); }
	inline bool bUseCustomCarepackageItem()
	{
		return boolField548& 0x1;
	}
	inline bool SetbUseCustomCarepackageItem(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x548, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCustomCarepackageItem(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x550, value); }
	inline bool SetCarePackageItemSpawner(t_structHelper inst, ExternalPtr<struct UGeneralItemSpawner> value) { inst.WriteOffset(0x558, value); }
	inline bool SetPassCarePackageAreas(t_structHelper inst, TArray<ExternalPtr<struct UTslPassCarePackageArea>> value) { inst.WriteOffset(0x560, value); }
	inline bool SetPassCarePackageAreasRectangle(t_structHelper inst, TArray<ExternalPtr<struct UTslPassCarePackageAreaRectangle>> value) { inst.WriteOffset(0x570, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAircraftCarePackage = sizeof(UAircraftCarePackage); // 1456
    static_assert(sizeof(UAircraftCarePackage) == 0x5B0, "Size of UAircraftCarePackage is not correct.");
//	auto constexpr UAircraftCarePackage_CarePackageItemSpawnerClass_Offset = offsetof(UAircraftCarePackage, CarePackageItemSpawnerClass);
//	static_assert(UAircraftCarePackage_CarePackageItemSpawnerClass_Offset == 0x528, "UAircraftCarePackage::CarePackageItemSpawnerClass offset is not 528");
	auto constexpr UAircraftCarePackage_CarePackageItemClass_Offset = offsetof(UAircraftCarePackage, CarePackageItemClass);
	static_assert(UAircraftCarePackage_CarePackageItemClass_Offset == 0x530, "UAircraftCarePackage::CarePackageItemClass offset is not 530");
	auto constexpr UAircraftCarePackage_DropCarePackageTableData_Offset = offsetof(UAircraftCarePackage, DropCarePackageTableData);
	static_assert(UAircraftCarePackage_DropCarePackageTableData_Offset == 0x538, "UAircraftCarePackage::DropCarePackageTableData offset is not 538");
	auto constexpr UAircraftCarePackage_boolField548_Offset = offsetof(UAircraftCarePackage, boolField548);
	static_assert(UAircraftCarePackage_boolField548_Offset == 0x548, "UAircraftCarePackage::boolField548 offset is not 548");
	auto constexpr UAircraftCarePackage_CustomCarepackageItem_Offset = offsetof(UAircraftCarePackage, CustomCarepackageItem);
	static_assert(UAircraftCarePackage_CustomCarepackageItem_Offset == 0x550, "UAircraftCarePackage::CustomCarepackageItem offset is not 550");
	auto constexpr UAircraftCarePackage_CarePackageItemSpawner_Offset = offsetof(UAircraftCarePackage, CarePackageItemSpawner);
	static_assert(UAircraftCarePackage_CarePackageItemSpawner_Offset == 0x558, "UAircraftCarePackage::CarePackageItemSpawner offset is not 558");
	auto constexpr UAircraftCarePackage_PassCarePackageAreas_Offset = offsetof(UAircraftCarePackage, PassCarePackageAreas);
	static_assert(UAircraftCarePackage_PassCarePackageAreas_Offset == 0x560, "UAircraftCarePackage::PassCarePackageAreas offset is not 560");
	auto constexpr UAircraftCarePackage_PassCarePackageAreasRectangle_Offset = offsetof(UAircraftCarePackage, PassCarePackageAreasRectangle);
	static_assert(UAircraftCarePackage_PassCarePackageAreasRectangle_Offset == 0x570, "UAircraftCarePackage::PassCarePackageAreasRectangle offset is not 570");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
