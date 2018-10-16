#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FGuid.hpp"
#include "FRichCurve.hpp"
#include "MovieScene3DPathSection_Axis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScene3DPathSectionTemplate // Size: 0xA0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FGuid PathGuid; /* Ofs: 0x18 Size: 0x10 StructProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.PathGuid */
    FRichCurve TimingCurve; /* Ofs: 0x28 Size: 0x70 StructProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.TimingCurve */
    TEnumAsByte<enum MovieScene3DPathSection_Axis> FrontAxisEnum; /* Ofs: 0x98 Size: 0x1 EnumProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.FrontAxisEnum */
    TEnumAsByte<enum MovieScene3DPathSection_Axis> UpAxisEnum; /* Ofs: 0x99 Size: 0x1 EnumProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.UpAxisEnum */
    uint8_t UnknownData9A[0x2];
    bool bFollow : 1; /* Ofs: 0x9C Size: 0x1 BitMask: 01 BoolProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.bFollow */
    bool bReverse : 1; /* Ofs: 0x9C Size: 0x1 BitMask: 02 BoolProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.bReverse */
    bool bForceUpright : 1; /* Ofs: 0x9C Size: 0x1 BitMask: 04 BoolProperty MovieSceneTracks.MovieScene3DPathSectionTemplate.bForceUpright */
    uint8_t UnknownData9D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScene3DPathSectionTemplate = sizeof(FMovieScene3DPathSectionTemplate); // 160
    static_assert(sizeof(FMovieScene3DPathSectionTemplate) == 0xA0, "Size of FMovieScene3DPathSectionTemplate is not correct.");
	auto constexpr FMovieScene3DPathSectionTemplate_PathGuid_Offset = offsetof(FMovieScene3DPathSectionTemplate, PathGuid);
	static_assert(FMovieScene3DPathSectionTemplate_PathGuid_Offset == 0x18, "FMovieScene3DPathSectionTemplate::PathGuid offset is not 18");
	auto constexpr FMovieScene3DPathSectionTemplate_TimingCurve_Offset = offsetof(FMovieScene3DPathSectionTemplate, TimingCurve);
	static_assert(FMovieScene3DPathSectionTemplate_TimingCurve_Offset == 0x28, "FMovieScene3DPathSectionTemplate::TimingCurve offset is not 28");
	auto constexpr FMovieScene3DPathSectionTemplate_FrontAxisEnum_Offset = offsetof(FMovieScene3DPathSectionTemplate, FrontAxisEnum);
	static_assert(FMovieScene3DPathSectionTemplate_FrontAxisEnum_Offset == 0x98, "FMovieScene3DPathSectionTemplate::FrontAxisEnum offset is not 98");
	auto constexpr FMovieScene3DPathSectionTemplate_UpAxisEnum_Offset = offsetof(FMovieScene3DPathSectionTemplate, UpAxisEnum);
	static_assert(FMovieScene3DPathSectionTemplate_UpAxisEnum_Offset == 0x99, "FMovieScene3DPathSectionTemplate::UpAxisEnum offset is not 99");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
