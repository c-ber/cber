#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "ELevelVisibility.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneLevelVisibilitySectionTemplate // Size: 0x30
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    TEnumAsByte<enum ELevelVisibility> Visibility; /* Ofs: 0x18 Size: 0x1 EnumProperty MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate.Visibility */
    uint8_t UnknownData19[0x7];
    TArray<struct FName> LevelNames; /* Ofs: 0x20 Size: 0x10 ArrayProperty MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate.LevelNames */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneLevelVisibilitySectionTemplate = sizeof(FMovieSceneLevelVisibilitySectionTemplate); // 48
    static_assert(sizeof(FMovieSceneLevelVisibilitySectionTemplate) == 0x30, "Size of FMovieSceneLevelVisibilitySectionTemplate is not correct.");
	auto constexpr FMovieSceneLevelVisibilitySectionTemplate_Visibility_Offset = offsetof(FMovieSceneLevelVisibilitySectionTemplate, Visibility);
	static_assert(FMovieSceneLevelVisibilitySectionTemplate_Visibility_Offset == 0x18, "FMovieSceneLevelVisibilitySectionTemplate::Visibility offset is not 18");
	auto constexpr FMovieSceneLevelVisibilitySectionTemplate_LevelNames_Offset = offsetof(FMovieSceneLevelVisibilitySectionTemplate, LevelNames);
	static_assert(FMovieSceneLevelVisibilitySectionTemplate_LevelNames_Offset == 0x20, "FMovieSceneLevelVisibilitySectionTemplate::LevelNames offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
