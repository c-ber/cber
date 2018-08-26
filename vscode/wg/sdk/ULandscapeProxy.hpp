#pragma once
#include "UActor.hpp"
#include "FGuid.hpp"
#include "FIntPoint.hpp"
#include "ELandscapeLODFalloff.hpp"
#include "FLightingChannels.hpp"
#include "FLightmassPrimitiveSettings.hpp"
#include "FBodyInstance.hpp"
#include "ENavDataGatheringMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeProxy // Size: 0x860
	: public UActor // Size: 0x410
{
private:
	typedef ULandscapeProxy t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1295); // id32("Class Landscape.LandscapeProxy")
		return ptr;
	}
//	ExternalPtr<struct ULandscapeSplinesComponent> SplineComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Landscape.LandscapeProxy.SplineComponent */
	FGuid LandscapeGuid; /* Ofs: 0x410 Size: 0x10 - StructProperty Landscape.LandscapeProxy.LandscapeGuid */
	FIntPoint LandscapeSectionOffset; /* Ofs: 0x420 Size: 0x8 - StructProperty Landscape.LandscapeProxy.LandscapeSectionOffset */
	int32_t MaxLODLevel; /* Ofs: 0x428 Size: 0x4 - IntProperty Landscape.LandscapeProxy.MaxLODLevel */
	float LODDistanceFactor; /* Ofs: 0x42C Size: 0x4 - FloatProperty Landscape.LandscapeProxy.LODDistanceFactor */
	TEnumAsByte<enum ELandscapeLODFalloff> LODFalloff; /* Ofs: 0x430 Size: 0x1 - ByteProperty Landscape.LandscapeProxy.LODFalloff */
	uint8_t UnknownData431[0x3];
	int32_t StaticLightingLOD; /* Ofs: 0x434 Size: 0x4 - IntProperty Landscape.LandscapeProxy.StaticLightingLOD */
	ExternalPtr<struct UPhysicalMaterial> DefaultPhysMaterial; /* Ofs: 0x438 Size: 0x8 - ObjectProperty Landscape.LandscapeProxy.DefaultPhysMaterial */
	float StreamingDistanceMultiplier; /* Ofs: 0x440 Size: 0x4 - FloatProperty Landscape.LandscapeProxy.StreamingDistanceMultiplier */
	uint8_t UnknownData444[0x4];
	ExternalPtr<struct UMaterialInterface> LandscapeMaterial; /* Ofs: 0x448 Size: 0x8 - ObjectProperty Landscape.LandscapeProxy.LandscapeMaterial */
	ExternalPtr<struct UMaterialInterface> LandscapeHoleMaterial; /* Ofs: 0x450 Size: 0x8 - ObjectProperty Landscape.LandscapeProxy.LandscapeHoleMaterial */
	float NegativeZBoundsExtension; /* Ofs: 0x458 Size: 0x4 - FloatProperty Landscape.LandscapeProxy.NegativeZBoundsExtension */
	float PositiveZBoundsExtension; /* Ofs: 0x45C Size: 0x4 - FloatProperty Landscape.LandscapeProxy.PositiveZBoundsExtension */
	TArray<ExternalPtr<struct ULandscapeComponent>> LandscapeComponents; /* Ofs: 0x460 Size: 0x10 - ArrayProperty Landscape.LandscapeProxy.LandscapeComponents */
	TArray<ExternalPtr<struct ULandscapeHeightfieldCollisionComponent>> CollisionComponents; /* Ofs: 0x470 Size: 0x10 - ArrayProperty Landscape.LandscapeProxy.CollisionComponents */
	TArray<ExternalPtr<struct UHierarchicalInstancedStaticMeshComponent>> FoliageComponents; /* Ofs: 0x480 Size: 0x10 - ArrayProperty Landscape.LandscapeProxy.FoliageComponents */
	uint8_t UnknownData490[0x60];
	uint8_t boolField4F0;
	uint8_t UnknownData4F1[0x3];
	float StaticLightingResolution; /* Ofs: 0x4F4 Size: 0x4 - FloatProperty Landscape.LandscapeProxy.StaticLightingResolution */
	uint8_t boolField4F8;
	uint8_t UnknownData4F9[0x3];
	FLightingChannels LightingChannels; /* Ofs: 0x4FC Size: 0x3 - StructProperty Landscape.LandscapeProxy.LightingChannels */
	uint8_t UnknownData4FF[0x1];
	uint8_t boolField500;
	uint8_t UnknownData501[0x3];
	int32_t CustomDepthStencilValue; /* Ofs: 0x504 Size: 0x4 - IntProperty Landscape.LandscapeProxy.CustomDepthStencilValue */
	FLightmassPrimitiveSettings LightmassSettings; /* Ofs: 0x508 Size: 0x18 - StructProperty Landscape.LandscapeProxy.LightmassSettings */
	int32_t CollisionMipLevel; /* Ofs: 0x520 Size: 0x4 - IntProperty Landscape.LandscapeProxy.CollisionMipLevel */
	int32_t SimpleCollisionMipLevel; /* Ofs: 0x524 Size: 0x4 - IntProperty Landscape.LandscapeProxy.SimpleCollisionMipLevel */
	float CollisionThickness; /* Ofs: 0x528 Size: 0x4 - FloatProperty Landscape.LandscapeProxy.CollisionThickness */
	uint8_t UnknownData52C[0x4];
	FBodyInstance BodyInstance; /* Ofs: 0x530 Size: 0x240 - StructProperty Landscape.LandscapeProxy.BodyInstance */
	uint8_t boolField770;
	uint8_t UnknownData771[0x3];
	int32_t ComponentSizeQuads; /* Ofs: 0x774 Size: 0x4 - IntProperty Landscape.LandscapeProxy.ComponentSizeQuads */
	int32_t SubsectionSizeQuads; /* Ofs: 0x778 Size: 0x4 - IntProperty Landscape.LandscapeProxy.SubsectionSizeQuads */
	int32_t NumSubsections; /* Ofs: 0x77C Size: 0x4 - IntProperty Landscape.LandscapeProxy.NumSubsections */
	uint8_t boolField780;
	uint8_t UnknownData781[0x3];
	TEnumAsByte<enum ENavDataGatheringMode> NavigationGeometryGatheringMode; /* Ofs: 0x784 Size: 0x1 - EnumProperty Landscape.LandscapeProxy.NavigationGeometryGatheringMode */
	uint8_t boolField785;
	uint8_t UnknownData786[0xDA];


//	inline bool SetSplineComponent(t_structHelper inst, ExternalPtr<struct ULandscapeSplinesComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetLandscapeGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x410, value); }
	inline bool SetLandscapeSectionOffset(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0x420, value); }
	inline bool SetMaxLODLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x428, value); }
	inline bool SetLODDistanceFactor(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
	inline bool SetLODFalloff(t_structHelper inst, TEnumAsByte<enum ELandscapeLODFalloff> value) { inst.WriteOffset(0x430, value); }
	inline bool SetStaticLightingLOD(t_structHelper inst, int32_t value) { inst.WriteOffset(0x434, value); }
	inline bool SetDefaultPhysMaterial(t_structHelper inst, ExternalPtr<struct UPhysicalMaterial> value) { inst.WriteOffset(0x438, value); }
	inline bool SetStreamingDistanceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetLandscapeMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x448, value); }
	inline bool SetLandscapeHoleMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x450, value); }
	inline bool SetNegativeZBoundsExtension(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool SetPositiveZBoundsExtension(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetLandscapeComponents(t_structHelper inst, TArray<ExternalPtr<struct ULandscapeComponent>> value) { inst.WriteOffset(0x460, value); }
	inline bool SetCollisionComponents(t_structHelper inst, TArray<ExternalPtr<struct ULandscapeHeightfieldCollisionComponent>> value) { inst.WriteOffset(0x470, value); }
	inline bool SetFoliageComponents(t_structHelper inst, TArray<ExternalPtr<struct UHierarchicalInstancedStaticMeshComponent>> value) { inst.WriteOffset(0x480, value); }
	inline bool bHasLandscapeGrass()
	{
		return boolField4F0& 0x1;
	}
	inline bool SetbHasLandscapeGrass(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStaticLightingResolution(t_structHelper inst, float value) { inst.WriteOffset(0x4F4, value); }
	inline bool bCastStaticShadow()
	{
		return boolField4F8& 0x1;
	}
	inline bool SetbCastStaticShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCastShadowAsTwoSided()
	{
		return boolField4F8& 0x2;
	}
	inline bool SetbCastShadowAsTwoSided(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCastFarShadow()
	{
		return boolField4F8& 0x4;
	}
	inline bool SetbCastFarShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetLightingChannels(t_structHelper inst, FLightingChannels value) { inst.WriteOffset(0x4FC, value); }
	inline bool bUseMaterialPositionOffsetInStaticLighting()
	{
		return boolField500& 0x1;
	}
	inline bool SetbUseMaterialPositionOffsetInStaticLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x500, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRenderCustomDepth()
	{
		return boolField500& 0x2;
	}
	inline bool SetbRenderCustomDepth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x500, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetCustomDepthStencilValue(t_structHelper inst, int32_t value) { inst.WriteOffset(0x504, value); }
	inline bool SetLightmassSettings(t_structHelper inst, FLightmassPrimitiveSettings value) { inst.WriteOffset(0x508, value); }
	inline bool SetCollisionMipLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x520, value); }
	inline bool SetSimpleCollisionMipLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x524, value); }
	inline bool SetCollisionThickness(t_structHelper inst, float value) { inst.WriteOffset(0x528, value); }
	inline bool SetBodyInstance(t_structHelper inst, FBodyInstance value) { inst.WriteOffset(0x530, value); }
	inline bool bGenerateOverlapEvents()
	{
		return boolField770& 0x1;
	}
	inline bool SetbGenerateOverlapEvents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x770, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bBakeMaterialPositionOffsetIntoCollision()
	{
		return boolField770& 0x2;
	}
	inline bool SetbBakeMaterialPositionOffsetIntoCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x770, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetComponentSizeQuads(t_structHelper inst, int32_t value) { inst.WriteOffset(0x774, value); }
	inline bool SetSubsectionSizeQuads(t_structHelper inst, int32_t value) { inst.WriteOffset(0x778, value); }
	inline bool SetNumSubsections(t_structHelper inst, int32_t value) { inst.WriteOffset(0x77C, value); }
	inline bool bUsedForNavigation()
	{
		return boolField780& 0x1;
	}
	inline bool SetbUsedForNavigation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x780, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNavigationGeometryGatheringMode(t_structHelper inst, TEnumAsByte<enum ENavDataGatheringMode> value) { inst.WriteOffset(0x784, value); }
	inline bool bUseLandscapeForCullingInvisibleHLODVertices()
	{
		return boolField785& 0x1;
	}
	inline bool SetbUseLandscapeForCullingInvisibleHLODVertices(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x785, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeProxy = sizeof(ULandscapeProxy); // 2144
    static_assert(sizeof(ULandscapeProxy) == 0x860, "Size of ULandscapeProxy is not correct.");
//	auto constexpr ULandscapeProxy_SplineComponent_Offset = offsetof(ULandscapeProxy, SplineComponent);
//	static_assert(ULandscapeProxy_SplineComponent_Offset == 0x408, "ULandscapeProxy::SplineComponent offset is not 408");
	auto constexpr ULandscapeProxy_LandscapeGuid_Offset = offsetof(ULandscapeProxy, LandscapeGuid);
	static_assert(ULandscapeProxy_LandscapeGuid_Offset == 0x410, "ULandscapeProxy::LandscapeGuid offset is not 410");
	auto constexpr ULandscapeProxy_LandscapeSectionOffset_Offset = offsetof(ULandscapeProxy, LandscapeSectionOffset);
	static_assert(ULandscapeProxy_LandscapeSectionOffset_Offset == 0x420, "ULandscapeProxy::LandscapeSectionOffset offset is not 420");
	auto constexpr ULandscapeProxy_MaxLODLevel_Offset = offsetof(ULandscapeProxy, MaxLODLevel);
	static_assert(ULandscapeProxy_MaxLODLevel_Offset == 0x428, "ULandscapeProxy::MaxLODLevel offset is not 428");
	auto constexpr ULandscapeProxy_LODDistanceFactor_Offset = offsetof(ULandscapeProxy, LODDistanceFactor);
	static_assert(ULandscapeProxy_LODDistanceFactor_Offset == 0x42c, "ULandscapeProxy::LODDistanceFactor offset is not 42c");
	auto constexpr ULandscapeProxy_LODFalloff_Offset = offsetof(ULandscapeProxy, LODFalloff);
	static_assert(ULandscapeProxy_LODFalloff_Offset == 0x430, "ULandscapeProxy::LODFalloff offset is not 430");
	auto constexpr ULandscapeProxy_StaticLightingLOD_Offset = offsetof(ULandscapeProxy, StaticLightingLOD);
	static_assert(ULandscapeProxy_StaticLightingLOD_Offset == 0x434, "ULandscapeProxy::StaticLightingLOD offset is not 434");
	auto constexpr ULandscapeProxy_DefaultPhysMaterial_Offset = offsetof(ULandscapeProxy, DefaultPhysMaterial);
	static_assert(ULandscapeProxy_DefaultPhysMaterial_Offset == 0x438, "ULandscapeProxy::DefaultPhysMaterial offset is not 438");
	auto constexpr ULandscapeProxy_StreamingDistanceMultiplier_Offset = offsetof(ULandscapeProxy, StreamingDistanceMultiplier);
	static_assert(ULandscapeProxy_StreamingDistanceMultiplier_Offset == 0x440, "ULandscapeProxy::StreamingDistanceMultiplier offset is not 440");
	auto constexpr ULandscapeProxy_LandscapeMaterial_Offset = offsetof(ULandscapeProxy, LandscapeMaterial);
	static_assert(ULandscapeProxy_LandscapeMaterial_Offset == 0x448, "ULandscapeProxy::LandscapeMaterial offset is not 448");
	auto constexpr ULandscapeProxy_LandscapeHoleMaterial_Offset = offsetof(ULandscapeProxy, LandscapeHoleMaterial);
	static_assert(ULandscapeProxy_LandscapeHoleMaterial_Offset == 0x450, "ULandscapeProxy::LandscapeHoleMaterial offset is not 450");
	auto constexpr ULandscapeProxy_NegativeZBoundsExtension_Offset = offsetof(ULandscapeProxy, NegativeZBoundsExtension);
	static_assert(ULandscapeProxy_NegativeZBoundsExtension_Offset == 0x458, "ULandscapeProxy::NegativeZBoundsExtension offset is not 458");
	auto constexpr ULandscapeProxy_PositiveZBoundsExtension_Offset = offsetof(ULandscapeProxy, PositiveZBoundsExtension);
	static_assert(ULandscapeProxy_PositiveZBoundsExtension_Offset == 0x45c, "ULandscapeProxy::PositiveZBoundsExtension offset is not 45c");
	auto constexpr ULandscapeProxy_LandscapeComponents_Offset = offsetof(ULandscapeProxy, LandscapeComponents);
	static_assert(ULandscapeProxy_LandscapeComponents_Offset == 0x460, "ULandscapeProxy::LandscapeComponents offset is not 460");
	auto constexpr ULandscapeProxy_CollisionComponents_Offset = offsetof(ULandscapeProxy, CollisionComponents);
	static_assert(ULandscapeProxy_CollisionComponents_Offset == 0x470, "ULandscapeProxy::CollisionComponents offset is not 470");
	auto constexpr ULandscapeProxy_FoliageComponents_Offset = offsetof(ULandscapeProxy, FoliageComponents);
	static_assert(ULandscapeProxy_FoliageComponents_Offset == 0x480, "ULandscapeProxy::FoliageComponents offset is not 480");
	auto constexpr ULandscapeProxy_boolField4F0_Offset = offsetof(ULandscapeProxy, boolField4F0);
	static_assert(ULandscapeProxy_boolField4F0_Offset == 0x4f0, "ULandscapeProxy::boolField4F0 offset is not 4f0");
	auto constexpr ULandscapeProxy_StaticLightingResolution_Offset = offsetof(ULandscapeProxy, StaticLightingResolution);
	static_assert(ULandscapeProxy_StaticLightingResolution_Offset == 0x4f4, "ULandscapeProxy::StaticLightingResolution offset is not 4f4");
	auto constexpr ULandscapeProxy_boolField4F8_Offset = offsetof(ULandscapeProxy, boolField4F8);
	static_assert(ULandscapeProxy_boolField4F8_Offset == 0x4f8, "ULandscapeProxy::boolField4F8 offset is not 4f8");
	auto constexpr ULandscapeProxy_LightingChannels_Offset = offsetof(ULandscapeProxy, LightingChannels);
	static_assert(ULandscapeProxy_LightingChannels_Offset == 0x4fc, "ULandscapeProxy::LightingChannels offset is not 4fc");
	auto constexpr ULandscapeProxy_boolField500_Offset = offsetof(ULandscapeProxy, boolField500);
	static_assert(ULandscapeProxy_boolField500_Offset == 0x500, "ULandscapeProxy::boolField500 offset is not 500");
	auto constexpr ULandscapeProxy_CustomDepthStencilValue_Offset = offsetof(ULandscapeProxy, CustomDepthStencilValue);
	static_assert(ULandscapeProxy_CustomDepthStencilValue_Offset == 0x504, "ULandscapeProxy::CustomDepthStencilValue offset is not 504");
	auto constexpr ULandscapeProxy_LightmassSettings_Offset = offsetof(ULandscapeProxy, LightmassSettings);
	static_assert(ULandscapeProxy_LightmassSettings_Offset == 0x508, "ULandscapeProxy::LightmassSettings offset is not 508");
	auto constexpr ULandscapeProxy_CollisionMipLevel_Offset = offsetof(ULandscapeProxy, CollisionMipLevel);
	static_assert(ULandscapeProxy_CollisionMipLevel_Offset == 0x520, "ULandscapeProxy::CollisionMipLevel offset is not 520");
	auto constexpr ULandscapeProxy_SimpleCollisionMipLevel_Offset = offsetof(ULandscapeProxy, SimpleCollisionMipLevel);
	static_assert(ULandscapeProxy_SimpleCollisionMipLevel_Offset == 0x524, "ULandscapeProxy::SimpleCollisionMipLevel offset is not 524");
	auto constexpr ULandscapeProxy_CollisionThickness_Offset = offsetof(ULandscapeProxy, CollisionThickness);
	static_assert(ULandscapeProxy_CollisionThickness_Offset == 0x528, "ULandscapeProxy::CollisionThickness offset is not 528");
	auto constexpr ULandscapeProxy_BodyInstance_Offset = offsetof(ULandscapeProxy, BodyInstance);
	static_assert(ULandscapeProxy_BodyInstance_Offset == 0x530, "ULandscapeProxy::BodyInstance offset is not 530");
	auto constexpr ULandscapeProxy_boolField770_Offset = offsetof(ULandscapeProxy, boolField770);
	static_assert(ULandscapeProxy_boolField770_Offset == 0x770, "ULandscapeProxy::boolField770 offset is not 770");
	auto constexpr ULandscapeProxy_ComponentSizeQuads_Offset = offsetof(ULandscapeProxy, ComponentSizeQuads);
	static_assert(ULandscapeProxy_ComponentSizeQuads_Offset == 0x774, "ULandscapeProxy::ComponentSizeQuads offset is not 774");
	auto constexpr ULandscapeProxy_SubsectionSizeQuads_Offset = offsetof(ULandscapeProxy, SubsectionSizeQuads);
	static_assert(ULandscapeProxy_SubsectionSizeQuads_Offset == 0x778, "ULandscapeProxy::SubsectionSizeQuads offset is not 778");
	auto constexpr ULandscapeProxy_NumSubsections_Offset = offsetof(ULandscapeProxy, NumSubsections);
	static_assert(ULandscapeProxy_NumSubsections_Offset == 0x77c, "ULandscapeProxy::NumSubsections offset is not 77c");
	auto constexpr ULandscapeProxy_boolField780_Offset = offsetof(ULandscapeProxy, boolField780);
	static_assert(ULandscapeProxy_boolField780_Offset == 0x780, "ULandscapeProxy::boolField780 offset is not 780");
	auto constexpr ULandscapeProxy_NavigationGeometryGatheringMode_Offset = offsetof(ULandscapeProxy, NavigationGeometryGatheringMode);
	static_assert(ULandscapeProxy_NavigationGeometryGatheringMode_Offset == 0x784, "ULandscapeProxy::NavigationGeometryGatheringMode offset is not 784");
	auto constexpr ULandscapeProxy_boolField785_Offset = offsetof(ULandscapeProxy, boolField785);
	static_assert(ULandscapeProxy_boolField785_Offset == 0x785, "ULandscapeProxy::boolField785 offset is not 785");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
