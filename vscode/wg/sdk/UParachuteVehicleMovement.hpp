#pragma once
#include "USimpleInterpolationMovement.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteVehicleMovement // Size: 0x420
	: public USimpleInterpolationMovement // Size: 0x310
{
private:
	typedef UParachuteVehicleMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1955); // id32("Class TslGame.ParachuteVehicleMovement")
		return ptr;
	}
	uint8_t UnknownData310[0x4];
	float MaxSpeed; /* Ofs: 0x314 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.MaxSpeed */
	float Acceleration; /* Ofs: 0x318 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.Acceleration */
	float Deceleration; /* Ofs: 0x31C Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.Deceleration */
	float MaxRotationYawRate; /* Ofs: 0x320 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.MaxRotationYawRate */
	float RotationYawAcceleration; /* Ofs: 0x324 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RotationYawAcceleration */
	float RotationYawDeceleration; /* Ofs: 0x328 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RotationYawDeceleration */
	float TerminalVelocity; /* Ofs: 0x32C Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.TerminalVelocity */
	float DecreaseTerminalVelocity; /* Ofs: 0x330 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.DecreaseTerminalVelocity */
	uint8_t UnknownData334[0x8];
	float RotationYawReplicated; /* Ofs: 0x33C Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RotationYawReplicated */
	float RotationPitchReplicated; /* Ofs: 0x340 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RotationPitchReplicated */
	float InputUpdateTime; /* Ofs: 0x344 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.InputUpdateTime */
	uint8_t UnknownData348[0x2C];
	float ParachuteForwardVelocityTransferTimeout; /* Ofs: 0x374 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ParachuteForwardVelocityTransferTimeout */
	float ParachuteForwardVelocityTransferTimeoutDTScalar; /* Ofs: 0x378 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ParachuteForwardVelocityTransferTimeoutDTScalar */
	float ParachuteDeployCoefficient; /* Ofs: 0x37C Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ParachuteDeployCoefficient */
	float YawSpeed; /* Ofs: 0x380 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.YawSpeed */
	float MaxForwardPitch; /* Ofs: 0x384 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.MaxForwardPitch */
	float MaxBackwardPitch; /* Ofs: 0x388 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.MaxBackwardPitch */
	float ForceForwardScale; /* Ofs: 0x38C Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceForwardScale */
	float ForceForwardStaticSpeed; /* Ofs: 0x390 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceForwardStaticSpeed */
	float VelocityLERPSpeedMin; /* Ofs: 0x394 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.VelocityLERPSpeedMin */
	float VelocityLERPSpeedMax; /* Ofs: 0x398 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.VelocityLERPSpeedMax */
	float VelocityLERPValueMin; /* Ofs: 0x39C Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.VelocityLERPValueMin */
	float VelocityLERPValueMax; /* Ofs: 0x3A0 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.VelocityLERPValueMax */
	float DampingPitchMin; /* Ofs: 0x3A4 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.DampingPitchMin */
	float DampingPitchMax; /* Ofs: 0x3A8 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.DampingPitchMax */
	float DampingValueMin; /* Ofs: 0x3AC Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.DampingValueMin */
	float DampingValueMax; /* Ofs: 0x3B0 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.DampingValueMax */
	float ForceDownAngleMin; /* Ofs: 0x3B4 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceDownAngleMin */
	float ForceDownAngleMax; /* Ofs: 0x3B8 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceDownAngleMax */
	float ForceGravityMax; /* Ofs: 0x3BC Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceGravityMax */
	float ForceGravitySpeedMin; /* Ofs: 0x3C0 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceGravitySpeedMin */
	float ForceGravitySpeedMax; /* Ofs: 0x3C4 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceGravitySpeedMax */
	float ForceGravityValueMin; /* Ofs: 0x3C8 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceGravityValueMin */
	float ForceGravityValueMax; /* Ofs: 0x3CC Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.ForceGravityValueMax */
	float RollSpeedMin; /* Ofs: 0x3D0 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RollSpeedMin */
	float RollSpeedMax; /* Ofs: 0x3D4 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RollSpeedMax */
	float RollAngleMin; /* Ofs: 0x3D8 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RollAngleMin */
	float RollAngleMax; /* Ofs: 0x3DC Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RollAngleMax */
	float RollInterpSpeed; /* Ofs: 0x3E0 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.RollInterpSpeed */
	float FinalVelocitySpeedMin; /* Ofs: 0x3E4 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.FinalVelocitySpeedMin */
	float FinalVelocitySpeedMax; /* Ofs: 0x3E8 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.FinalVelocitySpeedMax */
	float FinalVelocityDampingMin; /* Ofs: 0x3EC Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.FinalVelocityDampingMin */
	float FinalVelocityDampingMax; /* Ofs: 0x3F0 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.FinalVelocityDampingMax */
	uint8_t UnknownData3F4[0x4];
	float TraceSphereRadius; /* Ofs: 0x3F8 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.TraceSphereRadius */
	FVector TraceSphereOffset; /* Ofs: 0x3FC Size: 0xC - StructProperty TslGame.ParachuteVehicleMovement.TraceSphereOffset */
	float GroundTraceStart; /* Ofs: 0x408 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.GroundTraceStart */
	float GroundTraceEnd; /* Ofs: 0x40C Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.GroundTraceEnd */
	float GroundTraceDampingMin; /* Ofs: 0x410 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.GroundTraceDampingMin */
	float GroundTraceDampingMax; /* Ofs: 0x414 Size: 0x4 - FloatProperty TslGame.ParachuteVehicleMovement.GroundTraceDampingMax */
	uint8_t UnknownData418[0x8];


	inline bool SetMaxSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x314, value); }
	inline bool SetAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
	inline bool SetDeceleration(t_structHelper inst, float value) { inst.WriteOffset(0x31C, value); }
	inline bool SetMaxRotationYawRate(t_structHelper inst, float value) { inst.WriteOffset(0x320, value); }
	inline bool SetRotationYawAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x324, value); }
	inline bool SetRotationYawDeceleration(t_structHelper inst, float value) { inst.WriteOffset(0x328, value); }
	inline bool SetTerminalVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x32C, value); }
	inline bool SetDecreaseTerminalVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x330, value); }
	inline bool SetRotationYawReplicated(t_structHelper inst, float value) { inst.WriteOffset(0x33C, value); }
	inline bool SetRotationPitchReplicated(t_structHelper inst, float value) { inst.WriteOffset(0x340, value); }
	inline bool SetInputUpdateTime(t_structHelper inst, float value) { inst.WriteOffset(0x344, value); }
	inline bool SetParachuteForwardVelocityTransferTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x374, value); }
	inline bool SetParachuteForwardVelocityTransferTimeoutDTScalar(t_structHelper inst, float value) { inst.WriteOffset(0x378, value); }
	inline bool SetParachuteDeployCoefficient(t_structHelper inst, float value) { inst.WriteOffset(0x37C, value); }
	inline bool SetYawSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x380, value); }
	inline bool SetMaxForwardPitch(t_structHelper inst, float value) { inst.WriteOffset(0x384, value); }
	inline bool SetMaxBackwardPitch(t_structHelper inst, float value) { inst.WriteOffset(0x388, value); }
	inline bool SetForceForwardScale(t_structHelper inst, float value) { inst.WriteOffset(0x38C, value); }
	inline bool SetForceForwardStaticSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x390, value); }
	inline bool SetVelocityLERPSpeedMin(t_structHelper inst, float value) { inst.WriteOffset(0x394, value); }
	inline bool SetVelocityLERPSpeedMax(t_structHelper inst, float value) { inst.WriteOffset(0x398, value); }
	inline bool SetVelocityLERPValueMin(t_structHelper inst, float value) { inst.WriteOffset(0x39C, value); }
	inline bool SetVelocityLERPValueMax(t_structHelper inst, float value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetDampingPitchMin(t_structHelper inst, float value) { inst.WriteOffset(0x3A4, value); }
	inline bool SetDampingPitchMax(t_structHelper inst, float value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetDampingValueMin(t_structHelper inst, float value) { inst.WriteOffset(0x3AC, value); }
	inline bool SetDampingValueMax(t_structHelper inst, float value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetForceDownAngleMin(t_structHelper inst, float value) { inst.WriteOffset(0x3B4, value); }
	inline bool SetForceDownAngleMax(t_structHelper inst, float value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetForceGravityMax(t_structHelper inst, float value) { inst.WriteOffset(0x3BC, value); }
	inline bool SetForceGravitySpeedMin(t_structHelper inst, float value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetForceGravitySpeedMax(t_structHelper inst, float value) { inst.WriteOffset(0x3C4, value); }
	inline bool SetForceGravityValueMin(t_structHelper inst, float value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetForceGravityValueMax(t_structHelper inst, float value) { inst.WriteOffset(0x3CC, value); }
	inline bool SetRollSpeedMin(t_structHelper inst, float value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetRollSpeedMax(t_structHelper inst, float value) { inst.WriteOffset(0x3D4, value); }
	inline bool SetRollAngleMin(t_structHelper inst, float value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetRollAngleMax(t_structHelper inst, float value) { inst.WriteOffset(0x3DC, value); }
	inline bool SetRollInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetFinalVelocitySpeedMin(t_structHelper inst, float value) { inst.WriteOffset(0x3E4, value); }
	inline bool SetFinalVelocitySpeedMax(t_structHelper inst, float value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetFinalVelocityDampingMin(t_structHelper inst, float value) { inst.WriteOffset(0x3EC, value); }
	inline bool SetFinalVelocityDampingMax(t_structHelper inst, float value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetTraceSphereRadius(t_structHelper inst, float value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetTraceSphereOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x3FC, value); }
	inline bool SetGroundTraceStart(t_structHelper inst, float value) { inst.WriteOffset(0x408, value); }
	inline bool SetGroundTraceEnd(t_structHelper inst, float value) { inst.WriteOffset(0x40C, value); }
	inline bool SetGroundTraceDampingMin(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
	inline bool SetGroundTraceDampingMax(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteVehicleMovement = sizeof(UParachuteVehicleMovement); // 1056
    static_assert(sizeof(UParachuteVehicleMovement) == 0x420, "Size of UParachuteVehicleMovement is not correct.");
	auto constexpr UParachuteVehicleMovement_MaxSpeed_Offset = offsetof(UParachuteVehicleMovement, MaxSpeed);
	static_assert(UParachuteVehicleMovement_MaxSpeed_Offset == 0x314, "UParachuteVehicleMovement::MaxSpeed offset is not 314");
	auto constexpr UParachuteVehicleMovement_Acceleration_Offset = offsetof(UParachuteVehicleMovement, Acceleration);
	static_assert(UParachuteVehicleMovement_Acceleration_Offset == 0x318, "UParachuteVehicleMovement::Acceleration offset is not 318");
	auto constexpr UParachuteVehicleMovement_Deceleration_Offset = offsetof(UParachuteVehicleMovement, Deceleration);
	static_assert(UParachuteVehicleMovement_Deceleration_Offset == 0x31c, "UParachuteVehicleMovement::Deceleration offset is not 31c");
	auto constexpr UParachuteVehicleMovement_MaxRotationYawRate_Offset = offsetof(UParachuteVehicleMovement, MaxRotationYawRate);
	static_assert(UParachuteVehicleMovement_MaxRotationYawRate_Offset == 0x320, "UParachuteVehicleMovement::MaxRotationYawRate offset is not 320");
	auto constexpr UParachuteVehicleMovement_RotationYawAcceleration_Offset = offsetof(UParachuteVehicleMovement, RotationYawAcceleration);
	static_assert(UParachuteVehicleMovement_RotationYawAcceleration_Offset == 0x324, "UParachuteVehicleMovement::RotationYawAcceleration offset is not 324");
	auto constexpr UParachuteVehicleMovement_RotationYawDeceleration_Offset = offsetof(UParachuteVehicleMovement, RotationYawDeceleration);
	static_assert(UParachuteVehicleMovement_RotationYawDeceleration_Offset == 0x328, "UParachuteVehicleMovement::RotationYawDeceleration offset is not 328");
	auto constexpr UParachuteVehicleMovement_TerminalVelocity_Offset = offsetof(UParachuteVehicleMovement, TerminalVelocity);
	static_assert(UParachuteVehicleMovement_TerminalVelocity_Offset == 0x32c, "UParachuteVehicleMovement::TerminalVelocity offset is not 32c");
	auto constexpr UParachuteVehicleMovement_DecreaseTerminalVelocity_Offset = offsetof(UParachuteVehicleMovement, DecreaseTerminalVelocity);
	static_assert(UParachuteVehicleMovement_DecreaseTerminalVelocity_Offset == 0x330, "UParachuteVehicleMovement::DecreaseTerminalVelocity offset is not 330");
	auto constexpr UParachuteVehicleMovement_RotationYawReplicated_Offset = offsetof(UParachuteVehicleMovement, RotationYawReplicated);
	static_assert(UParachuteVehicleMovement_RotationYawReplicated_Offset == 0x33c, "UParachuteVehicleMovement::RotationYawReplicated offset is not 33c");
	auto constexpr UParachuteVehicleMovement_RotationPitchReplicated_Offset = offsetof(UParachuteVehicleMovement, RotationPitchReplicated);
	static_assert(UParachuteVehicleMovement_RotationPitchReplicated_Offset == 0x340, "UParachuteVehicleMovement::RotationPitchReplicated offset is not 340");
	auto constexpr UParachuteVehicleMovement_InputUpdateTime_Offset = offsetof(UParachuteVehicleMovement, InputUpdateTime);
	static_assert(UParachuteVehicleMovement_InputUpdateTime_Offset == 0x344, "UParachuteVehicleMovement::InputUpdateTime offset is not 344");
	auto constexpr UParachuteVehicleMovement_ParachuteForwardVelocityTransferTimeout_Offset = offsetof(UParachuteVehicleMovement, ParachuteForwardVelocityTransferTimeout);
	static_assert(UParachuteVehicleMovement_ParachuteForwardVelocityTransferTimeout_Offset == 0x374, "UParachuteVehicleMovement::ParachuteForwardVelocityTransferTimeout offset is not 374");
	auto constexpr UParachuteVehicleMovement_ParachuteForwardVelocityTransferTimeoutDTScalar_Offset = offsetof(UParachuteVehicleMovement, ParachuteForwardVelocityTransferTimeoutDTScalar);
	static_assert(UParachuteVehicleMovement_ParachuteForwardVelocityTransferTimeoutDTScalar_Offset == 0x378, "UParachuteVehicleMovement::ParachuteForwardVelocityTransferTimeoutDTScalar offset is not 378");
	auto constexpr UParachuteVehicleMovement_ParachuteDeployCoefficient_Offset = offsetof(UParachuteVehicleMovement, ParachuteDeployCoefficient);
	static_assert(UParachuteVehicleMovement_ParachuteDeployCoefficient_Offset == 0x37c, "UParachuteVehicleMovement::ParachuteDeployCoefficient offset is not 37c");
	auto constexpr UParachuteVehicleMovement_YawSpeed_Offset = offsetof(UParachuteVehicleMovement, YawSpeed);
	static_assert(UParachuteVehicleMovement_YawSpeed_Offset == 0x380, "UParachuteVehicleMovement::YawSpeed offset is not 380");
	auto constexpr UParachuteVehicleMovement_MaxForwardPitch_Offset = offsetof(UParachuteVehicleMovement, MaxForwardPitch);
	static_assert(UParachuteVehicleMovement_MaxForwardPitch_Offset == 0x384, "UParachuteVehicleMovement::MaxForwardPitch offset is not 384");
	auto constexpr UParachuteVehicleMovement_MaxBackwardPitch_Offset = offsetof(UParachuteVehicleMovement, MaxBackwardPitch);
	static_assert(UParachuteVehicleMovement_MaxBackwardPitch_Offset == 0x388, "UParachuteVehicleMovement::MaxBackwardPitch offset is not 388");
	auto constexpr UParachuteVehicleMovement_ForceForwardScale_Offset = offsetof(UParachuteVehicleMovement, ForceForwardScale);
	static_assert(UParachuteVehicleMovement_ForceForwardScale_Offset == 0x38c, "UParachuteVehicleMovement::ForceForwardScale offset is not 38c");
	auto constexpr UParachuteVehicleMovement_ForceForwardStaticSpeed_Offset = offsetof(UParachuteVehicleMovement, ForceForwardStaticSpeed);
	static_assert(UParachuteVehicleMovement_ForceForwardStaticSpeed_Offset == 0x390, "UParachuteVehicleMovement::ForceForwardStaticSpeed offset is not 390");
	auto constexpr UParachuteVehicleMovement_VelocityLERPSpeedMin_Offset = offsetof(UParachuteVehicleMovement, VelocityLERPSpeedMin);
	static_assert(UParachuteVehicleMovement_VelocityLERPSpeedMin_Offset == 0x394, "UParachuteVehicleMovement::VelocityLERPSpeedMin offset is not 394");
	auto constexpr UParachuteVehicleMovement_VelocityLERPSpeedMax_Offset = offsetof(UParachuteVehicleMovement, VelocityLERPSpeedMax);
	static_assert(UParachuteVehicleMovement_VelocityLERPSpeedMax_Offset == 0x398, "UParachuteVehicleMovement::VelocityLERPSpeedMax offset is not 398");
	auto constexpr UParachuteVehicleMovement_VelocityLERPValueMin_Offset = offsetof(UParachuteVehicleMovement, VelocityLERPValueMin);
	static_assert(UParachuteVehicleMovement_VelocityLERPValueMin_Offset == 0x39c, "UParachuteVehicleMovement::VelocityLERPValueMin offset is not 39c");
	auto constexpr UParachuteVehicleMovement_VelocityLERPValueMax_Offset = offsetof(UParachuteVehicleMovement, VelocityLERPValueMax);
	static_assert(UParachuteVehicleMovement_VelocityLERPValueMax_Offset == 0x3a0, "UParachuteVehicleMovement::VelocityLERPValueMax offset is not 3a0");
	auto constexpr UParachuteVehicleMovement_DampingPitchMin_Offset = offsetof(UParachuteVehicleMovement, DampingPitchMin);
	static_assert(UParachuteVehicleMovement_DampingPitchMin_Offset == 0x3a4, "UParachuteVehicleMovement::DampingPitchMin offset is not 3a4");
	auto constexpr UParachuteVehicleMovement_DampingPitchMax_Offset = offsetof(UParachuteVehicleMovement, DampingPitchMax);
	static_assert(UParachuteVehicleMovement_DampingPitchMax_Offset == 0x3a8, "UParachuteVehicleMovement::DampingPitchMax offset is not 3a8");
	auto constexpr UParachuteVehicleMovement_DampingValueMin_Offset = offsetof(UParachuteVehicleMovement, DampingValueMin);
	static_assert(UParachuteVehicleMovement_DampingValueMin_Offset == 0x3ac, "UParachuteVehicleMovement::DampingValueMin offset is not 3ac");
	auto constexpr UParachuteVehicleMovement_DampingValueMax_Offset = offsetof(UParachuteVehicleMovement, DampingValueMax);
	static_assert(UParachuteVehicleMovement_DampingValueMax_Offset == 0x3b0, "UParachuteVehicleMovement::DampingValueMax offset is not 3b0");
	auto constexpr UParachuteVehicleMovement_ForceDownAngleMin_Offset = offsetof(UParachuteVehicleMovement, ForceDownAngleMin);
	static_assert(UParachuteVehicleMovement_ForceDownAngleMin_Offset == 0x3b4, "UParachuteVehicleMovement::ForceDownAngleMin offset is not 3b4");
	auto constexpr UParachuteVehicleMovement_ForceDownAngleMax_Offset = offsetof(UParachuteVehicleMovement, ForceDownAngleMax);
	static_assert(UParachuteVehicleMovement_ForceDownAngleMax_Offset == 0x3b8, "UParachuteVehicleMovement::ForceDownAngleMax offset is not 3b8");
	auto constexpr UParachuteVehicleMovement_ForceGravityMax_Offset = offsetof(UParachuteVehicleMovement, ForceGravityMax);
	static_assert(UParachuteVehicleMovement_ForceGravityMax_Offset == 0x3bc, "UParachuteVehicleMovement::ForceGravityMax offset is not 3bc");
	auto constexpr UParachuteVehicleMovement_ForceGravitySpeedMin_Offset = offsetof(UParachuteVehicleMovement, ForceGravitySpeedMin);
	static_assert(UParachuteVehicleMovement_ForceGravitySpeedMin_Offset == 0x3c0, "UParachuteVehicleMovement::ForceGravitySpeedMin offset is not 3c0");
	auto constexpr UParachuteVehicleMovement_ForceGravitySpeedMax_Offset = offsetof(UParachuteVehicleMovement, ForceGravitySpeedMax);
	static_assert(UParachuteVehicleMovement_ForceGravitySpeedMax_Offset == 0x3c4, "UParachuteVehicleMovement::ForceGravitySpeedMax offset is not 3c4");
	auto constexpr UParachuteVehicleMovement_ForceGravityValueMin_Offset = offsetof(UParachuteVehicleMovement, ForceGravityValueMin);
	static_assert(UParachuteVehicleMovement_ForceGravityValueMin_Offset == 0x3c8, "UParachuteVehicleMovement::ForceGravityValueMin offset is not 3c8");
	auto constexpr UParachuteVehicleMovement_ForceGravityValueMax_Offset = offsetof(UParachuteVehicleMovement, ForceGravityValueMax);
	static_assert(UParachuteVehicleMovement_ForceGravityValueMax_Offset == 0x3cc, "UParachuteVehicleMovement::ForceGravityValueMax offset is not 3cc");
	auto constexpr UParachuteVehicleMovement_RollSpeedMin_Offset = offsetof(UParachuteVehicleMovement, RollSpeedMin);
	static_assert(UParachuteVehicleMovement_RollSpeedMin_Offset == 0x3d0, "UParachuteVehicleMovement::RollSpeedMin offset is not 3d0");
	auto constexpr UParachuteVehicleMovement_RollSpeedMax_Offset = offsetof(UParachuteVehicleMovement, RollSpeedMax);
	static_assert(UParachuteVehicleMovement_RollSpeedMax_Offset == 0x3d4, "UParachuteVehicleMovement::RollSpeedMax offset is not 3d4");
	auto constexpr UParachuteVehicleMovement_RollAngleMin_Offset = offsetof(UParachuteVehicleMovement, RollAngleMin);
	static_assert(UParachuteVehicleMovement_RollAngleMin_Offset == 0x3d8, "UParachuteVehicleMovement::RollAngleMin offset is not 3d8");
	auto constexpr UParachuteVehicleMovement_RollAngleMax_Offset = offsetof(UParachuteVehicleMovement, RollAngleMax);
	static_assert(UParachuteVehicleMovement_RollAngleMax_Offset == 0x3dc, "UParachuteVehicleMovement::RollAngleMax offset is not 3dc");
	auto constexpr UParachuteVehicleMovement_RollInterpSpeed_Offset = offsetof(UParachuteVehicleMovement, RollInterpSpeed);
	static_assert(UParachuteVehicleMovement_RollInterpSpeed_Offset == 0x3e0, "UParachuteVehicleMovement::RollInterpSpeed offset is not 3e0");
	auto constexpr UParachuteVehicleMovement_FinalVelocitySpeedMin_Offset = offsetof(UParachuteVehicleMovement, FinalVelocitySpeedMin);
	static_assert(UParachuteVehicleMovement_FinalVelocitySpeedMin_Offset == 0x3e4, "UParachuteVehicleMovement::FinalVelocitySpeedMin offset is not 3e4");
	auto constexpr UParachuteVehicleMovement_FinalVelocitySpeedMax_Offset = offsetof(UParachuteVehicleMovement, FinalVelocitySpeedMax);
	static_assert(UParachuteVehicleMovement_FinalVelocitySpeedMax_Offset == 0x3e8, "UParachuteVehicleMovement::FinalVelocitySpeedMax offset is not 3e8");
	auto constexpr UParachuteVehicleMovement_FinalVelocityDampingMin_Offset = offsetof(UParachuteVehicleMovement, FinalVelocityDampingMin);
	static_assert(UParachuteVehicleMovement_FinalVelocityDampingMin_Offset == 0x3ec, "UParachuteVehicleMovement::FinalVelocityDampingMin offset is not 3ec");
	auto constexpr UParachuteVehicleMovement_FinalVelocityDampingMax_Offset = offsetof(UParachuteVehicleMovement, FinalVelocityDampingMax);
	static_assert(UParachuteVehicleMovement_FinalVelocityDampingMax_Offset == 0x3f0, "UParachuteVehicleMovement::FinalVelocityDampingMax offset is not 3f0");
	auto constexpr UParachuteVehicleMovement_TraceSphereRadius_Offset = offsetof(UParachuteVehicleMovement, TraceSphereRadius);
	static_assert(UParachuteVehicleMovement_TraceSphereRadius_Offset == 0x3f8, "UParachuteVehicleMovement::TraceSphereRadius offset is not 3f8");
	auto constexpr UParachuteVehicleMovement_TraceSphereOffset_Offset = offsetof(UParachuteVehicleMovement, TraceSphereOffset);
	static_assert(UParachuteVehicleMovement_TraceSphereOffset_Offset == 0x3fc, "UParachuteVehicleMovement::TraceSphereOffset offset is not 3fc");
	auto constexpr UParachuteVehicleMovement_GroundTraceStart_Offset = offsetof(UParachuteVehicleMovement, GroundTraceStart);
	static_assert(UParachuteVehicleMovement_GroundTraceStart_Offset == 0x408, "UParachuteVehicleMovement::GroundTraceStart offset is not 408");
	auto constexpr UParachuteVehicleMovement_GroundTraceEnd_Offset = offsetof(UParachuteVehicleMovement, GroundTraceEnd);
	static_assert(UParachuteVehicleMovement_GroundTraceEnd_Offset == 0x40c, "UParachuteVehicleMovement::GroundTraceEnd offset is not 40c");
	auto constexpr UParachuteVehicleMovement_GroundTraceDampingMin_Offset = offsetof(UParachuteVehicleMovement, GroundTraceDampingMin);
	static_assert(UParachuteVehicleMovement_GroundTraceDampingMin_Offset == 0x410, "UParachuteVehicleMovement::GroundTraceDampingMin offset is not 410");
	auto constexpr UParachuteVehicleMovement_GroundTraceDampingMax_Offset = offsetof(UParachuteVehicleMovement, GroundTraceDampingMax);
	static_assert(UParachuteVehicleMovement_GroundTraceDampingMax_Offset == 0x414, "UParachuteVehicleMovement::GroundTraceDampingMax offset is not 414");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
