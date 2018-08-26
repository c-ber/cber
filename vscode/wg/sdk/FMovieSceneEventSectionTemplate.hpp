#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneEventSectionData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEventSectionTemplate // Size: 0x50
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieSceneEventSectionData EventData; /* Ofs: 0x18 Size: 0x20 StructProperty MovieSceneTracks.MovieSceneEventSectionTemplate.EventData */
    TArray<struct FMovieSceneObjectBindingID> EventReceivers; /* Ofs: 0x38 Size: 0x10 ArrayProperty MovieSceneTracks.MovieSceneEventSectionTemplate.EventReceivers */
    bool bFireEventsWhenForwards : 1; /* Ofs: 0x48 Size: 0x1 BitMask: 01 BoolProperty MovieSceneTracks.MovieSceneEventSectionTemplate.bFireEventsWhenForwards */
    bool bFireEventsWhenBackwards : 1; /* Ofs: 0x48 Size: 0x1 BitMask: 02 BoolProperty MovieSceneTracks.MovieSceneEventSectionTemplate.bFireEventsWhenBackwards */
    uint8_t UnknownData49[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEventSectionTemplate = sizeof(FMovieSceneEventSectionTemplate); // 80
    static_assert(sizeof(FMovieSceneEventSectionTemplate) == 0x50, "Size of FMovieSceneEventSectionTemplate is not correct.");
	auto constexpr FMovieSceneEventSectionTemplate_EventData_Offset = offsetof(FMovieSceneEventSectionTemplate, EventData);
	static_assert(FMovieSceneEventSectionTemplate_EventData_Offset == 0x18, "FMovieSceneEventSectionTemplate::EventData offset is not 18");
	auto constexpr FMovieSceneEventSectionTemplate_EventReceivers_Offset = offsetof(FMovieSceneEventSectionTemplate, EventReceivers);
	static_assert(FMovieSceneEventSectionTemplate_EventReceivers_Offset == 0x38, "FMovieSceneEventSectionTemplate::EventReceivers offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
