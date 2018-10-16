#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCrowdAvoidanceSamplingPattern // Size: 0x20
{
public:
    TArray<float> Angles; /* Ofs: 0x0 Size: 0x10 ArrayProperty AIModule.CrowdAvoidanceSamplingPattern.Angles */
    TArray<float> Radii; /* Ofs: 0x10 Size: 0x10 ArrayProperty AIModule.CrowdAvoidanceSamplingPattern.Radii */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCrowdAvoidanceSamplingPattern = sizeof(FCrowdAvoidanceSamplingPattern); // 32
    static_assert(sizeof(FCrowdAvoidanceSamplingPattern) == 0x20, "Size of FCrowdAvoidanceSamplingPattern is not correct.");
	auto constexpr FCrowdAvoidanceSamplingPattern_Angles_Offset = offsetof(FCrowdAvoidanceSamplingPattern, Angles);
	static_assert(FCrowdAvoidanceSamplingPattern_Angles_Offset == 0x0, "FCrowdAvoidanceSamplingPattern::Angles offset is not 0");
	auto constexpr FCrowdAvoidanceSamplingPattern_Radii_Offset = offsetof(FCrowdAvoidanceSamplingPattern, Radii);
	static_assert(FCrowdAvoidanceSamplingPattern_Radii_Offset == 0x10, "FCrowdAvoidanceSamplingPattern::Radii offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
