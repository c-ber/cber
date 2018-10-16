#pragma once
#include "UPrimitiveComponent.hpp"
#include "FGuid.hpp"
#include "FBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeHeightfieldCollisionComponent // Size: 0x9D0
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef ULandscapeHeightfieldCollisionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1287); // id32("Class Landscape.LandscapeHeightfieldCollisionComponent")
		return ptr;
	}
//	TArray<ExternalPtr<struct ULandscapeLayerInfoObject>> ComponentLayerInfos; /* Ofs: 0x8E8 Size: 0x10 - ArrayProperty Landscape.LandscapeHeightfieldCollisionComponent.ComponentLayerInfos */
	uint8_t UnknownData8F0[0x8];
	int32_t SectionBaseX; /* Ofs: 0x8F8 Size: 0x4 - IntProperty Landscape.LandscapeHeightfieldCollisionComponent.SectionBaseX */
	int32_t SectionBaseY; /* Ofs: 0x8FC Size: 0x4 - IntProperty Landscape.LandscapeHeightfieldCollisionComponent.SectionBaseY */
	int32_t CollisionSizeQuads; /* Ofs: 0x900 Size: 0x4 - IntProperty Landscape.LandscapeHeightfieldCollisionComponent.CollisionSizeQuads */
	float CollisionScale; /* Ofs: 0x904 Size: 0x4 - FloatProperty Landscape.LandscapeHeightfieldCollisionComponent.CollisionScale */
	int32_t SimpleCollisionSizeQuads; /* Ofs: 0x908 Size: 0x4 - IntProperty Landscape.LandscapeHeightfieldCollisionComponent.SimpleCollisionSizeQuads */
	uint8_t UnknownData90C[0x4];
	TArray<uint8_t> CollisionQuadFlags; /* Ofs: 0x910 Size: 0x10 - ArrayProperty Landscape.LandscapeHeightfieldCollisionComponent.CollisionQuadFlags */
	FGuid HeightfieldGuid; /* Ofs: 0x920 Size: 0x10 - StructProperty Landscape.LandscapeHeightfieldCollisionComponent.HeightfieldGuid */
	FBox CachedLocalBox; /* Ofs: 0x930 Size: 0x1C - StructProperty Landscape.LandscapeHeightfieldCollisionComponent.CachedLocalBox */
	TLazyObjectPtr<ExternalPtr<struct ULandscapeComponent>> RenderComponent; /* Ofs: 0x94C Size: 0x1C - LazyObjectProperty Landscape.LandscapeHeightfieldCollisionComponent.RenderComponent */
	uint8_t UnknownData968[0x10];
	TArray<ExternalPtr<struct UPhysicalMaterial>> CookedPhysicalMaterials; /* Ofs: 0x978 Size: 0x10 - ArrayProperty Landscape.LandscapeHeightfieldCollisionComponent.CookedPhysicalMaterials */
	uint8_t UnknownData988[0x48];


//	inline bool SetComponentLayerInfos(t_structHelper inst, TArray<ExternalPtr<struct ULandscapeLayerInfoObject>> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetSectionBaseX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetSectionBaseY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8FC, value); }
	inline bool SetCollisionSizeQuads(t_structHelper inst, int32_t value) { inst.WriteOffset(0x900, value); }
	inline bool SetCollisionScale(t_structHelper inst, float value) { inst.WriteOffset(0x904, value); }
	inline bool SetSimpleCollisionSizeQuads(t_structHelper inst, int32_t value) { inst.WriteOffset(0x908, value); }
	inline bool SetCollisionQuadFlags(t_structHelper inst, TArray<uint8_t> value) { inst.WriteOffset(0x910, value); }
	inline bool SetHeightfieldGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x920, value); }
	inline bool SetCachedLocalBox(t_structHelper inst, FBox value) { inst.WriteOffset(0x930, value); }
	inline bool SetRenderComponent(t_structHelper inst, TLazyObjectPtr<ExternalPtr<struct ULandscapeComponent>> value) { inst.WriteOffset(0x94C, value); }
	inline bool SetCookedPhysicalMaterials(t_structHelper inst, TArray<ExternalPtr<struct UPhysicalMaterial>> value) { inst.WriteOffset(0x978, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeHeightfieldCollisionComponent = sizeof(ULandscapeHeightfieldCollisionComponent); // 2512
    static_assert(sizeof(ULandscapeHeightfieldCollisionComponent) == 0x9D0, "Size of ULandscapeHeightfieldCollisionComponent is not correct.");
//	auto constexpr ULandscapeHeightfieldCollisionComponent_ComponentLayerInfos_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos);
//	static_assert(ULandscapeHeightfieldCollisionComponent_ComponentLayerInfos_Offset == 0x8e8, "ULandscapeHeightfieldCollisionComponent::ComponentLayerInfos offset is not 8e8");
	auto constexpr ULandscapeHeightfieldCollisionComponent_SectionBaseX_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, SectionBaseX);
	static_assert(ULandscapeHeightfieldCollisionComponent_SectionBaseX_Offset == 0x8f8, "ULandscapeHeightfieldCollisionComponent::SectionBaseX offset is not 8f8");
	auto constexpr ULandscapeHeightfieldCollisionComponent_SectionBaseY_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, SectionBaseY);
	static_assert(ULandscapeHeightfieldCollisionComponent_SectionBaseY_Offset == 0x8fc, "ULandscapeHeightfieldCollisionComponent::SectionBaseY offset is not 8fc");
	auto constexpr ULandscapeHeightfieldCollisionComponent_CollisionSizeQuads_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, CollisionSizeQuads);
	static_assert(ULandscapeHeightfieldCollisionComponent_CollisionSizeQuads_Offset == 0x900, "ULandscapeHeightfieldCollisionComponent::CollisionSizeQuads offset is not 900");
	auto constexpr ULandscapeHeightfieldCollisionComponent_CollisionScale_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, CollisionScale);
	static_assert(ULandscapeHeightfieldCollisionComponent_CollisionScale_Offset == 0x904, "ULandscapeHeightfieldCollisionComponent::CollisionScale offset is not 904");
	auto constexpr ULandscapeHeightfieldCollisionComponent_SimpleCollisionSizeQuads_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, SimpleCollisionSizeQuads);
	static_assert(ULandscapeHeightfieldCollisionComponent_SimpleCollisionSizeQuads_Offset == 0x908, "ULandscapeHeightfieldCollisionComponent::SimpleCollisionSizeQuads offset is not 908");
	auto constexpr ULandscapeHeightfieldCollisionComponent_CollisionQuadFlags_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags);
	static_assert(ULandscapeHeightfieldCollisionComponent_CollisionQuadFlags_Offset == 0x910, "ULandscapeHeightfieldCollisionComponent::CollisionQuadFlags offset is not 910");
	auto constexpr ULandscapeHeightfieldCollisionComponent_HeightfieldGuid_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid);
	static_assert(ULandscapeHeightfieldCollisionComponent_HeightfieldGuid_Offset == 0x920, "ULandscapeHeightfieldCollisionComponent::HeightfieldGuid offset is not 920");
	auto constexpr ULandscapeHeightfieldCollisionComponent_CachedLocalBox_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, CachedLocalBox);
	static_assert(ULandscapeHeightfieldCollisionComponent_CachedLocalBox_Offset == 0x930, "ULandscapeHeightfieldCollisionComponent::CachedLocalBox offset is not 930");
	auto constexpr ULandscapeHeightfieldCollisionComponent_RenderComponent_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, RenderComponent);
	static_assert(ULandscapeHeightfieldCollisionComponent_RenderComponent_Offset == 0x94c, "ULandscapeHeightfieldCollisionComponent::RenderComponent offset is not 94c");
	auto constexpr ULandscapeHeightfieldCollisionComponent_CookedPhysicalMaterials_Offset = offsetof(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials);
	static_assert(ULandscapeHeightfieldCollisionComponent_CookedPhysicalMaterials_Offset == 0x978, "ULandscapeHeightfieldCollisionComponent::CookedPhysicalMaterials offset is not 978");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
