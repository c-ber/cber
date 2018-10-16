#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FGuid.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneCameraCutSectionTemplate // Size: 0x70
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FGuid CameraGuid; /* Ofs: 0x18 Size: 0x10 StructProperty MovieSceneTracks.MovieSceneCameraCutSectionTemplate.CameraGuid */
    uint8_t UnknownData28[0x8];
    FTransform CutTransform; /* Ofs: 0x30 Size: 0x30 StructProperty MovieSceneTracks.MovieSceneCameraCutSectionTemplate.CutTransform */
    bool bHasCutTransform; /* Ofs: 0x60 Size: 0x1 BitMask: 01 BoolProperty MovieSceneTracks.MovieSceneCameraCutSectionTemplate.bHasCutTransform */
    uint8_t UnknownData61[0xF];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneCameraCutSectionTemplate = sizeof(FMovieSceneCameraCutSectionTemplate); // 112
    static_assert(sizeof(FMovieSceneCameraCutSectionTemplate) == 0x70, "Size of FMovieSceneCameraCutSectionTemplate is not correct.");
	auto constexpr FMovieSceneCameraCutSectionTemplate_CameraGuid_Offset = offsetof(FMovieSceneCameraCutSectionTemplate, CameraGuid);
	static_assert(FMovieSceneCameraCutSectionTemplate_CameraGuid_Offset == 0x18, "FMovieSceneCameraCutSectionTemplate::CameraGuid offset is not 18");
	auto constexpr FMovieSceneCameraCutSectionTemplate_CutTransform_Offset = offsetof(FMovieSceneCameraCutSectionTemplate, CutTransform);
	static_assert(FMovieSceneCameraCutSectionTemplate_CutTransform_Offset == 0x30, "FMovieSceneCameraCutSectionTemplate::CutTransform offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
