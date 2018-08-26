#pragma once
#include "UDataAsset.hpp"
#include "FVector2D.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVaultingData // Size: 0x140
	: public UDataAsset // Size: 0x38
{
private:
	typedef UVaultingData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1877); // id32("Class TslGame.VaultingData")
		return ptr;
	}
	float LocationStartNormalScale; /* Ofs: 0x38 Size: 0x4 - FloatProperty TslGame.VaultingData.LocationStartNormalScale */
	float LocationStartZOffset; /* Ofs: 0x3C Size: 0x4 - FloatProperty TslGame.VaultingData.LocationStartZOffset */
	float LocationEndNormalScale; /* Ofs: 0x40 Size: 0x4 - FloatProperty TslGame.VaultingData.LocationEndNormalScale */
	float LocationEndZOffset; /* Ofs: 0x44 Size: 0x4 - FloatProperty TslGame.VaultingData.LocationEndZOffset */
	uint8_t boolField48;
	uint8_t boolField49;
	uint8_t UnknownData4A[0x2];
	float VaultInitialTimer; /* Ofs: 0x4C Size: 0x4 - FloatProperty TslGame.VaultingData.VaultInitialTimer */
	float ApexAdditiveStartTime; /* Ofs: 0x50 Size: 0x4 - FloatProperty TslGame.VaultingData.ApexAdditiveStartTime */
	float ApexAdditiveEndTime; /* Ofs: 0x54 Size: 0x4 - FloatProperty TslGame.VaultingData.ApexAdditiveEndTime */
	float PreApexSpeedScale; /* Ofs: 0x58 Size: 0x4 - FloatProperty TslGame.VaultingData.PreApexSpeedScale */
	float PostApexSpeedScale; /* Ofs: 0x5C Size: 0x4 - FloatProperty TslGame.VaultingData.PostApexSpeedScale */
	float VaultEndToFallTimerCutoff; /* Ofs: 0x60 Size: 0x4 - FloatProperty TslGame.VaultingData.VaultEndToFallTimerCutoff */
	FVector2D StartCutoffByDistance_InMap; /* Ofs: 0x64 Size: 0x8 - StructProperty TslGame.VaultingData.StartCutoffByDistance_InMap */
	FVector2D StartCutoffByDistance_OutMap; /* Ofs: 0x6C Size: 0x8 - StructProperty TslGame.VaultingData.StartCutoffByDistance_OutMap */
	FVector2D StartCutoffBySpeed_InMap; /* Ofs: 0x74 Size: 0x8 - StructProperty TslGame.VaultingData.StartCutoffBySpeed_InMap */
	FVector2D StartCutoffBySpeed_OutMap; /* Ofs: 0x7C Size: 0x8 - StructProperty TslGame.VaultingData.StartCutoffBySpeed_OutMap */
	FVector2D PlayrateBySpeed_InMap_PreApex; /* Ofs: 0x84 Size: 0x8 - StructProperty TslGame.VaultingData.PlayrateBySpeed_InMap_PreApex */
	FVector2D PlayrateBySpeed_OutMap_PreApex; /* Ofs: 0x8C Size: 0x8 - StructProperty TslGame.VaultingData.PlayrateBySpeed_OutMap_PreApex */
	FVector2D PlayrateBySpeed_InMap_PostApex; /* Ofs: 0x94 Size: 0x8 - StructProperty TslGame.VaultingData.PlayrateBySpeed_InMap_PostApex */
	FVector2D PlayrateBySpeed_OutMap_PostApex; /* Ofs: 0x9C Size: 0x8 - StructProperty TslGame.VaultingData.PlayrateBySpeed_OutMap_PostApex */
	uint8_t UnknownDataA4[0x4];
	ExternalPtr<struct UAnimSequenceBase> AnimationSequence; /* Ofs: 0xA8 Size: 0x8 - ObjectProperty TslGame.VaultingData.AnimationSequence */
	ExternalPtr<struct UAnimSequenceBase> AnimationSequence_Rifle; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty TslGame.VaultingData.AnimationSequence_Rifle */
	ExternalPtr<struct UCurveFloat> AnimationCurve; /* Ofs: 0xB8 Size: 0x8 - ObjectProperty TslGame.VaultingData.AnimationCurve */
	FVector2D CharLocationInterpSpeedInMap; /* Ofs: 0xC0 Size: 0x8 - StructProperty TslGame.VaultingData.CharLocationInterpSpeedInMap */
	FVector2D CharLocationInterpSpeedOutMap; /* Ofs: 0xC8 Size: 0x8 - StructProperty TslGame.VaultingData.CharLocationInterpSpeedOutMap */
	FVector2D TimerProgressionByDistanceInMap; /* Ofs: 0xD0 Size: 0x8 - StructProperty TslGame.VaultingData.TimerProgressionByDistanceInMap */
	FVector2D TimerProgressionByDistanceOutMap; /* Ofs: 0xD8 Size: 0x8 - StructProperty TslGame.VaultingData.TimerProgressionByDistanceOutMap */
	float TimerProgressionVTimerMax; /* Ofs: 0xE0 Size: 0x4 - FloatProperty TslGame.VaultingData.TimerProgressionVTimerMax */
	float VaultEndTimerNormal; /* Ofs: 0xE4 Size: 0x4 - FloatProperty TslGame.VaultingData.VaultEndTimerNormal */
	float VaultEndTimerFall; /* Ofs: 0xE8 Size: 0x4 - FloatProperty TslGame.VaultingData.VaultEndTimerFall */
	float CharacterPostVaultVelocityScalar; /* Ofs: 0xEC Size: 0x4 - FloatProperty TslGame.VaultingData.CharacterPostVaultVelocityScalar */
	FVector CharacterPostVaultVelocityScalarVector; /* Ofs: 0xF0 Size: 0xC - StructProperty TslGame.VaultingData.CharacterPostVaultVelocityScalarVector */
	FVector CharacterPostVaultVelocityScalarVector_ToFall; /* Ofs: 0xFC Size: 0xC - StructProperty TslGame.VaultingData.CharacterPostVaultVelocityScalarVector_ToFall */
	float AnimBlendInTime; /* Ofs: 0x108 Size: 0x4 - FloatProperty TslGame.VaultingData.AnimBlendInTime */
	float AnimBlendOutTime; /* Ofs: 0x10C Size: 0x4 - FloatProperty TslGame.VaultingData.AnimBlendOutTime */
	uint8_t boolField110;
	uint8_t boolField111;
	uint8_t UnknownData112[0x2];
	float MinCancelVTimer; /* Ofs: 0x114 Size: 0x4 - FloatProperty TslGame.VaultingData.MinCancelVTimer */
	float MaxCancelVTimer; /* Ofs: 0x118 Size: 0x4 - FloatProperty TslGame.VaultingData.MaxCancelVTimer */
	float TaskEndVTimer; /* Ofs: 0x11C Size: 0x4 - FloatProperty TslGame.VaultingData.TaskEndVTimer */
	float PostVaultTimerProgressionScale; /* Ofs: 0x120 Size: 0x4 - FloatProperty TslGame.VaultingData.PostVaultTimerProgressionScale */
	uint8_t boolField124;
	uint8_t boolField125;
	uint8_t UnknownData126[0x2];
	float StaticDampeningScalar; /* Ofs: 0x128 Size: 0x4 - FloatProperty TslGame.VaultingData.StaticDampeningScalar */
	float StaticDampeningVTimerMax; /* Ofs: 0x12C Size: 0x4 - FloatProperty TslGame.VaultingData.StaticDampeningVTimerMax */
	float MappedDampeningScalar; /* Ofs: 0x130 Size: 0x4 - FloatProperty TslGame.VaultingData.MappedDampeningScalar */
	float MappedDampeningVTimerMax; /* Ofs: 0x134 Size: 0x4 - FloatProperty TslGame.VaultingData.MappedDampeningVTimerMax */
	uint8_t boolField138;
	uint8_t UnknownData139[0x3];
	float CustomApex; /* Ofs: 0x13C Size: 0x4 - FloatProperty TslGame.VaultingData.CustomApex */


	inline bool SetLocationStartNormalScale(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetLocationStartZOffset(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetLocationEndNormalScale(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetLocationEndZOffset(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool bIsClimb()
	{
		return boolField48& 0x1;
	}
	inline bool SetbIsClimb(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsSlide()
	{
		return boolField49& 0x1;
	}
	inline bool SetbIsSlide(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x49, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVaultInitialTimer(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetApexAdditiveStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetApexAdditiveEndTime(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetPreApexSpeedScale(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetPostApexSpeedScale(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetVaultEndToFallTimerCutoff(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetStartCutoffByDistance_InMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x64, value); }
	inline bool SetStartCutoffByDistance_OutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x6C, value); }
	inline bool SetStartCutoffBySpeed_InMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x74, value); }
	inline bool SetStartCutoffBySpeed_OutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x7C, value); }
	inline bool SetPlayrateBySpeed_InMap_PreApex(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x84, value); }
	inline bool SetPlayrateBySpeed_OutMap_PreApex(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8C, value); }
	inline bool SetPlayrateBySpeed_InMap_PostApex(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x94, value); }
	inline bool SetPlayrateBySpeed_OutMap_PostApex(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9C, value); }
	inline bool SetAnimationSequence(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetAnimationSequence_Rifle(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetAnimationCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetCharLocationInterpSpeedInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0xC0, value); }
	inline bool SetCharLocationInterpSpeedOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0xC8, value); }
	inline bool SetTimerProgressionByDistanceInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0xD0, value); }
	inline bool SetTimerProgressionByDistanceOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0xD8, value); }
	inline bool SetTimerProgressionVTimerMax(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetVaultEndTimerNormal(t_structHelper inst, float value) { inst.WriteOffset(0xE4, value); }
	inline bool SetVaultEndTimerFall(t_structHelper inst, float value) { inst.WriteOffset(0xE8, value); }
	inline bool SetCharacterPostVaultVelocityScalar(t_structHelper inst, float value) { inst.WriteOffset(0xEC, value); }
	inline bool SetCharacterPostVaultVelocityScalarVector(t_structHelper inst, FVector value) { inst.WriteOffset(0xF0, value); }
	inline bool SetCharacterPostVaultVelocityScalarVector_ToFall(t_structHelper inst, FVector value) { inst.WriteOffset(0xFC, value); }
	inline bool SetAnimBlendInTime(t_structHelper inst, float value) { inst.WriteOffset(0x108, value); }
	inline bool SetAnimBlendOutTime(t_structHelper inst, float value) { inst.WriteOffset(0x10C, value); }
	inline bool bCanVaultWithWeapon()
	{
		return boolField110& 0x1;
	}
	inline bool SetbCanVaultWithWeapon(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x110, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsCancellable()
	{
		return boolField111& 0x1;
	}
	inline bool SetbIsCancellable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x111, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinCancelVTimer(t_structHelper inst, float value) { inst.WriteOffset(0x114, value); }
	inline bool SetMaxCancelVTimer(t_structHelper inst, float value) { inst.WriteOffset(0x118, value); }
	inline bool SetTaskEndVTimer(t_structHelper inst, float value) { inst.WriteOffset(0x11C, value); }
	inline bool SetPostVaultTimerProgressionScale(t_structHelper inst, float value) { inst.WriteOffset(0x120, value); }
	inline bool bUseStaticVTimerDampening()
	{
		return boolField124& 0x1;
	}
	inline bool SetbUseStaticVTimerDampening(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x124, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseMappedVTimerDampening()
	{
		return boolField125& 0x1;
	}
	inline bool SetbUseMappedVTimerDampening(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x125, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStaticDampeningScalar(t_structHelper inst, float value) { inst.WriteOffset(0x128, value); }
	inline bool SetStaticDampeningVTimerMax(t_structHelper inst, float value) { inst.WriteOffset(0x12C, value); }
	inline bool SetMappedDampeningScalar(t_structHelper inst, float value) { inst.WriteOffset(0x130, value); }
	inline bool SetMappedDampeningVTimerMax(t_structHelper inst, float value) { inst.WriteOffset(0x134, value); }
	inline bool bUseCustomApexForTimer()
	{
		return boolField138& 0x1;
	}
	inline bool SetbUseCustomApexForTimer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x138, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCustomApex(t_structHelper inst, float value) { inst.WriteOffset(0x13C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVaultingData = sizeof(UVaultingData); // 320
    static_assert(sizeof(UVaultingData) == 0x140, "Size of UVaultingData is not correct.");
	auto constexpr UVaultingData_LocationStartNormalScale_Offset = offsetof(UVaultingData, LocationStartNormalScale);
	static_assert(UVaultingData_LocationStartNormalScale_Offset == 0x38, "UVaultingData::LocationStartNormalScale offset is not 38");
	auto constexpr UVaultingData_LocationStartZOffset_Offset = offsetof(UVaultingData, LocationStartZOffset);
	static_assert(UVaultingData_LocationStartZOffset_Offset == 0x3c, "UVaultingData::LocationStartZOffset offset is not 3c");
	auto constexpr UVaultingData_LocationEndNormalScale_Offset = offsetof(UVaultingData, LocationEndNormalScale);
	static_assert(UVaultingData_LocationEndNormalScale_Offset == 0x40, "UVaultingData::LocationEndNormalScale offset is not 40");
	auto constexpr UVaultingData_LocationEndZOffset_Offset = offsetof(UVaultingData, LocationEndZOffset);
	static_assert(UVaultingData_LocationEndZOffset_Offset == 0x44, "UVaultingData::LocationEndZOffset offset is not 44");
	auto constexpr UVaultingData_boolField48_Offset = offsetof(UVaultingData, boolField48);
	static_assert(UVaultingData_boolField48_Offset == 0x48, "UVaultingData::boolField48 offset is not 48");
	auto constexpr UVaultingData_boolField49_Offset = offsetof(UVaultingData, boolField49);
	static_assert(UVaultingData_boolField49_Offset == 0x49, "UVaultingData::boolField49 offset is not 49");
	auto constexpr UVaultingData_VaultInitialTimer_Offset = offsetof(UVaultingData, VaultInitialTimer);
	static_assert(UVaultingData_VaultInitialTimer_Offset == 0x4c, "UVaultingData::VaultInitialTimer offset is not 4c");
	auto constexpr UVaultingData_ApexAdditiveStartTime_Offset = offsetof(UVaultingData, ApexAdditiveStartTime);
	static_assert(UVaultingData_ApexAdditiveStartTime_Offset == 0x50, "UVaultingData::ApexAdditiveStartTime offset is not 50");
	auto constexpr UVaultingData_ApexAdditiveEndTime_Offset = offsetof(UVaultingData, ApexAdditiveEndTime);
	static_assert(UVaultingData_ApexAdditiveEndTime_Offset == 0x54, "UVaultingData::ApexAdditiveEndTime offset is not 54");
	auto constexpr UVaultingData_PreApexSpeedScale_Offset = offsetof(UVaultingData, PreApexSpeedScale);
	static_assert(UVaultingData_PreApexSpeedScale_Offset == 0x58, "UVaultingData::PreApexSpeedScale offset is not 58");
	auto constexpr UVaultingData_PostApexSpeedScale_Offset = offsetof(UVaultingData, PostApexSpeedScale);
	static_assert(UVaultingData_PostApexSpeedScale_Offset == 0x5c, "UVaultingData::PostApexSpeedScale offset is not 5c");
	auto constexpr UVaultingData_VaultEndToFallTimerCutoff_Offset = offsetof(UVaultingData, VaultEndToFallTimerCutoff);
	static_assert(UVaultingData_VaultEndToFallTimerCutoff_Offset == 0x60, "UVaultingData::VaultEndToFallTimerCutoff offset is not 60");
	auto constexpr UVaultingData_StartCutoffByDistance_InMap_Offset = offsetof(UVaultingData, StartCutoffByDistance_InMap);
	static_assert(UVaultingData_StartCutoffByDistance_InMap_Offset == 0x64, "UVaultingData::StartCutoffByDistance_InMap offset is not 64");
	auto constexpr UVaultingData_StartCutoffByDistance_OutMap_Offset = offsetof(UVaultingData, StartCutoffByDistance_OutMap);
	static_assert(UVaultingData_StartCutoffByDistance_OutMap_Offset == 0x6c, "UVaultingData::StartCutoffByDistance_OutMap offset is not 6c");
	auto constexpr UVaultingData_StartCutoffBySpeed_InMap_Offset = offsetof(UVaultingData, StartCutoffBySpeed_InMap);
	static_assert(UVaultingData_StartCutoffBySpeed_InMap_Offset == 0x74, "UVaultingData::StartCutoffBySpeed_InMap offset is not 74");
	auto constexpr UVaultingData_StartCutoffBySpeed_OutMap_Offset = offsetof(UVaultingData, StartCutoffBySpeed_OutMap);
	static_assert(UVaultingData_StartCutoffBySpeed_OutMap_Offset == 0x7c, "UVaultingData::StartCutoffBySpeed_OutMap offset is not 7c");
	auto constexpr UVaultingData_PlayrateBySpeed_InMap_PreApex_Offset = offsetof(UVaultingData, PlayrateBySpeed_InMap_PreApex);
	static_assert(UVaultingData_PlayrateBySpeed_InMap_PreApex_Offset == 0x84, "UVaultingData::PlayrateBySpeed_InMap_PreApex offset is not 84");
	auto constexpr UVaultingData_PlayrateBySpeed_OutMap_PreApex_Offset = offsetof(UVaultingData, PlayrateBySpeed_OutMap_PreApex);
	static_assert(UVaultingData_PlayrateBySpeed_OutMap_PreApex_Offset == 0x8c, "UVaultingData::PlayrateBySpeed_OutMap_PreApex offset is not 8c");
	auto constexpr UVaultingData_PlayrateBySpeed_InMap_PostApex_Offset = offsetof(UVaultingData, PlayrateBySpeed_InMap_PostApex);
	static_assert(UVaultingData_PlayrateBySpeed_InMap_PostApex_Offset == 0x94, "UVaultingData::PlayrateBySpeed_InMap_PostApex offset is not 94");
	auto constexpr UVaultingData_PlayrateBySpeed_OutMap_PostApex_Offset = offsetof(UVaultingData, PlayrateBySpeed_OutMap_PostApex);
	static_assert(UVaultingData_PlayrateBySpeed_OutMap_PostApex_Offset == 0x9c, "UVaultingData::PlayrateBySpeed_OutMap_PostApex offset is not 9c");
	auto constexpr UVaultingData_AnimationSequence_Offset = offsetof(UVaultingData, AnimationSequence);
	static_assert(UVaultingData_AnimationSequence_Offset == 0xa8, "UVaultingData::AnimationSequence offset is not a8");
	auto constexpr UVaultingData_AnimationSequence_Rifle_Offset = offsetof(UVaultingData, AnimationSequence_Rifle);
	static_assert(UVaultingData_AnimationSequence_Rifle_Offset == 0xb0, "UVaultingData::AnimationSequence_Rifle offset is not b0");
	auto constexpr UVaultingData_AnimationCurve_Offset = offsetof(UVaultingData, AnimationCurve);
	static_assert(UVaultingData_AnimationCurve_Offset == 0xb8, "UVaultingData::AnimationCurve offset is not b8");
	auto constexpr UVaultingData_CharLocationInterpSpeedInMap_Offset = offsetof(UVaultingData, CharLocationInterpSpeedInMap);
	static_assert(UVaultingData_CharLocationInterpSpeedInMap_Offset == 0xc0, "UVaultingData::CharLocationInterpSpeedInMap offset is not c0");
	auto constexpr UVaultingData_CharLocationInterpSpeedOutMap_Offset = offsetof(UVaultingData, CharLocationInterpSpeedOutMap);
	static_assert(UVaultingData_CharLocationInterpSpeedOutMap_Offset == 0xc8, "UVaultingData::CharLocationInterpSpeedOutMap offset is not c8");
	auto constexpr UVaultingData_TimerProgressionByDistanceInMap_Offset = offsetof(UVaultingData, TimerProgressionByDistanceInMap);
	static_assert(UVaultingData_TimerProgressionByDistanceInMap_Offset == 0xd0, "UVaultingData::TimerProgressionByDistanceInMap offset is not d0");
	auto constexpr UVaultingData_TimerProgressionByDistanceOutMap_Offset = offsetof(UVaultingData, TimerProgressionByDistanceOutMap);
	static_assert(UVaultingData_TimerProgressionByDistanceOutMap_Offset == 0xd8, "UVaultingData::TimerProgressionByDistanceOutMap offset is not d8");
	auto constexpr UVaultingData_TimerProgressionVTimerMax_Offset = offsetof(UVaultingData, TimerProgressionVTimerMax);
	static_assert(UVaultingData_TimerProgressionVTimerMax_Offset == 0xe0, "UVaultingData::TimerProgressionVTimerMax offset is not e0");
	auto constexpr UVaultingData_VaultEndTimerNormal_Offset = offsetof(UVaultingData, VaultEndTimerNormal);
	static_assert(UVaultingData_VaultEndTimerNormal_Offset == 0xe4, "UVaultingData::VaultEndTimerNormal offset is not e4");
	auto constexpr UVaultingData_VaultEndTimerFall_Offset = offsetof(UVaultingData, VaultEndTimerFall);
	static_assert(UVaultingData_VaultEndTimerFall_Offset == 0xe8, "UVaultingData::VaultEndTimerFall offset is not e8");
	auto constexpr UVaultingData_CharacterPostVaultVelocityScalar_Offset = offsetof(UVaultingData, CharacterPostVaultVelocityScalar);
	static_assert(UVaultingData_CharacterPostVaultVelocityScalar_Offset == 0xec, "UVaultingData::CharacterPostVaultVelocityScalar offset is not ec");
	auto constexpr UVaultingData_CharacterPostVaultVelocityScalarVector_Offset = offsetof(UVaultingData, CharacterPostVaultVelocityScalarVector);
	static_assert(UVaultingData_CharacterPostVaultVelocityScalarVector_Offset == 0xf0, "UVaultingData::CharacterPostVaultVelocityScalarVector offset is not f0");
	auto constexpr UVaultingData_CharacterPostVaultVelocityScalarVector_ToFall_Offset = offsetof(UVaultingData, CharacterPostVaultVelocityScalarVector_ToFall);
	static_assert(UVaultingData_CharacterPostVaultVelocityScalarVector_ToFall_Offset == 0xfc, "UVaultingData::CharacterPostVaultVelocityScalarVector_ToFall offset is not fc");
	auto constexpr UVaultingData_AnimBlendInTime_Offset = offsetof(UVaultingData, AnimBlendInTime);
	static_assert(UVaultingData_AnimBlendInTime_Offset == 0x108, "UVaultingData::AnimBlendInTime offset is not 108");
	auto constexpr UVaultingData_AnimBlendOutTime_Offset = offsetof(UVaultingData, AnimBlendOutTime);
	static_assert(UVaultingData_AnimBlendOutTime_Offset == 0x10c, "UVaultingData::AnimBlendOutTime offset is not 10c");
	auto constexpr UVaultingData_boolField110_Offset = offsetof(UVaultingData, boolField110);
	static_assert(UVaultingData_boolField110_Offset == 0x110, "UVaultingData::boolField110 offset is not 110");
	auto constexpr UVaultingData_boolField111_Offset = offsetof(UVaultingData, boolField111);
	static_assert(UVaultingData_boolField111_Offset == 0x111, "UVaultingData::boolField111 offset is not 111");
	auto constexpr UVaultingData_MinCancelVTimer_Offset = offsetof(UVaultingData, MinCancelVTimer);
	static_assert(UVaultingData_MinCancelVTimer_Offset == 0x114, "UVaultingData::MinCancelVTimer offset is not 114");
	auto constexpr UVaultingData_MaxCancelVTimer_Offset = offsetof(UVaultingData, MaxCancelVTimer);
	static_assert(UVaultingData_MaxCancelVTimer_Offset == 0x118, "UVaultingData::MaxCancelVTimer offset is not 118");
	auto constexpr UVaultingData_TaskEndVTimer_Offset = offsetof(UVaultingData, TaskEndVTimer);
	static_assert(UVaultingData_TaskEndVTimer_Offset == 0x11c, "UVaultingData::TaskEndVTimer offset is not 11c");
	auto constexpr UVaultingData_PostVaultTimerProgressionScale_Offset = offsetof(UVaultingData, PostVaultTimerProgressionScale);
	static_assert(UVaultingData_PostVaultTimerProgressionScale_Offset == 0x120, "UVaultingData::PostVaultTimerProgressionScale offset is not 120");
	auto constexpr UVaultingData_boolField124_Offset = offsetof(UVaultingData, boolField124);
	static_assert(UVaultingData_boolField124_Offset == 0x124, "UVaultingData::boolField124 offset is not 124");
	auto constexpr UVaultingData_boolField125_Offset = offsetof(UVaultingData, boolField125);
	static_assert(UVaultingData_boolField125_Offset == 0x125, "UVaultingData::boolField125 offset is not 125");
	auto constexpr UVaultingData_StaticDampeningScalar_Offset = offsetof(UVaultingData, StaticDampeningScalar);
	static_assert(UVaultingData_StaticDampeningScalar_Offset == 0x128, "UVaultingData::StaticDampeningScalar offset is not 128");
	auto constexpr UVaultingData_StaticDampeningVTimerMax_Offset = offsetof(UVaultingData, StaticDampeningVTimerMax);
	static_assert(UVaultingData_StaticDampeningVTimerMax_Offset == 0x12c, "UVaultingData::StaticDampeningVTimerMax offset is not 12c");
	auto constexpr UVaultingData_MappedDampeningScalar_Offset = offsetof(UVaultingData, MappedDampeningScalar);
	static_assert(UVaultingData_MappedDampeningScalar_Offset == 0x130, "UVaultingData::MappedDampeningScalar offset is not 130");
	auto constexpr UVaultingData_MappedDampeningVTimerMax_Offset = offsetof(UVaultingData, MappedDampeningVTimerMax);
	static_assert(UVaultingData_MappedDampeningVTimerMax_Offset == 0x134, "UVaultingData::MappedDampeningVTimerMax offset is not 134");
	auto constexpr UVaultingData_boolField138_Offset = offsetof(UVaultingData, boolField138);
	static_assert(UVaultingData_boolField138_Offset == 0x138, "UVaultingData::boolField138 offset is not 138");
	auto constexpr UVaultingData_CustomApex_Offset = offsetof(UVaultingData, CustomApex);
	static_assert(UVaultingData_CustomApex_Offset == 0x13c, "UVaultingData::CustomApex offset is not 13c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
