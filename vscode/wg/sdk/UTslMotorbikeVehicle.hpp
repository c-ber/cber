#pragma once
#include "UTslWheeledVehicle.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslMotorbikeVehicle // Size: 0xA60
	: public UTslWheeledVehicle // Size: 0x840
{
private:
	typedef UTslMotorbikeVehicle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(46); // id32("Class TslGame.TslMotorbikeVehicle")
		return ptr;
	}
	uint8_t boolField840;
	uint8_t UnknownData841[0x3];
	float MinSuspensionOffsetForContact; /* Ofs: 0x844 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.MinSuspensionOffsetForContact */
	uint8_t boolField848;
	uint8_t boolField849;
	uint8_t UnknownData84A[0x2];
	float KickstandStabAngularDamp; /* Ofs: 0x84C Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.KickstandStabAngularDamp */
	float KickstandMAV; /* Ofs: 0x850 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.KickstandMAV */
	float DefaultAngularDamping_Client; /* Ofs: 0x854 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.DefaultAngularDamping_Client */
	float DefaultAngularDamping_Server; /* Ofs: 0x858 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.DefaultAngularDamping_Server */
	float NoDriverAngularDamping_Client; /* Ofs: 0x85C Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.NoDriverAngularDamping_Client */
	float NoDriverAngularDamping_Server; /* Ofs: 0x860 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.NoDriverAngularDamping_Server */
	float KickstandStabilizeTorqueScalar; /* Ofs: 0x864 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.KickstandStabilizeTorqueScalar */
	float KickstandStabilizeRollScalar; /* Ofs: 0x868 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.KickstandStabilizeRollScalar */
	float KickstandStabilizeRollMinRange; /* Ofs: 0x86C Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.KickstandStabilizeRollMinRange */
	float MinVelocityForStabilizeOverride; /* Ofs: 0x870 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.MinVelocityForStabilizeOverride */
	float KickstandStabLinearDamp; /* Ofs: 0x874 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.KickstandStabLinearDamp */
	float DirectStabilizeSpeedKickstand; /* Ofs: 0x878 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.DirectStabilizeSpeedKickstand */
	uint8_t boolField87C;
	uint8_t boolField87D;
	uint8_t boolField87E;
	uint8_t UnknownData87F[0x1];
	float SleepForceRollLimit; /* Ofs: 0x880 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.SleepForceRollLimit */
	float DirectStabilizeSpeedDriver; /* Ofs: 0x884 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.DirectStabilizeSpeedDriver */
	FName StabilizeBone_Low; /* Ofs: 0x888 Size: 0x8 - NameProperty TslGame.TslMotorbikeVehicle.StabilizeBone_Low */
	FName StabilizeBone_High; /* Ofs: 0x890 Size: 0x8 - NameProperty TslGame.TslMotorbikeVehicle.StabilizeBone_High */
	ExternalPtr<struct UCurveFloat> Curve_Roll; /* Ofs: 0x898 Size: 0x8 - ObjectProperty TslGame.TslMotorbikeVehicle.Curve_Roll */
	ExternalPtr<struct UCurveFloat> Curve_RollReturn; /* Ofs: 0x8A0 Size: 0x8 - ObjectProperty TslGame.TslMotorbikeVehicle.Curve_RollReturn */
	ExternalPtr<struct UCurveFloat> Curve_Steer; /* Ofs: 0x8A8 Size: 0x8 - ObjectProperty TslGame.TslMotorbikeVehicle.Curve_Steer */
	ExternalPtr<struct UCurveFloat> Curve_Yaw; /* Ofs: 0x8B0 Size: 0x8 - ObjectProperty TslGame.TslMotorbikeVehicle.Curve_Yaw */
	ExternalPtr<struct UCurveFloat> Curve_Torque; /* Ofs: 0x8B8 Size: 0x8 - ObjectProperty TslGame.TslMotorbikeVehicle.Curve_Torque */
	FVector StabStaticVector; /* Ofs: 0x8C0 Size: 0xC - StructProperty TslGame.TslMotorbikeVehicle.StabStaticVector */
	FVector StabStaticVectorKickstand; /* Ofs: 0x8CC Size: 0xC - StructProperty TslGame.TslMotorbikeVehicle.StabStaticVectorKickstand */
	FVector StabNoDriverVector; /* Ofs: 0x8D8 Size: 0xC - StructProperty TslGame.TslMotorbikeVehicle.StabNoDriverVector */
	FVector2D StabX_Velocity_In; /* Ofs: 0x8E4 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabX_Velocity_In */
	FVector2D StabX_Velocity_Out; /* Ofs: 0x8EC Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabX_Velocity_Out */
	FVector2D StabX_Pitch_In; /* Ofs: 0x8F4 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabX_Pitch_In */
	FVector2D StabX_Pitch_Out; /* Ofs: 0x8FC Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabX_Pitch_Out */
	FVector2D StabZ_Velocity_In; /* Ofs: 0x904 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabZ_Velocity_In */
	FVector2D StabZ_Velocity_Out; /* Ofs: 0x90C Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabZ_Velocity_Out */
	FVector2D StabZ_Roll_In; /* Ofs: 0x914 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabZ_Roll_In */
	FVector2D StabZ_Roll_Out; /* Ofs: 0x91C Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabZ_Roll_Out */
	FVector2D StabZ_Pitch_In; /* Ofs: 0x924 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabZ_Pitch_In */
	FVector2D StabZ_Pitch_Out; /* Ofs: 0x92C Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabZ_Pitch_Out */
	FVector2D StabTorque_In; /* Ofs: 0x934 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabTorque_In */
	FVector2D StabTorque_Out; /* Ofs: 0x93C Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabTorque_Out */
	float StabTorque_ForceScalar; /* Ofs: 0x944 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.StabTorque_ForceScalar */
	FVector2D StabTorque_Pitch_In; /* Ofs: 0x948 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabTorque_Pitch_In */
	FVector2D StabTorque_Pitch_Out; /* Ofs: 0x950 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.StabTorque_Pitch_Out */
	uint8_t boolField958;
	uint8_t UnknownData959[0x3];
	float FlippingForce; /* Ofs: 0x95C Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.FlippingForce */
	float InitialFlipTimer; /* Ofs: 0x960 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.InitialFlipTimer */
	float MinVelocityForFlipping; /* Ofs: 0x964 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.MinVelocityForFlipping */
	uint8_t UnknownData968[0x4];
	float DefaultLinearDamp; /* Ofs: 0x96C Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.DefaultLinearDamp */
	float DefaultAngularDamp; /* Ofs: 0x970 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.DefaultAngularDamp */
	float DefaultMAV; /* Ofs: 0x974 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.DefaultMAV */
	float ContactAlpha_RiseRate; /* Ofs: 0x978 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.ContactAlpha_RiseRate */
	float ContactAlpha_FallRate; /* Ofs: 0x97C Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.ContactAlpha_FallRate */
	float ContactAlpha_LowerClamp; /* Ofs: 0x980 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.ContactAlpha_LowerClamp */
	FVector2D ContactAlpha_MapPitchIn; /* Ofs: 0x984 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.ContactAlpha_MapPitchIn */
	FVector2D ContactAlpha_MapRollIn; /* Ofs: 0x98C Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.ContactAlpha_MapRollIn */
	float ContactAlphaRemoteMultiplier; /* Ofs: 0x994 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.ContactAlphaRemoteMultiplier */
	FVector2D AirControlF_VelMap; /* Ofs: 0x998 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.AirControlF_VelMap */
	FVector2D AirControlB_VelMap; /* Ofs: 0x9A0 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.AirControlB_VelMap */
	FVector2D AirControlL_VelMap; /* Ofs: 0x9A8 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.AirControlL_VelMap */
	FVector2D AirControlR_VelMap; /* Ofs: 0x9B0 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.AirControlR_VelMap */
	FVector2D AirControlQ_VelMap; /* Ofs: 0x9B8 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.AirControlQ_VelMap */
	FVector2D AirControlE_VelMap; /* Ofs: 0x9C0 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.AirControlE_VelMap */
	float AirControl_FB_Torque; /* Ofs: 0x9C8 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.AirControl_FB_Torque */
	float AirControl_LR_Torque; /* Ofs: 0x9CC Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.AirControl_LR_Torque */
	float AirControl_QE_Torque; /* Ofs: 0x9D0 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.AirControl_QE_Torque */
	uint8_t boolField9D4;
	uint8_t UnknownData9D5[0x3];
	float StabilizeAirPercentage; /* Ofs: 0x9D8 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.StabilizeAirPercentage */
	float FC_PitchUp; /* Ofs: 0x9DC Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.FC_PitchUp */
	float FC_PitchDown; /* Ofs: 0x9E0 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.FC_PitchDown */
	uint8_t boolField9E4;
	uint8_t UnknownData9E5[0x3];
	float MinImpulseForAnchorRelease; /* Ofs: 0x9E8 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.MinImpulseForAnchorRelease */
	FVector2D DriverVelocityAngularDampingInMap; /* Ofs: 0x9EC Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.DriverVelocityAngularDampingInMap */
	FVector2D DriverVelocityAngularDampingOutMap; /* Ofs: 0x9F4 Size: 0x8 - StructProperty TslGame.TslMotorbikeVehicle.DriverVelocityAngularDampingOutMap */
	uint8_t boolField9FC;
	uint8_t boolField9FD;
	uint8_t UnknownData9FE[0x2];
	float CounterSteerAngularSpeedScalar; /* Ofs: 0xA00 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.CounterSteerAngularSpeedScalar */
	float CounterSteerScalar_Default; /* Ofs: 0xA04 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.CounterSteerScalar_Default */
	float CounterSteerScalar_NoThrottle; /* Ofs: 0xA08 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.CounterSteerScalar_NoThrottle */
	float CounterSteerScalar_Brake; /* Ofs: 0xA0C Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle.CounterSteerScalar_Brake */
	uint8_t UnknownDataA10[0x40];
	uint8_t boolFieldA50;
	uint8_t UnknownDataA51[0xF];


	inline bool bUseKickstandStabilize()
	{
		return boolField840& 0x1;
	}
	inline bool SetbUseKickstandStabilize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x840, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinSuspensionOffsetForContact(t_structHelper inst, float value) { inst.WriteOffset(0x844, value); }
	inline bool bStabilizeOnServer()
	{
		return boolField848& 0x1;
	}
	inline bool SetbStabilizeOnServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x848, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStabilizeOnRemoteClient()
	{
		return boolField849& 0x1;
	}
	inline bool SetbStabilizeOnRemoteClient(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x849, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetKickstandStabAngularDamp(t_structHelper inst, float value) { inst.WriteOffset(0x84C, value); }
	inline bool SetKickstandMAV(t_structHelper inst, float value) { inst.WriteOffset(0x850, value); }
	inline bool SetDefaultAngularDamping_Client(t_structHelper inst, float value) { inst.WriteOffset(0x854, value); }
	inline bool SetDefaultAngularDamping_Server(t_structHelper inst, float value) { inst.WriteOffset(0x858, value); }
	inline bool SetNoDriverAngularDamping_Client(t_structHelper inst, float value) { inst.WriteOffset(0x85C, value); }
	inline bool SetNoDriverAngularDamping_Server(t_structHelper inst, float value) { inst.WriteOffset(0x860, value); }
	inline bool SetKickstandStabilizeTorqueScalar(t_structHelper inst, float value) { inst.WriteOffset(0x864, value); }
	inline bool SetKickstandStabilizeRollScalar(t_structHelper inst, float value) { inst.WriteOffset(0x868, value); }
	inline bool SetKickstandStabilizeRollMinRange(t_structHelper inst, float value) { inst.WriteOffset(0x86C, value); }
	inline bool SetMinVelocityForStabilizeOverride(t_structHelper inst, float value) { inst.WriteOffset(0x870, value); }
	inline bool SetKickstandStabLinearDamp(t_structHelper inst, float value) { inst.WriteOffset(0x874, value); }
	inline bool SetDirectStabilizeSpeedKickstand(t_structHelper inst, float value) { inst.WriteOffset(0x878, value); }
	inline bool bUseTeleportOnStabilize()
	{
		return boolField87C& 0x1;
	}
	inline bool SetbUseTeleportOnStabilize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x87C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseLinearStabilizeInterp()
	{
		return boolField87D& 0x1;
	}
	inline bool SetbUseLinearStabilizeInterp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x87D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseSleepForcingOnStabilize()
	{
		return boolField87E& 0x1;
	}
	inline bool SetbUseSleepForcingOnStabilize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x87E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSleepForceRollLimit(t_structHelper inst, float value) { inst.WriteOffset(0x880, value); }
	inline bool SetDirectStabilizeSpeedDriver(t_structHelper inst, float value) { inst.WriteOffset(0x884, value); }
	inline bool SetStabilizeBone_Low(t_structHelper inst, FName value) { inst.WriteOffset(0x888, value); }
	inline bool SetStabilizeBone_High(t_structHelper inst, FName value) { inst.WriteOffset(0x890, value); }
	inline bool SetCurve_Roll(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x898, value); }
	inline bool SetCurve_RollReturn(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetCurve_Steer(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8A8, value); }
	inline bool SetCurve_Yaw(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetCurve_Torque(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetStabStaticVector(t_structHelper inst, FVector value) { inst.WriteOffset(0x8C0, value); }
	inline bool SetStabStaticVectorKickstand(t_structHelper inst, FVector value) { inst.WriteOffset(0x8CC, value); }
	inline bool SetStabNoDriverVector(t_structHelper inst, FVector value) { inst.WriteOffset(0x8D8, value); }
	inline bool SetStabX_Velocity_In(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8E4, value); }
	inline bool SetStabX_Velocity_Out(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8EC, value); }
	inline bool SetStabX_Pitch_In(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8F4, value); }
	inline bool SetStabX_Pitch_Out(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8FC, value); }
	inline bool SetStabZ_Velocity_In(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x904, value); }
	inline bool SetStabZ_Velocity_Out(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x90C, value); }
	inline bool SetStabZ_Roll_In(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x914, value); }
	inline bool SetStabZ_Roll_Out(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x91C, value); }
	inline bool SetStabZ_Pitch_In(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x924, value); }
	inline bool SetStabZ_Pitch_Out(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x92C, value); }
	inline bool SetStabTorque_In(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x934, value); }
	inline bool SetStabTorque_Out(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x93C, value); }
	inline bool SetStabTorque_ForceScalar(t_structHelper inst, float value) { inst.WriteOffset(0x944, value); }
	inline bool SetStabTorque_Pitch_In(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x948, value); }
	inline bool SetStabTorque_Pitch_Out(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x950, value); }
	inline bool bUseFlipping()
	{
		return boolField958& 0x1;
	}
	inline bool SetbUseFlipping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x958, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFlippingForce(t_structHelper inst, float value) { inst.WriteOffset(0x95C, value); }
	inline bool SetInitialFlipTimer(t_structHelper inst, float value) { inst.WriteOffset(0x960, value); }
	inline bool SetMinVelocityForFlipping(t_structHelper inst, float value) { inst.WriteOffset(0x964, value); }
	inline bool SetDefaultLinearDamp(t_structHelper inst, float value) { inst.WriteOffset(0x96C, value); }
	inline bool SetDefaultAngularDamp(t_structHelper inst, float value) { inst.WriteOffset(0x970, value); }
	inline bool SetDefaultMAV(t_structHelper inst, float value) { inst.WriteOffset(0x974, value); }
	inline bool SetContactAlpha_RiseRate(t_structHelper inst, float value) { inst.WriteOffset(0x978, value); }
	inline bool SetContactAlpha_FallRate(t_structHelper inst, float value) { inst.WriteOffset(0x97C, value); }
	inline bool SetContactAlpha_LowerClamp(t_structHelper inst, float value) { inst.WriteOffset(0x980, value); }
	inline bool SetContactAlpha_MapPitchIn(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x984, value); }
	inline bool SetContactAlpha_MapRollIn(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x98C, value); }
	inline bool SetContactAlphaRemoteMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x994, value); }
	inline bool SetAirControlF_VelMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x998, value); }
	inline bool SetAirControlB_VelMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9A0, value); }
	inline bool SetAirControlL_VelMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9A8, value); }
	inline bool SetAirControlR_VelMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9B0, value); }
	inline bool SetAirControlQ_VelMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9B8, value); }
	inline bool SetAirControlE_VelMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9C0, value); }
	inline bool SetAirControl_FB_Torque(t_structHelper inst, float value) { inst.WriteOffset(0x9C8, value); }
	inline bool SetAirControl_LR_Torque(t_structHelper inst, float value) { inst.WriteOffset(0x9CC, value); }
	inline bool SetAirControl_QE_Torque(t_structHelper inst, float value) { inst.WriteOffset(0x9D0, value); }
	inline bool bStabilizeInAir()
	{
		return boolField9D4& 0x1;
	}
	inline bool SetbStabilizeInAir(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9D4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStabilizeAirPercentage(t_structHelper inst, float value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetFC_PitchUp(t_structHelper inst, float value) { inst.WriteOffset(0x9DC, value); }
	inline bool SetFC_PitchDown(t_structHelper inst, float value) { inst.WriteOffset(0x9E0, value); }
	inline bool bUseAnchoring()
	{
		return boolField9E4& 0x1;
	}
	inline bool SetbUseAnchoring(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9E4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinImpulseForAnchorRelease(t_structHelper inst, float value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetDriverVelocityAngularDampingInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9EC, value); }
	inline bool SetDriverVelocityAngularDampingOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9F4, value); }
	inline bool bProcessCounterSteering()
	{
		return boolField9FC& 0x1;
	}
	inline bool SetbProcessCounterSteering(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9FC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bProcessCounterSteerOnRemote()
	{
		return boolField9FD& 0x1;
	}
	inline bool SetbProcessCounterSteerOnRemote(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9FD, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCounterSteerAngularSpeedScalar(t_structHelper inst, float value) { inst.WriteOffset(0xA00, value); }
	inline bool SetCounterSteerScalar_Default(t_structHelper inst, float value) { inst.WriteOffset(0xA04, value); }
	inline bool SetCounterSteerScalar_NoThrottle(t_structHelper inst, float value) { inst.WriteOffset(0xA08, value); }
	inline bool SetCounterSteerScalar_Brake(t_structHelper inst, float value) { inst.WriteOffset(0xA0C, value); }
	inline bool bKickstandStabilizeActive()
	{
		return boolFieldA50& 0x1;
	}
	inline bool SetbKickstandStabilizeActive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslMotorbikeVehicle = sizeof(UTslMotorbikeVehicle); // 2656
    static_assert(sizeof(UTslMotorbikeVehicle) == 0xA60, "Size of UTslMotorbikeVehicle is not correct.");
	auto constexpr UTslMotorbikeVehicle_boolField840_Offset = offsetof(UTslMotorbikeVehicle, boolField840);
	static_assert(UTslMotorbikeVehicle_boolField840_Offset == 0x840, "UTslMotorbikeVehicle::boolField840 offset is not 840");
	auto constexpr UTslMotorbikeVehicle_MinSuspensionOffsetForContact_Offset = offsetof(UTslMotorbikeVehicle, MinSuspensionOffsetForContact);
	static_assert(UTslMotorbikeVehicle_MinSuspensionOffsetForContact_Offset == 0x844, "UTslMotorbikeVehicle::MinSuspensionOffsetForContact offset is not 844");
	auto constexpr UTslMotorbikeVehicle_boolField848_Offset = offsetof(UTslMotorbikeVehicle, boolField848);
	static_assert(UTslMotorbikeVehicle_boolField848_Offset == 0x848, "UTslMotorbikeVehicle::boolField848 offset is not 848");
	auto constexpr UTslMotorbikeVehicle_boolField849_Offset = offsetof(UTslMotorbikeVehicle, boolField849);
	static_assert(UTslMotorbikeVehicle_boolField849_Offset == 0x849, "UTslMotorbikeVehicle::boolField849 offset is not 849");
	auto constexpr UTslMotorbikeVehicle_KickstandStabAngularDamp_Offset = offsetof(UTslMotorbikeVehicle, KickstandStabAngularDamp);
	static_assert(UTslMotorbikeVehicle_KickstandStabAngularDamp_Offset == 0x84c, "UTslMotorbikeVehicle::KickstandStabAngularDamp offset is not 84c");
	auto constexpr UTslMotorbikeVehicle_KickstandMAV_Offset = offsetof(UTslMotorbikeVehicle, KickstandMAV);
	static_assert(UTslMotorbikeVehicle_KickstandMAV_Offset == 0x850, "UTslMotorbikeVehicle::KickstandMAV offset is not 850");
	auto constexpr UTslMotorbikeVehicle_DefaultAngularDamping_Client_Offset = offsetof(UTslMotorbikeVehicle, DefaultAngularDamping_Client);
	static_assert(UTslMotorbikeVehicle_DefaultAngularDamping_Client_Offset == 0x854, "UTslMotorbikeVehicle::DefaultAngularDamping_Client offset is not 854");
	auto constexpr UTslMotorbikeVehicle_DefaultAngularDamping_Server_Offset = offsetof(UTslMotorbikeVehicle, DefaultAngularDamping_Server);
	static_assert(UTslMotorbikeVehicle_DefaultAngularDamping_Server_Offset == 0x858, "UTslMotorbikeVehicle::DefaultAngularDamping_Server offset is not 858");
	auto constexpr UTslMotorbikeVehicle_NoDriverAngularDamping_Client_Offset = offsetof(UTslMotorbikeVehicle, NoDriverAngularDamping_Client);
	static_assert(UTslMotorbikeVehicle_NoDriverAngularDamping_Client_Offset == 0x85c, "UTslMotorbikeVehicle::NoDriverAngularDamping_Client offset is not 85c");
	auto constexpr UTslMotorbikeVehicle_NoDriverAngularDamping_Server_Offset = offsetof(UTslMotorbikeVehicle, NoDriverAngularDamping_Server);
	static_assert(UTslMotorbikeVehicle_NoDriverAngularDamping_Server_Offset == 0x860, "UTslMotorbikeVehicle::NoDriverAngularDamping_Server offset is not 860");
	auto constexpr UTslMotorbikeVehicle_KickstandStabilizeTorqueScalar_Offset = offsetof(UTslMotorbikeVehicle, KickstandStabilizeTorqueScalar);
	static_assert(UTslMotorbikeVehicle_KickstandStabilizeTorqueScalar_Offset == 0x864, "UTslMotorbikeVehicle::KickstandStabilizeTorqueScalar offset is not 864");
	auto constexpr UTslMotorbikeVehicle_KickstandStabilizeRollScalar_Offset = offsetof(UTslMotorbikeVehicle, KickstandStabilizeRollScalar);
	static_assert(UTslMotorbikeVehicle_KickstandStabilizeRollScalar_Offset == 0x868, "UTslMotorbikeVehicle::KickstandStabilizeRollScalar offset is not 868");
	auto constexpr UTslMotorbikeVehicle_KickstandStabilizeRollMinRange_Offset = offsetof(UTslMotorbikeVehicle, KickstandStabilizeRollMinRange);
	static_assert(UTslMotorbikeVehicle_KickstandStabilizeRollMinRange_Offset == 0x86c, "UTslMotorbikeVehicle::KickstandStabilizeRollMinRange offset is not 86c");
	auto constexpr UTslMotorbikeVehicle_MinVelocityForStabilizeOverride_Offset = offsetof(UTslMotorbikeVehicle, MinVelocityForStabilizeOverride);
	static_assert(UTslMotorbikeVehicle_MinVelocityForStabilizeOverride_Offset == 0x870, "UTslMotorbikeVehicle::MinVelocityForStabilizeOverride offset is not 870");
	auto constexpr UTslMotorbikeVehicle_KickstandStabLinearDamp_Offset = offsetof(UTslMotorbikeVehicle, KickstandStabLinearDamp);
	static_assert(UTslMotorbikeVehicle_KickstandStabLinearDamp_Offset == 0x874, "UTslMotorbikeVehicle::KickstandStabLinearDamp offset is not 874");
	auto constexpr UTslMotorbikeVehicle_DirectStabilizeSpeedKickstand_Offset = offsetof(UTslMotorbikeVehicle, DirectStabilizeSpeedKickstand);
	static_assert(UTslMotorbikeVehicle_DirectStabilizeSpeedKickstand_Offset == 0x878, "UTslMotorbikeVehicle::DirectStabilizeSpeedKickstand offset is not 878");
	auto constexpr UTslMotorbikeVehicle_boolField87C_Offset = offsetof(UTslMotorbikeVehicle, boolField87C);
	static_assert(UTslMotorbikeVehicle_boolField87C_Offset == 0x87c, "UTslMotorbikeVehicle::boolField87C offset is not 87c");
	auto constexpr UTslMotorbikeVehicle_boolField87D_Offset = offsetof(UTslMotorbikeVehicle, boolField87D);
	static_assert(UTslMotorbikeVehicle_boolField87D_Offset == 0x87d, "UTslMotorbikeVehicle::boolField87D offset is not 87d");
	auto constexpr UTslMotorbikeVehicle_boolField87E_Offset = offsetof(UTslMotorbikeVehicle, boolField87E);
	static_assert(UTslMotorbikeVehicle_boolField87E_Offset == 0x87e, "UTslMotorbikeVehicle::boolField87E offset is not 87e");
	auto constexpr UTslMotorbikeVehicle_SleepForceRollLimit_Offset = offsetof(UTslMotorbikeVehicle, SleepForceRollLimit);
	static_assert(UTslMotorbikeVehicle_SleepForceRollLimit_Offset == 0x880, "UTslMotorbikeVehicle::SleepForceRollLimit offset is not 880");
	auto constexpr UTslMotorbikeVehicle_DirectStabilizeSpeedDriver_Offset = offsetof(UTslMotorbikeVehicle, DirectStabilizeSpeedDriver);
	static_assert(UTslMotorbikeVehicle_DirectStabilizeSpeedDriver_Offset == 0x884, "UTslMotorbikeVehicle::DirectStabilizeSpeedDriver offset is not 884");
	auto constexpr UTslMotorbikeVehicle_StabilizeBone_Low_Offset = offsetof(UTslMotorbikeVehicle, StabilizeBone_Low);
	static_assert(UTslMotorbikeVehicle_StabilizeBone_Low_Offset == 0x888, "UTslMotorbikeVehicle::StabilizeBone_Low offset is not 888");
	auto constexpr UTslMotorbikeVehicle_StabilizeBone_High_Offset = offsetof(UTslMotorbikeVehicle, StabilizeBone_High);
	static_assert(UTslMotorbikeVehicle_StabilizeBone_High_Offset == 0x890, "UTslMotorbikeVehicle::StabilizeBone_High offset is not 890");
	auto constexpr UTslMotorbikeVehicle_Curve_Roll_Offset = offsetof(UTslMotorbikeVehicle, Curve_Roll);
	static_assert(UTslMotorbikeVehicle_Curve_Roll_Offset == 0x898, "UTslMotorbikeVehicle::Curve_Roll offset is not 898");
	auto constexpr UTslMotorbikeVehicle_Curve_RollReturn_Offset = offsetof(UTslMotorbikeVehicle, Curve_RollReturn);
	static_assert(UTslMotorbikeVehicle_Curve_RollReturn_Offset == 0x8a0, "UTslMotorbikeVehicle::Curve_RollReturn offset is not 8a0");
	auto constexpr UTslMotorbikeVehicle_Curve_Steer_Offset = offsetof(UTslMotorbikeVehicle, Curve_Steer);
	static_assert(UTslMotorbikeVehicle_Curve_Steer_Offset == 0x8a8, "UTslMotorbikeVehicle::Curve_Steer offset is not 8a8");
	auto constexpr UTslMotorbikeVehicle_Curve_Yaw_Offset = offsetof(UTslMotorbikeVehicle, Curve_Yaw);
	static_assert(UTslMotorbikeVehicle_Curve_Yaw_Offset == 0x8b0, "UTslMotorbikeVehicle::Curve_Yaw offset is not 8b0");
	auto constexpr UTslMotorbikeVehicle_Curve_Torque_Offset = offsetof(UTslMotorbikeVehicle, Curve_Torque);
	static_assert(UTslMotorbikeVehicle_Curve_Torque_Offset == 0x8b8, "UTslMotorbikeVehicle::Curve_Torque offset is not 8b8");
	auto constexpr UTslMotorbikeVehicle_StabStaticVector_Offset = offsetof(UTslMotorbikeVehicle, StabStaticVector);
	static_assert(UTslMotorbikeVehicle_StabStaticVector_Offset == 0x8c0, "UTslMotorbikeVehicle::StabStaticVector offset is not 8c0");
	auto constexpr UTslMotorbikeVehicle_StabStaticVectorKickstand_Offset = offsetof(UTslMotorbikeVehicle, StabStaticVectorKickstand);
	static_assert(UTslMotorbikeVehicle_StabStaticVectorKickstand_Offset == 0x8cc, "UTslMotorbikeVehicle::StabStaticVectorKickstand offset is not 8cc");
	auto constexpr UTslMotorbikeVehicle_StabNoDriverVector_Offset = offsetof(UTslMotorbikeVehicle, StabNoDriverVector);
	static_assert(UTslMotorbikeVehicle_StabNoDriverVector_Offset == 0x8d8, "UTslMotorbikeVehicle::StabNoDriverVector offset is not 8d8");
	auto constexpr UTslMotorbikeVehicle_StabX_Velocity_In_Offset = offsetof(UTslMotorbikeVehicle, StabX_Velocity_In);
	static_assert(UTslMotorbikeVehicle_StabX_Velocity_In_Offset == 0x8e4, "UTslMotorbikeVehicle::StabX_Velocity_In offset is not 8e4");
	auto constexpr UTslMotorbikeVehicle_StabX_Velocity_Out_Offset = offsetof(UTslMotorbikeVehicle, StabX_Velocity_Out);
	static_assert(UTslMotorbikeVehicle_StabX_Velocity_Out_Offset == 0x8ec, "UTslMotorbikeVehicle::StabX_Velocity_Out offset is not 8ec");
	auto constexpr UTslMotorbikeVehicle_StabX_Pitch_In_Offset = offsetof(UTslMotorbikeVehicle, StabX_Pitch_In);
	static_assert(UTslMotorbikeVehicle_StabX_Pitch_In_Offset == 0x8f4, "UTslMotorbikeVehicle::StabX_Pitch_In offset is not 8f4");
	auto constexpr UTslMotorbikeVehicle_StabX_Pitch_Out_Offset = offsetof(UTslMotorbikeVehicle, StabX_Pitch_Out);
	static_assert(UTslMotorbikeVehicle_StabX_Pitch_Out_Offset == 0x8fc, "UTslMotorbikeVehicle::StabX_Pitch_Out offset is not 8fc");
	auto constexpr UTslMotorbikeVehicle_StabZ_Velocity_In_Offset = offsetof(UTslMotorbikeVehicle, StabZ_Velocity_In);
	static_assert(UTslMotorbikeVehicle_StabZ_Velocity_In_Offset == 0x904, "UTslMotorbikeVehicle::StabZ_Velocity_In offset is not 904");
	auto constexpr UTslMotorbikeVehicle_StabZ_Velocity_Out_Offset = offsetof(UTslMotorbikeVehicle, StabZ_Velocity_Out);
	static_assert(UTslMotorbikeVehicle_StabZ_Velocity_Out_Offset == 0x90c, "UTslMotorbikeVehicle::StabZ_Velocity_Out offset is not 90c");
	auto constexpr UTslMotorbikeVehicle_StabZ_Roll_In_Offset = offsetof(UTslMotorbikeVehicle, StabZ_Roll_In);
	static_assert(UTslMotorbikeVehicle_StabZ_Roll_In_Offset == 0x914, "UTslMotorbikeVehicle::StabZ_Roll_In offset is not 914");
	auto constexpr UTslMotorbikeVehicle_StabZ_Roll_Out_Offset = offsetof(UTslMotorbikeVehicle, StabZ_Roll_Out);
	static_assert(UTslMotorbikeVehicle_StabZ_Roll_Out_Offset == 0x91c, "UTslMotorbikeVehicle::StabZ_Roll_Out offset is not 91c");
	auto constexpr UTslMotorbikeVehicle_StabZ_Pitch_In_Offset = offsetof(UTslMotorbikeVehicle, StabZ_Pitch_In);
	static_assert(UTslMotorbikeVehicle_StabZ_Pitch_In_Offset == 0x924, "UTslMotorbikeVehicle::StabZ_Pitch_In offset is not 924");
	auto constexpr UTslMotorbikeVehicle_StabZ_Pitch_Out_Offset = offsetof(UTslMotorbikeVehicle, StabZ_Pitch_Out);
	static_assert(UTslMotorbikeVehicle_StabZ_Pitch_Out_Offset == 0x92c, "UTslMotorbikeVehicle::StabZ_Pitch_Out offset is not 92c");
	auto constexpr UTslMotorbikeVehicle_StabTorque_In_Offset = offsetof(UTslMotorbikeVehicle, StabTorque_In);
	static_assert(UTslMotorbikeVehicle_StabTorque_In_Offset == 0x934, "UTslMotorbikeVehicle::StabTorque_In offset is not 934");
	auto constexpr UTslMotorbikeVehicle_StabTorque_Out_Offset = offsetof(UTslMotorbikeVehicle, StabTorque_Out);
	static_assert(UTslMotorbikeVehicle_StabTorque_Out_Offset == 0x93c, "UTslMotorbikeVehicle::StabTorque_Out offset is not 93c");
	auto constexpr UTslMotorbikeVehicle_StabTorque_ForceScalar_Offset = offsetof(UTslMotorbikeVehicle, StabTorque_ForceScalar);
	static_assert(UTslMotorbikeVehicle_StabTorque_ForceScalar_Offset == 0x944, "UTslMotorbikeVehicle::StabTorque_ForceScalar offset is not 944");
	auto constexpr UTslMotorbikeVehicle_StabTorque_Pitch_In_Offset = offsetof(UTslMotorbikeVehicle, StabTorque_Pitch_In);
	static_assert(UTslMotorbikeVehicle_StabTorque_Pitch_In_Offset == 0x948, "UTslMotorbikeVehicle::StabTorque_Pitch_In offset is not 948");
	auto constexpr UTslMotorbikeVehicle_StabTorque_Pitch_Out_Offset = offsetof(UTslMotorbikeVehicle, StabTorque_Pitch_Out);
	static_assert(UTslMotorbikeVehicle_StabTorque_Pitch_Out_Offset == 0x950, "UTslMotorbikeVehicle::StabTorque_Pitch_Out offset is not 950");
	auto constexpr UTslMotorbikeVehicle_boolField958_Offset = offsetof(UTslMotorbikeVehicle, boolField958);
	static_assert(UTslMotorbikeVehicle_boolField958_Offset == 0x958, "UTslMotorbikeVehicle::boolField958 offset is not 958");
	auto constexpr UTslMotorbikeVehicle_FlippingForce_Offset = offsetof(UTslMotorbikeVehicle, FlippingForce);
	static_assert(UTslMotorbikeVehicle_FlippingForce_Offset == 0x95c, "UTslMotorbikeVehicle::FlippingForce offset is not 95c");
	auto constexpr UTslMotorbikeVehicle_InitialFlipTimer_Offset = offsetof(UTslMotorbikeVehicle, InitialFlipTimer);
	static_assert(UTslMotorbikeVehicle_InitialFlipTimer_Offset == 0x960, "UTslMotorbikeVehicle::InitialFlipTimer offset is not 960");
	auto constexpr UTslMotorbikeVehicle_MinVelocityForFlipping_Offset = offsetof(UTslMotorbikeVehicle, MinVelocityForFlipping);
	static_assert(UTslMotorbikeVehicle_MinVelocityForFlipping_Offset == 0x964, "UTslMotorbikeVehicle::MinVelocityForFlipping offset is not 964");
	auto constexpr UTslMotorbikeVehicle_DefaultLinearDamp_Offset = offsetof(UTslMotorbikeVehicle, DefaultLinearDamp);
	static_assert(UTslMotorbikeVehicle_DefaultLinearDamp_Offset == 0x96c, "UTslMotorbikeVehicle::DefaultLinearDamp offset is not 96c");
	auto constexpr UTslMotorbikeVehicle_DefaultAngularDamp_Offset = offsetof(UTslMotorbikeVehicle, DefaultAngularDamp);
	static_assert(UTslMotorbikeVehicle_DefaultAngularDamp_Offset == 0x970, "UTslMotorbikeVehicle::DefaultAngularDamp offset is not 970");
	auto constexpr UTslMotorbikeVehicle_DefaultMAV_Offset = offsetof(UTslMotorbikeVehicle, DefaultMAV);
	static_assert(UTslMotorbikeVehicle_DefaultMAV_Offset == 0x974, "UTslMotorbikeVehicle::DefaultMAV offset is not 974");
	auto constexpr UTslMotorbikeVehicle_ContactAlpha_RiseRate_Offset = offsetof(UTslMotorbikeVehicle, ContactAlpha_RiseRate);
	static_assert(UTslMotorbikeVehicle_ContactAlpha_RiseRate_Offset == 0x978, "UTslMotorbikeVehicle::ContactAlpha_RiseRate offset is not 978");
	auto constexpr UTslMotorbikeVehicle_ContactAlpha_FallRate_Offset = offsetof(UTslMotorbikeVehicle, ContactAlpha_FallRate);
	static_assert(UTslMotorbikeVehicle_ContactAlpha_FallRate_Offset == 0x97c, "UTslMotorbikeVehicle::ContactAlpha_FallRate offset is not 97c");
	auto constexpr UTslMotorbikeVehicle_ContactAlpha_LowerClamp_Offset = offsetof(UTslMotorbikeVehicle, ContactAlpha_LowerClamp);
	static_assert(UTslMotorbikeVehicle_ContactAlpha_LowerClamp_Offset == 0x980, "UTslMotorbikeVehicle::ContactAlpha_LowerClamp offset is not 980");
	auto constexpr UTslMotorbikeVehicle_ContactAlpha_MapPitchIn_Offset = offsetof(UTslMotorbikeVehicle, ContactAlpha_MapPitchIn);
	static_assert(UTslMotorbikeVehicle_ContactAlpha_MapPitchIn_Offset == 0x984, "UTslMotorbikeVehicle::ContactAlpha_MapPitchIn offset is not 984");
	auto constexpr UTslMotorbikeVehicle_ContactAlpha_MapRollIn_Offset = offsetof(UTslMotorbikeVehicle, ContactAlpha_MapRollIn);
	static_assert(UTslMotorbikeVehicle_ContactAlpha_MapRollIn_Offset == 0x98c, "UTslMotorbikeVehicle::ContactAlpha_MapRollIn offset is not 98c");
	auto constexpr UTslMotorbikeVehicle_ContactAlphaRemoteMultiplier_Offset = offsetof(UTslMotorbikeVehicle, ContactAlphaRemoteMultiplier);
	static_assert(UTslMotorbikeVehicle_ContactAlphaRemoteMultiplier_Offset == 0x994, "UTslMotorbikeVehicle::ContactAlphaRemoteMultiplier offset is not 994");
	auto constexpr UTslMotorbikeVehicle_AirControlF_VelMap_Offset = offsetof(UTslMotorbikeVehicle, AirControlF_VelMap);
	static_assert(UTslMotorbikeVehicle_AirControlF_VelMap_Offset == 0x998, "UTslMotorbikeVehicle::AirControlF_VelMap offset is not 998");
	auto constexpr UTslMotorbikeVehicle_AirControlB_VelMap_Offset = offsetof(UTslMotorbikeVehicle, AirControlB_VelMap);
	static_assert(UTslMotorbikeVehicle_AirControlB_VelMap_Offset == 0x9a0, "UTslMotorbikeVehicle::AirControlB_VelMap offset is not 9a0");
	auto constexpr UTslMotorbikeVehicle_AirControlL_VelMap_Offset = offsetof(UTslMotorbikeVehicle, AirControlL_VelMap);
	static_assert(UTslMotorbikeVehicle_AirControlL_VelMap_Offset == 0x9a8, "UTslMotorbikeVehicle::AirControlL_VelMap offset is not 9a8");
	auto constexpr UTslMotorbikeVehicle_AirControlR_VelMap_Offset = offsetof(UTslMotorbikeVehicle, AirControlR_VelMap);
	static_assert(UTslMotorbikeVehicle_AirControlR_VelMap_Offset == 0x9b0, "UTslMotorbikeVehicle::AirControlR_VelMap offset is not 9b0");
	auto constexpr UTslMotorbikeVehicle_AirControlQ_VelMap_Offset = offsetof(UTslMotorbikeVehicle, AirControlQ_VelMap);
	static_assert(UTslMotorbikeVehicle_AirControlQ_VelMap_Offset == 0x9b8, "UTslMotorbikeVehicle::AirControlQ_VelMap offset is not 9b8");
	auto constexpr UTslMotorbikeVehicle_AirControlE_VelMap_Offset = offsetof(UTslMotorbikeVehicle, AirControlE_VelMap);
	static_assert(UTslMotorbikeVehicle_AirControlE_VelMap_Offset == 0x9c0, "UTslMotorbikeVehicle::AirControlE_VelMap offset is not 9c0");
	auto constexpr UTslMotorbikeVehicle_AirControl_FB_Torque_Offset = offsetof(UTslMotorbikeVehicle, AirControl_FB_Torque);
	static_assert(UTslMotorbikeVehicle_AirControl_FB_Torque_Offset == 0x9c8, "UTslMotorbikeVehicle::AirControl_FB_Torque offset is not 9c8");
	auto constexpr UTslMotorbikeVehicle_AirControl_LR_Torque_Offset = offsetof(UTslMotorbikeVehicle, AirControl_LR_Torque);
	static_assert(UTslMotorbikeVehicle_AirControl_LR_Torque_Offset == 0x9cc, "UTslMotorbikeVehicle::AirControl_LR_Torque offset is not 9cc");
	auto constexpr UTslMotorbikeVehicle_AirControl_QE_Torque_Offset = offsetof(UTslMotorbikeVehicle, AirControl_QE_Torque);
	static_assert(UTslMotorbikeVehicle_AirControl_QE_Torque_Offset == 0x9d0, "UTslMotorbikeVehicle::AirControl_QE_Torque offset is not 9d0");
	auto constexpr UTslMotorbikeVehicle_boolField9D4_Offset = offsetof(UTslMotorbikeVehicle, boolField9D4);
	static_assert(UTslMotorbikeVehicle_boolField9D4_Offset == 0x9d4, "UTslMotorbikeVehicle::boolField9D4 offset is not 9d4");
	auto constexpr UTslMotorbikeVehicle_StabilizeAirPercentage_Offset = offsetof(UTslMotorbikeVehicle, StabilizeAirPercentage);
	static_assert(UTslMotorbikeVehicle_StabilizeAirPercentage_Offset == 0x9d8, "UTslMotorbikeVehicle::StabilizeAirPercentage offset is not 9d8");
	auto constexpr UTslMotorbikeVehicle_FC_PitchUp_Offset = offsetof(UTslMotorbikeVehicle, FC_PitchUp);
	static_assert(UTslMotorbikeVehicle_FC_PitchUp_Offset == 0x9dc, "UTslMotorbikeVehicle::FC_PitchUp offset is not 9dc");
	auto constexpr UTslMotorbikeVehicle_FC_PitchDown_Offset = offsetof(UTslMotorbikeVehicle, FC_PitchDown);
	static_assert(UTslMotorbikeVehicle_FC_PitchDown_Offset == 0x9e0, "UTslMotorbikeVehicle::FC_PitchDown offset is not 9e0");
	auto constexpr UTslMotorbikeVehicle_boolField9E4_Offset = offsetof(UTslMotorbikeVehicle, boolField9E4);
	static_assert(UTslMotorbikeVehicle_boolField9E4_Offset == 0x9e4, "UTslMotorbikeVehicle::boolField9E4 offset is not 9e4");
	auto constexpr UTslMotorbikeVehicle_MinImpulseForAnchorRelease_Offset = offsetof(UTslMotorbikeVehicle, MinImpulseForAnchorRelease);
	static_assert(UTslMotorbikeVehicle_MinImpulseForAnchorRelease_Offset == 0x9e8, "UTslMotorbikeVehicle::MinImpulseForAnchorRelease offset is not 9e8");
	auto constexpr UTslMotorbikeVehicle_DriverVelocityAngularDampingInMap_Offset = offsetof(UTslMotorbikeVehicle, DriverVelocityAngularDampingInMap);
	static_assert(UTslMotorbikeVehicle_DriverVelocityAngularDampingInMap_Offset == 0x9ec, "UTslMotorbikeVehicle::DriverVelocityAngularDampingInMap offset is not 9ec");
	auto constexpr UTslMotorbikeVehicle_DriverVelocityAngularDampingOutMap_Offset = offsetof(UTslMotorbikeVehicle, DriverVelocityAngularDampingOutMap);
	static_assert(UTslMotorbikeVehicle_DriverVelocityAngularDampingOutMap_Offset == 0x9f4, "UTslMotorbikeVehicle::DriverVelocityAngularDampingOutMap offset is not 9f4");
	auto constexpr UTslMotorbikeVehicle_boolField9FC_Offset = offsetof(UTslMotorbikeVehicle, boolField9FC);
	static_assert(UTslMotorbikeVehicle_boolField9FC_Offset == 0x9fc, "UTslMotorbikeVehicle::boolField9FC offset is not 9fc");
	auto constexpr UTslMotorbikeVehicle_boolField9FD_Offset = offsetof(UTslMotorbikeVehicle, boolField9FD);
	static_assert(UTslMotorbikeVehicle_boolField9FD_Offset == 0x9fd, "UTslMotorbikeVehicle::boolField9FD offset is not 9fd");
	auto constexpr UTslMotorbikeVehicle_CounterSteerAngularSpeedScalar_Offset = offsetof(UTslMotorbikeVehicle, CounterSteerAngularSpeedScalar);
	static_assert(UTslMotorbikeVehicle_CounterSteerAngularSpeedScalar_Offset == 0xa00, "UTslMotorbikeVehicle::CounterSteerAngularSpeedScalar offset is not a00");
	auto constexpr UTslMotorbikeVehicle_CounterSteerScalar_Default_Offset = offsetof(UTslMotorbikeVehicle, CounterSteerScalar_Default);
	static_assert(UTslMotorbikeVehicle_CounterSteerScalar_Default_Offset == 0xa04, "UTslMotorbikeVehicle::CounterSteerScalar_Default offset is not a04");
	auto constexpr UTslMotorbikeVehicle_CounterSteerScalar_NoThrottle_Offset = offsetof(UTslMotorbikeVehicle, CounterSteerScalar_NoThrottle);
	static_assert(UTslMotorbikeVehicle_CounterSteerScalar_NoThrottle_Offset == 0xa08, "UTslMotorbikeVehicle::CounterSteerScalar_NoThrottle offset is not a08");
	auto constexpr UTslMotorbikeVehicle_CounterSteerScalar_Brake_Offset = offsetof(UTslMotorbikeVehicle, CounterSteerScalar_Brake);
	static_assert(UTslMotorbikeVehicle_CounterSteerScalar_Brake_Offset == 0xa0c, "UTslMotorbikeVehicle::CounterSteerScalar_Brake offset is not a0c");
	auto constexpr UTslMotorbikeVehicle_boolFieldA50_Offset = offsetof(UTslMotorbikeVehicle, boolFieldA50);
	static_assert(UTslMotorbikeVehicle_boolFieldA50_Offset == 0xa50, "UTslMotorbikeVehicle::boolFieldA50 offset is not a50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
