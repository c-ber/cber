#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVirtualBone // Size: 0x18
{
public:
    FName SourceBoneName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.VirtualBone.SourceBoneName */
    FName TargetBoneName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.VirtualBone.TargetBoneName */
    FName VirtualBoneName; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.VirtualBone.VirtualBoneName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVirtualBone = sizeof(FVirtualBone); // 24
    static_assert(sizeof(FVirtualBone) == 0x18, "Size of FVirtualBone is not correct.");
	auto constexpr FVirtualBone_SourceBoneName_Offset = offsetof(FVirtualBone, SourceBoneName);
	static_assert(FVirtualBone_SourceBoneName_Offset == 0x0, "FVirtualBone::SourceBoneName offset is not 0");
	auto constexpr FVirtualBone_TargetBoneName_Offset = offsetof(FVirtualBone, TargetBoneName);
	static_assert(FVirtualBone_TargetBoneName_Offset == 0x8, "FVirtualBone::TargetBoneName offset is not 8");
	auto constexpr FVirtualBone_VirtualBoneName_Offset = offsetof(FVirtualBone, VirtualBoneName);
	static_assert(FVirtualBone_VirtualBoneName_Offset == 0x10, "FVirtualBone::VirtualBoneName offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
