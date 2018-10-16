#pragma once
#include "UPawnMovementComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslFloatingVehicleMovement // Size: 0x2C0
	: public UPawnMovementComponent // Size: 0x270
{
private:
	typedef UTslFloatingVehicleMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1311); // id32("Class TslGame.TslFloatingVehicleMovement")
		return ptr;
	}
	float MaxAcceleration; /* Ofs: 0x270 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.MaxAcceleration */
	float Acceleration; /* Ofs: 0x274 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.Acceleration */
	float StartAccelerationRate; /* Ofs: 0x278 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.StartAccelerationRate */
	float StopAccelerationRate; /* Ofs: 0x27C Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.StopAccelerationRate */
	float MaxRotationYawAngle; /* Ofs: 0x280 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.MaxRotationYawAngle */
	float RotationYawAngle; /* Ofs: 0x284 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.RotationYawAngle */
	float RotationYawRate; /* Ofs: 0x288 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.RotationYawRate */
	uint8_t UnknownData28C[0x4];
	ExternalPtr<struct UCurveFloat> DirectionalAccelerationCurve; /* Ofs: 0x290 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicleMovement.DirectionalAccelerationCurve */
	ExternalPtr<struct UCurveFloat> SlideCompensationCurve; /* Ofs: 0x298 Size: 0x8 - ObjectProperty TslGame.TslFloatingVehicleMovement.SlideCompensationCurve */
	float BoostModifier; /* Ofs: 0x2A0 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.BoostModifier */
	uint8_t boolField2A4;
	uint8_t UnknownData2A5[0x3];
	float ForwardInput; /* Ofs: 0x2A8 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.ForwardInput */
	float RotationInput; /* Ofs: 0x2AC Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.RotationInput */
	uint8_t UnknownData2B0[0x8];
	float HitCharacterDuration; /* Ofs: 0x2B8 Size: 0x4 - FloatProperty TslGame.TslFloatingVehicleMovement.HitCharacterDuration */
	uint8_t UnknownData2BC[0x4];


	inline bool SetMaxAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x270, value); }
	inline bool SetAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x274, value); }
	inline bool SetStartAccelerationRate(t_structHelper inst, float value) { inst.WriteOffset(0x278, value); }
	inline bool SetStopAccelerationRate(t_structHelper inst, float value) { inst.WriteOffset(0x27C, value); }
	inline bool SetMaxRotationYawAngle(t_structHelper inst, float value) { inst.WriteOffset(0x280, value); }
	inline bool SetRotationYawAngle(t_structHelper inst, float value) { inst.WriteOffset(0x284, value); }
	inline bool SetRotationYawRate(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetDirectionalAccelerationCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x290, value); }
	inline bool SetSlideCompensationCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x298, value); }
	inline bool SetBoostModifier(t_structHelper inst, float value) { inst.WriteOffset(0x2A0, value); }
	inline bool bIsBoosting()
	{
		return boolField2A4& 0x1;
	}
	inline bool SetbIsBoosting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2A4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetForwardInput(t_structHelper inst, float value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetRotationInput(t_structHelper inst, float value) { inst.WriteOffset(0x2AC, value); }
	inline bool SetHitCharacterDuration(t_structHelper inst, float value) { inst.WriteOffset(0x2B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslFloatingVehicleMovement = sizeof(UTslFloatingVehicleMovement); // 704
    static_assert(sizeof(UTslFloatingVehicleMovement) == 0x2C0, "Size of UTslFloatingVehicleMovement is not correct.");
	auto constexpr UTslFloatingVehicleMovement_MaxAcceleration_Offset = offsetof(UTslFloatingVehicleMovement, MaxAcceleration);
	static_assert(UTslFloatingVehicleMovement_MaxAcceleration_Offset == 0x270, "UTslFloatingVehicleMovement::MaxAcceleration offset is not 270");
	auto constexpr UTslFloatingVehicleMovement_Acceleration_Offset = offsetof(UTslFloatingVehicleMovement, Acceleration);
	static_assert(UTslFloatingVehicleMovement_Acceleration_Offset == 0x274, "UTslFloatingVehicleMovement::Acceleration offset is not 274");
	auto constexpr UTslFloatingVehicleMovement_StartAccelerationRate_Offset = offsetof(UTslFloatingVehicleMovement, StartAccelerationRate);
	static_assert(UTslFloatingVehicleMovement_StartAccelerationRate_Offset == 0x278, "UTslFloatingVehicleMovement::StartAccelerationRate offset is not 278");
	auto constexpr UTslFloatingVehicleMovement_StopAccelerationRate_Offset = offsetof(UTslFloatingVehicleMovement, StopAccelerationRate);
	static_assert(UTslFloatingVehicleMovement_StopAccelerationRate_Offset == 0x27c, "UTslFloatingVehicleMovement::StopAccelerationRate offset is not 27c");
	auto constexpr UTslFloatingVehicleMovement_MaxRotationYawAngle_Offset = offsetof(UTslFloatingVehicleMovement, MaxRotationYawAngle);
	static_assert(UTslFloatingVehicleMovement_MaxRotationYawAngle_Offset == 0x280, "UTslFloatingVehicleMovement::MaxRotationYawAngle offset is not 280");
	auto constexpr UTslFloatingVehicleMovement_RotationYawAngle_Offset = offsetof(UTslFloatingVehicleMovement, RotationYawAngle);
	static_assert(UTslFloatingVehicleMovement_RotationYawAngle_Offset == 0x284, "UTslFloatingVehicleMovement::RotationYawAngle offset is not 284");
	auto constexpr UTslFloatingVehicleMovement_RotationYawRate_Offset = offsetof(UTslFloatingVehicleMovement, RotationYawRate);
	static_assert(UTslFloatingVehicleMovement_RotationYawRate_Offset == 0x288, "UTslFloatingVehicleMovement::RotationYawRate offset is not 288");
	auto constexpr UTslFloatingVehicleMovement_DirectionalAccelerationCurve_Offset = offsetof(UTslFloatingVehicleMovement, DirectionalAccelerationCurve);
	static_assert(UTslFloatingVehicleMovement_DirectionalAccelerationCurve_Offset == 0x290, "UTslFloatingVehicleMovement::DirectionalAccelerationCurve offset is not 290");
	auto constexpr UTslFloatingVehicleMovement_SlideCompensationCurve_Offset = offsetof(UTslFloatingVehicleMovement, SlideCompensationCurve);
	static_assert(UTslFloatingVehicleMovement_SlideCompensationCurve_Offset == 0x298, "UTslFloatingVehicleMovement::SlideCompensationCurve offset is not 298");
	auto constexpr UTslFloatingVehicleMovement_BoostModifier_Offset = offsetof(UTslFloatingVehicleMovement, BoostModifier);
	static_assert(UTslFloatingVehicleMovement_BoostModifier_Offset == 0x2a0, "UTslFloatingVehicleMovement::BoostModifier offset is not 2a0");
	auto constexpr UTslFloatingVehicleMovement_boolField2A4_Offset = offsetof(UTslFloatingVehicleMovement, boolField2A4);
	static_assert(UTslFloatingVehicleMovement_boolField2A4_Offset == 0x2a4, "UTslFloatingVehicleMovement::boolField2A4 offset is not 2a4");
	auto constexpr UTslFloatingVehicleMovement_ForwardInput_Offset = offsetof(UTslFloatingVehicleMovement, ForwardInput);
	static_assert(UTslFloatingVehicleMovement_ForwardInput_Offset == 0x2a8, "UTslFloatingVehicleMovement::ForwardInput offset is not 2a8");
	auto constexpr UTslFloatingVehicleMovement_RotationInput_Offset = offsetof(UTslFloatingVehicleMovement, RotationInput);
	static_assert(UTslFloatingVehicleMovement_RotationInput_Offset == 0x2ac, "UTslFloatingVehicleMovement::RotationInput offset is not 2ac");
	auto constexpr UTslFloatingVehicleMovement_HitCharacterDuration_Offset = offsetof(UTslFloatingVehicleMovement, HitCharacterDuration);
	static_assert(UTslFloatingVehicleMovement_HitCharacterDuration_Offset == 0x2b8, "UTslFloatingVehicleMovement::HitCharacterDuration offset is not 2b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
