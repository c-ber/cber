#pragma once
#include "USimpleInterpolationMovement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFreeFallMovement // Size: 0x360
	: public USimpleInterpolationMovement // Size: 0x310
{
private:
	typedef UFreeFallMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1954); // id32("Class TslGame.FreeFallMovement")
		return ptr;
	}
	float MinPitch; /* Ofs: 0x310 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.MinPitch */
	float MaxPitch; /* Ofs: 0x314 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.MaxPitch */
	float MaxLateralSpeed; /* Ofs: 0x318 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.MaxLateralSpeed */
	float LateralAcceleration; /* Ofs: 0x31C Size: 0x4 - FloatProperty TslGame.FreeFallMovement.LateralAcceleration */
	float LateralDeceleration; /* Ofs: 0x320 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.LateralDeceleration */
	float LateralBrakeDeceleration; /* Ofs: 0x324 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.LateralBrakeDeceleration */
	float VerticalAcceleration; /* Ofs: 0x328 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.VerticalAcceleration */
	float VerticalDeceleration; /* Ofs: 0x32C Size: 0x4 - FloatProperty TslGame.FreeFallMovement.VerticalDeceleration */
	float TerminalSpeed; /* Ofs: 0x330 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.TerminalSpeed */
	float MinAdditiveTerminalSpeed; /* Ofs: 0x334 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.MinAdditiveTerminalSpeed */
	float MaxAdditiveTerminalSpeed; /* Ofs: 0x338 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.MaxAdditiveTerminalSpeed */
	float RotationYawRate; /* Ofs: 0x33C Size: 0x4 - FloatProperty TslGame.FreeFallMovement.RotationYawRate */
	uint8_t UnknownData340[0x10];
	float InputUpdateTime; /* Ofs: 0x350 Size: 0x4 - FloatProperty TslGame.FreeFallMovement.InputUpdateTime */
	uint8_t UnknownData354[0xC];


	inline bool SetMinPitch(t_structHelper inst, float value) { inst.WriteOffset(0x310, value); }
	inline bool SetMaxPitch(t_structHelper inst, float value) { inst.WriteOffset(0x314, value); }
	inline bool SetMaxLateralSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
	inline bool SetLateralAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x31C, value); }
	inline bool SetLateralDeceleration(t_structHelper inst, float value) { inst.WriteOffset(0x320, value); }
	inline bool SetLateralBrakeDeceleration(t_structHelper inst, float value) { inst.WriteOffset(0x324, value); }
	inline bool SetVerticalAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x328, value); }
	inline bool SetVerticalDeceleration(t_structHelper inst, float value) { inst.WriteOffset(0x32C, value); }
	inline bool SetTerminalSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x330, value); }
	inline bool SetMinAdditiveTerminalSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x334, value); }
	inline bool SetMaxAdditiveTerminalSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x338, value); }
	inline bool SetRotationYawRate(t_structHelper inst, float value) { inst.WriteOffset(0x33C, value); }
	inline bool SetInputUpdateTime(t_structHelper inst, float value) { inst.WriteOffset(0x350, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFreeFallMovement = sizeof(UFreeFallMovement); // 864
    static_assert(sizeof(UFreeFallMovement) == 0x360, "Size of UFreeFallMovement is not correct.");
	auto constexpr UFreeFallMovement_MinPitch_Offset = offsetof(UFreeFallMovement, MinPitch);
	static_assert(UFreeFallMovement_MinPitch_Offset == 0x310, "UFreeFallMovement::MinPitch offset is not 310");
	auto constexpr UFreeFallMovement_MaxPitch_Offset = offsetof(UFreeFallMovement, MaxPitch);
	static_assert(UFreeFallMovement_MaxPitch_Offset == 0x314, "UFreeFallMovement::MaxPitch offset is not 314");
	auto constexpr UFreeFallMovement_MaxLateralSpeed_Offset = offsetof(UFreeFallMovement, MaxLateralSpeed);
	static_assert(UFreeFallMovement_MaxLateralSpeed_Offset == 0x318, "UFreeFallMovement::MaxLateralSpeed offset is not 318");
	auto constexpr UFreeFallMovement_LateralAcceleration_Offset = offsetof(UFreeFallMovement, LateralAcceleration);
	static_assert(UFreeFallMovement_LateralAcceleration_Offset == 0x31c, "UFreeFallMovement::LateralAcceleration offset is not 31c");
	auto constexpr UFreeFallMovement_LateralDeceleration_Offset = offsetof(UFreeFallMovement, LateralDeceleration);
	static_assert(UFreeFallMovement_LateralDeceleration_Offset == 0x320, "UFreeFallMovement::LateralDeceleration offset is not 320");
	auto constexpr UFreeFallMovement_LateralBrakeDeceleration_Offset = offsetof(UFreeFallMovement, LateralBrakeDeceleration);
	static_assert(UFreeFallMovement_LateralBrakeDeceleration_Offset == 0x324, "UFreeFallMovement::LateralBrakeDeceleration offset is not 324");
	auto constexpr UFreeFallMovement_VerticalAcceleration_Offset = offsetof(UFreeFallMovement, VerticalAcceleration);
	static_assert(UFreeFallMovement_VerticalAcceleration_Offset == 0x328, "UFreeFallMovement::VerticalAcceleration offset is not 328");
	auto constexpr UFreeFallMovement_VerticalDeceleration_Offset = offsetof(UFreeFallMovement, VerticalDeceleration);
	static_assert(UFreeFallMovement_VerticalDeceleration_Offset == 0x32c, "UFreeFallMovement::VerticalDeceleration offset is not 32c");
	auto constexpr UFreeFallMovement_TerminalSpeed_Offset = offsetof(UFreeFallMovement, TerminalSpeed);
	static_assert(UFreeFallMovement_TerminalSpeed_Offset == 0x330, "UFreeFallMovement::TerminalSpeed offset is not 330");
	auto constexpr UFreeFallMovement_MinAdditiveTerminalSpeed_Offset = offsetof(UFreeFallMovement, MinAdditiveTerminalSpeed);
	static_assert(UFreeFallMovement_MinAdditiveTerminalSpeed_Offset == 0x334, "UFreeFallMovement::MinAdditiveTerminalSpeed offset is not 334");
	auto constexpr UFreeFallMovement_MaxAdditiveTerminalSpeed_Offset = offsetof(UFreeFallMovement, MaxAdditiveTerminalSpeed);
	static_assert(UFreeFallMovement_MaxAdditiveTerminalSpeed_Offset == 0x338, "UFreeFallMovement::MaxAdditiveTerminalSpeed offset is not 338");
	auto constexpr UFreeFallMovement_RotationYawRate_Offset = offsetof(UFreeFallMovement, RotationYawRate);
	static_assert(UFreeFallMovement_RotationYawRate_Offset == 0x33c, "UFreeFallMovement::RotationYawRate offset is not 33c");
	auto constexpr UFreeFallMovement_InputUpdateTime_Offset = offsetof(UFreeFallMovement, InputUpdateTime);
	static_assert(UFreeFallMovement_InputUpdateTime_Offset == 0x350, "UFreeFallMovement::InputUpdateTime offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
