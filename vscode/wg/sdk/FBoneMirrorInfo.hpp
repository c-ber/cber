#pragma once
#include "EAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoneMirrorInfo // Size: 0x8
{
public:
    int32_t SourceIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.BoneMirrorInfo.SourceIndex */
    TEnumAsByte<enum EAxis> BoneFlipAxis; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.BoneMirrorInfo.BoneFlipAxis */
    uint8_t UnknownData5[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoneMirrorInfo = sizeof(FBoneMirrorInfo); // 8
    static_assert(sizeof(FBoneMirrorInfo) == 0x8, "Size of FBoneMirrorInfo is not correct.");
	auto constexpr FBoneMirrorInfo_SourceIndex_Offset = offsetof(FBoneMirrorInfo, SourceIndex);
	static_assert(FBoneMirrorInfo_SourceIndex_Offset == 0x0, "FBoneMirrorInfo::SourceIndex offset is not 0");
	auto constexpr FBoneMirrorInfo_BoneFlipAxis_Offset = offsetof(FBoneMirrorInfo, BoneFlipAxis);
	static_assert(FBoneMirrorInfo_BoneFlipAxis_Offset == 0x4, "FBoneMirrorInfo::BoneFlipAxis offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
