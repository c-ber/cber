#pragma once
#include "UMovieSceneSection.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneActorReferenceSection // Size: 0x170
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneActorReferenceSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(87); // id32("Class MovieSceneTracks.MovieSceneActorReferenceSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FIntegralCurve ActorGuidIndexCurve; /* Ofs: 0xD8 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneActorReferenceSection.ActorGuidIndexCurve */
	uint8_t UnknownData148[0x10];
	TArray<struct FString> ActorGuidStrings; /* Ofs: 0x158 Size: 0x10 - ArrayProperty MovieSceneTracks.MovieSceneActorReferenceSection.ActorGuidStrings */
	uint8_t UnknownData168[0x8];


	inline bool SetActorGuidIndexCurve(t_structHelper inst, FIntegralCurve value) { inst.WriteOffset(0xD8, value); }
	inline bool SetActorGuidStrings(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x158, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneActorReferenceSection = sizeof(UMovieSceneActorReferenceSection); // 368
    static_assert(sizeof(UMovieSceneActorReferenceSection) == 0x170, "Size of UMovieSceneActorReferenceSection is not correct.");
	auto constexpr UMovieSceneActorReferenceSection_ActorGuidIndexCurve_Offset = offsetof(UMovieSceneActorReferenceSection, ActorGuidIndexCurve);
	static_assert(UMovieSceneActorReferenceSection_ActorGuidIndexCurve_Offset == 0xd8, "UMovieSceneActorReferenceSection::ActorGuidIndexCurve offset is not d8");
	auto constexpr UMovieSceneActorReferenceSection_ActorGuidStrings_Offset = offsetof(UMovieSceneActorReferenceSection, ActorGuidStrings);
	static_assert(UMovieSceneActorReferenceSection_ActorGuidStrings_Offset == 0x158, "UMovieSceneActorReferenceSection::ActorGuidStrings offset is not 158");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
