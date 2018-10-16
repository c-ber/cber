#pragma once
#include "UPrimitiveComponent.hpp"
#include "FVector4.hpp"
#include "FBox.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeComponent // Size: 0xA60
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef ULandscapeComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1282); // id32("Class Landscape.LandscapeComponent")
		return ptr;
	}
//	int32_t SectionBaseX; /* Ofs: 0x8E8 Size: 0x4 - IntProperty Landscape.LandscapeComponent.SectionBaseX */
//	int32_t SectionBaseY; /* Ofs: 0x8EC Size: 0x4 - IntProperty Landscape.LandscapeComponent.SectionBaseY */
	int32_t ComponentSizeQuads; /* Ofs: 0x8F0 Size: 0x4 - IntProperty Landscape.LandscapeComponent.ComponentSizeQuads */
	int32_t SubsectionSizeQuads; /* Ofs: 0x8F4 Size: 0x4 - IntProperty Landscape.LandscapeComponent.SubsectionSizeQuads */
	int32_t NumSubsections; /* Ofs: 0x8F8 Size: 0x4 - IntProperty Landscape.LandscapeComponent.NumSubsections */
	uint8_t UnknownData8FC[0x4];
	ExternalPtr<struct UMaterialInterface> OverrideMaterial; /* Ofs: 0x900 Size: 0x8 - ObjectProperty Landscape.LandscapeComponent.OverrideMaterial */
	ExternalPtr<struct UMaterialInterface> OverrideHoleMaterial; /* Ofs: 0x908 Size: 0x8 - ObjectProperty Landscape.LandscapeComponent.OverrideHoleMaterial */
	TArray<ExternalPtr<struct UMaterialInstanceConstant>> MaterialInstances; /* Ofs: 0x910 Size: 0x10 - ArrayProperty Landscape.LandscapeComponent.MaterialInstances */
	TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; /* Ofs: 0x920 Size: 0x10 - ArrayProperty Landscape.LandscapeComponent.WeightmapLayerAllocations */
	TArray<ExternalPtr<struct UTexture2D>> WeightmapTextures; /* Ofs: 0x930 Size: 0x10 - ArrayProperty Landscape.LandscapeComponent.WeightmapTextures */
	ExternalPtr<struct UTexture2D> XYOffsetmapTexture; /* Ofs: 0x940 Size: 0x8 - ObjectProperty Landscape.LandscapeComponent.XYOffsetmapTexture */
	uint8_t UnknownData948[0x8];
	FVector4 WeightmapScaleBias; /* Ofs: 0x950 Size: 0x10 - StructProperty Landscape.LandscapeComponent.WeightmapScaleBias */
	float WeightmapSubsectionOffset; /* Ofs: 0x960 Size: 0x4 - FloatProperty Landscape.LandscapeComponent.WeightmapSubsectionOffset */
	uint8_t UnknownData964[0xC];
	FVector4 HeightmapScaleBias; /* Ofs: 0x970 Size: 0x10 - StructProperty Landscape.LandscapeComponent.HeightmapScaleBias */
	ExternalPtr<struct UTexture2D> HeightmapTexture; /* Ofs: 0x980 Size: 0x8 - ObjectProperty Landscape.LandscapeComponent.HeightmapTexture */
	FBox CachedLocalBox; /* Ofs: 0x988 Size: 0x1C - StructProperty Landscape.LandscapeComponent.CachedLocalBox */
	TLazyObjectPtr<ExternalPtr<struct ULandscapeHeightfieldCollisionComponent>> CollisionComponent; /* Ofs: 0x9A4 Size: 0x1C - LazyObjectProperty Landscape.LandscapeComponent.CollisionComponent */
	FGuid MapBuildDataId; /* Ofs: 0x9C0 Size: 0x10 - StructProperty Landscape.LandscapeComponent.MapBuildDataId */
	TArray<struct FGuid> IrrelevantLights; /* Ofs: 0x9D0 Size: 0x10 - ArrayProperty Landscape.LandscapeComponent.IrrelevantLights */
	int32_t CollisionMipLevel; /* Ofs: 0x9E0 Size: 0x4 - IntProperty Landscape.LandscapeComponent.CollisionMipLevel */
	int32_t SimpleCollisionMipLevel; /* Ofs: 0x9E4 Size: 0x4 - IntProperty Landscape.LandscapeComponent.SimpleCollisionMipLevel */
	float NegativeZBoundsExtension; /* Ofs: 0x9E8 Size: 0x4 - FloatProperty Landscape.LandscapeComponent.NegativeZBoundsExtension */
	float PositiveZBoundsExtension; /* Ofs: 0x9EC Size: 0x4 - FloatProperty Landscape.LandscapeComponent.PositiveZBoundsExtension */
	float StaticLightingResolution; /* Ofs: 0x9F0 Size: 0x4 - FloatProperty Landscape.LandscapeComponent.StaticLightingResolution */
	int32_t ForcedLOD; /* Ofs: 0x9F4 Size: 0x4 - IntProperty Landscape.LandscapeComponent.ForcedLOD */
	int32_t LODBias; /* Ofs: 0x9F8 Size: 0x4 - IntProperty Landscape.LandscapeComponent.LODBias */
	FGuid StateId; /* Ofs: 0x9FC Size: 0x10 - StructProperty Landscape.LandscapeComponent.StateId */
	FGuid BakedTextureMaterialGuid; /* Ofs: 0xA0C Size: 0x10 - StructProperty Landscape.LandscapeComponent.BakedTextureMaterialGuid */
	uint8_t UnknownDataA1C[0x4];
	ExternalPtr<struct UTexture2D> GIBakedBaseColorTexture; /* Ofs: 0xA20 Size: 0x8 - ObjectProperty Landscape.LandscapeComponent.GIBakedBaseColorTexture */
	uint8_t boolFieldA28;
	uint8_t MobileBlendableLayerMask; /* Ofs: 0xA29 Size: 0x1 - ByteProperty Landscape.LandscapeComponent.MobileBlendableLayerMask */
	uint8_t UnknownDataA2A[0x6];
	ExternalPtr<struct UMaterialInterface> MobileMaterialInterface; /* Ofs: 0xA30 Size: 0x8 - ObjectProperty Landscape.LandscapeComponent.MobileMaterialInterface */
	ExternalPtr<struct UTexture2D> MobileWeightNormalmapTexture; /* Ofs: 0xA38 Size: 0x8 - ObjectProperty Landscape.LandscapeComponent.MobileWeightNormalmapTexture */
	uint8_t UnknownDataA40[0x20];


//	inline bool SetSectionBaseX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8E8, value); }
//	inline bool SetSectionBaseY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8EC, value); }
	inline bool SetComponentSizeQuads(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetSubsectionSizeQuads(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8F4, value); }
	inline bool SetNumSubsections(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetOverrideMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x900, value); }
	inline bool SetOverrideHoleMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x908, value); }
	inline bool SetMaterialInstances(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInstanceConstant>> value) { inst.WriteOffset(0x910, value); }
	inline bool SetWeightmapLayerAllocations(t_structHelper inst, TArray<struct FWeightmapLayerAllocationInfo> value) { inst.WriteOffset(0x920, value); }
	inline bool SetWeightmapTextures(t_structHelper inst, TArray<ExternalPtr<struct UTexture2D>> value) { inst.WriteOffset(0x930, value); }
	inline bool SetXYOffsetmapTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x940, value); }
	inline bool SetWeightmapScaleBias(t_structHelper inst, FVector4 value) { inst.WriteOffset(0x950, value); }
	inline bool SetWeightmapSubsectionOffset(t_structHelper inst, float value) { inst.WriteOffset(0x960, value); }
	inline bool SetHeightmapScaleBias(t_structHelper inst, FVector4 value) { inst.WriteOffset(0x970, value); }
	inline bool SetHeightmapTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x980, value); }
	inline bool SetCachedLocalBox(t_structHelper inst, FBox value) { inst.WriteOffset(0x988, value); }
	inline bool SetCollisionComponent(t_structHelper inst, TLazyObjectPtr<ExternalPtr<struct ULandscapeHeightfieldCollisionComponent>> value) { inst.WriteOffset(0x9A4, value); }
	inline bool SetMapBuildDataId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x9C0, value); }
	inline bool SetIrrelevantLights(t_structHelper inst, TArray<struct FGuid> value) { inst.WriteOffset(0x9D0, value); }
	inline bool SetCollisionMipLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9E0, value); }
	inline bool SetSimpleCollisionMipLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9E4, value); }
	inline bool SetNegativeZBoundsExtension(t_structHelper inst, float value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetPositiveZBoundsExtension(t_structHelper inst, float value) { inst.WriteOffset(0x9EC, value); }
	inline bool SetStaticLightingResolution(t_structHelper inst, float value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetForcedLOD(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9F4, value); }
	inline bool SetLODBias(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetStateId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x9FC, value); }
	inline bool SetBakedTextureMaterialGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0xA0C, value); }
	inline bool SetGIBakedBaseColorTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0xA20, value); }
	inline bool bRemoveGrass()
	{
		return boolFieldA28& 0x1;
	}
	inline bool SetbRemoveGrass(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA28, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMobileBlendableLayerMask(t_structHelper inst, uint8_t value) { inst.WriteOffset(0xA29, value); }
	inline bool SetMobileMaterialInterface(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0xA30, value); }
	inline bool SetMobileWeightNormalmapTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0xA38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeComponent = sizeof(ULandscapeComponent); // 2656
    static_assert(sizeof(ULandscapeComponent) == 0xA60, "Size of ULandscapeComponent is not correct.");
//	auto constexpr ULandscapeComponent_SectionBaseX_Offset = offsetof(ULandscapeComponent, SectionBaseX);
//	static_assert(ULandscapeComponent_SectionBaseX_Offset == 0x8e8, "ULandscapeComponent::SectionBaseX offset is not 8e8");
//	auto constexpr ULandscapeComponent_SectionBaseY_Offset = offsetof(ULandscapeComponent, SectionBaseY);
//	static_assert(ULandscapeComponent_SectionBaseY_Offset == 0x8ec, "ULandscapeComponent::SectionBaseY offset is not 8ec");
	auto constexpr ULandscapeComponent_ComponentSizeQuads_Offset = offsetof(ULandscapeComponent, ComponentSizeQuads);
	static_assert(ULandscapeComponent_ComponentSizeQuads_Offset == 0x8f0, "ULandscapeComponent::ComponentSizeQuads offset is not 8f0");
	auto constexpr ULandscapeComponent_SubsectionSizeQuads_Offset = offsetof(ULandscapeComponent, SubsectionSizeQuads);
	static_assert(ULandscapeComponent_SubsectionSizeQuads_Offset == 0x8f4, "ULandscapeComponent::SubsectionSizeQuads offset is not 8f4");
	auto constexpr ULandscapeComponent_NumSubsections_Offset = offsetof(ULandscapeComponent, NumSubsections);
	static_assert(ULandscapeComponent_NumSubsections_Offset == 0x8f8, "ULandscapeComponent::NumSubsections offset is not 8f8");
	auto constexpr ULandscapeComponent_OverrideMaterial_Offset = offsetof(ULandscapeComponent, OverrideMaterial);
	static_assert(ULandscapeComponent_OverrideMaterial_Offset == 0x900, "ULandscapeComponent::OverrideMaterial offset is not 900");
	auto constexpr ULandscapeComponent_OverrideHoleMaterial_Offset = offsetof(ULandscapeComponent, OverrideHoleMaterial);
	static_assert(ULandscapeComponent_OverrideHoleMaterial_Offset == 0x908, "ULandscapeComponent::OverrideHoleMaterial offset is not 908");
	auto constexpr ULandscapeComponent_MaterialInstances_Offset = offsetof(ULandscapeComponent, MaterialInstances);
	static_assert(ULandscapeComponent_MaterialInstances_Offset == 0x910, "ULandscapeComponent::MaterialInstances offset is not 910");
	auto constexpr ULandscapeComponent_WeightmapLayerAllocations_Offset = offsetof(ULandscapeComponent, WeightmapLayerAllocations);
	static_assert(ULandscapeComponent_WeightmapLayerAllocations_Offset == 0x920, "ULandscapeComponent::WeightmapLayerAllocations offset is not 920");
	auto constexpr ULandscapeComponent_WeightmapTextures_Offset = offsetof(ULandscapeComponent, WeightmapTextures);
	static_assert(ULandscapeComponent_WeightmapTextures_Offset == 0x930, "ULandscapeComponent::WeightmapTextures offset is not 930");
	auto constexpr ULandscapeComponent_XYOffsetmapTexture_Offset = offsetof(ULandscapeComponent, XYOffsetmapTexture);
	static_assert(ULandscapeComponent_XYOffsetmapTexture_Offset == 0x940, "ULandscapeComponent::XYOffsetmapTexture offset is not 940");
	auto constexpr ULandscapeComponent_WeightmapScaleBias_Offset = offsetof(ULandscapeComponent, WeightmapScaleBias);
	static_assert(ULandscapeComponent_WeightmapScaleBias_Offset == 0x950, "ULandscapeComponent::WeightmapScaleBias offset is not 950");
	auto constexpr ULandscapeComponent_WeightmapSubsectionOffset_Offset = offsetof(ULandscapeComponent, WeightmapSubsectionOffset);
	static_assert(ULandscapeComponent_WeightmapSubsectionOffset_Offset == 0x960, "ULandscapeComponent::WeightmapSubsectionOffset offset is not 960");
	auto constexpr ULandscapeComponent_HeightmapScaleBias_Offset = offsetof(ULandscapeComponent, HeightmapScaleBias);
	static_assert(ULandscapeComponent_HeightmapScaleBias_Offset == 0x970, "ULandscapeComponent::HeightmapScaleBias offset is not 970");
	auto constexpr ULandscapeComponent_HeightmapTexture_Offset = offsetof(ULandscapeComponent, HeightmapTexture);
	static_assert(ULandscapeComponent_HeightmapTexture_Offset == 0x980, "ULandscapeComponent::HeightmapTexture offset is not 980");
	auto constexpr ULandscapeComponent_CachedLocalBox_Offset = offsetof(ULandscapeComponent, CachedLocalBox);
	static_assert(ULandscapeComponent_CachedLocalBox_Offset == 0x988, "ULandscapeComponent::CachedLocalBox offset is not 988");
	auto constexpr ULandscapeComponent_CollisionComponent_Offset = offsetof(ULandscapeComponent, CollisionComponent);
	static_assert(ULandscapeComponent_CollisionComponent_Offset == 0x9a4, "ULandscapeComponent::CollisionComponent offset is not 9a4");
	auto constexpr ULandscapeComponent_MapBuildDataId_Offset = offsetof(ULandscapeComponent, MapBuildDataId);
	static_assert(ULandscapeComponent_MapBuildDataId_Offset == 0x9c0, "ULandscapeComponent::MapBuildDataId offset is not 9c0");
	auto constexpr ULandscapeComponent_IrrelevantLights_Offset = offsetof(ULandscapeComponent, IrrelevantLights);
	static_assert(ULandscapeComponent_IrrelevantLights_Offset == 0x9d0, "ULandscapeComponent::IrrelevantLights offset is not 9d0");
	auto constexpr ULandscapeComponent_CollisionMipLevel_Offset = offsetof(ULandscapeComponent, CollisionMipLevel);
	static_assert(ULandscapeComponent_CollisionMipLevel_Offset == 0x9e0, "ULandscapeComponent::CollisionMipLevel offset is not 9e0");
	auto constexpr ULandscapeComponent_SimpleCollisionMipLevel_Offset = offsetof(ULandscapeComponent, SimpleCollisionMipLevel);
	static_assert(ULandscapeComponent_SimpleCollisionMipLevel_Offset == 0x9e4, "ULandscapeComponent::SimpleCollisionMipLevel offset is not 9e4");
	auto constexpr ULandscapeComponent_NegativeZBoundsExtension_Offset = offsetof(ULandscapeComponent, NegativeZBoundsExtension);
	static_assert(ULandscapeComponent_NegativeZBoundsExtension_Offset == 0x9e8, "ULandscapeComponent::NegativeZBoundsExtension offset is not 9e8");
	auto constexpr ULandscapeComponent_PositiveZBoundsExtension_Offset = offsetof(ULandscapeComponent, PositiveZBoundsExtension);
	static_assert(ULandscapeComponent_PositiveZBoundsExtension_Offset == 0x9ec, "ULandscapeComponent::PositiveZBoundsExtension offset is not 9ec");
	auto constexpr ULandscapeComponent_StaticLightingResolution_Offset = offsetof(ULandscapeComponent, StaticLightingResolution);
	static_assert(ULandscapeComponent_StaticLightingResolution_Offset == 0x9f0, "ULandscapeComponent::StaticLightingResolution offset is not 9f0");
	auto constexpr ULandscapeComponent_ForcedLOD_Offset = offsetof(ULandscapeComponent, ForcedLOD);
	static_assert(ULandscapeComponent_ForcedLOD_Offset == 0x9f4, "ULandscapeComponent::ForcedLOD offset is not 9f4");
	auto constexpr ULandscapeComponent_LODBias_Offset = offsetof(ULandscapeComponent, LODBias);
	static_assert(ULandscapeComponent_LODBias_Offset == 0x9f8, "ULandscapeComponent::LODBias offset is not 9f8");
	auto constexpr ULandscapeComponent_StateId_Offset = offsetof(ULandscapeComponent, StateId);
	static_assert(ULandscapeComponent_StateId_Offset == 0x9fc, "ULandscapeComponent::StateId offset is not 9fc");
	auto constexpr ULandscapeComponent_BakedTextureMaterialGuid_Offset = offsetof(ULandscapeComponent, BakedTextureMaterialGuid);
	static_assert(ULandscapeComponent_BakedTextureMaterialGuid_Offset == 0xa0c, "ULandscapeComponent::BakedTextureMaterialGuid offset is not a0c");
	auto constexpr ULandscapeComponent_GIBakedBaseColorTexture_Offset = offsetof(ULandscapeComponent, GIBakedBaseColorTexture);
	static_assert(ULandscapeComponent_GIBakedBaseColorTexture_Offset == 0xa20, "ULandscapeComponent::GIBakedBaseColorTexture offset is not a20");
	auto constexpr ULandscapeComponent_boolFieldA28_Offset = offsetof(ULandscapeComponent, boolFieldA28);
	static_assert(ULandscapeComponent_boolFieldA28_Offset == 0xa28, "ULandscapeComponent::boolFieldA28 offset is not a28");
	auto constexpr ULandscapeComponent_MobileBlendableLayerMask_Offset = offsetof(ULandscapeComponent, MobileBlendableLayerMask);
	static_assert(ULandscapeComponent_MobileBlendableLayerMask_Offset == 0xa29, "ULandscapeComponent::MobileBlendableLayerMask offset is not a29");
	auto constexpr ULandscapeComponent_MobileMaterialInterface_Offset = offsetof(ULandscapeComponent, MobileMaterialInterface);
	static_assert(ULandscapeComponent_MobileMaterialInterface_Offset == 0xa30, "ULandscapeComponent::MobileMaterialInterface offset is not a30");
	auto constexpr ULandscapeComponent_MobileWeightNormalmapTexture_Offset = offsetof(ULandscapeComponent, MobileWeightNormalmapTexture);
	static_assert(ULandscapeComponent_MobileWeightNormalmapTexture_Offset == 0xa38, "ULandscapeComponent::MobileWeightNormalmapTexture offset is not a38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
