#pragma once
#include "FVector.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleWheel // Size: 0x110
	: public UObject // Size: 0x30
{
private:
	typedef UVehicleWheel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1314); // id32("Class PhysXVehicles.VehicleWheel")
		return ptr;
	}
	ExternalPtr<struct UStaticMesh> CollisionMesh; /* Ofs: 0x30 Size: 0x8 - ObjectProperty PhysXVehicles.VehicleWheel.CollisionMesh */
	uint8_t boolField38;
	uint8_t boolField39;
	uint8_t UnknownData3A[0x2];
	FVector Offset; /* Ofs: 0x3C Size: 0xC - StructProperty PhysXVehicles.VehicleWheel.Offset */
	float ShapeRadius; /* Ofs: 0x48 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.ShapeRadius */
	float ShapeWidth; /* Ofs: 0x4C Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.ShapeWidth */
	float Mass; /* Ofs: 0x50 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.Mass */
	float DampingRate; /* Ofs: 0x54 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.DampingRate */
	float SteerAngle; /* Ofs: 0x58 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.SteerAngle */
	uint8_t boolField5C;
	uint8_t UnknownData5D[0x3];
	ExternalPtr<struct UTireType> TireType; /* Ofs: 0x60 Size: 0x8 - ObjectProperty PhysXVehicles.VehicleWheel.TireType */
	ExternalPtr<struct UTireConfig> TireConfig; /* Ofs: 0x68 Size: 0x8 - ObjectProperty PhysXVehicles.VehicleWheel.TireConfig */
	float LatStiffMaxLoad; /* Ofs: 0x70 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.LatStiffMaxLoad */
	float LatStiffValue; /* Ofs: 0x74 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.LatStiffValue */
	float LongStiffValue; /* Ofs: 0x78 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.LongStiffValue */
	float SuspensionForceOffset; /* Ofs: 0x7C Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.SuspensionForceOffset */
	float SuspensionForceOffsetX; /* Ofs: 0x80 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.SuspensionForceOffsetX */
	FVector SuspensionTravelDir; /* Ofs: 0x84 Size: 0xC - StructProperty PhysXVehicles.VehicleWheel.SuspensionTravelDir */
	FVector TireForceOffset; /* Ofs: 0x90 Size: 0xC - StructProperty PhysXVehicles.VehicleWheel.TireForceOffset */
	float SuspensionMaxRaise; /* Ofs: 0x9C Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.SuspensionMaxRaise */
	float SuspensionMaxDrop; /* Ofs: 0xA0 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.SuspensionMaxDrop */
	float SuspensionNaturalFrequency; /* Ofs: 0xA4 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.SuspensionNaturalFrequency */
	float SuspensionDampingRatio; /* Ofs: 0xA8 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.SuspensionDampingRatio */
	float MaxBrakeTorque; /* Ofs: 0xAC Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.MaxBrakeTorque */
	float MaxHandBrakeTorque; /* Ofs: 0xB0 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.MaxHandBrakeTorque */
	TEnumAsByte<enum ECollisionChannel> QueryChannel; /* Ofs: 0xB4 Size: 0x1 - ByteProperty PhysXVehicles.VehicleWheel.QueryChannel */
	uint8_t UnknownDataB5[0x3];
	ExternalPtr<struct UWheeledVehicleMovementComponent> VehicleSim; /* Ofs: 0xB8 Size: 0x8 - ObjectProperty PhysXVehicles.VehicleWheel.VehicleSim */
	int32_t WheelIndex; /* Ofs: 0xC0 Size: 0x4 - IntProperty PhysXVehicles.VehicleWheel.WheelIndex */
	float DebugLongSlip; /* Ofs: 0xC4 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.DebugLongSlip */
	float DebugLatSlip; /* Ofs: 0xC8 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.DebugLatSlip */
	float DebugNormalizedTireLoad; /* Ofs: 0xCC Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.DebugNormalizedTireLoad */
	uint8_t UnknownDataD0[0x4];
	float DebugWheelTorque; /* Ofs: 0xD4 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.DebugWheelTorque */
	float DebugLongForce; /* Ofs: 0xD8 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.DebugLongForce */
	float DebugLatForce; /* Ofs: 0xDC Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.DebugLatForce */
	FVector Location; /* Ofs: 0xE0 Size: 0xC - StructProperty PhysXVehicles.VehicleWheel.Location */
	FVector OldLocation; /* Ofs: 0xEC Size: 0xC - StructProperty PhysXVehicles.VehicleWheel.OldLocation */
	FVector Velocity; /* Ofs: 0xF8 Size: 0xC - StructProperty PhysXVehicles.VehicleWheel.Velocity */
	float RealWheelRotationSpeed; /* Ofs: 0x104 Size: 0x4 - FloatProperty PhysXVehicles.VehicleWheel.RealWheelRotationSpeed */
	uint8_t UnknownData108[0x8];


	inline bool SetCollisionMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x30, value); }
	inline bool bDontCreateShape()
	{
		return boolField38& 0x1;
	}
	inline bool SetbDontCreateShape(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAutoAdjustCollisionSize()
	{
		return boolField39& 0x1;
	}
	inline bool SetbAutoAdjustCollisionSize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x39, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x3C, value); }
	inline bool SetShapeRadius(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetShapeWidth(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetMass(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetDampingRate(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetSteerAngle(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool bAffectedByHandbrake()
	{
		return boolField5C& 0x1;
	}
	inline bool SetbAffectedByHandbrake(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTireType(t_structHelper inst, ExternalPtr<struct UTireType> value) { inst.WriteOffset(0x60, value); }
	inline bool SetTireConfig(t_structHelper inst, ExternalPtr<struct UTireConfig> value) { inst.WriteOffset(0x68, value); }
	inline bool SetLatStiffMaxLoad(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetLatStiffValue(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool SetLongStiffValue(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
	inline bool SetSuspensionForceOffset(t_structHelper inst, float value) { inst.WriteOffset(0x7C, value); }
	inline bool SetSuspensionForceOffsetX(t_structHelper inst, float value) { inst.WriteOffset(0x80, value); }
	inline bool SetSuspensionTravelDir(t_structHelper inst, FVector value) { inst.WriteOffset(0x84, value); }
	inline bool SetTireForceOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x90, value); }
	inline bool SetSuspensionMaxRaise(t_structHelper inst, float value) { inst.WriteOffset(0x9C, value); }
	inline bool SetSuspensionMaxDrop(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
	inline bool SetSuspensionNaturalFrequency(t_structHelper inst, float value) { inst.WriteOffset(0xA4, value); }
	inline bool SetSuspensionDampingRatio(t_structHelper inst, float value) { inst.WriteOffset(0xA8, value); }
	inline bool SetMaxBrakeTorque(t_structHelper inst, float value) { inst.WriteOffset(0xAC, value); }
	inline bool SetMaxHandBrakeTorque(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
	inline bool SetQueryChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0xB4, value); }
	inline bool SetVehicleSim(t_structHelper inst, ExternalPtr<struct UWheeledVehicleMovementComponent> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetWheelIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC0, value); }
	inline bool SetDebugLongSlip(t_structHelper inst, float value) { inst.WriteOffset(0xC4, value); }
	inline bool SetDebugLatSlip(t_structHelper inst, float value) { inst.WriteOffset(0xC8, value); }
	inline bool SetDebugNormalizedTireLoad(t_structHelper inst, float value) { inst.WriteOffset(0xCC, value); }
	inline bool SetDebugWheelTorque(t_structHelper inst, float value) { inst.WriteOffset(0xD4, value); }
	inline bool SetDebugLongForce(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetDebugLatForce(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
	inline bool SetLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0xE0, value); }
	inline bool SetOldLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0xEC, value); }
	inline bool SetVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0xF8, value); }
	inline bool SetRealWheelRotationSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x104, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleWheel = sizeof(UVehicleWheel); // 272
    static_assert(sizeof(UVehicleWheel) == 0x110, "Size of UVehicleWheel is not correct.");
	auto constexpr UVehicleWheel_CollisionMesh_Offset = offsetof(UVehicleWheel, CollisionMesh);
	static_assert(UVehicleWheel_CollisionMesh_Offset == 0x30, "UVehicleWheel::CollisionMesh offset is not 30");
	auto constexpr UVehicleWheel_boolField38_Offset = offsetof(UVehicleWheel, boolField38);
	static_assert(UVehicleWheel_boolField38_Offset == 0x38, "UVehicleWheel::boolField38 offset is not 38");
	auto constexpr UVehicleWheel_boolField39_Offset = offsetof(UVehicleWheel, boolField39);
	static_assert(UVehicleWheel_boolField39_Offset == 0x39, "UVehicleWheel::boolField39 offset is not 39");
	auto constexpr UVehicleWheel_Offset_Offset = offsetof(UVehicleWheel, Offset);
	static_assert(UVehicleWheel_Offset_Offset == 0x3c, "UVehicleWheel::Offset offset is not 3c");
	auto constexpr UVehicleWheel_ShapeRadius_Offset = offsetof(UVehicleWheel, ShapeRadius);
	static_assert(UVehicleWheel_ShapeRadius_Offset == 0x48, "UVehicleWheel::ShapeRadius offset is not 48");
	auto constexpr UVehicleWheel_ShapeWidth_Offset = offsetof(UVehicleWheel, ShapeWidth);
	static_assert(UVehicleWheel_ShapeWidth_Offset == 0x4c, "UVehicleWheel::ShapeWidth offset is not 4c");
	auto constexpr UVehicleWheel_Mass_Offset = offsetof(UVehicleWheel, Mass);
	static_assert(UVehicleWheel_Mass_Offset == 0x50, "UVehicleWheel::Mass offset is not 50");
	auto constexpr UVehicleWheel_DampingRate_Offset = offsetof(UVehicleWheel, DampingRate);
	static_assert(UVehicleWheel_DampingRate_Offset == 0x54, "UVehicleWheel::DampingRate offset is not 54");
	auto constexpr UVehicleWheel_SteerAngle_Offset = offsetof(UVehicleWheel, SteerAngle);
	static_assert(UVehicleWheel_SteerAngle_Offset == 0x58, "UVehicleWheel::SteerAngle offset is not 58");
	auto constexpr UVehicleWheel_boolField5C_Offset = offsetof(UVehicleWheel, boolField5C);
	static_assert(UVehicleWheel_boolField5C_Offset == 0x5c, "UVehicleWheel::boolField5C offset is not 5c");
	auto constexpr UVehicleWheel_TireType_Offset = offsetof(UVehicleWheel, TireType);
	static_assert(UVehicleWheel_TireType_Offset == 0x60, "UVehicleWheel::TireType offset is not 60");
	auto constexpr UVehicleWheel_TireConfig_Offset = offsetof(UVehicleWheel, TireConfig);
	static_assert(UVehicleWheel_TireConfig_Offset == 0x68, "UVehicleWheel::TireConfig offset is not 68");
	auto constexpr UVehicleWheel_LatStiffMaxLoad_Offset = offsetof(UVehicleWheel, LatStiffMaxLoad);
	static_assert(UVehicleWheel_LatStiffMaxLoad_Offset == 0x70, "UVehicleWheel::LatStiffMaxLoad offset is not 70");
	auto constexpr UVehicleWheel_LatStiffValue_Offset = offsetof(UVehicleWheel, LatStiffValue);
	static_assert(UVehicleWheel_LatStiffValue_Offset == 0x74, "UVehicleWheel::LatStiffValue offset is not 74");
	auto constexpr UVehicleWheel_LongStiffValue_Offset = offsetof(UVehicleWheel, LongStiffValue);
	static_assert(UVehicleWheel_LongStiffValue_Offset == 0x78, "UVehicleWheel::LongStiffValue offset is not 78");
	auto constexpr UVehicleWheel_SuspensionForceOffset_Offset = offsetof(UVehicleWheel, SuspensionForceOffset);
	static_assert(UVehicleWheel_SuspensionForceOffset_Offset == 0x7c, "UVehicleWheel::SuspensionForceOffset offset is not 7c");
	auto constexpr UVehicleWheel_SuspensionForceOffsetX_Offset = offsetof(UVehicleWheel, SuspensionForceOffsetX);
	static_assert(UVehicleWheel_SuspensionForceOffsetX_Offset == 0x80, "UVehicleWheel::SuspensionForceOffsetX offset is not 80");
	auto constexpr UVehicleWheel_SuspensionTravelDir_Offset = offsetof(UVehicleWheel, SuspensionTravelDir);
	static_assert(UVehicleWheel_SuspensionTravelDir_Offset == 0x84, "UVehicleWheel::SuspensionTravelDir offset is not 84");
	auto constexpr UVehicleWheel_TireForceOffset_Offset = offsetof(UVehicleWheel, TireForceOffset);
	static_assert(UVehicleWheel_TireForceOffset_Offset == 0x90, "UVehicleWheel::TireForceOffset offset is not 90");
	auto constexpr UVehicleWheel_SuspensionMaxRaise_Offset = offsetof(UVehicleWheel, SuspensionMaxRaise);
	static_assert(UVehicleWheel_SuspensionMaxRaise_Offset == 0x9c, "UVehicleWheel::SuspensionMaxRaise offset is not 9c");
	auto constexpr UVehicleWheel_SuspensionMaxDrop_Offset = offsetof(UVehicleWheel, SuspensionMaxDrop);
	static_assert(UVehicleWheel_SuspensionMaxDrop_Offset == 0xa0, "UVehicleWheel::SuspensionMaxDrop offset is not a0");
	auto constexpr UVehicleWheel_SuspensionNaturalFrequency_Offset = offsetof(UVehicleWheel, SuspensionNaturalFrequency);
	static_assert(UVehicleWheel_SuspensionNaturalFrequency_Offset == 0xa4, "UVehicleWheel::SuspensionNaturalFrequency offset is not a4");
	auto constexpr UVehicleWheel_SuspensionDampingRatio_Offset = offsetof(UVehicleWheel, SuspensionDampingRatio);
	static_assert(UVehicleWheel_SuspensionDampingRatio_Offset == 0xa8, "UVehicleWheel::SuspensionDampingRatio offset is not a8");
	auto constexpr UVehicleWheel_MaxBrakeTorque_Offset = offsetof(UVehicleWheel, MaxBrakeTorque);
	static_assert(UVehicleWheel_MaxBrakeTorque_Offset == 0xac, "UVehicleWheel::MaxBrakeTorque offset is not ac");
	auto constexpr UVehicleWheel_MaxHandBrakeTorque_Offset = offsetof(UVehicleWheel, MaxHandBrakeTorque);
	static_assert(UVehicleWheel_MaxHandBrakeTorque_Offset == 0xb0, "UVehicleWheel::MaxHandBrakeTorque offset is not b0");
	auto constexpr UVehicleWheel_QueryChannel_Offset = offsetof(UVehicleWheel, QueryChannel);
	static_assert(UVehicleWheel_QueryChannel_Offset == 0xb4, "UVehicleWheel::QueryChannel offset is not b4");
	auto constexpr UVehicleWheel_VehicleSim_Offset = offsetof(UVehicleWheel, VehicleSim);
	static_assert(UVehicleWheel_VehicleSim_Offset == 0xb8, "UVehicleWheel::VehicleSim offset is not b8");
	auto constexpr UVehicleWheel_WheelIndex_Offset = offsetof(UVehicleWheel, WheelIndex);
	static_assert(UVehicleWheel_WheelIndex_Offset == 0xc0, "UVehicleWheel::WheelIndex offset is not c0");
	auto constexpr UVehicleWheel_DebugLongSlip_Offset = offsetof(UVehicleWheel, DebugLongSlip);
	static_assert(UVehicleWheel_DebugLongSlip_Offset == 0xc4, "UVehicleWheel::DebugLongSlip offset is not c4");
	auto constexpr UVehicleWheel_DebugLatSlip_Offset = offsetof(UVehicleWheel, DebugLatSlip);
	static_assert(UVehicleWheel_DebugLatSlip_Offset == 0xc8, "UVehicleWheel::DebugLatSlip offset is not c8");
	auto constexpr UVehicleWheel_DebugNormalizedTireLoad_Offset = offsetof(UVehicleWheel, DebugNormalizedTireLoad);
	static_assert(UVehicleWheel_DebugNormalizedTireLoad_Offset == 0xcc, "UVehicleWheel::DebugNormalizedTireLoad offset is not cc");
	auto constexpr UVehicleWheel_DebugWheelTorque_Offset = offsetof(UVehicleWheel, DebugWheelTorque);
	static_assert(UVehicleWheel_DebugWheelTorque_Offset == 0xd4, "UVehicleWheel::DebugWheelTorque offset is not d4");
	auto constexpr UVehicleWheel_DebugLongForce_Offset = offsetof(UVehicleWheel, DebugLongForce);
	static_assert(UVehicleWheel_DebugLongForce_Offset == 0xd8, "UVehicleWheel::DebugLongForce offset is not d8");
	auto constexpr UVehicleWheel_DebugLatForce_Offset = offsetof(UVehicleWheel, DebugLatForce);
	static_assert(UVehicleWheel_DebugLatForce_Offset == 0xdc, "UVehicleWheel::DebugLatForce offset is not dc");
	auto constexpr UVehicleWheel_Location_Offset = offsetof(UVehicleWheel, Location);
	static_assert(UVehicleWheel_Location_Offset == 0xe0, "UVehicleWheel::Location offset is not e0");
	auto constexpr UVehicleWheel_OldLocation_Offset = offsetof(UVehicleWheel, OldLocation);
	static_assert(UVehicleWheel_OldLocation_Offset == 0xec, "UVehicleWheel::OldLocation offset is not ec");
	auto constexpr UVehicleWheel_Velocity_Offset = offsetof(UVehicleWheel, Velocity);
	static_assert(UVehicleWheel_Velocity_Offset == 0xf8, "UVehicleWheel::Velocity offset is not f8");
	auto constexpr UVehicleWheel_RealWheelRotationSpeed_Offset = offsetof(UVehicleWheel, RealWheelRotationSpeed);
	static_assert(UVehicleWheel_RealWheelRotationSpeed_Offset == 0x104, "UVehicleWheel::RealWheelRotationSpeed offset is not 104");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
