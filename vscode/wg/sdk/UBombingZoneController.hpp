#pragma once
#include "UModeController.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBombingZoneController // Size: 0x540
	: public UModeController // Size: 0x520
{
private:
	typedef UBombingZoneController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1931); // id32("Class TslGame.BombingZoneController")
		return ptr;
	}
//	ExternalPtr<struct UClass> AircraftCombatClass; /* Ofs: 0x518 Size: 0x8 - ClassProperty TslGame.BombingZoneController.AircraftCombatClass */
	FVector2D StartDelay; /* Ofs: 0x520 Size: 0x8 - StructProperty TslGame.BombingZoneController.StartDelay */
	float FlyingHeight; /* Ofs: 0x528 Size: 0x4 - FloatProperty TslGame.BombingZoneController.FlyingHeight */
	FVector2D SpawnInterval; /* Ofs: 0x52C Size: 0x8 - StructProperty TslGame.BombingZoneController.SpawnInterval */
	float WhiteZoneSpawnInnerRate; /* Ofs: 0x534 Size: 0x4 - FloatProperty TslGame.BombingZoneController.WhiteZoneSpawnInnerRate */
	float BombingZoneLifeTime; /* Ofs: 0x538 Size: 0x4 - FloatProperty TslGame.BombingZoneController.BombingZoneLifeTime */
	uint8_t UnknownData53C[0x4];


//	inline bool SetAircraftCombatClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x518, value); }
	inline bool SetStartDelay(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x520, value); }
	inline bool SetFlyingHeight(t_structHelper inst, float value) { inst.WriteOffset(0x528, value); }
	inline bool SetSpawnInterval(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x52C, value); }
	inline bool SetWhiteZoneSpawnInnerRate(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
	inline bool SetBombingZoneLifeTime(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBombingZoneController = sizeof(UBombingZoneController); // 1344
    static_assert(sizeof(UBombingZoneController) == 0x540, "Size of UBombingZoneController is not correct.");
//	auto constexpr UBombingZoneController_AircraftCombatClass_Offset = offsetof(UBombingZoneController, AircraftCombatClass);
//	static_assert(UBombingZoneController_AircraftCombatClass_Offset == 0x518, "UBombingZoneController::AircraftCombatClass offset is not 518");
	auto constexpr UBombingZoneController_StartDelay_Offset = offsetof(UBombingZoneController, StartDelay);
	static_assert(UBombingZoneController_StartDelay_Offset == 0x520, "UBombingZoneController::StartDelay offset is not 520");
	auto constexpr UBombingZoneController_FlyingHeight_Offset = offsetof(UBombingZoneController, FlyingHeight);
	static_assert(UBombingZoneController_FlyingHeight_Offset == 0x528, "UBombingZoneController::FlyingHeight offset is not 528");
	auto constexpr UBombingZoneController_SpawnInterval_Offset = offsetof(UBombingZoneController, SpawnInterval);
	static_assert(UBombingZoneController_SpawnInterval_Offset == 0x52c, "UBombingZoneController::SpawnInterval offset is not 52c");
	auto constexpr UBombingZoneController_WhiteZoneSpawnInnerRate_Offset = offsetof(UBombingZoneController, WhiteZoneSpawnInnerRate);
	static_assert(UBombingZoneController_WhiteZoneSpawnInnerRate_Offset == 0x534, "UBombingZoneController::WhiteZoneSpawnInnerRate offset is not 534");
	auto constexpr UBombingZoneController_BombingZoneLifeTime_Offset = offsetof(UBombingZoneController, BombingZoneLifeTime);
	static_assert(UBombingZoneController_BombingZoneLifeTime_Offset == 0x538, "UBombingZoneController::BombingZoneLifeTime offset is not 538");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
