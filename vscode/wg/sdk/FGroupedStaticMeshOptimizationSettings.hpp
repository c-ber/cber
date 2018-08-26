#pragma once
#include "EStaticMeshLODType.hpp"
#include "FMeshReductionSettings.hpp"
#include "FMeshProxySettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGroupedStaticMeshOptimizationSettings // Size: 0x268
{
public:
    TEnumAsByte<enum EStaticMeshLODType> LevelOfDetailType; /* Ofs: 0x0 Size: 0x1 EnumProperty Engine.GroupedStaticMeshOptimizationSettings.LevelOfDetailType */
    uint8_t UnknownData1[0x7];
    FMeshReductionSettings ReductionSettings; /* Ofs: 0x8 Size: 0x148 StructProperty Engine.GroupedStaticMeshOptimizationSettings.ReductionSettings */
    FMeshProxySettings ProxySettings; /* Ofs: 0x150 Size: 0x114 StructProperty Engine.GroupedStaticMeshOptimizationSettings.ProxySettings */
    uint8_t UnknownData264[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGroupedStaticMeshOptimizationSettings = sizeof(FGroupedStaticMeshOptimizationSettings); // 616
    static_assert(sizeof(FGroupedStaticMeshOptimizationSettings) == 0x268, "Size of FGroupedStaticMeshOptimizationSettings is not correct.");
	auto constexpr FGroupedStaticMeshOptimizationSettings_LevelOfDetailType_Offset = offsetof(FGroupedStaticMeshOptimizationSettings, LevelOfDetailType);
	static_assert(FGroupedStaticMeshOptimizationSettings_LevelOfDetailType_Offset == 0x0, "FGroupedStaticMeshOptimizationSettings::LevelOfDetailType offset is not 0");
	auto constexpr FGroupedStaticMeshOptimizationSettings_ReductionSettings_Offset = offsetof(FGroupedStaticMeshOptimizationSettings, ReductionSettings);
	static_assert(FGroupedStaticMeshOptimizationSettings_ReductionSettings_Offset == 0x8, "FGroupedStaticMeshOptimizationSettings::ReductionSettings offset is not 8");
	auto constexpr FGroupedStaticMeshOptimizationSettings_ProxySettings_Offset = offsetof(FGroupedStaticMeshOptimizationSettings, ProxySettings);
	static_assert(FGroupedStaticMeshOptimizationSettings_ProxySettings_Offset == 0x150, "FGroupedStaticMeshOptimizationSettings::ProxySettings offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
