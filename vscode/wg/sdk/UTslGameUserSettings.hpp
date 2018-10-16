#pragma once
#include "UGameUserSettings.hpp"
#include "FCustomInputSettings.hpp"
#include "EMinimapColorType.hpp"
#include "EUiShowType.hpp"
#include "ETslInputModes.hpp"
#include "EGamepadPresets.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGameUserSettings // Size: 0x2C8
	: public UGameUserSettings // Size: 0x110
{
private:
	typedef UTslGameUserSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1387); // id32("Class TslGame.TslGameUserSettings")
		return ptr;
	}
	float ScreenScale; /* Ofs: 0x110 Size: 0x4 - FloatProperty TslGame.TslGameUserSettings.ScreenScale */
	float Gamma; /* Ofs: 0x114 Size: 0x4 - FloatProperty TslGame.TslGameUserSettings.Gamma */
	uint8_t boolField118;
	uint8_t boolField119;
	uint8_t UnknownData11A[0x2];
	float MasterSoundVolume; /* Ofs: 0x11C Size: 0x4 - FloatProperty TslGame.TslGameUserSettings.MasterSoundVolume */
	uint8_t boolField120;
	uint8_t UnknownData121[0x3];
	float EffectSoundVolume; /* Ofs: 0x124 Size: 0x4 - FloatProperty TslGame.TslGameUserSettings.EffectSoundVolume */
	uint8_t boolField128;
	uint8_t UnknownData129[0x3];
	float UISoundVolume; /* Ofs: 0x12C Size: 0x4 - FloatProperty TslGame.TslGameUserSettings.UISoundVolume */
	uint8_t boolField130;
	uint8_t UnknownData131[0x3];
	float BGMSoundVolume; /* Ofs: 0x134 Size: 0x4 - FloatProperty TslGame.TslGameUserSettings.BGMSoundVolume */
	uint8_t boolField138;
	uint8_t boolField139;
	uint8_t boolField13A;
	uint8_t UnknownData13B[0x1];
	int32_t VoiceInputVolume; /* Ofs: 0x13C Size: 0x4 - IntProperty TslGame.TslGameUserSettings.VoiceInputVolume */
	int32_t VoiceOutputVolume; /* Ofs: 0x140 Size: 0x4 - IntProperty TslGame.TslGameUserSettings.VoiceOutputVolume */
	uint8_t boolField144;
	uint8_t boolField145;
	uint8_t boolField146;
	uint8_t boolField147;
	uint8_t boolField148;
	uint8_t UnknownData149[0x7];
	FString CultureName; /* Ofs: 0x150 Size: 0x10 - StrProperty TslGame.TslGameUserSettings.CultureName */
	FString LastCultureName; /* Ofs: 0x160 Size: 0x10 - StrProperty TslGame.TslGameUserSettings.LastCultureName */
	FCustomInputSettings CustomInputSettins; /* Ofs: 0x170 Size: 0x68 - StructProperty TslGame.TslGameUserSettings.CustomInputSettins */
	int32_t SelectMiniMapIndex; /* Ofs: 0x1D8 Size: 0x4 - IntProperty TslGame.TslGameUserSettings.SelectMiniMapIndex */
	float FpsCameraFov; /* Ofs: 0x1DC Size: 0x4 - FloatProperty TslGame.TslGameUserSettings.FpsCameraFov */
	uint8_t boolField1E0;
	uint8_t UnknownData1E1[0x3];
	float ForceFeedbackMultiplier; /* Ofs: 0x1E4 Size: 0x4 - FloatProperty TslGame.TslGameUserSettings.ForceFeedbackMultiplier */
	int32_t ColorBlindType; /* Ofs: 0x1E8 Size: 0x4 - IntProperty TslGame.TslGameUserSettings.ColorBlindType */
	uint8_t UnknownData1EC[0x4];
	FString CrosshairColorString; /* Ofs: 0x1F0 Size: 0x10 - StrProperty TslGame.TslGameUserSettings.CrosshairColorString */
	TEnumAsByte<enum EMinimapColorType> MinimapColorType; /* Ofs: 0x200 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.MinimapColorType */
	uint8_t UnknownData201[0x7];
	TArray<ExternalPtr<struct UClass>> GearProfile1; /* Ofs: 0x208 Size: 0x10 - ArrayProperty TslGame.TslGameUserSettings.GearProfile1 */
	TArray<ExternalPtr<struct UClass>> GearProfile2; /* Ofs: 0x218 Size: 0x10 - ArrayProperty TslGame.TslGameUserSettings.GearProfile2 */
	TMap<struct UClass, int32_t> DefaultReticleMap; /* Ofs: 0x228 Size: 0x50 - MapProperty TslGame.TslGameUserSettings.DefaultReticleMap */
	TEnumAsByte<enum EUiShowType> FppWeaponIconShowType; /* Ofs: 0x278 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.FppWeaponIconShowType */
	TEnumAsByte<enum EUiShowType> TpsWeaponIconShowType; /* Ofs: 0x279 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.TpsWeaponIconShowType */
	TEnumAsByte<enum EUiShowType> FppEquipableItemIconShowType; /* Ofs: 0x27A Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.FppEquipableItemIconShowType */
	uint8_t boolField27B;
	int32_t WorldMapZoomSpeedLevel; /* Ofs: 0x27C Size: 0x4 - IntProperty TslGame.TslGameUserSettings.WorldMapZoomSpeedLevel */
	uint8_t boolField280;
	TEnumAsByte<enum ETslInputModes> InputModeCrouch; /* Ofs: 0x281 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModeCrouch */
	TEnumAsByte<enum ETslInputModes> InputModeProne; /* Ofs: 0x282 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModeProne */
	TEnumAsByte<enum ETslInputModes> InputModeWalk; /* Ofs: 0x283 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModeWalk */
	TEnumAsByte<enum ETslInputModes> bToggleSprint; /* Ofs: 0x284 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.bToggleSprint */
	TEnumAsByte<enum ETslInputModes> InputModeHoldRotation; /* Ofs: 0x285 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModeHoldRotation */
	TEnumAsByte<enum ETslInputModes> InputModeHoldBreath; /* Ofs: 0x286 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModeHoldBreath */
	TEnumAsByte<enum ETslInputModes> InputModePeek; /* Ofs: 0x287 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModePeek */
	TEnumAsByte<enum ETslInputModes> InputModeMap; /* Ofs: 0x288 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModeMap */
	TEnumAsByte<enum ETslInputModes> InputModeADS; /* Ofs: 0x289 Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModeADS */
	TEnumAsByte<enum ETslInputModes> InputModeAim; /* Ofs: 0x28A Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.InputModeAim */
	uint8_t boolField28B;
	TEnumAsByte<enum EGamepadPresets> GamepadPresetType; /* Ofs: 0x28C Size: 0x1 - EnumProperty TslGame.TslGameUserSettings.GamepadPresetType */
	uint8_t boolField28D;
	uint8_t boolField28E;
	uint8_t boolField28F;
	uint8_t boolField290;
	uint8_t boolField291;
	uint8_t UnknownData292[0x6];
	TArray<struct FString> ErangelPreloadingMaps; /* Ofs: 0x298 Size: 0x10 - ArrayProperty TslGame.TslGameUserSettings.ErangelPreloadingMaps */
	TArray<struct FString> MiramarPreloadingMaps; /* Ofs: 0x2A8 Size: 0x10 - ArrayProperty TslGame.TslGameUserSettings.MiramarPreloadingMaps */
	FScriptMulticastDelegate OnGameUserSettingApplied; /* Ofs: 0x2B8 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameUserSettings.OnGameUserSettingApplied */


	inline bool SetScreenScale(t_structHelper inst, float value) { inst.WriteOffset(0x110, value); }
	inline bool SetGamma(t_structHelper inst, float value) { inst.WriteOffset(0x114, value); }
	inline bool bIsLanMatch()
	{
		return boolField118& 0x1;
	}
	inline bool SetbIsLanMatch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x118, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMasterSoundMute()
	{
		return boolField119& 0x1;
	}
	inline bool SetbIsMasterSoundMute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x119, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMasterSoundVolume(t_structHelper inst, float value) { inst.WriteOffset(0x11C, value); }
	inline bool bIsEffectSoundMute()
	{
		return boolField120& 0x1;
	}
	inline bool SetbIsEffectSoundMute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x120, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEffectSoundVolume(t_structHelper inst, float value) { inst.WriteOffset(0x124, value); }
	inline bool bIsUISoundMute()
	{
		return boolField128& 0x1;
	}
	inline bool SetbIsUISoundMute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x128, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetUISoundVolume(t_structHelper inst, float value) { inst.WriteOffset(0x12C, value); }
	inline bool bIsBGMSoundMute()
	{
		return boolField130& 0x1;
	}
	inline bool SetbIsBGMSoundMute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBGMSoundVolume(t_structHelper inst, float value) { inst.WriteOffset(0x134, value); }
	inline bool bIsEnabledHrtfRemoteWeaponSound()
	{
		return boolField138& 0x1;
	}
	inline bool SetbIsEnabledHrtfRemoteWeaponSound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x138, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsVoiceInputMute()
	{
		return boolField139& 0x1;
	}
	inline bool SetbIsVoiceInputMute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x139, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsVoiceOutputMute()
	{
		return boolField13A& 0x1;
	}
	inline bool SetbIsVoiceOutputMute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x13A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVoiceInputVolume(t_structHelper inst, int32_t value) { inst.WriteOffset(0x13C, value); }
	inline bool SetVoiceOutputVolume(t_structHelper inst, int32_t value) { inst.WriteOffset(0x140, value); }
	inline bool bUsePushToTalk()
	{
		return boolField144& 0x1;
	}
	inline bool SetbUsePushToTalk(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x144, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseGlobalVoice()
	{
		return boolField145& 0x1;
	}
	inline bool SetbUseGlobalVoice(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x145, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseTeamVoice()
	{
		return boolField146& 0x1;
	}
	inline bool SetbUseTeamVoice(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x146, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSavedGraphicOption()
	{
		return boolField147& 0x1;
	}
	inline bool SetbSavedGraphicOption(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x147, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bMotionBlur()
	{
		return boolField148& 0x1;
	}
	inline bool SetbMotionBlur(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCultureName(t_structHelper inst, FString value) { inst.WriteOffset(0x150, value); }
	inline bool SetLastCultureName(t_structHelper inst, FString value) { inst.WriteOffset(0x160, value); }
	inline bool SetCustomInputSettins(t_structHelper inst, FCustomInputSettings value) { inst.WriteOffset(0x170, value); }
	inline bool SetSelectMiniMapIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x1D8, value); }
	inline bool SetFpsCameraFov(t_structHelper inst, float value) { inst.WriteOffset(0x1DC, value); }
	inline bool bUseForceFeedback()
	{
		return boolField1E0& 0x1;
	}
	inline bool SetbUseForceFeedback(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetForceFeedbackMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x1E4, value); }
	inline bool SetColorBlindType(t_structHelper inst, int32_t value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetCrosshairColorString(t_structHelper inst, FString value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetMinimapColorType(t_structHelper inst, TEnumAsByte<enum EMinimapColorType> value) { inst.WriteOffset(0x200, value); }
	inline bool SetGearProfile1(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x208, value); }
	inline bool SetGearProfile2(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x218, value); }
	inline bool SetDefaultReticleMap(t_structHelper inst, TMap<struct UClass, int32_t> value) { inst.WriteOffset(0x228, value); }
	inline bool SetFppWeaponIconShowType(t_structHelper inst, TEnumAsByte<enum EUiShowType> value) { inst.WriteOffset(0x278, value); }
	inline bool SetTpsWeaponIconShowType(t_structHelper inst, TEnumAsByte<enum EUiShowType> value) { inst.WriteOffset(0x279, value); }
	inline bool SetFppEquipableItemIconShowType(t_structHelper inst, TEnumAsByte<enum EUiShowType> value) { inst.WriteOffset(0x27A, value); }
	inline bool bUseCharacterCapture()
	{
		return boolField27B& 0x1;
	}
	inline bool SetbUseCharacterCapture(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x27B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWorldMapZoomSpeedLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x27C, value); }
	inline bool bIconKillfeedEnabled()
	{
		return boolField280& 0x1;
	}
	inline bool SetbIconKillfeedEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x280, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInputModeCrouch(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x281, value); }
	inline bool SetInputModeProne(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x282, value); }
	inline bool SetInputModeWalk(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x283, value); }
	inline bool SetbToggleSprint(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x284, value); }
	inline bool SetInputModeHoldRotation(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x285, value); }
	inline bool SetInputModeHoldBreath(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x286, value); }
	inline bool SetInputModePeek(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x287, value); }
	inline bool SetInputModeMap(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x288, value); }
	inline bool SetInputModeADS(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x289, value); }
	inline bool SetInputModeAim(t_structHelper inst, TEnumAsByte<enum ETslInputModes> value) { inst.WriteOffset(0x28A, value); }
	inline bool bEditorApplyOverrideScalability()
	{
		return boolField28B& 0x1;
	}
	inline bool SetbEditorApplyOverrideScalability(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x28B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGamepadPresetType(t_structHelper inst, TEnumAsByte<enum EGamepadPresets> value) { inst.WriteOffset(0x28C, value); }
	inline bool bUseKeyHint()
	{
		return boolField28D& 0x1;
	}
	inline bool SetbUseKeyHint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x28D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseFreeLookInterp()
	{
		return boolField28E& 0x1;
	}
	inline bool SetbUseFreeLookInterp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x28E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseClientReplay()
	{
		return boolField28F& 0x1;
	}
	inline bool SetbUseClientReplay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x28F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseKillcam()
	{
		return boolField290& 0x1;
	}
	inline bool SetbUseKillcam(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x290, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPreloadingMap()
	{
		return boolField291& 0x1;
	}
	inline bool SetbPreloadingMap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x291, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetErangelPreloadingMaps(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x298, value); }
	inline bool SetMiramarPreloadingMaps(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetOnGameUserSettingApplied(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGameUserSettings = sizeof(UTslGameUserSettings); // 712
    static_assert(sizeof(UTslGameUserSettings) == 0x2C8, "Size of UTslGameUserSettings is not correct.");
	auto constexpr UTslGameUserSettings_ScreenScale_Offset = offsetof(UTslGameUserSettings, ScreenScale);
	static_assert(UTslGameUserSettings_ScreenScale_Offset == 0x110, "UTslGameUserSettings::ScreenScale offset is not 110");
	auto constexpr UTslGameUserSettings_Gamma_Offset = offsetof(UTslGameUserSettings, Gamma);
	static_assert(UTslGameUserSettings_Gamma_Offset == 0x114, "UTslGameUserSettings::Gamma offset is not 114");
	auto constexpr UTslGameUserSettings_boolField118_Offset = offsetof(UTslGameUserSettings, boolField118);
	static_assert(UTslGameUserSettings_boolField118_Offset == 0x118, "UTslGameUserSettings::boolField118 offset is not 118");
	auto constexpr UTslGameUserSettings_boolField119_Offset = offsetof(UTslGameUserSettings, boolField119);
	static_assert(UTslGameUserSettings_boolField119_Offset == 0x119, "UTslGameUserSettings::boolField119 offset is not 119");
	auto constexpr UTslGameUserSettings_MasterSoundVolume_Offset = offsetof(UTslGameUserSettings, MasterSoundVolume);
	static_assert(UTslGameUserSettings_MasterSoundVolume_Offset == 0x11c, "UTslGameUserSettings::MasterSoundVolume offset is not 11c");
	auto constexpr UTslGameUserSettings_boolField120_Offset = offsetof(UTslGameUserSettings, boolField120);
	static_assert(UTslGameUserSettings_boolField120_Offset == 0x120, "UTslGameUserSettings::boolField120 offset is not 120");
	auto constexpr UTslGameUserSettings_EffectSoundVolume_Offset = offsetof(UTslGameUserSettings, EffectSoundVolume);
	static_assert(UTslGameUserSettings_EffectSoundVolume_Offset == 0x124, "UTslGameUserSettings::EffectSoundVolume offset is not 124");
	auto constexpr UTslGameUserSettings_boolField128_Offset = offsetof(UTslGameUserSettings, boolField128);
	static_assert(UTslGameUserSettings_boolField128_Offset == 0x128, "UTslGameUserSettings::boolField128 offset is not 128");
	auto constexpr UTslGameUserSettings_UISoundVolume_Offset = offsetof(UTslGameUserSettings, UISoundVolume);
	static_assert(UTslGameUserSettings_UISoundVolume_Offset == 0x12c, "UTslGameUserSettings::UISoundVolume offset is not 12c");
	auto constexpr UTslGameUserSettings_boolField130_Offset = offsetof(UTslGameUserSettings, boolField130);
	static_assert(UTslGameUserSettings_boolField130_Offset == 0x130, "UTslGameUserSettings::boolField130 offset is not 130");
	auto constexpr UTslGameUserSettings_BGMSoundVolume_Offset = offsetof(UTslGameUserSettings, BGMSoundVolume);
	static_assert(UTslGameUserSettings_BGMSoundVolume_Offset == 0x134, "UTslGameUserSettings::BGMSoundVolume offset is not 134");
	auto constexpr UTslGameUserSettings_boolField138_Offset = offsetof(UTslGameUserSettings, boolField138);
	static_assert(UTslGameUserSettings_boolField138_Offset == 0x138, "UTslGameUserSettings::boolField138 offset is not 138");
	auto constexpr UTslGameUserSettings_boolField139_Offset = offsetof(UTslGameUserSettings, boolField139);
	static_assert(UTslGameUserSettings_boolField139_Offset == 0x139, "UTslGameUserSettings::boolField139 offset is not 139");
	auto constexpr UTslGameUserSettings_boolField13A_Offset = offsetof(UTslGameUserSettings, boolField13A);
	static_assert(UTslGameUserSettings_boolField13A_Offset == 0x13a, "UTslGameUserSettings::boolField13A offset is not 13a");
	auto constexpr UTslGameUserSettings_VoiceInputVolume_Offset = offsetof(UTslGameUserSettings, VoiceInputVolume);
	static_assert(UTslGameUserSettings_VoiceInputVolume_Offset == 0x13c, "UTslGameUserSettings::VoiceInputVolume offset is not 13c");
	auto constexpr UTslGameUserSettings_VoiceOutputVolume_Offset = offsetof(UTslGameUserSettings, VoiceOutputVolume);
	static_assert(UTslGameUserSettings_VoiceOutputVolume_Offset == 0x140, "UTslGameUserSettings::VoiceOutputVolume offset is not 140");
	auto constexpr UTslGameUserSettings_boolField144_Offset = offsetof(UTslGameUserSettings, boolField144);
	static_assert(UTslGameUserSettings_boolField144_Offset == 0x144, "UTslGameUserSettings::boolField144 offset is not 144");
	auto constexpr UTslGameUserSettings_boolField145_Offset = offsetof(UTslGameUserSettings, boolField145);
	static_assert(UTslGameUserSettings_boolField145_Offset == 0x145, "UTslGameUserSettings::boolField145 offset is not 145");
	auto constexpr UTslGameUserSettings_boolField146_Offset = offsetof(UTslGameUserSettings, boolField146);
	static_assert(UTslGameUserSettings_boolField146_Offset == 0x146, "UTslGameUserSettings::boolField146 offset is not 146");
	auto constexpr UTslGameUserSettings_boolField147_Offset = offsetof(UTslGameUserSettings, boolField147);
	static_assert(UTslGameUserSettings_boolField147_Offset == 0x147, "UTslGameUserSettings::boolField147 offset is not 147");
	auto constexpr UTslGameUserSettings_boolField148_Offset = offsetof(UTslGameUserSettings, boolField148);
	static_assert(UTslGameUserSettings_boolField148_Offset == 0x148, "UTslGameUserSettings::boolField148 offset is not 148");
	auto constexpr UTslGameUserSettings_CultureName_Offset = offsetof(UTslGameUserSettings, CultureName);
	static_assert(UTslGameUserSettings_CultureName_Offset == 0x150, "UTslGameUserSettings::CultureName offset is not 150");
	auto constexpr UTslGameUserSettings_LastCultureName_Offset = offsetof(UTslGameUserSettings, LastCultureName);
	static_assert(UTslGameUserSettings_LastCultureName_Offset == 0x160, "UTslGameUserSettings::LastCultureName offset is not 160");
	auto constexpr UTslGameUserSettings_CustomInputSettins_Offset = offsetof(UTslGameUserSettings, CustomInputSettins);
	static_assert(UTslGameUserSettings_CustomInputSettins_Offset == 0x170, "UTslGameUserSettings::CustomInputSettins offset is not 170");
	auto constexpr UTslGameUserSettings_SelectMiniMapIndex_Offset = offsetof(UTslGameUserSettings, SelectMiniMapIndex);
	static_assert(UTslGameUserSettings_SelectMiniMapIndex_Offset == 0x1d8, "UTslGameUserSettings::SelectMiniMapIndex offset is not 1d8");
	auto constexpr UTslGameUserSettings_FpsCameraFov_Offset = offsetof(UTslGameUserSettings, FpsCameraFov);
	static_assert(UTslGameUserSettings_FpsCameraFov_Offset == 0x1dc, "UTslGameUserSettings::FpsCameraFov offset is not 1dc");
	auto constexpr UTslGameUserSettings_boolField1E0_Offset = offsetof(UTslGameUserSettings, boolField1E0);
	static_assert(UTslGameUserSettings_boolField1E0_Offset == 0x1e0, "UTslGameUserSettings::boolField1E0 offset is not 1e0");
	auto constexpr UTslGameUserSettings_ForceFeedbackMultiplier_Offset = offsetof(UTslGameUserSettings, ForceFeedbackMultiplier);
	static_assert(UTslGameUserSettings_ForceFeedbackMultiplier_Offset == 0x1e4, "UTslGameUserSettings::ForceFeedbackMultiplier offset is not 1e4");
	auto constexpr UTslGameUserSettings_ColorBlindType_Offset = offsetof(UTslGameUserSettings, ColorBlindType);
	static_assert(UTslGameUserSettings_ColorBlindType_Offset == 0x1e8, "UTslGameUserSettings::ColorBlindType offset is not 1e8");
	auto constexpr UTslGameUserSettings_CrosshairColorString_Offset = offsetof(UTslGameUserSettings, CrosshairColorString);
	static_assert(UTslGameUserSettings_CrosshairColorString_Offset == 0x1f0, "UTslGameUserSettings::CrosshairColorString offset is not 1f0");
	auto constexpr UTslGameUserSettings_MinimapColorType_Offset = offsetof(UTslGameUserSettings, MinimapColorType);
	static_assert(UTslGameUserSettings_MinimapColorType_Offset == 0x200, "UTslGameUserSettings::MinimapColorType offset is not 200");
	auto constexpr UTslGameUserSettings_GearProfile1_Offset = offsetof(UTslGameUserSettings, GearProfile1);
	static_assert(UTslGameUserSettings_GearProfile1_Offset == 0x208, "UTslGameUserSettings::GearProfile1 offset is not 208");
	auto constexpr UTslGameUserSettings_GearProfile2_Offset = offsetof(UTslGameUserSettings, GearProfile2);
	static_assert(UTslGameUserSettings_GearProfile2_Offset == 0x218, "UTslGameUserSettings::GearProfile2 offset is not 218");
	auto constexpr UTslGameUserSettings_DefaultReticleMap_Offset = offsetof(UTslGameUserSettings, DefaultReticleMap);
	static_assert(UTslGameUserSettings_DefaultReticleMap_Offset == 0x228, "UTslGameUserSettings::DefaultReticleMap offset is not 228");
	auto constexpr UTslGameUserSettings_FppWeaponIconShowType_Offset = offsetof(UTslGameUserSettings, FppWeaponIconShowType);
	static_assert(UTslGameUserSettings_FppWeaponIconShowType_Offset == 0x278, "UTslGameUserSettings::FppWeaponIconShowType offset is not 278");
	auto constexpr UTslGameUserSettings_TpsWeaponIconShowType_Offset = offsetof(UTslGameUserSettings, TpsWeaponIconShowType);
	static_assert(UTslGameUserSettings_TpsWeaponIconShowType_Offset == 0x279, "UTslGameUserSettings::TpsWeaponIconShowType offset is not 279");
	auto constexpr UTslGameUserSettings_FppEquipableItemIconShowType_Offset = offsetof(UTslGameUserSettings, FppEquipableItemIconShowType);
	static_assert(UTslGameUserSettings_FppEquipableItemIconShowType_Offset == 0x27a, "UTslGameUserSettings::FppEquipableItemIconShowType offset is not 27a");
	auto constexpr UTslGameUserSettings_boolField27B_Offset = offsetof(UTslGameUserSettings, boolField27B);
	static_assert(UTslGameUserSettings_boolField27B_Offset == 0x27b, "UTslGameUserSettings::boolField27B offset is not 27b");
	auto constexpr UTslGameUserSettings_WorldMapZoomSpeedLevel_Offset = offsetof(UTslGameUserSettings, WorldMapZoomSpeedLevel);
	static_assert(UTslGameUserSettings_WorldMapZoomSpeedLevel_Offset == 0x27c, "UTslGameUserSettings::WorldMapZoomSpeedLevel offset is not 27c");
	auto constexpr UTslGameUserSettings_boolField280_Offset = offsetof(UTslGameUserSettings, boolField280);
	static_assert(UTslGameUserSettings_boolField280_Offset == 0x280, "UTslGameUserSettings::boolField280 offset is not 280");
	auto constexpr UTslGameUserSettings_InputModeCrouch_Offset = offsetof(UTslGameUserSettings, InputModeCrouch);
	static_assert(UTslGameUserSettings_InputModeCrouch_Offset == 0x281, "UTslGameUserSettings::InputModeCrouch offset is not 281");
	auto constexpr UTslGameUserSettings_InputModeProne_Offset = offsetof(UTslGameUserSettings, InputModeProne);
	static_assert(UTslGameUserSettings_InputModeProne_Offset == 0x282, "UTslGameUserSettings::InputModeProne offset is not 282");
	auto constexpr UTslGameUserSettings_InputModeWalk_Offset = offsetof(UTslGameUserSettings, InputModeWalk);
	static_assert(UTslGameUserSettings_InputModeWalk_Offset == 0x283, "UTslGameUserSettings::InputModeWalk offset is not 283");
	auto constexpr UTslGameUserSettings_bToggleSprint_Offset = offsetof(UTslGameUserSettings, bToggleSprint);
	static_assert(UTslGameUserSettings_bToggleSprint_Offset == 0x284, "UTslGameUserSettings::bToggleSprint offset is not 284");
	auto constexpr UTslGameUserSettings_InputModeHoldRotation_Offset = offsetof(UTslGameUserSettings, InputModeHoldRotation);
	static_assert(UTslGameUserSettings_InputModeHoldRotation_Offset == 0x285, "UTslGameUserSettings::InputModeHoldRotation offset is not 285");
	auto constexpr UTslGameUserSettings_InputModeHoldBreath_Offset = offsetof(UTslGameUserSettings, InputModeHoldBreath);
	static_assert(UTslGameUserSettings_InputModeHoldBreath_Offset == 0x286, "UTslGameUserSettings::InputModeHoldBreath offset is not 286");
	auto constexpr UTslGameUserSettings_InputModePeek_Offset = offsetof(UTslGameUserSettings, InputModePeek);
	static_assert(UTslGameUserSettings_InputModePeek_Offset == 0x287, "UTslGameUserSettings::InputModePeek offset is not 287");
	auto constexpr UTslGameUserSettings_InputModeMap_Offset = offsetof(UTslGameUserSettings, InputModeMap);
	static_assert(UTslGameUserSettings_InputModeMap_Offset == 0x288, "UTslGameUserSettings::InputModeMap offset is not 288");
	auto constexpr UTslGameUserSettings_InputModeADS_Offset = offsetof(UTslGameUserSettings, InputModeADS);
	static_assert(UTslGameUserSettings_InputModeADS_Offset == 0x289, "UTslGameUserSettings::InputModeADS offset is not 289");
	auto constexpr UTslGameUserSettings_InputModeAim_Offset = offsetof(UTslGameUserSettings, InputModeAim);
	static_assert(UTslGameUserSettings_InputModeAim_Offset == 0x28a, "UTslGameUserSettings::InputModeAim offset is not 28a");
	auto constexpr UTslGameUserSettings_boolField28B_Offset = offsetof(UTslGameUserSettings, boolField28B);
	static_assert(UTslGameUserSettings_boolField28B_Offset == 0x28b, "UTslGameUserSettings::boolField28B offset is not 28b");
	auto constexpr UTslGameUserSettings_GamepadPresetType_Offset = offsetof(UTslGameUserSettings, GamepadPresetType);
	static_assert(UTslGameUserSettings_GamepadPresetType_Offset == 0x28c, "UTslGameUserSettings::GamepadPresetType offset is not 28c");
	auto constexpr UTslGameUserSettings_boolField28D_Offset = offsetof(UTslGameUserSettings, boolField28D);
	static_assert(UTslGameUserSettings_boolField28D_Offset == 0x28d, "UTslGameUserSettings::boolField28D offset is not 28d");
	auto constexpr UTslGameUserSettings_boolField28E_Offset = offsetof(UTslGameUserSettings, boolField28E);
	static_assert(UTslGameUserSettings_boolField28E_Offset == 0x28e, "UTslGameUserSettings::boolField28E offset is not 28e");
	auto constexpr UTslGameUserSettings_boolField28F_Offset = offsetof(UTslGameUserSettings, boolField28F);
	static_assert(UTslGameUserSettings_boolField28F_Offset == 0x28f, "UTslGameUserSettings::boolField28F offset is not 28f");
	auto constexpr UTslGameUserSettings_boolField290_Offset = offsetof(UTslGameUserSettings, boolField290);
	static_assert(UTslGameUserSettings_boolField290_Offset == 0x290, "UTslGameUserSettings::boolField290 offset is not 290");
	auto constexpr UTslGameUserSettings_boolField291_Offset = offsetof(UTslGameUserSettings, boolField291);
	static_assert(UTslGameUserSettings_boolField291_Offset == 0x291, "UTslGameUserSettings::boolField291 offset is not 291");
	auto constexpr UTslGameUserSettings_ErangelPreloadingMaps_Offset = offsetof(UTslGameUserSettings, ErangelPreloadingMaps);
	static_assert(UTslGameUserSettings_ErangelPreloadingMaps_Offset == 0x298, "UTslGameUserSettings::ErangelPreloadingMaps offset is not 298");
	auto constexpr UTslGameUserSettings_MiramarPreloadingMaps_Offset = offsetof(UTslGameUserSettings, MiramarPreloadingMaps);
	static_assert(UTslGameUserSettings_MiramarPreloadingMaps_Offset == 0x2a8, "UTslGameUserSettings::MiramarPreloadingMaps offset is not 2a8");
	auto constexpr UTslGameUserSettings_OnGameUserSettingApplied_Offset = offsetof(UTslGameUserSettings, OnGameUserSettingApplied);
	static_assert(UTslGameUserSettings_OnGameUserSettingApplied_Offset == 0x2b8, "UTslGameUserSettings::OnGameUserSettingApplied offset is not 2b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
