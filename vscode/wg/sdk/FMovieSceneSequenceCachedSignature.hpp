#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSequenceCachedSignature // Size: 0x18
{
public:
    TWeakObjectPtr<ExternalPtr<struct UMovieSceneSequence>> Sequence; /* Ofs: 0x0 Size: 0x8 WeakObjectProperty MovieScene.MovieSceneSequenceCachedSignature.Sequence */
    FGuid CachedSignature; /* Ofs: 0x8 Size: 0x10 StructProperty MovieScene.MovieSceneSequenceCachedSignature.CachedSignature */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSequenceCachedSignature = sizeof(FMovieSceneSequenceCachedSignature); // 24
    static_assert(sizeof(FMovieSceneSequenceCachedSignature) == 0x18, "Size of FMovieSceneSequenceCachedSignature is not correct.");
	auto constexpr FMovieSceneSequenceCachedSignature_Sequence_Offset = offsetof(FMovieSceneSequenceCachedSignature, Sequence);
	static_assert(FMovieSceneSequenceCachedSignature_Sequence_Offset == 0x0, "FMovieSceneSequenceCachedSignature::Sequence offset is not 0");
	auto constexpr FMovieSceneSequenceCachedSignature_CachedSignature_Offset = offsetof(FMovieSceneSequenceCachedSignature, CachedSignature);
	static_assert(FMovieSceneSequenceCachedSignature_CachedSignature_Offset == 0x8, "FMovieSceneSequenceCachedSignature::CachedSignature offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
