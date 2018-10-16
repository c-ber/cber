#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPoseData // Size: 0x30
{
public:
    TArray<struct FTransform> LocalSpacePose; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.PoseData.LocalSpacePose */
    TArray<bool> LocalSpacePoseMask; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.PoseData.LocalSpacePoseMask */
    TArray<float> CurveData; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.PoseData.CurveData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPoseData = sizeof(FPoseData); // 48
    static_assert(sizeof(FPoseData) == 0x30, "Size of FPoseData is not correct.");
	auto constexpr FPoseData_LocalSpacePose_Offset = offsetof(FPoseData, LocalSpacePose);
	static_assert(FPoseData_LocalSpacePose_Offset == 0x0, "FPoseData::LocalSpacePose offset is not 0");
	auto constexpr FPoseData_LocalSpacePoseMask_Offset = offsetof(FPoseData, LocalSpacePoseMask);
	static_assert(FPoseData_LocalSpacePoseMask_Offset == 0x10, "FPoseData::LocalSpacePoseMask offset is not 10");
	auto constexpr FPoseData_CurveData_Offset = offsetof(FPoseData, CurveData);
	static_assert(FPoseData_CurveData_Offset == 0x20, "FPoseData::CurveData offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
