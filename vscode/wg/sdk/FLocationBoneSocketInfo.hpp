#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLocationBoneSocketInfo // Size: 0x18
{
public:
    FName BoneSocketName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.LocationBoneSocketInfo.BoneSocketName */
    FVector Offset; /* Ofs: 0x8 Size: 0xC StructProperty Engine.LocationBoneSocketInfo.Offset */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLocationBoneSocketInfo = sizeof(FLocationBoneSocketInfo); // 24
    static_assert(sizeof(FLocationBoneSocketInfo) == 0x18, "Size of FLocationBoneSocketInfo is not correct.");
	auto constexpr FLocationBoneSocketInfo_BoneSocketName_Offset = offsetof(FLocationBoneSocketInfo, BoneSocketName);
	static_assert(FLocationBoneSocketInfo_BoneSocketName_Offset == 0x0, "FLocationBoneSocketInfo::BoneSocketName offset is not 0");
	auto constexpr FLocationBoneSocketInfo_Offset_Offset = offsetof(FLocationBoneSocketInfo, Offset);
	static_assert(FLocationBoneSocketInfo_Offset_Offset == 0x8, "FLocationBoneSocketInfo::Offset offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
