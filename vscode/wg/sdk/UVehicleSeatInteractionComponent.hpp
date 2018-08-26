#pragma once
#include "USceneInteractionComponent.hpp"
#include "ERiderType.hpp"
#include "EWeaponClass.hpp"
#include "EVehicleAnimType.hpp"
#include "EWeaponClass.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSeatInteractionComponent // Size: 0x6D0
	: public USceneInteractionComponent // Size: 0x5A0
{
private:
	typedef UVehicleSeatInteractionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1950); // id32("Class TslGame.VehicleSeatInteractionComponent")
		return ptr;
	}
	ExternalPtr<struct UTslCharacter> Rider; /* Ofs: 0x5A0 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.Rider */
	uint8_t UnknownData5A8[0xC];
	int32_t SeatIndex; /* Ofs: 0x5B4 Size: 0x4 - IntProperty TslGame.VehicleSeatInteractionComponent.SeatIndex */
	TEnumAsByte<enum ERiderType> RiderType; /* Ofs: 0x5B8 Size: 0x1 - EnumProperty TslGame.VehicleSeatInteractionComponent.RiderType */
	uint8_t UnknownData5B9[0x7];
	FName LeaveSocketName; /* Ofs: 0x5C0 Size: 0x8 - NameProperty TslGame.VehicleSeatInteractionComponent.LeaveSocketName */
	uint8_t boolField5C8;
	uint8_t UnknownData5C9[0x7];
	TMap<EWeaponClass, struct FVector2D> ViewYawPerWeaponOverrideMap; /* Ofs: 0x5D0 Size: 0x50 - MapProperty TslGame.VehicleSeatInteractionComponent.ViewYawPerWeaponOverrideMap */
	float ViewPitchMin; /* Ofs: 0x620 Size: 0x4 - FloatProperty TslGame.VehicleSeatInteractionComponent.ViewPitchMin */
	float ViewPitchMax; /* Ofs: 0x624 Size: 0x4 - FloatProperty TslGame.VehicleSeatInteractionComponent.ViewPitchMax */
	float ViewYawMin; /* Ofs: 0x628 Size: 0x4 - FloatProperty TslGame.VehicleSeatInteractionComponent.ViewYawMin */
	float ViewYawMax; /* Ofs: 0x62C Size: 0x4 - FloatProperty TslGame.VehicleSeatInteractionComponent.ViewYawMax */
	ExternalPtr<struct UCurveFloat> CurvePitchMax; /* Ofs: 0x630 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.CurvePitchMax */
	ExternalPtr<struct UCurveFloat> CurvePitchMin; /* Ofs: 0x638 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.CurvePitchMin */
	FName FirstPersonCameraName; /* Ofs: 0x640 Size: 0x8 - NameProperty TslGame.VehicleSeatInteractionComponent.FirstPersonCameraName */
	FName ThirdPersonCameraName; /* Ofs: 0x648 Size: 0x8 - NameProperty TslGame.VehicleSeatInteractionComponent.ThirdPersonCameraName */
	TEnumAsByte<enum EVehicleAnimType> SeatAnimationType; /* Ofs: 0x650 Size: 0x1 - EnumProperty TslGame.VehicleSeatInteractionComponent.SeatAnimationType */
	uint8_t UnknownData651[0x7];
	ExternalPtr<struct UBlendSpaceBase> SeatBlendspaceAiming; /* Ofs: 0x658 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.SeatBlendspaceAiming */
	ExternalPtr<struct UBlendSpaceBase> SeatBlendspaceFPPAiming; /* Ofs: 0x660 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.SeatBlendspaceFPPAiming */
	ExternalPtr<struct UAnimSequenceBase> SeatAnimationIdle_Rifle; /* Ofs: 0x668 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.SeatAnimationIdle_Rifle */
	ExternalPtr<struct UAnimSequenceBase> SeatAnimationIdle_Melee; /* Ofs: 0x670 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.SeatAnimationIdle_Melee */
	ExternalPtr<struct UAnimSequenceBase> SeatAnimationIdle_Unarmed; /* Ofs: 0x678 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.SeatAnimationIdle_Unarmed */
	ExternalPtr<struct UAnimSequenceBase> SeatAnimationIdle_Grenade; /* Ofs: 0x680 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.SeatAnimationIdle_Grenade */
	ExternalPtr<struct UAimOffsetBlendSpace> SeatIdleAO; /* Ofs: 0x688 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.SeatIdleAO */
	ExternalPtr<struct UBlendSpaceBase> TransitionOutBlendspace; /* Ofs: 0x690 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.TransitionOutBlendspace */
	ExternalPtr<struct UBlendSpaceBase> TransitionInBlendspace; /* Ofs: 0x698 Size: 0x8 - ObjectProperty TslGame.VehicleSeatInteractionComponent.TransitionInBlendspace */
	uint8_t boolField6A0;
	uint8_t UnknownData6A1[0x7];
	TArray<EWeaponClass> AllowedWeaponClasses; /* Ofs: 0x6A8 Size: 0x10 - ArrayProperty TslGame.VehicleSeatInteractionComponent.AllowedWeaponClasses */
	uint8_t boolField6B8;
	uint8_t boolField6B9;
	uint8_t UnknownData6BA[0x2];
	float MaxVelocityForEntry; /* Ofs: 0x6BC Size: 0x4 - FloatProperty TslGame.VehicleSeatInteractionComponent.MaxVelocityForEntry */
	float InteractionBlockDuration; /* Ofs: 0x6C0 Size: 0x4 - FloatProperty TslGame.VehicleSeatInteractionComponent.InteractionBlockDuration */
	uint8_t UnknownData6C4[0xC];


	inline bool SetRider(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetSeatIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5B4, value); }
	inline bool SetRiderType(t_structHelper inst, TEnumAsByte<enum ERiderType> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetLeaveSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x5C0, value); }
	inline bool bDisablePlayerCapsuleCollision()
	{
		return boolField5C8& 0x1;
	}
	inline bool SetbDisablePlayerCapsuleCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetViewYawPerWeaponOverrideMap(t_structHelper inst, TMap<EWeaponClass, struct FVector2D> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetViewPitchMin(t_structHelper inst, float value) { inst.WriteOffset(0x620, value); }
	inline bool SetViewPitchMax(t_structHelper inst, float value) { inst.WriteOffset(0x624, value); }
	inline bool SetViewYawMin(t_structHelper inst, float value) { inst.WriteOffset(0x628, value); }
	inline bool SetViewYawMax(t_structHelper inst, float value) { inst.WriteOffset(0x62C, value); }
	inline bool SetCurvePitchMax(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x630, value); }
	inline bool SetCurvePitchMin(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x638, value); }
	inline bool SetFirstPersonCameraName(t_structHelper inst, FName value) { inst.WriteOffset(0x640, value); }
	inline bool SetThirdPersonCameraName(t_structHelper inst, FName value) { inst.WriteOffset(0x648, value); }
	inline bool SetSeatAnimationType(t_structHelper inst, TEnumAsByte<enum EVehicleAnimType> value) { inst.WriteOffset(0x650, value); }
	inline bool SetSeatBlendspaceAiming(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x658, value); }
	inline bool SetSeatBlendspaceFPPAiming(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x660, value); }
	inline bool SetSeatAnimationIdle_Rifle(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0x668, value); }
	inline bool SetSeatAnimationIdle_Melee(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0x670, value); }
	inline bool SetSeatAnimationIdle_Unarmed(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0x678, value); }
	inline bool SetSeatAnimationIdle_Grenade(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0x680, value); }
	inline bool SetSeatIdleAO(t_structHelper inst, ExternalPtr<struct UAimOffsetBlendSpace> value) { inst.WriteOffset(0x688, value); }
	inline bool SetTransitionOutBlendspace(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x690, value); }
	inline bool SetTransitionInBlendspace(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x698, value); }
	inline bool bRestricWeaponUse()
	{
		return boolField6A0& 0x1;
	}
	inline bool SetbRestricWeaponUse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAllowedWeaponClasses(t_structHelper inst, TArray<EWeaponClass> value) { inst.WriteOffset(0x6A8, value); }
	inline bool bCanOnlyFireWhileAiming()
	{
		return boolField6B8& 0x1;
	}
	inline bool SetbCanOnlyFireWhileAiming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseEntryVelocityRestriction()
	{
		return boolField6B9& 0x1;
	}
	inline bool SetbUseEntryVelocityRestriction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6B9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxVelocityForEntry(t_structHelper inst, float value) { inst.WriteOffset(0x6BC, value); }
	inline bool SetInteractionBlockDuration(t_structHelper inst, float value) { inst.WriteOffset(0x6C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSeatInteractionComponent = sizeof(UVehicleSeatInteractionComponent); // 1744
    static_assert(sizeof(UVehicleSeatInteractionComponent) == 0x6D0, "Size of UVehicleSeatInteractionComponent is not correct.");
	auto constexpr UVehicleSeatInteractionComponent_Rider_Offset = offsetof(UVehicleSeatInteractionComponent, Rider);
	static_assert(UVehicleSeatInteractionComponent_Rider_Offset == 0x5a0, "UVehicleSeatInteractionComponent::Rider offset is not 5a0");
	auto constexpr UVehicleSeatInteractionComponent_SeatIndex_Offset = offsetof(UVehicleSeatInteractionComponent, SeatIndex);
	static_assert(UVehicleSeatInteractionComponent_SeatIndex_Offset == 0x5b4, "UVehicleSeatInteractionComponent::SeatIndex offset is not 5b4");
	auto constexpr UVehicleSeatInteractionComponent_RiderType_Offset = offsetof(UVehicleSeatInteractionComponent, RiderType);
	static_assert(UVehicleSeatInteractionComponent_RiderType_Offset == 0x5b8, "UVehicleSeatInteractionComponent::RiderType offset is not 5b8");
	auto constexpr UVehicleSeatInteractionComponent_LeaveSocketName_Offset = offsetof(UVehicleSeatInteractionComponent, LeaveSocketName);
	static_assert(UVehicleSeatInteractionComponent_LeaveSocketName_Offset == 0x5c0, "UVehicleSeatInteractionComponent::LeaveSocketName offset is not 5c0");
	auto constexpr UVehicleSeatInteractionComponent_boolField5C8_Offset = offsetof(UVehicleSeatInteractionComponent, boolField5C8);
	static_assert(UVehicleSeatInteractionComponent_boolField5C8_Offset == 0x5c8, "UVehicleSeatInteractionComponent::boolField5C8 offset is not 5c8");
	auto constexpr UVehicleSeatInteractionComponent_ViewYawPerWeaponOverrideMap_Offset = offsetof(UVehicleSeatInteractionComponent, ViewYawPerWeaponOverrideMap);
	static_assert(UVehicleSeatInteractionComponent_ViewYawPerWeaponOverrideMap_Offset == 0x5d0, "UVehicleSeatInteractionComponent::ViewYawPerWeaponOverrideMap offset is not 5d0");
	auto constexpr UVehicleSeatInteractionComponent_ViewPitchMin_Offset = offsetof(UVehicleSeatInteractionComponent, ViewPitchMin);
	static_assert(UVehicleSeatInteractionComponent_ViewPitchMin_Offset == 0x620, "UVehicleSeatInteractionComponent::ViewPitchMin offset is not 620");
	auto constexpr UVehicleSeatInteractionComponent_ViewPitchMax_Offset = offsetof(UVehicleSeatInteractionComponent, ViewPitchMax);
	static_assert(UVehicleSeatInteractionComponent_ViewPitchMax_Offset == 0x624, "UVehicleSeatInteractionComponent::ViewPitchMax offset is not 624");
	auto constexpr UVehicleSeatInteractionComponent_ViewYawMin_Offset = offsetof(UVehicleSeatInteractionComponent, ViewYawMin);
	static_assert(UVehicleSeatInteractionComponent_ViewYawMin_Offset == 0x628, "UVehicleSeatInteractionComponent::ViewYawMin offset is not 628");
	auto constexpr UVehicleSeatInteractionComponent_ViewYawMax_Offset = offsetof(UVehicleSeatInteractionComponent, ViewYawMax);
	static_assert(UVehicleSeatInteractionComponent_ViewYawMax_Offset == 0x62c, "UVehicleSeatInteractionComponent::ViewYawMax offset is not 62c");
	auto constexpr UVehicleSeatInteractionComponent_CurvePitchMax_Offset = offsetof(UVehicleSeatInteractionComponent, CurvePitchMax);
	static_assert(UVehicleSeatInteractionComponent_CurvePitchMax_Offset == 0x630, "UVehicleSeatInteractionComponent::CurvePitchMax offset is not 630");
	auto constexpr UVehicleSeatInteractionComponent_CurvePitchMin_Offset = offsetof(UVehicleSeatInteractionComponent, CurvePitchMin);
	static_assert(UVehicleSeatInteractionComponent_CurvePitchMin_Offset == 0x638, "UVehicleSeatInteractionComponent::CurvePitchMin offset is not 638");
	auto constexpr UVehicleSeatInteractionComponent_FirstPersonCameraName_Offset = offsetof(UVehicleSeatInteractionComponent, FirstPersonCameraName);
	static_assert(UVehicleSeatInteractionComponent_FirstPersonCameraName_Offset == 0x640, "UVehicleSeatInteractionComponent::FirstPersonCameraName offset is not 640");
	auto constexpr UVehicleSeatInteractionComponent_ThirdPersonCameraName_Offset = offsetof(UVehicleSeatInteractionComponent, ThirdPersonCameraName);
	static_assert(UVehicleSeatInteractionComponent_ThirdPersonCameraName_Offset == 0x648, "UVehicleSeatInteractionComponent::ThirdPersonCameraName offset is not 648");
	auto constexpr UVehicleSeatInteractionComponent_SeatAnimationType_Offset = offsetof(UVehicleSeatInteractionComponent, SeatAnimationType);
	static_assert(UVehicleSeatInteractionComponent_SeatAnimationType_Offset == 0x650, "UVehicleSeatInteractionComponent::SeatAnimationType offset is not 650");
	auto constexpr UVehicleSeatInteractionComponent_SeatBlendspaceAiming_Offset = offsetof(UVehicleSeatInteractionComponent, SeatBlendspaceAiming);
	static_assert(UVehicleSeatInteractionComponent_SeatBlendspaceAiming_Offset == 0x658, "UVehicleSeatInteractionComponent::SeatBlendspaceAiming offset is not 658");
	auto constexpr UVehicleSeatInteractionComponent_SeatBlendspaceFPPAiming_Offset = offsetof(UVehicleSeatInteractionComponent, SeatBlendspaceFPPAiming);
	static_assert(UVehicleSeatInteractionComponent_SeatBlendspaceFPPAiming_Offset == 0x660, "UVehicleSeatInteractionComponent::SeatBlendspaceFPPAiming offset is not 660");
	auto constexpr UVehicleSeatInteractionComponent_SeatAnimationIdle_Rifle_Offset = offsetof(UVehicleSeatInteractionComponent, SeatAnimationIdle_Rifle);
	static_assert(UVehicleSeatInteractionComponent_SeatAnimationIdle_Rifle_Offset == 0x668, "UVehicleSeatInteractionComponent::SeatAnimationIdle_Rifle offset is not 668");
	auto constexpr UVehicleSeatInteractionComponent_SeatAnimationIdle_Melee_Offset = offsetof(UVehicleSeatInteractionComponent, SeatAnimationIdle_Melee);
	static_assert(UVehicleSeatInteractionComponent_SeatAnimationIdle_Melee_Offset == 0x670, "UVehicleSeatInteractionComponent::SeatAnimationIdle_Melee offset is not 670");
	auto constexpr UVehicleSeatInteractionComponent_SeatAnimationIdle_Unarmed_Offset = offsetof(UVehicleSeatInteractionComponent, SeatAnimationIdle_Unarmed);
	static_assert(UVehicleSeatInteractionComponent_SeatAnimationIdle_Unarmed_Offset == 0x678, "UVehicleSeatInteractionComponent::SeatAnimationIdle_Unarmed offset is not 678");
	auto constexpr UVehicleSeatInteractionComponent_SeatAnimationIdle_Grenade_Offset = offsetof(UVehicleSeatInteractionComponent, SeatAnimationIdle_Grenade);
	static_assert(UVehicleSeatInteractionComponent_SeatAnimationIdle_Grenade_Offset == 0x680, "UVehicleSeatInteractionComponent::SeatAnimationIdle_Grenade offset is not 680");
	auto constexpr UVehicleSeatInteractionComponent_SeatIdleAO_Offset = offsetof(UVehicleSeatInteractionComponent, SeatIdleAO);
	static_assert(UVehicleSeatInteractionComponent_SeatIdleAO_Offset == 0x688, "UVehicleSeatInteractionComponent::SeatIdleAO offset is not 688");
	auto constexpr UVehicleSeatInteractionComponent_TransitionOutBlendspace_Offset = offsetof(UVehicleSeatInteractionComponent, TransitionOutBlendspace);
	static_assert(UVehicleSeatInteractionComponent_TransitionOutBlendspace_Offset == 0x690, "UVehicleSeatInteractionComponent::TransitionOutBlendspace offset is not 690");
	auto constexpr UVehicleSeatInteractionComponent_TransitionInBlendspace_Offset = offsetof(UVehicleSeatInteractionComponent, TransitionInBlendspace);
	static_assert(UVehicleSeatInteractionComponent_TransitionInBlendspace_Offset == 0x698, "UVehicleSeatInteractionComponent::TransitionInBlendspace offset is not 698");
	auto constexpr UVehicleSeatInteractionComponent_boolField6A0_Offset = offsetof(UVehicleSeatInteractionComponent, boolField6A0);
	static_assert(UVehicleSeatInteractionComponent_boolField6A0_Offset == 0x6a0, "UVehicleSeatInteractionComponent::boolField6A0 offset is not 6a0");
	auto constexpr UVehicleSeatInteractionComponent_AllowedWeaponClasses_Offset = offsetof(UVehicleSeatInteractionComponent, AllowedWeaponClasses);
	static_assert(UVehicleSeatInteractionComponent_AllowedWeaponClasses_Offset == 0x6a8, "UVehicleSeatInteractionComponent::AllowedWeaponClasses offset is not 6a8");
	auto constexpr UVehicleSeatInteractionComponent_boolField6B8_Offset = offsetof(UVehicleSeatInteractionComponent, boolField6B8);
	static_assert(UVehicleSeatInteractionComponent_boolField6B8_Offset == 0x6b8, "UVehicleSeatInteractionComponent::boolField6B8 offset is not 6b8");
	auto constexpr UVehicleSeatInteractionComponent_boolField6B9_Offset = offsetof(UVehicleSeatInteractionComponent, boolField6B9);
	static_assert(UVehicleSeatInteractionComponent_boolField6B9_Offset == 0x6b9, "UVehicleSeatInteractionComponent::boolField6B9 offset is not 6b9");
	auto constexpr UVehicleSeatInteractionComponent_MaxVelocityForEntry_Offset = offsetof(UVehicleSeatInteractionComponent, MaxVelocityForEntry);
	static_assert(UVehicleSeatInteractionComponent_MaxVelocityForEntry_Offset == 0x6bc, "UVehicleSeatInteractionComponent::MaxVelocityForEntry offset is not 6bc");
	auto constexpr UVehicleSeatInteractionComponent_InteractionBlockDuration_Offset = offsetof(UVehicleSeatInteractionComponent, InteractionBlockDuration);
	static_assert(UVehicleSeatInteractionComponent_InteractionBlockDuration_Offset == 0x6c0, "UVehicleSeatInteractionComponent::InteractionBlockDuration offset is not 6c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
