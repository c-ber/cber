#pragma once
#include "FDecalEffectData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDecalEffectDataSet // Size: 0x2A8
{
public:
    FDecalEffectData DefaultDecal; /* Ofs: 0x0 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.DefaultDecal */
    FDecalEffectData ConcreteDecal; /* Ofs: 0x28 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.ConcreteDecal */
    FDecalEffectData DirtDecal; /* Ofs: 0x50 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.DirtDecal */
    FDecalEffectData WaterDecal; /* Ofs: 0x78 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.WaterDecal */
    FDecalEffectData MetalDecal; /* Ofs: 0xA0 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.MetalDecal */
    FDecalEffectData WoodDecal; /* Ofs: 0xC8 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.WoodDecal */
    FDecalEffectData GlassDecal; /* Ofs: 0xF0 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.GlassDecal */
    FDecalEffectData GrassDecal; /* Ofs: 0x118 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.GrassDecal */
    FDecalEffectData FleshDecal; /* Ofs: 0x140 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.FleshDecal */
    FDecalEffectData MudDecal; /* Ofs: 0x168 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.MudDecal */
    FDecalEffectData CropsDecal; /* Ofs: 0x190 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.CropsDecal */
    FDecalEffectData CactusDecal; /* Ofs: 0x1B8 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.CactusDecal */
    FDecalEffectData PaperDecal; /* Ofs: 0x1E0 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.PaperDecal */
    FDecalEffectData RubberDecal; /* Ofs: 0x208 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.RubberDecal */
    FDecalEffectData FabricDecal; /* Ofs: 0x230 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.FabricDecal */
    FDecalEffectData SnowDecal; /* Ofs: 0x258 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.SnowDecal */
    FDecalEffectData IceDecal; /* Ofs: 0x280 Size: 0x28 StructProperty TslGame.DecalEffectDataSet.IceDecal */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDecalEffectDataSet = sizeof(FDecalEffectDataSet); // 680
    static_assert(sizeof(FDecalEffectDataSet) == 0x2A8, "Size of FDecalEffectDataSet is not correct.");
	auto constexpr FDecalEffectDataSet_DefaultDecal_Offset = offsetof(FDecalEffectDataSet, DefaultDecal);
	static_assert(FDecalEffectDataSet_DefaultDecal_Offset == 0x0, "FDecalEffectDataSet::DefaultDecal offset is not 0");
	auto constexpr FDecalEffectDataSet_ConcreteDecal_Offset = offsetof(FDecalEffectDataSet, ConcreteDecal);
	static_assert(FDecalEffectDataSet_ConcreteDecal_Offset == 0x28, "FDecalEffectDataSet::ConcreteDecal offset is not 28");
	auto constexpr FDecalEffectDataSet_DirtDecal_Offset = offsetof(FDecalEffectDataSet, DirtDecal);
	static_assert(FDecalEffectDataSet_DirtDecal_Offset == 0x50, "FDecalEffectDataSet::DirtDecal offset is not 50");
	auto constexpr FDecalEffectDataSet_WaterDecal_Offset = offsetof(FDecalEffectDataSet, WaterDecal);
	static_assert(FDecalEffectDataSet_WaterDecal_Offset == 0x78, "FDecalEffectDataSet::WaterDecal offset is not 78");
	auto constexpr FDecalEffectDataSet_MetalDecal_Offset = offsetof(FDecalEffectDataSet, MetalDecal);
	static_assert(FDecalEffectDataSet_MetalDecal_Offset == 0xa0, "FDecalEffectDataSet::MetalDecal offset is not a0");
	auto constexpr FDecalEffectDataSet_WoodDecal_Offset = offsetof(FDecalEffectDataSet, WoodDecal);
	static_assert(FDecalEffectDataSet_WoodDecal_Offset == 0xc8, "FDecalEffectDataSet::WoodDecal offset is not c8");
	auto constexpr FDecalEffectDataSet_GlassDecal_Offset = offsetof(FDecalEffectDataSet, GlassDecal);
	static_assert(FDecalEffectDataSet_GlassDecal_Offset == 0xf0, "FDecalEffectDataSet::GlassDecal offset is not f0");
	auto constexpr FDecalEffectDataSet_GrassDecal_Offset = offsetof(FDecalEffectDataSet, GrassDecal);
	static_assert(FDecalEffectDataSet_GrassDecal_Offset == 0x118, "FDecalEffectDataSet::GrassDecal offset is not 118");
	auto constexpr FDecalEffectDataSet_FleshDecal_Offset = offsetof(FDecalEffectDataSet, FleshDecal);
	static_assert(FDecalEffectDataSet_FleshDecal_Offset == 0x140, "FDecalEffectDataSet::FleshDecal offset is not 140");
	auto constexpr FDecalEffectDataSet_MudDecal_Offset = offsetof(FDecalEffectDataSet, MudDecal);
	static_assert(FDecalEffectDataSet_MudDecal_Offset == 0x168, "FDecalEffectDataSet::MudDecal offset is not 168");
	auto constexpr FDecalEffectDataSet_CropsDecal_Offset = offsetof(FDecalEffectDataSet, CropsDecal);
	static_assert(FDecalEffectDataSet_CropsDecal_Offset == 0x190, "FDecalEffectDataSet::CropsDecal offset is not 190");
	auto constexpr FDecalEffectDataSet_CactusDecal_Offset = offsetof(FDecalEffectDataSet, CactusDecal);
	static_assert(FDecalEffectDataSet_CactusDecal_Offset == 0x1b8, "FDecalEffectDataSet::CactusDecal offset is not 1b8");
	auto constexpr FDecalEffectDataSet_PaperDecal_Offset = offsetof(FDecalEffectDataSet, PaperDecal);
	static_assert(FDecalEffectDataSet_PaperDecal_Offset == 0x1e0, "FDecalEffectDataSet::PaperDecal offset is not 1e0");
	auto constexpr FDecalEffectDataSet_RubberDecal_Offset = offsetof(FDecalEffectDataSet, RubberDecal);
	static_assert(FDecalEffectDataSet_RubberDecal_Offset == 0x208, "FDecalEffectDataSet::RubberDecal offset is not 208");
	auto constexpr FDecalEffectDataSet_FabricDecal_Offset = offsetof(FDecalEffectDataSet, FabricDecal);
	static_assert(FDecalEffectDataSet_FabricDecal_Offset == 0x230, "FDecalEffectDataSet::FabricDecal offset is not 230");
	auto constexpr FDecalEffectDataSet_SnowDecal_Offset = offsetof(FDecalEffectDataSet, SnowDecal);
	static_assert(FDecalEffectDataSet_SnowDecal_Offset == 0x258, "FDecalEffectDataSet::SnowDecal offset is not 258");
	auto constexpr FDecalEffectDataSet_IceDecal_Offset = offsetof(FDecalEffectDataSet, IceDecal);
	static_assert(FDecalEffectDataSet_IceDecal_Offset == 0x280, "FDecalEffectDataSet::IceDecal offset is not 280");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
