#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSetMeshLinkup // Size: 0x10
{
public:
    TArray<int32_t> BoneToTrackTable; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.AnimSetMeshLinkup.BoneToTrackTable */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSetMeshLinkup = sizeof(FAnimSetMeshLinkup); // 16
    static_assert(sizeof(FAnimSetMeshLinkup) == 0x10, "Size of FAnimSetMeshLinkup is not correct.");
	auto constexpr FAnimSetMeshLinkup_BoneToTrackTable_Offset = offsetof(FAnimSetMeshLinkup, BoneToTrackTable);
	static_assert(FAnimSetMeshLinkup_BoneToTrackTable_Offset == 0x0, "FAnimSetMeshLinkup::BoneToTrackTable offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
