#pragma once
#include "UMeshComponent.hpp"
#include "FColor.hpp"
#include "EMeshComponentUpdateFlag.hpp"
#include "FBoxSphereBounds.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkinnedMeshComponent // Size: 0xB80
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef USkinnedMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(206); // id32("Class Engine.SkinnedMeshComponent")
		return ptr;
	}
	ExternalPtr<struct USkeletalMesh> SkeletalMesh; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty Engine.SkinnedMeshComponent.SkeletalMesh */
	TWeakObjectPtr<ExternalPtr<struct USkinnedMeshComponent>> MasterPoseComponent; /* Ofs: 0x9F8 Size: 0x8 - WeakObjectProperty Engine.SkinnedMeshComponent.MasterPoseComponent */
	TArray<MathHelper::FTransform> SpaceBasesArray; /* Ofs: 0xA00 Size: 0x10 - CUSTOM FIELD */
	uint8_t UnknownDataA10[0x50];
	uint8_t boolFieldA60;
	uint8_t UnknownDataA61[0x27];
	ExternalPtr<struct UPhysicsAsset> PhysicsAssetOverride; /* Ofs: 0xA88 Size: 0x8 - ObjectProperty Engine.SkinnedMeshComponent.PhysicsAssetOverride */
	int32_t ForcedLodModel; /* Ofs: 0xA90 Size: 0x4 - IntProperty Engine.SkinnedMeshComponent.ForcedLodModel */
	int32_t MinLodModel; /* Ofs: 0xA94 Size: 0x4 - IntProperty Engine.SkinnedMeshComponent.MinLodModel */
	uint8_t UnknownDataA98[0x10];
	TArray<struct FSkelMeshComponentLODInfo> LODInfo; /* Ofs: 0xAA8 Size: 0x10 - ArrayProperty Engine.SkinnedMeshComponent.LODInfo */
	float StreamingDistanceMultiplier; /* Ofs: 0xAB8 Size: 0x4 - FloatProperty Engine.SkinnedMeshComponent.StreamingDistanceMultiplier */
	FColor WireframeColor; /* Ofs: 0xABC Size: 0x4 - StructProperty Engine.SkinnedMeshComponent.WireframeColor */
	uint8_t boolFieldAC0;
	uint8_t UnknownDataAC1[0x17];
	uint8_t boolFieldAD8;
	uint8_t UnknownDataAD9[0x3];
	TEnumAsByte<enum EMeshComponentUpdateFlag> MeshComponentUpdateFlag; /* Ofs: 0xADC Size: 0x1 - ByteProperty Engine.SkinnedMeshComponent.MeshComponentUpdateFlag */
	uint8_t UnknownDataADD[0x3];
	uint8_t boolFieldAE0;
	uint8_t UnknownDataAE1[0x3];
	uint8_t CustomSortAlternateIndexMode; /* Ofs: 0xAE4 Size: 0x1 - ByteProperty Engine.SkinnedMeshComponent.CustomSortAlternateIndexMode */
	uint8_t UnknownDataAE5[0x3];
	uint8_t boolFieldAE8;
	uint8_t UnknownDataAE9[0x3];
	float CapsuleIndirectShadowMinVisibility; /* Ofs: 0xAEC Size: 0x4 - FloatProperty Engine.SkinnedMeshComponent.CapsuleIndirectShadowMinVisibility */
	uint8_t boolFieldAF0;
	uint8_t UnknownDataAF1[0x13];
	FBoxSphereBounds CachedLocalBounds; /* Ofs: 0xB04 Size: 0x1C - StructProperty Engine.SkinnedMeshComponent.CachedLocalBounds */
	uint8_t boolFieldB20;
	uint8_t boolFieldB21;
	uint8_t boolFieldB22;
	uint8_t UnknownDataB23[0x5D];


	inline bool SetSkeletalMesh(t_structHelper inst, ExternalPtr<struct USkeletalMesh> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetMasterPoseComponent(t_structHelper inst, TWeakObjectPtr<ExternalPtr<struct USkinnedMeshComponent>> value) { inst.WriteOffset(0x9F8, value); }
	inline bool bUseBoundsFromMasterPoseComponent()
	{
		return boolFieldA60& 0x1;
	}
	inline bool SetbUseBoundsFromMasterPoseComponent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPhysicsAssetOverride(t_structHelper inst, ExternalPtr<struct UPhysicsAsset> value) { inst.WriteOffset(0xA88, value); }
	inline bool SetForcedLodModel(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA90, value); }
	inline bool SetMinLodModel(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA94, value); }
	inline bool SetLODInfo(t_structHelper inst, TArray<struct FSkelMeshComponentLODInfo> value) { inst.WriteOffset(0xAA8, value); }
	inline bool SetStreamingDistanceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xAB8, value); }
	inline bool SetWireframeColor(t_structHelper inst, FColor value) { inst.WriteOffset(0xABC, value); }
	inline bool bForceWireframe()
	{
		return boolFieldAC0& 0x1;
	}
	inline bool SetbForceWireframe(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisplayBones()
	{
		return boolFieldAC0& 0x2;
	}
	inline bool SetbDisplayBones(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDisableMorphTarget()
	{
		return boolFieldAC0& 0x4;
	}
	inline bool SetbDisableMorphTarget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bHideSkin()
	{
		return boolFieldAC0& 0x8;
	}
	inline bool SetbHideSkin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bPerBoneMotionBlur()
	{
		return boolFieldAD8& 0x1;
	}
	inline bool SetbPerBoneMotionBlur(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAD8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bComponentUseFixedSkelBounds()
	{
		return boolFieldAD8& 0x2;
	}
	inline bool SetbComponentUseFixedSkelBounds(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAD8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bConsiderAllBodiesForBounds()
	{
		return boolFieldAD8& 0x4;
	}
	inline bool SetbConsiderAllBodiesForBounds(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAD8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetMeshComponentUpdateFlag(t_structHelper inst, TEnumAsByte<enum EMeshComponentUpdateFlag> value) { inst.WriteOffset(0xADC, value); }
	inline bool bForceMeshObjectUpdate()
	{
		return boolFieldAE0& 0x1;
	}
	inline bool SetbForceMeshObjectUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAE0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCanHighlightSelectedSections()
	{
		return boolFieldAE0& 0x2;
	}
	inline bool SetbCanHighlightSelectedSections(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAE0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bRecentlyRendered()
	{
		return boolFieldAE0& 0x4;
	}
	inline bool SetbRecentlyRendered(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAE0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetCustomSortAlternateIndexMode(t_structHelper inst, uint8_t value) { inst.WriteOffset(0xAE4, value); }
	inline bool bCastCapsuleDirectShadow()
	{
		return boolFieldAE8& 0x1;
	}
	inline bool SetbCastCapsuleDirectShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCastCapsuleIndirectShadow()
	{
		return boolFieldAE8& 0x2;
	}
	inline bool SetbCastCapsuleIndirectShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAE8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetCapsuleIndirectShadowMinVisibility(t_structHelper inst, float value) { inst.WriteOffset(0xAEC, value); }
	inline bool bCPUSkinning()
	{
		return boolFieldAF0& 0x1;
	}
	inline bool SetbCPUSkinning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAF0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCachedLocalBounds(t_structHelper inst, FBoxSphereBounds value) { inst.WriteOffset(0xB04, value); }
	inline bool bCachedLocalBoundsUpToDate()
	{
		return boolFieldB20& 0x1;
	}
	inline bool SetbCachedLocalBoundsUpToDate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB20, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableUpdateRateOptimizations()
	{
		return boolFieldB21& 0x1;
	}
	inline bool SetbEnableUpdateRateOptimizations(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB21, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisplayDebugUpdateRateOptimizations()
	{
		return boolFieldB22& 0x1;
	}
	inline bool SetbDisplayDebugUpdateRateOptimizations(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB22, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkinnedMeshComponent = sizeof(USkinnedMeshComponent); // 2944
    static_assert(sizeof(USkinnedMeshComponent) == 0xB80, "Size of USkinnedMeshComponent is not correct.");
	auto constexpr USkinnedMeshComponent_SkeletalMesh_Offset = offsetof(USkinnedMeshComponent, SkeletalMesh);
	static_assert(USkinnedMeshComponent_SkeletalMesh_Offset == 0x9f0, "USkinnedMeshComponent::SkeletalMesh offset is not 9f0");
	auto constexpr USkinnedMeshComponent_MasterPoseComponent_Offset = offsetof(USkinnedMeshComponent, MasterPoseComponent);
	static_assert(USkinnedMeshComponent_MasterPoseComponent_Offset == 0x9f8, "USkinnedMeshComponent::MasterPoseComponent offset is not 9f8");
	auto constexpr USkinnedMeshComponent_SpaceBasesArray_Offset = offsetof(USkinnedMeshComponent, SpaceBasesArray);
	static_assert(USkinnedMeshComponent_SpaceBasesArray_Offset == 0xa00, "USkinnedMeshComponent::SpaceBasesArray offset is not a00");
	auto constexpr USkinnedMeshComponent_boolFieldA60_Offset = offsetof(USkinnedMeshComponent, boolFieldA60);
	static_assert(USkinnedMeshComponent_boolFieldA60_Offset == 0xa60, "USkinnedMeshComponent::boolFieldA60 offset is not a60");
	auto constexpr USkinnedMeshComponent_PhysicsAssetOverride_Offset = offsetof(USkinnedMeshComponent, PhysicsAssetOverride);
	static_assert(USkinnedMeshComponent_PhysicsAssetOverride_Offset == 0xa88, "USkinnedMeshComponent::PhysicsAssetOverride offset is not a88");
	auto constexpr USkinnedMeshComponent_ForcedLodModel_Offset = offsetof(USkinnedMeshComponent, ForcedLodModel);
	static_assert(USkinnedMeshComponent_ForcedLodModel_Offset == 0xa90, "USkinnedMeshComponent::ForcedLodModel offset is not a90");
	auto constexpr USkinnedMeshComponent_MinLodModel_Offset = offsetof(USkinnedMeshComponent, MinLodModel);
	static_assert(USkinnedMeshComponent_MinLodModel_Offset == 0xa94, "USkinnedMeshComponent::MinLodModel offset is not a94");
	auto constexpr USkinnedMeshComponent_LODInfo_Offset = offsetof(USkinnedMeshComponent, LODInfo);
	static_assert(USkinnedMeshComponent_LODInfo_Offset == 0xaa8, "USkinnedMeshComponent::LODInfo offset is not aa8");
	auto constexpr USkinnedMeshComponent_StreamingDistanceMultiplier_Offset = offsetof(USkinnedMeshComponent, StreamingDistanceMultiplier);
	static_assert(USkinnedMeshComponent_StreamingDistanceMultiplier_Offset == 0xab8, "USkinnedMeshComponent::StreamingDistanceMultiplier offset is not ab8");
	auto constexpr USkinnedMeshComponent_WireframeColor_Offset = offsetof(USkinnedMeshComponent, WireframeColor);
	static_assert(USkinnedMeshComponent_WireframeColor_Offset == 0xabc, "USkinnedMeshComponent::WireframeColor offset is not abc");
	auto constexpr USkinnedMeshComponent_boolFieldAC0_Offset = offsetof(USkinnedMeshComponent, boolFieldAC0);
	static_assert(USkinnedMeshComponent_boolFieldAC0_Offset == 0xac0, "USkinnedMeshComponent::boolFieldAC0 offset is not ac0");
	auto constexpr USkinnedMeshComponent_boolFieldAD8_Offset = offsetof(USkinnedMeshComponent, boolFieldAD8);
	static_assert(USkinnedMeshComponent_boolFieldAD8_Offset == 0xad8, "USkinnedMeshComponent::boolFieldAD8 offset is not ad8");
	auto constexpr USkinnedMeshComponent_MeshComponentUpdateFlag_Offset = offsetof(USkinnedMeshComponent, MeshComponentUpdateFlag);
	static_assert(USkinnedMeshComponent_MeshComponentUpdateFlag_Offset == 0xadc, "USkinnedMeshComponent::MeshComponentUpdateFlag offset is not adc");
	auto constexpr USkinnedMeshComponent_boolFieldAE0_Offset = offsetof(USkinnedMeshComponent, boolFieldAE0);
	static_assert(USkinnedMeshComponent_boolFieldAE0_Offset == 0xae0, "USkinnedMeshComponent::boolFieldAE0 offset is not ae0");
	auto constexpr USkinnedMeshComponent_CustomSortAlternateIndexMode_Offset = offsetof(USkinnedMeshComponent, CustomSortAlternateIndexMode);
	static_assert(USkinnedMeshComponent_CustomSortAlternateIndexMode_Offset == 0xae4, "USkinnedMeshComponent::CustomSortAlternateIndexMode offset is not ae4");
	auto constexpr USkinnedMeshComponent_boolFieldAE8_Offset = offsetof(USkinnedMeshComponent, boolFieldAE8);
	static_assert(USkinnedMeshComponent_boolFieldAE8_Offset == 0xae8, "USkinnedMeshComponent::boolFieldAE8 offset is not ae8");
	auto constexpr USkinnedMeshComponent_CapsuleIndirectShadowMinVisibility_Offset = offsetof(USkinnedMeshComponent, CapsuleIndirectShadowMinVisibility);
	static_assert(USkinnedMeshComponent_CapsuleIndirectShadowMinVisibility_Offset == 0xaec, "USkinnedMeshComponent::CapsuleIndirectShadowMinVisibility offset is not aec");
	auto constexpr USkinnedMeshComponent_boolFieldAF0_Offset = offsetof(USkinnedMeshComponent, boolFieldAF0);
	static_assert(USkinnedMeshComponent_boolFieldAF0_Offset == 0xaf0, "USkinnedMeshComponent::boolFieldAF0 offset is not af0");
	auto constexpr USkinnedMeshComponent_CachedLocalBounds_Offset = offsetof(USkinnedMeshComponent, CachedLocalBounds);
	static_assert(USkinnedMeshComponent_CachedLocalBounds_Offset == 0xb04, "USkinnedMeshComponent::CachedLocalBounds offset is not b04");
	auto constexpr USkinnedMeshComponent_boolFieldB20_Offset = offsetof(USkinnedMeshComponent, boolFieldB20);
	static_assert(USkinnedMeshComponent_boolFieldB20_Offset == 0xb20, "USkinnedMeshComponent::boolFieldB20 offset is not b20");
	auto constexpr USkinnedMeshComponent_boolFieldB21_Offset = offsetof(USkinnedMeshComponent, boolFieldB21);
	static_assert(USkinnedMeshComponent_boolFieldB21_Offset == 0xb21, "USkinnedMeshComponent::boolFieldB21 offset is not b21");
	auto constexpr USkinnedMeshComponent_boolFieldB22_Offset = offsetof(USkinnedMeshComponent, boolFieldB22);
	static_assert(USkinnedMeshComponent_boolFieldB22_Offset == 0xb22, "USkinnedMeshComponent::boolFieldB22 offset is not b22");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
