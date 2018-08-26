#pragma once
#include "USpectatorPawn.hpp"
#include "FDateTime.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSpectatorPawn // Size: 0x760
	: public USpectatorPawn // Size: 0x4A0
{
private:
	typedef UTslSpectatorPawn t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1501); // id32("Class TslGame.TslSpectatorPawn")
		return ptr;
	}
//	ExternalPtr<struct UClass> ReplayHUD; /* Ofs: 0x498 Size: 0x8 - ClassProperty TslGame.TslSpectatorPawn.ReplayHUD */
	ExternalPtr<struct UClass> LevelAttribute_BattleRoyalRule; /* Ofs: 0x4A0 Size: 0x8 - ClassProperty TslGame.TslSpectatorPawn.LevelAttribute_BattleRoyalRule */
	ExternalPtr<struct UClass> LevelAttribute_Erangel; /* Ofs: 0x4A8 Size: 0x8 - ClassProperty TslGame.TslSpectatorPawn.LevelAttribute_Erangel */
	ExternalPtr<struct UClass> LevelAttribute_Desert; /* Ofs: 0x4B0 Size: 0x8 - ClassProperty TslGame.TslSpectatorPawn.LevelAttribute_Desert */
	ExternalPtr<struct UClass> LevelAttribute_Savage; /* Ofs: 0x4B8 Size: 0x8 - ClassProperty TslGame.TslSpectatorPawn.LevelAttribute_Savage */
	float PlayerInfoMinDistance; /* Ofs: 0x4C0 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.PlayerInfoMinDistance */
	float PlayerInfoMaxDistance; /* Ofs: 0x4C4 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.PlayerInfoMaxDistance */
	uint8_t boolField4C8;
	uint8_t UnknownData4C9[0x7];
	ExternalPtr<struct USpringArmComponent> FreeCameraSpringArmComponent; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.FreeCameraSpringArmComponent */
	ExternalPtr<struct UCameraComponent> FreeCameraComponent; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.FreeCameraComponent */
	ExternalPtr<struct UTslFollowCameraSpringArmComponent> FollowCameraSpringArmComponent; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.FollowCameraSpringArmComponent */
	ExternalPtr<struct UCameraComponent> FollowCameraComponent; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.FollowCameraComponent */
	ExternalPtr<struct UArrowComponent> AudioListener; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.AudioListener */
	uint8_t UnknownData4F8[0x8];
	ExternalPtr<struct UTslDeathCameraComponent> DeathCameraComponent; /* Ofs: 0x500 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.DeathCameraComponent */
	float LocationUpdateIntervalSeconds; /* Ofs: 0x508 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.LocationUpdateIntervalSeconds */
	uint8_t UnknownData50C[0x4];
	float LimitMinFreeCamFov; /* Ofs: 0x510 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.LimitMinFreeCamFov */
	float LimitMaxFreeCamFov; /* Ofs: 0x514 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.LimitMaxFreeCamFov */
	uint8_t UnknownData518[0x8];
	float SlowInterpSpeed; /* Ofs: 0x520 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.SlowInterpSpeed */
	float NormalInterpSpeed; /* Ofs: 0x524 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.NormalInterpSpeed */
	float QuickInterpSpeed; /* Ofs: 0x528 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.QuickInterpSpeed */
	float CurrentInterpSpeed; /* Ofs: 0x52C Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.CurrentInterpSpeed */
	uint8_t UnknownData530[0x8];
	float LimitTargetArmLength; /* Ofs: 0x538 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.LimitTargetArmLength */
	float SpectatableCheckLength; /* Ofs: 0x53C Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.SpectatableCheckLength */
	float SpectatableCheckScreenRatio; /* Ofs: 0x540 Size: 0x4 - FloatProperty TslGame.TslSpectatorPawn.SpectatableCheckScreenRatio */
	uint8_t UnknownData544[0x1C];
	TArray<struct FSavedObPos> ArrObPos_Erangel; /* Ofs: 0x560 Size: 0x10 - ArrayProperty TslGame.TslSpectatorPawn.ArrObPos_Erangel */
	TArray<struct FSavedObPos> ArrObPos_Desert; /* Ofs: 0x570 Size: 0x10 - ArrayProperty TslGame.TslSpectatorPawn.ArrObPos_Desert */
	uint8_t UnknownData580[0x20];
	uint8_t boolField5A0;
	uint8_t boolField5A1;
	uint8_t UnknownData5A2[0xFE];
	uint8_t boolField6A0;
	uint8_t UnknownData6A1[0x3];
	int32_t ReplayClipStartTime; /* Ofs: 0x6A4 Size: 0x4 - IntProperty TslGame.TslSpectatorPawn.ReplayClipStartTime */
	int32_t ReplayClipEndTime; /* Ofs: 0x6A8 Size: 0x4 - IntProperty TslGame.TslSpectatorPawn.ReplayClipEndTime */
	uint8_t UnknownData6AC[0x4];
	FDateTime ReplayRecordedTime; /* Ofs: 0x6B0 Size: 0x8 - StructProperty TslGame.TslSpectatorPawn.ReplayRecordedTime */
	ExternalPtr<struct UClass> ReplayZoneEffectClass; /* Ofs: 0x6B8 Size: 0x8 - ClassProperty TslGame.TslSpectatorPawn.ReplayZoneEffectClass */
	ExternalPtr<struct UClass> ReplayZoneAreaClass; /* Ofs: 0x6C0 Size: 0x8 - ClassProperty TslGame.TslSpectatorPawn.ReplayZoneAreaClass */
	ExternalPtr<struct UTslPostProcessEffect> ReplayZoneEffect; /* Ofs: 0x6C8 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.ReplayZoneEffect */
	ExternalPtr<struct UActor> ReplayZoneArea; /* Ofs: 0x6D0 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.ReplayZoneArea */
	FScriptMulticastDelegate OnPlayerInfoDistanceDelegate; /* Ofs: 0x6D8 Size: 0x10 - MulticastDelegateProperty TslGame.TslSpectatorPawn.OnPlayerInfoDistanceDelegate */
	FScriptMulticastDelegate OnReplayClipInfoDelegate; /* Ofs: 0x6E8 Size: 0x10 - MulticastDelegateProperty TslGame.TslSpectatorPawn.OnReplayClipInfoDelegate */
	FScriptMulticastDelegate OnReplayInfoDelegate; /* Ofs: 0x6F8 Size: 0x10 - MulticastDelegateProperty TslGame.TslSpectatorPawn.OnReplayInfoDelegate */
	uint8_t UnknownData708[0x50];
	ExternalPtr<struct UTslGamepadPawnInputComponent> TslGamepadInputComponent; /* Ofs: 0x758 Size: 0x8 - ObjectProperty TslGame.TslSpectatorPawn.TslGamepadInputComponent */


//	inline bool SetReplayHUD(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x498, value); }
	inline bool SetLevelAttribute_BattleRoyalRule(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetLevelAttribute_Erangel(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetLevelAttribute_Desert(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetLevelAttribute_Savage(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetPlayerInfoMinDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetPlayerInfoMaxDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4C4, value); }
	inline bool IsShowHeaderGun()
	{
		return boolField4C8& 0x1;
	}
	inline bool SetIsShowHeaderGun(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFreeCameraSpringArmComponent(t_structHelper inst, ExternalPtr<struct USpringArmComponent> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetFreeCameraComponent(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetFollowCameraSpringArmComponent(t_structHelper inst, ExternalPtr<struct UTslFollowCameraSpringArmComponent> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetFollowCameraComponent(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetAudioListener(t_structHelper inst, ExternalPtr<struct UArrowComponent> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetDeathCameraComponent(t_structHelper inst, ExternalPtr<struct UTslDeathCameraComponent> value) { inst.WriteOffset(0x500, value); }
	inline bool SetLocationUpdateIntervalSeconds(t_structHelper inst, float value) { inst.WriteOffset(0x508, value); }
	inline bool SetLimitMinFreeCamFov(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool SetLimitMaxFreeCamFov(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetSlowInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetNormalInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x524, value); }
	inline bool SetQuickInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x528, value); }
	inline bool SetCurrentInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x52C, value); }
	inline bool SetLimitTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool SetSpectatableCheckLength(t_structHelper inst, float value) { inst.WriteOffset(0x53C, value); }
	inline bool SetSpectatableCheckScreenRatio(t_structHelper inst, float value) { inst.WriteOffset(0x540, value); }
	inline bool SetArrObPos_Erangel(t_structHelper inst, TArray<struct FSavedObPos> value) { inst.WriteOffset(0x560, value); }
	inline bool SetArrObPos_Desert(t_structHelper inst, TArray<struct FSavedObPos> value) { inst.WriteOffset(0x570, value); }
	inline bool bQuckZoomMode()
	{
		return boolField5A0& 0x1;
	}
	inline bool SetbQuckZoomMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSlowZoomMode()
	{
		return boolField5A1& 0x1;
	}
	inline bool SetbSlowZoomMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5A1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsReplayClip()
	{
		return boolField6A0& 0x1;
	}
	inline bool SetIsReplayClip(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReplayClipStartTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6A4, value); }
	inline bool SetReplayClipEndTime(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6A8, value); }
	inline bool SetReplayRecordedTime(t_structHelper inst, FDateTime value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetReplayZoneEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetReplayZoneAreaClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x6C0, value); }
	inline bool SetReplayZoneEffect(t_structHelper inst, ExternalPtr<struct UTslPostProcessEffect> value) { inst.WriteOffset(0x6C8, value); }
	inline bool SetReplayZoneArea(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x6D0, value); }
	inline bool SetOnPlayerInfoDistanceDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6D8, value); }
	inline bool SetOnReplayClipInfoDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6E8, value); }
	inline bool SetOnReplayInfoDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6F8, value); }
	inline bool SetTslGamepadInputComponent(t_structHelper inst, ExternalPtr<struct UTslGamepadPawnInputComponent> value) { inst.WriteOffset(0x758, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSpectatorPawn = sizeof(UTslSpectatorPawn); // 1888
    static_assert(sizeof(UTslSpectatorPawn) == 0x760, "Size of UTslSpectatorPawn is not correct.");
//	auto constexpr UTslSpectatorPawn_ReplayHUD_Offset = offsetof(UTslSpectatorPawn, ReplayHUD);
//	static_assert(UTslSpectatorPawn_ReplayHUD_Offset == 0x498, "UTslSpectatorPawn::ReplayHUD offset is not 498");
	auto constexpr UTslSpectatorPawn_LevelAttribute_BattleRoyalRule_Offset = offsetof(UTslSpectatorPawn, LevelAttribute_BattleRoyalRule);
	static_assert(UTslSpectatorPawn_LevelAttribute_BattleRoyalRule_Offset == 0x4a0, "UTslSpectatorPawn::LevelAttribute_BattleRoyalRule offset is not 4a0");
	auto constexpr UTslSpectatorPawn_LevelAttribute_Erangel_Offset = offsetof(UTslSpectatorPawn, LevelAttribute_Erangel);
	static_assert(UTslSpectatorPawn_LevelAttribute_Erangel_Offset == 0x4a8, "UTslSpectatorPawn::LevelAttribute_Erangel offset is not 4a8");
	auto constexpr UTslSpectatorPawn_LevelAttribute_Desert_Offset = offsetof(UTslSpectatorPawn, LevelAttribute_Desert);
	static_assert(UTslSpectatorPawn_LevelAttribute_Desert_Offset == 0x4b0, "UTslSpectatorPawn::LevelAttribute_Desert offset is not 4b0");
	auto constexpr UTslSpectatorPawn_LevelAttribute_Savage_Offset = offsetof(UTslSpectatorPawn, LevelAttribute_Savage);
	static_assert(UTslSpectatorPawn_LevelAttribute_Savage_Offset == 0x4b8, "UTslSpectatorPawn::LevelAttribute_Savage offset is not 4b8");
	auto constexpr UTslSpectatorPawn_PlayerInfoMinDistance_Offset = offsetof(UTslSpectatorPawn, PlayerInfoMinDistance);
	static_assert(UTslSpectatorPawn_PlayerInfoMinDistance_Offset == 0x4c0, "UTslSpectatorPawn::PlayerInfoMinDistance offset is not 4c0");
	auto constexpr UTslSpectatorPawn_PlayerInfoMaxDistance_Offset = offsetof(UTslSpectatorPawn, PlayerInfoMaxDistance);
	static_assert(UTslSpectatorPawn_PlayerInfoMaxDistance_Offset == 0x4c4, "UTslSpectatorPawn::PlayerInfoMaxDistance offset is not 4c4");
	auto constexpr UTslSpectatorPawn_boolField4C8_Offset = offsetof(UTslSpectatorPawn, boolField4C8);
	static_assert(UTslSpectatorPawn_boolField4C8_Offset == 0x4c8, "UTslSpectatorPawn::boolField4C8 offset is not 4c8");
	auto constexpr UTslSpectatorPawn_FreeCameraSpringArmComponent_Offset = offsetof(UTslSpectatorPawn, FreeCameraSpringArmComponent);
	static_assert(UTslSpectatorPawn_FreeCameraSpringArmComponent_Offset == 0x4d0, "UTslSpectatorPawn::FreeCameraSpringArmComponent offset is not 4d0");
	auto constexpr UTslSpectatorPawn_FreeCameraComponent_Offset = offsetof(UTslSpectatorPawn, FreeCameraComponent);
	static_assert(UTslSpectatorPawn_FreeCameraComponent_Offset == 0x4d8, "UTslSpectatorPawn::FreeCameraComponent offset is not 4d8");
	auto constexpr UTslSpectatorPawn_FollowCameraSpringArmComponent_Offset = offsetof(UTslSpectatorPawn, FollowCameraSpringArmComponent);
	static_assert(UTslSpectatorPawn_FollowCameraSpringArmComponent_Offset == 0x4e0, "UTslSpectatorPawn::FollowCameraSpringArmComponent offset is not 4e0");
	auto constexpr UTslSpectatorPawn_FollowCameraComponent_Offset = offsetof(UTslSpectatorPawn, FollowCameraComponent);
	static_assert(UTslSpectatorPawn_FollowCameraComponent_Offset == 0x4e8, "UTslSpectatorPawn::FollowCameraComponent offset is not 4e8");
	auto constexpr UTslSpectatorPawn_AudioListener_Offset = offsetof(UTslSpectatorPawn, AudioListener);
	static_assert(UTslSpectatorPawn_AudioListener_Offset == 0x4f0, "UTslSpectatorPawn::AudioListener offset is not 4f0");
	auto constexpr UTslSpectatorPawn_DeathCameraComponent_Offset = offsetof(UTslSpectatorPawn, DeathCameraComponent);
	static_assert(UTslSpectatorPawn_DeathCameraComponent_Offset == 0x500, "UTslSpectatorPawn::DeathCameraComponent offset is not 500");
	auto constexpr UTslSpectatorPawn_LocationUpdateIntervalSeconds_Offset = offsetof(UTslSpectatorPawn, LocationUpdateIntervalSeconds);
	static_assert(UTslSpectatorPawn_LocationUpdateIntervalSeconds_Offset == 0x508, "UTslSpectatorPawn::LocationUpdateIntervalSeconds offset is not 508");
	auto constexpr UTslSpectatorPawn_LimitMinFreeCamFov_Offset = offsetof(UTslSpectatorPawn, LimitMinFreeCamFov);
	static_assert(UTslSpectatorPawn_LimitMinFreeCamFov_Offset == 0x510, "UTslSpectatorPawn::LimitMinFreeCamFov offset is not 510");
	auto constexpr UTslSpectatorPawn_LimitMaxFreeCamFov_Offset = offsetof(UTslSpectatorPawn, LimitMaxFreeCamFov);
	static_assert(UTslSpectatorPawn_LimitMaxFreeCamFov_Offset == 0x514, "UTslSpectatorPawn::LimitMaxFreeCamFov offset is not 514");
	auto constexpr UTslSpectatorPawn_SlowInterpSpeed_Offset = offsetof(UTslSpectatorPawn, SlowInterpSpeed);
	static_assert(UTslSpectatorPawn_SlowInterpSpeed_Offset == 0x520, "UTslSpectatorPawn::SlowInterpSpeed offset is not 520");
	auto constexpr UTslSpectatorPawn_NormalInterpSpeed_Offset = offsetof(UTslSpectatorPawn, NormalInterpSpeed);
	static_assert(UTslSpectatorPawn_NormalInterpSpeed_Offset == 0x524, "UTslSpectatorPawn::NormalInterpSpeed offset is not 524");
	auto constexpr UTslSpectatorPawn_QuickInterpSpeed_Offset = offsetof(UTslSpectatorPawn, QuickInterpSpeed);
	static_assert(UTslSpectatorPawn_QuickInterpSpeed_Offset == 0x528, "UTslSpectatorPawn::QuickInterpSpeed offset is not 528");
	auto constexpr UTslSpectatorPawn_CurrentInterpSpeed_Offset = offsetof(UTslSpectatorPawn, CurrentInterpSpeed);
	static_assert(UTslSpectatorPawn_CurrentInterpSpeed_Offset == 0x52c, "UTslSpectatorPawn::CurrentInterpSpeed offset is not 52c");
	auto constexpr UTslSpectatorPawn_LimitTargetArmLength_Offset = offsetof(UTslSpectatorPawn, LimitTargetArmLength);
	static_assert(UTslSpectatorPawn_LimitTargetArmLength_Offset == 0x538, "UTslSpectatorPawn::LimitTargetArmLength offset is not 538");
	auto constexpr UTslSpectatorPawn_SpectatableCheckLength_Offset = offsetof(UTslSpectatorPawn, SpectatableCheckLength);
	static_assert(UTslSpectatorPawn_SpectatableCheckLength_Offset == 0x53c, "UTslSpectatorPawn::SpectatableCheckLength offset is not 53c");
	auto constexpr UTslSpectatorPawn_SpectatableCheckScreenRatio_Offset = offsetof(UTslSpectatorPawn, SpectatableCheckScreenRatio);
	static_assert(UTslSpectatorPawn_SpectatableCheckScreenRatio_Offset == 0x540, "UTslSpectatorPawn::SpectatableCheckScreenRatio offset is not 540");
	auto constexpr UTslSpectatorPawn_ArrObPos_Erangel_Offset = offsetof(UTslSpectatorPawn, ArrObPos_Erangel);
	static_assert(UTslSpectatorPawn_ArrObPos_Erangel_Offset == 0x560, "UTslSpectatorPawn::ArrObPos_Erangel offset is not 560");
	auto constexpr UTslSpectatorPawn_ArrObPos_Desert_Offset = offsetof(UTslSpectatorPawn, ArrObPos_Desert);
	static_assert(UTslSpectatorPawn_ArrObPos_Desert_Offset == 0x570, "UTslSpectatorPawn::ArrObPos_Desert offset is not 570");
	auto constexpr UTslSpectatorPawn_boolField5A0_Offset = offsetof(UTslSpectatorPawn, boolField5A0);
	static_assert(UTslSpectatorPawn_boolField5A0_Offset == 0x5a0, "UTslSpectatorPawn::boolField5A0 offset is not 5a0");
	auto constexpr UTslSpectatorPawn_boolField5A1_Offset = offsetof(UTslSpectatorPawn, boolField5A1);
	static_assert(UTslSpectatorPawn_boolField5A1_Offset == 0x5a1, "UTslSpectatorPawn::boolField5A1 offset is not 5a1");
	auto constexpr UTslSpectatorPawn_boolField6A0_Offset = offsetof(UTslSpectatorPawn, boolField6A0);
	static_assert(UTslSpectatorPawn_boolField6A0_Offset == 0x6a0, "UTslSpectatorPawn::boolField6A0 offset is not 6a0");
	auto constexpr UTslSpectatorPawn_ReplayClipStartTime_Offset = offsetof(UTslSpectatorPawn, ReplayClipStartTime);
	static_assert(UTslSpectatorPawn_ReplayClipStartTime_Offset == 0x6a4, "UTslSpectatorPawn::ReplayClipStartTime offset is not 6a4");
	auto constexpr UTslSpectatorPawn_ReplayClipEndTime_Offset = offsetof(UTslSpectatorPawn, ReplayClipEndTime);
	static_assert(UTslSpectatorPawn_ReplayClipEndTime_Offset == 0x6a8, "UTslSpectatorPawn::ReplayClipEndTime offset is not 6a8");
	auto constexpr UTslSpectatorPawn_ReplayRecordedTime_Offset = offsetof(UTslSpectatorPawn, ReplayRecordedTime);
	static_assert(UTslSpectatorPawn_ReplayRecordedTime_Offset == 0x6b0, "UTslSpectatorPawn::ReplayRecordedTime offset is not 6b0");
	auto constexpr UTslSpectatorPawn_ReplayZoneEffectClass_Offset = offsetof(UTslSpectatorPawn, ReplayZoneEffectClass);
	static_assert(UTslSpectatorPawn_ReplayZoneEffectClass_Offset == 0x6b8, "UTslSpectatorPawn::ReplayZoneEffectClass offset is not 6b8");
	auto constexpr UTslSpectatorPawn_ReplayZoneAreaClass_Offset = offsetof(UTslSpectatorPawn, ReplayZoneAreaClass);
	static_assert(UTslSpectatorPawn_ReplayZoneAreaClass_Offset == 0x6c0, "UTslSpectatorPawn::ReplayZoneAreaClass offset is not 6c0");
	auto constexpr UTslSpectatorPawn_ReplayZoneEffect_Offset = offsetof(UTslSpectatorPawn, ReplayZoneEffect);
	static_assert(UTslSpectatorPawn_ReplayZoneEffect_Offset == 0x6c8, "UTslSpectatorPawn::ReplayZoneEffect offset is not 6c8");
	auto constexpr UTslSpectatorPawn_ReplayZoneArea_Offset = offsetof(UTslSpectatorPawn, ReplayZoneArea);
	static_assert(UTslSpectatorPawn_ReplayZoneArea_Offset == 0x6d0, "UTslSpectatorPawn::ReplayZoneArea offset is not 6d0");
	auto constexpr UTslSpectatorPawn_OnPlayerInfoDistanceDelegate_Offset = offsetof(UTslSpectatorPawn, OnPlayerInfoDistanceDelegate);
	static_assert(UTslSpectatorPawn_OnPlayerInfoDistanceDelegate_Offset == 0x6d8, "UTslSpectatorPawn::OnPlayerInfoDistanceDelegate offset is not 6d8");
	auto constexpr UTslSpectatorPawn_OnReplayClipInfoDelegate_Offset = offsetof(UTslSpectatorPawn, OnReplayClipInfoDelegate);
	static_assert(UTslSpectatorPawn_OnReplayClipInfoDelegate_Offset == 0x6e8, "UTslSpectatorPawn::OnReplayClipInfoDelegate offset is not 6e8");
	auto constexpr UTslSpectatorPawn_OnReplayInfoDelegate_Offset = offsetof(UTslSpectatorPawn, OnReplayInfoDelegate);
	static_assert(UTslSpectatorPawn_OnReplayInfoDelegate_Offset == 0x6f8, "UTslSpectatorPawn::OnReplayInfoDelegate offset is not 6f8");
	auto constexpr UTslSpectatorPawn_TslGamepadInputComponent_Offset = offsetof(UTslSpectatorPawn, TslGamepadInputComponent);
	static_assert(UTslSpectatorPawn_TslGamepadInputComponent_Offset == 0x758, "UTslSpectatorPawn::TslGamepadInputComponent offset is not 758");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
