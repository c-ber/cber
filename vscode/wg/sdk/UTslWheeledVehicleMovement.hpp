#pragma once
#include "UWheeledVehicleMovementComponent4W.hpp"
#include "FCustomTransmissionData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWheeledVehicleMovement // Size: 0x5A0
	: public UWheeledVehicleMovementComponent4W // Size: 0x540
{
private:
	typedef UTslWheeledVehicleMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1991); // id32("Class TslGame.TslWheeledVehicleMovement")
		return ptr;
	}
	TArray<float> WheelHealthPercentages; /* Ofs: 0x540 Size: 0x10 - ArrayProperty TslGame.TslWheeledVehicleMovement.WheelHealthPercentages */
	uint8_t UnknownData550[0x8];
	FCustomTransmissionData CustomTransmission; /* Ofs: 0x558 Size: 0x20 - StructProperty TslGame.TslWheeledVehicleMovement.CustomTransmission */
	uint8_t UnknownData578[0x4];
	uint8_t boolField57C;
	uint8_t UnknownData57D[0x3];
	float Anim_SteeringInputInterpSpeed; /* Ofs: 0x580 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicleMovement.Anim_SteeringInputInterpSpeed */
	float Anim_InterpOfInterpSpeedScale; /* Ofs: 0x584 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicleMovement.Anim_InterpOfInterpSpeedScale */
	float Anim_InterpOfInterpSpeedAbs; /* Ofs: 0x588 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicleMovement.Anim_InterpOfInterpSpeedAbs */
	uint8_t UnknownData58C[0x8];
	float Anim_SpeedForInputTypeSwitch; /* Ofs: 0x594 Size: 0x4 - FloatProperty TslGame.TslWheeledVehicleMovement.Anim_SpeedForInputTypeSwitch */
	uint8_t UnknownData598[0x8];


	inline bool SetWheelHealthPercentages(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x540, value); }
	inline bool SetCustomTransmission(t_structHelper inst, FCustomTransmissionData value) { inst.WriteOffset(0x558, value); }
	inline bool bAlwaysUseDirectInput()
	{
		return boolField57C& 0x1;
	}
	inline bool SetbAlwaysUseDirectInput(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x57C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAnim_SteeringInputInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x580, value); }
	inline bool SetAnim_InterpOfInterpSpeedScale(t_structHelper inst, float value) { inst.WriteOffset(0x584, value); }
	inline bool SetAnim_InterpOfInterpSpeedAbs(t_structHelper inst, float value) { inst.WriteOffset(0x588, value); }
	inline bool SetAnim_SpeedForInputTypeSwitch(t_structHelper inst, float value) { inst.WriteOffset(0x594, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWheeledVehicleMovement = sizeof(UTslWheeledVehicleMovement); // 1440
    static_assert(sizeof(UTslWheeledVehicleMovement) == 0x5A0, "Size of UTslWheeledVehicleMovement is not correct.");
	auto constexpr UTslWheeledVehicleMovement_WheelHealthPercentages_Offset = offsetof(UTslWheeledVehicleMovement, WheelHealthPercentages);
	static_assert(UTslWheeledVehicleMovement_WheelHealthPercentages_Offset == 0x540, "UTslWheeledVehicleMovement::WheelHealthPercentages offset is not 540");
	auto constexpr UTslWheeledVehicleMovement_CustomTransmission_Offset = offsetof(UTslWheeledVehicleMovement, CustomTransmission);
	static_assert(UTslWheeledVehicleMovement_CustomTransmission_Offset == 0x558, "UTslWheeledVehicleMovement::CustomTransmission offset is not 558");
	auto constexpr UTslWheeledVehicleMovement_boolField57C_Offset = offsetof(UTslWheeledVehicleMovement, boolField57C);
	static_assert(UTslWheeledVehicleMovement_boolField57C_Offset == 0x57c, "UTslWheeledVehicleMovement::boolField57C offset is not 57c");
	auto constexpr UTslWheeledVehicleMovement_Anim_SteeringInputInterpSpeed_Offset = offsetof(UTslWheeledVehicleMovement, Anim_SteeringInputInterpSpeed);
	static_assert(UTslWheeledVehicleMovement_Anim_SteeringInputInterpSpeed_Offset == 0x580, "UTslWheeledVehicleMovement::Anim_SteeringInputInterpSpeed offset is not 580");
	auto constexpr UTslWheeledVehicleMovement_Anim_InterpOfInterpSpeedScale_Offset = offsetof(UTslWheeledVehicleMovement, Anim_InterpOfInterpSpeedScale);
	static_assert(UTslWheeledVehicleMovement_Anim_InterpOfInterpSpeedScale_Offset == 0x584, "UTslWheeledVehicleMovement::Anim_InterpOfInterpSpeedScale offset is not 584");
	auto constexpr UTslWheeledVehicleMovement_Anim_InterpOfInterpSpeedAbs_Offset = offsetof(UTslWheeledVehicleMovement, Anim_InterpOfInterpSpeedAbs);
	static_assert(UTslWheeledVehicleMovement_Anim_InterpOfInterpSpeedAbs_Offset == 0x588, "UTslWheeledVehicleMovement::Anim_InterpOfInterpSpeedAbs offset is not 588");
	auto constexpr UTslWheeledVehicleMovement_Anim_SpeedForInputTypeSwitch_Offset = offsetof(UTslWheeledVehicleMovement, Anim_SpeedForInputTypeSwitch);
	static_assert(UTslWheeledVehicleMovement_Anim_SpeedForInputTypeSwitch_Offset == 0x594, "UTslWheeledVehicleMovement::Anim_SpeedForInputTypeSwitch offset is not 594");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
