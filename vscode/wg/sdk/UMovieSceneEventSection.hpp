#pragma once
#include "UMovieSceneSection.hpp"
#include "FNameCurve.hpp"
#include "FMovieSceneEventSectionData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneEventSection // Size: 0x1E0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneEventSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(102); // id32("Class MovieSceneTracks.MovieSceneEventSection")
		return ptr;
	}
	FNameCurve Events; /* Ofs: 0xD0 Size: 0x68 - StructProperty MovieSceneTracks.MovieSceneEventSection.Events */
	FMovieSceneEventSectionData EventData; /* Ofs: 0x138 Size: 0x20 - StructProperty MovieSceneTracks.MovieSceneEventSection.EventData */
	uint8_t UnknownData158[0x88];


	inline bool SetEvents(t_structHelper inst, FNameCurve value) { inst.WriteOffset(0xD0, value); }
	inline bool SetEventData(t_structHelper inst, FMovieSceneEventSectionData value) { inst.WriteOffset(0x138, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneEventSection = sizeof(UMovieSceneEventSection); // 480
    static_assert(sizeof(UMovieSceneEventSection) == 0x1E0, "Size of UMovieSceneEventSection is not correct.");
	auto constexpr UMovieSceneEventSection_Events_Offset = offsetof(UMovieSceneEventSection, Events);
	static_assert(UMovieSceneEventSection_Events_Offset == 0xd0, "UMovieSceneEventSection::Events offset is not d0");
	auto constexpr UMovieSceneEventSection_EventData_Offset = offsetof(UMovieSceneEventSection, EventData);
	static_assert(UMovieSceneEventSection_EventData_Offset == 0x138, "UMovieSceneEventSection::EventData offset is not 138");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
