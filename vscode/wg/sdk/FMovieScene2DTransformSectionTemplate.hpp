#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScene2DTransformSectionTemplate // Size: 0x350
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty UMG.MovieScene2DTransformSectionTemplate.PropertyData */
    FRichCurve Translation[2]; /* Ofs: 0x40 Size: 0x70 StructProperty UMG.MovieScene2DTransformSectionTemplate.Translation */
    FRichCurve Rotation; /* Ofs: 0x120 Size: 0x70 StructProperty UMG.MovieScene2DTransformSectionTemplate.Rotation */
    FRichCurve Scale[2]; /* Ofs: 0x190 Size: 0x70 StructProperty UMG.MovieScene2DTransformSectionTemplate.Scale */
    FRichCurve Shear[2]; /* Ofs: 0x270 Size: 0x70 StructProperty UMG.MovieScene2DTransformSectionTemplate.Shear */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScene2DTransformSectionTemplate = sizeof(FMovieScene2DTransformSectionTemplate); // 848
    static_assert(sizeof(FMovieScene2DTransformSectionTemplate) == 0x350, "Size of FMovieScene2DTransformSectionTemplate is not correct.");
	auto constexpr FMovieScene2DTransformSectionTemplate_PropertyData_Offset = offsetof(FMovieScene2DTransformSectionTemplate, PropertyData);
	static_assert(FMovieScene2DTransformSectionTemplate_PropertyData_Offset == 0x18, "FMovieScene2DTransformSectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieScene2DTransformSectionTemplate_Translation_Offset = offsetof(FMovieScene2DTransformSectionTemplate, Translation);
	static_assert(FMovieScene2DTransformSectionTemplate_Translation_Offset == 0x40, "FMovieScene2DTransformSectionTemplate::Translation offset is not 40");
	auto constexpr FMovieScene2DTransformSectionTemplate_Rotation_Offset = offsetof(FMovieScene2DTransformSectionTemplate, Rotation);
	static_assert(FMovieScene2DTransformSectionTemplate_Rotation_Offset == 0x120, "FMovieScene2DTransformSectionTemplate::Rotation offset is not 120");
	auto constexpr FMovieScene2DTransformSectionTemplate_Scale_Offset = offsetof(FMovieScene2DTransformSectionTemplate, Scale);
	static_assert(FMovieScene2DTransformSectionTemplate_Scale_Offset == 0x190, "FMovieScene2DTransformSectionTemplate::Scale offset is not 190");
	auto constexpr FMovieScene2DTransformSectionTemplate_Shear_Offset = offsetof(FMovieScene2DTransformSectionTemplate, Shear);
	static_assert(FMovieScene2DTransformSectionTemplate_Shear_Offset == 0x270, "FMovieScene2DTransformSectionTemplate::Shear offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
