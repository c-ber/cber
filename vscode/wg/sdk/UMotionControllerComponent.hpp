#pragma once
#include "UPrimitiveComponent.hpp"
#include "EControllerHand.hpp"
#include "ETrackingStatus.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMotionControllerComponent // Size: 0x950
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UMotionControllerComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(341); // id32("Class HeadMountedDisplay.MotionControllerComponent")
		return ptr;
	}
//	int32_t PlayerIndex; /* Ofs: 0x8E8 Size: 0x4 - IntProperty HeadMountedDisplay.MotionControllerComponent.PlayerIndex */
//	TEnumAsByte<enum EControllerHand> Hand; /* Ofs: 0x8EC Size: 0x1 - EnumProperty HeadMountedDisplay.MotionControllerComponent.Hand */
	uint8_t boolField8F0;
	uint8_t UnknownData8F1[0x3];
	TEnumAsByte<enum ETrackingStatus> CurrentTrackingStatus; /* Ofs: 0x8F4 Size: 0x1 - EnumProperty HeadMountedDisplay.MotionControllerComponent.CurrentTrackingStatus */
	uint8_t UnknownData8F5[0x5B];


//	inline bool SetPlayerIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8E8, value); }
//	inline bool SetHand(t_structHelper inst, TEnumAsByte<enum EControllerHand> value) { inst.WriteOffset(0x8EC, value); }
	inline bool bDisableLowLatencyUpdate()
	{
		return boolField8F0& 0x1;
	}
	inline bool SetbDisableLowLatencyUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCurrentTrackingStatus(t_structHelper inst, TEnumAsByte<enum ETrackingStatus> value) { inst.WriteOffset(0x8F4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMotionControllerComponent = sizeof(UMotionControllerComponent); // 2384
    static_assert(sizeof(UMotionControllerComponent) == 0x950, "Size of UMotionControllerComponent is not correct.");
//	auto constexpr UMotionControllerComponent_PlayerIndex_Offset = offsetof(UMotionControllerComponent, PlayerIndex);
//	static_assert(UMotionControllerComponent_PlayerIndex_Offset == 0x8e8, "UMotionControllerComponent::PlayerIndex offset is not 8e8");
//	auto constexpr UMotionControllerComponent_Hand_Offset = offsetof(UMotionControllerComponent, Hand);
//	static_assert(UMotionControllerComponent_Hand_Offset == 0x8ec, "UMotionControllerComponent::Hand offset is not 8ec");
	auto constexpr UMotionControllerComponent_boolField8F0_Offset = offsetof(UMotionControllerComponent, boolField8F0);
	static_assert(UMotionControllerComponent_boolField8F0_Offset == 0x8f0, "UMotionControllerComponent::boolField8F0 offset is not 8f0");
	auto constexpr UMotionControllerComponent_CurrentTrackingStatus_Offset = offsetof(UMotionControllerComponent, CurrentTrackingStatus);
	static_assert(UMotionControllerComponent_CurrentTrackingStatus_Offset == 0x8f4, "UMotionControllerComponent::CurrentTrackingStatus offset is not 8f4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
