#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNameMapping // Size: 0x10
{
public:
    FName NodeName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.NameMapping.NodeName */
    FName BoneName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.NameMapping.BoneName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNameMapping = sizeof(FNameMapping); // 16
    static_assert(sizeof(FNameMapping) == 0x10, "Size of FNameMapping is not correct.");
	auto constexpr FNameMapping_NodeName_Offset = offsetof(FNameMapping, NodeName);
	static_assert(FNameMapping_NodeName_Offset == 0x0, "FNameMapping::NodeName offset is not 0");
	auto constexpr FNameMapping_BoneName_Offset = offsetof(FNameMapping, BoneName);
	static_assert(FNameMapping_BoneName_Offset == 0x8, "FNameMapping::BoneName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
