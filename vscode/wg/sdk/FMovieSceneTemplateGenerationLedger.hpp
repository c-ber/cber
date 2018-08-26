#pragma once
#include "FMovieSceneTrackIdentifier.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTemplateGenerationLedger // Size: 0xA8
{
public:
    FMovieSceneTrackIdentifier LastTrackIdentifier; /* Ofs: 0x0 Size: 0x4 StructProperty MovieScene.MovieSceneTemplateGenerationLedger.LastTrackIdentifier */
    uint8_t UnknownData4[0x4];
    TMap<struct FMovieSceneTrackIdentifier, int32_t> TrackReferenceCounts; /* Ofs: 0x8 Size: 0x50 MapProperty MovieScene.MovieSceneTemplateGenerationLedger.TrackReferenceCounts */
    TMap<struct FGuid, struct FMovieSceneTrackIdentifiers> TrackSignatureToTrackIdentifier; /* Ofs: 0x58 Size: 0x50 MapProperty MovieScene.MovieSceneTemplateGenerationLedger.TrackSignatureToTrackIdentifier */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTemplateGenerationLedger = sizeof(FMovieSceneTemplateGenerationLedger); // 168
    static_assert(sizeof(FMovieSceneTemplateGenerationLedger) == 0xA8, "Size of FMovieSceneTemplateGenerationLedger is not correct.");
	auto constexpr FMovieSceneTemplateGenerationLedger_LastTrackIdentifier_Offset = offsetof(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier);
	static_assert(FMovieSceneTemplateGenerationLedger_LastTrackIdentifier_Offset == 0x0, "FMovieSceneTemplateGenerationLedger::LastTrackIdentifier offset is not 0");
	auto constexpr FMovieSceneTemplateGenerationLedger_TrackReferenceCounts_Offset = offsetof(FMovieSceneTemplateGenerationLedger, TrackReferenceCounts);
	static_assert(FMovieSceneTemplateGenerationLedger_TrackReferenceCounts_Offset == 0x8, "FMovieSceneTemplateGenerationLedger::TrackReferenceCounts offset is not 8");
	auto constexpr FMovieSceneTemplateGenerationLedger_TrackSignatureToTrackIdentifier_Offset = offsetof(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier);
	static_assert(FMovieSceneTemplateGenerationLedger_TrackSignatureToTrackIdentifier_Offset == 0x58, "FMovieSceneTemplateGenerationLedger::TrackSignatureToTrackIdentifier offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
