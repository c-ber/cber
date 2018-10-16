#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPoseDataContainer // Size: 0x90
{
public:
    TArray<struct FSmartName> PoseNames; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.PoseDataContainer.PoseNames */
    TArray<struct FPoseData> Poses; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.PoseDataContainer.Poses */
    TArray<struct FName> Tracks; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.PoseDataContainer.Tracks */
    TMap<struct FName, int32_t> TrackMap; /* Ofs: 0x30 Size: 0x50 MapProperty Engine.PoseDataContainer.TrackMap */
    TArray<struct FAnimCurveBase> Curves; /* Ofs: 0x80 Size: 0x10 ArrayProperty Engine.PoseDataContainer.Curves */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPoseDataContainer = sizeof(FPoseDataContainer); // 144
    static_assert(sizeof(FPoseDataContainer) == 0x90, "Size of FPoseDataContainer is not correct.");
	auto constexpr FPoseDataContainer_PoseNames_Offset = offsetof(FPoseDataContainer, PoseNames);
	static_assert(FPoseDataContainer_PoseNames_Offset == 0x0, "FPoseDataContainer::PoseNames offset is not 0");
	auto constexpr FPoseDataContainer_Poses_Offset = offsetof(FPoseDataContainer, Poses);
	static_assert(FPoseDataContainer_Poses_Offset == 0x10, "FPoseDataContainer::Poses offset is not 10");
	auto constexpr FPoseDataContainer_Tracks_Offset = offsetof(FPoseDataContainer, Tracks);
	static_assert(FPoseDataContainer_Tracks_Offset == 0x20, "FPoseDataContainer::Tracks offset is not 20");
	auto constexpr FPoseDataContainer_TrackMap_Offset = offsetof(FPoseDataContainer, TrackMap);
	static_assert(FPoseDataContainer_TrackMap_Offset == 0x30, "FPoseDataContainer::TrackMap offset is not 30");
	auto constexpr FPoseDataContainer_Curves_Offset = offsetof(FPoseDataContainer, Curves);
	static_assert(FPoseDataContainer_Curves_Offset == 0x80, "FPoseDataContainer::Curves offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
