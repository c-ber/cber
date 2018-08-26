#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDestructibleSpecialHierarchyDepths // Size: 0x14
{
public:
    int32_t SupportDepth; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.DestructibleSpecialHierarchyDepths.SupportDepth */
    int32_t MinimumFractureDepth; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.DestructibleSpecialHierarchyDepths.MinimumFractureDepth */
    bool bEnableDebris; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.DestructibleSpecialHierarchyDepths.bEnableDebris */
    uint8_t UnknownData9[0x3];
    int32_t DebrisDepth; /* Ofs: 0xC Size: 0x4 IntProperty Engine.DestructibleSpecialHierarchyDepths.DebrisDepth */
    int32_t EssentialDepth; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.DestructibleSpecialHierarchyDepths.EssentialDepth */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDestructibleSpecialHierarchyDepths = sizeof(FDestructibleSpecialHierarchyDepths); // 20
    static_assert(sizeof(FDestructibleSpecialHierarchyDepths) == 0x14, "Size of FDestructibleSpecialHierarchyDepths is not correct.");
	auto constexpr FDestructibleSpecialHierarchyDepths_SupportDepth_Offset = offsetof(FDestructibleSpecialHierarchyDepths, SupportDepth);
	static_assert(FDestructibleSpecialHierarchyDepths_SupportDepth_Offset == 0x0, "FDestructibleSpecialHierarchyDepths::SupportDepth offset is not 0");
	auto constexpr FDestructibleSpecialHierarchyDepths_MinimumFractureDepth_Offset = offsetof(FDestructibleSpecialHierarchyDepths, MinimumFractureDepth);
	static_assert(FDestructibleSpecialHierarchyDepths_MinimumFractureDepth_Offset == 0x4, "FDestructibleSpecialHierarchyDepths::MinimumFractureDepth offset is not 4");
	auto constexpr FDestructibleSpecialHierarchyDepths_DebrisDepth_Offset = offsetof(FDestructibleSpecialHierarchyDepths, DebrisDepth);
	static_assert(FDestructibleSpecialHierarchyDepths_DebrisDepth_Offset == 0xc, "FDestructibleSpecialHierarchyDepths::DebrisDepth offset is not c");
	auto constexpr FDestructibleSpecialHierarchyDepths_EssentialDepth_Offset = offsetof(FDestructibleSpecialHierarchyDepths, EssentialDepth);
	static_assert(FDestructibleSpecialHierarchyDepths_EssentialDepth_Offset == 0x10, "FDestructibleSpecialHierarchyDepths::EssentialDepth offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
