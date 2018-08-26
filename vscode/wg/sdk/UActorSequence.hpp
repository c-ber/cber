#pragma once
#include "UMovieSceneSequence.hpp"
#include "FActorSequenceObjectReferenceMap.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UActorSequence // Size: 0x360
	: public UMovieSceneSequence // Size: 0x330
{
private:
	typedef UActorSequence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(425); // id32("Class ActorSequence.ActorSequence")
		return ptr;
	}
	ExternalPtr<struct UMovieScene> MovieScene; /* Ofs: 0x330 Size: 0x8 - ObjectProperty ActorSequence.ActorSequence.MovieScene */
	FActorSequenceObjectReferenceMap ObjectReferences; /* Ofs: 0x338 Size: 0x20 - StructProperty ActorSequence.ActorSequence.ObjectReferences */
	uint8_t UnknownData358[0x8];


	inline bool SetMovieScene(t_structHelper inst, ExternalPtr<struct UMovieScene> value) { inst.WriteOffset(0x330, value); }
	inline bool SetObjectReferences(t_structHelper inst, FActorSequenceObjectReferenceMap value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUActorSequence = sizeof(UActorSequence); // 864
    static_assert(sizeof(UActorSequence) == 0x360, "Size of UActorSequence is not correct.");
	auto constexpr UActorSequence_MovieScene_Offset = offsetof(UActorSequence, MovieScene);
	static_assert(UActorSequence_MovieScene_Offset == 0x330, "UActorSequence::MovieScene offset is not 330");
	auto constexpr UActorSequence_ObjectReferences_Offset = offsetof(UActorSequence, ObjectReferences);
	static_assert(UActorSequence_ObjectReferences_Offset == 0x338, "UActorSequence::ObjectReferences offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
