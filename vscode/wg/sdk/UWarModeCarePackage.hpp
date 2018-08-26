#pragma once
#include "EWarModeCarePackageKitType.hpp"
#include "EWarModeCarePackageKitType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWarModeCarePackage // Size: 0xA8
	: public UObject // Size: 0x30
{
private:
	typedef UWarModeCarePackage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1890); // id32("Class TslGame.WarModeCarePackage")
		return ptr;
	}
	float CarepackageStartDelayInSecRandomMIN; /* Ofs: 0x30 Size: 0x4 - FloatProperty TslGame.WarModeCarePackage.CarepackageStartDelayInSecRandomMIN */
	float CarepackageStartDelayInSecRandomMAX; /* Ofs: 0x34 Size: 0x4 - FloatProperty TslGame.WarModeCarePackage.CarepackageStartDelayInSecRandomMAX */
	float CarepackageNextSpawnTimeInSecRandomMIN; /* Ofs: 0x38 Size: 0x4 - FloatProperty TslGame.WarModeCarePackage.CarepackageNextSpawnTimeInSecRandomMIN */
	float CarepackageNextSpawnTimeInSecRandomMAX; /* Ofs: 0x3C Size: 0x4 - FloatProperty TslGame.WarModeCarePackage.CarepackageNextSpawnTimeInSecRandomMAX */
	TEnumAsByte<enum EWarModeCarePackageKitType> CarePackageType; /* Ofs: 0x40 Size: 0x1 - EnumProperty TslGame.WarModeCarePackage.CarePackageType */
	uint8_t UnknownData41[0x7];
	TMap<EWarModeCarePackageKitType, struct UClass> CarePackageItemSpawnerClassOfType; /* Ofs: 0x48 Size: 0x50 - MapProperty TslGame.WarModeCarePackage.CarePackageItemSpawnerClassOfType */
	ExternalPtr<struct UClass> AircraftCarePackageClass; /* Ofs: 0x98 Size: 0x8 - ClassProperty TslGame.WarModeCarePackage.AircraftCarePackageClass */
	uint8_t UnknownDataA0[0x8];


	inline bool SetCarepackageStartDelayInSecRandomMIN(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetCarepackageStartDelayInSecRandomMAX(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetCarepackageNextSpawnTimeInSecRandomMIN(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetCarepackageNextSpawnTimeInSecRandomMAX(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetCarePackageType(t_structHelper inst, TEnumAsByte<enum EWarModeCarePackageKitType> value) { inst.WriteOffset(0x40, value); }
	inline bool SetCarePackageItemSpawnerClassOfType(t_structHelper inst, TMap<EWarModeCarePackageKitType, struct UClass> value) { inst.WriteOffset(0x48, value); }
	inline bool SetAircraftCarePackageClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWarModeCarePackage = sizeof(UWarModeCarePackage); // 168
    static_assert(sizeof(UWarModeCarePackage) == 0xA8, "Size of UWarModeCarePackage is not correct.");
	auto constexpr UWarModeCarePackage_CarepackageStartDelayInSecRandomMIN_Offset = offsetof(UWarModeCarePackage, CarepackageStartDelayInSecRandomMIN);
	static_assert(UWarModeCarePackage_CarepackageStartDelayInSecRandomMIN_Offset == 0x30, "UWarModeCarePackage::CarepackageStartDelayInSecRandomMIN offset is not 30");
	auto constexpr UWarModeCarePackage_CarepackageStartDelayInSecRandomMAX_Offset = offsetof(UWarModeCarePackage, CarepackageStartDelayInSecRandomMAX);
	static_assert(UWarModeCarePackage_CarepackageStartDelayInSecRandomMAX_Offset == 0x34, "UWarModeCarePackage::CarepackageStartDelayInSecRandomMAX offset is not 34");
	auto constexpr UWarModeCarePackage_CarepackageNextSpawnTimeInSecRandomMIN_Offset = offsetof(UWarModeCarePackage, CarepackageNextSpawnTimeInSecRandomMIN);
	static_assert(UWarModeCarePackage_CarepackageNextSpawnTimeInSecRandomMIN_Offset == 0x38, "UWarModeCarePackage::CarepackageNextSpawnTimeInSecRandomMIN offset is not 38");
	auto constexpr UWarModeCarePackage_CarepackageNextSpawnTimeInSecRandomMAX_Offset = offsetof(UWarModeCarePackage, CarepackageNextSpawnTimeInSecRandomMAX);
	static_assert(UWarModeCarePackage_CarepackageNextSpawnTimeInSecRandomMAX_Offset == 0x3c, "UWarModeCarePackage::CarepackageNextSpawnTimeInSecRandomMAX offset is not 3c");
	auto constexpr UWarModeCarePackage_CarePackageType_Offset = offsetof(UWarModeCarePackage, CarePackageType);
	static_assert(UWarModeCarePackage_CarePackageType_Offset == 0x40, "UWarModeCarePackage::CarePackageType offset is not 40");
	auto constexpr UWarModeCarePackage_CarePackageItemSpawnerClassOfType_Offset = offsetof(UWarModeCarePackage, CarePackageItemSpawnerClassOfType);
	static_assert(UWarModeCarePackage_CarePackageItemSpawnerClassOfType_Offset == 0x48, "UWarModeCarePackage::CarePackageItemSpawnerClassOfType offset is not 48");
	auto constexpr UWarModeCarePackage_AircraftCarePackageClass_Offset = offsetof(UWarModeCarePackage, AircraftCarePackageClass);
	static_assert(UWarModeCarePackage_AircraftCarePackageClass_Offset == 0x98, "UWarModeCarePackage::AircraftCarePackageClass offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
