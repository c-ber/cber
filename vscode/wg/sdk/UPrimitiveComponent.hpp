#pragma once
#include "USceneComponent.hpp"
#include "ESceneDepthPriorityGroup.hpp"
#include "EIndoorOutdoorMask.hpp"
#include "EIndirectLightingCacheQuality.hpp"
#include "FLightingChannels.hpp"
#include "ERendererStencilMask.hpp"
#include "FBodyInstance.hpp"
#include "EHasCustomNavigableGeometry.hpp"
#include "ECanBeCharacterBase.hpp"
#include "FPrimitiveComponentPostPhysicsTickFunction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPrimitiveComponent // Size: 0x8F0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UPrimitiveComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(8); // id32("Class Engine.PrimitiveComponent")
		return ptr;
	}
	uint8_t UnknownData490[0x8];
	float MinDrawDistance; /* Ofs: 0x498 Size: 0x4 - FloatProperty Engine.PrimitiveComponent.MinDrawDistance */
	float LDMaxDrawDistance; /* Ofs: 0x49C Size: 0x4 - FloatProperty Engine.PrimitiveComponent.LDMaxDrawDistance */
	float CachedMaxDrawDistance; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Engine.PrimitiveComponent.CachedMaxDrawDistance */
	TEnumAsByte<enum ESceneDepthPriorityGroup> DepthPriorityGroup; /* Ofs: 0x4A4 Size: 0x1 - ByteProperty Engine.PrimitiveComponent.DepthPriorityGroup */
	TEnumAsByte<enum ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup; /* Ofs: 0x4A5 Size: 0x1 - ByteProperty Engine.PrimitiveComponent.ViewOwnerDepthPriorityGroup */
	uint8_t UnknownData4A6[0x2];
	uint8_t boolField4A8;
	uint8_t boolField4A9;
	uint8_t UnknownData4AA[0x2];
	float HLODScreenSize; /* Ofs: 0x4AC Size: 0x4 - FloatProperty Engine.PrimitiveComponent.HLODScreenSize */
	uint8_t boolField4B0;
	uint8_t boolField4B1;
	uint8_t UnknownData4B2[0x2];
	TEnumAsByte<enum EIndoorOutdoorMask> IndoorOutdoorMask; /* Ofs: 0x4B4 Size: 0x1 - ByteProperty Engine.PrimitiveComponent.IndoorOutdoorMask */
	uint8_t UnknownData4B5[0x3];
	uint8_t boolField4B8;
	uint8_t boolField4B9;
	uint8_t UnknownData4BA[0x2];
	TEnumAsByte<enum EIndirectLightingCacheQuality> IndirectLightingCacheQuality; /* Ofs: 0x4BC Size: 0x1 - ByteProperty Engine.PrimitiveComponent.IndirectLightingCacheQuality */
	uint8_t UnknownData4BD[0x3];
	uint8_t boolField4C0;
	uint8_t UnknownData4C1[0x3];
	FLightingChannels LightingChannels; /* Ofs: 0x4C4 Size: 0x3 - StructProperty Engine.PrimitiveComponent.LightingChannels */
	uint8_t UnknownData4C7[0x1];
	uint8_t boolField4C8;
	uint8_t UnknownData4C9[0x3];
	int32_t CustomDepthStencilValue; /* Ofs: 0x4CC Size: 0x4 - IntProperty Engine.PrimitiveComponent.CustomDepthStencilValue */
	TEnumAsByte<enum ERendererStencilMask> CustomDepthStencilWriteMask; /* Ofs: 0x4D0 Size: 0x1 - EnumProperty Engine.PrimitiveComponent.CustomDepthStencilWriteMask */
	uint8_t UnknownData4D1[0x3];
	int32_t TranslucencySortPriority; /* Ofs: 0x4D4 Size: 0x4 - IntProperty Engine.PrimitiveComponent.TranslucencySortPriority */
	int32_t VisibilityId; /* Ofs: 0x4D8 Size: 0x4 - IntProperty Engine.PrimitiveComponent.VisibilityId */
	uint8_t UnknownData4DC[0x4];
	float LpvBiasMultiplier; /* Ofs: 0x4E0 Size: 0x4 - FloatProperty Engine.PrimitiveComponent.LpvBiasMultiplier */
	uint8_t UnknownData4E4[0xC];
	FBodyInstance BodyInstance; /* Ofs: 0x4F0 Size: 0x240 - StructProperty Engine.PrimitiveComponent.BodyInstance */
	uint8_t UnknownData730[0x8];
	TEnumAsByte<enum EHasCustomNavigableGeometry> bHasCustomNavigableGeometry; /* Ofs: 0x738 Size: 0x1 - ByteProperty Engine.PrimitiveComponent.bHasCustomNavigableGeometry */
	uint8_t UnknownData739[0x3];
	float BoundsScale; /* Ofs: 0x73C Size: 0x4 - FloatProperty Engine.PrimitiveComponent.BoundsScale */
	float LastSubmitTime; /* Ofs: 0x740 Size: 0x4 - FloatProperty Engine.PrimitiveComponent.LastSubmitTime */
	float LastRenderTime; /* Ofs: 0x744 Size: 0x4 - FloatProperty Engine.PrimitiveComponent.LastRenderTime */
	float LastRenderTimeOnScreen; /* Ofs: 0x748 Size: 0x4 - FloatProperty Engine.PrimitiveComponent.LastRenderTimeOnScreen */
	TEnumAsByte<enum ECanBeCharacterBase> CanBeCharacterBase; /* Ofs: 0x74C Size: 0x1 - ByteProperty Engine.PrimitiveComponent.CanBeCharacterBase */
	uint8_t UnknownData74D[0x1];
	TEnumAsByte<enum ECanBeCharacterBase> CanCharacterStepUpOn; /* Ofs: 0x74E Size: 0x1 - ByteProperty Engine.PrimitiveComponent.CanCharacterStepUpOn */
	uint8_t UnknownData74F[0x1];
	TArray<ExternalPtr<struct UActor>> MoveIgnoreActors; /* Ofs: 0x750 Size: 0x10 - ArrayProperty Engine.PrimitiveComponent.MoveIgnoreActors */
	TArray<ExternalPtr<struct UPrimitiveComponent>> MoveIgnoreComponents; /* Ofs: 0x760 Size: 0x10 - ArrayProperty Engine.PrimitiveComponent.MoveIgnoreComponents */
	uint8_t UnknownData770[0x10];
	FScriptMulticastDelegate OnComponentHit; /* Ofs: 0x780 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnComponentHit */
	FScriptMulticastDelegate OnComponentBeginOverlap; /* Ofs: 0x790 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnComponentBeginOverlap */
	FScriptMulticastDelegate OnComponentEndOverlap; /* Ofs: 0x7A0 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnComponentEndOverlap */
	FScriptMulticastDelegate OnComponentWake; /* Ofs: 0x7B0 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnComponentWake */
	FScriptMulticastDelegate OnComponentSleep; /* Ofs: 0x7C0 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnComponentSleep */
	uint8_t UnknownData7D0[0x10];
	FScriptMulticastDelegate OnBeginCursorOver; /* Ofs: 0x7E0 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnBeginCursorOver */
	FScriptMulticastDelegate OnEndCursorOver; /* Ofs: 0x7F0 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnEndCursorOver */
	FScriptMulticastDelegate OnClicked; /* Ofs: 0x800 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnClicked */
	FScriptMulticastDelegate OnReleased; /* Ofs: 0x810 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnReleased */
	FScriptMulticastDelegate OnInputTouchBegin; /* Ofs: 0x820 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnInputTouchBegin */
	FScriptMulticastDelegate OnInputTouchEnd; /* Ofs: 0x830 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnInputTouchEnd */
	FScriptMulticastDelegate OnInputTouchEnter; /* Ofs: 0x840 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnInputTouchEnter */
	FScriptMulticastDelegate OnInputTouchLeave; /* Ofs: 0x850 Size: 0x10 - MulticastDelegateProperty Engine.PrimitiveComponent.OnInputTouchLeave */
	uint8_t UnknownData860[0x28];
	ExternalPtr<struct UPrimitiveComponent> LODParentPrimitive; /* Ofs: 0x888 Size: 0x8 - ObjectProperty Engine.PrimitiveComponent.LODParentPrimitive */
	FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick; /* Ofs: 0x890 Size: 0x58 - StructProperty Engine.PrimitiveComponent.PostPhysicsComponentTick */
	uint8_t UnknownData8E8[0x8];


	inline bool SetMinDrawDistance(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetLDMaxDrawDistance(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetCachedMaxDrawDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetDepthPriorityGroup(t_structHelper inst, TEnumAsByte<enum ESceneDepthPriorityGroup> value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetViewOwnerDepthPriorityGroup(t_structHelper inst, TEnumAsByte<enum ESceneDepthPriorityGroup> value) { inst.WriteOffset(0x4A5, value); }
	inline bool bAlwaysCreatePhysicsState()
	{
		return boolField4A8& 0x8;
	}
	inline bool SetbAlwaysCreatePhysicsState(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bGenerateOverlapEvents()
	{
		return boolField4A8& 0x10;
	}
	inline bool SetbGenerateOverlapEvents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A8, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bMultiBodyOverlap()
	{
		return boolField4A8& 0x20;
	}
	inline bool SetbMultiBodyOverlap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A8, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bCheckAsyncSceneOnMove()
	{
		return boolField4A8& 0x40;
	}
	inline bool SetbCheckAsyncSceneOnMove(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A8, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bTraceComplexOnMove()
	{
		return boolField4A8& 0x80;
	}
	inline bool SetbTraceComplexOnMove(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A8, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bReturnMaterialOnMove()
	{
		return boolField4A9& 0x1;
	}
	inline bool SetbReturnMaterialOnMove(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseViewOwnerDepthPriorityGroup()
	{
		return boolField4A9& 0x2;
	}
	inline bool SetbUseViewOwnerDepthPriorityGroup(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A9, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAllowCullDistanceVolume()
	{
		return boolField4A9& 0x4;
	}
	inline bool SetbAllowCullDistanceVolume(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A9, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bImportantMesh()
	{
		return boolField4A9& 0x8;
	}
	inline bool SetbImportantMesh(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A9, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetHLODScreenSize(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
	inline bool bHasMotionBlurVelocityMeshes()
	{
		return boolField4B0& 0x1;
	}
	inline bool SetbHasMotionBlurVelocityMeshes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bVisibleInReflectionCaptures()
	{
		return boolField4B0& 0x2;
	}
	inline bool SetbVisibleInReflectionCaptures(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bRenderInMainPass()
	{
		return boolField4B0& 0x4;
	}
	inline bool SetbRenderInMainPass(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bRenderInMono()
	{
		return boolField4B0& 0x8;
	}
	inline bool SetbRenderInMono(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bReceivesDecals()
	{
		return boolField4B0& 0x10;
	}
	inline bool SetbReceivesDecals(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bOwnerNoSee()
	{
		return boolField4B0& 0x20;
	}
	inline bool SetbOwnerNoSee(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bOnlyOwnerSee()
	{
		return boolField4B0& 0x40;
	}
	inline bool SetbOnlyOwnerSee(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bTreatAsBackgroundForOcclusion()
	{
		return boolField4B0& 0x80;
	}
	inline bool SetbTreatAsBackgroundForOcclusion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bUseAsOccluder()
	{
		return boolField4B1& 0x1;
	}
	inline bool SetbUseAsOccluder(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bForceOcclusionQuerying()
	{
		return boolField4B1& 0x2;
	}
	inline bool SetbForceOcclusionQuerying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B1, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSelectable()
	{
		return boolField4B1& 0x4;
	}
	inline bool SetbSelectable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B1, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bForceMipStreaming()
	{
		return boolField4B1& 0x8;
	}
	inline bool SetbForceMipStreaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B1, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bHasPerInstanceHitProxies()
	{
		return boolField4B1& 0x10;
	}
	inline bool SetbHasPerInstanceHitProxies(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B1, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetIndoorOutdoorMask(t_structHelper inst, TEnumAsByte<enum EIndoorOutdoorMask> value) { inst.WriteOffset(0x4B4, value); }
	inline bool CastShadow()
	{
		return boolField4B8& 0x1;
	}
	inline bool SetCastShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAffectDynamicIndirectLighting()
	{
		return boolField4B8& 0x2;
	}
	inline bool SetbAffectDynamicIndirectLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAffectDistanceFieldLighting()
	{
		return boolField4B8& 0x4;
	}
	inline bool SetbAffectDistanceFieldLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bCastDynamicShadow()
	{
		return boolField4B8& 0x8;
	}
	inline bool SetbCastDynamicShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bCastStaticShadow()
	{
		return boolField4B8& 0x10;
	}
	inline bool SetbCastStaticShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bCastVolumetricTranslucentShadow()
	{
		return boolField4B8& 0x20;
	}
	inline bool SetbCastVolumetricTranslucentShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bSelfShadowOnly()
	{
		return boolField4B8& 0x40;
	}
	inline bool SetbSelfShadowOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bCastFarShadow()
	{
		return boolField4B8& 0x80;
	}
	inline bool SetbCastFarShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bCastInsetShadow()
	{
		return boolField4B9& 0x1;
	}
	inline bool SetbCastInsetShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCastCinematicShadow()
	{
		return boolField4B9& 0x2;
	}
	inline bool SetbCastCinematicShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B9, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCastHiddenShadow()
	{
		return boolField4B9& 0x4;
	}
	inline bool SetbCastHiddenShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B9, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bCastShadowAsTwoSided()
	{
		return boolField4B9& 0x8;
	}
	inline bool SetbCastShadowAsTwoSided(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B9, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bLightAsIfStatic()
	{
		return boolField4B9& 0x10;
	}
	inline bool SetbLightAsIfStatic(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B9, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bLightAttachmentsAsGroup()
	{
		return boolField4B9& 0x20;
	}
	inline bool SetbLightAttachmentsAsGroup(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B9, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetIndirectLightingCacheQuality(t_structHelper inst, TEnumAsByte<enum EIndirectLightingCacheQuality> value) { inst.WriteOffset(0x4BC, value); }
	inline bool bReceiveCombinedCSMAndStaticShadowsFromStationaryLights()
	{
		return boolField4C0& 0x1;
	}
	inline bool SetbReceiveCombinedCSMAndStaticShadowsFromStationaryLights(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSingleSampleShadowFromStationaryLights()
	{
		return boolField4C0& 0x2;
	}
	inline bool SetbSingleSampleShadowFromStationaryLights(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetLightingChannels(t_structHelper inst, FLightingChannels value) { inst.WriteOffset(0x4C4, value); }
	inline bool bIgnoreRadialImpulse()
	{
		return boolField4C8& 0x1;
	}
	inline bool SetbIgnoreRadialImpulse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIgnoreRadialForce()
	{
		return boolField4C8& 0x2;
	}
	inline bool SetbIgnoreRadialForce(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bApplyImpulseOnDamage()
	{
		return boolField4C8& 0x4;
	}
	inline bool SetbApplyImpulseOnDamage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool AlwaysLoadOnClient()
	{
		return boolField4C8& 0x8;
	}
	inline bool SetAlwaysLoadOnClient(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool AlwaysLoadOnServer()
	{
		return boolField4C8& 0x10;
	}
	inline bool SetAlwaysLoadOnServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bUseEditorCompositing()
	{
		return boolField4C8& 0x20;
	}
	inline bool SetbUseEditorCompositing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bRenderCustomDepth()
	{
		return boolField4C8& 0x40;
	}
	inline bool SetbRenderCustomDepth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetCustomDepthStencilValue(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4CC, value); }
	inline bool SetCustomDepthStencilWriteMask(t_structHelper inst, TEnumAsByte<enum ERendererStencilMask> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetTranslucencySortPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetVisibilityId(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetLpvBiasMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetBodyInstance(t_structHelper inst, FBodyInstance value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetbHasCustomNavigableGeometry(t_structHelper inst, TEnumAsByte<enum EHasCustomNavigableGeometry> value) { inst.WriteOffset(0x738, value); }
	inline bool SetBoundsScale(t_structHelper inst, float value) { inst.WriteOffset(0x73C, value); }
	inline bool SetLastSubmitTime(t_structHelper inst, float value) { inst.WriteOffset(0x740, value); }
	inline bool SetLastRenderTime(t_structHelper inst, float value) { inst.WriteOffset(0x744, value); }
	inline bool SetLastRenderTimeOnScreen(t_structHelper inst, float value) { inst.WriteOffset(0x748, value); }
	inline bool SetCanBeCharacterBase(t_structHelper inst, TEnumAsByte<enum ECanBeCharacterBase> value) { inst.WriteOffset(0x74C, value); }
	inline bool SetCanCharacterStepUpOn(t_structHelper inst, TEnumAsByte<enum ECanBeCharacterBase> value) { inst.WriteOffset(0x74E, value); }
	inline bool SetMoveIgnoreActors(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x750, value); }
	inline bool SetMoveIgnoreComponents(t_structHelper inst, TArray<ExternalPtr<struct UPrimitiveComponent>> value) { inst.WriteOffset(0x760, value); }
	inline bool SetOnComponentHit(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x780, value); }
	inline bool SetOnComponentBeginOverlap(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x790, value); }
	inline bool SetOnComponentEndOverlap(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetOnComponentWake(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x7B0, value); }
	inline bool SetOnComponentSleep(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x7C0, value); }
	inline bool SetOnBeginCursorOver(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x7E0, value); }
	inline bool SetOnEndCursorOver(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x7F0, value); }
	inline bool SetOnClicked(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x800, value); }
	inline bool SetOnReleased(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x810, value); }
	inline bool SetOnInputTouchBegin(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x820, value); }
	inline bool SetOnInputTouchEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x830, value); }
	inline bool SetOnInputTouchEnter(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x840, value); }
	inline bool SetOnInputTouchLeave(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x850, value); }
	inline bool SetLODParentPrimitive(t_structHelper inst, ExternalPtr<struct UPrimitiveComponent> value) { inst.WriteOffset(0x888, value); }
	inline bool SetPostPhysicsComponentTick(t_structHelper inst, FPrimitiveComponentPostPhysicsTickFunction value) { inst.WriteOffset(0x890, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPrimitiveComponent = sizeof(UPrimitiveComponent); // 2288
    static_assert(sizeof(UPrimitiveComponent) == 0x8F0, "Size of UPrimitiveComponent is not correct.");
	auto constexpr UPrimitiveComponent_MinDrawDistance_Offset = offsetof(UPrimitiveComponent, MinDrawDistance);
	static_assert(UPrimitiveComponent_MinDrawDistance_Offset == 0x498, "UPrimitiveComponent::MinDrawDistance offset is not 498");
	auto constexpr UPrimitiveComponent_LDMaxDrawDistance_Offset = offsetof(UPrimitiveComponent, LDMaxDrawDistance);
	static_assert(UPrimitiveComponent_LDMaxDrawDistance_Offset == 0x49c, "UPrimitiveComponent::LDMaxDrawDistance offset is not 49c");
	auto constexpr UPrimitiveComponent_CachedMaxDrawDistance_Offset = offsetof(UPrimitiveComponent, CachedMaxDrawDistance);
	static_assert(UPrimitiveComponent_CachedMaxDrawDistance_Offset == 0x4a0, "UPrimitiveComponent::CachedMaxDrawDistance offset is not 4a0");
	auto constexpr UPrimitiveComponent_DepthPriorityGroup_Offset = offsetof(UPrimitiveComponent, DepthPriorityGroup);
	static_assert(UPrimitiveComponent_DepthPriorityGroup_Offset == 0x4a4, "UPrimitiveComponent::DepthPriorityGroup offset is not 4a4");
	auto constexpr UPrimitiveComponent_ViewOwnerDepthPriorityGroup_Offset = offsetof(UPrimitiveComponent, ViewOwnerDepthPriorityGroup);
	static_assert(UPrimitiveComponent_ViewOwnerDepthPriorityGroup_Offset == 0x4a5, "UPrimitiveComponent::ViewOwnerDepthPriorityGroup offset is not 4a5");
	auto constexpr UPrimitiveComponent_boolField4A8_Offset = offsetof(UPrimitiveComponent, boolField4A8);
	static_assert(UPrimitiveComponent_boolField4A8_Offset == 0x4a8, "UPrimitiveComponent::boolField4A8 offset is not 4a8");
	auto constexpr UPrimitiveComponent_boolField4A9_Offset = offsetof(UPrimitiveComponent, boolField4A9);
	static_assert(UPrimitiveComponent_boolField4A9_Offset == 0x4a9, "UPrimitiveComponent::boolField4A9 offset is not 4a9");
	auto constexpr UPrimitiveComponent_HLODScreenSize_Offset = offsetof(UPrimitiveComponent, HLODScreenSize);
	static_assert(UPrimitiveComponent_HLODScreenSize_Offset == 0x4ac, "UPrimitiveComponent::HLODScreenSize offset is not 4ac");
	auto constexpr UPrimitiveComponent_boolField4B0_Offset = offsetof(UPrimitiveComponent, boolField4B0);
	static_assert(UPrimitiveComponent_boolField4B0_Offset == 0x4b0, "UPrimitiveComponent::boolField4B0 offset is not 4b0");
	auto constexpr UPrimitiveComponent_boolField4B1_Offset = offsetof(UPrimitiveComponent, boolField4B1);
	static_assert(UPrimitiveComponent_boolField4B1_Offset == 0x4b1, "UPrimitiveComponent::boolField4B1 offset is not 4b1");
	auto constexpr UPrimitiveComponent_IndoorOutdoorMask_Offset = offsetof(UPrimitiveComponent, IndoorOutdoorMask);
	static_assert(UPrimitiveComponent_IndoorOutdoorMask_Offset == 0x4b4, "UPrimitiveComponent::IndoorOutdoorMask offset is not 4b4");
	auto constexpr UPrimitiveComponent_boolField4B8_Offset = offsetof(UPrimitiveComponent, boolField4B8);
	static_assert(UPrimitiveComponent_boolField4B8_Offset == 0x4b8, "UPrimitiveComponent::boolField4B8 offset is not 4b8");
	auto constexpr UPrimitiveComponent_boolField4B9_Offset = offsetof(UPrimitiveComponent, boolField4B9);
	static_assert(UPrimitiveComponent_boolField4B9_Offset == 0x4b9, "UPrimitiveComponent::boolField4B9 offset is not 4b9");
	auto constexpr UPrimitiveComponent_IndirectLightingCacheQuality_Offset = offsetof(UPrimitiveComponent, IndirectLightingCacheQuality);
	static_assert(UPrimitiveComponent_IndirectLightingCacheQuality_Offset == 0x4bc, "UPrimitiveComponent::IndirectLightingCacheQuality offset is not 4bc");
	auto constexpr UPrimitiveComponent_boolField4C0_Offset = offsetof(UPrimitiveComponent, boolField4C0);
	static_assert(UPrimitiveComponent_boolField4C0_Offset == 0x4c0, "UPrimitiveComponent::boolField4C0 offset is not 4c0");
	auto constexpr UPrimitiveComponent_LightingChannels_Offset = offsetof(UPrimitiveComponent, LightingChannels);
	static_assert(UPrimitiveComponent_LightingChannels_Offset == 0x4c4, "UPrimitiveComponent::LightingChannels offset is not 4c4");
	auto constexpr UPrimitiveComponent_boolField4C8_Offset = offsetof(UPrimitiveComponent, boolField4C8);
	static_assert(UPrimitiveComponent_boolField4C8_Offset == 0x4c8, "UPrimitiveComponent::boolField4C8 offset is not 4c8");
	auto constexpr UPrimitiveComponent_CustomDepthStencilValue_Offset = offsetof(UPrimitiveComponent, CustomDepthStencilValue);
	static_assert(UPrimitiveComponent_CustomDepthStencilValue_Offset == 0x4cc, "UPrimitiveComponent::CustomDepthStencilValue offset is not 4cc");
	auto constexpr UPrimitiveComponent_CustomDepthStencilWriteMask_Offset = offsetof(UPrimitiveComponent, CustomDepthStencilWriteMask);
	static_assert(UPrimitiveComponent_CustomDepthStencilWriteMask_Offset == 0x4d0, "UPrimitiveComponent::CustomDepthStencilWriteMask offset is not 4d0");
	auto constexpr UPrimitiveComponent_TranslucencySortPriority_Offset = offsetof(UPrimitiveComponent, TranslucencySortPriority);
	static_assert(UPrimitiveComponent_TranslucencySortPriority_Offset == 0x4d4, "UPrimitiveComponent::TranslucencySortPriority offset is not 4d4");
	auto constexpr UPrimitiveComponent_VisibilityId_Offset = offsetof(UPrimitiveComponent, VisibilityId);
	static_assert(UPrimitiveComponent_VisibilityId_Offset == 0x4d8, "UPrimitiveComponent::VisibilityId offset is not 4d8");
	auto constexpr UPrimitiveComponent_LpvBiasMultiplier_Offset = offsetof(UPrimitiveComponent, LpvBiasMultiplier);
	static_assert(UPrimitiveComponent_LpvBiasMultiplier_Offset == 0x4e0, "UPrimitiveComponent::LpvBiasMultiplier offset is not 4e0");
	auto constexpr UPrimitiveComponent_BodyInstance_Offset = offsetof(UPrimitiveComponent, BodyInstance);
	static_assert(UPrimitiveComponent_BodyInstance_Offset == 0x4f0, "UPrimitiveComponent::BodyInstance offset is not 4f0");
	auto constexpr UPrimitiveComponent_bHasCustomNavigableGeometry_Offset = offsetof(UPrimitiveComponent, bHasCustomNavigableGeometry);
	static_assert(UPrimitiveComponent_bHasCustomNavigableGeometry_Offset == 0x738, "UPrimitiveComponent::bHasCustomNavigableGeometry offset is not 738");
	auto constexpr UPrimitiveComponent_BoundsScale_Offset = offsetof(UPrimitiveComponent, BoundsScale);
	static_assert(UPrimitiveComponent_BoundsScale_Offset == 0x73c, "UPrimitiveComponent::BoundsScale offset is not 73c");
	auto constexpr UPrimitiveComponent_LastSubmitTime_Offset = offsetof(UPrimitiveComponent, LastSubmitTime);
	static_assert(UPrimitiveComponent_LastSubmitTime_Offset == 0x740, "UPrimitiveComponent::LastSubmitTime offset is not 740");
	auto constexpr UPrimitiveComponent_LastRenderTime_Offset = offsetof(UPrimitiveComponent, LastRenderTime);
	static_assert(UPrimitiveComponent_LastRenderTime_Offset == 0x744, "UPrimitiveComponent::LastRenderTime offset is not 744");
	auto constexpr UPrimitiveComponent_LastRenderTimeOnScreen_Offset = offsetof(UPrimitiveComponent, LastRenderTimeOnScreen);
	static_assert(UPrimitiveComponent_LastRenderTimeOnScreen_Offset == 0x748, "UPrimitiveComponent::LastRenderTimeOnScreen offset is not 748");
	auto constexpr UPrimitiveComponent_CanBeCharacterBase_Offset = offsetof(UPrimitiveComponent, CanBeCharacterBase);
	static_assert(UPrimitiveComponent_CanBeCharacterBase_Offset == 0x74c, "UPrimitiveComponent::CanBeCharacterBase offset is not 74c");
	auto constexpr UPrimitiveComponent_CanCharacterStepUpOn_Offset = offsetof(UPrimitiveComponent, CanCharacterStepUpOn);
	static_assert(UPrimitiveComponent_CanCharacterStepUpOn_Offset == 0x74e, "UPrimitiveComponent::CanCharacterStepUpOn offset is not 74e");
	auto constexpr UPrimitiveComponent_MoveIgnoreActors_Offset = offsetof(UPrimitiveComponent, MoveIgnoreActors);
	static_assert(UPrimitiveComponent_MoveIgnoreActors_Offset == 0x750, "UPrimitiveComponent::MoveIgnoreActors offset is not 750");
	auto constexpr UPrimitiveComponent_MoveIgnoreComponents_Offset = offsetof(UPrimitiveComponent, MoveIgnoreComponents);
	static_assert(UPrimitiveComponent_MoveIgnoreComponents_Offset == 0x760, "UPrimitiveComponent::MoveIgnoreComponents offset is not 760");
	auto constexpr UPrimitiveComponent_OnComponentHit_Offset = offsetof(UPrimitiveComponent, OnComponentHit);
	static_assert(UPrimitiveComponent_OnComponentHit_Offset == 0x780, "UPrimitiveComponent::OnComponentHit offset is not 780");
	auto constexpr UPrimitiveComponent_OnComponentBeginOverlap_Offset = offsetof(UPrimitiveComponent, OnComponentBeginOverlap);
	static_assert(UPrimitiveComponent_OnComponentBeginOverlap_Offset == 0x790, "UPrimitiveComponent::OnComponentBeginOverlap offset is not 790");
	auto constexpr UPrimitiveComponent_OnComponentEndOverlap_Offset = offsetof(UPrimitiveComponent, OnComponentEndOverlap);
	static_assert(UPrimitiveComponent_OnComponentEndOverlap_Offset == 0x7a0, "UPrimitiveComponent::OnComponentEndOverlap offset is not 7a0");
	auto constexpr UPrimitiveComponent_OnComponentWake_Offset = offsetof(UPrimitiveComponent, OnComponentWake);
	static_assert(UPrimitiveComponent_OnComponentWake_Offset == 0x7b0, "UPrimitiveComponent::OnComponentWake offset is not 7b0");
	auto constexpr UPrimitiveComponent_OnComponentSleep_Offset = offsetof(UPrimitiveComponent, OnComponentSleep);
	static_assert(UPrimitiveComponent_OnComponentSleep_Offset == 0x7c0, "UPrimitiveComponent::OnComponentSleep offset is not 7c0");
	auto constexpr UPrimitiveComponent_OnBeginCursorOver_Offset = offsetof(UPrimitiveComponent, OnBeginCursorOver);
	static_assert(UPrimitiveComponent_OnBeginCursorOver_Offset == 0x7e0, "UPrimitiveComponent::OnBeginCursorOver offset is not 7e0");
	auto constexpr UPrimitiveComponent_OnEndCursorOver_Offset = offsetof(UPrimitiveComponent, OnEndCursorOver);
	static_assert(UPrimitiveComponent_OnEndCursorOver_Offset == 0x7f0, "UPrimitiveComponent::OnEndCursorOver offset is not 7f0");
	auto constexpr UPrimitiveComponent_OnClicked_Offset = offsetof(UPrimitiveComponent, OnClicked);
	static_assert(UPrimitiveComponent_OnClicked_Offset == 0x800, "UPrimitiveComponent::OnClicked offset is not 800");
	auto constexpr UPrimitiveComponent_OnReleased_Offset = offsetof(UPrimitiveComponent, OnReleased);
	static_assert(UPrimitiveComponent_OnReleased_Offset == 0x810, "UPrimitiveComponent::OnReleased offset is not 810");
	auto constexpr UPrimitiveComponent_OnInputTouchBegin_Offset = offsetof(UPrimitiveComponent, OnInputTouchBegin);
	static_assert(UPrimitiveComponent_OnInputTouchBegin_Offset == 0x820, "UPrimitiveComponent::OnInputTouchBegin offset is not 820");
	auto constexpr UPrimitiveComponent_OnInputTouchEnd_Offset = offsetof(UPrimitiveComponent, OnInputTouchEnd);
	static_assert(UPrimitiveComponent_OnInputTouchEnd_Offset == 0x830, "UPrimitiveComponent::OnInputTouchEnd offset is not 830");
	auto constexpr UPrimitiveComponent_OnInputTouchEnter_Offset = offsetof(UPrimitiveComponent, OnInputTouchEnter);
	static_assert(UPrimitiveComponent_OnInputTouchEnter_Offset == 0x840, "UPrimitiveComponent::OnInputTouchEnter offset is not 840");
	auto constexpr UPrimitiveComponent_OnInputTouchLeave_Offset = offsetof(UPrimitiveComponent, OnInputTouchLeave);
	static_assert(UPrimitiveComponent_OnInputTouchLeave_Offset == 0x850, "UPrimitiveComponent::OnInputTouchLeave offset is not 850");
	auto constexpr UPrimitiveComponent_LODParentPrimitive_Offset = offsetof(UPrimitiveComponent, LODParentPrimitive);
	static_assert(UPrimitiveComponent_LODParentPrimitive_Offset == 0x888, "UPrimitiveComponent::LODParentPrimitive offset is not 888");
	auto constexpr UPrimitiveComponent_PostPhysicsComponentTick_Offset = offsetof(UPrimitiveComponent, PostPhysicsComponentTick);
	static_assert(UPrimitiveComponent_PostPhysicsComponentTick_Offset == 0x890, "UPrimitiveComponent::PostPhysicsComponentTick offset is not 890");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
