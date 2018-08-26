#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleSeatComponent // Size: 0x300
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslVehicleSeatComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1610); // id32("Class TslGame.TslVehicleSeatComponent")
		return ptr;
	}
//	FScriptMulticastDelegate OnRide; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleSeatComponent.OnRide */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate OnLeave; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleSeatComponent.OnLeave */
	FScriptMulticastDelegate OnDriverRide; /* Ofs: 0x208 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleSeatComponent.OnDriverRide */
	FScriptMulticastDelegate OnDriverLeave; /* Ofs: 0x218 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleSeatComponent.OnDriverLeave */
	FScriptMulticastDelegate OnPostDriverRide; /* Ofs: 0x228 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleSeatComponent.OnPostDriverRide */
	FScriptMulticastDelegate OnPostDriverLeave; /* Ofs: 0x238 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleSeatComponent.OnPostDriverLeave */
	TArray<struct FVehicleSeatInfo> SeatInfos; /* Ofs: 0x248 Size: 0x10 - ArrayProperty TslGame.TslVehicleSeatComponent.SeatInfos */
	TArray<ExternalPtr<struct UVehicleSeatInteractionComponent>> Seats; /* Ofs: 0x258 Size: 0x10 - ArrayProperty TslGame.TslVehicleSeatComponent.Seats */
	uint8_t boolField268;
	uint8_t boolField269;
	uint8_t UnknownData26A[0x2];
	float FlipForce; /* Ofs: 0x26C Size: 0x4 - FloatProperty TslGame.TslVehicleSeatComponent.FlipForce */
	uint8_t boolField270;
	uint8_t UnknownData271[0x3];
	float MinEntryAngle; /* Ofs: 0x274 Size: 0x4 - FloatProperty TslGame.TslVehicleSeatComponent.MinEntryAngle */
	uint8_t boolField278;
	uint8_t UnknownData279[0x3];
	float OnLeaveVelocityMultiplier; /* Ofs: 0x27C Size: 0x4 - FloatProperty TslGame.TslVehicleSeatComponent.OnLeaveVelocityMultiplier */
	uint8_t boolField280;
	uint8_t boolField281;
	uint8_t UnknownData282[0x2];
	float TargetSpringArmLengthInFirstPerson; /* Ofs: 0x284 Size: 0x4 - FloatProperty TslGame.TslVehicleSeatComponent.TargetSpringArmLengthInFirstPerson */
	float TargetSpringArmLengthInThirdPerson; /* Ofs: 0x288 Size: 0x4 - FloatProperty TslGame.TslVehicleSeatComponent.TargetSpringArmLengthInThirdPerson */
	TWeakObjectPtr<ExternalPtr<struct UTslCharacter>> LastDriver; /* Ofs: 0x28C Size: 0x8 - WeakObjectProperty TslGame.TslVehicleSeatComponent.LastDriver */
	uint8_t UnknownData294[0x6C];


//	inline bool SetOnRide(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetOnLeave(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetOnDriverRide(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x208, value); }
	inline bool SetOnDriverLeave(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x218, value); }
	inline bool SetOnPostDriverRide(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x228, value); }
	inline bool SetOnPostDriverLeave(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x238, value); }
	inline bool SetSeatInfos(t_structHelper inst, TArray<struct FVehicleSeatInfo> value) { inst.WriteOffset(0x248, value); }
	inline bool SetSeats(t_structHelper inst, TArray<ExternalPtr<struct UVehicleSeatInteractionComponent>> value) { inst.WriteOffset(0x258, value); }
	inline bool bUseSeatCamera()
	{
		return boolField268& 0x1;
	}
	inline bool SetbUseSeatCamera(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x268, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDoFlipCheck()
	{
		return boolField269& 0x1;
	}
	inline bool SetbDoFlipCheck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x269, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFlipForce(t_structHelper inst, float value) { inst.WriteOffset(0x26C, value); }
	inline bool bDoEntryAngleCheck()
	{
		return boolField270& 0x1;
	}
	inline bool SetbDoEntryAngleCheck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x270, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinEntryAngle(t_structHelper inst, float value) { inst.WriteOffset(0x274, value); }
	inline bool bDampenPlayerVelocityOnLeave()
	{
		return boolField278& 0x1;
	}
	inline bool SetbDampenPlayerVelocityOnLeave(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x278, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnLeaveVelocityMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x27C, value); }
	inline bool bUseActiveStabilize()
	{
		return boolField280& 0x1;
	}
	inline bool SetbUseActiveStabilize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x280, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRiderChangeSeat()
	{
		return boolField281& 0x1;
	}
	inline bool SetbRiderChangeSeat(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x281, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTargetSpringArmLengthInFirstPerson(t_structHelper inst, float value) { inst.WriteOffset(0x284, value); }
	inline bool SetTargetSpringArmLengthInThirdPerson(t_structHelper inst, float value) { inst.WriteOffset(0x288, value); }
	inline bool SetLastDriver(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0x28C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleSeatComponent = sizeof(UTslVehicleSeatComponent); // 768
    static_assert(sizeof(UTslVehicleSeatComponent) == 0x300, "Size of UTslVehicleSeatComponent is not correct.");
//	auto constexpr UTslVehicleSeatComponent_OnRide_Offset = offsetof(UTslVehicleSeatComponent, OnRide);
//	static_assert(UTslVehicleSeatComponent_OnRide_Offset == 0x1e8, "UTslVehicleSeatComponent::OnRide offset is not 1e8");
	auto constexpr UTslVehicleSeatComponent_OnLeave_Offset = offsetof(UTslVehicleSeatComponent, OnLeave);
	static_assert(UTslVehicleSeatComponent_OnLeave_Offset == 0x1f8, "UTslVehicleSeatComponent::OnLeave offset is not 1f8");
	auto constexpr UTslVehicleSeatComponent_OnDriverRide_Offset = offsetof(UTslVehicleSeatComponent, OnDriverRide);
	static_assert(UTslVehicleSeatComponent_OnDriverRide_Offset == 0x208, "UTslVehicleSeatComponent::OnDriverRide offset is not 208");
	auto constexpr UTslVehicleSeatComponent_OnDriverLeave_Offset = offsetof(UTslVehicleSeatComponent, OnDriverLeave);
	static_assert(UTslVehicleSeatComponent_OnDriverLeave_Offset == 0x218, "UTslVehicleSeatComponent::OnDriverLeave offset is not 218");
	auto constexpr UTslVehicleSeatComponent_OnPostDriverRide_Offset = offsetof(UTslVehicleSeatComponent, OnPostDriverRide);
	static_assert(UTslVehicleSeatComponent_OnPostDriverRide_Offset == 0x228, "UTslVehicleSeatComponent::OnPostDriverRide offset is not 228");
	auto constexpr UTslVehicleSeatComponent_OnPostDriverLeave_Offset = offsetof(UTslVehicleSeatComponent, OnPostDriverLeave);
	static_assert(UTslVehicleSeatComponent_OnPostDriverLeave_Offset == 0x238, "UTslVehicleSeatComponent::OnPostDriverLeave offset is not 238");
	auto constexpr UTslVehicleSeatComponent_SeatInfos_Offset = offsetof(UTslVehicleSeatComponent, SeatInfos);
	static_assert(UTslVehicleSeatComponent_SeatInfos_Offset == 0x248, "UTslVehicleSeatComponent::SeatInfos offset is not 248");
	auto constexpr UTslVehicleSeatComponent_Seats_Offset = offsetof(UTslVehicleSeatComponent, Seats);
	static_assert(UTslVehicleSeatComponent_Seats_Offset == 0x258, "UTslVehicleSeatComponent::Seats offset is not 258");
	auto constexpr UTslVehicleSeatComponent_boolField268_Offset = offsetof(UTslVehicleSeatComponent, boolField268);
	static_assert(UTslVehicleSeatComponent_boolField268_Offset == 0x268, "UTslVehicleSeatComponent::boolField268 offset is not 268");
	auto constexpr UTslVehicleSeatComponent_boolField269_Offset = offsetof(UTslVehicleSeatComponent, boolField269);
	static_assert(UTslVehicleSeatComponent_boolField269_Offset == 0x269, "UTslVehicleSeatComponent::boolField269 offset is not 269");
	auto constexpr UTslVehicleSeatComponent_FlipForce_Offset = offsetof(UTslVehicleSeatComponent, FlipForce);
	static_assert(UTslVehicleSeatComponent_FlipForce_Offset == 0x26c, "UTslVehicleSeatComponent::FlipForce offset is not 26c");
	auto constexpr UTslVehicleSeatComponent_boolField270_Offset = offsetof(UTslVehicleSeatComponent, boolField270);
	static_assert(UTslVehicleSeatComponent_boolField270_Offset == 0x270, "UTslVehicleSeatComponent::boolField270 offset is not 270");
	auto constexpr UTslVehicleSeatComponent_MinEntryAngle_Offset = offsetof(UTslVehicleSeatComponent, MinEntryAngle);
	static_assert(UTslVehicleSeatComponent_MinEntryAngle_Offset == 0x274, "UTslVehicleSeatComponent::MinEntryAngle offset is not 274");
	auto constexpr UTslVehicleSeatComponent_boolField278_Offset = offsetof(UTslVehicleSeatComponent, boolField278);
	static_assert(UTslVehicleSeatComponent_boolField278_Offset == 0x278, "UTslVehicleSeatComponent::boolField278 offset is not 278");
	auto constexpr UTslVehicleSeatComponent_OnLeaveVelocityMultiplier_Offset = offsetof(UTslVehicleSeatComponent, OnLeaveVelocityMultiplier);
	static_assert(UTslVehicleSeatComponent_OnLeaveVelocityMultiplier_Offset == 0x27c, "UTslVehicleSeatComponent::OnLeaveVelocityMultiplier offset is not 27c");
	auto constexpr UTslVehicleSeatComponent_boolField280_Offset = offsetof(UTslVehicleSeatComponent, boolField280);
	static_assert(UTslVehicleSeatComponent_boolField280_Offset == 0x280, "UTslVehicleSeatComponent::boolField280 offset is not 280");
	auto constexpr UTslVehicleSeatComponent_boolField281_Offset = offsetof(UTslVehicleSeatComponent, boolField281);
	static_assert(UTslVehicleSeatComponent_boolField281_Offset == 0x281, "UTslVehicleSeatComponent::boolField281 offset is not 281");
	auto constexpr UTslVehicleSeatComponent_TargetSpringArmLengthInFirstPerson_Offset = offsetof(UTslVehicleSeatComponent, TargetSpringArmLengthInFirstPerson);
	static_assert(UTslVehicleSeatComponent_TargetSpringArmLengthInFirstPerson_Offset == 0x284, "UTslVehicleSeatComponent::TargetSpringArmLengthInFirstPerson offset is not 284");
	auto constexpr UTslVehicleSeatComponent_TargetSpringArmLengthInThirdPerson_Offset = offsetof(UTslVehicleSeatComponent, TargetSpringArmLengthInThirdPerson);
	static_assert(UTslVehicleSeatComponent_TargetSpringArmLengthInThirdPerson_Offset == 0x288, "UTslVehicleSeatComponent::TargetSpringArmLengthInThirdPerson offset is not 288");
	auto constexpr UTslVehicleSeatComponent_LastDriver_Offset = offsetof(UTslVehicleSeatComponent, LastDriver);
	static_assert(UTslVehicleSeatComponent_LastDriver_Offset == 0x28c, "UTslVehicleSeatComponent::LastDriver offset is not 28c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
