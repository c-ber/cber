#pragma once
#include "FMovieSceneParameterSectionTemplate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneMaterialParameterCollectionTemplate // Size: 0x50
 : public FMovieSceneParameterSectionTemplate // Size: 0x48
{
public:
    ExternalPtr<struct UMaterialParameterCollection> MPC; /* Ofs: 0x48 Size: 0x8 ObjectProperty MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate.MPC */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneMaterialParameterCollectionTemplate = sizeof(FMovieSceneMaterialParameterCollectionTemplate); // 80
    static_assert(sizeof(FMovieSceneMaterialParameterCollectionTemplate) == 0x50, "Size of FMovieSceneMaterialParameterCollectionTemplate is not correct.");
	auto constexpr FMovieSceneMaterialParameterCollectionTemplate_MPC_Offset = offsetof(FMovieSceneMaterialParameterCollectionTemplate, MPC);
	static_assert(FMovieSceneMaterialParameterCollectionTemplate_MPC_Offset == 0x48, "FMovieSceneMaterialParameterCollectionTemplate::MPC offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
