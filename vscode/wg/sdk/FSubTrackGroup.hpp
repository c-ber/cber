#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSubTrackGroup // Size: 0x28
{
public:
    FString GroupName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.SubTrackGroup.GroupName */
    TArray<int32_t> TrackIndices; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.SubTrackGroup.TrackIndices */
    bool bIsCollapsed : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.SubTrackGroup.bIsCollapsed */
    bool bIsSelected : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 02 BoolProperty Engine.SubTrackGroup.bIsSelected */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSubTrackGroup = sizeof(FSubTrackGroup); // 40
    static_assert(sizeof(FSubTrackGroup) == 0x28, "Size of FSubTrackGroup is not correct.");
	auto constexpr FSubTrackGroup_GroupName_Offset = offsetof(FSubTrackGroup, GroupName);
	static_assert(FSubTrackGroup_GroupName_Offset == 0x0, "FSubTrackGroup::GroupName offset is not 0");
	auto constexpr FSubTrackGroup_TrackIndices_Offset = offsetof(FSubTrackGroup, TrackIndices);
	static_assert(FSubTrackGroup_TrackIndices_Offset == 0x10, "FSubTrackGroup::TrackIndices offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
