#pragma once
#include "UMovieSceneSection.hpp"
#include "FMovieSceneSkeletalAnimationParams.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSkeletalAnimationSection // Size: 0x190
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneSkeletalAnimationSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133); // id32("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection")
		return ptr;
	}
	FMovieSceneSkeletalAnimationParams Params; /* Ofs: 0xD0 Size: 0x90 - StructProperty MovieSceneTracks.MovieSceneSkeletalAnimationSection.Params */
	ExternalPtr<struct UAnimSequence> AnimSequence; /* Ofs: 0x160 Size: 0x8 - ObjectProperty MovieSceneTracks.MovieSceneSkeletalAnimationSection.AnimSequence */
	ExternalPtr<struct UAnimSequenceBase> Animation; /* Ofs: 0x168 Size: 0x8 - ObjectProperty MovieSceneTracks.MovieSceneSkeletalAnimationSection.Animation */
	float StartOffset; /* Ofs: 0x170 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneSkeletalAnimationSection.StartOffset */
	float EndOffset; /* Ofs: 0x174 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneSkeletalAnimationSection.EndOffset */
	float PlayRate; /* Ofs: 0x178 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneSkeletalAnimationSection.PlayRate */
	uint8_t boolField17C;
	uint8_t UnknownData17D[0x3];
	FName SlotName; /* Ofs: 0x180 Size: 0x8 - NameProperty MovieSceneTracks.MovieSceneSkeletalAnimationSection.SlotName */
	uint8_t UnknownData188[0x8];


	inline bool SetParams(t_structHelper inst, FMovieSceneSkeletalAnimationParams value) { inst.WriteOffset(0xD0, value); }
	inline bool SetAnimSequence(t_structHelper inst, ExternalPtr<struct UAnimSequence> value) { inst.WriteOffset(0x160, value); }
	inline bool SetAnimation(t_structHelper inst, ExternalPtr<struct UAnimSequenceBase> value) { inst.WriteOffset(0x168, value); }
	inline bool SetStartOffset(t_structHelper inst, float value) { inst.WriteOffset(0x170, value); }
	inline bool SetEndOffset(t_structHelper inst, float value) { inst.WriteOffset(0x174, value); }
	inline bool SetPlayRate(t_structHelper inst, float value) { inst.WriteOffset(0x178, value); }
	inline bool bReverse()
	{
		return boolField17C& 0x1;
	}
	inline bool SetbReverse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x17C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSlotName(t_structHelper inst, FName value) { inst.WriteOffset(0x180, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSkeletalAnimationSection = sizeof(UMovieSceneSkeletalAnimationSection); // 400
    static_assert(sizeof(UMovieSceneSkeletalAnimationSection) == 0x190, "Size of UMovieSceneSkeletalAnimationSection is not correct.");
	auto constexpr UMovieSceneSkeletalAnimationSection_Params_Offset = offsetof(UMovieSceneSkeletalAnimationSection, Params);
	static_assert(UMovieSceneSkeletalAnimationSection_Params_Offset == 0xd0, "UMovieSceneSkeletalAnimationSection::Params offset is not d0");
	auto constexpr UMovieSceneSkeletalAnimationSection_AnimSequence_Offset = offsetof(UMovieSceneSkeletalAnimationSection, AnimSequence);
	static_assert(UMovieSceneSkeletalAnimationSection_AnimSequence_Offset == 0x160, "UMovieSceneSkeletalAnimationSection::AnimSequence offset is not 160");
	auto constexpr UMovieSceneSkeletalAnimationSection_Animation_Offset = offsetof(UMovieSceneSkeletalAnimationSection, Animation);
	static_assert(UMovieSceneSkeletalAnimationSection_Animation_Offset == 0x168, "UMovieSceneSkeletalAnimationSection::Animation offset is not 168");
	auto constexpr UMovieSceneSkeletalAnimationSection_StartOffset_Offset = offsetof(UMovieSceneSkeletalAnimationSection, StartOffset);
	static_assert(UMovieSceneSkeletalAnimationSection_StartOffset_Offset == 0x170, "UMovieSceneSkeletalAnimationSection::StartOffset offset is not 170");
	auto constexpr UMovieSceneSkeletalAnimationSection_EndOffset_Offset = offsetof(UMovieSceneSkeletalAnimationSection, EndOffset);
	static_assert(UMovieSceneSkeletalAnimationSection_EndOffset_Offset == 0x174, "UMovieSceneSkeletalAnimationSection::EndOffset offset is not 174");
	auto constexpr UMovieSceneSkeletalAnimationSection_PlayRate_Offset = offsetof(UMovieSceneSkeletalAnimationSection, PlayRate);
	static_assert(UMovieSceneSkeletalAnimationSection_PlayRate_Offset == 0x178, "UMovieSceneSkeletalAnimationSection::PlayRate offset is not 178");
	auto constexpr UMovieSceneSkeletalAnimationSection_boolField17C_Offset = offsetof(UMovieSceneSkeletalAnimationSection, boolField17C);
	static_assert(UMovieSceneSkeletalAnimationSection_boolField17C_Offset == 0x17c, "UMovieSceneSkeletalAnimationSection::boolField17C offset is not 17c");
	auto constexpr UMovieSceneSkeletalAnimationSection_SlotName_Offset = offsetof(UMovieSceneSkeletalAnimationSection, SlotName);
	static_assert(UMovieSceneSkeletalAnimationSection_SlotName_Offset == 0x180, "UMovieSceneSkeletalAnimationSection::SlotName offset is not 180");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
