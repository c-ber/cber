#pragma once
#include "UPawnMovementComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFloatingPawnMovement // Size: 0x290
	: public UPawnMovementComponent // Size: 0x270
{
private:
	typedef UFloatingPawnMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1502); // id32("Class Engine.FloatingPawnMovement")
		return ptr;
	}
	float MaxSpeed; /* Ofs: 0x270 Size: 0x4 - FloatProperty Engine.FloatingPawnMovement.MaxSpeed */
	float Acceleration; /* Ofs: 0x274 Size: 0x4 - FloatProperty Engine.FloatingPawnMovement.Acceleration */
	float Deceleration; /* Ofs: 0x278 Size: 0x4 - FloatProperty Engine.FloatingPawnMovement.Deceleration */
	float TurningBoost; /* Ofs: 0x27C Size: 0x4 - FloatProperty Engine.FloatingPawnMovement.TurningBoost */
	uint8_t boolField280;
	uint8_t UnknownData281[0xF];


	inline bool SetMaxSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x270, value); }
	inline bool SetAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x274, value); }
	inline bool SetDeceleration(t_structHelper inst, float value) { inst.WriteOffset(0x278, value); }
	inline bool SetTurningBoost(t_structHelper inst, float value) { inst.WriteOffset(0x27C, value); }
	inline bool bPositionCorrected()
	{
		return boolField280& 0x1;
	}
	inline bool SetbPositionCorrected(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x280, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFloatingPawnMovement = sizeof(UFloatingPawnMovement); // 656
    static_assert(sizeof(UFloatingPawnMovement) == 0x290, "Size of UFloatingPawnMovement is not correct.");
	auto constexpr UFloatingPawnMovement_MaxSpeed_Offset = offsetof(UFloatingPawnMovement, MaxSpeed);
	static_assert(UFloatingPawnMovement_MaxSpeed_Offset == 0x270, "UFloatingPawnMovement::MaxSpeed offset is not 270");
	auto constexpr UFloatingPawnMovement_Acceleration_Offset = offsetof(UFloatingPawnMovement, Acceleration);
	static_assert(UFloatingPawnMovement_Acceleration_Offset == 0x274, "UFloatingPawnMovement::Acceleration offset is not 274");
	auto constexpr UFloatingPawnMovement_Deceleration_Offset = offsetof(UFloatingPawnMovement, Deceleration);
	static_assert(UFloatingPawnMovement_Deceleration_Offset == 0x278, "UFloatingPawnMovement::Deceleration offset is not 278");
	auto constexpr UFloatingPawnMovement_TurningBoost_Offset = offsetof(UFloatingPawnMovement, TurningBoost);
	static_assert(UFloatingPawnMovement_TurningBoost_Offset == 0x27c, "UFloatingPawnMovement::TurningBoost offset is not 27c");
	auto constexpr UFloatingPawnMovement_boolField280_Offset = offsetof(UFloatingPawnMovement, boolField280);
	static_assert(UFloatingPawnMovement_boolField280_Offset == 0x280, "UFloatingPawnMovement::boolField280 offset is not 280");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
