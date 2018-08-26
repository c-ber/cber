#pragma once
#include "FNodeHierarchyData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNodeHierarchyWithUserData // Size: 0x78
{
public:
    uint8_t UnknownData0[0x8];
    FNodeHierarchyData Hierarchy; /* Ofs: 0x8 Size: 0x70 StructProperty AnimationCore.NodeHierarchyWithUserData.Hierarchy */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNodeHierarchyWithUserData = sizeof(FNodeHierarchyWithUserData); // 120
    static_assert(sizeof(FNodeHierarchyWithUserData) == 0x78, "Size of FNodeHierarchyWithUserData is not correct.");
	auto constexpr FNodeHierarchyWithUserData_Hierarchy_Offset = offsetof(FNodeHierarchyWithUserData, Hierarchy);
	static_assert(FNodeHierarchyWithUserData_Hierarchy_Offset == 0x8, "FNodeHierarchyWithUserData::Hierarchy offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
