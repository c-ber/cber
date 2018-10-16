#pragma once
#include "UPawnMovementComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USimpleInterpolationMovement // Size: 0x310
	: public UPawnMovementComponent // Size: 0x270
{
private:
	typedef USimpleInterpolationMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1953); // id32("Class TslGame.SimpleInterpolationMovement")
		return ptr;
	}
	uint8_t UnknownData270[0x18];
	float LocationInterpTime; /* Ofs: 0x288 Size: 0x4 - FloatProperty TslGame.SimpleInterpolationMovement.LocationInterpTime */
	uint8_t UnknownData28C[0x38];
	float RotationInterpTime; /* Ofs: 0x2C4 Size: 0x4 - FloatProperty TslGame.SimpleInterpolationMovement.RotationInterpTime */
	uint8_t UnknownData2C8[0x38];
	uint8_t boolField300;
	uint8_t boolField301;
	uint8_t boolField302;
	uint8_t UnknownData303[0x1];
	float ForceMoveTime; /* Ofs: 0x304 Size: 0x4 - FloatProperty TslGame.SimpleInterpolationMovement.ForceMoveTime */
	uint8_t UnknownData308[0x8];


	inline bool SetLocationInterpTime(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetRotationInterpTime(t_structHelper inst, float value) { inst.WriteOffset(0x2C4, value); }
	inline bool bUseOnlyYawRotation()
	{
		return boolField300& 0x1;
	}
	inline bool SetbUseOnlyYawRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x300, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseSweepMove()
	{
		return boolField301& 0x1;
	}
	inline bool SetbUseSweepMove(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x301, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseSafeInterpolation()
	{
		return boolField302& 0x1;
	}
	inline bool SetbUseSafeInterpolation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x302, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetForceMoveTime(t_structHelper inst, float value) { inst.WriteOffset(0x304, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSimpleInterpolationMovement = sizeof(USimpleInterpolationMovement); // 784
    static_assert(sizeof(USimpleInterpolationMovement) == 0x310, "Size of USimpleInterpolationMovement is not correct.");
	auto constexpr USimpleInterpolationMovement_LocationInterpTime_Offset = offsetof(USimpleInterpolationMovement, LocationInterpTime);
	static_assert(USimpleInterpolationMovement_LocationInterpTime_Offset == 0x288, "USimpleInterpolationMovement::LocationInterpTime offset is not 288");
	auto constexpr USimpleInterpolationMovement_RotationInterpTime_Offset = offsetof(USimpleInterpolationMovement, RotationInterpTime);
	static_assert(USimpleInterpolationMovement_RotationInterpTime_Offset == 0x2c4, "USimpleInterpolationMovement::RotationInterpTime offset is not 2c4");
	auto constexpr USimpleInterpolationMovement_boolField300_Offset = offsetof(USimpleInterpolationMovement, boolField300);
	static_assert(USimpleInterpolationMovement_boolField300_Offset == 0x300, "USimpleInterpolationMovement::boolField300 offset is not 300");
	auto constexpr USimpleInterpolationMovement_boolField301_Offset = offsetof(USimpleInterpolationMovement, boolField301);
	static_assert(USimpleInterpolationMovement_boolField301_Offset == 0x301, "USimpleInterpolationMovement::boolField301 offset is not 301");
	auto constexpr USimpleInterpolationMovement_boolField302_Offset = offsetof(USimpleInterpolationMovement, boolField302);
	static_assert(USimpleInterpolationMovement_boolField302_Offset == 0x302, "USimpleInterpolationMovement::boolField302 offset is not 302");
	auto constexpr USimpleInterpolationMovement_ForceMoveTime_Offset = offsetof(USimpleInterpolationMovement, ForceMoveTime);
	static_assert(USimpleInterpolationMovement_ForceMoveTime_Offset == 0x304, "USimpleInterpolationMovement::ForceMoveTime offset is not 304");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
