#pragma once
#include "EGrassScaling.hpp"
#include "FFloatInterval.hpp"
#include "FLightingChannels.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGrassVariety // Size: 0x48
{
public:
    ExternalPtr<struct UStaticMesh> GrassMesh; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.GrassVariety.GrassMesh */
    float GrassDensity; /* Ofs: 0x8 Size: 0x4 FloatProperty Landscape.GrassVariety.GrassDensity */
    bool bUseGrid; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Landscape.GrassVariety.bUseGrid */
    uint8_t UnknownDataD[0x3];
    float PlacementJitter; /* Ofs: 0x10 Size: 0x4 FloatProperty Landscape.GrassVariety.PlacementJitter */
    int32_t StartCullDistance; /* Ofs: 0x14 Size: 0x4 IntProperty Landscape.GrassVariety.StartCullDistance */
    int32_t EndCullDistance; /* Ofs: 0x18 Size: 0x4 IntProperty Landscape.GrassVariety.EndCullDistance */
    int32_t MinLOD; /* Ofs: 0x1C Size: 0x4 IntProperty Landscape.GrassVariety.MinLOD */
    TEnumAsByte<enum EGrassScaling> Scaling; /* Ofs: 0x20 Size: 0x1 EnumProperty Landscape.GrassVariety.Scaling */
    uint8_t UnknownData21[0x3];
    FFloatInterval ScaleX; /* Ofs: 0x24 Size: 0x8 StructProperty Landscape.GrassVariety.ScaleX */
    FFloatInterval ScaleY; /* Ofs: 0x2C Size: 0x8 StructProperty Landscape.GrassVariety.ScaleY */
    FFloatInterval ScaleZ; /* Ofs: 0x34 Size: 0x8 StructProperty Landscape.GrassVariety.ScaleZ */
    bool RandomRotation; /* Ofs: 0x3C Size: 0x1 BitMask: 01 BoolProperty Landscape.GrassVariety.RandomRotation */
    bool AlignToSurface; /* Ofs: 0x3D Size: 0x1 BitMask: 01 BoolProperty Landscape.GrassVariety.AlignToSurface */
    bool bUseLandscapeLightmap; /* Ofs: 0x3E Size: 0x1 BitMask: 01 BoolProperty Landscape.GrassVariety.bUseLandscapeLightmap */
    FLightingChannels LightingChannels; /* Ofs: 0x3F Size: 0x3 StructProperty Landscape.GrassVariety.LightingChannels */
    bool bReceivesDecals; /* Ofs: 0x42 Size: 0x1 BitMask: 01 BoolProperty Landscape.GrassVariety.bReceivesDecals */
    uint8_t UnknownData43[0x5];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGrassVariety = sizeof(FGrassVariety); // 72
    static_assert(sizeof(FGrassVariety) == 0x48, "Size of FGrassVariety is not correct.");
	auto constexpr FGrassVariety_GrassMesh_Offset = offsetof(FGrassVariety, GrassMesh);
	static_assert(FGrassVariety_GrassMesh_Offset == 0x0, "FGrassVariety::GrassMesh offset is not 0");
	auto constexpr FGrassVariety_GrassDensity_Offset = offsetof(FGrassVariety, GrassDensity);
	static_assert(FGrassVariety_GrassDensity_Offset == 0x8, "FGrassVariety::GrassDensity offset is not 8");
	auto constexpr FGrassVariety_PlacementJitter_Offset = offsetof(FGrassVariety, PlacementJitter);
	static_assert(FGrassVariety_PlacementJitter_Offset == 0x10, "FGrassVariety::PlacementJitter offset is not 10");
	auto constexpr FGrassVariety_StartCullDistance_Offset = offsetof(FGrassVariety, StartCullDistance);
	static_assert(FGrassVariety_StartCullDistance_Offset == 0x14, "FGrassVariety::StartCullDistance offset is not 14");
	auto constexpr FGrassVariety_EndCullDistance_Offset = offsetof(FGrassVariety, EndCullDistance);
	static_assert(FGrassVariety_EndCullDistance_Offset == 0x18, "FGrassVariety::EndCullDistance offset is not 18");
	auto constexpr FGrassVariety_MinLOD_Offset = offsetof(FGrassVariety, MinLOD);
	static_assert(FGrassVariety_MinLOD_Offset == 0x1c, "FGrassVariety::MinLOD offset is not 1c");
	auto constexpr FGrassVariety_Scaling_Offset = offsetof(FGrassVariety, Scaling);
	static_assert(FGrassVariety_Scaling_Offset == 0x20, "FGrassVariety::Scaling offset is not 20");
	auto constexpr FGrassVariety_ScaleX_Offset = offsetof(FGrassVariety, ScaleX);
	static_assert(FGrassVariety_ScaleX_Offset == 0x24, "FGrassVariety::ScaleX offset is not 24");
	auto constexpr FGrassVariety_ScaleY_Offset = offsetof(FGrassVariety, ScaleY);
	static_assert(FGrassVariety_ScaleY_Offset == 0x2c, "FGrassVariety::ScaleY offset is not 2c");
	auto constexpr FGrassVariety_ScaleZ_Offset = offsetof(FGrassVariety, ScaleZ);
	static_assert(FGrassVariety_ScaleZ_Offset == 0x34, "FGrassVariety::ScaleZ offset is not 34");
	auto constexpr FGrassVariety_LightingChannels_Offset = offsetof(FGrassVariety, LightingChannels);
	static_assert(FGrassVariety_LightingChannels_Offset == 0x3f, "FGrassVariety::LightingChannels offset is not 3f");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
