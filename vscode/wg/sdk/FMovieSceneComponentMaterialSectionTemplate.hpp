#pragma once
#include "FMovieSceneParameterSectionTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneComponentMaterialSectionTemplate // Size: 0x50
 : public FMovieSceneParameterSectionTemplate // Size: 0x48
{
public:
    int32_t MaterialIndex; /* Ofs: 0x48 Size: 0x4 IntProperty MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate.MaterialIndex */
    uint8_t UnknownData4C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneComponentMaterialSectionTemplate = sizeof(FMovieSceneComponentMaterialSectionTemplate); // 80
    static_assert(sizeof(FMovieSceneComponentMaterialSectionTemplate) == 0x50, "Size of FMovieSceneComponentMaterialSectionTemplate is not correct.");
	auto constexpr FMovieSceneComponentMaterialSectionTemplate_MaterialIndex_Offset = offsetof(FMovieSceneComponentMaterialSectionTemplate, MaterialIndex);
	static_assert(FMovieSceneComponentMaterialSectionTemplate_MaterialIndex_Offset == 0x48, "FMovieSceneComponentMaterialSectionTemplate::MaterialIndex offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
