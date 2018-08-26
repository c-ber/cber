#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneMarginSectionTemplate // Size: 0x200
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty UMG.MovieSceneMarginSectionTemplate.PropertyData */
    FRichCurve TopCurve; /* Ofs: 0x40 Size: 0x70 StructProperty UMG.MovieSceneMarginSectionTemplate.TopCurve */
    FRichCurve LeftCurve; /* Ofs: 0xB0 Size: 0x70 StructProperty UMG.MovieSceneMarginSectionTemplate.LeftCurve */
    FRichCurve RightCurve; /* Ofs: 0x120 Size: 0x70 StructProperty UMG.MovieSceneMarginSectionTemplate.RightCurve */
    FRichCurve BottomCurve; /* Ofs: 0x190 Size: 0x70 StructProperty UMG.MovieSceneMarginSectionTemplate.BottomCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneMarginSectionTemplate = sizeof(FMovieSceneMarginSectionTemplate); // 512
    static_assert(sizeof(FMovieSceneMarginSectionTemplate) == 0x200, "Size of FMovieSceneMarginSectionTemplate is not correct.");
	auto constexpr FMovieSceneMarginSectionTemplate_PropertyData_Offset = offsetof(FMovieSceneMarginSectionTemplate, PropertyData);
	static_assert(FMovieSceneMarginSectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneMarginSectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneMarginSectionTemplate_TopCurve_Offset = offsetof(FMovieSceneMarginSectionTemplate, TopCurve);
	static_assert(FMovieSceneMarginSectionTemplate_TopCurve_Offset == 0x40, "FMovieSceneMarginSectionTemplate::TopCurve offset is not 40");
	auto constexpr FMovieSceneMarginSectionTemplate_LeftCurve_Offset = offsetof(FMovieSceneMarginSectionTemplate, LeftCurve);
	static_assert(FMovieSceneMarginSectionTemplate_LeftCurve_Offset == 0xb0, "FMovieSceneMarginSectionTemplate::LeftCurve offset is not b0");
	auto constexpr FMovieSceneMarginSectionTemplate_RightCurve_Offset = offsetof(FMovieSceneMarginSectionTemplate, RightCurve);
	static_assert(FMovieSceneMarginSectionTemplate_RightCurve_Offset == 0x120, "FMovieSceneMarginSectionTemplate::RightCurve offset is not 120");
	auto constexpr FMovieSceneMarginSectionTemplate_BottomCurve_Offset = offsetof(FMovieSceneMarginSectionTemplate, BottomCurve);
	static_assert(FMovieSceneMarginSectionTemplate_BottomCurve_Offset == 0x190, "FMovieSceneMarginSectionTemplate::BottomCurve offset is not 190");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
