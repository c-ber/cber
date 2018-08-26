#pragma once
#include "UPawn.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslFloatingVehicle // Size: 0x520
	: public UPawn // Size: 0x470
{
private:
	typedef UTslFloatingVehicle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1987); // id32("Class TslGame.TslFloatingVehicle")
		return ptr;
	}
	uint8_t UnknownData470[0x10];
	ExternalPtr<struct UGamePadInputAixsComponent> GamePadInputAixsComponent; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.GamePadInputAixsComponent */
	ExternalPtr<struct USkeletalMeshComponent> MeshComponent; /* Ofs: 0x488 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.MeshComponent */
	ExternalPtr<struct UBuoyancyForceComponent> BuoyancyForceComponent; /* Ofs: 0x490 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.BuoyancyForceComponent */
	ExternalPtr<struct UTslFloatingVehicleMovement> MovementComponent; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.MovementComponent */
	ExternalPtr<struct UTslVehicleHitComponent> VehicleHitComponent; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.VehicleHitComponent */
	ExternalPtr<struct UTslVehicleCommonComponent> VehicleCommonComponent; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.VehicleCommonComponent */
	ExternalPtr<struct UTslVehicleSeatComponent> VehicleSeatComponent; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.VehicleSeatComponent */
	ExternalPtr<struct UTslVehicleEffectComponent> VehicleEffectComponent; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.VehicleEffectComponent */
	ExternalPtr<struct UTslVehicleSyncComponent> VehicleSyncComponent; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.VehicleSyncComponent */
	ExternalPtr<struct UTslVehicleTempComponent> VehicleTempComponent; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.VehicleTempComponent */
	ExternalPtr<struct UTslHornComponent> TslHornComponent; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.TslHornComponent */
	ExternalPtr<struct UTslPawnInputBindingComponent> TslPawnInputBindingComponent; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.TslPawnInputBindingComponent */
	ExternalPtr<struct UTslGamepadPawnInputComponent> TslGamepadInputComponent; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.TslGamepadInputComponent */
	ExternalPtr<struct UAkComponent> AudioComEngine; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicle.AudioComEngine */
	TArray<ExternalPtr<struct UClass>> ComponentsToDestroyOnDedicatedServer; /* Ofs: 0x4F0 Size: 0x10 - ArrayProperty TslGame.TslFloatingVehicle.ComponentsToDestroyOnDedicatedServer */
	FName VehicleEnginePoint; /* Ofs: 0x500 Size: 0x8 - NameProperty TslGame.TslFloatingVehicle.VehicleEnginePoint */
	float VehicleEngineRadius; /* Ofs: 0x508 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicle.VehicleEngineRadius */
	float Health; /* Ofs: 0x50C Size: 0x4 - FloatProperty TslGame.TslFloatingVehicle.Health */
	float HealthMax; /* Ofs: 0x510 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicle.HealthMax */
	float Fuel; /* Ofs: 0x514 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicle.Fuel */
	float FuelMax; /* Ofs: 0x518 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicle.FuelMax */
	uint8_t UnknownData51C[0x4];


	inline bool SetGamePadInputAixsComponent(t_structHelper inst, ExternalPtr<struct UGamePadInputAixsComponent> value) { inst.WriteOffset(0x480, value); }
	inline bool SetMeshComponent(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x488, value); }
	inline bool SetBuoyancyForceComponent(t_structHelper inst, ExternalPtr<struct UBuoyancyForceComponent> value) { inst.WriteOffset(0x490, value); }
	inline bool SetMovementComponent(t_structHelper inst, ExternalPtr<struct UTslFloatingVehicleMovement> value) { inst.WriteOffset(0x498, value); }
	inline bool SetVehicleHitComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleHitComponent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetVehicleCommonComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleCommonComponent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetVehicleSeatComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleSeatComponent> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetVehicleEffectComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleEffectComponent> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetVehicleSyncComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleSyncComponent> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetVehicleTempComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleTempComponent> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetTslHornComponent(t_structHelper inst, ExternalPtr<struct UTslHornComponent> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetTslPawnInputBindingComponent(t_structHelper inst, ExternalPtr<struct UTslPawnInputBindingComponent> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetTslGamepadInputComponent(t_structHelper inst, ExternalPtr<struct UTslGamepadPawnInputComponent> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAudioComEngine(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetComponentsToDestroyOnDedicatedServer(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetVehicleEnginePoint(t_structHelper inst, FName value) { inst.WriteOffset(0x500, value); }
	inline bool SetVehicleEngineRadius(t_structHelper inst, float value) { inst.WriteOffset(0x508, value); }
	inline bool SetHealth(t_structHelper inst, float value) { inst.WriteOffset(0x50C, value); }
	inline bool SetHealthMax(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool SetFuel(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetFuelMax(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslFloatingVehicle = sizeof(UTslFloatingVehicle); // 1312
    static_assert(sizeof(UTslFloatingVehicle) == 0x520, "Size of UTslFloatingVehicle is not correct.");
	auto constexpr UTslFloatingVehicle_GamePadInputAixsComponent_Offset = offsetof(UTslFloatingVehicle, GamePadInputAixsComponent);
	static_assert(UTslFloatingVehicle_GamePadInputAixsComponent_Offset == 0x480, "UTslFloatingVehicle::GamePadInputAixsComponent offset is not 480");
	auto constexpr UTslFloatingVehicle_MeshComponent_Offset = offsetof(UTslFloatingVehicle, MeshComponent);
	static_assert(UTslFloatingVehicle_MeshComponent_Offset == 0x488, "UTslFloatingVehicle::MeshComponent offset is not 488");
	auto constexpr UTslFloatingVehicle_BuoyancyForceComponent_Offset = offsetof(UTslFloatingVehicle, BuoyancyForceComponent);
	static_assert(UTslFloatingVehicle_BuoyancyForceComponent_Offset == 0x490, "UTslFloatingVehicle::BuoyancyForceComponent offset is not 490");
	auto constexpr UTslFloatingVehicle_MovementComponent_Offset = offsetof(UTslFloatingVehicle, MovementComponent);
	static_assert(UTslFloatingVehicle_MovementComponent_Offset == 0x498, "UTslFloatingVehicle::MovementComponent offset is not 498");
	auto constexpr UTslFloatingVehicle_VehicleHitComponent_Offset = offsetof(UTslFloatingVehicle, VehicleHitComponent);
	static_assert(UTslFloatingVehicle_VehicleHitComponent_Offset == 0x4a0, "UTslFloatingVehicle::VehicleHitComponent offset is not 4a0");
	auto constexpr UTslFloatingVehicle_VehicleCommonComponent_Offset = offsetof(UTslFloatingVehicle, VehicleCommonComponent);
	static_assert(UTslFloatingVehicle_VehicleCommonComponent_Offset == 0x4a8, "UTslFloatingVehicle::VehicleCommonComponent offset is not 4a8");
	auto constexpr UTslFloatingVehicle_VehicleSeatComponent_Offset = offsetof(UTslFloatingVehicle, VehicleSeatComponent);
	static_assert(UTslFloatingVehicle_VehicleSeatComponent_Offset == 0x4b0, "UTslFloatingVehicle::VehicleSeatComponent offset is not 4b0");
	auto constexpr UTslFloatingVehicle_VehicleEffectComponent_Offset = offsetof(UTslFloatingVehicle, VehicleEffectComponent);
	static_assert(UTslFloatingVehicle_VehicleEffectComponent_Offset == 0x4b8, "UTslFloatingVehicle::VehicleEffectComponent offset is not 4b8");
	auto constexpr UTslFloatingVehicle_VehicleSyncComponent_Offset = offsetof(UTslFloatingVehicle, VehicleSyncComponent);
	static_assert(UTslFloatingVehicle_VehicleSyncComponent_Offset == 0x4c0, "UTslFloatingVehicle::VehicleSyncComponent offset is not 4c0");
	auto constexpr UTslFloatingVehicle_VehicleTempComponent_Offset = offsetof(UTslFloatingVehicle, VehicleTempComponent);
	static_assert(UTslFloatingVehicle_VehicleTempComponent_Offset == 0x4c8, "UTslFloatingVehicle::VehicleTempComponent offset is not 4c8");
	auto constexpr UTslFloatingVehicle_TslHornComponent_Offset = offsetof(UTslFloatingVehicle, TslHornComponent);
	static_assert(UTslFloatingVehicle_TslHornComponent_Offset == 0x4d0, "UTslFloatingVehicle::TslHornComponent offset is not 4d0");
	auto constexpr UTslFloatingVehicle_TslPawnInputBindingComponent_Offset = offsetof(UTslFloatingVehicle, TslPawnInputBindingComponent);
	static_assert(UTslFloatingVehicle_TslPawnInputBindingComponent_Offset == 0x4d8, "UTslFloatingVehicle::TslPawnInputBindingComponent offset is not 4d8");
	auto constexpr UTslFloatingVehicle_TslGamepadInputComponent_Offset = offsetof(UTslFloatingVehicle, TslGamepadInputComponent);
	static_assert(UTslFloatingVehicle_TslGamepadInputComponent_Offset == 0x4e0, "UTslFloatingVehicle::TslGamepadInputComponent offset is not 4e0");
	auto constexpr UTslFloatingVehicle_AudioComEngine_Offset = offsetof(UTslFloatingVehicle, AudioComEngine);
	static_assert(UTslFloatingVehicle_AudioComEngine_Offset == 0x4e8, "UTslFloatingVehicle::AudioComEngine offset is not 4e8");
	auto constexpr UTslFloatingVehicle_ComponentsToDestroyOnDedicatedServer_Offset = offsetof(UTslFloatingVehicle, ComponentsToDestroyOnDedicatedServer);
	static_assert(UTslFloatingVehicle_ComponentsToDestroyOnDedicatedServer_Offset == 0x4f0, "UTslFloatingVehicle::ComponentsToDestroyOnDedicatedServer offset is not 4f0");
	auto constexpr UTslFloatingVehicle_VehicleEnginePoint_Offset = offsetof(UTslFloatingVehicle, VehicleEnginePoint);
	static_assert(UTslFloatingVehicle_VehicleEnginePoint_Offset == 0x500, "UTslFloatingVehicle::VehicleEnginePoint offset is not 500");
	auto constexpr UTslFloatingVehicle_VehicleEngineRadius_Offset = offsetof(UTslFloatingVehicle, VehicleEngineRadius);
	static_assert(UTslFloatingVehicle_VehicleEngineRadius_Offset == 0x508, "UTslFloatingVehicle::VehicleEngineRadius offset is not 508");
	auto constexpr UTslFloatingVehicle_Health_Offset = offsetof(UTslFloatingVehicle, Health);
	static_assert(UTslFloatingVehicle_Health_Offset == 0x50c, "UTslFloatingVehicle::Health offset is not 50c");
	auto constexpr UTslFloatingVehicle_HealthMax_Offset = offsetof(UTslFloatingVehicle, HealthMax);
	static_assert(UTslFloatingVehicle_HealthMax_Offset == 0x510, "UTslFloatingVehicle::HealthMax offset is not 510");
	auto constexpr UTslFloatingVehicle_Fuel_Offset = offsetof(UTslFloatingVehicle, Fuel);
	static_assert(UTslFloatingVehicle_Fuel_Offset == 0x514, "UTslFloatingVehicle::Fuel offset is not 514");
	auto constexpr UTslFloatingVehicle_FuelMax_Offset = offsetof(UTslFloatingVehicle, FuelMax);
	static_assert(UTslFloatingVehicle_FuelMax_Offset == 0x518, "UTslFloatingVehicle::FuelMax offset is not 518");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
