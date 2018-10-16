#pragma once
#include "FAnimNode_Base.hpp"
#include "ESnapshotSourceMode.hpp"
#include "FPoseSnapshot.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_PoseSnapshot // Size: 0xB0
 : public FAnimNode_Base // Size: 0x30
{
public:
    TEnumAsByte<enum ESnapshotSourceMode> Mode; /* Ofs: 0x30 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_PoseSnapshot.Mode */
    uint8_t UnknownData31[0x7];
    FName SnapshotName; /* Ofs: 0x38 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_PoseSnapshot.SnapshotName */
    FPoseSnapshot Snapshot; /* Ofs: 0x40 Size: 0x38 StructProperty AnimGraphRuntime.AnimNode_PoseSnapshot.Snapshot */
    uint8_t UnknownData78[0x38];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_PoseSnapshot = sizeof(FAnimNode_PoseSnapshot); // 176
    static_assert(sizeof(FAnimNode_PoseSnapshot) == 0xB0, "Size of FAnimNode_PoseSnapshot is not correct.");
	auto constexpr FAnimNode_PoseSnapshot_Mode_Offset = offsetof(FAnimNode_PoseSnapshot, Mode);
	static_assert(FAnimNode_PoseSnapshot_Mode_Offset == 0x30, "FAnimNode_PoseSnapshot::Mode offset is not 30");
	auto constexpr FAnimNode_PoseSnapshot_SnapshotName_Offset = offsetof(FAnimNode_PoseSnapshot, SnapshotName);
	static_assert(FAnimNode_PoseSnapshot_SnapshotName_Offset == 0x38, "FAnimNode_PoseSnapshot::SnapshotName offset is not 38");
	auto constexpr FAnimNode_PoseSnapshot_Snapshot_Offset = offsetof(FAnimNode_PoseSnapshot, Snapshot);
	static_assert(FAnimNode_PoseSnapshot_Snapshot_Offset == 0x40, "FAnimNode_PoseSnapshot::Snapshot offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
