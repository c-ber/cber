#pragma once
#include "UTslWheeledVehicle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Motorbike_03_C // Size: 0x904
	: public UTslWheeledVehicle // Size: 0x840
{
private:
	typedef UBP_Motorbike_03_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117264); // id32("BlueprintGeneratedClass BP_Motorbike_03.BP_Motorbike_03_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x840 Size: 0x8 - StructProperty BP_Motorbike_03.BP_Motorbike_03_C.UberGraphFrame */
	ExternalPtr<struct UCameraComponent> FirstPersonCameraInVehicle; /* Ofs: 0x848 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.FirstPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FirstPersonSpringArmInVehicle; /* Ofs: 0x850 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.FirstPersonSpringArmInVehicle */
	ExternalPtr<struct UArrowComponent> Arrow; /* Ofs: 0x858 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.Arrow */
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0x860 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonSpringArmInVehicle; /* Ofs: 0x868 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.ThirdPersonSpringArmInVehicle */
	float COM_Offset_Steer; /* Ofs: 0x870 Size: 0x4 - FloatProperty BP_Motorbike_03.BP_Motorbike_03_C.COM_Offset_Steer */
	float COM_Offset_Yaw; /* Ofs: 0x874 Size: 0x4 - FloatProperty BP_Motorbike_03.BP_Motorbike_03_C.COM_Offset_Yaw */
	float COM_Offset_Roll; /* Ofs: 0x878 Size: 0x4 - FloatProperty BP_Motorbike_03.BP_Motorbike_03_C.COM_Offset_Roll */
	float COM_Boost; /* Ofs: 0x87C Size: 0x4 - FloatProperty BP_Motorbike_03.BP_Motorbike_03_C.COM_Boost */
	ExternalPtr<struct UCurveFloat> RollCurve; /* Ofs: 0x880 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.RollCurve */
	ExternalPtr<struct UCurveFloat> ReturnClampCurve; /* Ofs: 0x888 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.ReturnClampCurve */
	ExternalPtr<struct UCurveFloat> SteerCurve; /* Ofs: 0x890 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.SteerCurve */
	ExternalPtr<struct UCurveFloat> YawCurve; /* Ofs: 0x898 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.YawCurve */
	ExternalPtr<struct UCurveFloat> TorqueStabilizeCurve; /* Ofs: 0x8A0 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.TorqueStabilizeCurve */
	uint8_t boolField8A8;
	uint8_t UnknownData8A9[0x3];
	float GameTime; /* Ofs: 0x8AC Size: 0x4 - FloatProperty BP_Motorbike_03.BP_Motorbike_03_C.GameTime */
	ExternalPtr<struct UBP_CameraMan_C> CameraManRef; /* Ofs: 0x8B0 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.CameraManRef */
	float AIrControl_F; /* Ofs: 0x8B8 Size: 0x4 - FloatProperty BP_Motorbike_03.BP_Motorbike_03_C.AIrControl_F */
	float AIrControl_R; /* Ofs: 0x8BC Size: 0x4 - FloatProperty BP_Motorbike_03.BP_Motorbike_03_C.AIrControl_R */
	uint8_t boolField8C0;
	uint8_t UnknownData8C1[0x7];
	ExternalPtr<struct UCurveFloat> RollCurve_Cart; /* Ofs: 0x8C8 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.RollCurve_Cart */
	ExternalPtr<struct UCurveFloat> ReturnClampCurve_Cart; /* Ofs: 0x8D0 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.ReturnClampCurve_Cart */
	ExternalPtr<struct UCurveFloat> SteerCurve_Cart; /* Ofs: 0x8D8 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.SteerCurve_Cart */
	ExternalPtr<struct UCurveFloat> YawCurve_Cart; /* Ofs: 0x8E0 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.YawCurve_Cart */
	ExternalPtr<struct UCurveFloat> TorqueStabilizeCurve_Cart; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.TorqueStabilizeCurve_Cart */
	ExternalPtr<struct UCurveFloat> EngineAudioCurve; /* Ofs: 0x8F0 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.EngineAudioCurve */
	ExternalPtr<struct UTslWheeledVehicleMovement> TslMovementRef; /* Ofs: 0x8F8 Size: 0x8 - ObjectProperty BP_Motorbike_03.BP_Motorbike_03_C.TslMovementRef */
	float FuelEfficiency; /* Ofs: 0x900 Size: 0x4 - FloatProperty BP_Motorbike_03.BP_Motorbike_03_C.FuelEfficiency */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x840, value); }
	inline bool SetFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x848, value); }
	inline bool SetFirstPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x850, value); }
	inline bool SetArrow(t_structHelper inst, ExternalPtr<struct UArrowComponent> value) { inst.WriteOffset(0x858, value); }
	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x860, value); }
	inline bool SetThirdPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x868, value); }
	inline bool SetCOM_Offset_Steer(t_structHelper inst, float value) { inst.WriteOffset(0x870, value); }
	inline bool SetCOM_Offset_Yaw(t_structHelper inst, float value) { inst.WriteOffset(0x874, value); }
	inline bool SetCOM_Offset_Roll(t_structHelper inst, float value) { inst.WriteOffset(0x878, value); }
	inline bool SetCOM_Boost(t_structHelper inst, float value) { inst.WriteOffset(0x87C, value); }
	inline bool SetRollCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x880, value); }
	inline bool SetReturnClampCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x888, value); }
	inline bool SetSteerCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x890, value); }
	inline bool SetYawCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x898, value); }
	inline bool SetTorqueStabilizeCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8A0, value); }
	inline bool bHasContact()
	{
		return boolField8A8& 0x1;
	}
	inline bool SetbHasContact(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGameTime(t_structHelper inst, float value) { inst.WriteOffset(0x8AC, value); }
	inline bool SetCameraManRef(t_structHelper inst, ExternalPtr<struct UBP_CameraMan_C> value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetAIrControl_F(t_structHelper inst, float value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetAIrControl_R(t_structHelper inst, float value) { inst.WriteOffset(0x8BC, value); }
	inline bool bHasSideCart()
	{
		return boolField8C0& 0x1;
	}
	inline bool SetbHasSideCart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRollCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetReturnClampCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8D0, value); }
	inline bool SetSteerCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8D8, value); }
	inline bool SetYawCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8E0, value); }
	inline bool SetTorqueStabilizeCurve_Cart(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetEngineAudioCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetTslMovementRef(t_structHelper inst, ExternalPtr<struct UTslWheeledVehicleMovement> value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetFuelEfficiency(t_structHelper inst, float value) { inst.WriteOffset(0x900, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Motorbike_03_C = sizeof(UBP_Motorbike_03_C); // 2308
    static_assert(sizeof(UBP_Motorbike_03_C) == 0x904, "Size of UBP_Motorbike_03_C is not correct.");
	auto constexpr UBP_Motorbike_03_C_UberGraphFrame_Offset = offsetof(UBP_Motorbike_03_C, UberGraphFrame);
	static_assert(UBP_Motorbike_03_C_UberGraphFrame_Offset == 0x840, "UBP_Motorbike_03_C::UberGraphFrame offset is not 840");
	auto constexpr UBP_Motorbike_03_C_FirstPersonCameraInVehicle_Offset = offsetof(UBP_Motorbike_03_C, FirstPersonCameraInVehicle);
	static_assert(UBP_Motorbike_03_C_FirstPersonCameraInVehicle_Offset == 0x848, "UBP_Motorbike_03_C::FirstPersonCameraInVehicle offset is not 848");
	auto constexpr UBP_Motorbike_03_C_FirstPersonSpringArmInVehicle_Offset = offsetof(UBP_Motorbike_03_C, FirstPersonSpringArmInVehicle);
	static_assert(UBP_Motorbike_03_C_FirstPersonSpringArmInVehicle_Offset == 0x850, "UBP_Motorbike_03_C::FirstPersonSpringArmInVehicle offset is not 850");
	auto constexpr UBP_Motorbike_03_C_Arrow_Offset = offsetof(UBP_Motorbike_03_C, Arrow);
	static_assert(UBP_Motorbike_03_C_Arrow_Offset == 0x858, "UBP_Motorbike_03_C::Arrow offset is not 858");
	auto constexpr UBP_Motorbike_03_C_ThirdPersonCameraInVehicle_Offset = offsetof(UBP_Motorbike_03_C, ThirdPersonCameraInVehicle);
	static_assert(UBP_Motorbike_03_C_ThirdPersonCameraInVehicle_Offset == 0x860, "UBP_Motorbike_03_C::ThirdPersonCameraInVehicle offset is not 860");
	auto constexpr UBP_Motorbike_03_C_ThirdPersonSpringArmInVehicle_Offset = offsetof(UBP_Motorbike_03_C, ThirdPersonSpringArmInVehicle);
	static_assert(UBP_Motorbike_03_C_ThirdPersonSpringArmInVehicle_Offset == 0x868, "UBP_Motorbike_03_C::ThirdPersonSpringArmInVehicle offset is not 868");
	auto constexpr UBP_Motorbike_03_C_COM_Offset_Steer_Offset = offsetof(UBP_Motorbike_03_C, COM_Offset_Steer);
	static_assert(UBP_Motorbike_03_C_COM_Offset_Steer_Offset == 0x870, "UBP_Motorbike_03_C::COM_Offset_Steer offset is not 870");
	auto constexpr UBP_Motorbike_03_C_COM_Offset_Yaw_Offset = offsetof(UBP_Motorbike_03_C, COM_Offset_Yaw);
	static_assert(UBP_Motorbike_03_C_COM_Offset_Yaw_Offset == 0x874, "UBP_Motorbike_03_C::COM_Offset_Yaw offset is not 874");
	auto constexpr UBP_Motorbike_03_C_COM_Offset_Roll_Offset = offsetof(UBP_Motorbike_03_C, COM_Offset_Roll);
	static_assert(UBP_Motorbike_03_C_COM_Offset_Roll_Offset == 0x878, "UBP_Motorbike_03_C::COM_Offset_Roll offset is not 878");
	auto constexpr UBP_Motorbike_03_C_COM_Boost_Offset = offsetof(UBP_Motorbike_03_C, COM_Boost);
	static_assert(UBP_Motorbike_03_C_COM_Boost_Offset == 0x87c, "UBP_Motorbike_03_C::COM_Boost offset is not 87c");
	auto constexpr UBP_Motorbike_03_C_RollCurve_Offset = offsetof(UBP_Motorbike_03_C, RollCurve);
	static_assert(UBP_Motorbike_03_C_RollCurve_Offset == 0x880, "UBP_Motorbike_03_C::RollCurve offset is not 880");
	auto constexpr UBP_Motorbike_03_C_ReturnClampCurve_Offset = offsetof(UBP_Motorbike_03_C, ReturnClampCurve);
	static_assert(UBP_Motorbike_03_C_ReturnClampCurve_Offset == 0x888, "UBP_Motorbike_03_C::ReturnClampCurve offset is not 888");
	auto constexpr UBP_Motorbike_03_C_SteerCurve_Offset = offsetof(UBP_Motorbike_03_C, SteerCurve);
	static_assert(UBP_Motorbike_03_C_SteerCurve_Offset == 0x890, "UBP_Motorbike_03_C::SteerCurve offset is not 890");
	auto constexpr UBP_Motorbike_03_C_YawCurve_Offset = offsetof(UBP_Motorbike_03_C, YawCurve);
	static_assert(UBP_Motorbike_03_C_YawCurve_Offset == 0x898, "UBP_Motorbike_03_C::YawCurve offset is not 898");
	auto constexpr UBP_Motorbike_03_C_TorqueStabilizeCurve_Offset = offsetof(UBP_Motorbike_03_C, TorqueStabilizeCurve);
	static_assert(UBP_Motorbike_03_C_TorqueStabilizeCurve_Offset == 0x8a0, "UBP_Motorbike_03_C::TorqueStabilizeCurve offset is not 8a0");
	auto constexpr UBP_Motorbike_03_C_boolField8A8_Offset = offsetof(UBP_Motorbike_03_C, boolField8A8);
	static_assert(UBP_Motorbike_03_C_boolField8A8_Offset == 0x8a8, "UBP_Motorbike_03_C::boolField8A8 offset is not 8a8");
	auto constexpr UBP_Motorbike_03_C_GameTime_Offset = offsetof(UBP_Motorbike_03_C, GameTime);
	static_assert(UBP_Motorbike_03_C_GameTime_Offset == 0x8ac, "UBP_Motorbike_03_C::GameTime offset is not 8ac");
	auto constexpr UBP_Motorbike_03_C_CameraManRef_Offset = offsetof(UBP_Motorbike_03_C, CameraManRef);
	static_assert(UBP_Motorbike_03_C_CameraManRef_Offset == 0x8b0, "UBP_Motorbike_03_C::CameraManRef offset is not 8b0");
	auto constexpr UBP_Motorbike_03_C_AIrControl_F_Offset = offsetof(UBP_Motorbike_03_C, AIrControl_F);
	static_assert(UBP_Motorbike_03_C_AIrControl_F_Offset == 0x8b8, "UBP_Motorbike_03_C::AIrControl_F offset is not 8b8");
	auto constexpr UBP_Motorbike_03_C_AIrControl_R_Offset = offsetof(UBP_Motorbike_03_C, AIrControl_R);
	static_assert(UBP_Motorbike_03_C_AIrControl_R_Offset == 0x8bc, "UBP_Motorbike_03_C::AIrControl_R offset is not 8bc");
	auto constexpr UBP_Motorbike_03_C_boolField8C0_Offset = offsetof(UBP_Motorbike_03_C, boolField8C0);
	static_assert(UBP_Motorbike_03_C_boolField8C0_Offset == 0x8c0, "UBP_Motorbike_03_C::boolField8C0 offset is not 8c0");
	auto constexpr UBP_Motorbike_03_C_RollCurve_Cart_Offset = offsetof(UBP_Motorbike_03_C, RollCurve_Cart);
	static_assert(UBP_Motorbike_03_C_RollCurve_Cart_Offset == 0x8c8, "UBP_Motorbike_03_C::RollCurve_Cart offset is not 8c8");
	auto constexpr UBP_Motorbike_03_C_ReturnClampCurve_Cart_Offset = offsetof(UBP_Motorbike_03_C, ReturnClampCurve_Cart);
	static_assert(UBP_Motorbike_03_C_ReturnClampCurve_Cart_Offset == 0x8d0, "UBP_Motorbike_03_C::ReturnClampCurve_Cart offset is not 8d0");
	auto constexpr UBP_Motorbike_03_C_SteerCurve_Cart_Offset = offsetof(UBP_Motorbike_03_C, SteerCurve_Cart);
	static_assert(UBP_Motorbike_03_C_SteerCurve_Cart_Offset == 0x8d8, "UBP_Motorbike_03_C::SteerCurve_Cart offset is not 8d8");
	auto constexpr UBP_Motorbike_03_C_YawCurve_Cart_Offset = offsetof(UBP_Motorbike_03_C, YawCurve_Cart);
	static_assert(UBP_Motorbike_03_C_YawCurve_Cart_Offset == 0x8e0, "UBP_Motorbike_03_C::YawCurve_Cart offset is not 8e0");
	auto constexpr UBP_Motorbike_03_C_TorqueStabilizeCurve_Cart_Offset = offsetof(UBP_Motorbike_03_C, TorqueStabilizeCurve_Cart);
	static_assert(UBP_Motorbike_03_C_TorqueStabilizeCurve_Cart_Offset == 0x8e8, "UBP_Motorbike_03_C::TorqueStabilizeCurve_Cart offset is not 8e8");
	auto constexpr UBP_Motorbike_03_C_EngineAudioCurve_Offset = offsetof(UBP_Motorbike_03_C, EngineAudioCurve);
	static_assert(UBP_Motorbike_03_C_EngineAudioCurve_Offset == 0x8f0, "UBP_Motorbike_03_C::EngineAudioCurve offset is not 8f0");
	auto constexpr UBP_Motorbike_03_C_TslMovementRef_Offset = offsetof(UBP_Motorbike_03_C, TslMovementRef);
	static_assert(UBP_Motorbike_03_C_TslMovementRef_Offset == 0x8f8, "UBP_Motorbike_03_C::TslMovementRef offset is not 8f8");
	auto constexpr UBP_Motorbike_03_C_FuelEfficiency_Offset = offsetof(UBP_Motorbike_03_C, FuelEfficiency);
	static_assert(UBP_Motorbike_03_C_FuelEfficiency_Offset == 0x900, "UBP_Motorbike_03_C::FuelEfficiency offset is not 900");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
