#pragma once
#include "ECameraAnimPlaySpace.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneCameraShakeSectionData // Size: 0x20
{
public:
    ExternalPtr<struct UClass> ShakeClass; /* Ofs: 0x0 Size: 0x8 ClassProperty MovieSceneTracks.MovieSceneCameraShakeSectionData.ShakeClass */
    float PlayScale; /* Ofs: 0x8 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneCameraShakeSectionData.PlayScale */
    TEnumAsByte<enum ECameraAnimPlaySpace> PlaySpace; /* Ofs: 0xC Size: 0x1 ByteProperty MovieSceneTracks.MovieSceneCameraShakeSectionData.PlaySpace */
    uint8_t UnknownDataD[0x3];
    FRotator UserDefinedPlaySpace; /* Ofs: 0x10 Size: 0xC StructProperty MovieSceneTracks.MovieSceneCameraShakeSectionData.UserDefinedPlaySpace */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneCameraShakeSectionData = sizeof(FMovieSceneCameraShakeSectionData); // 32
    static_assert(sizeof(FMovieSceneCameraShakeSectionData) == 0x20, "Size of FMovieSceneCameraShakeSectionData is not correct.");
	auto constexpr FMovieSceneCameraShakeSectionData_ShakeClass_Offset = offsetof(FMovieSceneCameraShakeSectionData, ShakeClass);
	static_assert(FMovieSceneCameraShakeSectionData_ShakeClass_Offset == 0x0, "FMovieSceneCameraShakeSectionData::ShakeClass offset is not 0");
	auto constexpr FMovieSceneCameraShakeSectionData_PlayScale_Offset = offsetof(FMovieSceneCameraShakeSectionData, PlayScale);
	static_assert(FMovieSceneCameraShakeSectionData_PlayScale_Offset == 0x8, "FMovieSceneCameraShakeSectionData::PlayScale offset is not 8");
	auto constexpr FMovieSceneCameraShakeSectionData_PlaySpace_Offset = offsetof(FMovieSceneCameraShakeSectionData, PlaySpace);
	static_assert(FMovieSceneCameraShakeSectionData_PlaySpace_Offset == 0xc, "FMovieSceneCameraShakeSectionData::PlaySpace offset is not c");
	auto constexpr FMovieSceneCameraShakeSectionData_UserDefinedPlaySpace_Offset = offsetof(FMovieSceneCameraShakeSectionData, UserDefinedPlaySpace);
	static_assert(FMovieSceneCameraShakeSectionData_UserDefinedPlaySpace_Offset == 0x10, "FMovieSceneCameraShakeSectionData::UserDefinedPlaySpace offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
