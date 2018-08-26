#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneCameraAnimSectionData // Size: 0x20
{
public:
    ExternalPtr<struct UCameraAnim> CameraAnim; /* Ofs: 0x0 Size: 0x8 ObjectProperty MovieSceneTracks.MovieSceneCameraAnimSectionData.CameraAnim */
    float PlayRate; /* Ofs: 0x8 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneCameraAnimSectionData.PlayRate */
    float PlayScale; /* Ofs: 0xC Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneCameraAnimSectionData.PlayScale */
    float BlendInTime; /* Ofs: 0x10 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneCameraAnimSectionData.BlendInTime */
    float BlendOutTime; /* Ofs: 0x14 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneCameraAnimSectionData.BlendOutTime */
    bool bLooping; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty MovieSceneTracks.MovieSceneCameraAnimSectionData.bLooping */
    uint8_t UnknownData19[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneCameraAnimSectionData = sizeof(FMovieSceneCameraAnimSectionData); // 32
    static_assert(sizeof(FMovieSceneCameraAnimSectionData) == 0x20, "Size of FMovieSceneCameraAnimSectionData is not correct.");
	auto constexpr FMovieSceneCameraAnimSectionData_CameraAnim_Offset = offsetof(FMovieSceneCameraAnimSectionData, CameraAnim);
	static_assert(FMovieSceneCameraAnimSectionData_CameraAnim_Offset == 0x0, "FMovieSceneCameraAnimSectionData::CameraAnim offset is not 0");
	auto constexpr FMovieSceneCameraAnimSectionData_PlayRate_Offset = offsetof(FMovieSceneCameraAnimSectionData, PlayRate);
	static_assert(FMovieSceneCameraAnimSectionData_PlayRate_Offset == 0x8, "FMovieSceneCameraAnimSectionData::PlayRate offset is not 8");
	auto constexpr FMovieSceneCameraAnimSectionData_PlayScale_Offset = offsetof(FMovieSceneCameraAnimSectionData, PlayScale);
	static_assert(FMovieSceneCameraAnimSectionData_PlayScale_Offset == 0xc, "FMovieSceneCameraAnimSectionData::PlayScale offset is not c");
	auto constexpr FMovieSceneCameraAnimSectionData_BlendInTime_Offset = offsetof(FMovieSceneCameraAnimSectionData, BlendInTime);
	static_assert(FMovieSceneCameraAnimSectionData_BlendInTime_Offset == 0x10, "FMovieSceneCameraAnimSectionData::BlendInTime offset is not 10");
	auto constexpr FMovieSceneCameraAnimSectionData_BlendOutTime_Offset = offsetof(FMovieSceneCameraAnimSectionData, BlendOutTime);
	static_assert(FMovieSceneCameraAnimSectionData_BlendOutTime_Offset == 0x14, "FMovieSceneCameraAnimSectionData::BlendOutTime offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
