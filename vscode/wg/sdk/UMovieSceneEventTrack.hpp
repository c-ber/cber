#pragma once
#include "UMovieSceneNameableTrack.hpp"
#include "EFireEventsAtPosition.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneEventTrack // Size: 0xE0
	: public UMovieSceneNameableTrack // Size: 0xC0
{
private:
	typedef UMovieSceneEventTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(104); // id32("Class MovieSceneTracks.MovieSceneEventTrack")
		return ptr;
	}
//	uint8_t boolFieldB8;
//	TEnumAsByte<enum EFireEventsAtPosition> EventPosition; /* Ofs: 0xBC Size: 0x1 - EnumProperty MovieSceneTracks.MovieSceneEventTrack.EventPosition */
	TArray<struct FMovieSceneObjectBindingID> EventReceivers; /* Ofs: 0xC0 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneEventTrack.EventReceivers */
	TArray<ExternalPtr<struct UMovieSceneSection>> Sections; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneEventTrack.Sections */


//	inline bool SetEventPosition(t_structHelper inst, TEnumAsByte<enum EFireEventsAtPosition> value) { inst.WriteOffset(0xBC, value); }
	inline bool SetEventReceivers(t_structHelper inst, TArray<struct FMovieSceneObjectBindingID> value) { inst.WriteOffset(0xC0, value); }
	inline bool SetSections(t_structHelper inst, TArray<ExternalPtr<struct UMovieSceneSection>> value) { inst.WriteOffset(0xD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneEventTrack = sizeof(UMovieSceneEventTrack); // 224
    static_assert(sizeof(UMovieSceneEventTrack) == 0xE0, "Size of UMovieSceneEventTrack is not correct.");
//	auto constexpr UMovieSceneEventTrack_boolFieldB8_Offset = offsetof(UMovieSceneEventTrack, boolFieldB8);
//	static_assert(UMovieSceneEventTrack_boolFieldB8_Offset == 0xb8, "UMovieSceneEventTrack::boolFieldB8 offset is not b8");
//	auto constexpr UMovieSceneEventTrack_EventPosition_Offset = offsetof(UMovieSceneEventTrack, EventPosition);
//	static_assert(UMovieSceneEventTrack_EventPosition_Offset == 0xbc, "UMovieSceneEventTrack::EventPosition offset is not bc");
	auto constexpr UMovieSceneEventTrack_EventReceivers_Offset = offsetof(UMovieSceneEventTrack, EventReceivers);
	static_assert(UMovieSceneEventTrack_EventReceivers_Offset == 0xc0, "UMovieSceneEventTrack::EventReceivers offset is not c0");
	auto constexpr UMovieSceneEventTrack_Sections_Offset = offsetof(UMovieSceneEventTrack, Sections);
	static_assert(UMovieSceneEventTrack_Sections_Offset == 0xd0, "UMovieSceneEventTrack::Sections offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
