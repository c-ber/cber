#pragma once
#include "FMeshBuildSettings.hpp"
#include "FMeshReductionSettings.hpp"
#include "FSimplygonRemeshingSettings.hpp"
#include "FGroupedStaticMeshOptimizationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStaticMeshSourceModel // Size: 0x4A8
{
public:
    FMeshBuildSettings BuildSettings; /* Ofs: 0x0 Size: 0x40 StructProperty Engine.StaticMeshSourceModel.BuildSettings */
    FMeshReductionSettings ReductionSettings; /* Ofs: 0x40 Size: 0x148 StructProperty Engine.StaticMeshSourceModel.ReductionSettings */
    FSimplygonRemeshingSettings RemeshingSettings; /* Ofs: 0x188 Size: 0xA8 StructProperty Engine.StaticMeshSourceModel.RemeshingSettings */
    bool bHasBeenSimplified; /* Ofs: 0x230 Size: 0x1 BitMask: 01 BoolProperty Engine.StaticMeshSourceModel.bHasBeenSimplified */
    uint8_t UnknownData231[0x7];
    FGroupedStaticMeshOptimizationSettings OptimizationSettings; /* Ofs: 0x238 Size: 0x268 StructProperty Engine.StaticMeshSourceModel.OptimizationSettings */
    float LODDistance; /* Ofs: 0x4A0 Size: 0x4 FloatProperty Engine.StaticMeshSourceModel.LODDistance */
    float ScreenSize; /* Ofs: 0x4A4 Size: 0x4 FloatProperty Engine.StaticMeshSourceModel.ScreenSize */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStaticMeshSourceModel = sizeof(FStaticMeshSourceModel); // 1192
    static_assert(sizeof(FStaticMeshSourceModel) == 0x4A8, "Size of FStaticMeshSourceModel is not correct.");
	auto constexpr FStaticMeshSourceModel_BuildSettings_Offset = offsetof(FStaticMeshSourceModel, BuildSettings);
	static_assert(FStaticMeshSourceModel_BuildSettings_Offset == 0x0, "FStaticMeshSourceModel::BuildSettings offset is not 0");
	auto constexpr FStaticMeshSourceModel_ReductionSettings_Offset = offsetof(FStaticMeshSourceModel, ReductionSettings);
	static_assert(FStaticMeshSourceModel_ReductionSettings_Offset == 0x40, "FStaticMeshSourceModel::ReductionSettings offset is not 40");
	auto constexpr FStaticMeshSourceModel_RemeshingSettings_Offset = offsetof(FStaticMeshSourceModel, RemeshingSettings);
	static_assert(FStaticMeshSourceModel_RemeshingSettings_Offset == 0x188, "FStaticMeshSourceModel::RemeshingSettings offset is not 188");
	auto constexpr FStaticMeshSourceModel_OptimizationSettings_Offset = offsetof(FStaticMeshSourceModel, OptimizationSettings);
	static_assert(FStaticMeshSourceModel_OptimizationSettings_Offset == 0x238, "FStaticMeshSourceModel::OptimizationSettings offset is not 238");
	auto constexpr FStaticMeshSourceModel_LODDistance_Offset = offsetof(FStaticMeshSourceModel, LODDistance);
	static_assert(FStaticMeshSourceModel_LODDistance_Offset == 0x4a0, "FStaticMeshSourceModel::LODDistance offset is not 4a0");
	auto constexpr FStaticMeshSourceModel_ScreenSize_Offset = offsetof(FStaticMeshSourceModel, ScreenSize);
	static_assert(FStaticMeshSourceModel_ScreenSize_Offset == 0x4a4, "FStaticMeshSourceModel::ScreenSize offset is not 4a4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
