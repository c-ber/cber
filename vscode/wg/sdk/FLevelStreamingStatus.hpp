#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelStreamingStatus // Size: 0x10
{
public:
    FName PackageName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.LevelStreamingStatus.PackageName */
    bool bShouldBeLoaded : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.LevelStreamingStatus.bShouldBeLoaded */
    bool bShouldBeVisible : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 02 BoolProperty Engine.LevelStreamingStatus.bShouldBeVisible */
    uint8_t UnknownData9[0x3];
    uint32_t LODIndex; /* Ofs: 0xC Size: 0x4 UInt32Property Engine.LevelStreamingStatus.LODIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelStreamingStatus = sizeof(FLevelStreamingStatus); // 16
    static_assert(sizeof(FLevelStreamingStatus) == 0x10, "Size of FLevelStreamingStatus is not correct.");
	auto constexpr FLevelStreamingStatus_PackageName_Offset = offsetof(FLevelStreamingStatus, PackageName);
	static_assert(FLevelStreamingStatus_PackageName_Offset == 0x0, "FLevelStreamingStatus::PackageName offset is not 0");
	auto constexpr FLevelStreamingStatus_LODIndex_Offset = offsetof(FLevelStreamingStatus, LODIndex);
	static_assert(FLevelStreamingStatus_LODIndex_Offset == 0xc, "FLevelStreamingStatus::LODIndex offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
