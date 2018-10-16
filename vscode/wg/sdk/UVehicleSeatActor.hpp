#pragma once
#include "UActor.hpp"
#include "EWeaponClass.hpp"
#include "EVehicleAnimType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVehicleSeatActor // Size: 0x490
	: public UActor // Size: 0x410
{
private:
	typedef UVehicleSeatActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(54); // id32("Class TslGame.VehicleSeatActor")
		return ptr;
	}
//	float ViewPitchMin; /* Ofs: 0x408 Size: 0x4 - FloatProperty TslGame.VehicleSeatActor.ViewPitchMin */
//	float ViewPitchMax; /* Ofs: 0x40C Size: 0x4 - FloatProperty TslGame.VehicleSeatActor.ViewPitchMax */
	float ViewYawMin; /* Ofs: 0x410 Size: 0x4 - FloatProperty TslGame.VehicleSeatActor.ViewYawMin */
	float ViewYawMax; /* Ofs: 0x414 Size: 0x4 - FloatProperty TslGame.VehicleSeatActor.ViewYawMax */
	ExternalPtr<struct UCurveFloat> CurvePitchMax; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.VehicleSeatActor.CurvePitchMax */
	ExternalPtr<struct UCurveFloat> CurvePitchMin; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.VehicleSeatActor.CurvePitchMin */
	uint8_t boolField428;
	uint8_t UnknownData429[0x7];
	ExternalPtr<struct UBlendSpaceBase> SeatBlendspaceAiming; /* Ofs: 0x430 Size: 0x8 - ObjectProperty TslGame.VehicleSeatActor.SeatBlendspaceAiming */
	ExternalPtr<struct UAnimSequenceBase> SeatAnimationIdle; /* Ofs: 0x438 Size: 0x8 - ObjectProperty TslGame.VehicleSeatActor.SeatAnimationIdle */
	ExternalPtr<struct UAimOffsetBlendSpace> SeatIdleAO; /* Ofs: 0x440 Size: 0x8 - ObjectProperty TslGame.VehicleSeatActor.SeatIdleAO */
	ExternalPtr<struct UBlendSpaceBase> TransitionOutBlendspace; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.VehicleSeatActor.TransitionOutBlendspace */
	ExternalPtr<struct UBlendSpaceBase> TransitionInBlendspace; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TslGame.VehicleSeatActor.TransitionInBlendspace */
	uint8_t boolField458;
	uint8_t UnknownData459[0x7];
	TArray<EWeaponClass> AllowedWeaponClasses; /* Ofs: 0x460 Size: 0x10 - ArrayProperty TslGame.VehicleSeatActor.AllowedWeaponClasses */
	uint8_t boolField470;
	uint8_t UnknownData471[0x3];
	float MaxVelocityForEntry; /* Ofs: 0x474 Size: 0x4 - FloatProperty TslGame.VehicleSeatActor.MaxVelocityForEntry */
	ExternalPtr<struct UTslCharacter> Rider; /* Ofs: 0x478 Size: 0x8 - ObjectProperty TslGame.VehicleSeatActor.Rider */
	uint8_t UnknownData480[0xC];
	TEnumAsByte<enum EVehicleAnimType> SeatAnimationType; /* Ofs: 0x48C Size: 0x1 - EnumProperty TslGame.VehicleSeatActor.SeatAnimationType */
	uint8_t UnknownData48D[0x3];


//	inline bool SetViewPitchMin(t_structHelper inst, float value) { inst.WriteOffset(0x408, value); }
//	inline bool SetViewPitchMax(t_structHelper inst, float value) { inst.WriteOffset(0x40C, value); }
	inline bool SetViewYawMin(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
	inline bool SetViewYawMax(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool SetCurvePitchMax(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x418, value); }
	inline bool SetCurvePitchMin(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x420, value); }
	inline bool bCanOnlyFireWhileAiming()
	{
		return boolField428& 0x1;
	}
	inline bool SetbCanOnlyFireWhileAiming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x428, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSeatBlendspaceAiming(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x430, value); }
	inline bool SetSeatAnimationIdle(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0x438, value); }
	inline bool SetSeatIdleAO(t_structHelper inst, ExternalPtr<struct UAimOffsetBlendSpace> value) { inst.WriteOffset(0x440, value); }
	inline bool SetTransitionOutBlendspace(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x448, value); }
	inline bool SetTransitionInBlendspace(t_structHelper inst, ExternalPtr<struct UBlendSpaceBase> value) { inst.WriteOffset(0x450, value); }
	inline bool bRestricWeaponUse()
	{
		return boolField458& 0x1;
	}
	inline bool SetbRestricWeaponUse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x458, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAllowedWeaponClasses(t_structHelper inst, TArray<EWeaponClass> value) { inst.WriteOffset(0x460, value); }
	inline bool bUseEntryVelocityRestriction()
	{
		return boolField470& 0x1;
	}
	inline bool SetbUseEntryVelocityRestriction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x470, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxVelocityForEntry(t_structHelper inst, float value) { inst.WriteOffset(0x474, value); }
	inline bool SetRider(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x478, value); }
	inline bool SetSeatAnimationType(t_structHelper inst, TEnumAsByte<enum EVehicleAnimType> value) { inst.WriteOffset(0x48C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVehicleSeatActor = sizeof(UVehicleSeatActor); // 1168
    static_assert(sizeof(UVehicleSeatActor) == 0x490, "Size of UVehicleSeatActor is not correct.");
//	auto constexpr UVehicleSeatActor_ViewPitchMin_Offset = offsetof(UVehicleSeatActor, ViewPitchMin);
//	static_assert(UVehicleSeatActor_ViewPitchMin_Offset == 0x408, "UVehicleSeatActor::ViewPitchMin offset is not 408");
//	auto constexpr UVehicleSeatActor_ViewPitchMax_Offset = offsetof(UVehicleSeatActor, ViewPitchMax);
//	static_assert(UVehicleSeatActor_ViewPitchMax_Offset == 0x40c, "UVehicleSeatActor::ViewPitchMax offset is not 40c");
	auto constexpr UVehicleSeatActor_ViewYawMin_Offset = offsetof(UVehicleSeatActor, ViewYawMin);
	static_assert(UVehicleSeatActor_ViewYawMin_Offset == 0x410, "UVehicleSeatActor::ViewYawMin offset is not 410");
	auto constexpr UVehicleSeatActor_ViewYawMax_Offset = offsetof(UVehicleSeatActor, ViewYawMax);
	static_assert(UVehicleSeatActor_ViewYawMax_Offset == 0x414, "UVehicleSeatActor::ViewYawMax offset is not 414");
	auto constexpr UVehicleSeatActor_CurvePitchMax_Offset = offsetof(UVehicleSeatActor, CurvePitchMax);
	static_assert(UVehicleSeatActor_CurvePitchMax_Offset == 0x418, "UVehicleSeatActor::CurvePitchMax offset is not 418");
	auto constexpr UVehicleSeatActor_CurvePitchMin_Offset = offsetof(UVehicleSeatActor, CurvePitchMin);
	static_assert(UVehicleSeatActor_CurvePitchMin_Offset == 0x420, "UVehicleSeatActor::CurvePitchMin offset is not 420");
	auto constexpr UVehicleSeatActor_boolField428_Offset = offsetof(UVehicleSeatActor, boolField428);
	static_assert(UVehicleSeatActor_boolField428_Offset == 0x428, "UVehicleSeatActor::boolField428 offset is not 428");
	auto constexpr UVehicleSeatActor_SeatBlendspaceAiming_Offset = offsetof(UVehicleSeatActor, SeatBlendspaceAiming);
	static_assert(UVehicleSeatActor_SeatBlendspaceAiming_Offset == 0x430, "UVehicleSeatActor::SeatBlendspaceAiming offset is not 430");
	auto constexpr UVehicleSeatActor_SeatAnimationIdle_Offset = offsetof(UVehicleSeatActor, SeatAnimationIdle);
	static_assert(UVehicleSeatActor_SeatAnimationIdle_Offset == 0x438, "UVehicleSeatActor::SeatAnimationIdle offset is not 438");
	auto constexpr UVehicleSeatActor_SeatIdleAO_Offset = offsetof(UVehicleSeatActor, SeatIdleAO);
	static_assert(UVehicleSeatActor_SeatIdleAO_Offset == 0x440, "UVehicleSeatActor::SeatIdleAO offset is not 440");
	auto constexpr UVehicleSeatActor_TransitionOutBlendspace_Offset = offsetof(UVehicleSeatActor, TransitionOutBlendspace);
	static_assert(UVehicleSeatActor_TransitionOutBlendspace_Offset == 0x448, "UVehicleSeatActor::TransitionOutBlendspace offset is not 448");
	auto constexpr UVehicleSeatActor_TransitionInBlendspace_Offset = offsetof(UVehicleSeatActor, TransitionInBlendspace);
	static_assert(UVehicleSeatActor_TransitionInBlendspace_Offset == 0x450, "UVehicleSeatActor::TransitionInBlendspace offset is not 450");
	auto constexpr UVehicleSeatActor_boolField458_Offset = offsetof(UVehicleSeatActor, boolField458);
	static_assert(UVehicleSeatActor_boolField458_Offset == 0x458, "UVehicleSeatActor::boolField458 offset is not 458");
	auto constexpr UVehicleSeatActor_AllowedWeaponClasses_Offset = offsetof(UVehicleSeatActor, AllowedWeaponClasses);
	static_assert(UVehicleSeatActor_AllowedWeaponClasses_Offset == 0x460, "UVehicleSeatActor::AllowedWeaponClasses offset is not 460");
	auto constexpr UVehicleSeatActor_boolField470_Offset = offsetof(UVehicleSeatActor, boolField470);
	static_assert(UVehicleSeatActor_boolField470_Offset == 0x470, "UVehicleSeatActor::boolField470 offset is not 470");
	auto constexpr UVehicleSeatActor_MaxVelocityForEntry_Offset = offsetof(UVehicleSeatActor, MaxVelocityForEntry);
	static_assert(UVehicleSeatActor_MaxVelocityForEntry_Offset == 0x474, "UVehicleSeatActor::MaxVelocityForEntry offset is not 474");
	auto constexpr UVehicleSeatActor_Rider_Offset = offsetof(UVehicleSeatActor, Rider);
	static_assert(UVehicleSeatActor_Rider_Offset == 0x478, "UVehicleSeatActor::Rider offset is not 478");
	auto constexpr UVehicleSeatActor_SeatAnimationType_Offset = offsetof(UVehicleSeatActor, SeatAnimationType);
	static_assert(UVehicleSeatActor_SeatAnimationType_Offset == 0x48c, "UVehicleSeatActor::SeatAnimationType offset is not 48c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
