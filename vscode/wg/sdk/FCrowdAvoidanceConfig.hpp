#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCrowdAvoidanceConfig // Size: 0x1C
{
public:
    float VelocityBias; /* Ofs: 0x0 Size: 0x4 FloatProperty AIModule.CrowdAvoidanceConfig.VelocityBias */
    float DesiredVelocityWeight; /* Ofs: 0x4 Size: 0x4 FloatProperty AIModule.CrowdAvoidanceConfig.DesiredVelocityWeight */
    float CurrentVelocityWeight; /* Ofs: 0x8 Size: 0x4 FloatProperty AIModule.CrowdAvoidanceConfig.CurrentVelocityWeight */
    float SideBiasWeight; /* Ofs: 0xC Size: 0x4 FloatProperty AIModule.CrowdAvoidanceConfig.SideBiasWeight */
    float ImpactTimeWeight; /* Ofs: 0x10 Size: 0x4 FloatProperty AIModule.CrowdAvoidanceConfig.ImpactTimeWeight */
    float ImpactTimeRange; /* Ofs: 0x14 Size: 0x4 FloatProperty AIModule.CrowdAvoidanceConfig.ImpactTimeRange */
    uint8_t CustomPatternIdx; /* Ofs: 0x18 Size: 0x1 ByteProperty AIModule.CrowdAvoidanceConfig.CustomPatternIdx */
    uint8_t AdaptiveDivisions; /* Ofs: 0x19 Size: 0x1 ByteProperty AIModule.CrowdAvoidanceConfig.AdaptiveDivisions */
    uint8_t AdaptiveRings; /* Ofs: 0x1A Size: 0x1 ByteProperty AIModule.CrowdAvoidanceConfig.AdaptiveRings */
    uint8_t AdaptiveDepth; /* Ofs: 0x1B Size: 0x1 ByteProperty AIModule.CrowdAvoidanceConfig.AdaptiveDepth */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCrowdAvoidanceConfig = sizeof(FCrowdAvoidanceConfig); // 28
    static_assert(sizeof(FCrowdAvoidanceConfig) == 0x1C, "Size of FCrowdAvoidanceConfig is not correct.");
	auto constexpr FCrowdAvoidanceConfig_VelocityBias_Offset = offsetof(FCrowdAvoidanceConfig, VelocityBias);
	static_assert(FCrowdAvoidanceConfig_VelocityBias_Offset == 0x0, "FCrowdAvoidanceConfig::VelocityBias offset is not 0");
	auto constexpr FCrowdAvoidanceConfig_DesiredVelocityWeight_Offset = offsetof(FCrowdAvoidanceConfig, DesiredVelocityWeight);
	static_assert(FCrowdAvoidanceConfig_DesiredVelocityWeight_Offset == 0x4, "FCrowdAvoidanceConfig::DesiredVelocityWeight offset is not 4");
	auto constexpr FCrowdAvoidanceConfig_CurrentVelocityWeight_Offset = offsetof(FCrowdAvoidanceConfig, CurrentVelocityWeight);
	static_assert(FCrowdAvoidanceConfig_CurrentVelocityWeight_Offset == 0x8, "FCrowdAvoidanceConfig::CurrentVelocityWeight offset is not 8");
	auto constexpr FCrowdAvoidanceConfig_SideBiasWeight_Offset = offsetof(FCrowdAvoidanceConfig, SideBiasWeight);
	static_assert(FCrowdAvoidanceConfig_SideBiasWeight_Offset == 0xc, "FCrowdAvoidanceConfig::SideBiasWeight offset is not c");
	auto constexpr FCrowdAvoidanceConfig_ImpactTimeWeight_Offset = offsetof(FCrowdAvoidanceConfig, ImpactTimeWeight);
	static_assert(FCrowdAvoidanceConfig_ImpactTimeWeight_Offset == 0x10, "FCrowdAvoidanceConfig::ImpactTimeWeight offset is not 10");
	auto constexpr FCrowdAvoidanceConfig_ImpactTimeRange_Offset = offsetof(FCrowdAvoidanceConfig, ImpactTimeRange);
	static_assert(FCrowdAvoidanceConfig_ImpactTimeRange_Offset == 0x14, "FCrowdAvoidanceConfig::ImpactTimeRange offset is not 14");
	auto constexpr FCrowdAvoidanceConfig_CustomPatternIdx_Offset = offsetof(FCrowdAvoidanceConfig, CustomPatternIdx);
	static_assert(FCrowdAvoidanceConfig_CustomPatternIdx_Offset == 0x18, "FCrowdAvoidanceConfig::CustomPatternIdx offset is not 18");
	auto constexpr FCrowdAvoidanceConfig_AdaptiveDivisions_Offset = offsetof(FCrowdAvoidanceConfig, AdaptiveDivisions);
	static_assert(FCrowdAvoidanceConfig_AdaptiveDivisions_Offset == 0x19, "FCrowdAvoidanceConfig::AdaptiveDivisions offset is not 19");
	auto constexpr FCrowdAvoidanceConfig_AdaptiveRings_Offset = offsetof(FCrowdAvoidanceConfig, AdaptiveRings);
	static_assert(FCrowdAvoidanceConfig_AdaptiveRings_Offset == 0x1a, "FCrowdAvoidanceConfig::AdaptiveRings offset is not 1a");
	auto constexpr FCrowdAvoidanceConfig_AdaptiveDepth_Offset = offsetof(FCrowdAvoidanceConfig, AdaptiveDepth);
	static_assert(FCrowdAvoidanceConfig_AdaptiveDepth_Offset == 0x1b, "FCrowdAvoidanceConfig::AdaptiveDepth offset is not 1b");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
