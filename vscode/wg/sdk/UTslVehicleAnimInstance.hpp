#pragma once
#include "UVehicleAnimInstance.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleAnimInstance // Size: 0x9A0
	: public UVehicleAnimInstance // Size: 0x890
{
private:
	typedef UTslVehicleAnimInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1604); // id32("Class TslGame.TslVehicleAnimInstance")
		return ptr;
	}
//	FRotator Rot_Steering_Left; /* Ofs: 0x888 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_Steering_Left */
	uint8_t UnknownData890[0x4];
	FRotator Rot_Steering_Right; /* Ofs: 0x894 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_Steering_Right */
	FRotator Rot_Steering_Final; /* Ofs: 0x8A0 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_Steering_Final */
	FRotator Rot_Speed_Left; /* Ofs: 0x8AC Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_Speed_Left */
	FRotator Rot_Speed_Right; /* Ofs: 0x8B8 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_Speed_Right */
	float SpeedMax; /* Ofs: 0x8C4 Size: 0x4 - FloatProperty TslGame.TslVehicleAnimInstance.SpeedMax */
	FRotator Rot_Speed_Final; /* Ofs: 0x8C8 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_Speed_Final */
	FRotator Rot_RPM_Left; /* Ofs: 0x8D4 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_RPM_Left */
	FRotator Rot_RPM_Right; /* Ofs: 0x8E0 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_RPM_Right */
	float RPMMax; /* Ofs: 0x8EC Size: 0x4 - FloatProperty TslGame.TslVehicleAnimInstance.RPMMax */
	uint8_t boolField8F0;
	uint8_t boolField8F1;
	uint8_t UnknownData8F2[0x2];
	FRotator Rot_RPM_Final; /* Ofs: 0x8F4 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.Rot_RPM_Final */
	ExternalPtr<struct UTslWheeledVehicle> VehicleRef; /* Ofs: 0x900 Size: 0x8 - ObjectProperty TslGame.TslVehicleAnimInstance.VehicleRef */
	ExternalPtr<struct UTslWheeledVehicleMovement> VehicleMovementRef; /* Ofs: 0x908 Size: 0x8 - ObjectProperty TslGame.TslVehicleAnimInstance.VehicleMovementRef */
	FRotator SteerFL; /* Ofs: 0x910 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.SteerFL */
	FRotator SteerFR; /* Ofs: 0x91C Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.SteerFR */
	uint8_t boolField928;
	uint8_t UnknownData929[0x3];
	int32_t SteerFLindex; /* Ofs: 0x92C Size: 0x4 - IntProperty TslGame.TslVehicleAnimInstance.SteerFLindex */
	int32_t SteerFRindex; /* Ofs: 0x930 Size: 0x4 - IntProperty TslGame.TslVehicleAnimInstance.SteerFRindex */
	int32_t DriveRLindex; /* Ofs: 0x934 Size: 0x4 - IntProperty TslGame.TslVehicleAnimInstance.DriveRLindex */
	int32_t DriveRRindex; /* Ofs: 0x938 Size: 0x4 - IntProperty TslGame.TslVehicleAnimInstance.DriveRRindex */
	int32_t DriveshaftRwheelIndex; /* Ofs: 0x93C Size: 0x4 - IntProperty TslGame.TslVehicleAnimInstance.DriveshaftRwheelIndex */
	FVector SteerFLmask; /* Ofs: 0x940 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.SteerFLmask */
	FVector SteerFRmask; /* Ofs: 0x94C Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.SteerFRmask */
	uint8_t boolField958;
	uint8_t UnknownData959[0x3];
	FVector RotationMaskForDriveShaft; /* Ofs: 0x95C Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.RotationMaskForDriveShaft */
	FRotator DriveshaftR_Rot; /* Ofs: 0x968 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.DriveshaftR_Rot */
	uint8_t boolField974;
	uint8_t boolField975;
	uint8_t boolField976;
	uint8_t UnknownData977[0x1];
	float ForceScale; /* Ofs: 0x978 Size: 0x4 - FloatProperty TslGame.TslVehicleAnimInstance.ForceScale */
	float DragScale; /* Ofs: 0x97C Size: 0x4 - FloatProperty TslGame.TslVehicleAnimInstance.DragScale */
	float DragClamp; /* Ofs: 0x980 Size: 0x4 - FloatProperty TslGame.TslVehicleAnimInstance.DragClamp */
	float GravityScale; /* Ofs: 0x984 Size: 0x4 - FloatProperty TslGame.TslVehicleAnimInstance.GravityScale */
	FVector ExternalForceAD; /* Ofs: 0x988 Size: 0xC - StructProperty TslGame.TslVehicleAnimInstance.ExternalForceAD */
	uint8_t UnknownData994[0xC];


//	inline bool SetRot_Steering_Left(t_structHelper inst, FRotator value) { inst.WriteOffset(0x888, value); }
	inline bool SetRot_Steering_Right(t_structHelper inst, FRotator value) { inst.WriteOffset(0x894, value); }
	inline bool SetRot_Steering_Final(t_structHelper inst, FRotator value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetRot_Speed_Left(t_structHelper inst, FRotator value) { inst.WriteOffset(0x8AC, value); }
	inline bool SetRot_Speed_Right(t_structHelper inst, FRotator value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetSpeedMax(t_structHelper inst, float value) { inst.WriteOffset(0x8C4, value); }
	inline bool SetRot_Speed_Final(t_structHelper inst, FRotator value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetRot_RPM_Left(t_structHelper inst, FRotator value) { inst.WriteOffset(0x8D4, value); }
	inline bool SetRot_RPM_Right(t_structHelper inst, FRotator value) { inst.WriteOffset(0x8E0, value); }
	inline bool SetRPMMax(t_structHelper inst, float value) { inst.WriteOffset(0x8EC, value); }
	inline bool bTickIndicators()
	{
		return boolField8F0& 0x1;
	}
	inline bool SetbTickIndicators(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseAbsoluteSteeringRotation()
	{
		return boolField8F1& 0x1;
	}
	inline bool SetbUseAbsoluteSteeringRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRot_RPM_Final(t_structHelper inst, FRotator value) { inst.WriteOffset(0x8F4, value); }
	inline bool SetVehicleRef(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicle> value) { inst.WriteOffset(0x900, value); }
	inline bool SetVehicleMovementRef(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicleMovement> value) { inst.WriteOffset(0x908, value); }
	inline bool SetSteerFL(t_structHelper inst, FRotator value) { inst.WriteOffset(0x910, value); }
	inline bool SetSteerFR(t_structHelper inst, FRotator value) { inst.WriteOffset(0x91C, value); }
	inline bool bCalculateFrontAxisAngles()
	{
		return boolField928& 0x1;
	}
	inline bool SetbCalculateFrontAxisAngles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x928, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSteerFLindex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x92C, value); }
	inline bool SetSteerFRindex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x930, value); }
	inline bool SetDriveRLindex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x934, value); }
	inline bool SetDriveRRindex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x938, value); }
	inline bool SetDriveshaftRwheelIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x93C, value); }
	inline bool SetSteerFLmask(t_structHelper inst, FVector value) { inst.WriteOffset(0x940, value); }
	inline bool SetSteerFRmask(t_structHelper inst, FVector value) { inst.WriteOffset(0x94C, value); }
	inline bool bCalculateRearDriveShaftRot()
	{
		return boolField958& 0x1;
	}
	inline bool SetbCalculateRearDriveShaftRot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x958, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRotationMaskForDriveShaft(t_structHelper inst, FVector value) { inst.WriteOffset(0x95C, value); }
	inline bool SetDriveshaftR_Rot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x968, value); }
	inline bool bCalculateAnimDynamics()
	{
		return boolField974& 0x1;
	}
	inline bool SetbCalculateAnimDynamics(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x974, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCalculateAnimDynamicsDrag()
	{
		return boolField975& 0x1;
	}
	inline bool SetbCalculateAnimDynamicsDrag(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x975, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCalculateAnimDynamicsGravity()
	{
		return boolField976& 0x1;
	}
	inline bool SetbCalculateAnimDynamicsGravity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x976, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetForceScale(t_structHelper inst, float value) { inst.WriteOffset(0x978, value); }
	inline bool SetDragScale(t_structHelper inst, float value) { inst.WriteOffset(0x97C, value); }
	inline bool SetDragClamp(t_structHelper inst, float value) { inst.WriteOffset(0x980, value); }
	inline bool SetGravityScale(t_structHelper inst, float value) { inst.WriteOffset(0x984, value); }
	inline bool SetExternalForceAD(t_structHelper inst, FVector value) { inst.WriteOffset(0x988, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleAnimInstance = sizeof(UTslVehicleAnimInstance); // 2464
    static_assert(sizeof(UTslVehicleAnimInstance) == 0x9A0, "Size of UTslVehicleAnimInstance is not correct.");
//	auto constexpr UTslVehicleAnimInstance_Rot_Steering_Left_Offset = offsetof(UTslVehicleAnimInstance, Rot_Steering_Left);
//	static_assert(UTslVehicleAnimInstance_Rot_Steering_Left_Offset == 0x888, "UTslVehicleAnimInstance::Rot_Steering_Left offset is not 888");
	auto constexpr UTslVehicleAnimInstance_Rot_Steering_Right_Offset = offsetof(UTslVehicleAnimInstance, Rot_Steering_Right);
	static_assert(UTslVehicleAnimInstance_Rot_Steering_Right_Offset == 0x894, "UTslVehicleAnimInstance::Rot_Steering_Right offset is not 894");
	auto constexpr UTslVehicleAnimInstance_Rot_Steering_Final_Offset = offsetof(UTslVehicleAnimInstance, Rot_Steering_Final);
	static_assert(UTslVehicleAnimInstance_Rot_Steering_Final_Offset == 0x8a0, "UTslVehicleAnimInstance::Rot_Steering_Final offset is not 8a0");
	auto constexpr UTslVehicleAnimInstance_Rot_Speed_Left_Offset = offsetof(UTslVehicleAnimInstance, Rot_Speed_Left);
	static_assert(UTslVehicleAnimInstance_Rot_Speed_Left_Offset == 0x8ac, "UTslVehicleAnimInstance::Rot_Speed_Left offset is not 8ac");
	auto constexpr UTslVehicleAnimInstance_Rot_Speed_Right_Offset = offsetof(UTslVehicleAnimInstance, Rot_Speed_Right);
	static_assert(UTslVehicleAnimInstance_Rot_Speed_Right_Offset == 0x8b8, "UTslVehicleAnimInstance::Rot_Speed_Right offset is not 8b8");
	auto constexpr UTslVehicleAnimInstance_SpeedMax_Offset = offsetof(UTslVehicleAnimInstance, SpeedMax);
	static_assert(UTslVehicleAnimInstance_SpeedMax_Offset == 0x8c4, "UTslVehicleAnimInstance::SpeedMax offset is not 8c4");
	auto constexpr UTslVehicleAnimInstance_Rot_Speed_Final_Offset = offsetof(UTslVehicleAnimInstance, Rot_Speed_Final);
	static_assert(UTslVehicleAnimInstance_Rot_Speed_Final_Offset == 0x8c8, "UTslVehicleAnimInstance::Rot_Speed_Final offset is not 8c8");
	auto constexpr UTslVehicleAnimInstance_Rot_RPM_Left_Offset = offsetof(UTslVehicleAnimInstance, Rot_RPM_Left);
	static_assert(UTslVehicleAnimInstance_Rot_RPM_Left_Offset == 0x8d4, "UTslVehicleAnimInstance::Rot_RPM_Left offset is not 8d4");
	auto constexpr UTslVehicleAnimInstance_Rot_RPM_Right_Offset = offsetof(UTslVehicleAnimInstance, Rot_RPM_Right);
	static_assert(UTslVehicleAnimInstance_Rot_RPM_Right_Offset == 0x8e0, "UTslVehicleAnimInstance::Rot_RPM_Right offset is not 8e0");
	auto constexpr UTslVehicleAnimInstance_RPMMax_Offset = offsetof(UTslVehicleAnimInstance, RPMMax);
	static_assert(UTslVehicleAnimInstance_RPMMax_Offset == 0x8ec, "UTslVehicleAnimInstance::RPMMax offset is not 8ec");
	auto constexpr UTslVehicleAnimInstance_boolField8F0_Offset = offsetof(UTslVehicleAnimInstance, boolField8F0);
	static_assert(UTslVehicleAnimInstance_boolField8F0_Offset == 0x8f0, "UTslVehicleAnimInstance::boolField8F0 offset is not 8f0");
	auto constexpr UTslVehicleAnimInstance_boolField8F1_Offset = offsetof(UTslVehicleAnimInstance, boolField8F1);
	static_assert(UTslVehicleAnimInstance_boolField8F1_Offset == 0x8f1, "UTslVehicleAnimInstance::boolField8F1 offset is not 8f1");
	auto constexpr UTslVehicleAnimInstance_Rot_RPM_Final_Offset = offsetof(UTslVehicleAnimInstance, Rot_RPM_Final);
	static_assert(UTslVehicleAnimInstance_Rot_RPM_Final_Offset == 0x8f4, "UTslVehicleAnimInstance::Rot_RPM_Final offset is not 8f4");
	auto constexpr UTslVehicleAnimInstance_VehicleRef_Offset = offsetof(UTslVehicleAnimInstance, VehicleRef);
	static_assert(UTslVehicleAnimInstance_VehicleRef_Offset == 0x900, "UTslVehicleAnimInstance::VehicleRef offset is not 900");
	auto constexpr UTslVehicleAnimInstance_VehicleMovementRef_Offset = offsetof(UTslVehicleAnimInstance, VehicleMovementRef);
	static_assert(UTslVehicleAnimInstance_VehicleMovementRef_Offset == 0x908, "UTslVehicleAnimInstance::VehicleMovementRef offset is not 908");
	auto constexpr UTslVehicleAnimInstance_SteerFL_Offset = offsetof(UTslVehicleAnimInstance, SteerFL);
	static_assert(UTslVehicleAnimInstance_SteerFL_Offset == 0x910, "UTslVehicleAnimInstance::SteerFL offset is not 910");
	auto constexpr UTslVehicleAnimInstance_SteerFR_Offset = offsetof(UTslVehicleAnimInstance, SteerFR);
	static_assert(UTslVehicleAnimInstance_SteerFR_Offset == 0x91c, "UTslVehicleAnimInstance::SteerFR offset is not 91c");
	auto constexpr UTslVehicleAnimInstance_boolField928_Offset = offsetof(UTslVehicleAnimInstance, boolField928);
	static_assert(UTslVehicleAnimInstance_boolField928_Offset == 0x928, "UTslVehicleAnimInstance::boolField928 offset is not 928");
	auto constexpr UTslVehicleAnimInstance_SteerFLindex_Offset = offsetof(UTslVehicleAnimInstance, SteerFLindex);
	static_assert(UTslVehicleAnimInstance_SteerFLindex_Offset == 0x92c, "UTslVehicleAnimInstance::SteerFLindex offset is not 92c");
	auto constexpr UTslVehicleAnimInstance_SteerFRindex_Offset = offsetof(UTslVehicleAnimInstance, SteerFRindex);
	static_assert(UTslVehicleAnimInstance_SteerFRindex_Offset == 0x930, "UTslVehicleAnimInstance::SteerFRindex offset is not 930");
	auto constexpr UTslVehicleAnimInstance_DriveRLindex_Offset = offsetof(UTslVehicleAnimInstance, DriveRLindex);
	static_assert(UTslVehicleAnimInstance_DriveRLindex_Offset == 0x934, "UTslVehicleAnimInstance::DriveRLindex offset is not 934");
	auto constexpr UTslVehicleAnimInstance_DriveRRindex_Offset = offsetof(UTslVehicleAnimInstance, DriveRRindex);
	static_assert(UTslVehicleAnimInstance_DriveRRindex_Offset == 0x938, "UTslVehicleAnimInstance::DriveRRindex offset is not 938");
	auto constexpr UTslVehicleAnimInstance_DriveshaftRwheelIndex_Offset = offsetof(UTslVehicleAnimInstance, DriveshaftRwheelIndex);
	static_assert(UTslVehicleAnimInstance_DriveshaftRwheelIndex_Offset == 0x93c, "UTslVehicleAnimInstance::DriveshaftRwheelIndex offset is not 93c");
	auto constexpr UTslVehicleAnimInstance_SteerFLmask_Offset = offsetof(UTslVehicleAnimInstance, SteerFLmask);
	static_assert(UTslVehicleAnimInstance_SteerFLmask_Offset == 0x940, "UTslVehicleAnimInstance::SteerFLmask offset is not 940");
	auto constexpr UTslVehicleAnimInstance_SteerFRmask_Offset = offsetof(UTslVehicleAnimInstance, SteerFRmask);
	static_assert(UTslVehicleAnimInstance_SteerFRmask_Offset == 0x94c, "UTslVehicleAnimInstance::SteerFRmask offset is not 94c");
	auto constexpr UTslVehicleAnimInstance_boolField958_Offset = offsetof(UTslVehicleAnimInstance, boolField958);
	static_assert(UTslVehicleAnimInstance_boolField958_Offset == 0x958, "UTslVehicleAnimInstance::boolField958 offset is not 958");
	auto constexpr UTslVehicleAnimInstance_RotationMaskForDriveShaft_Offset = offsetof(UTslVehicleAnimInstance, RotationMaskForDriveShaft);
	static_assert(UTslVehicleAnimInstance_RotationMaskForDriveShaft_Offset == 0x95c, "UTslVehicleAnimInstance::RotationMaskForDriveShaft offset is not 95c");
	auto constexpr UTslVehicleAnimInstance_DriveshaftR_Rot_Offset = offsetof(UTslVehicleAnimInstance, DriveshaftR_Rot);
	static_assert(UTslVehicleAnimInstance_DriveshaftR_Rot_Offset == 0x968, "UTslVehicleAnimInstance::DriveshaftR_Rot offset is not 968");
	auto constexpr UTslVehicleAnimInstance_boolField974_Offset = offsetof(UTslVehicleAnimInstance, boolField974);
	static_assert(UTslVehicleAnimInstance_boolField974_Offset == 0x974, "UTslVehicleAnimInstance::boolField974 offset is not 974");
	auto constexpr UTslVehicleAnimInstance_boolField975_Offset = offsetof(UTslVehicleAnimInstance, boolField975);
	static_assert(UTslVehicleAnimInstance_boolField975_Offset == 0x975, "UTslVehicleAnimInstance::boolField975 offset is not 975");
	auto constexpr UTslVehicleAnimInstance_boolField976_Offset = offsetof(UTslVehicleAnimInstance, boolField976);
	static_assert(UTslVehicleAnimInstance_boolField976_Offset == 0x976, "UTslVehicleAnimInstance::boolField976 offset is not 976");
	auto constexpr UTslVehicleAnimInstance_ForceScale_Offset = offsetof(UTslVehicleAnimInstance, ForceScale);
	static_assert(UTslVehicleAnimInstance_ForceScale_Offset == 0x978, "UTslVehicleAnimInstance::ForceScale offset is not 978");
	auto constexpr UTslVehicleAnimInstance_DragScale_Offset = offsetof(UTslVehicleAnimInstance, DragScale);
	static_assert(UTslVehicleAnimInstance_DragScale_Offset == 0x97c, "UTslVehicleAnimInstance::DragScale offset is not 97c");
	auto constexpr UTslVehicleAnimInstance_DragClamp_Offset = offsetof(UTslVehicleAnimInstance, DragClamp);
	static_assert(UTslVehicleAnimInstance_DragClamp_Offset == 0x980, "UTslVehicleAnimInstance::DragClamp offset is not 980");
	auto constexpr UTslVehicleAnimInstance_GravityScale_Offset = offsetof(UTslVehicleAnimInstance, GravityScale);
	static_assert(UTslVehicleAnimInstance_GravityScale_Offset == 0x984, "UTslVehicleAnimInstance::GravityScale offset is not 984");
	auto constexpr UTslVehicleAnimInstance_ExternalForceAD_Offset = offsetof(UTslVehicleAnimInstance, ExternalForceAD);
	static_assert(UTslVehicleAnimInstance_ExternalForceAD_Offset == 0x988, "UTslVehicleAnimInstance::ExternalForceAD offset is not 988");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
