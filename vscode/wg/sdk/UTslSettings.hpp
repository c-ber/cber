#pragma once
#include "FRigidBodyErrorCorrection.hpp"
#include "ESkinCategory.hpp"
#include "FInteractionCollisionData.hpp"
#include "FLevelLoadingBoostParameters.hpp"
#include "FAimAcceleration.hpp"
#include "FScreenResolution.hpp"
#include "FTeamColorAndIcon.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSettings // Size: 0x6E8
	: public UObject // Size: 0x30
{
private:
	typedef UTslSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1320); // id32("Class TslGame.TslSettings")
		return ptr;
	}
	int32_t ObserverNetSpeed; /* Ofs: 0x30 Size: 0x4 - IntProperty TslGame.TslSettings.ObserverNetSpeed */
	uint8_t boolField34;
	uint8_t boolField35;
	uint8_t boolField36;
	uint8_t UnknownData37[0x1];
	int32_t ReportAvailableRecordDaysAgo; /* Ofs: 0x38 Size: 0x4 - IntProperty TslGame.TslSettings.ReportAvailableRecordDaysAgo */
	int32_t MaxReplaysForNullStreamer; /* Ofs: 0x3C Size: 0x4 - IntProperty TslGame.TslSettings.MaxReplaysForNullStreamer */
	float RepDistance_Item; /* Ofs: 0x40 Size: 0x4 - FloatProperty TslGame.TslSettings.RepDistance_Item */
	float RepDistance_Character; /* Ofs: 0x44 Size: 0x4 - FloatProperty TslGame.TslSettings.RepDistance_Character */
	float RepDistance_Weapon; /* Ofs: 0x48 Size: 0x4 - FloatProperty TslGame.TslSettings.RepDistance_Weapon */
	float RepDistance_Vehicle; /* Ofs: 0x4C Size: 0x4 - FloatProperty TslGame.TslSettings.RepDistance_Vehicle */
	float RepDistance_Parachute; /* Ofs: 0x50 Size: 0x4 - FloatProperty TslGame.TslSettings.RepDistance_Parachute */
	float RepDistance_Door; /* Ofs: 0x54 Size: 0x4 - FloatProperty TslGame.TslSettings.RepDistance_Door */
	float RepDistance_Window; /* Ofs: 0x58 Size: 0x4 - FloatProperty TslGame.TslSettings.RepDistance_Window */
	float RepFrequency_Character; /* Ofs: 0x5C Size: 0x4 - FloatProperty TslGame.TslSettings.RepFrequency_Character */
	float RepFrequency_WheeledVehicle; /* Ofs: 0x60 Size: 0x4 - FloatProperty TslGame.TslSettings.RepFrequency_WheeledVehicle */
	float RepFrequency_FloatingVehicle; /* Ofs: 0x64 Size: 0x4 - FloatProperty TslGame.TslSettings.RepFrequency_FloatingVehicle */
	float RepFrequency_Parachute; /* Ofs: 0x68 Size: 0x4 - FloatProperty TslGame.TslSettings.RepFrequency_Parachute */
	float RepFrequency_Aircraft; /* Ofs: 0x6C Size: 0x4 - FloatProperty TslGame.TslSettings.RepFrequency_Aircraft */
	float RepFrequency_CarePackage; /* Ofs: 0x70 Size: 0x4 - FloatProperty TslGame.TslSettings.RepFrequency_CarePackage */
	float DemoMaxRecordHz_Character; /* Ofs: 0x74 Size: 0x4 - FloatProperty TslGame.TslSettings.DemoMaxRecordHz_Character */
	float DemoMaxRecordHz_WheeledVehicle; /* Ofs: 0x78 Size: 0x4 - FloatProperty TslGame.TslSettings.DemoMaxRecordHz_WheeledVehicle */
	float DemoMaxRecordHz_FloatingVehicle; /* Ofs: 0x7C Size: 0x4 - FloatProperty TslGame.TslSettings.DemoMaxRecordHz_FloatingVehicle */
	float RepVehicle_SpawnDistance; /* Ofs: 0x80 Size: 0x4 - FloatProperty TslGame.TslSettings.RepVehicle_SpawnDistance */
	float RepVehicle_UnspawnDistance; /* Ofs: 0x84 Size: 0x4 - FloatProperty TslGame.TslSettings.RepVehicle_UnspawnDistance */
	FRigidBodyErrorCorrection RepVehicle_PhysicErrorCorrection; /* Ofs: 0x88 Size: 0x1C - StructProperty TslGame.TslSettings.RepVehicle_PhysicErrorCorrection */
	float CharacterCorrection_MaxSpeed; /* Ofs: 0xA4 Size: 0x4 - FloatProperty TslGame.TslSettings.CharacterCorrection_MaxSpeed */
	float CharacterCorrection_MaxSpeedPositionError; /* Ofs: 0xA8 Size: 0x4 - FloatProperty TslGame.TslSettings.CharacterCorrection_MaxSpeedPositionError */
	float CharacterCorrection_ZeroSpeedPositionError; /* Ofs: 0xAC Size: 0x4 - FloatProperty TslGame.TslSettings.CharacterCorrection_ZeroSpeedPositionError */
	uint8_t boolFieldB0;
	uint8_t boolFieldB1;
	uint8_t UnknownDataB2[0x2];
	float BattlEyeReliablePacketIntervalOnClient; /* Ofs: 0xB4 Size: 0x4 - FloatProperty TslGame.TslSettings.BattlEyeReliablePacketIntervalOnClient */
	float BattlEyeReliablePacketIntervalOnServer; /* Ofs: 0xB8 Size: 0x4 - FloatProperty TslGame.TslSettings.BattlEyeReliablePacketIntervalOnServer */
	uint8_t boolFieldBC;
	uint8_t boolFieldBD;
	uint8_t boolFieldBE;
	uint8_t boolFieldBF;
	float TPLaFPSUpdateStatusPeriodInMs; /* Ofs: 0xC0 Size: 0x4 - FloatProperty TslGame.TslSettings.TPLaFPSUpdateStatusPeriodInMs */
	uint8_t boolFieldC4;
	uint8_t boolFieldC5;
	uint8_t UnknownDataC6[0x2];
	FString GappLobbyUrl; /* Ofs: 0xC8 Size: 0x10 - StrProperty TslGame.TslSettings.GappLobbyUrl */
	uint8_t boolFieldD8;
	uint8_t boolFieldD9;
	uint8_t boolFieldDA;
	uint8_t UnknownDataDB[0x1];
	float GameStateLogInterval; /* Ofs: 0xDC Size: 0x4 - FloatProperty TslGame.TslSettings.GameStateLogInterval */
	float ServerStatLogInterval; /* Ofs: 0xE0 Size: 0x4 - FloatProperty TslGame.TslSettings.ServerStatLogInterval */
	float CharacterPositionLogInterval; /* Ofs: 0xE4 Size: 0x4 - FloatProperty TslGame.TslSettings.CharacterPositionLogInterval */
	float DestructibleComponentMaxDrawDistance; /* Ofs: 0xE8 Size: 0x4 - FloatProperty TslGame.TslSettings.DestructibleComponentMaxDrawDistance */
	uint8_t UnknownDataEC[0x4];
	ExternalPtr<struct UClass> CharacterClassToPlay; /* Ofs: 0xF0 Size: 0x8 - ClassProperty TslGame.TslSettings.CharacterClassToPlay */
	TArray<struct FBoneBinding> BoneMapping; /* Ofs: 0xF8 Size: 0x10 - ArrayProperty TslGame.TslSettings.BoneMapping */
	TArray<struct FStringAssetReference> TestVehicleClasses; /* Ofs: 0x108 Size: 0x10 - ArrayProperty TslGame.TslSettings.TestVehicleClasses */
	TArray<struct FStringAssetReference> TestFloatingVehicleClasses; /* Ofs: 0x118 Size: 0x10 - ArrayProperty TslGame.TslSettings.TestFloatingVehicleClasses */
	TArray<struct FChineseLicensingDefaultCustomizeData> ChineseLicensingDefaultCustomizeData; /* Ofs: 0x128 Size: 0x10 - ArrayProperty TslGame.TslSettings.ChineseLicensingDefaultCustomizeData */
	float StoppedWheeledVehicleSpeedThreshold; /* Ofs: 0x138 Size: 0x4 - FloatProperty TslGame.TslSettings.StoppedWheeledVehicleSpeedThreshold */
	float StoppedFloatingVehicleSpeedThreshold; /* Ofs: 0x13C Size: 0x4 - FloatProperty TslGame.TslSettings.StoppedFloatingVehicleSpeedThreshold */
	float LastDriverDuration; /* Ofs: 0x140 Size: 0x4 - FloatProperty TslGame.TslSettings.LastDriverDuration */
	uint8_t UnknownData144[0x4];
	TMap<ESkinCategory, struct FStringAssetReference> SkinDataTableSet; /* Ofs: 0x148 Size: 0x50 - MapProperty TslGame.TslSettings.SkinDataTableSet */
	TMap<ESkinCategory, struct UDataTable> LoadedSkinDB; /* Ofs: 0x198 Size: 0x50 - MapProperty TslGame.TslSettings.LoadedSkinDB */
	TArray<struct FStringAssetReference> TestSkinClasses; /* Ofs: 0x1E8 Size: 0x10 - ArrayProperty TslGame.TslSettings.TestSkinClasses */
	uint8_t boolField1F8;
	uint8_t UnknownData1F9[0x3];
	float InteractableDistanceToleranceOnDedicatedServer; /* Ofs: 0x1FC Size: 0x4 - FloatProperty TslGame.TslSettings.InteractableDistanceToleranceOnDedicatedServer */
	float InteractableDistance_ItemDefault; /* Ofs: 0x200 Size: 0x4 - FloatProperty TslGame.TslSettings.InteractableDistance_ItemDefault */
	float InteractableSpeed_ItemDefault; /* Ofs: 0x204 Size: 0x4 - FloatProperty TslGame.TslSettings.InteractableSpeed_ItemDefault */
	FInteractionCollisionData InteractionCollisionForFPS; /* Ofs: 0x208 Size: 0x14 - StructProperty TslGame.TslSettings.InteractionCollisionForFPS */
	FInteractionCollisionData InteractionCollisionForTPS; /* Ofs: 0x21C Size: 0x14 - StructProperty TslGame.TslSettings.InteractionCollisionForTPS */
	uint8_t boolField230;
	uint8_t boolField231;
	uint8_t UnknownData232[0x2];
	float InventoryMaxSpaceDefault; /* Ofs: 0x234 Size: 0x4 - FloatProperty TslGame.TslSettings.InventoryMaxSpaceDefault */
	ExternalPtr<struct UTexture> ErrorIconTexture; /* Ofs: 0x238 Size: 0x8 - ObjectProperty TslGame.TslSettings.ErrorIconTexture */
	ExternalPtr<struct UTexture> LoadingIconTexture; /* Ofs: 0x240 Size: 0x8 - ObjectProperty TslGame.TslSettings.LoadingIconTexture */
	TArray<ExternalPtr<struct UObject>> AssetsForPackageIntegrity; /* Ofs: 0x248 Size: 0x10 - ArrayProperty TslGame.TslSettings.AssetsForPackageIntegrity */
	float UICrosshairDistance; /* Ofs: 0x258 Size: 0x4 - FloatProperty TslGame.TslSettings.UICrosshairDistance */
	float UICrosshairInterpSpeed; /* Ofs: 0x25C Size: 0x4 - FloatProperty TslGame.TslSettings.UICrosshairInterpSpeed */
	float UICrosshairDisableDistance; /* Ofs: 0x260 Size: 0x4 - FloatProperty TslGame.TslSettings.UICrosshairDisableDistance */
	float BallisticDragScale; /* Ofs: 0x264 Size: 0x4 - FloatProperty TslGame.TslSettings.BallisticDragScale */
	float BallisticDropScale; /* Ofs: 0x268 Size: 0x4 - FloatProperty TslGame.TslSettings.BallisticDropScale */
	float BallisticMOAScale; /* Ofs: 0x26C Size: 0x4 - FloatProperty TslGame.TslSettings.BallisticMOAScale */
	float RecoilControlScale; /* Ofs: 0x270 Size: 0x4 - FloatProperty TslGame.TslSettings.RecoilControlScale */
	float RecoilAnimScale; /* Ofs: 0x274 Size: 0x4 - FloatProperty TslGame.TslSettings.RecoilAnimScale */
	float GameTimeMultiplier; /* Ofs: 0x278 Size: 0x4 - FloatProperty TslGame.TslSettings.GameTimeMultiplier */
	uint8_t boolField27C;
	uint8_t UnknownData27D[0x3];
	float MeleeWeaponPitchMin; /* Ofs: 0x280 Size: 0x4 - FloatProperty TslGame.TslSettings.MeleeWeaponPitchMin */
	float MeleeWeaponPitchMax; /* Ofs: 0x284 Size: 0x4 - FloatProperty TslGame.TslSettings.MeleeWeaponPitchMax */
	uint8_t boolField288;
	uint8_t boolField289;
	uint8_t UnknownData28A[0x2];
	FLevelLoadingBoostParameters LevelLoadingBoostParameters; /* Ofs: 0x28C Size: 0x10 - StructProperty TslGame.TslSettings.LevelLoadingBoostParameters */
	uint8_t UnknownData29C[0x4];
	TArray<struct FString> ErangelIgnoreWeatherIds; /* Ofs: 0x2A0 Size: 0x10 - ArrayProperty TslGame.TslSettings.ErangelIgnoreWeatherIds */
	TArray<struct FNearClippingValue> NearClippingValues; /* Ofs: 0x2B0 Size: 0x10 - ArrayProperty TslGame.TslSettings.NearClippingValues */
	TArray<struct FCustomizableCategoryData> CustomizableCategoryData; /* Ofs: 0x2C0 Size: 0x10 - ArrayProperty TslGame.TslSettings.CustomizableCategoryData */
	TArray<struct FCustomizableActionName> CustomizableActionNames; /* Ofs: 0x2D0 Size: 0x10 - ArrayProperty TslGame.TslSettings.CustomizableActionNames */
	TArray<struct FCustomizableAxisName> CustomizableAxisNames; /* Ofs: 0x2E0 Size: 0x10 - ArrayProperty TslGame.TslSettings.CustomizableAxisNames */
	TArray<struct FCustomizableMouseSensitiveName> CustomizableMouseSensitiveNames; /* Ofs: 0x2F0 Size: 0x10 - ArrayProperty TslGame.TslSettings.CustomizableMouseSensitiveNames */
	TArray<struct FCustomizableGamePadSensitiveName> CustomizableGamePadSensitiveNames; /* Ofs: 0x300 Size: 0x10 - ArrayProperty TslGame.TslSettings.CustomizableGamePadSensitiveNames */
	TArray<struct FSurportQualityLevel> SupportedQualityLevels; /* Ofs: 0x310 Size: 0x10 - ArrayProperty TslGame.TslSettings.SupportedQualityLevels */
	TArray<struct FScreenResolution> SupportedScreenResolutions; /* Ofs: 0x320 Size: 0x10 - ArrayProperty TslGame.TslSettings.SupportedScreenResolutions */
	FStringAssetReference MouseSensitivityCurve; /* Ofs: 0x330 Size: 0x10 - StructProperty TslGame.TslSettings.MouseSensitivityCurve */
	FStringAssetReference GammaCurve; /* Ofs: 0x340 Size: 0x10 - StructProperty TslGame.TslSettings.GammaCurve */
	FStringAssetReference VibrationCurve; /* Ofs: 0x350 Size: 0x10 - StructProperty TslGame.TslSettings.VibrationCurve */
	FAimAcceleration GamePadAimAcceleration; /* Ofs: 0x360 Size: 0x8 - StructProperty TslGame.TslSettings.GamePadAimAcceleration */
	TArray<struct FColorBlindType> ColorBlindTypes; /* Ofs: 0x368 Size: 0x10 - ArrayProperty TslGame.TslSettings.ColorBlindTypes */
	TArray<struct FPresetColor> CrosshairColors; /* Ofs: 0x378 Size: 0x10 - ArrayProperty TslGame.TslSettings.CrosshairColors */
	TArray<struct FKeyInputModeName> KeyInputModeNames; /* Ofs: 0x388 Size: 0x10 - ArrayProperty TslGame.TslSettings.KeyInputModeNames */
	TArray<struct FUiType> MiniMapTypeList; /* Ofs: 0x398 Size: 0x10 - ArrayProperty TslGame.TslSettings.MiniMapTypeList */
	float MinimumScreenResolutionRatio; /* Ofs: 0x3A8 Size: 0x4 - FloatProperty TslGame.TslSettings.MinimumScreenResolutionRatio */
	FScreenResolution MinimumScreenResolution; /* Ofs: 0x3AC Size: 0x8 - StructProperty TslGame.TslSettings.MinimumScreenResolution */
	uint8_t UnknownData3B4[0x4];
	TArray<struct FTeamColorAndIcon> OverrideMarkerColorAndIcons; /* Ofs: 0x3B8 Size: 0x10 - ArrayProperty TslGame.TslSettings.OverrideMarkerColorAndIcons */
	FTeamColorAndIcon OverrideDefaultTeamMarkerColorAndIcons; /* Ofs: 0x3C8 Size: 0x38 - StructProperty TslGame.TslSettings.OverrideDefaultTeamMarkerColorAndIcons */
	float PunchClientHitLeeway_Attacker; /* Ofs: 0x400 Size: 0x4 - FloatProperty TslGame.TslSettings.PunchClientHitLeeway_Attacker */
	float PunchClientHitLeeway_Victim; /* Ofs: 0x404 Size: 0x4 - FloatProperty TslGame.TslSettings.PunchClientHitLeeway_Victim */
	float PunchClientHitLeeway_VictimInPlace; /* Ofs: 0x408 Size: 0x4 - FloatProperty TslGame.TslSettings.PunchClientHitLeeway_VictimInPlace */
	float MeleeClientHitLeeway_Attacker; /* Ofs: 0x40C Size: 0x4 - FloatProperty TslGame.TslSettings.MeleeClientHitLeeway_Attacker */
	float ClientSideHitLeeway; /* Ofs: 0x410 Size: 0x4 - FloatProperty TslGame.TslSettings.ClientSideHitLeeway */
	float ClientSideHitLeewayZ; /* Ofs: 0x414 Size: 0x4 - FloatProperty TslGame.TslSettings.ClientSideHitLeewayZ */
	float ClientSideHitLeewayInPlace; /* Ofs: 0x418 Size: 0x4 - FloatProperty TslGame.TslSettings.ClientSideHitLeewayInPlace */
	float LogClientSideHitLeeway; /* Ofs: 0x41C Size: 0x4 - FloatProperty TslGame.TslSettings.LogClientSideHitLeeway */
	float LogClientSideHitLeewayZ; /* Ofs: 0x420 Size: 0x4 - FloatProperty TslGame.TslSettings.LogClientSideHitLeewayZ */
	float ClientSideOriginDistanceLeeway; /* Ofs: 0x424 Size: 0x4 - FloatProperty TslGame.TslSettings.ClientSideOriginDistanceLeeway */
	float ClientSideOriginDistanceLeewayInPlace; /* Ofs: 0x428 Size: 0x4 - FloatProperty TslGame.TslSettings.ClientSideOriginDistanceLeewayInPlace */
	float TravelDistanceLeeway; /* Ofs: 0x42C Size: 0x4 - FloatProperty TslGame.TslSettings.TravelDistanceLeeway */
	float AllowedHitLag; /* Ofs: 0x430 Size: 0x4 - FloatProperty TslGame.TslSettings.AllowedHitLag */
	float LogMinHitLag; /* Ofs: 0x434 Size: 0x4 - FloatProperty TslGame.TslSettings.LogMinHitLag */
	float HackDetectionSpeed; /* Ofs: 0x438 Size: 0x4 - FloatProperty TslGame.TslSettings.HackDetectionSpeed */
	float HackDetectionSpeed_Crouch; /* Ofs: 0x43C Size: 0x4 - FloatProperty TslGame.TslSettings.HackDetectionSpeed_Crouch */
	float HackDetectionSpeed_Prone; /* Ofs: 0x440 Size: 0x4 - FloatProperty TslGame.TslSettings.HackDetectionSpeed_Prone */
	float InvalidRevivingMaxTime; /* Ofs: 0x444 Size: 0x4 - FloatProperty TslGame.TslSettings.InvalidRevivingMaxTime */
	TArray<struct FOverrideScalability> OverrideScalabilities; /* Ofs: 0x448 Size: 0x10 - ArrayProperty TslGame.TslSettings.OverrideScalabilities */
	float FakeDoorBlockMaxY; /* Ofs: 0x458 Size: 0x4 - FloatProperty TslGame.TslSettings.FakeDoorBlockMaxY */
	uint8_t UnknownData45C[0x4];
	TArray<struct FReportCauseData> ReportCauses; /* Ofs: 0x460 Size: 0x10 - ArrayProperty TslGame.TslSettings.ReportCauses */
	TArray<struct FSubjectToReport> SubjectToReport; /* Ofs: 0x470 Size: 0x10 - ArrayProperty TslGame.TslSettings.SubjectToReport */
	TArray<struct FReportDetailCauseTypeDescription> ReportDetailCauseTypeDescriptions; /* Ofs: 0x480 Size: 0x10 - ArrayProperty TslGame.TslSettings.ReportDetailCauseTypeDescriptions */
	float FreelookRecoveryInterpSpeed; /* Ofs: 0x490 Size: 0x4 - FloatProperty TslGame.TslSettings.FreelookRecoveryInterpSpeed */
	uint8_t UnknownData494[0x4];
	TMap<struct FName, float> GamepadSensitiveMultiplier; /* Ofs: 0x498 Size: 0x50 - MapProperty TslGame.TslSettings.GamepadSensitiveMultiplier */
	float GamePadInnerDeadZone; /* Ofs: 0x4E8 Size: 0x4 - FloatProperty TslGame.TslSettings.GamePadInnerDeadZone */
	float GamePadOutDeadZoneAcceleration; /* Ofs: 0x4EC Size: 0x4 - FloatProperty TslGame.TslSettings.GamePadOutDeadZoneAcceleration */
	float GamePadOutMaxAxisValue; /* Ofs: 0x4F0 Size: 0x4 - FloatProperty TslGame.TslSettings.GamePadOutMaxAxisValue */
	float GamePadAccelerationStandardFps; /* Ofs: 0x4F4 Size: 0x4 - FloatProperty TslGame.TslSettings.GamePadAccelerationStandardFps */
	TArray<struct FTslGamepadKeyPreset> GamepadKeyPresets; /* Ofs: 0x4F8 Size: 0x10 - ArrayProperty TslGame.TslSettings.GamepadKeyPresets */
	float AimAssistDecisionRadius; /* Ofs: 0x508 Size: 0x4 - FloatProperty TslGame.TslSettings.AimAssistDecisionRadius */
	uint8_t boolField50C;
	uint8_t boolField50D;
	uint8_t UnknownData50E[0x2];
	float InsensitiveZone; /* Ofs: 0x510 Size: 0x4 - FloatProperty TslGame.TslSettings.InsensitiveZone */
	uint8_t UnknownData514[0x4];
	TArray<struct FAimAssistData> AimCameraAssists; /* Ofs: 0x518 Size: 0x10 - ArrayProperty TslGame.TslSettings.AimCameraAssists */
	TArray<struct FAimAssistData> ADSCameraAssists; /* Ofs: 0x528 Size: 0x10 - ArrayProperty TslGame.TslSettings.ADSCameraAssists */
	TArray<struct FAimAssistData> Scope2XCameraAssists; /* Ofs: 0x538 Size: 0x10 - ArrayProperty TslGame.TslSettings.Scope2XCameraAssists */
	TArray<struct FAimAssistData> Scope4XCameraAssists; /* Ofs: 0x548 Size: 0x10 - ArrayProperty TslGame.TslSettings.Scope4XCameraAssists */
	TArray<struct FAimAssistData> Scope8XCameraAssists; /* Ofs: 0x558 Size: 0x10 - ArrayProperty TslGame.TslSettings.Scope8XCameraAssists */
	TArray<struct FAimAssistData> Scope15XCameraAssists; /* Ofs: 0x568 Size: 0x10 - ArrayProperty TslGame.TslSettings.Scope15XCameraAssists */
	uint8_t boolField578;
	uint8_t UnknownData579[0x7];
	FStringAssetReference DialogUMGWidgetClassStringAssetReference; /* Ofs: 0x580 Size: 0x10 - StructProperty TslGame.TslSettings.DialogUMGWidgetClassStringAssetReference */
	uint8_t UnknownData590[0x50];
	ExternalPtr<struct UCurveFloat> LoadedMouseSensitivityCurve; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty TslGame.TslSettings.LoadedMouseSensitivityCurve */
	ExternalPtr<struct UCurveFloat> LoadedGammaCurve; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty TslGame.TslSettings.LoadedGammaCurve */
	ExternalPtr<struct UCurveFloat> LoadedVibrationCurve; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty TslGame.TslSettings.LoadedVibrationCurve */
	ExternalPtr<struct UTextureRenderTarget2D> CharacterStudioRenderTarget; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty TslGame.TslSettings.CharacterStudioRenderTarget */
	ExternalPtr<struct UDataTable> LoadedWeaponSkinDB; /* Ofs: 0x600 Size: 0x8 - ObjectProperty TslGame.TslSettings.LoadedWeaponSkinDB */
	ExternalPtr<struct UDataTable> LoadedParachuteSkinDB; /* Ofs: 0x608 Size: 0x8 - ObjectProperty TslGame.TslSettings.LoadedParachuteSkinDB */
	TArray<struct FAnimatableCustomizableObjectData> AnimatableCustomizableDatas; /* Ofs: 0x610 Size: 0x10 - ArrayProperty TslGame.TslSettings.AnimatableCustomizableDatas */
	TMap<struct FName, float> NotifyDistanceLimitMap; /* Ofs: 0x620 Size: 0x50 - MapProperty TslGame.TslSettings.NotifyDistanceLimitMap */
	TArray<struct FOptionContentDesc> GamepadOptionList_Graphic; /* Ofs: 0x670 Size: 0x10 - ArrayProperty TslGame.TslSettings.GamepadOptionList_Graphic */
	TArray<struct FOptionContentDesc> GamepadOptionList_Sound; /* Ofs: 0x680 Size: 0x10 - ArrayProperty TslGame.TslSettings.GamepadOptionList_Sound */
	TArray<struct FOptionContentDesc> GamepadOptionList_Control; /* Ofs: 0x690 Size: 0x10 - ArrayProperty TslGame.TslSettings.GamepadOptionList_Control */
	TArray<struct FOptionContentDesc> GamepadOptionList_Gameplay; /* Ofs: 0x6A0 Size: 0x10 - ArrayProperty TslGame.TslSettings.GamepadOptionList_Gameplay */
	uint8_t boolField6B0;
	uint8_t UnknownData6B1[0x7];
	TArray<struct FName> TslFontStyles; /* Ofs: 0x6B8 Size: 0x10 - ArrayProperty TslGame.TslSettings.TslFontStyles */
	TArray<struct FLinearColor> TeamColors; /* Ofs: 0x6C8 Size: 0x10 - ArrayProperty TslGame.TslSettings.TeamColors */
	FLinearColor SoloColor; /* Ofs: 0x6D8 Size: 0x10 - StructProperty TslGame.TslSettings.SoloColor */


	inline bool SetObserverNetSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SupportedClientReplay()
	{
		return boolField34& 0x1;
	}
	inline bool SetSupportedClientReplay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SupportedKillcam()
	{
		return boolField35& 0x1;
	}
	inline bool SetSupportedKillcam(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x35, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStartServerRecording()
	{
		return boolField36& 0x1;
	}
	inline bool SetbStartServerRecording(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x36, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReportAvailableRecordDaysAgo(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetMaxReplaysForNullStreamer(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool SetRepDistance_Item(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetRepDistance_Character(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetRepDistance_Weapon(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetRepDistance_Vehicle(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetRepDistance_Parachute(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetRepDistance_Door(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetRepDistance_Window(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetRepFrequency_Character(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetRepFrequency_WheeledVehicle(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetRepFrequency_FloatingVehicle(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
	inline bool SetRepFrequency_Parachute(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool SetRepFrequency_Aircraft(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetRepFrequency_CarePackage(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetDemoMaxRecordHz_Character(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool SetDemoMaxRecordHz_WheeledVehicle(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
	inline bool SetDemoMaxRecordHz_FloatingVehicle(t_structHelper inst, float value) { inst.WriteOffset(0x7C, value); }
	inline bool SetRepVehicle_SpawnDistance(t_structHelper inst, float value) { inst.WriteOffset(0x80, value); }
	inline bool SetRepVehicle_UnspawnDistance(t_structHelper inst, float value) { inst.WriteOffset(0x84, value); }
	inline bool SetRepVehicle_PhysicErrorCorrection(t_structHelper inst, FRigidBodyErrorCorrection value) { inst.WriteOffset(0x88, value); }
	inline bool SetCharacterCorrection_MaxSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xA4, value); }
	inline bool SetCharacterCorrection_MaxSpeedPositionError(t_structHelper inst, float value) { inst.WriteOffset(0xA8, value); }
	inline bool SetCharacterCorrection_ZeroSpeedPositionError(t_structHelper inst, float value) { inst.WriteOffset(0xAC, value); }
	inline bool bBattlEyeEnabled()
	{
		return boolFieldB0& 0x1;
	}
	inline bool SetbBattlEyeEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bBattlEyeEnabledInPIE()
	{
		return boolFieldB1& 0x1;
	}
	inline bool SetbBattlEyeEnabledInPIE(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBattlEyeReliablePacketIntervalOnClient(t_structHelper inst, float value) { inst.WriteOffset(0xB4, value); }
	inline bool SetBattlEyeReliablePacketIntervalOnServer(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool bTPEnabled()
	{
		return boolFieldBC& 0x1;
	}
	inline bool SetbTPEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTPEnabledInPIE()
	{
		return boolFieldBD& 0x1;
	}
	inline bool SetbTPEnabledInPIE(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBD, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsWarMode()
	{
		return boolFieldBE& 0x1;
	}
	inline bool SetbIsWarMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBE, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bTPLaFPSUpdateStatus()
	{
		return boolFieldBF& 0x1;
	}
	inline bool SetbTPLaFPSUpdateStatus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBF, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTPLaFPSUpdateStatusPeriodInMs(t_structHelper inst, float value) { inst.WriteOffset(0xC0, value); }
	inline bool bChineseLicensing()
	{
		return boolFieldC4& 0x1;
	}
	inline bool SetbChineseLicensing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseGappLobby()
	{
		return boolFieldC5& 0x1;
	}
	inline bool SetbUseGappLobby(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGappLobbyUrl(t_structHelper inst, FString value) { inst.WriteOffset(0xC8, value); }
	inline bool bKoreanRating()
	{
		return boolFieldD8& 0x1;
	}
	inline bool SetbKoreanRating(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bKakao()
	{
		return boolFieldD9& 0x1;
	}
	inline bool SetbKakao(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bKakaoTest()
	{
		return boolFieldDA& 0x1;
	}
	inline bool SetbKakaoTest(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xDA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGameStateLogInterval(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
	inline bool SetServerStatLogInterval(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetCharacterPositionLogInterval(t_structHelper inst, float value) { inst.WriteOffset(0xE4, value); }
	inline bool SetDestructibleComponentMaxDrawDistance(t_structHelper inst, float value) { inst.WriteOffset(0xE8, value); }
	inline bool SetCharacterClassToPlay(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetBoneMapping(t_structHelper inst, TArray<struct FBoneBinding> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetTestVehicleClasses(t_structHelper inst, TArray<struct FStringAssetReference> value) { inst.WriteOffset(0x108, value); }
	inline bool SetTestFloatingVehicleClasses(t_structHelper inst, TArray<struct FStringAssetReference> value) { inst.WriteOffset(0x118, value); }
	inline bool SetChineseLicensingDefaultCustomizeData(t_structHelper inst, TArray<struct FChineseLicensingDefaultCustomizeData> value) { inst.WriteOffset(0x128, value); }
	inline bool SetStoppedWheeledVehicleSpeedThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x138, value); }
	inline bool SetStoppedFloatingVehicleSpeedThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x13C, value); }
	inline bool SetLastDriverDuration(t_structHelper inst, float value) { inst.WriteOffset(0x140, value); }
	inline bool SetSkinDataTableSet(t_structHelper inst, TMap<ESkinCategory, struct FStringAssetReference> value) { inst.WriteOffset(0x148, value); }
	inline bool SetLoadedSkinDB(t_structHelper inst, TMap<ESkinCategory, struct UDataTable> value) { inst.WriteOffset(0x198, value); }
	inline bool SetTestSkinClasses(t_structHelper inst, TArray<struct FStringAssetReference> value) { inst.WriteOffset(0x1E8, value); }
	inline bool bSupportedSkin()
	{
		return boolField1F8& 0x1;
	}
	inline bool SetbSupportedSkin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInteractableDistanceToleranceOnDedicatedServer(t_structHelper inst, float value) { inst.WriteOffset(0x1FC, value); }
	inline bool SetInteractableDistance_ItemDefault(t_structHelper inst, float value) { inst.WriteOffset(0x200, value); }
	inline bool SetInteractableSpeed_ItemDefault(t_structHelper inst, float value) { inst.WriteOffset(0x204, value); }
	inline bool SetInteractionCollisionForFPS(t_structHelper inst, FInteractionCollisionData value) { inst.WriteOffset(0x208, value); }
	inline bool SetInteractionCollisionForTPS(t_structHelper inst, FInteractionCollisionData value) { inst.WriteOffset(0x21C, value); }
	inline bool bPreventFinishMatchInPIE()
	{
		return boolField230& 0x1;
	}
	inline bool SetbPreventFinishMatchInPIE(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x230, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableInitialItemDonator()
	{
		return boolField231& 0x1;
	}
	inline bool SetbEnableInitialItemDonator(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x231, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInventoryMaxSpaceDefault(t_structHelper inst, float value) { inst.WriteOffset(0x234, value); }
	inline bool SetErrorIconTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x238, value); }
	inline bool SetLoadingIconTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x240, value); }
	inline bool SetAssetsForPackageIntegrity(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x248, value); }
	inline bool SetUICrosshairDistance(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
	inline bool SetUICrosshairInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x25C, value); }
	inline bool SetUICrosshairDisableDistance(t_structHelper inst, float value) { inst.WriteOffset(0x260, value); }
	inline bool SetBallisticDragScale(t_structHelper inst, float value) { inst.WriteOffset(0x264, value); }
	inline bool SetBallisticDropScale(t_structHelper inst, float value) { inst.WriteOffset(0x268, value); }
	inline bool SetBallisticMOAScale(t_structHelper inst, float value) { inst.WriteOffset(0x26C, value); }
	inline bool SetRecoilControlScale(t_structHelper inst, float value) { inst.WriteOffset(0x270, value); }
	inline bool SetRecoilAnimScale(t_structHelper inst, float value) { inst.WriteOffset(0x274, value); }
	inline bool SetGameTimeMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x278, value); }
	inline bool AimOffsetRayCast()
	{
		return boolField27C& 0x1;
	}
	inline bool SetAimOffsetRayCast(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x27C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMeleeWeaponPitchMin(t_structHelper inst, float value) { inst.WriteOffset(0x280, value); }
	inline bool SetMeleeWeaponPitchMax(t_structHelper inst, float value) { inst.WriteOffset(0x284, value); }
	inline bool EnableThrowLagCompensation()
	{
		return boolField288& 0x1;
	}
	inline bool SetEnableThrowLagCompensation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool FullRecoilRecovery()
	{
		return boolField289& 0x1;
	}
	inline bool SetFullRecoilRecovery(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x289, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLevelLoadingBoostParameters(t_structHelper inst, FLevelLoadingBoostParameters value) { inst.WriteOffset(0x28C, value); }
	inline bool SetErangelIgnoreWeatherIds(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetNearClippingValues(t_structHelper inst, TArray<struct FNearClippingValue> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetCustomizableCategoryData(t_structHelper inst, TArray<struct FCustomizableCategoryData> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetCustomizableActionNames(t_structHelper inst, TArray<struct FCustomizableActionName> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetCustomizableAxisNames(t_structHelper inst, TArray<struct FCustomizableAxisName> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetCustomizableMouseSensitiveNames(t_structHelper inst, TArray<struct FCustomizableMouseSensitiveName> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetCustomizableGamePadSensitiveNames(t_structHelper inst, TArray<struct FCustomizableGamePadSensitiveName> value) { inst.WriteOffset(0x300, value); }
	inline bool SetSupportedQualityLevels(t_structHelper inst, TArray<struct FSurportQualityLevel> value) { inst.WriteOffset(0x310, value); }
	inline bool SetSupportedScreenResolutions(t_structHelper inst, TArray<struct FScreenResolution> value) { inst.WriteOffset(0x320, value); }
	inline bool SetMouseSensitivityCurve(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x330, value); }
	inline bool SetGammaCurve(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x340, value); }
	inline bool SetVibrationCurve(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x350, value); }
	inline bool SetGamePadAimAcceleration(t_structHelper inst, FAimAcceleration value) { inst.WriteOffset(0x360, value); }
	inline bool SetColorBlindTypes(t_structHelper inst, TArray<struct FColorBlindType> value) { inst.WriteOffset(0x368, value); }
	inline bool SetCrosshairColors(t_structHelper inst, TArray<struct FPresetColor> value) { inst.WriteOffset(0x378, value); }
	inline bool SetKeyInputModeNames(t_structHelper inst, TArray<struct FKeyInputModeName> value) { inst.WriteOffset(0x388, value); }
	inline bool SetMiniMapTypeList(t_structHelper inst, TArray<struct FUiType> value) { inst.WriteOffset(0x398, value); }
	inline bool SetMinimumScreenResolutionRatio(t_structHelper inst, float value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetMinimumScreenResolution(t_structHelper inst, FScreenResolution value) { inst.WriteOffset(0x3AC, value); }
	inline bool SetOverrideMarkerColorAndIcons(t_structHelper inst, TArray<struct FTeamColorAndIcon> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetOverrideDefaultTeamMarkerColorAndIcons(t_structHelper inst, FTeamColorAndIcon value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetPunchClientHitLeeway_Attacker(t_structHelper inst, float value) { inst.WriteOffset(0x400, value); }
	inline bool SetPunchClientHitLeeway_Victim(t_structHelper inst, float value) { inst.WriteOffset(0x404, value); }
	inline bool SetPunchClientHitLeeway_VictimInPlace(t_structHelper inst, float value) { inst.WriteOffset(0x408, value); }
	inline bool SetMeleeClientHitLeeway_Attacker(t_structHelper inst, float value) { inst.WriteOffset(0x40C, value); }
	inline bool SetClientSideHitLeeway(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
	inline bool SetClientSideHitLeewayZ(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool SetClientSideHitLeewayInPlace(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetLogClientSideHitLeeway(t_structHelper inst, float value) { inst.WriteOffset(0x41C, value); }
	inline bool SetLogClientSideHitLeewayZ(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetClientSideOriginDistanceLeeway(t_structHelper inst, float value) { inst.WriteOffset(0x424, value); }
	inline bool SetClientSideOriginDistanceLeewayInPlace(t_structHelper inst, float value) { inst.WriteOffset(0x428, value); }
	inline bool SetTravelDistanceLeeway(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
	inline bool SetAllowedHitLag(t_structHelper inst, float value) { inst.WriteOffset(0x430, value); }
	inline bool SetLogMinHitLag(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool SetHackDetectionSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetHackDetectionSpeed_Crouch(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetHackDetectionSpeed_Prone(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetInvalidRevivingMaxTime(t_structHelper inst, float value) { inst.WriteOffset(0x444, value); }
	inline bool SetOverrideScalabilities(t_structHelper inst, TArray<struct FOverrideScalability> value) { inst.WriteOffset(0x448, value); }
	inline bool SetFakeDoorBlockMaxY(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool SetReportCauses(t_structHelper inst, TArray<struct FReportCauseData> value) { inst.WriteOffset(0x460, value); }
	inline bool SetSubjectToReport(t_structHelper inst, TArray<struct FSubjectToReport> value) { inst.WriteOffset(0x470, value); }
	inline bool SetReportDetailCauseTypeDescriptions(t_structHelper inst, TArray<struct FReportDetailCauseTypeDescription> value) { inst.WriteOffset(0x480, value); }
	inline bool SetFreelookRecoveryInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetGamepadSensitiveMultiplier(t_structHelper inst, TMap<struct FName, float> value) { inst.WriteOffset(0x498, value); }
	inline bool SetGamePadInnerDeadZone(t_structHelper inst, float value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetGamePadOutDeadZoneAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetGamePadOutMaxAxisValue(t_structHelper inst, float value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetGamePadAccelerationStandardFps(t_structHelper inst, float value) { inst.WriteOffset(0x4F4, value); }
	inline bool SetGamepadKeyPresets(t_structHelper inst, TArray<struct FTslGamepadKeyPreset> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetAimAssistDecisionRadius(t_structHelper inst, float value) { inst.WriteOffset(0x508, value); }
	inline bool bApplyInputValue()
	{
		return boolField50C& 0x1;
	}
	inline bool SetbApplyInputValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIgnorePadSensitive()
	{
		return boolField50D& 0x1;
	}
	inline bool SetbIgnorePadSensitive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInsensitiveZone(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool SetAimCameraAssists(t_structHelper inst, TArray<struct FAimAssistData> value) { inst.WriteOffset(0x518, value); }
	inline bool SetADSCameraAssists(t_structHelper inst, TArray<struct FAimAssistData> value) { inst.WriteOffset(0x528, value); }
	inline bool SetScope2XCameraAssists(t_structHelper inst, TArray<struct FAimAssistData> value) { inst.WriteOffset(0x538, value); }
	inline bool SetScope4XCameraAssists(t_structHelper inst, TArray<struct FAimAssistData> value) { inst.WriteOffset(0x548, value); }
	inline bool SetScope8XCameraAssists(t_structHelper inst, TArray<struct FAimAssistData> value) { inst.WriteOffset(0x558, value); }
	inline bool SetScope15XCameraAssists(t_structHelper inst, TArray<struct FAimAssistData> value) { inst.WriteOffset(0x568, value); }
	inline bool bIsESports()
	{
		return boolField578& 0x1;
	}
	inline bool SetbIsESports(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x578, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDialogUMGWidgetClassStringAssetReference(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x580, value); }
	inline bool SetLoadedMouseSensitivityCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetLoadedGammaCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetLoadedVibrationCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetCharacterStudioRenderTarget(t_structHelper inst, ExternalPtr<struct UTextureRenderTarget2D> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetLoadedWeaponSkinDB(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x600, value); }
	inline bool SetLoadedParachuteSkinDB(t_structHelper inst, ExternalPtr<struct UDataTable> value) { inst.WriteOffset(0x608, value); }
	inline bool SetAnimatableCustomizableDatas(t_structHelper inst, TArray<struct FAnimatableCustomizableObjectData> value) { inst.WriteOffset(0x610, value); }
	inline bool SetNotifyDistanceLimitMap(t_structHelper inst, TMap<struct FName, float> value) { inst.WriteOffset(0x620, value); }
	inline bool SetGamepadOptionList_Graphic(t_structHelper inst, TArray<struct FOptionContentDesc> value) { inst.WriteOffset(0x670, value); }
	inline bool SetGamepadOptionList_Sound(t_structHelper inst, TArray<struct FOptionContentDesc> value) { inst.WriteOffset(0x680, value); }
	inline bool SetGamepadOptionList_Control(t_structHelper inst, TArray<struct FOptionContentDesc> value) { inst.WriteOffset(0x690, value); }
	inline bool SetGamepadOptionList_Gameplay(t_structHelper inst, TArray<struct FOptionContentDesc> value) { inst.WriteOffset(0x6A0, value); }
	inline bool bTestShowAllOption()
	{
		return boolField6B0& 0x1;
	}
	inline bool SetbTestShowAllOption(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTslFontStyles(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetTeamColors(t_structHelper inst, TArray<struct FLinearColor> value) { inst.WriteOffset(0x6C8, value); }
	inline bool SetSoloColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x6D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSettings = sizeof(UTslSettings); // 1768
    static_assert(sizeof(UTslSettings) == 0x6E8, "Size of UTslSettings is not correct.");
	auto constexpr UTslSettings_ObserverNetSpeed_Offset = offsetof(UTslSettings, ObserverNetSpeed);
	static_assert(UTslSettings_ObserverNetSpeed_Offset == 0x30, "UTslSettings::ObserverNetSpeed offset is not 30");
	auto constexpr UTslSettings_boolField34_Offset = offsetof(UTslSettings, boolField34);
	static_assert(UTslSettings_boolField34_Offset == 0x34, "UTslSettings::boolField34 offset is not 34");
	auto constexpr UTslSettings_boolField35_Offset = offsetof(UTslSettings, boolField35);
	static_assert(UTslSettings_boolField35_Offset == 0x35, "UTslSettings::boolField35 offset is not 35");
	auto constexpr UTslSettings_boolField36_Offset = offsetof(UTslSettings, boolField36);
	static_assert(UTslSettings_boolField36_Offset == 0x36, "UTslSettings::boolField36 offset is not 36");
	auto constexpr UTslSettings_ReportAvailableRecordDaysAgo_Offset = offsetof(UTslSettings, ReportAvailableRecordDaysAgo);
	static_assert(UTslSettings_ReportAvailableRecordDaysAgo_Offset == 0x38, "UTslSettings::ReportAvailableRecordDaysAgo offset is not 38");
	auto constexpr UTslSettings_MaxReplaysForNullStreamer_Offset = offsetof(UTslSettings, MaxReplaysForNullStreamer);
	static_assert(UTslSettings_MaxReplaysForNullStreamer_Offset == 0x3c, "UTslSettings::MaxReplaysForNullStreamer offset is not 3c");
	auto constexpr UTslSettings_RepDistance_Item_Offset = offsetof(UTslSettings, RepDistance_Item);
	static_assert(UTslSettings_RepDistance_Item_Offset == 0x40, "UTslSettings::RepDistance_Item offset is not 40");
	auto constexpr UTslSettings_RepDistance_Character_Offset = offsetof(UTslSettings, RepDistance_Character);
	static_assert(UTslSettings_RepDistance_Character_Offset == 0x44, "UTslSettings::RepDistance_Character offset is not 44");
	auto constexpr UTslSettings_RepDistance_Weapon_Offset = offsetof(UTslSettings, RepDistance_Weapon);
	static_assert(UTslSettings_RepDistance_Weapon_Offset == 0x48, "UTslSettings::RepDistance_Weapon offset is not 48");
	auto constexpr UTslSettings_RepDistance_Vehicle_Offset = offsetof(UTslSettings, RepDistance_Vehicle);
	static_assert(UTslSettings_RepDistance_Vehicle_Offset == 0x4c, "UTslSettings::RepDistance_Vehicle offset is not 4c");
	auto constexpr UTslSettings_RepDistance_Parachute_Offset = offsetof(UTslSettings, RepDistance_Parachute);
	static_assert(UTslSettings_RepDistance_Parachute_Offset == 0x50, "UTslSettings::RepDistance_Parachute offset is not 50");
	auto constexpr UTslSettings_RepDistance_Door_Offset = offsetof(UTslSettings, RepDistance_Door);
	static_assert(UTslSettings_RepDistance_Door_Offset == 0x54, "UTslSettings::RepDistance_Door offset is not 54");
	auto constexpr UTslSettings_RepDistance_Window_Offset = offsetof(UTslSettings, RepDistance_Window);
	static_assert(UTslSettings_RepDistance_Window_Offset == 0x58, "UTslSettings::RepDistance_Window offset is not 58");
	auto constexpr UTslSettings_RepFrequency_Character_Offset = offsetof(UTslSettings, RepFrequency_Character);
	static_assert(UTslSettings_RepFrequency_Character_Offset == 0x5c, "UTslSettings::RepFrequency_Character offset is not 5c");
	auto constexpr UTslSettings_RepFrequency_WheeledVehicle_Offset = offsetof(UTslSettings, RepFrequency_WheeledVehicle);
	static_assert(UTslSettings_RepFrequency_WheeledVehicle_Offset == 0x60, "UTslSettings::RepFrequency_WheeledVehicle offset is not 60");
	auto constexpr UTslSettings_RepFrequency_FloatingVehicle_Offset = offsetof(UTslSettings, RepFrequency_FloatingVehicle);
	static_assert(UTslSettings_RepFrequency_FloatingVehicle_Offset == 0x64, "UTslSettings::RepFrequency_FloatingVehicle offset is not 64");
	auto constexpr UTslSettings_RepFrequency_Parachute_Offset = offsetof(UTslSettings, RepFrequency_Parachute);
	static_assert(UTslSettings_RepFrequency_Parachute_Offset == 0x68, "UTslSettings::RepFrequency_Parachute offset is not 68");
	auto constexpr UTslSettings_RepFrequency_Aircraft_Offset = offsetof(UTslSettings, RepFrequency_Aircraft);
	static_assert(UTslSettings_RepFrequency_Aircraft_Offset == 0x6c, "UTslSettings::RepFrequency_Aircraft offset is not 6c");
	auto constexpr UTslSettings_RepFrequency_CarePackage_Offset = offsetof(UTslSettings, RepFrequency_CarePackage);
	static_assert(UTslSettings_RepFrequency_CarePackage_Offset == 0x70, "UTslSettings::RepFrequency_CarePackage offset is not 70");
	auto constexpr UTslSettings_DemoMaxRecordHz_Character_Offset = offsetof(UTslSettings, DemoMaxRecordHz_Character);
	static_assert(UTslSettings_DemoMaxRecordHz_Character_Offset == 0x74, "UTslSettings::DemoMaxRecordHz_Character offset is not 74");
	auto constexpr UTslSettings_DemoMaxRecordHz_WheeledVehicle_Offset = offsetof(UTslSettings, DemoMaxRecordHz_WheeledVehicle);
	static_assert(UTslSettings_DemoMaxRecordHz_WheeledVehicle_Offset == 0x78, "UTslSettings::DemoMaxRecordHz_WheeledVehicle offset is not 78");
	auto constexpr UTslSettings_DemoMaxRecordHz_FloatingVehicle_Offset = offsetof(UTslSettings, DemoMaxRecordHz_FloatingVehicle);
	static_assert(UTslSettings_DemoMaxRecordHz_FloatingVehicle_Offset == 0x7c, "UTslSettings::DemoMaxRecordHz_FloatingVehicle offset is not 7c");
	auto constexpr UTslSettings_RepVehicle_SpawnDistance_Offset = offsetof(UTslSettings, RepVehicle_SpawnDistance);
	static_assert(UTslSettings_RepVehicle_SpawnDistance_Offset == 0x80, "UTslSettings::RepVehicle_SpawnDistance offset is not 80");
	auto constexpr UTslSettings_RepVehicle_UnspawnDistance_Offset = offsetof(UTslSettings, RepVehicle_UnspawnDistance);
	static_assert(UTslSettings_RepVehicle_UnspawnDistance_Offset == 0x84, "UTslSettings::RepVehicle_UnspawnDistance offset is not 84");
	auto constexpr UTslSettings_RepVehicle_PhysicErrorCorrection_Offset = offsetof(UTslSettings, RepVehicle_PhysicErrorCorrection);
	static_assert(UTslSettings_RepVehicle_PhysicErrorCorrection_Offset == 0x88, "UTslSettings::RepVehicle_PhysicErrorCorrection offset is not 88");
	auto constexpr UTslSettings_CharacterCorrection_MaxSpeed_Offset = offsetof(UTslSettings, CharacterCorrection_MaxSpeed);
	static_assert(UTslSettings_CharacterCorrection_MaxSpeed_Offset == 0xa4, "UTslSettings::CharacterCorrection_MaxSpeed offset is not a4");
	auto constexpr UTslSettings_CharacterCorrection_MaxSpeedPositionError_Offset = offsetof(UTslSettings, CharacterCorrection_MaxSpeedPositionError);
	static_assert(UTslSettings_CharacterCorrection_MaxSpeedPositionError_Offset == 0xa8, "UTslSettings::CharacterCorrection_MaxSpeedPositionError offset is not a8");
	auto constexpr UTslSettings_CharacterCorrection_ZeroSpeedPositionError_Offset = offsetof(UTslSettings, CharacterCorrection_ZeroSpeedPositionError);
	static_assert(UTslSettings_CharacterCorrection_ZeroSpeedPositionError_Offset == 0xac, "UTslSettings::CharacterCorrection_ZeroSpeedPositionError offset is not ac");
	auto constexpr UTslSettings_boolFieldB0_Offset = offsetof(UTslSettings, boolFieldB0);
	static_assert(UTslSettings_boolFieldB0_Offset == 0xb0, "UTslSettings::boolFieldB0 offset is not b0");
	auto constexpr UTslSettings_boolFieldB1_Offset = offsetof(UTslSettings, boolFieldB1);
	static_assert(UTslSettings_boolFieldB1_Offset == 0xb1, "UTslSettings::boolFieldB1 offset is not b1");
	auto constexpr UTslSettings_BattlEyeReliablePacketIntervalOnClient_Offset = offsetof(UTslSettings, BattlEyeReliablePacketIntervalOnClient);
	static_assert(UTslSettings_BattlEyeReliablePacketIntervalOnClient_Offset == 0xb4, "UTslSettings::BattlEyeReliablePacketIntervalOnClient offset is not b4");
	auto constexpr UTslSettings_BattlEyeReliablePacketIntervalOnServer_Offset = offsetof(UTslSettings, BattlEyeReliablePacketIntervalOnServer);
	static_assert(UTslSettings_BattlEyeReliablePacketIntervalOnServer_Offset == 0xb8, "UTslSettings::BattlEyeReliablePacketIntervalOnServer offset is not b8");
	auto constexpr UTslSettings_boolFieldBC_Offset = offsetof(UTslSettings, boolFieldBC);
	static_assert(UTslSettings_boolFieldBC_Offset == 0xbc, "UTslSettings::boolFieldBC offset is not bc");
	auto constexpr UTslSettings_boolFieldBD_Offset = offsetof(UTslSettings, boolFieldBD);
	static_assert(UTslSettings_boolFieldBD_Offset == 0xbd, "UTslSettings::boolFieldBD offset is not bd");
	auto constexpr UTslSettings_boolFieldBE_Offset = offsetof(UTslSettings, boolFieldBE);
	static_assert(UTslSettings_boolFieldBE_Offset == 0xbe, "UTslSettings::boolFieldBE offset is not be");
	auto constexpr UTslSettings_boolFieldBF_Offset = offsetof(UTslSettings, boolFieldBF);
	static_assert(UTslSettings_boolFieldBF_Offset == 0xbf, "UTslSettings::boolFieldBF offset is not bf");
	auto constexpr UTslSettings_TPLaFPSUpdateStatusPeriodInMs_Offset = offsetof(UTslSettings, TPLaFPSUpdateStatusPeriodInMs);
	static_assert(UTslSettings_TPLaFPSUpdateStatusPeriodInMs_Offset == 0xc0, "UTslSettings::TPLaFPSUpdateStatusPeriodInMs offset is not c0");
	auto constexpr UTslSettings_boolFieldC4_Offset = offsetof(UTslSettings, boolFieldC4);
	static_assert(UTslSettings_boolFieldC4_Offset == 0xc4, "UTslSettings::boolFieldC4 offset is not c4");
	auto constexpr UTslSettings_boolFieldC5_Offset = offsetof(UTslSettings, boolFieldC5);
	static_assert(UTslSettings_boolFieldC5_Offset == 0xc5, "UTslSettings::boolFieldC5 offset is not c5");
	auto constexpr UTslSettings_GappLobbyUrl_Offset = offsetof(UTslSettings, GappLobbyUrl);
	static_assert(UTslSettings_GappLobbyUrl_Offset == 0xc8, "UTslSettings::GappLobbyUrl offset is not c8");
	auto constexpr UTslSettings_boolFieldD8_Offset = offsetof(UTslSettings, boolFieldD8);
	static_assert(UTslSettings_boolFieldD8_Offset == 0xd8, "UTslSettings::boolFieldD8 offset is not d8");
	auto constexpr UTslSettings_boolFieldD9_Offset = offsetof(UTslSettings, boolFieldD9);
	static_assert(UTslSettings_boolFieldD9_Offset == 0xd9, "UTslSettings::boolFieldD9 offset is not d9");
	auto constexpr UTslSettings_boolFieldDA_Offset = offsetof(UTslSettings, boolFieldDA);
	static_assert(UTslSettings_boolFieldDA_Offset == 0xda, "UTslSettings::boolFieldDA offset is not da");
	auto constexpr UTslSettings_GameStateLogInterval_Offset = offsetof(UTslSettings, GameStateLogInterval);
	static_assert(UTslSettings_GameStateLogInterval_Offset == 0xdc, "UTslSettings::GameStateLogInterval offset is not dc");
	auto constexpr UTslSettings_ServerStatLogInterval_Offset = offsetof(UTslSettings, ServerStatLogInterval);
	static_assert(UTslSettings_ServerStatLogInterval_Offset == 0xe0, "UTslSettings::ServerStatLogInterval offset is not e0");
	auto constexpr UTslSettings_CharacterPositionLogInterval_Offset = offsetof(UTslSettings, CharacterPositionLogInterval);
	static_assert(UTslSettings_CharacterPositionLogInterval_Offset == 0xe4, "UTslSettings::CharacterPositionLogInterval offset is not e4");
	auto constexpr UTslSettings_DestructibleComponentMaxDrawDistance_Offset = offsetof(UTslSettings, DestructibleComponentMaxDrawDistance);
	static_assert(UTslSettings_DestructibleComponentMaxDrawDistance_Offset == 0xe8, "UTslSettings::DestructibleComponentMaxDrawDistance offset is not e8");
	auto constexpr UTslSettings_CharacterClassToPlay_Offset = offsetof(UTslSettings, CharacterClassToPlay);
	static_assert(UTslSettings_CharacterClassToPlay_Offset == 0xf0, "UTslSettings::CharacterClassToPlay offset is not f0");
	auto constexpr UTslSettings_BoneMapping_Offset = offsetof(UTslSettings, BoneMapping);
	static_assert(UTslSettings_BoneMapping_Offset == 0xf8, "UTslSettings::BoneMapping offset is not f8");
	auto constexpr UTslSettings_TestVehicleClasses_Offset = offsetof(UTslSettings, TestVehicleClasses);
	static_assert(UTslSettings_TestVehicleClasses_Offset == 0x108, "UTslSettings::TestVehicleClasses offset is not 108");
	auto constexpr UTslSettings_TestFloatingVehicleClasses_Offset = offsetof(UTslSettings, TestFloatingVehicleClasses);
	static_assert(UTslSettings_TestFloatingVehicleClasses_Offset == 0x118, "UTslSettings::TestFloatingVehicleClasses offset is not 118");
	auto constexpr UTslSettings_ChineseLicensingDefaultCustomizeData_Offset = offsetof(UTslSettings, ChineseLicensingDefaultCustomizeData);
	static_assert(UTslSettings_ChineseLicensingDefaultCustomizeData_Offset == 0x128, "UTslSettings::ChineseLicensingDefaultCustomizeData offset is not 128");
	auto constexpr UTslSettings_StoppedWheeledVehicleSpeedThreshold_Offset = offsetof(UTslSettings, StoppedWheeledVehicleSpeedThreshold);
	static_assert(UTslSettings_StoppedWheeledVehicleSpeedThreshold_Offset == 0x138, "UTslSettings::StoppedWheeledVehicleSpeedThreshold offset is not 138");
	auto constexpr UTslSettings_StoppedFloatingVehicleSpeedThreshold_Offset = offsetof(UTslSettings, StoppedFloatingVehicleSpeedThreshold);
	static_assert(UTslSettings_StoppedFloatingVehicleSpeedThreshold_Offset == 0x13c, "UTslSettings::StoppedFloatingVehicleSpeedThreshold offset is not 13c");
	auto constexpr UTslSettings_LastDriverDuration_Offset = offsetof(UTslSettings, LastDriverDuration);
	static_assert(UTslSettings_LastDriverDuration_Offset == 0x140, "UTslSettings::LastDriverDuration offset is not 140");
	auto constexpr UTslSettings_SkinDataTableSet_Offset = offsetof(UTslSettings, SkinDataTableSet);
	static_assert(UTslSettings_SkinDataTableSet_Offset == 0x148, "UTslSettings::SkinDataTableSet offset is not 148");
	auto constexpr UTslSettings_LoadedSkinDB_Offset = offsetof(UTslSettings, LoadedSkinDB);
	static_assert(UTslSettings_LoadedSkinDB_Offset == 0x198, "UTslSettings::LoadedSkinDB offset is not 198");
	auto constexpr UTslSettings_TestSkinClasses_Offset = offsetof(UTslSettings, TestSkinClasses);
	static_assert(UTslSettings_TestSkinClasses_Offset == 0x1e8, "UTslSettings::TestSkinClasses offset is not 1e8");
	auto constexpr UTslSettings_boolField1F8_Offset = offsetof(UTslSettings, boolField1F8);
	static_assert(UTslSettings_boolField1F8_Offset == 0x1f8, "UTslSettings::boolField1F8 offset is not 1f8");
	auto constexpr UTslSettings_InteractableDistanceToleranceOnDedicatedServer_Offset = offsetof(UTslSettings, InteractableDistanceToleranceOnDedicatedServer);
	static_assert(UTslSettings_InteractableDistanceToleranceOnDedicatedServer_Offset == 0x1fc, "UTslSettings::InteractableDistanceToleranceOnDedicatedServer offset is not 1fc");
	auto constexpr UTslSettings_InteractableDistance_ItemDefault_Offset = offsetof(UTslSettings, InteractableDistance_ItemDefault);
	static_assert(UTslSettings_InteractableDistance_ItemDefault_Offset == 0x200, "UTslSettings::InteractableDistance_ItemDefault offset is not 200");
	auto constexpr UTslSettings_InteractableSpeed_ItemDefault_Offset = offsetof(UTslSettings, InteractableSpeed_ItemDefault);
	static_assert(UTslSettings_InteractableSpeed_ItemDefault_Offset == 0x204, "UTslSettings::InteractableSpeed_ItemDefault offset is not 204");
	auto constexpr UTslSettings_InteractionCollisionForFPS_Offset = offsetof(UTslSettings, InteractionCollisionForFPS);
	static_assert(UTslSettings_InteractionCollisionForFPS_Offset == 0x208, "UTslSettings::InteractionCollisionForFPS offset is not 208");
	auto constexpr UTslSettings_InteractionCollisionForTPS_Offset = offsetof(UTslSettings, InteractionCollisionForTPS);
	static_assert(UTslSettings_InteractionCollisionForTPS_Offset == 0x21c, "UTslSettings::InteractionCollisionForTPS offset is not 21c");
	auto constexpr UTslSettings_boolField230_Offset = offsetof(UTslSettings, boolField230);
	static_assert(UTslSettings_boolField230_Offset == 0x230, "UTslSettings::boolField230 offset is not 230");
	auto constexpr UTslSettings_boolField231_Offset = offsetof(UTslSettings, boolField231);
	static_assert(UTslSettings_boolField231_Offset == 0x231, "UTslSettings::boolField231 offset is not 231");
	auto constexpr UTslSettings_InventoryMaxSpaceDefault_Offset = offsetof(UTslSettings, InventoryMaxSpaceDefault);
	static_assert(UTslSettings_InventoryMaxSpaceDefault_Offset == 0x234, "UTslSettings::InventoryMaxSpaceDefault offset is not 234");
	auto constexpr UTslSettings_ErrorIconTexture_Offset = offsetof(UTslSettings, ErrorIconTexture);
	static_assert(UTslSettings_ErrorIconTexture_Offset == 0x238, "UTslSettings::ErrorIconTexture offset is not 238");
	auto constexpr UTslSettings_LoadingIconTexture_Offset = offsetof(UTslSettings, LoadingIconTexture);
	static_assert(UTslSettings_LoadingIconTexture_Offset == 0x240, "UTslSettings::LoadingIconTexture offset is not 240");
	auto constexpr UTslSettings_AssetsForPackageIntegrity_Offset = offsetof(UTslSettings, AssetsForPackageIntegrity);
	static_assert(UTslSettings_AssetsForPackageIntegrity_Offset == 0x248, "UTslSettings::AssetsForPackageIntegrity offset is not 248");
	auto constexpr UTslSettings_UICrosshairDistance_Offset = offsetof(UTslSettings, UICrosshairDistance);
	static_assert(UTslSettings_UICrosshairDistance_Offset == 0x258, "UTslSettings::UICrosshairDistance offset is not 258");
	auto constexpr UTslSettings_UICrosshairInterpSpeed_Offset = offsetof(UTslSettings, UICrosshairInterpSpeed);
	static_assert(UTslSettings_UICrosshairInterpSpeed_Offset == 0x25c, "UTslSettings::UICrosshairInterpSpeed offset is not 25c");
	auto constexpr UTslSettings_UICrosshairDisableDistance_Offset = offsetof(UTslSettings, UICrosshairDisableDistance);
	static_assert(UTslSettings_UICrosshairDisableDistance_Offset == 0x260, "UTslSettings::UICrosshairDisableDistance offset is not 260");
	auto constexpr UTslSettings_BallisticDragScale_Offset = offsetof(UTslSettings, BallisticDragScale);
	static_assert(UTslSettings_BallisticDragScale_Offset == 0x264, "UTslSettings::BallisticDragScale offset is not 264");
	auto constexpr UTslSettings_BallisticDropScale_Offset = offsetof(UTslSettings, BallisticDropScale);
	static_assert(UTslSettings_BallisticDropScale_Offset == 0x268, "UTslSettings::BallisticDropScale offset is not 268");
	auto constexpr UTslSettings_BallisticMOAScale_Offset = offsetof(UTslSettings, BallisticMOAScale);
	static_assert(UTslSettings_BallisticMOAScale_Offset == 0x26c, "UTslSettings::BallisticMOAScale offset is not 26c");
	auto constexpr UTslSettings_RecoilControlScale_Offset = offsetof(UTslSettings, RecoilControlScale);
	static_assert(UTslSettings_RecoilControlScale_Offset == 0x270, "UTslSettings::RecoilControlScale offset is not 270");
	auto constexpr UTslSettings_RecoilAnimScale_Offset = offsetof(UTslSettings, RecoilAnimScale);
	static_assert(UTslSettings_RecoilAnimScale_Offset == 0x274, "UTslSettings::RecoilAnimScale offset is not 274");
	auto constexpr UTslSettings_GameTimeMultiplier_Offset = offsetof(UTslSettings, GameTimeMultiplier);
	static_assert(UTslSettings_GameTimeMultiplier_Offset == 0x278, "UTslSettings::GameTimeMultiplier offset is not 278");
	auto constexpr UTslSettings_boolField27C_Offset = offsetof(UTslSettings, boolField27C);
	static_assert(UTslSettings_boolField27C_Offset == 0x27c, "UTslSettings::boolField27C offset is not 27c");
	auto constexpr UTslSettings_MeleeWeaponPitchMin_Offset = offsetof(UTslSettings, MeleeWeaponPitchMin);
	static_assert(UTslSettings_MeleeWeaponPitchMin_Offset == 0x280, "UTslSettings::MeleeWeaponPitchMin offset is not 280");
	auto constexpr UTslSettings_MeleeWeaponPitchMax_Offset = offsetof(UTslSettings, MeleeWeaponPitchMax);
	static_assert(UTslSettings_MeleeWeaponPitchMax_Offset == 0x284, "UTslSettings::MeleeWeaponPitchMax offset is not 284");
	auto constexpr UTslSettings_boolField288_Offset = offsetof(UTslSettings, boolField288);
	static_assert(UTslSettings_boolField288_Offset == 0x288, "UTslSettings::boolField288 offset is not 288");
	auto constexpr UTslSettings_boolField289_Offset = offsetof(UTslSettings, boolField289);
	static_assert(UTslSettings_boolField289_Offset == 0x289, "UTslSettings::boolField289 offset is not 289");
	auto constexpr UTslSettings_LevelLoadingBoostParameters_Offset = offsetof(UTslSettings, LevelLoadingBoostParameters);
	static_assert(UTslSettings_LevelLoadingBoostParameters_Offset == 0x28c, "UTslSettings::LevelLoadingBoostParameters offset is not 28c");
	auto constexpr UTslSettings_ErangelIgnoreWeatherIds_Offset = offsetof(UTslSettings, ErangelIgnoreWeatherIds);
	static_assert(UTslSettings_ErangelIgnoreWeatherIds_Offset == 0x2a0, "UTslSettings::ErangelIgnoreWeatherIds offset is not 2a0");
	auto constexpr UTslSettings_NearClippingValues_Offset = offsetof(UTslSettings, NearClippingValues);
	static_assert(UTslSettings_NearClippingValues_Offset == 0x2b0, "UTslSettings::NearClippingValues offset is not 2b0");
	auto constexpr UTslSettings_CustomizableCategoryData_Offset = offsetof(UTslSettings, CustomizableCategoryData);
	static_assert(UTslSettings_CustomizableCategoryData_Offset == 0x2c0, "UTslSettings::CustomizableCategoryData offset is not 2c0");
	auto constexpr UTslSettings_CustomizableActionNames_Offset = offsetof(UTslSettings, CustomizableActionNames);
	static_assert(UTslSettings_CustomizableActionNames_Offset == 0x2d0, "UTslSettings::CustomizableActionNames offset is not 2d0");
	auto constexpr UTslSettings_CustomizableAxisNames_Offset = offsetof(UTslSettings, CustomizableAxisNames);
	static_assert(UTslSettings_CustomizableAxisNames_Offset == 0x2e0, "UTslSettings::CustomizableAxisNames offset is not 2e0");
	auto constexpr UTslSettings_CustomizableMouseSensitiveNames_Offset = offsetof(UTslSettings, CustomizableMouseSensitiveNames);
	static_assert(UTslSettings_CustomizableMouseSensitiveNames_Offset == 0x2f0, "UTslSettings::CustomizableMouseSensitiveNames offset is not 2f0");
	auto constexpr UTslSettings_CustomizableGamePadSensitiveNames_Offset = offsetof(UTslSettings, CustomizableGamePadSensitiveNames);
	static_assert(UTslSettings_CustomizableGamePadSensitiveNames_Offset == 0x300, "UTslSettings::CustomizableGamePadSensitiveNames offset is not 300");
	auto constexpr UTslSettings_SupportedQualityLevels_Offset = offsetof(UTslSettings, SupportedQualityLevels);
	static_assert(UTslSettings_SupportedQualityLevels_Offset == 0x310, "UTslSettings::SupportedQualityLevels offset is not 310");
	auto constexpr UTslSettings_SupportedScreenResolutions_Offset = offsetof(UTslSettings, SupportedScreenResolutions);
	static_assert(UTslSettings_SupportedScreenResolutions_Offset == 0x320, "UTslSettings::SupportedScreenResolutions offset is not 320");
	auto constexpr UTslSettings_MouseSensitivityCurve_Offset = offsetof(UTslSettings, MouseSensitivityCurve);
	static_assert(UTslSettings_MouseSensitivityCurve_Offset == 0x330, "UTslSettings::MouseSensitivityCurve offset is not 330");
	auto constexpr UTslSettings_GammaCurve_Offset = offsetof(UTslSettings, GammaCurve);
	static_assert(UTslSettings_GammaCurve_Offset == 0x340, "UTslSettings::GammaCurve offset is not 340");
	auto constexpr UTslSettings_VibrationCurve_Offset = offsetof(UTslSettings, VibrationCurve);
	static_assert(UTslSettings_VibrationCurve_Offset == 0x350, "UTslSettings::VibrationCurve offset is not 350");
	auto constexpr UTslSettings_GamePadAimAcceleration_Offset = offsetof(UTslSettings, GamePadAimAcceleration);
	static_assert(UTslSettings_GamePadAimAcceleration_Offset == 0x360, "UTslSettings::GamePadAimAcceleration offset is not 360");
	auto constexpr UTslSettings_ColorBlindTypes_Offset = offsetof(UTslSettings, ColorBlindTypes);
	static_assert(UTslSettings_ColorBlindTypes_Offset == 0x368, "UTslSettings::ColorBlindTypes offset is not 368");
	auto constexpr UTslSettings_CrosshairColors_Offset = offsetof(UTslSettings, CrosshairColors);
	static_assert(UTslSettings_CrosshairColors_Offset == 0x378, "UTslSettings::CrosshairColors offset is not 378");
	auto constexpr UTslSettings_KeyInputModeNames_Offset = offsetof(UTslSettings, KeyInputModeNames);
	static_assert(UTslSettings_KeyInputModeNames_Offset == 0x388, "UTslSettings::KeyInputModeNames offset is not 388");
	auto constexpr UTslSettings_MiniMapTypeList_Offset = offsetof(UTslSettings, MiniMapTypeList);
	static_assert(UTslSettings_MiniMapTypeList_Offset == 0x398, "UTslSettings::MiniMapTypeList offset is not 398");
	auto constexpr UTslSettings_MinimumScreenResolutionRatio_Offset = offsetof(UTslSettings, MinimumScreenResolutionRatio);
	static_assert(UTslSettings_MinimumScreenResolutionRatio_Offset == 0x3a8, "UTslSettings::MinimumScreenResolutionRatio offset is not 3a8");
	auto constexpr UTslSettings_MinimumScreenResolution_Offset = offsetof(UTslSettings, MinimumScreenResolution);
	static_assert(UTslSettings_MinimumScreenResolution_Offset == 0x3ac, "UTslSettings::MinimumScreenResolution offset is not 3ac");
	auto constexpr UTslSettings_OverrideMarkerColorAndIcons_Offset = offsetof(UTslSettings, OverrideMarkerColorAndIcons);
	static_assert(UTslSettings_OverrideMarkerColorAndIcons_Offset == 0x3b8, "UTslSettings::OverrideMarkerColorAndIcons offset is not 3b8");
	auto constexpr UTslSettings_OverrideDefaultTeamMarkerColorAndIcons_Offset = offsetof(UTslSettings, OverrideDefaultTeamMarkerColorAndIcons);
	static_assert(UTslSettings_OverrideDefaultTeamMarkerColorAndIcons_Offset == 0x3c8, "UTslSettings::OverrideDefaultTeamMarkerColorAndIcons offset is not 3c8");
	auto constexpr UTslSettings_PunchClientHitLeeway_Attacker_Offset = offsetof(UTslSettings, PunchClientHitLeeway_Attacker);
	static_assert(UTslSettings_PunchClientHitLeeway_Attacker_Offset == 0x400, "UTslSettings::PunchClientHitLeeway_Attacker offset is not 400");
	auto constexpr UTslSettings_PunchClientHitLeeway_Victim_Offset = offsetof(UTslSettings, PunchClientHitLeeway_Victim);
	static_assert(UTslSettings_PunchClientHitLeeway_Victim_Offset == 0x404, "UTslSettings::PunchClientHitLeeway_Victim offset is not 404");
	auto constexpr UTslSettings_PunchClientHitLeeway_VictimInPlace_Offset = offsetof(UTslSettings, PunchClientHitLeeway_VictimInPlace);
	static_assert(UTslSettings_PunchClientHitLeeway_VictimInPlace_Offset == 0x408, "UTslSettings::PunchClientHitLeeway_VictimInPlace offset is not 408");
	auto constexpr UTslSettings_MeleeClientHitLeeway_Attacker_Offset = offsetof(UTslSettings, MeleeClientHitLeeway_Attacker);
	static_assert(UTslSettings_MeleeClientHitLeeway_Attacker_Offset == 0x40c, "UTslSettings::MeleeClientHitLeeway_Attacker offset is not 40c");
	auto constexpr UTslSettings_ClientSideHitLeeway_Offset = offsetof(UTslSettings, ClientSideHitLeeway);
	static_assert(UTslSettings_ClientSideHitLeeway_Offset == 0x410, "UTslSettings::ClientSideHitLeeway offset is not 410");
	auto constexpr UTslSettings_ClientSideHitLeewayZ_Offset = offsetof(UTslSettings, ClientSideHitLeewayZ);
	static_assert(UTslSettings_ClientSideHitLeewayZ_Offset == 0x414, "UTslSettings::ClientSideHitLeewayZ offset is not 414");
	auto constexpr UTslSettings_ClientSideHitLeewayInPlace_Offset = offsetof(UTslSettings, ClientSideHitLeewayInPlace);
	static_assert(UTslSettings_ClientSideHitLeewayInPlace_Offset == 0x418, "UTslSettings::ClientSideHitLeewayInPlace offset is not 418");
	auto constexpr UTslSettings_LogClientSideHitLeeway_Offset = offsetof(UTslSettings, LogClientSideHitLeeway);
	static_assert(UTslSettings_LogClientSideHitLeeway_Offset == 0x41c, "UTslSettings::LogClientSideHitLeeway offset is not 41c");
	auto constexpr UTslSettings_LogClientSideHitLeewayZ_Offset = offsetof(UTslSettings, LogClientSideHitLeewayZ);
	static_assert(UTslSettings_LogClientSideHitLeewayZ_Offset == 0x420, "UTslSettings::LogClientSideHitLeewayZ offset is not 420");
	auto constexpr UTslSettings_ClientSideOriginDistanceLeeway_Offset = offsetof(UTslSettings, ClientSideOriginDistanceLeeway);
	static_assert(UTslSettings_ClientSideOriginDistanceLeeway_Offset == 0x424, "UTslSettings::ClientSideOriginDistanceLeeway offset is not 424");
	auto constexpr UTslSettings_ClientSideOriginDistanceLeewayInPlace_Offset = offsetof(UTslSettings, ClientSideOriginDistanceLeewayInPlace);
	static_assert(UTslSettings_ClientSideOriginDistanceLeewayInPlace_Offset == 0x428, "UTslSettings::ClientSideOriginDistanceLeewayInPlace offset is not 428");
	auto constexpr UTslSettings_TravelDistanceLeeway_Offset = offsetof(UTslSettings, TravelDistanceLeeway);
	static_assert(UTslSettings_TravelDistanceLeeway_Offset == 0x42c, "UTslSettings::TravelDistanceLeeway offset is not 42c");
	auto constexpr UTslSettings_AllowedHitLag_Offset = offsetof(UTslSettings, AllowedHitLag);
	static_assert(UTslSettings_AllowedHitLag_Offset == 0x430, "UTslSettings::AllowedHitLag offset is not 430");
	auto constexpr UTslSettings_LogMinHitLag_Offset = offsetof(UTslSettings, LogMinHitLag);
	static_assert(UTslSettings_LogMinHitLag_Offset == 0x434, "UTslSettings::LogMinHitLag offset is not 434");
	auto constexpr UTslSettings_HackDetectionSpeed_Offset = offsetof(UTslSettings, HackDetectionSpeed);
	static_assert(UTslSettings_HackDetectionSpeed_Offset == 0x438, "UTslSettings::HackDetectionSpeed offset is not 438");
	auto constexpr UTslSettings_HackDetectionSpeed_Crouch_Offset = offsetof(UTslSettings, HackDetectionSpeed_Crouch);
	static_assert(UTslSettings_HackDetectionSpeed_Crouch_Offset == 0x43c, "UTslSettings::HackDetectionSpeed_Crouch offset is not 43c");
	auto constexpr UTslSettings_HackDetectionSpeed_Prone_Offset = offsetof(UTslSettings, HackDetectionSpeed_Prone);
	static_assert(UTslSettings_HackDetectionSpeed_Prone_Offset == 0x440, "UTslSettings::HackDetectionSpeed_Prone offset is not 440");
	auto constexpr UTslSettings_InvalidRevivingMaxTime_Offset = offsetof(UTslSettings, InvalidRevivingMaxTime);
	static_assert(UTslSettings_InvalidRevivingMaxTime_Offset == 0x444, "UTslSettings::InvalidRevivingMaxTime offset is not 444");
	auto constexpr UTslSettings_OverrideScalabilities_Offset = offsetof(UTslSettings, OverrideScalabilities);
	static_assert(UTslSettings_OverrideScalabilities_Offset == 0x448, "UTslSettings::OverrideScalabilities offset is not 448");
	auto constexpr UTslSettings_FakeDoorBlockMaxY_Offset = offsetof(UTslSettings, FakeDoorBlockMaxY);
	static_assert(UTslSettings_FakeDoorBlockMaxY_Offset == 0x458, "UTslSettings::FakeDoorBlockMaxY offset is not 458");
	auto constexpr UTslSettings_ReportCauses_Offset = offsetof(UTslSettings, ReportCauses);
	static_assert(UTslSettings_ReportCauses_Offset == 0x460, "UTslSettings::ReportCauses offset is not 460");
	auto constexpr UTslSettings_SubjectToReport_Offset = offsetof(UTslSettings, SubjectToReport);
	static_assert(UTslSettings_SubjectToReport_Offset == 0x470, "UTslSettings::SubjectToReport offset is not 470");
	auto constexpr UTslSettings_ReportDetailCauseTypeDescriptions_Offset = offsetof(UTslSettings, ReportDetailCauseTypeDescriptions);
	static_assert(UTslSettings_ReportDetailCauseTypeDescriptions_Offset == 0x480, "UTslSettings::ReportDetailCauseTypeDescriptions offset is not 480");
	auto constexpr UTslSettings_FreelookRecoveryInterpSpeed_Offset = offsetof(UTslSettings, FreelookRecoveryInterpSpeed);
	static_assert(UTslSettings_FreelookRecoveryInterpSpeed_Offset == 0x490, "UTslSettings::FreelookRecoveryInterpSpeed offset is not 490");
	auto constexpr UTslSettings_GamepadSensitiveMultiplier_Offset = offsetof(UTslSettings, GamepadSensitiveMultiplier);
	static_assert(UTslSettings_GamepadSensitiveMultiplier_Offset == 0x498, "UTslSettings::GamepadSensitiveMultiplier offset is not 498");
	auto constexpr UTslSettings_GamePadInnerDeadZone_Offset = offsetof(UTslSettings, GamePadInnerDeadZone);
	static_assert(UTslSettings_GamePadInnerDeadZone_Offset == 0x4e8, "UTslSettings::GamePadInnerDeadZone offset is not 4e8");
	auto constexpr UTslSettings_GamePadOutDeadZoneAcceleration_Offset = offsetof(UTslSettings, GamePadOutDeadZoneAcceleration);
	static_assert(UTslSettings_GamePadOutDeadZoneAcceleration_Offset == 0x4ec, "UTslSettings::GamePadOutDeadZoneAcceleration offset is not 4ec");
	auto constexpr UTslSettings_GamePadOutMaxAxisValue_Offset = offsetof(UTslSettings, GamePadOutMaxAxisValue);
	static_assert(UTslSettings_GamePadOutMaxAxisValue_Offset == 0x4f0, "UTslSettings::GamePadOutMaxAxisValue offset is not 4f0");
	auto constexpr UTslSettings_GamePadAccelerationStandardFps_Offset = offsetof(UTslSettings, GamePadAccelerationStandardFps);
	static_assert(UTslSettings_GamePadAccelerationStandardFps_Offset == 0x4f4, "UTslSettings::GamePadAccelerationStandardFps offset is not 4f4");
	auto constexpr UTslSettings_GamepadKeyPresets_Offset = offsetof(UTslSettings, GamepadKeyPresets);
	static_assert(UTslSettings_GamepadKeyPresets_Offset == 0x4f8, "UTslSettings::GamepadKeyPresets offset is not 4f8");
	auto constexpr UTslSettings_AimAssistDecisionRadius_Offset = offsetof(UTslSettings, AimAssistDecisionRadius);
	static_assert(UTslSettings_AimAssistDecisionRadius_Offset == 0x508, "UTslSettings::AimAssistDecisionRadius offset is not 508");
	auto constexpr UTslSettings_boolField50C_Offset = offsetof(UTslSettings, boolField50C);
	static_assert(UTslSettings_boolField50C_Offset == 0x50c, "UTslSettings::boolField50C offset is not 50c");
	auto constexpr UTslSettings_boolField50D_Offset = offsetof(UTslSettings, boolField50D);
	static_assert(UTslSettings_boolField50D_Offset == 0x50d, "UTslSettings::boolField50D offset is not 50d");
	auto constexpr UTslSettings_InsensitiveZone_Offset = offsetof(UTslSettings, InsensitiveZone);
	static_assert(UTslSettings_InsensitiveZone_Offset == 0x510, "UTslSettings::InsensitiveZone offset is not 510");
	auto constexpr UTslSettings_AimCameraAssists_Offset = offsetof(UTslSettings, AimCameraAssists);
	static_assert(UTslSettings_AimCameraAssists_Offset == 0x518, "UTslSettings::AimCameraAssists offset is not 518");
	auto constexpr UTslSettings_ADSCameraAssists_Offset = offsetof(UTslSettings, ADSCameraAssists);
	static_assert(UTslSettings_ADSCameraAssists_Offset == 0x528, "UTslSettings::ADSCameraAssists offset is not 528");
	auto constexpr UTslSettings_Scope2XCameraAssists_Offset = offsetof(UTslSettings, Scope2XCameraAssists);
	static_assert(UTslSettings_Scope2XCameraAssists_Offset == 0x538, "UTslSettings::Scope2XCameraAssists offset is not 538");
	auto constexpr UTslSettings_Scope4XCameraAssists_Offset = offsetof(UTslSettings, Scope4XCameraAssists);
	static_assert(UTslSettings_Scope4XCameraAssists_Offset == 0x548, "UTslSettings::Scope4XCameraAssists offset is not 548");
	auto constexpr UTslSettings_Scope8XCameraAssists_Offset = offsetof(UTslSettings, Scope8XCameraAssists);
	static_assert(UTslSettings_Scope8XCameraAssists_Offset == 0x558, "UTslSettings::Scope8XCameraAssists offset is not 558");
	auto constexpr UTslSettings_Scope15XCameraAssists_Offset = offsetof(UTslSettings, Scope15XCameraAssists);
	static_assert(UTslSettings_Scope15XCameraAssists_Offset == 0x568, "UTslSettings::Scope15XCameraAssists offset is not 568");
	auto constexpr UTslSettings_boolField578_Offset = offsetof(UTslSettings, boolField578);
	static_assert(UTslSettings_boolField578_Offset == 0x578, "UTslSettings::boolField578 offset is not 578");
	auto constexpr UTslSettings_DialogUMGWidgetClassStringAssetReference_Offset = offsetof(UTslSettings, DialogUMGWidgetClassStringAssetReference);
	static_assert(UTslSettings_DialogUMGWidgetClassStringAssetReference_Offset == 0x580, "UTslSettings::DialogUMGWidgetClassStringAssetReference offset is not 580");
	auto constexpr UTslSettings_LoadedMouseSensitivityCurve_Offset = offsetof(UTslSettings, LoadedMouseSensitivityCurve);
	static_assert(UTslSettings_LoadedMouseSensitivityCurve_Offset == 0x5e0, "UTslSettings::LoadedMouseSensitivityCurve offset is not 5e0");
	auto constexpr UTslSettings_LoadedGammaCurve_Offset = offsetof(UTslSettings, LoadedGammaCurve);
	static_assert(UTslSettings_LoadedGammaCurve_Offset == 0x5e8, "UTslSettings::LoadedGammaCurve offset is not 5e8");
	auto constexpr UTslSettings_LoadedVibrationCurve_Offset = offsetof(UTslSettings, LoadedVibrationCurve);
	static_assert(UTslSettings_LoadedVibrationCurve_Offset == 0x5f0, "UTslSettings::LoadedVibrationCurve offset is not 5f0");
	auto constexpr UTslSettings_CharacterStudioRenderTarget_Offset = offsetof(UTslSettings, CharacterStudioRenderTarget);
	static_assert(UTslSettings_CharacterStudioRenderTarget_Offset == 0x5f8, "UTslSettings::CharacterStudioRenderTarget offset is not 5f8");
	auto constexpr UTslSettings_LoadedWeaponSkinDB_Offset = offsetof(UTslSettings, LoadedWeaponSkinDB);
	static_assert(UTslSettings_LoadedWeaponSkinDB_Offset == 0x600, "UTslSettings::LoadedWeaponSkinDB offset is not 600");
	auto constexpr UTslSettings_LoadedParachuteSkinDB_Offset = offsetof(UTslSettings, LoadedParachuteSkinDB);
	static_assert(UTslSettings_LoadedParachuteSkinDB_Offset == 0x608, "UTslSettings::LoadedParachuteSkinDB offset is not 608");
	auto constexpr UTslSettings_AnimatableCustomizableDatas_Offset = offsetof(UTslSettings, AnimatableCustomizableDatas);
	static_assert(UTslSettings_AnimatableCustomizableDatas_Offset == 0x610, "UTslSettings::AnimatableCustomizableDatas offset is not 610");
	auto constexpr UTslSettings_NotifyDistanceLimitMap_Offset = offsetof(UTslSettings, NotifyDistanceLimitMap);
	static_assert(UTslSettings_NotifyDistanceLimitMap_Offset == 0x620, "UTslSettings::NotifyDistanceLimitMap offset is not 620");
	auto constexpr UTslSettings_GamepadOptionList_Graphic_Offset = offsetof(UTslSettings, GamepadOptionList_Graphic);
	static_assert(UTslSettings_GamepadOptionList_Graphic_Offset == 0x670, "UTslSettings::GamepadOptionList_Graphic offset is not 670");
	auto constexpr UTslSettings_GamepadOptionList_Sound_Offset = offsetof(UTslSettings, GamepadOptionList_Sound);
	static_assert(UTslSettings_GamepadOptionList_Sound_Offset == 0x680, "UTslSettings::GamepadOptionList_Sound offset is not 680");
	auto constexpr UTslSettings_GamepadOptionList_Control_Offset = offsetof(UTslSettings, GamepadOptionList_Control);
	static_assert(UTslSettings_GamepadOptionList_Control_Offset == 0x690, "UTslSettings::GamepadOptionList_Control offset is not 690");
	auto constexpr UTslSettings_GamepadOptionList_Gameplay_Offset = offsetof(UTslSettings, GamepadOptionList_Gameplay);
	static_assert(UTslSettings_GamepadOptionList_Gameplay_Offset == 0x6a0, "UTslSettings::GamepadOptionList_Gameplay offset is not 6a0");
	auto constexpr UTslSettings_boolField6B0_Offset = offsetof(UTslSettings, boolField6B0);
	static_assert(UTslSettings_boolField6B0_Offset == 0x6b0, "UTslSettings::boolField6B0 offset is not 6b0");
	auto constexpr UTslSettings_TslFontStyles_Offset = offsetof(UTslSettings, TslFontStyles);
	static_assert(UTslSettings_TslFontStyles_Offset == 0x6b8, "UTslSettings::TslFontStyles offset is not 6b8");
	auto constexpr UTslSettings_TeamColors_Offset = offsetof(UTslSettings, TeamColors);
	static_assert(UTslSettings_TeamColors_Offset == 0x6c8, "UTslSettings::TeamColors offset is not 6c8");
	auto constexpr UTslSettings_SoloColor_Offset = offsetof(UTslSettings, SoloColor);
	static_assert(UTslSettings_SoloColor_Offset == 0x6d8, "UTslSettings::SoloColor offset is not 6d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
