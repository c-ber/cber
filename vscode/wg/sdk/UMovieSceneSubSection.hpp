#pragma once
#include "UMovieSceneSection.hpp"
#include "FMovieSceneSectionParameters.hpp"
#include "FDirectoryPath.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSubSection // Size: 0x140
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneSubSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(136); // id32("Class MovieSceneTracks.MovieSceneSubSection")
		return ptr;
	}
	FMovieSceneSectionParameters Parameters; /* Ofs: 0xD0 Size: 0x14 - StructProperty MovieSceneTracks.MovieSceneSubSection.Parameters */
	float StartOffset; /* Ofs: 0xE4 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneSubSection.StartOffset */
	float TimeScale; /* Ofs: 0xE8 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneSubSection.TimeScale */
	float PrerollTime; /* Ofs: 0xEC Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneSubSection.PrerollTime */
	ExternalPtr<struct UMovieSceneSequence> SubSequence; /* Ofs: 0xF0 Size: 0x8 - ObjectProperty MovieSceneTracks.MovieSceneSubSection.SubSequence */
	TLazyObjectPtr<ExternalPtr<struct UActor>> ActorToRecord; /* Ofs: 0xF8 Size: 0x1C - LazyObjectProperty MovieSceneTracks.MovieSceneSubSection.ActorToRecord */
	uint8_t UnknownData114[0x4];
	FString TargetSequenceName; /* Ofs: 0x118 Size: 0x10 - StrProperty MovieSceneTracks.MovieSceneSubSection.TargetSequenceName */
	FDirectoryPath TargetPathToRecordTo; /* Ofs: 0x128 Size: 0x10 - StructProperty MovieSceneTracks.MovieSceneSubSection.TargetPathToRecordTo */
	uint8_t UnknownData138[0x8];


	inline bool SetParameters(t_structHelper inst, FMovieSceneSectionParameters value) { inst.WriteOffset(0xD0, value); }
	inline bool SetStartOffset(t_structHelper inst, float value) { inst.WriteOffset(0xE4, value); }
	inline bool SetTimeScale(t_structHelper inst, float value) { inst.WriteOffset(0xE8, value); }
	inline bool SetPrerollTime(t_structHelper inst, float value) { inst.WriteOffset(0xEC, value); }
	inline bool SetSubSequence(t_structHelper inst, ExternalPtr<struct UMovieSceneSequence> value) { inst.WriteOffset(0xF0, value); }
	inline bool SetActorToRecord(t_structHelper inst, TLazyObjectPtr<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetTargetSequenceName(t_structHelper inst, FString value) { inst.WriteOffset(0x118, value); }
	inline bool SetTargetPathToRecordTo(t_structHelper inst, FDirectoryPath value) { inst.WriteOffset(0x128, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSubSection = sizeof(UMovieSceneSubSection); // 320
    static_assert(sizeof(UMovieSceneSubSection) == 0x140, "Size of UMovieSceneSubSection is not correct.");
	auto constexpr UMovieSceneSubSection_Parameters_Offset = offsetof(UMovieSceneSubSection, Parameters);
	static_assert(UMovieSceneSubSection_Parameters_Offset == 0xd0, "UMovieSceneSubSection::Parameters offset is not d0");
	auto constexpr UMovieSceneSubSection_StartOffset_Offset = offsetof(UMovieSceneSubSection, StartOffset);
	static_assert(UMovieSceneSubSection_StartOffset_Offset == 0xe4, "UMovieSceneSubSection::StartOffset offset is not e4");
	auto constexpr UMovieSceneSubSection_TimeScale_Offset = offsetof(UMovieSceneSubSection, TimeScale);
	static_assert(UMovieSceneSubSection_TimeScale_Offset == 0xe8, "UMovieSceneSubSection::TimeScale offset is not e8");
	auto constexpr UMovieSceneSubSection_PrerollTime_Offset = offsetof(UMovieSceneSubSection, PrerollTime);
	static_assert(UMovieSceneSubSection_PrerollTime_Offset == 0xec, "UMovieSceneSubSection::PrerollTime offset is not ec");
	auto constexpr UMovieSceneSubSection_SubSequence_Offset = offsetof(UMovieSceneSubSection, SubSequence);
	static_assert(UMovieSceneSubSection_SubSequence_Offset == 0xf0, "UMovieSceneSubSection::SubSequence offset is not f0");
	auto constexpr UMovieSceneSubSection_ActorToRecord_Offset = offsetof(UMovieSceneSubSection, ActorToRecord);
	static_assert(UMovieSceneSubSection_ActorToRecord_Offset == 0xf8, "UMovieSceneSubSection::ActorToRecord offset is not f8");
	auto constexpr UMovieSceneSubSection_TargetSequenceName_Offset = offsetof(UMovieSceneSubSection, TargetSequenceName);
	static_assert(UMovieSceneSubSection_TargetSequenceName_Offset == 0x118, "UMovieSceneSubSection::TargetSequenceName offset is not 118");
	auto constexpr UMovieSceneSubSection_TargetPathToRecordTo_Offset = offsetof(UMovieSceneSubSection, TargetPathToRecordTo);
	static_assert(UMovieSceneSubSection_TargetPathToRecordTo_Offset == 0x128, "UMovieSceneSubSection::TargetPathToRecordTo offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
