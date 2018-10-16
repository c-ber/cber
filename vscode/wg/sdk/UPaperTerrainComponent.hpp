#pragma once
#include "UPrimitiveComponent.hpp"
#include "FLinearColor.hpp"
#include "ESpriteCollisionMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPaperTerrainComponent // Size: 0x940
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UPaperTerrainComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2036); // id32("Class Paper2D.PaperTerrainComponent")
		return ptr;
	}
//	ExternalPtr<struct UPaperTerrainMaterial> TerrainMaterial; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty Paper2D.PaperTerrainComponent.TerrainMaterial */
	uint8_t boolField8F0;
	uint8_t boolField8F1;
	uint8_t UnknownData8F2[0x6];
	ExternalPtr<struct UPaperTerrainSplineComponent> AssociatedSpline; /* Ofs: 0x8F8 Size: 0x8 - ObjectProperty Paper2D.PaperTerrainComponent.AssociatedSpline */
	int32_t RandomSeed; /* Ofs: 0x900 Size: 0x4 - IntProperty Paper2D.PaperTerrainComponent.RandomSeed */
	float SegmentOverlapAmount; /* Ofs: 0x904 Size: 0x4 - FloatProperty Paper2D.PaperTerrainComponent.SegmentOverlapAmount */
	FLinearColor TerrainColor; /* Ofs: 0x908 Size: 0x10 - StructProperty Paper2D.PaperTerrainComponent.TerrainColor */
	int32_t ReparamStepsPerSegment; /* Ofs: 0x918 Size: 0x4 - IntProperty Paper2D.PaperTerrainComponent.ReparamStepsPerSegment */
	TEnumAsByte<enum ESpriteCollisionMode> SpriteCollisionDomain; /* Ofs: 0x91C Size: 0x1 - ByteProperty Paper2D.PaperTerrainComponent.SpriteCollisionDomain */
	uint8_t UnknownData91D[0x3];
	float CollisionThickness; /* Ofs: 0x920 Size: 0x4 - FloatProperty Paper2D.PaperTerrainComponent.CollisionThickness */
	uint8_t UnknownData924[0x4];
	ExternalPtr<struct UBodySetup> CachedBodySetup; /* Ofs: 0x928 Size: 0x8 - ObjectProperty Paper2D.PaperTerrainComponent.CachedBodySetup */
	uint8_t UnknownData930[0x10];


//	inline bool SetTerrainMaterial(t_structHelper inst, ExternalPtr<struct UPaperTerrainMaterial> value) { inst.WriteOffset(0x8E8, value); }
	inline bool bClosedSpline()
	{
		return boolField8F0& 0x1;
	}
	inline bool SetbClosedSpline(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFilledSpline()
	{
		return boolField8F1& 0x1;
	}
	inline bool SetbFilledSpline(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8F1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAssociatedSpline(t_structHelper inst, ExternalPtr<struct UPaperTerrainSplineComponent> value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetRandomSeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x900, value); }
	inline bool SetSegmentOverlapAmount(t_structHelper inst, float value) { inst.WriteOffset(0x904, value); }
	inline bool SetTerrainColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x908, value); }
	inline bool SetReparamStepsPerSegment(t_structHelper inst, int32_t value) { inst.WriteOffset(0x918, value); }
	inline bool SetSpriteCollisionDomain(t_structHelper inst, TEnumAsByte<enum ESpriteCollisionMode> value) { inst.WriteOffset(0x91C, value); }
	inline bool SetCollisionThickness(t_structHelper inst, float value) { inst.WriteOffset(0x920, value); }
	inline bool SetCachedBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0x928, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPaperTerrainComponent = sizeof(UPaperTerrainComponent); // 2368
    static_assert(sizeof(UPaperTerrainComponent) == 0x940, "Size of UPaperTerrainComponent is not correct.");
//	auto constexpr UPaperTerrainComponent_TerrainMaterial_Offset = offsetof(UPaperTerrainComponent, TerrainMaterial);
//	static_assert(UPaperTerrainComponent_TerrainMaterial_Offset == 0x8e8, "UPaperTerrainComponent::TerrainMaterial offset is not 8e8");
	auto constexpr UPaperTerrainComponent_boolField8F0_Offset = offsetof(UPaperTerrainComponent, boolField8F0);
	static_assert(UPaperTerrainComponent_boolField8F0_Offset == 0x8f0, "UPaperTerrainComponent::boolField8F0 offset is not 8f0");
	auto constexpr UPaperTerrainComponent_boolField8F1_Offset = offsetof(UPaperTerrainComponent, boolField8F1);
	static_assert(UPaperTerrainComponent_boolField8F1_Offset == 0x8f1, "UPaperTerrainComponent::boolField8F1 offset is not 8f1");
	auto constexpr UPaperTerrainComponent_AssociatedSpline_Offset = offsetof(UPaperTerrainComponent, AssociatedSpline);
	static_assert(UPaperTerrainComponent_AssociatedSpline_Offset == 0x8f8, "UPaperTerrainComponent::AssociatedSpline offset is not 8f8");
	auto constexpr UPaperTerrainComponent_RandomSeed_Offset = offsetof(UPaperTerrainComponent, RandomSeed);
	static_assert(UPaperTerrainComponent_RandomSeed_Offset == 0x900, "UPaperTerrainComponent::RandomSeed offset is not 900");
	auto constexpr UPaperTerrainComponent_SegmentOverlapAmount_Offset = offsetof(UPaperTerrainComponent, SegmentOverlapAmount);
	static_assert(UPaperTerrainComponent_SegmentOverlapAmount_Offset == 0x904, "UPaperTerrainComponent::SegmentOverlapAmount offset is not 904");
	auto constexpr UPaperTerrainComponent_TerrainColor_Offset = offsetof(UPaperTerrainComponent, TerrainColor);
	static_assert(UPaperTerrainComponent_TerrainColor_Offset == 0x908, "UPaperTerrainComponent::TerrainColor offset is not 908");
	auto constexpr UPaperTerrainComponent_ReparamStepsPerSegment_Offset = offsetof(UPaperTerrainComponent, ReparamStepsPerSegment);
	static_assert(UPaperTerrainComponent_ReparamStepsPerSegment_Offset == 0x918, "UPaperTerrainComponent::ReparamStepsPerSegment offset is not 918");
	auto constexpr UPaperTerrainComponent_SpriteCollisionDomain_Offset = offsetof(UPaperTerrainComponent, SpriteCollisionDomain);
	static_assert(UPaperTerrainComponent_SpriteCollisionDomain_Offset == 0x91c, "UPaperTerrainComponent::SpriteCollisionDomain offset is not 91c");
	auto constexpr UPaperTerrainComponent_CollisionThickness_Offset = offsetof(UPaperTerrainComponent, CollisionThickness);
	static_assert(UPaperTerrainComponent_CollisionThickness_Offset == 0x920, "UPaperTerrainComponent::CollisionThickness offset is not 920");
	auto constexpr UPaperTerrainComponent_CachedBodySetup_Offset = offsetof(UPaperTerrainComponent, CachedBodySetup);
	static_assert(UPaperTerrainComponent_CachedBodySetup_Offset == 0x928, "UPaperTerrainComponent::CachedBodySetup offset is not 928");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
