#pragma once
#include "UActor.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleDrop // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UTslVehicleDrop t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1888); // id32("Class TslGame.TslVehicleDrop")
		return ptr;
	}
//	ExternalPtr<struct UBoxComponent> CollisionComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslVehicleDrop.CollisionComponent */
	ExternalPtr<struct UProjectileMovementComponent> MovementComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslVehicleDrop.MovementComponent */
	ExternalPtr<struct UClass> VehicleSpawnClass; /* Ofs: 0x418 Size: 0x8 - ClassProperty TslGame.TslVehicleDrop.VehicleSpawnClass */
	float AltitudeCheck_LoopTime; /* Ofs: 0x420 Size: 0x4 - FloatProperty TslGame.TslVehicleDrop.AltitudeCheck_LoopTime */
	float AltitudeCheck_ArriveDistance; /* Ofs: 0x424 Size: 0x4 - FloatProperty TslGame.TslVehicleDrop.AltitudeCheck_ArriveDistance */
	float AltitudeCheck_SphereTraceRadius; /* Ofs: 0x428 Size: 0x4 - FloatProperty TslGame.TslVehicleDrop.AltitudeCheck_SphereTraceRadius */
	float AltitudeCheck_TraceDistance; /* Ofs: 0x42C Size: 0x4 - FloatProperty TslGame.TslVehicleDrop.AltitudeCheck_TraceDistance */
	uint8_t boolField430;
	uint8_t boolField431;
	uint8_t UnknownData432[0x2];
	FVector2D VelocityClampInMap; /* Ofs: 0x434 Size: 0x8 - StructProperty TslGame.TslVehicleDrop.VelocityClampInMap */
	FVector2D VelocityClampOutMap; /* Ofs: 0x43C Size: 0x8 - StructProperty TslGame.TslVehicleDrop.VelocityClampOutMap */
	uint8_t UnknownData444[0x4];
	ExternalPtr<struct USkeletalMeshComponent> FakeMesh; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.TslVehicleDrop.FakeMesh */
	uint8_t boolField450;
	uint8_t UnknownData451[0xF];


//	inline bool SetCollisionComponent(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetMovementComponent(t_structHelper inst, ExternalPtr<struct UProjectileMovementComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetVehicleSpawnClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetAltitudeCheck_LoopTime(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetAltitudeCheck_ArriveDistance(t_structHelper inst, float value) { inst.WriteOffset(0x424, value); }
	inline bool SetAltitudeCheck_SphereTraceRadius(t_structHelper inst, float value) { inst.WriteOffset(0x428, value); }
	inline bool SetAltitudeCheck_TraceDistance(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
	inline bool bCorrectForGroundStaticMeshes()
	{
		return boolField430& 0x1;
	}
	inline bool SetbCorrectForGroundStaticMeshes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x430, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseAltitudeVelocityClamp()
	{
		return boolField431& 0x1;
	}
	inline bool SetbUseAltitudeVelocityClamp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x431, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVelocityClampInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x434, value); }
	inline bool SetVelocityClampOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x43C, value); }
	inline bool SetFakeMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x448, value); }
	inline bool bDrawAltCheckDebug()
	{
		return boolField450& 0x1;
	}
	inline bool SetbDrawAltCheckDebug(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x450, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleDrop = sizeof(UTslVehicleDrop); // 1120
    static_assert(sizeof(UTslVehicleDrop) == 0x460, "Size of UTslVehicleDrop is not correct.");
//	auto constexpr UTslVehicleDrop_CollisionComponent_Offset = offsetof(UTslVehicleDrop, CollisionComponent);
//	static_assert(UTslVehicleDrop_CollisionComponent_Offset == 0x408, "UTslVehicleDrop::CollisionComponent offset is not 408");
	auto constexpr UTslVehicleDrop_MovementComponent_Offset = offsetof(UTslVehicleDrop, MovementComponent);
	static_assert(UTslVehicleDrop_MovementComponent_Offset == 0x410, "UTslVehicleDrop::MovementComponent offset is not 410");
	auto constexpr UTslVehicleDrop_VehicleSpawnClass_Offset = offsetof(UTslVehicleDrop, VehicleSpawnClass);
	static_assert(UTslVehicleDrop_VehicleSpawnClass_Offset == 0x418, "UTslVehicleDrop::VehicleSpawnClass offset is not 418");
	auto constexpr UTslVehicleDrop_AltitudeCheck_LoopTime_Offset = offsetof(UTslVehicleDrop, AltitudeCheck_LoopTime);
	static_assert(UTslVehicleDrop_AltitudeCheck_LoopTime_Offset == 0x420, "UTslVehicleDrop::AltitudeCheck_LoopTime offset is not 420");
	auto constexpr UTslVehicleDrop_AltitudeCheck_ArriveDistance_Offset = offsetof(UTslVehicleDrop, AltitudeCheck_ArriveDistance);
	static_assert(UTslVehicleDrop_AltitudeCheck_ArriveDistance_Offset == 0x424, "UTslVehicleDrop::AltitudeCheck_ArriveDistance offset is not 424");
	auto constexpr UTslVehicleDrop_AltitudeCheck_SphereTraceRadius_Offset = offsetof(UTslVehicleDrop, AltitudeCheck_SphereTraceRadius);
	static_assert(UTslVehicleDrop_AltitudeCheck_SphereTraceRadius_Offset == 0x428, "UTslVehicleDrop::AltitudeCheck_SphereTraceRadius offset is not 428");
	auto constexpr UTslVehicleDrop_AltitudeCheck_TraceDistance_Offset = offsetof(UTslVehicleDrop, AltitudeCheck_TraceDistance);
	static_assert(UTslVehicleDrop_AltitudeCheck_TraceDistance_Offset == 0x42c, "UTslVehicleDrop::AltitudeCheck_TraceDistance offset is not 42c");
	auto constexpr UTslVehicleDrop_boolField430_Offset = offsetof(UTslVehicleDrop, boolField430);
	static_assert(UTslVehicleDrop_boolField430_Offset == 0x430, "UTslVehicleDrop::boolField430 offset is not 430");
	auto constexpr UTslVehicleDrop_boolField431_Offset = offsetof(UTslVehicleDrop, boolField431);
	static_assert(UTslVehicleDrop_boolField431_Offset == 0x431, "UTslVehicleDrop::boolField431 offset is not 431");
	auto constexpr UTslVehicleDrop_VelocityClampInMap_Offset = offsetof(UTslVehicleDrop, VelocityClampInMap);
	static_assert(UTslVehicleDrop_VelocityClampInMap_Offset == 0x434, "UTslVehicleDrop::VelocityClampInMap offset is not 434");
	auto constexpr UTslVehicleDrop_VelocityClampOutMap_Offset = offsetof(UTslVehicleDrop, VelocityClampOutMap);
	static_assert(UTslVehicleDrop_VelocityClampOutMap_Offset == 0x43c, "UTslVehicleDrop::VelocityClampOutMap offset is not 43c");
	auto constexpr UTslVehicleDrop_FakeMesh_Offset = offsetof(UTslVehicleDrop, FakeMesh);
	static_assert(UTslVehicleDrop_FakeMesh_Offset == 0x448, "UTslVehicleDrop::FakeMesh offset is not 448");
	auto constexpr UTslVehicleDrop_boolField450_Offset = offsetof(UTslVehicleDrop, boolField450);
	static_assert(UTslVehicleDrop_boolField450_Offset == 0x450, "UTslVehicleDrop::boolField450 offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
