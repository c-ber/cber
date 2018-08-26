#pragma once
#include "FSkeletalMeshOptimizationSettings.hpp"
#include "FSimplygonRemeshingSettings.hpp"
#include "FGroupedSkeletalOptimizationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkeletalMeshLODInfo // Size: 0x510
{
public:
    float ScreenSize; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.SkeletalMeshLODInfo.ScreenSize */
    float LODHysteresis; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.SkeletalMeshLODInfo.LODHysteresis */
    TArray<int32_t> LODMaterialMap; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.SkeletalMeshLODInfo.LODMaterialMap */
    TArray<bool> bEnableShadowCasting; /* Ofs: 0x18 Size: 0x10 ArrayProperty Engine.SkeletalMeshLODInfo.bEnableShadowCasting */
    TArray<struct FTriangleSortSettings> TriangleSortSettings; /* Ofs: 0x28 Size: 0x10 ArrayProperty Engine.SkeletalMeshLODInfo.TriangleSortSettings */
    bool bHasBeenSimplified; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshLODInfo.bHasBeenSimplified */
    uint8_t UnknownData39[0x7];
    FSkeletalMeshOptimizationSettings ReductionSettings; /* Ofs: 0x40 Size: 0x170 StructProperty Engine.SkeletalMeshLODInfo.ReductionSettings */
    FSimplygonRemeshingSettings RemeshingSettings; /* Ofs: 0x1B0 Size: 0xA8 StructProperty Engine.SkeletalMeshLODInfo.RemeshingSettings */
    FGroupedSkeletalOptimizationSettings OptimizationSettings; /* Ofs: 0x258 Size: 0x290 StructProperty Engine.SkeletalMeshLODInfo.OptimizationSettings */
    TArray<struct FName> RemovedBones; /* Ofs: 0x4E8 Size: 0x10 ArrayProperty Engine.SkeletalMeshLODInfo.RemovedBones */
    FString SourceImportFilename; /* Ofs: 0x4F8 Size: 0x10 StrProperty Engine.SkeletalMeshLODInfo.SourceImportFilename */
    bool bHasPerLODVertexColors; /* Ofs: 0x508 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMeshLODInfo.bHasPerLODVertexColors */
    uint8_t UnknownData509[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkeletalMeshLODInfo = sizeof(FSkeletalMeshLODInfo); // 1296
    static_assert(sizeof(FSkeletalMeshLODInfo) == 0x510, "Size of FSkeletalMeshLODInfo is not correct.");
	auto constexpr FSkeletalMeshLODInfo_ScreenSize_Offset = offsetof(FSkeletalMeshLODInfo, ScreenSize);
	static_assert(FSkeletalMeshLODInfo_ScreenSize_Offset == 0x0, "FSkeletalMeshLODInfo::ScreenSize offset is not 0");
	auto constexpr FSkeletalMeshLODInfo_LODHysteresis_Offset = offsetof(FSkeletalMeshLODInfo, LODHysteresis);
	static_assert(FSkeletalMeshLODInfo_LODHysteresis_Offset == 0x4, "FSkeletalMeshLODInfo::LODHysteresis offset is not 4");
	auto constexpr FSkeletalMeshLODInfo_LODMaterialMap_Offset = offsetof(FSkeletalMeshLODInfo, LODMaterialMap);
	static_assert(FSkeletalMeshLODInfo_LODMaterialMap_Offset == 0x8, "FSkeletalMeshLODInfo::LODMaterialMap offset is not 8");
	auto constexpr FSkeletalMeshLODInfo_bEnableShadowCasting_Offset = offsetof(FSkeletalMeshLODInfo, bEnableShadowCasting);
	static_assert(FSkeletalMeshLODInfo_bEnableShadowCasting_Offset == 0x18, "FSkeletalMeshLODInfo::bEnableShadowCasting offset is not 18");
	auto constexpr FSkeletalMeshLODInfo_TriangleSortSettings_Offset = offsetof(FSkeletalMeshLODInfo, TriangleSortSettings);
	static_assert(FSkeletalMeshLODInfo_TriangleSortSettings_Offset == 0x28, "FSkeletalMeshLODInfo::TriangleSortSettings offset is not 28");
	auto constexpr FSkeletalMeshLODInfo_ReductionSettings_Offset = offsetof(FSkeletalMeshLODInfo, ReductionSettings);
	static_assert(FSkeletalMeshLODInfo_ReductionSettings_Offset == 0x40, "FSkeletalMeshLODInfo::ReductionSettings offset is not 40");
	auto constexpr FSkeletalMeshLODInfo_RemeshingSettings_Offset = offsetof(FSkeletalMeshLODInfo, RemeshingSettings);
	static_assert(FSkeletalMeshLODInfo_RemeshingSettings_Offset == 0x1b0, "FSkeletalMeshLODInfo::RemeshingSettings offset is not 1b0");
	auto constexpr FSkeletalMeshLODInfo_OptimizationSettings_Offset = offsetof(FSkeletalMeshLODInfo, OptimizationSettings);
	static_assert(FSkeletalMeshLODInfo_OptimizationSettings_Offset == 0x258, "FSkeletalMeshLODInfo::OptimizationSettings offset is not 258");
	auto constexpr FSkeletalMeshLODInfo_RemovedBones_Offset = offsetof(FSkeletalMeshLODInfo, RemovedBones);
	static_assert(FSkeletalMeshLODInfo_RemovedBones_Offset == 0x4e8, "FSkeletalMeshLODInfo::RemovedBones offset is not 4e8");
	auto constexpr FSkeletalMeshLODInfo_SourceImportFilename_Offset = offsetof(FSkeletalMeshLODInfo, SourceImportFilename);
	static_assert(FSkeletalMeshLODInfo_SourceImportFilename_Offset == 0x4f8, "FSkeletalMeshLODInfo::SourceImportFilename offset is not 4f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
