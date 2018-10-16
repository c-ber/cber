#pragma once
#include "FMeshProxySettings.hpp"
#include "FMeshMergingSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHierarchicalSimplification // Size: 0x1F4
{
public:
    uint8_t UnknownData0[0x4];
    float TransitionScreenSize; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.HierarchicalSimplification.TransitionScreenSize */
    bool bSimplifyMesh; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.HierarchicalSimplification.bSimplifyMesh */
    uint8_t UnknownData9[0x3];
    FMeshProxySettings ProxySetting; /* Ofs: 0xC Size: 0x114 StructProperty Engine.HierarchicalSimplification.ProxySetting */
    FMeshMergingSettings MergeSetting; /* Ofs: 0x120 Size: 0xC8 StructProperty Engine.HierarchicalSimplification.MergeSetting */
    float DesiredBoundRadius; /* Ofs: 0x1E8 Size: 0x4 FloatProperty Engine.HierarchicalSimplification.DesiredBoundRadius */
    float DesiredFillingPercentage; /* Ofs: 0x1EC Size: 0x4 FloatProperty Engine.HierarchicalSimplification.DesiredFillingPercentage */
    int32_t MinNumberOfActorsToBuild; /* Ofs: 0x1F0 Size: 0x4 IntProperty Engine.HierarchicalSimplification.MinNumberOfActorsToBuild */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHierarchicalSimplification = sizeof(FHierarchicalSimplification); // 500
    static_assert(sizeof(FHierarchicalSimplification) == 0x1F4, "Size of FHierarchicalSimplification is not correct.");
	auto constexpr FHierarchicalSimplification_TransitionScreenSize_Offset = offsetof(FHierarchicalSimplification, TransitionScreenSize);
	static_assert(FHierarchicalSimplification_TransitionScreenSize_Offset == 0x4, "FHierarchicalSimplification::TransitionScreenSize offset is not 4");
	auto constexpr FHierarchicalSimplification_ProxySetting_Offset = offsetof(FHierarchicalSimplification, ProxySetting);
	static_assert(FHierarchicalSimplification_ProxySetting_Offset == 0xc, "FHierarchicalSimplification::ProxySetting offset is not c");
	auto constexpr FHierarchicalSimplification_MergeSetting_Offset = offsetof(FHierarchicalSimplification, MergeSetting);
	static_assert(FHierarchicalSimplification_MergeSetting_Offset == 0x120, "FHierarchicalSimplification::MergeSetting offset is not 120");
	auto constexpr FHierarchicalSimplification_DesiredBoundRadius_Offset = offsetof(FHierarchicalSimplification, DesiredBoundRadius);
	static_assert(FHierarchicalSimplification_DesiredBoundRadius_Offset == 0x1e8, "FHierarchicalSimplification::DesiredBoundRadius offset is not 1e8");
	auto constexpr FHierarchicalSimplification_DesiredFillingPercentage_Offset = offsetof(FHierarchicalSimplification, DesiredFillingPercentage);
	static_assert(FHierarchicalSimplification_DesiredFillingPercentage_Offset == 0x1ec, "FHierarchicalSimplification::DesiredFillingPercentage offset is not 1ec");
	auto constexpr FHierarchicalSimplification_MinNumberOfActorsToBuild_Offset = offsetof(FHierarchicalSimplification, MinNumberOfActorsToBuild);
	static_assert(FHierarchicalSimplification_MinNumberOfActorsToBuild_Offset == 0x1f0, "FHierarchicalSimplification::MinNumberOfActorsToBuild offset is not 1f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
