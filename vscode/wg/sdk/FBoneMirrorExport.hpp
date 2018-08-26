#pragma once
#include "EAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoneMirrorExport // Size: 0x18
{
public:
    FName BoneName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BoneMirrorExport.BoneName */
    FName SourceBoneName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.BoneMirrorExport.SourceBoneName */
    TEnumAsByte<enum EAxis> BoneFlipAxis; /* Ofs: 0x10 Size: 0x1 ByteProperty Engine.BoneMirrorExport.BoneFlipAxis */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoneMirrorExport = sizeof(FBoneMirrorExport); // 24
    static_assert(sizeof(FBoneMirrorExport) == 0x18, "Size of FBoneMirrorExport is not correct.");
	auto constexpr FBoneMirrorExport_BoneName_Offset = offsetof(FBoneMirrorExport, BoneName);
	static_assert(FBoneMirrorExport_BoneName_Offset == 0x0, "FBoneMirrorExport::BoneName offset is not 0");
	auto constexpr FBoneMirrorExport_SourceBoneName_Offset = offsetof(FBoneMirrorExport, SourceBoneName);
	static_assert(FBoneMirrorExport_SourceBoneName_Offset == 0x8, "FBoneMirrorExport::SourceBoneName offset is not 8");
	auto constexpr FBoneMirrorExport_BoneFlipAxis_Offset = offsetof(FBoneMirrorExport, BoneFlipAxis);
	static_assert(FBoneMirrorExport_BoneFlipAxis_Offset == 0x10, "FBoneMirrorExport::BoneFlipAxis offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
