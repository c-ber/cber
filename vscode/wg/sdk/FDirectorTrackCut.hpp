#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDirectorTrackCut // Size: 0x18
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.DirectorTrackCut.Time */
    float TransitionTime; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.DirectorTrackCut.TransitionTime */
    FName TargetCamGroup; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.DirectorTrackCut.TargetCamGroup */
    int32_t ShotNumber; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.DirectorTrackCut.ShotNumber */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDirectorTrackCut = sizeof(FDirectorTrackCut); // 24
    static_assert(sizeof(FDirectorTrackCut) == 0x18, "Size of FDirectorTrackCut is not correct.");
	auto constexpr FDirectorTrackCut_Time_Offset = offsetof(FDirectorTrackCut, Time);
	static_assert(FDirectorTrackCut_Time_Offset == 0x0, "FDirectorTrackCut::Time offset is not 0");
	auto constexpr FDirectorTrackCut_TransitionTime_Offset = offsetof(FDirectorTrackCut, TransitionTime);
	static_assert(FDirectorTrackCut_TransitionTime_Offset == 0x4, "FDirectorTrackCut::TransitionTime offset is not 4");
	auto constexpr FDirectorTrackCut_TargetCamGroup_Offset = offsetof(FDirectorTrackCut, TargetCamGroup);
	static_assert(FDirectorTrackCut_TargetCamGroup_Offset == 0x8, "FDirectorTrackCut::TargetCamGroup offset is not 8");
	auto constexpr FDirectorTrackCut_ShotNumber_Offset = offsetof(FDirectorTrackCut, ShotNumber);
	static_assert(FDirectorTrackCut_ShotNumber_Offset == 0x10, "FDirectorTrackCut::ShotNumber offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
