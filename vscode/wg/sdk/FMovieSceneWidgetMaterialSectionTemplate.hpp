#pragma once
#include "FMovieSceneParameterSectionTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneWidgetMaterialSectionTemplate // Size: 0x58
 : public FMovieSceneParameterSectionTemplate // Size: 0x48
{
public:
    TArray<struct FName> BrushPropertyNamePath; /* Ofs: 0x48 Size: 0x10 ArrayProperty UMG.MovieSceneWidgetMaterialSectionTemplate.BrushPropertyNamePath */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneWidgetMaterialSectionTemplate = sizeof(FMovieSceneWidgetMaterialSectionTemplate); // 88
    static_assert(sizeof(FMovieSceneWidgetMaterialSectionTemplate) == 0x58, "Size of FMovieSceneWidgetMaterialSectionTemplate is not correct.");
	auto constexpr FMovieSceneWidgetMaterialSectionTemplate_BrushPropertyNamePath_Offset = offsetof(FMovieSceneWidgetMaterialSectionTemplate, BrushPropertyNamePath);
	static_assert(FMovieSceneWidgetMaterialSectionTemplate_BrushPropertyNamePath_Offset == 0x48, "FMovieSceneWidgetMaterialSectionTemplate::BrushPropertyNamePath offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
