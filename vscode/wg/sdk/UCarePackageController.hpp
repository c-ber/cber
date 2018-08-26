#pragma once
#include "UModeController.hpp"
#include "FVector2D.hpp"
#include "EFlareDeploymentType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarePackageController // Size: 0x610
	: public UModeController // Size: 0x520
{
private:
	typedef UCarePackageController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1932); // id32("Class TslGame.CarePackageController")
		return ptr;
	}
//	ExternalPtr<struct UClass> AircraftCarePackageClass; /* Ofs: 0x518 Size: 0x8 - ClassProperty TslGame.CarePackageController.AircraftCarePackageClass */
	FVector2D StartDelay; /* Ofs: 0x520 Size: 0x8 - StructProperty TslGame.CarePackageController.StartDelay */
	FVector2D SpawnInterval; /* Ofs: 0x528 Size: 0x8 - StructProperty TslGame.CarePackageController.SpawnInterval */
	float FlyingHeight; /* Ofs: 0x530 Size: 0x4 - FloatProperty TslGame.CarePackageController.FlyingHeight */
	float CarePackageLifeTime; /* Ofs: 0x534 Size: 0x4 - FloatProperty TslGame.CarePackageController.CarePackageLifeTime */
	float WhiteZoneSpawnInnerRate; /* Ofs: 0x538 Size: 0x4 - FloatProperty TslGame.CarePackageController.WhiteZoneSpawnInnerRate */
	float DropAreaRate; /* Ofs: 0x53C Size: 0x4 - FloatProperty TslGame.CarePackageController.DropAreaRate */
	uint8_t UnknownData540[0x8];
	ExternalPtr<struct UClass> AircraftFlareGunCarePackageClass; /* Ofs: 0x548 Size: 0x8 - ClassProperty TslGame.CarePackageController.AircraftFlareGunCarePackageClass */
	ExternalPtr<struct UClass> AircraftFlareGunVehicleClass; /* Ofs: 0x550 Size: 0x8 - ClassProperty TslGame.CarePackageController.AircraftFlareGunVehicleClass */
	TMap<EFlareDeploymentType, struct UClass> FlareDeploymentTypeMap; /* Ofs: 0x558 Size: 0x50 - MapProperty TslGame.CarePackageController.FlareDeploymentTypeMap */
	float SpawnAreaRadius; /* Ofs: 0x5A8 Size: 0x4 - FloatProperty TslGame.CarePackageController.SpawnAreaRadius */
	uint8_t UnknownData5AC[0x4];
	TMap<EFlareDeploymentType, struct FVector2D> SpawnDelayMap; /* Ofs: 0x5B0 Size: 0x50 - MapProperty TslGame.CarePackageController.SpawnDelayMap */
	float FlyHeight_Flare; /* Ofs: 0x600 Size: 0x4 - FloatProperty TslGame.CarePackageController.FlyHeight_Flare */
	int32_t MaxConcurrentFlareAirplanes; /* Ofs: 0x604 Size: 0x4 - IntProperty TslGame.CarePackageController.MaxConcurrentFlareAirplanes */
	float MinWhitezoneDiameter; /* Ofs: 0x608 Size: 0x4 - FloatProperty TslGame.CarePackageController.MinWhitezoneDiameter */
	uint8_t UnknownData60C[0x4];


//	inline bool SetAircraftCarePackageClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x518, value); }
	inline bool SetStartDelay(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x520, value); }
	inline bool SetSpawnInterval(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x528, value); }
	inline bool SetFlyingHeight(t_structHelper inst, float value) { inst.WriteOffset(0x530, value); }
	inline bool SetCarePackageLifeTime(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
	inline bool SetWhiteZoneSpawnInnerRate(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetDropAreaRate(t_structHelper inst, float value) { inst.WriteOffset(0x53C, value); }
	inline bool SetAircraftFlareGunCarePackageClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x548, value); }
	inline bool SetAircraftFlareGunVehicleClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x550, value); }
	inline bool SetFlareDeploymentTypeMap(t_structHelper inst, TMap<EFlareDeploymentType, struct UClass> value) { inst.WriteOffset(0x558, value); }
	inline bool SetSpawnAreaRadius(t_structHelper inst, float value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetSpawnDelayMap(t_structHelper inst, TMap<EFlareDeploymentType, struct FVector2D> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetFlyHeight_Flare(t_structHelper inst, float value) { inst.WriteOffset(0x600, value); }
	inline bool SetMaxConcurrentFlareAirplanes(t_structHelper inst, int32_t value) { inst.WriteOffset(0x604, value); }
	inline bool SetMinWhitezoneDiameter(t_structHelper inst, float value) { inst.WriteOffset(0x608, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarePackageController = sizeof(UCarePackageController); // 1552
    static_assert(sizeof(UCarePackageController) == 0x610, "Size of UCarePackageController is not correct.");
//	auto constexpr UCarePackageController_AircraftCarePackageClass_Offset = offsetof(UCarePackageController, AircraftCarePackageClass);
//	static_assert(UCarePackageController_AircraftCarePackageClass_Offset == 0x518, "UCarePackageController::AircraftCarePackageClass offset is not 518");
	auto constexpr UCarePackageController_StartDelay_Offset = offsetof(UCarePackageController, StartDelay);
	static_assert(UCarePackageController_StartDelay_Offset == 0x520, "UCarePackageController::StartDelay offset is not 520");
	auto constexpr UCarePackageController_SpawnInterval_Offset = offsetof(UCarePackageController, SpawnInterval);
	static_assert(UCarePackageController_SpawnInterval_Offset == 0x528, "UCarePackageController::SpawnInterval offset is not 528");
	auto constexpr UCarePackageController_FlyingHeight_Offset = offsetof(UCarePackageController, FlyingHeight);
	static_assert(UCarePackageController_FlyingHeight_Offset == 0x530, "UCarePackageController::FlyingHeight offset is not 530");
	auto constexpr UCarePackageController_CarePackageLifeTime_Offset = offsetof(UCarePackageController, CarePackageLifeTime);
	static_assert(UCarePackageController_CarePackageLifeTime_Offset == 0x534, "UCarePackageController::CarePackageLifeTime offset is not 534");
	auto constexpr UCarePackageController_WhiteZoneSpawnInnerRate_Offset = offsetof(UCarePackageController, WhiteZoneSpawnInnerRate);
	static_assert(UCarePackageController_WhiteZoneSpawnInnerRate_Offset == 0x538, "UCarePackageController::WhiteZoneSpawnInnerRate offset is not 538");
	auto constexpr UCarePackageController_DropAreaRate_Offset = offsetof(UCarePackageController, DropAreaRate);
	static_assert(UCarePackageController_DropAreaRate_Offset == 0x53c, "UCarePackageController::DropAreaRate offset is not 53c");
	auto constexpr UCarePackageController_AircraftFlareGunCarePackageClass_Offset = offsetof(UCarePackageController, AircraftFlareGunCarePackageClass);
	static_assert(UCarePackageController_AircraftFlareGunCarePackageClass_Offset == 0x548, "UCarePackageController::AircraftFlareGunCarePackageClass offset is not 548");
	auto constexpr UCarePackageController_AircraftFlareGunVehicleClass_Offset = offsetof(UCarePackageController, AircraftFlareGunVehicleClass);
	static_assert(UCarePackageController_AircraftFlareGunVehicleClass_Offset == 0x550, "UCarePackageController::AircraftFlareGunVehicleClass offset is not 550");
	auto constexpr UCarePackageController_FlareDeploymentTypeMap_Offset = offsetof(UCarePackageController, FlareDeploymentTypeMap);
	static_assert(UCarePackageController_FlareDeploymentTypeMap_Offset == 0x558, "UCarePackageController::FlareDeploymentTypeMap offset is not 558");
	auto constexpr UCarePackageController_SpawnAreaRadius_Offset = offsetof(UCarePackageController, SpawnAreaRadius);
	static_assert(UCarePackageController_SpawnAreaRadius_Offset == 0x5a8, "UCarePackageController::SpawnAreaRadius offset is not 5a8");
	auto constexpr UCarePackageController_SpawnDelayMap_Offset = offsetof(UCarePackageController, SpawnDelayMap);
	static_assert(UCarePackageController_SpawnDelayMap_Offset == 0x5b0, "UCarePackageController::SpawnDelayMap offset is not 5b0");
	auto constexpr UCarePackageController_FlyHeight_Flare_Offset = offsetof(UCarePackageController, FlyHeight_Flare);
	static_assert(UCarePackageController_FlyHeight_Flare_Offset == 0x600, "UCarePackageController::FlyHeight_Flare offset is not 600");
	auto constexpr UCarePackageController_MaxConcurrentFlareAirplanes_Offset = offsetof(UCarePackageController, MaxConcurrentFlareAirplanes);
	static_assert(UCarePackageController_MaxConcurrentFlareAirplanes_Offset == 0x604, "UCarePackageController::MaxConcurrentFlareAirplanes offset is not 604");
	auto constexpr UCarePackageController_MinWhitezoneDiameter_Offset = offsetof(UCarePackageController, MinWhitezoneDiameter);
	static_assert(UCarePackageController_MinWhitezoneDiameter_Offset == 0x608, "UCarePackageController::MinWhitezoneDiameter offset is not 608");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
