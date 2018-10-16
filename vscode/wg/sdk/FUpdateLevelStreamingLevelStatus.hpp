#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUpdateLevelStreamingLevelStatus // Size: 0x10
{
public:
    FName PackageName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.UpdateLevelStreamingLevelStatus.PackageName */
    int32_t LODIndex; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.UpdateLevelStreamingLevelStatus.LODIndex */
    bool bNewShouldBeLoaded : 1; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.UpdateLevelStreamingLevelStatus.bNewShouldBeLoaded */
    bool bNewShouldBeVisible : 1; /* Ofs: 0xC Size: 0x1 BitMask: 02 BoolProperty Engine.UpdateLevelStreamingLevelStatus.bNewShouldBeVisible */
    bool bNewShouldBlockOnLoad : 1; /* Ofs: 0xC Size: 0x1 BitMask: 04 BoolProperty Engine.UpdateLevelStreamingLevelStatus.bNewShouldBlockOnLoad */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUpdateLevelStreamingLevelStatus = sizeof(FUpdateLevelStreamingLevelStatus); // 16
    static_assert(sizeof(FUpdateLevelStreamingLevelStatus) == 0x10, "Size of FUpdateLevelStreamingLevelStatus is not correct.");
	auto constexpr FUpdateLevelStreamingLevelStatus_PackageName_Offset = offsetof(FUpdateLevelStreamingLevelStatus, PackageName);
	static_assert(FUpdateLevelStreamingLevelStatus_PackageName_Offset == 0x0, "FUpdateLevelStreamingLevelStatus::PackageName offset is not 0");
	auto constexpr FUpdateLevelStreamingLevelStatus_LODIndex_Offset = offsetof(FUpdateLevelStreamingLevelStatus, LODIndex);
	static_assert(FUpdateLevelStreamingLevelStatus_LODIndex_Offset == 0x8, "FUpdateLevelStreamingLevelStatus::LODIndex offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
