#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScene3DAttachSectionTemplate // Size: 0x38
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FGuid AttachGuid; /* Ofs: 0x18 Size: 0x10 StructProperty MovieSceneTracks.MovieScene3DAttachSectionTemplate.AttachGuid */
    FName AttachSocketName; /* Ofs: 0x28 Size: 0x8 NameProperty MovieSceneTracks.MovieScene3DAttachSectionTemplate.AttachSocketName */
    FName AttachComponentName; /* Ofs: 0x30 Size: 0x8 NameProperty MovieSceneTracks.MovieScene3DAttachSectionTemplate.AttachComponentName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScene3DAttachSectionTemplate = sizeof(FMovieScene3DAttachSectionTemplate); // 56
    static_assert(sizeof(FMovieScene3DAttachSectionTemplate) == 0x38, "Size of FMovieScene3DAttachSectionTemplate is not correct.");
	auto constexpr FMovieScene3DAttachSectionTemplate_AttachGuid_Offset = offsetof(FMovieScene3DAttachSectionTemplate, AttachGuid);
	static_assert(FMovieScene3DAttachSectionTemplate_AttachGuid_Offset == 0x18, "FMovieScene3DAttachSectionTemplate::AttachGuid offset is not 18");
	auto constexpr FMovieScene3DAttachSectionTemplate_AttachSocketName_Offset = offsetof(FMovieScene3DAttachSectionTemplate, AttachSocketName);
	static_assert(FMovieScene3DAttachSectionTemplate_AttachSocketName_Offset == 0x28, "FMovieScene3DAttachSectionTemplate::AttachSocketName offset is not 28");
	auto constexpr FMovieScene3DAttachSectionTemplate_AttachComponentName_Offset = offsetof(FMovieScene3DAttachSectionTemplate, AttachComponentName);
	static_assert(FMovieScene3DAttachSectionTemplate_AttachComponentName_Offset == 0x30, "FMovieScene3DAttachSectionTemplate::AttachComponentName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
