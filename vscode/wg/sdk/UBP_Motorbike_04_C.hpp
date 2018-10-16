#pragma once
#include "UTslMotorbikeVehicle_Standalone.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Motorbike_04_C // Size: 0xB50
	: public UTslMotorbikeVehicle_Standalone // Size: 0xA60
{
private:
	typedef UBP_Motorbike_04_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(118097); // id32("BlueprintGeneratedClass BP_Motorbike_04.BP_Motorbike_04_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA60 Size: 0x8 - StructProperty BP_Motorbike_04.BP_Motorbike_04_C.UberGraphFrame */
	ExternalPtr<struct USphereComponent> Sphere1; /* Ofs: 0xA68 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.Sphere1 */
	ExternalPtr<struct UMotorbikeVehicleSeatInteraction> PassengerSeat; /* Ofs: 0xA70 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.PassengerSeat */
	ExternalPtr<struct USphereComponent> Sphere; /* Ofs: 0xA78 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.Sphere */
	ExternalPtr<struct UMotorbikeVehicleSeatInteraction> DriverSeat; /* Ofs: 0xA80 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.DriverSeat */
	ExternalPtr<struct URadialForceComponent> RadialForce; /* Ofs: 0xA88 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.RadialForce */
	ExternalPtr<struct UCameraComponent> FirstPersonCameraInVehicle; /* Ofs: 0xA90 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.FirstPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FirstPersonSpringArmInVehicle; /* Ofs: 0xA98 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.FirstPersonSpringArmInVehicle */
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0xAA0 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonSpringArmInVehicle; /* Ofs: 0xAA8 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.ThirdPersonSpringArmInVehicle */
	float COM_Offset_Steer; /* Ofs: 0xAB0 Size: 0x4 - FloatProperty BP_Motorbike_04.BP_Motorbike_04_C.COM_Offset_Steer */
	float COM_Offset_Yaw; /* Ofs: 0xAB4 Size: 0x4 - FloatProperty BP_Motorbike_04.BP_Motorbike_04_C.COM_Offset_Yaw */
	float COM_Offset_Roll; /* Ofs: 0xAB8 Size: 0x4 - FloatProperty BP_Motorbike_04.BP_Motorbike_04_C.COM_Offset_Roll */
	float COM_Boost; /* Ofs: 0xABC Size: 0x4 - FloatProperty BP_Motorbike_04.BP_Motorbike_04_C.COM_Boost */
	ExternalPtr<struct UCurveFloat> RollCurve; /* Ofs: 0xAC0 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.RollCurve */
	ExternalPtr<struct UCurveFloat> ReturnClampCurve; /* Ofs: 0xAC8 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.ReturnClampCurve */
	ExternalPtr<struct UCurveFloat> SteerCurve; /* Ofs: 0xAD0 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.SteerCurve */
	ExternalPtr<struct UCurveFloat> YawCurve; /* Ofs: 0xAD8 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.YawCurve */
	ExternalPtr<struct UCurveFloat> TorqueStabilizeCurve; /* Ofs: 0xAE0 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.TorqueStabilizeCurve */
	uint8_t boolFieldAE8;
	uint8_t UnknownDataAE9[0x3];
	float GameTime; /* Ofs: 0xAEC Size: 0x4 - FloatProperty BP_Motorbike_04.BP_Motorbike_04_C.GameTime */
	ExternalPtr<struct UBP_CameraMan_C> CameraManRef; /* Ofs: 0xAF0 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.CameraManRef */
	float AIrControl_F; /* Ofs: 0xAF8 Size: 0x4 - FloatProperty BP_Motorbike_04.BP_Motorbike_04_C.AIrControl_F */
	float AIrControl_R; /* Ofs: 0xAFC Size: 0x4 - FloatProperty BP_Motorbike_04.BP_Motorbike_04_C.AIrControl_R */
	uint8_t boolFieldB00;
	uint8_t UnknownDataB01[0x7];
	ExternalPtr<struct UCurveFloat> RollCurve_Cart; /* Ofs: 0xB08 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.RollCurve_Cart */
	ExternalPtr<struct UCurveFloat> ReturnClampCurve_Cart; /* Ofs: 0xB10 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.ReturnClampCurve_Cart */
	ExternalPtr<struct UCurveFloat> SteerCurve_Cart; /* Ofs: 0xB18 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.SteerCurve_Cart */
	ExternalPtr<struct UCurveFloat> YawCurve_Cart; /* Ofs: 0xB20 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.YawCurve_Cart */
	ExternalPtr<struct UCurveFloat> TorqueStabilizeCurve_Cart; /* Ofs: 0xB28 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.TorqueStabilizeCurve_Cart */
	ExternalPtr<struct UCurveFloat> EngineAudioCurve; /* Ofs: 0xB30 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.EngineAudioCurve */
	ExternalPtr<struct UTslWheeledVehicleMovement> TslMovementRef; /* Ofs: 0xB38 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.TslMovementRef */
	float FuelEfficiency; /* Ofs: 0xB40 Size: 0x4 - FloatProperty BP_Motorbike_04.BP_Motorbike_04_C.FuelEfficiency */
	uint8_t UnknownDataB44[0x4];
	ExternalPtr<struct UObject> Constraint; /* Ofs: 0xB48 Size: 0x8 - ObjectProperty BP_Motorbike_04.BP_Motorbike_04_C.Constraint */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA60, value); }
	inline bool SetSphere1(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA68, value); }
	inline bool SetPassengerSeat(t_structHelper inst, ExternalPtr<struct UMotorbikeVehicleSeatInteraction> value) { inst.WriteOffset(0xA70, value); }
	inline bool SetSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0xA78, value); }
	inline bool SetDriverSeat(t_structHelper inst, ExternalPtr<struct UMotorbikeVehicleSeatInteraction> value) { inst.WriteOffset(0xA80, value); }
	inline bool SetRadialForce(t_structHelper inst, ExternalPtr<struct URadialForceComponent> value) { inst.WriteOffset(0xA88, value); }
	inline bool SetFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0xA90, value); }
	inline bool SetFirstPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0xA98, value); }
	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0xAA0, value); }
	inline bool SetThirdPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0xAA8, value); }
	inline bool SetCOM_Offset_Steer(t_structHelper inst, float value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetCOM_Offset_Yaw(t_structHelper inst, float value) { inst.WriteOffset(0xAB4, value); }
	inline bool SetCOM_Offset_Roll(t_structHelper inst, float value) { inst.WriteOffset(0xAB8, value); }
	inline bool SetCOM_Boost(t_structHelper inst, float value) { inst.WriteOffset(0xABC, value); }
	inline bool SetRollCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xAC0, value); }
	inline bool SetReturnClampCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xAC8, value); }
	inline bool SetSteerCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xAD0, value); }
	inline bool SetYawCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xAD8, value); }
	inline bool SetTorqueStabilizeCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xAE0, value); }
	inline bool bHasContact()
	{
		return boolFieldAE8& 0x1;
	}
	inline bool SetbHasContact(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGameTime(t_structHelper inst, float value) { inst.WriteOffset(0xAEC, value); }
	inline bool SetCameraManRef(t_structHelper inst, ExternalPtr<struct UBP_CameraMan_C> value) { inst.WriteOffset(0xAF0, value); }
	inline bool SetAIrControl_F(t_structHelper inst, float value) { inst.WriteOffset(0xAF8, value); }
	inline bool SetAIrControl_R(t_structHelper inst, float value) { inst.WriteOffset(0xAFC, value); }
	inline bool bHasSideCart()
	{
		return boolFieldB00& 0x1;
	}
	inline bool SetbHasSideCart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB00, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRollCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB08, value); }
	inline bool SetReturnClampCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB10, value); }
	inline bool SetSteerCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB18, value); }
	inline bool SetYawCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB20, value); }
	inline bool SetTorqueStabilizeCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB28, value); }
	inline bool SetEngineAudioCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB30, value); }
	inline bool SetTslMovementRef(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicleMovement> value) { inst.WriteOffset(0xB38, value); }
	inline bool SetFuelEfficiency(t_structHelper inst, float value) { inst.WriteOffset(0xB40, value); }
	inline bool SetConstraint(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0xB48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Motorbike_04_C = sizeof(UBP_Motorbike_04_C); // 2896
    static_assert(sizeof(UBP_Motorbike_04_C) == 0xB50, "Size of UBP_Motorbike_04_C is not correct.");
	auto constexpr UBP_Motorbike_04_C_UberGraphFrame_Offset = offsetof(UBP_Motorbike_04_C, UberGraphFrame);
	static_assert(UBP_Motorbike_04_C_UberGraphFrame_Offset == 0xa60, "UBP_Motorbike_04_C::UberGraphFrame offset is not a60");
	auto constexpr UBP_Motorbike_04_C_Sphere1_Offset = offsetof(UBP_Motorbike_04_C, Sphere1);
	static_assert(UBP_Motorbike_04_C_Sphere1_Offset == 0xa68, "UBP_Motorbike_04_C::Sphere1 offset is not a68");
	auto constexpr UBP_Motorbike_04_C_PassengerSeat_Offset = offsetof(UBP_Motorbike_04_C, PassengerSeat);
	static_assert(UBP_Motorbike_04_C_PassengerSeat_Offset == 0xa70, "UBP_Motorbike_04_C::PassengerSeat offset is not a70");
	auto constexpr UBP_Motorbike_04_C_Sphere_Offset = offsetof(UBP_Motorbike_04_C, Sphere);
	static_assert(UBP_Motorbike_04_C_Sphere_Offset == 0xa78, "UBP_Motorbike_04_C::Sphere offset is not a78");
	auto constexpr UBP_Motorbike_04_C_DriverSeat_Offset = offsetof(UBP_Motorbike_04_C, DriverSeat);
	static_assert(UBP_Motorbike_04_C_DriverSeat_Offset == 0xa80, "UBP_Motorbike_04_C::DriverSeat offset is not a80");
	auto constexpr UBP_Motorbike_04_C_RadialForce_Offset = offsetof(UBP_Motorbike_04_C, RadialForce);
	static_assert(UBP_Motorbike_04_C_RadialForce_Offset == 0xa88, "UBP_Motorbike_04_C::RadialForce offset is not a88");
	auto constexpr UBP_Motorbike_04_C_FirstPersonCameraInVehicle_Offset = offsetof(UBP_Motorbike_04_C, FirstPersonCameraInVehicle);
	static_assert(UBP_Motorbike_04_C_FirstPersonCameraInVehicle_Offset == 0xa90, "UBP_Motorbike_04_C::FirstPersonCameraInVehicle offset is not a90");
	auto constexpr UBP_Motorbike_04_C_FirstPersonSpringArmInVehicle_Offset = offsetof(UBP_Motorbike_04_C, FirstPersonSpringArmInVehicle);
	static_assert(UBP_Motorbike_04_C_FirstPersonSpringArmInVehicle_Offset == 0xa98, "UBP_Motorbike_04_C::FirstPersonSpringArmInVehicle offset is not a98");
	auto constexpr UBP_Motorbike_04_C_ThirdPersonCameraInVehicle_Offset = offsetof(UBP_Motorbike_04_C, ThirdPersonCameraInVehicle);
	static_assert(UBP_Motorbike_04_C_ThirdPersonCameraInVehicle_Offset == 0xaa0, "UBP_Motorbike_04_C::ThirdPersonCameraInVehicle offset is not aa0");
	auto constexpr UBP_Motorbike_04_C_ThirdPersonSpringArmInVehicle_Offset = offsetof(UBP_Motorbike_04_C, ThirdPersonSpringArmInVehicle);
	static_assert(UBP_Motorbike_04_C_ThirdPersonSpringArmInVehicle_Offset == 0xaa8, "UBP_Motorbike_04_C::ThirdPersonSpringArmInVehicle offset is not aa8");
	auto constexpr UBP_Motorbike_04_C_COM_Offset_Steer_Offset = offsetof(UBP_Motorbike_04_C, COM_Offset_Steer);
	static_assert(UBP_Motorbike_04_C_COM_Offset_Steer_Offset == 0xab0, "UBP_Motorbike_04_C::COM_Offset_Steer offset is not ab0");
	auto constexpr UBP_Motorbike_04_C_COM_Offset_Yaw_Offset = offsetof(UBP_Motorbike_04_C, COM_Offset_Yaw);
	static_assert(UBP_Motorbike_04_C_COM_Offset_Yaw_Offset == 0xab4, "UBP_Motorbike_04_C::COM_Offset_Yaw offset is not ab4");
	auto constexpr UBP_Motorbike_04_C_COM_Offset_Roll_Offset = offsetof(UBP_Motorbike_04_C, COM_Offset_Roll);
	static_assert(UBP_Motorbike_04_C_COM_Offset_Roll_Offset == 0xab8, "UBP_Motorbike_04_C::COM_Offset_Roll offset is not ab8");
	auto constexpr UBP_Motorbike_04_C_COM_Boost_Offset = offsetof(UBP_Motorbike_04_C, COM_Boost);
	static_assert(UBP_Motorbike_04_C_COM_Boost_Offset == 0xabc, "UBP_Motorbike_04_C::COM_Boost offset is not abc");
	auto constexpr UBP_Motorbike_04_C_RollCurve_Offset = offsetof(UBP_Motorbike_04_C, RollCurve);
	static_assert(UBP_Motorbike_04_C_RollCurve_Offset == 0xac0, "UBP_Motorbike_04_C::RollCurve offset is not ac0");
	auto constexpr UBP_Motorbike_04_C_ReturnClampCurve_Offset = offsetof(UBP_Motorbike_04_C, ReturnClampCurve);
	static_assert(UBP_Motorbike_04_C_ReturnClampCurve_Offset == 0xac8, "UBP_Motorbike_04_C::ReturnClampCurve offset is not ac8");
	auto constexpr UBP_Motorbike_04_C_SteerCurve_Offset = offsetof(UBP_Motorbike_04_C, SteerCurve);
	static_assert(UBP_Motorbike_04_C_SteerCurve_Offset == 0xad0, "UBP_Motorbike_04_C::SteerCurve offset is not ad0");
	auto constexpr UBP_Motorbike_04_C_YawCurve_Offset = offsetof(UBP_Motorbike_04_C, YawCurve);
	static_assert(UBP_Motorbike_04_C_YawCurve_Offset == 0xad8, "UBP_Motorbike_04_C::YawCurve offset is not ad8");
	auto constexpr UBP_Motorbike_04_C_TorqueStabilizeCurve_Offset = offsetof(UBP_Motorbike_04_C, TorqueStabilizeCurve);
	static_assert(UBP_Motorbike_04_C_TorqueStabilizeCurve_Offset == 0xae0, "UBP_Motorbike_04_C::TorqueStabilizeCurve offset is not ae0");
	auto constexpr UBP_Motorbike_04_C_boolFieldAE8_Offset = offsetof(UBP_Motorbike_04_C, boolFieldAE8);
	static_assert(UBP_Motorbike_04_C_boolFieldAE8_Offset == 0xae8, "UBP_Motorbike_04_C::boolFieldAE8 offset is not ae8");
	auto constexpr UBP_Motorbike_04_C_GameTime_Offset = offsetof(UBP_Motorbike_04_C, GameTime);
	static_assert(UBP_Motorbike_04_C_GameTime_Offset == 0xaec, "UBP_Motorbike_04_C::GameTime offset is not aec");
	auto constexpr UBP_Motorbike_04_C_CameraManRef_Offset = offsetof(UBP_Motorbike_04_C, CameraManRef);
	static_assert(UBP_Motorbike_04_C_CameraManRef_Offset == 0xaf0, "UBP_Motorbike_04_C::CameraManRef offset is not af0");
	auto constexpr UBP_Motorbike_04_C_AIrControl_F_Offset = offsetof(UBP_Motorbike_04_C, AIrControl_F);
	static_assert(UBP_Motorbike_04_C_AIrControl_F_Offset == 0xaf8, "UBP_Motorbike_04_C::AIrControl_F offset is not af8");
	auto constexpr UBP_Motorbike_04_C_AIrControl_R_Offset = offsetof(UBP_Motorbike_04_C, AIrControl_R);
	static_assert(UBP_Motorbike_04_C_AIrControl_R_Offset == 0xafc, "UBP_Motorbike_04_C::AIrControl_R offset is not afc");
	auto constexpr UBP_Motorbike_04_C_boolFieldB00_Offset = offsetof(UBP_Motorbike_04_C, boolFieldB00);
	static_assert(UBP_Motorbike_04_C_boolFieldB00_Offset == 0xb00, "UBP_Motorbike_04_C::boolFieldB00 offset is not b00");
	auto constexpr UBP_Motorbike_04_C_RollCurve_Cart_Offset = offsetof(UBP_Motorbike_04_C, RollCurve_Cart);
	static_assert(UBP_Motorbike_04_C_RollCurve_Cart_Offset == 0xb08, "UBP_Motorbike_04_C::RollCurve_Cart offset is not b08");
	auto constexpr UBP_Motorbike_04_C_ReturnClampCurve_Cart_Offset = offsetof(UBP_Motorbike_04_C, ReturnClampCurve_Cart);
	static_assert(UBP_Motorbike_04_C_ReturnClampCurve_Cart_Offset == 0xb10, "UBP_Motorbike_04_C::ReturnClampCurve_Cart offset is not b10");
	auto constexpr UBP_Motorbike_04_C_SteerCurve_Cart_Offset = offsetof(UBP_Motorbike_04_C, SteerCurve_Cart);
	static_assert(UBP_Motorbike_04_C_SteerCurve_Cart_Offset == 0xb18, "UBP_Motorbike_04_C::SteerCurve_Cart offset is not b18");
	auto constexpr UBP_Motorbike_04_C_YawCurve_Cart_Offset = offsetof(UBP_Motorbike_04_C, YawCurve_Cart);
	static_assert(UBP_Motorbike_04_C_YawCurve_Cart_Offset == 0xb20, "UBP_Motorbike_04_C::YawCurve_Cart offset is not b20");
	auto constexpr UBP_Motorbike_04_C_TorqueStabilizeCurve_Cart_Offset = offsetof(UBP_Motorbike_04_C, TorqueStabilizeCurve_Cart);
	static_assert(UBP_Motorbike_04_C_TorqueStabilizeCurve_Cart_Offset == 0xb28, "UBP_Motorbike_04_C::TorqueStabilizeCurve_Cart offset is not b28");
	auto constexpr UBP_Motorbike_04_C_EngineAudioCurve_Offset = offsetof(UBP_Motorbike_04_C, EngineAudioCurve);
	static_assert(UBP_Motorbike_04_C_EngineAudioCurve_Offset == 0xb30, "UBP_Motorbike_04_C::EngineAudioCurve offset is not b30");
	auto constexpr UBP_Motorbike_04_C_TslMovementRef_Offset = offsetof(UBP_Motorbike_04_C, TslMovementRef);
	static_assert(UBP_Motorbike_04_C_TslMovementRef_Offset == 0xb38, "UBP_Motorbike_04_C::TslMovementRef offset is not b38");
	auto constexpr UBP_Motorbike_04_C_FuelEfficiency_Offset = offsetof(UBP_Motorbike_04_C, FuelEfficiency);
	static_assert(UBP_Motorbike_04_C_FuelEfficiency_Offset == 0xb40, "UBP_Motorbike_04_C::FuelEfficiency offset is not b40");
	auto constexpr UBP_Motorbike_04_C_Constraint_Offset = offsetof(UBP_Motorbike_04_C, Constraint);
	static_assert(UBP_Motorbike_04_C_Constraint_Offset == 0xb48, "UBP_Motorbike_04_C::Constraint offset is not b48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
