#pragma once
#include "UActor.hpp"
#include "FVector.hpp"
#include "FTViewTarget.hpp"
#include "FCameraCacheEntry.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerCameraManager // Size: 0x1C30
	: public UActor // Size: 0x410
{
private:
	typedef UPlayerCameraManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1476); // id32("Class Engine.PlayerCameraManager")
		return ptr;
	}
//	ExternalPtr<struct UPlayerController> PCOwner; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.PlayerCameraManager.PCOwner */
	ExternalPtr<struct USceneComponent> TransformComponent; /* Ofs: 0x410 Size: 0x8 - ObjectProperty Engine.PlayerCameraManager.TransformComponent */
	float DefaultFOV; /* Ofs: 0x418 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.DefaultFOV */
	uint8_t UnknownData41C[0x4];
	FVector FreeCamOffset; /* Ofs: 0x420 Size: 0xC - StructProperty Engine.PlayerCameraManager.FreeCamOffset */
	uint8_t UnknownData42C[0x4];
	float DefaultOrthoWidth; /* Ofs: 0x430 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.DefaultOrthoWidth */
	uint8_t UnknownData434[0x8];
	float ViewPitchMin; /* Ofs: 0x43C Size: 0x4 - FloatProperty Engine.PlayerCameraManager.ViewPitchMin */
	uint8_t UnknownData440[0x28];
	TArray<ExternalPtr<struct UClass>> DefaultModifiers; /* Ofs: 0x468 Size: 0x10 - ArrayProperty Engine.PlayerCameraManager.DefaultModifiers */
	uint8_t UnknownData478[0x8];
	FTViewTarget ViewTarget; /* Ofs: 0x480 Size: 0x5A0 - StructProperty Engine.PlayerCameraManager.ViewTarget */
	float FreeCamDistance; /* Ofs: 0xA20 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.FreeCamDistance */
	uint8_t UnknownDataA24[0x2C];
	FTViewTarget PendingViewTarget; /* Ofs: 0xA50 Size: 0x5A0 - StructProperty Engine.PlayerCameraManager.PendingViewTarget */
	float ViewRollMax; /* Ofs: 0xFF0 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.ViewRollMax */
	uint8_t UnknownDataFF4[0x4];
	TArray<ExternalPtr<struct UCameraModifier>> ModifierList; /* Ofs: 0xFF8 Size: 0x10 - ArrayProperty Engine.PlayerCameraManager.ModifierList */
	uint8_t UnknownData1008[0x8];
	float ViewPitchMax; /* Ofs: 0x1010 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.ViewPitchMax */
	uint8_t UnknownData1014[0xC];
	FCameraCacheEntry LastFrameCameraCache; /* Ofs: 0x1020 Size: 0x590 - StructProperty Engine.PlayerCameraManager.LastFrameCameraCache */
	uint8_t UnknownData15B0[0x10];
	FCameraCacheEntry CameraCache; /* Ofs: 0x15C0 Size: 0x590 - StructProperty Engine.PlayerCameraManager.CameraCache */
	float ViewYawMin; /* Ofs: 0x1B50 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.ViewYawMin */
	uint8_t UnknownData1B54[0x4];
	TArray<ExternalPtr<struct UEmitterCameraLensEffectBase>> CameraLensEffects; /* Ofs: 0x1B58 Size: 0x10 - ArrayProperty Engine.PlayerCameraManager.CameraLensEffects */
	ExternalPtr<struct UCameraModifier_CameraShake> CachedCameraShakeMod; /* Ofs: 0x1B68 Size: 0x8 - ObjectProperty Engine.PlayerCameraManager.CachedCameraShakeMod */
	ExternalPtr<struct UCameraAnimInst> AnimInstPool[8]; /* Ofs: 0x8 Size: 0x8 - ObjectProperty Engine.PlayerCameraManager.AnimInstPool */
	TArray<struct FPostProcessSettings> PostProcessBlendCache; /* Ofs: 0x1BB0 Size: 0x10 - ArrayProperty Engine.PlayerCameraManager.PostProcessBlendCache */
	uint8_t UnknownData1BC0[0x10];
	TArray<ExternalPtr<struct UCameraAnimInst>> ActiveAnims; /* Ofs: 0x1BD0 Size: 0x10 - ArrayProperty Engine.PlayerCameraManager.ActiveAnims */
	TArray<ExternalPtr<struct UCameraAnimInst>> FreeAnims; /* Ofs: 0x1BE0 Size: 0x10 - ArrayProperty Engine.PlayerCameraManager.FreeAnims */
	ExternalPtr<struct UCameraActor> AnimCameraActor; /* Ofs: 0x1BF0 Size: 0x8 - ObjectProperty Engine.PlayerCameraManager.AnimCameraActor */
	uint8_t boolField1BF8;
	uint8_t UnknownData1BF9[0x17];
	float ViewRollMin; /* Ofs: 0x1C10 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.ViewRollMin */
	float DefaultAspectRatio; /* Ofs: 0x1C14 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.DefaultAspectRatio */
	FVector ViewTargetOffset; /* Ofs: 0x1C18 Size: 0xC - StructProperty Engine.PlayerCameraManager.ViewTargetOffset */
	float ViewYawMax; /* Ofs: 0x1C24 Size: 0x4 - FloatProperty Engine.PlayerCameraManager.ViewYawMax */
	uint8_t UnknownData1C28[0x8];


//	inline bool SetPCOwner(t_structHelper inst, ExternalPtr<struct UPlayerController> value) { inst.WriteOffset(0x408, value); }
	inline bool SetTransformComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDefaultFOV(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetFreeCamOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x420, value); }
	inline bool SetDefaultOrthoWidth(t_structHelper inst, float value) { inst.WriteOffset(0x430, value); }
	inline bool SetViewPitchMin(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetDefaultModifiers(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x468, value); }
	inline bool SetViewTarget(t_structHelper inst, FTViewTarget value) { inst.WriteOffset(0x480, value); }
	inline bool SetFreeCamDistance(t_structHelper inst, float value) { inst.WriteOffset(0xA20, value); }
	inline bool SetPendingViewTarget(t_structHelper inst, FTViewTarget value) { inst.WriteOffset(0xA50, value); }
	inline bool SetViewRollMax(t_structHelper inst, float value) { inst.WriteOffset(0xFF0, value); }
	inline bool SetModifierList(t_structHelper inst, TArray<ExternalPtr<struct UCameraModifier>> value) { inst.WriteOffset(0xFF8, value); }
	inline bool SetViewPitchMax(t_structHelper inst, float value) { inst.WriteOffset(0x1010, value); }
	inline bool SetLastFrameCameraCache(t_structHelper inst, FCameraCacheEntry value) { inst.WriteOffset(0x1020, value); }
	inline bool SetCameraCache(t_structHelper inst, FCameraCacheEntry value) { inst.WriteOffset(0x15C0, value); }
	inline bool SetViewYawMin(t_structHelper inst, float value) { inst.WriteOffset(0x1B50, value); }
	inline bool SetCameraLensEffects(t_structHelper inst, TArray<ExternalPtr<struct UEmitterCameraLensEffectBase>> value) { inst.WriteOffset(0x1B58, value); }
	inline bool SetCachedCameraShakeMod(t_structHelper inst, ExternalPtr<struct UCameraModifier_CameraShake> value) { inst.WriteOffset(0x1B68, value); }
	inline bool SetPostProcessBlendCache(t_structHelper inst, TArray<struct FPostProcessSettings> value) { inst.WriteOffset(0x1BB0, value); }
	inline bool SetActiveAnims(t_structHelper inst, TArray<ExternalPtr<struct UCameraAnimInst>> value) { inst.WriteOffset(0x1BD0, value); }
	inline bool SetFreeAnims(t_structHelper inst, TArray<ExternalPtr<struct UCameraAnimInst>> value) { inst.WriteOffset(0x1BE0, value); }
	inline bool SetAnimCameraActor(t_structHelper inst, ExternalPtr<struct UCameraActor> value) { inst.WriteOffset(0x1BF0, value); }
	inline bool bIsOrthographic()
	{
		return boolField1BF8& 0x1;
	}
	inline bool SetbIsOrthographic(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDefaultConstrainAspectRatio()
	{
		return boolField1BF8& 0x2;
	}
	inline bool SetbDefaultConstrainAspectRatio(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BF8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseClientSideCameraUpdates()
	{
		return boolField1BF8& 0x80;
	}
	inline bool SetbUseClientSideCameraUpdates(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1BF8, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool SetViewRollMin(t_structHelper inst, float value) { inst.WriteOffset(0x1C10, value); }
	inline bool SetDefaultAspectRatio(t_structHelper inst, float value) { inst.WriteOffset(0x1C14, value); }
	inline bool SetViewTargetOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x1C18, value); }
	inline bool SetViewYawMax(t_structHelper inst, float value) { inst.WriteOffset(0x1C24, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerCameraManager = sizeof(UPlayerCameraManager); // 7216
    static_assert(sizeof(UPlayerCameraManager) == 0x1C30, "Size of UPlayerCameraManager is not correct.");
//	auto constexpr UPlayerCameraManager_PCOwner_Offset = offsetof(UPlayerCameraManager, PCOwner);
//	static_assert(UPlayerCameraManager_PCOwner_Offset == 0x408, "UPlayerCameraManager::PCOwner offset is not 408");
	auto constexpr UPlayerCameraManager_TransformComponent_Offset = offsetof(UPlayerCameraManager, TransformComponent);
	static_assert(UPlayerCameraManager_TransformComponent_Offset == 0x410, "UPlayerCameraManager::TransformComponent offset is not 410");
	auto constexpr UPlayerCameraManager_DefaultFOV_Offset = offsetof(UPlayerCameraManager, DefaultFOV);
	static_assert(UPlayerCameraManager_DefaultFOV_Offset == 0x418, "UPlayerCameraManager::DefaultFOV offset is not 418");
	auto constexpr UPlayerCameraManager_FreeCamOffset_Offset = offsetof(UPlayerCameraManager, FreeCamOffset);
	static_assert(UPlayerCameraManager_FreeCamOffset_Offset == 0x420, "UPlayerCameraManager::FreeCamOffset offset is not 420");
	auto constexpr UPlayerCameraManager_DefaultOrthoWidth_Offset = offsetof(UPlayerCameraManager, DefaultOrthoWidth);
	static_assert(UPlayerCameraManager_DefaultOrthoWidth_Offset == 0x430, "UPlayerCameraManager::DefaultOrthoWidth offset is not 430");
	auto constexpr UPlayerCameraManager_ViewPitchMin_Offset = offsetof(UPlayerCameraManager, ViewPitchMin);
	static_assert(UPlayerCameraManager_ViewPitchMin_Offset == 0x43c, "UPlayerCameraManager::ViewPitchMin offset is not 43c");
	auto constexpr UPlayerCameraManager_DefaultModifiers_Offset = offsetof(UPlayerCameraManager, DefaultModifiers);
	static_assert(UPlayerCameraManager_DefaultModifiers_Offset == 0x468, "UPlayerCameraManager::DefaultModifiers offset is not 468");
	auto constexpr UPlayerCameraManager_ViewTarget_Offset = offsetof(UPlayerCameraManager, ViewTarget);
	static_assert(UPlayerCameraManager_ViewTarget_Offset == 0x480, "UPlayerCameraManager::ViewTarget offset is not 480");
	auto constexpr UPlayerCameraManager_FreeCamDistance_Offset = offsetof(UPlayerCameraManager, FreeCamDistance);
	static_assert(UPlayerCameraManager_FreeCamDistance_Offset == 0xa20, "UPlayerCameraManager::FreeCamDistance offset is not a20");
	auto constexpr UPlayerCameraManager_PendingViewTarget_Offset = offsetof(UPlayerCameraManager, PendingViewTarget);
	static_assert(UPlayerCameraManager_PendingViewTarget_Offset == 0xa50, "UPlayerCameraManager::PendingViewTarget offset is not a50");
	auto constexpr UPlayerCameraManager_ViewRollMax_Offset = offsetof(UPlayerCameraManager, ViewRollMax);
	static_assert(UPlayerCameraManager_ViewRollMax_Offset == 0xff0, "UPlayerCameraManager::ViewRollMax offset is not ff0");
	auto constexpr UPlayerCameraManager_ModifierList_Offset = offsetof(UPlayerCameraManager, ModifierList);
	static_assert(UPlayerCameraManager_ModifierList_Offset == 0xff8, "UPlayerCameraManager::ModifierList offset is not ff8");
	auto constexpr UPlayerCameraManager_ViewPitchMax_Offset = offsetof(UPlayerCameraManager, ViewPitchMax);
	static_assert(UPlayerCameraManager_ViewPitchMax_Offset == 0x1010, "UPlayerCameraManager::ViewPitchMax offset is not 1010");
	auto constexpr UPlayerCameraManager_LastFrameCameraCache_Offset = offsetof(UPlayerCameraManager, LastFrameCameraCache);
	static_assert(UPlayerCameraManager_LastFrameCameraCache_Offset == 0x1020, "UPlayerCameraManager::LastFrameCameraCache offset is not 1020");
	auto constexpr UPlayerCameraManager_CameraCache_Offset = offsetof(UPlayerCameraManager, CameraCache);
	static_assert(UPlayerCameraManager_CameraCache_Offset == 0x15c0, "UPlayerCameraManager::CameraCache offset is not 15c0");
	auto constexpr UPlayerCameraManager_ViewYawMin_Offset = offsetof(UPlayerCameraManager, ViewYawMin);
	static_assert(UPlayerCameraManager_ViewYawMin_Offset == 0x1b50, "UPlayerCameraManager::ViewYawMin offset is not 1b50");
	auto constexpr UPlayerCameraManager_CameraLensEffects_Offset = offsetof(UPlayerCameraManager, CameraLensEffects);
	static_assert(UPlayerCameraManager_CameraLensEffects_Offset == 0x1b58, "UPlayerCameraManager::CameraLensEffects offset is not 1b58");
	auto constexpr UPlayerCameraManager_CachedCameraShakeMod_Offset = offsetof(UPlayerCameraManager, CachedCameraShakeMod);
	static_assert(UPlayerCameraManager_CachedCameraShakeMod_Offset == 0x1b68, "UPlayerCameraManager::CachedCameraShakeMod offset is not 1b68");
	auto constexpr UPlayerCameraManager_AnimInstPool_Offset = offsetof(UPlayerCameraManager, AnimInstPool);
	static_assert(UPlayerCameraManager_AnimInstPool_Offset == 0x1b70, "UPlayerCameraManager::AnimInstPool offset is not 1b70");
	auto constexpr UPlayerCameraManager_PostProcessBlendCache_Offset = offsetof(UPlayerCameraManager, PostProcessBlendCache);
	static_assert(UPlayerCameraManager_PostProcessBlendCache_Offset == 0x1bb0, "UPlayerCameraManager::PostProcessBlendCache offset is not 1bb0");
	auto constexpr UPlayerCameraManager_ActiveAnims_Offset = offsetof(UPlayerCameraManager, ActiveAnims);
	static_assert(UPlayerCameraManager_ActiveAnims_Offset == 0x1bd0, "UPlayerCameraManager::ActiveAnims offset is not 1bd0");
	auto constexpr UPlayerCameraManager_FreeAnims_Offset = offsetof(UPlayerCameraManager, FreeAnims);
	static_assert(UPlayerCameraManager_FreeAnims_Offset == 0x1be0, "UPlayerCameraManager::FreeAnims offset is not 1be0");
	auto constexpr UPlayerCameraManager_AnimCameraActor_Offset = offsetof(UPlayerCameraManager, AnimCameraActor);
	static_assert(UPlayerCameraManager_AnimCameraActor_Offset == 0x1bf0, "UPlayerCameraManager::AnimCameraActor offset is not 1bf0");
	auto constexpr UPlayerCameraManager_boolField1BF8_Offset = offsetof(UPlayerCameraManager, boolField1BF8);
	static_assert(UPlayerCameraManager_boolField1BF8_Offset == 0x1bf8, "UPlayerCameraManager::boolField1BF8 offset is not 1bf8");
	auto constexpr UPlayerCameraManager_ViewRollMin_Offset = offsetof(UPlayerCameraManager, ViewRollMin);
	static_assert(UPlayerCameraManager_ViewRollMin_Offset == 0x1c10, "UPlayerCameraManager::ViewRollMin offset is not 1c10");
	auto constexpr UPlayerCameraManager_DefaultAspectRatio_Offset = offsetof(UPlayerCameraManager, DefaultAspectRatio);
	static_assert(UPlayerCameraManager_DefaultAspectRatio_Offset == 0x1c14, "UPlayerCameraManager::DefaultAspectRatio offset is not 1c14");
	auto constexpr UPlayerCameraManager_ViewTargetOffset_Offset = offsetof(UPlayerCameraManager, ViewTargetOffset);
	static_assert(UPlayerCameraManager_ViewTargetOffset_Offset == 0x1c18, "UPlayerCameraManager::ViewTargetOffset offset is not 1c18");
	auto constexpr UPlayerCameraManager_ViewYawMax_Offset = offsetof(UPlayerCameraManager, ViewYawMax);
	static_assert(UPlayerCameraManager_ViewYawMax_Offset == 0x1c24, "UPlayerCameraManager::ViewYawMax offset is not 1c24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
