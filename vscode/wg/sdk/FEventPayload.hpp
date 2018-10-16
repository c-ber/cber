#pragma once
#include "FMovieSceneEventParameters.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEventPayload // Size: 0x28
{
public:
    FName EventName; /* Ofs: 0x0 Size: 0x8 NameProperty MovieSceneTracks.EventPayload.EventName */
    FMovieSceneEventParameters Parameters; /* Ofs: 0x8 Size: 0x20 StructProperty MovieSceneTracks.EventPayload.Parameters */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEventPayload = sizeof(FEventPayload); // 40
    static_assert(sizeof(FEventPayload) == 0x28, "Size of FEventPayload is not correct.");
	auto constexpr FEventPayload_EventName_Offset = offsetof(FEventPayload, EventName);
	static_assert(FEventPayload_EventName_Offset == 0x0, "FEventPayload::EventName offset is not 0");
	auto constexpr FEventPayload_Parameters_Offset = offsetof(FEventPayload, Parameters);
	static_assert(FEventPayload_Parameters_Offset == 0x8, "FEventPayload::Parameters offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
