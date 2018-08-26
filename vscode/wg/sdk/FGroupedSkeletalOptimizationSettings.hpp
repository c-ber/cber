#pragma once
#include "ESkeletalMeshLODType.hpp"
#include "FSkeletalMeshOptimizationSettings.hpp"
#include "FMeshProxySettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGroupedSkeletalOptimizationSettings // Size: 0x290
{
public:
    bool bAutoComputeLODDistance; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.GroupedSkeletalOptimizationSettings.bAutoComputeLODDistance */
    TEnumAsByte<enum ESkeletalMeshLODType> LevelOfDetailType; /* Ofs: 0x1 Size: 0x1 EnumProperty Engine.GroupedSkeletalOptimizationSettings.LevelOfDetailType */
    uint8_t UnknownData2[0x6];
    FSkeletalMeshOptimizationSettings ReductionSettings; /* Ofs: 0x8 Size: 0x170 StructProperty Engine.GroupedSkeletalOptimizationSettings.ReductionSettings */
    FMeshProxySettings ProxySettings; /* Ofs: 0x178 Size: 0x114 StructProperty Engine.GroupedSkeletalOptimizationSettings.ProxySettings */
    bool bForceLODRebuild; /* Ofs: 0x28C Size: 0x1 BitMask: 01 BoolProperty Engine.GroupedSkeletalOptimizationSettings.bForceLODRebuild */
    uint8_t UnknownData28D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGroupedSkeletalOptimizationSettings = sizeof(FGroupedSkeletalOptimizationSettings); // 656
    static_assert(sizeof(FGroupedSkeletalOptimizationSettings) == 0x290, "Size of FGroupedSkeletalOptimizationSettings is not correct.");
	auto constexpr FGroupedSkeletalOptimizationSettings_LevelOfDetailType_Offset = offsetof(FGroupedSkeletalOptimizationSettings, LevelOfDetailType);
	static_assert(FGroupedSkeletalOptimizationSettings_LevelOfDetailType_Offset == 0x1, "FGroupedSkeletalOptimizationSettings::LevelOfDetailType offset is not 1");
	auto constexpr FGroupedSkeletalOptimizationSettings_ReductionSettings_Offset = offsetof(FGroupedSkeletalOptimizationSettings, ReductionSettings);
	static_assert(FGroupedSkeletalOptimizationSettings_ReductionSettings_Offset == 0x8, "FGroupedSkeletalOptimizationSettings::ReductionSettings offset is not 8");
	auto constexpr FGroupedSkeletalOptimizationSettings_ProxySettings_Offset = offsetof(FGroupedSkeletalOptimizationSettings, ProxySettings);
	static_assert(FGroupedSkeletalOptimizationSettings_ProxySettings_Offset == 0x178, "FGroupedSkeletalOptimizationSettings::ProxySettings offset is not 178");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
