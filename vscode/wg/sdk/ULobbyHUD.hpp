#pragma once
#include "UTslHUD.hpp"
#include "ELobbyCameraStates.hpp"
#include "FRotator.hpp"
#include "FLightingChannels.hpp"
#include "FFloatInterval.hpp"
#include "FTimerHandle.hpp"
#include "ELobbyBlurChangingStates.hpp"
#include "FViewTargetTransitionParams.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyHUD // Size: 0xDB0
	: public UTslHUD // Size: 0xB20
{
private:
	typedef ULobbyHUD t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1322); // id32("Class TslGame.LobbyHUD")
		return ptr;
	}
	FScriptMulticastDelegate OnShowCurtain; /* Ofs: 0xB20 Size: 0x10 - MulticastDelegateProperty TslGame.LobbyHUD.OnShowCurtain */
	FScriptMulticastDelegate OnHideCurtain; /* Ofs: 0xB30 Size: 0x10 - MulticastDelegateProperty TslGame.LobbyHUD.OnHideCurtain */
	FScriptMulticastDelegate OnRequestSystemMenu; /* Ofs: 0xB40 Size: 0x10 - MulticastDelegateProperty TslGame.LobbyHUD.OnRequestSystemMenu */
	uint8_t UnknownDataB50[0x8];
	ExternalPtr<struct UCurveFloat> CameraTransitionCurve; /* Ofs: 0xB58 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.CameraTransitionCurve */
	float CameraTransitionElapsedTime; /* Ofs: 0xB60 Size: 0x4 - FloatProperty TslGame.LobbyHUD.CameraTransitionElapsedTime */
	uint8_t boolFieldB64;
	TEnumAsByte<enum ELobbyCameraStates> LastCameraState; /* Ofs: 0xB65 Size: 0x1 - EnumProperty TslGame.LobbyHUD.LastCameraState */
	TEnumAsByte<enum ELobbyCameraStates> FromCameraState; /* Ofs: 0xB66 Size: 0x1 - EnumProperty TslGame.LobbyHUD.FromCameraState */
	TEnumAsByte<enum ELobbyCameraStates> ToCameraState; /* Ofs: 0xB67 Size: 0x1 - EnumProperty TslGame.LobbyHUD.ToCameraState */
	TMap<int32_t, struct UCameraActor> LobbyCameras; /* Ofs: 0xB68 Size: 0x50 - MapProperty TslGame.LobbyHUD.LobbyCameras */
	FName MainMenuStreamingLevelName; /* Ofs: 0xBB8 Size: 0x8 - NameProperty TslGame.LobbyHUD.MainMenuStreamingLevelName */
	FName CustomizationStreamingLevelName; /* Ofs: 0xBC0 Size: 0x8 - NameProperty TslGame.LobbyHUD.CustomizationStreamingLevelName */
	TArray<struct FTransform> CachedLobbyCharacterTransforms; /* Ofs: 0xBC8 Size: 0x10 - ArrayProperty TslGame.LobbyHUD.CachedLobbyCharacterTransforms */
	uint8_t boolFieldBD8;
	uint8_t UnknownDataBD9[0x7];
	ExternalPtr<struct UClass> ViewModeStudioClass; /* Ofs: 0xBE0 Size: 0x8 - ClassProperty TslGame.LobbyHUD.ViewModeStudioClass */
	FName CameraSocketName; /* Ofs: 0xBE8 Size: 0x8 - NameProperty TslGame.LobbyHUD.CameraSocketName */
	float ViewModeInterpSpeed; /* Ofs: 0xBF0 Size: 0x4 - FloatProperty TslGame.LobbyHUD.ViewModeInterpSpeed */
	uint8_t UnknownDataBF4[0x4];
	ExternalPtr<struct UViewModeStudio> ViewModeStudio; /* Ofs: 0xBF8 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.ViewModeStudio */
	ExternalPtr<struct UActor> ViewModeActor; /* Ofs: 0xC00 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.ViewModeActor */
	ExternalPtr<struct UMeshComponent> VIewModeMeshCom; /* Ofs: 0xC08 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.VIewModeMeshCom */
	ExternalPtr<struct UActor> CachedViewModePivot; /* Ofs: 0xC10 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.CachedViewModePivot */
	FRotator ViewModeCurrentRotation; /* Ofs: 0xC18 Size: 0xC - StructProperty TslGame.LobbyHUD.ViewModeCurrentRotation */
	FRotator ViewModeTargetRotation; /* Ofs: 0xC24 Size: 0xC - StructProperty TslGame.LobbyHUD.ViewModeTargetRotation */
	float ViewModeCurrentScale; /* Ofs: 0xC30 Size: 0x4 - FloatProperty TslGame.LobbyHUD.ViewModeCurrentScale */
	float ViewModeTargetScale; /* Ofs: 0xC34 Size: 0x4 - FloatProperty TslGame.LobbyHUD.ViewModeTargetScale */
	FLightingChannels ViewModeLightingChannels; /* Ofs: 0xC38 Size: 0x3 - StructProperty TslGame.LobbyHUD.ViewModeLightingChannels */
	uint8_t UnknownDataC3B[0x1];
	FFloatInterval ViewModeScaleRange; /* Ofs: 0xC3C Size: 0x8 - StructProperty TslGame.LobbyHUD.ViewModeScaleRange */
	float MaxRotationValue; /* Ofs: 0xC44 Size: 0x4 - FloatProperty TslGame.LobbyHUD.MaxRotationValue */
	float ComputeValue; /* Ofs: 0xC48 Size: 0x4 - FloatProperty TslGame.LobbyHUD.ComputeValue */
	uint8_t UnknownDataC4C[0x4];
	ExternalPtr<struct UCurveFloat> FadeInOutCurve; /* Ofs: 0xC50 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.FadeInOutCurve */
	ExternalPtr<struct UTslPostProcessEffect> LobbyPPE; /* Ofs: 0xC58 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.LobbyPPE */
	float FadeInOutEffectElapsedTime; /* Ofs: 0xC60 Size: 0x4 - FloatProperty TslGame.LobbyHUD.FadeInOutEffectElapsedTime */
	uint8_t boolFieldC64;
	uint8_t UnknownDataC65[0x3];
	FTimerHandle TimerHandle_FadeInOut; /* Ofs: 0xC68 Size: 0x8 - StructProperty TslGame.LobbyHUD.TimerHandle_FadeInOut */
	ExternalPtr<struct UTslPostProcessEffect> MainMenuPPE; /* Ofs: 0xC70 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.MainMenuPPE */
	float CachedDOFFarBlueSize; /* Ofs: 0xC78 Size: 0x4 - FloatProperty TslGame.LobbyHUD.CachedDOFFarBlueSize */
	TEnumAsByte<enum ELobbyBlurChangingStates> BlurChangingState; /* Ofs: 0xC7C Size: 0x1 - EnumProperty TslGame.LobbyHUD.BlurChangingState */
	uint8_t boolFieldC7D;
	uint8_t UnknownDataC7E[0x2];
	int32_t RollbackStreamingBoost; /* Ofs: 0xC80 Size: 0x4 - IntProperty TslGame.LobbyHUD.RollbackStreamingBoost */
	uint8_t UnknownDataC84[0x4];
	FScriptMulticastDelegate OnCreateCharacter; /* Ofs: 0xC88 Size: 0x10 - MulticastDelegateProperty TslGame.LobbyHUD.OnCreateCharacter */
	FScriptMulticastDelegate OnDestroyCharacter; /* Ofs: 0xC98 Size: 0x10 - MulticastDelegateProperty TslGame.LobbyHUD.OnDestroyCharacter */
	FString StartURL; /* Ofs: 0xCA8 Size: 0x10 - StrProperty TslGame.LobbyHUD.StartURL */
	TArray<ExternalPtr<struct UCoherentCommonBinder>> CommonBinders; /* Ofs: 0xCB8 Size: 0x10 - ArrayProperty TslGame.LobbyHUD.CommonBinders */
	ExternalPtr<struct UAkComponent> AkSound; /* Ofs: 0xCC8 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.AkSound */
	ExternalPtr<struct UCameraActor> MainCamera; /* Ofs: 0xCD0 Size: 0x8 - ObjectProperty TslGame.LobbyHUD.MainCamera */
	uint8_t UnknownDataCD8[0x20];
	TAssetPtr<ExternalPtr<struct UClass>> LobbyCharacterMaleClass; /* Ofs: 0xCF8 Size: 0x1C - AssetClassProperty TslGame.LobbyHUD.LobbyCharacterMaleClass */
	uint8_t UnknownDataD14[0x4];
	TAssetPtr<ExternalPtr<struct UClass>> LobbyCharacterFemaleClass; /* Ofs: 0xD18 Size: 0x1C - AssetClassProperty TslGame.LobbyHUD.LobbyCharacterFemaleClass */
	uint8_t UnknownDataD34[0x54];
	FViewTargetTransitionParams ViewTargetTransitionParams; /* Ofs: 0xD88 Size: 0x10 - StructProperty TslGame.LobbyHUD.ViewTargetTransitionParams */
	uint8_t UnknownDataD98[0x18];


	inline bool SetOnShowCurtain(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xB20, value); }
	inline bool SetOnHideCurtain(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xB30, value); }
	inline bool SetOnRequestSystemMenu(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xB40, value); }
	inline bool SetCameraTransitionCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xB58, value); }
	inline bool SetCameraTransitionElapsedTime(t_structHelper inst, float value) { inst.WriteOffset(0xB60, value); }
	inline bool bIsCameraTransitionPlaying()
	{
		return boolFieldB64& 0x1;
	}
	inline bool SetbIsCameraTransitionPlaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB64, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLastCameraState(t_structHelper inst, TEnumAsByte<enum ELobbyCameraStates> value) { inst.WriteOffset(0xB65, value); }
	inline bool SetFromCameraState(t_structHelper inst, TEnumAsByte<enum ELobbyCameraStates> value) { inst.WriteOffset(0xB66, value); }
	inline bool SetToCameraState(t_structHelper inst, TEnumAsByte<enum ELobbyCameraStates> value) { inst.WriteOffset(0xB67, value); }
	inline bool SetLobbyCameras(t_structHelper inst, TMap<int32_t, struct UCameraActor> value) { inst.WriteOffset(0xB68, value); }
	inline bool SetMainMenuStreamingLevelName(t_structHelper inst, FName value) { inst.WriteOffset(0xBB8, value); }
	inline bool SetCustomizationStreamingLevelName(t_structHelper inst, FName value) { inst.WriteOffset(0xBC0, value); }
	inline bool SetCachedLobbyCharacterTransforms(t_structHelper inst, TArray<struct FTransform> value) { inst.WriteOffset(0xBC8, value); }
	inline bool bIsInCustomizationScene()
	{
		return boolFieldBD8& 0x1;
	}
	inline bool SetbIsInCustomizationScene(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBD8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetViewModeStudioClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xBE0, value); }
	inline bool SetCameraSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0xBE8, value); }
	inline bool SetViewModeInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xBF0, value); }
	inline bool SetViewModeStudio(t_structHelper inst, ExternalPtr<struct UViewModeStudio> value) { inst.WriteOffset(0xBF8, value); }
	inline bool SetViewModeActor(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0xC00, value); }
	inline bool SetVIewModeMeshCom(t_structHelper inst, ExternalPtr<struct UMeshComponent> value) { inst.WriteOffset(0xC08, value); }
	inline bool SetCachedViewModePivot(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0xC10, value); }
	inline bool SetViewModeCurrentRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0xC18, value); }
	inline bool SetViewModeTargetRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0xC24, value); }
	inline bool SetViewModeCurrentScale(t_structHelper inst, float value) { inst.WriteOffset(0xC30, value); }
	inline bool SetViewModeTargetScale(t_structHelper inst, float value) { inst.WriteOffset(0xC34, value); }
	inline bool SetViewModeLightingChannels(t_structHelper inst, FLightingChannels value) { inst.WriteOffset(0xC38, value); }
	inline bool SetViewModeScaleRange(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0xC3C, value); }
	inline bool SetMaxRotationValue(t_structHelper inst, float value) { inst.WriteOffset(0xC44, value); }
	inline bool SetComputeValue(t_structHelper inst, float value) { inst.WriteOffset(0xC48, value); }
	inline bool SetFadeInOutCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0xC50, value); }
	inline bool SetLobbyPPE(t_structHelper inst, ExternalPtr<struct UTslPostProcessEffect> value) { inst.WriteOffset(0xC58, value); }
	inline bool SetFadeInOutEffectElapsedTime(t_structHelper inst, float value) { inst.WriteOffset(0xC60, value); }
	inline bool bIsFadeInOutEffectPlaying()
	{
		return boolFieldC64& 0x1;
	}
	inline bool SetbIsFadeInOutEffectPlaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC64, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTimerHandle_FadeInOut(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0xC68, value); }
	inline bool SetMainMenuPPE(t_structHelper inst, ExternalPtr<struct UTslPostProcessEffect> value) { inst.WriteOffset(0xC70, value); }
	inline bool SetCachedDOFFarBlueSize(t_structHelper inst, float value) { inst.WriteOffset(0xC78, value); }
	inline bool SetBlurChangingState(t_structHelper inst, TEnumAsByte<enum ELobbyBlurChangingStates> value) { inst.WriteOffset(0xC7C, value); }
	inline bool bInitCameraTransition()
	{
		return boolFieldC7D& 0x1;
	}
	inline bool SetbInitCameraTransition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC7D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRollbackStreamingBoost(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC80, value); }
	inline bool SetOnCreateCharacter(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xC88, value); }
	inline bool SetOnDestroyCharacter(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xC98, value); }
	inline bool SetStartURL(t_structHelper inst, FString value) { inst.WriteOffset(0xCA8, value); }
	inline bool SetCommonBinders(t_structHelper inst, TArray<ExternalPtr<struct UCoherentCommonBinder>> value) { inst.WriteOffset(0xCB8, value); }
	inline bool SetAkSound(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0xCC8, value); }
	inline bool SetMainCamera(t_structHelper inst, ExternalPtr<struct UCameraActor> value) { inst.WriteOffset(0xCD0, value); }
	inline bool SetLobbyCharacterMaleClass(t_structHelper inst, TAssetPtr<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0xCF8, value); }
	inline bool SetLobbyCharacterFemaleClass(t_structHelper inst, TAssetPtr<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0xD18, value); }
	inline bool SetViewTargetTransitionParams(t_structHelper inst, FViewTargetTransitionParams value) { inst.WriteOffset(0xD88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyHUD = sizeof(ULobbyHUD); // 3504
    static_assert(sizeof(ULobbyHUD) == 0xDB0, "Size of ULobbyHUD is not correct.");
	auto constexpr ULobbyHUD_OnShowCurtain_Offset = offsetof(ULobbyHUD, OnShowCurtain);
	static_assert(ULobbyHUD_OnShowCurtain_Offset == 0xb20, "ULobbyHUD::OnShowCurtain offset is not b20");
	auto constexpr ULobbyHUD_OnHideCurtain_Offset = offsetof(ULobbyHUD, OnHideCurtain);
	static_assert(ULobbyHUD_OnHideCurtain_Offset == 0xb30, "ULobbyHUD::OnHideCurtain offset is not b30");
	auto constexpr ULobbyHUD_OnRequestSystemMenu_Offset = offsetof(ULobbyHUD, OnRequestSystemMenu);
	static_assert(ULobbyHUD_OnRequestSystemMenu_Offset == 0xb40, "ULobbyHUD::OnRequestSystemMenu offset is not b40");
	auto constexpr ULobbyHUD_CameraTransitionCurve_Offset = offsetof(ULobbyHUD, CameraTransitionCurve);
	static_assert(ULobbyHUD_CameraTransitionCurve_Offset == 0xb58, "ULobbyHUD::CameraTransitionCurve offset is not b58");
	auto constexpr ULobbyHUD_CameraTransitionElapsedTime_Offset = offsetof(ULobbyHUD, CameraTransitionElapsedTime);
	static_assert(ULobbyHUD_CameraTransitionElapsedTime_Offset == 0xb60, "ULobbyHUD::CameraTransitionElapsedTime offset is not b60");
	auto constexpr ULobbyHUD_boolFieldB64_Offset = offsetof(ULobbyHUD, boolFieldB64);
	static_assert(ULobbyHUD_boolFieldB64_Offset == 0xb64, "ULobbyHUD::boolFieldB64 offset is not b64");
	auto constexpr ULobbyHUD_LastCameraState_Offset = offsetof(ULobbyHUD, LastCameraState);
	static_assert(ULobbyHUD_LastCameraState_Offset == 0xb65, "ULobbyHUD::LastCameraState offset is not b65");
	auto constexpr ULobbyHUD_FromCameraState_Offset = offsetof(ULobbyHUD, FromCameraState);
	static_assert(ULobbyHUD_FromCameraState_Offset == 0xb66, "ULobbyHUD::FromCameraState offset is not b66");
	auto constexpr ULobbyHUD_ToCameraState_Offset = offsetof(ULobbyHUD, ToCameraState);
	static_assert(ULobbyHUD_ToCameraState_Offset == 0xb67, "ULobbyHUD::ToCameraState offset is not b67");
	auto constexpr ULobbyHUD_LobbyCameras_Offset = offsetof(ULobbyHUD, LobbyCameras);
	static_assert(ULobbyHUD_LobbyCameras_Offset == 0xb68, "ULobbyHUD::LobbyCameras offset is not b68");
	auto constexpr ULobbyHUD_MainMenuStreamingLevelName_Offset = offsetof(ULobbyHUD, MainMenuStreamingLevelName);
	static_assert(ULobbyHUD_MainMenuStreamingLevelName_Offset == 0xbb8, "ULobbyHUD::MainMenuStreamingLevelName offset is not bb8");
	auto constexpr ULobbyHUD_CustomizationStreamingLevelName_Offset = offsetof(ULobbyHUD, CustomizationStreamingLevelName);
	static_assert(ULobbyHUD_CustomizationStreamingLevelName_Offset == 0xbc0, "ULobbyHUD::CustomizationStreamingLevelName offset is not bc0");
	auto constexpr ULobbyHUD_CachedLobbyCharacterTransforms_Offset = offsetof(ULobbyHUD, CachedLobbyCharacterTransforms);
	static_assert(ULobbyHUD_CachedLobbyCharacterTransforms_Offset == 0xbc8, "ULobbyHUD::CachedLobbyCharacterTransforms offset is not bc8");
	auto constexpr ULobbyHUD_boolFieldBD8_Offset = offsetof(ULobbyHUD, boolFieldBD8);
	static_assert(ULobbyHUD_boolFieldBD8_Offset == 0xbd8, "ULobbyHUD::boolFieldBD8 offset is not bd8");
	auto constexpr ULobbyHUD_ViewModeStudioClass_Offset = offsetof(ULobbyHUD, ViewModeStudioClass);
	static_assert(ULobbyHUD_ViewModeStudioClass_Offset == 0xbe0, "ULobbyHUD::ViewModeStudioClass offset is not be0");
	auto constexpr ULobbyHUD_CameraSocketName_Offset = offsetof(ULobbyHUD, CameraSocketName);
	static_assert(ULobbyHUD_CameraSocketName_Offset == 0xbe8, "ULobbyHUD::CameraSocketName offset is not be8");
	auto constexpr ULobbyHUD_ViewModeInterpSpeed_Offset = offsetof(ULobbyHUD, ViewModeInterpSpeed);
	static_assert(ULobbyHUD_ViewModeInterpSpeed_Offset == 0xbf0, "ULobbyHUD::ViewModeInterpSpeed offset is not bf0");
	auto constexpr ULobbyHUD_ViewModeStudio_Offset = offsetof(ULobbyHUD, ViewModeStudio);
	static_assert(ULobbyHUD_ViewModeStudio_Offset == 0xbf8, "ULobbyHUD::ViewModeStudio offset is not bf8");
	auto constexpr ULobbyHUD_ViewModeActor_Offset = offsetof(ULobbyHUD, ViewModeActor);
	static_assert(ULobbyHUD_ViewModeActor_Offset == 0xc00, "ULobbyHUD::ViewModeActor offset is not c00");
	auto constexpr ULobbyHUD_VIewModeMeshCom_Offset = offsetof(ULobbyHUD, VIewModeMeshCom);
	static_assert(ULobbyHUD_VIewModeMeshCom_Offset == 0xc08, "ULobbyHUD::VIewModeMeshCom offset is not c08");
	auto constexpr ULobbyHUD_CachedViewModePivot_Offset = offsetof(ULobbyHUD, CachedViewModePivot);
	static_assert(ULobbyHUD_CachedViewModePivot_Offset == 0xc10, "ULobbyHUD::CachedViewModePivot offset is not c10");
	auto constexpr ULobbyHUD_ViewModeCurrentRotation_Offset = offsetof(ULobbyHUD, ViewModeCurrentRotation);
	static_assert(ULobbyHUD_ViewModeCurrentRotation_Offset == 0xc18, "ULobbyHUD::ViewModeCurrentRotation offset is not c18");
	auto constexpr ULobbyHUD_ViewModeTargetRotation_Offset = offsetof(ULobbyHUD, ViewModeTargetRotation);
	static_assert(ULobbyHUD_ViewModeTargetRotation_Offset == 0xc24, "ULobbyHUD::ViewModeTargetRotation offset is not c24");
	auto constexpr ULobbyHUD_ViewModeCurrentScale_Offset = offsetof(ULobbyHUD, ViewModeCurrentScale);
	static_assert(ULobbyHUD_ViewModeCurrentScale_Offset == 0xc30, "ULobbyHUD::ViewModeCurrentScale offset is not c30");
	auto constexpr ULobbyHUD_ViewModeTargetScale_Offset = offsetof(ULobbyHUD, ViewModeTargetScale);
	static_assert(ULobbyHUD_ViewModeTargetScale_Offset == 0xc34, "ULobbyHUD::ViewModeTargetScale offset is not c34");
	auto constexpr ULobbyHUD_ViewModeLightingChannels_Offset = offsetof(ULobbyHUD, ViewModeLightingChannels);
	static_assert(ULobbyHUD_ViewModeLightingChannels_Offset == 0xc38, "ULobbyHUD::ViewModeLightingChannels offset is not c38");
	auto constexpr ULobbyHUD_ViewModeScaleRange_Offset = offsetof(ULobbyHUD, ViewModeScaleRange);
	static_assert(ULobbyHUD_ViewModeScaleRange_Offset == 0xc3c, "ULobbyHUD::ViewModeScaleRange offset is not c3c");
	auto constexpr ULobbyHUD_MaxRotationValue_Offset = offsetof(ULobbyHUD, MaxRotationValue);
	static_assert(ULobbyHUD_MaxRotationValue_Offset == 0xc44, "ULobbyHUD::MaxRotationValue offset is not c44");
	auto constexpr ULobbyHUD_ComputeValue_Offset = offsetof(ULobbyHUD, ComputeValue);
	static_assert(ULobbyHUD_ComputeValue_Offset == 0xc48, "ULobbyHUD::ComputeValue offset is not c48");
	auto constexpr ULobbyHUD_FadeInOutCurve_Offset = offsetof(ULobbyHUD, FadeInOutCurve);
	static_assert(ULobbyHUD_FadeInOutCurve_Offset == 0xc50, "ULobbyHUD::FadeInOutCurve offset is not c50");
	auto constexpr ULobbyHUD_LobbyPPE_Offset = offsetof(ULobbyHUD, LobbyPPE);
	static_assert(ULobbyHUD_LobbyPPE_Offset == 0xc58, "ULobbyHUD::LobbyPPE offset is not c58");
	auto constexpr ULobbyHUD_FadeInOutEffectElapsedTime_Offset = offsetof(ULobbyHUD, FadeInOutEffectElapsedTime);
	static_assert(ULobbyHUD_FadeInOutEffectElapsedTime_Offset == 0xc60, "ULobbyHUD::FadeInOutEffectElapsedTime offset is not c60");
	auto constexpr ULobbyHUD_boolFieldC64_Offset = offsetof(ULobbyHUD, boolFieldC64);
	static_assert(ULobbyHUD_boolFieldC64_Offset == 0xc64, "ULobbyHUD::boolFieldC64 offset is not c64");
	auto constexpr ULobbyHUD_TimerHandle_FadeInOut_Offset = offsetof(ULobbyHUD, TimerHandle_FadeInOut);
	static_assert(ULobbyHUD_TimerHandle_FadeInOut_Offset == 0xc68, "ULobbyHUD::TimerHandle_FadeInOut offset is not c68");
	auto constexpr ULobbyHUD_MainMenuPPE_Offset = offsetof(ULobbyHUD, MainMenuPPE);
	static_assert(ULobbyHUD_MainMenuPPE_Offset == 0xc70, "ULobbyHUD::MainMenuPPE offset is not c70");
	auto constexpr ULobbyHUD_CachedDOFFarBlueSize_Offset = offsetof(ULobbyHUD, CachedDOFFarBlueSize);
	static_assert(ULobbyHUD_CachedDOFFarBlueSize_Offset == 0xc78, "ULobbyHUD::CachedDOFFarBlueSize offset is not c78");
	auto constexpr ULobbyHUD_BlurChangingState_Offset = offsetof(ULobbyHUD, BlurChangingState);
	static_assert(ULobbyHUD_BlurChangingState_Offset == 0xc7c, "ULobbyHUD::BlurChangingState offset is not c7c");
	auto constexpr ULobbyHUD_boolFieldC7D_Offset = offsetof(ULobbyHUD, boolFieldC7D);
	static_assert(ULobbyHUD_boolFieldC7D_Offset == 0xc7d, "ULobbyHUD::boolFieldC7D offset is not c7d");
	auto constexpr ULobbyHUD_RollbackStreamingBoost_Offset = offsetof(ULobbyHUD, RollbackStreamingBoost);
	static_assert(ULobbyHUD_RollbackStreamingBoost_Offset == 0xc80, "ULobbyHUD::RollbackStreamingBoost offset is not c80");
	auto constexpr ULobbyHUD_OnCreateCharacter_Offset = offsetof(ULobbyHUD, OnCreateCharacter);
	static_assert(ULobbyHUD_OnCreateCharacter_Offset == 0xc88, "ULobbyHUD::OnCreateCharacter offset is not c88");
	auto constexpr ULobbyHUD_OnDestroyCharacter_Offset = offsetof(ULobbyHUD, OnDestroyCharacter);
	static_assert(ULobbyHUD_OnDestroyCharacter_Offset == 0xc98, "ULobbyHUD::OnDestroyCharacter offset is not c98");
	auto constexpr ULobbyHUD_StartURL_Offset = offsetof(ULobbyHUD, StartURL);
	static_assert(ULobbyHUD_StartURL_Offset == 0xca8, "ULobbyHUD::StartURL offset is not ca8");
	auto constexpr ULobbyHUD_CommonBinders_Offset = offsetof(ULobbyHUD, CommonBinders);
	static_assert(ULobbyHUD_CommonBinders_Offset == 0xcb8, "ULobbyHUD::CommonBinders offset is not cb8");
	auto constexpr ULobbyHUD_AkSound_Offset = offsetof(ULobbyHUD, AkSound);
	static_assert(ULobbyHUD_AkSound_Offset == 0xcc8, "ULobbyHUD::AkSound offset is not cc8");
	auto constexpr ULobbyHUD_MainCamera_Offset = offsetof(ULobbyHUD, MainCamera);
	static_assert(ULobbyHUD_MainCamera_Offset == 0xcd0, "ULobbyHUD::MainCamera offset is not cd0");
	auto constexpr ULobbyHUD_LobbyCharacterMaleClass_Offset = offsetof(ULobbyHUD, LobbyCharacterMaleClass);
	static_assert(ULobbyHUD_LobbyCharacterMaleClass_Offset == 0xcf8, "ULobbyHUD::LobbyCharacterMaleClass offset is not cf8");
	auto constexpr ULobbyHUD_LobbyCharacterFemaleClass_Offset = offsetof(ULobbyHUD, LobbyCharacterFemaleClass);
	static_assert(ULobbyHUD_LobbyCharacterFemaleClass_Offset == 0xd18, "ULobbyHUD::LobbyCharacterFemaleClass offset is not d18");
	auto constexpr ULobbyHUD_ViewTargetTransitionParams_Offset = offsetof(ULobbyHUD, ViewTargetTransitionParams);
	static_assert(ULobbyHUD_ViewTargetTransitionParams_Offset == 0xd88, "ULobbyHUD::ViewTargetTransitionParams offset is not d88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
