#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneVectorPropertySectionTemplate // Size: 0x208
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneVectorPropertySectionTemplate.PropertyData */
    FRichCurve ComponentCurves[4]; /* Ofs: 0x40 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneVectorPropertySectionTemplate.ComponentCurves */
    int32_t NumChannelsUsed; /* Ofs: 0x200 Size: 0x4 IntProperty MovieSceneTracks.MovieSceneVectorPropertySectionTemplate.NumChannelsUsed */
    uint8_t UnknownData204[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneVectorPropertySectionTemplate = sizeof(FMovieSceneVectorPropertySectionTemplate); // 520
    static_assert(sizeof(FMovieSceneVectorPropertySectionTemplate) == 0x208, "Size of FMovieSceneVectorPropertySectionTemplate is not correct.");
	auto constexpr FMovieSceneVectorPropertySectionTemplate_PropertyData_Offset = offsetof(FMovieSceneVectorPropertySectionTemplate, PropertyData);
	static_assert(FMovieSceneVectorPropertySectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneVectorPropertySectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneVectorPropertySectionTemplate_ComponentCurves_Offset = offsetof(FMovieSceneVectorPropertySectionTemplate, ComponentCurves);
	static_assert(FMovieSceneVectorPropertySectionTemplate_ComponentCurves_Offset == 0x40, "FMovieSceneVectorPropertySectionTemplate::ComponentCurves offset is not 40");
	auto constexpr FMovieSceneVectorPropertySectionTemplate_NumChannelsUsed_Offset = offsetof(FMovieSceneVectorPropertySectionTemplate, NumChannelsUsed);
	static_assert(FMovieSceneVectorPropertySectionTemplate_NumChannelsUsed_Offset == 0x200, "FMovieSceneVectorPropertySectionTemplate::NumChannelsUsed offset is not 200");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
