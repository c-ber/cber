#pragma once
#include "UMovieSceneSignedObject.hpp"
#include "FMovieSceneSectionEvalOptions.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSection // Size: 0xD0
	: public UMovieSceneSignedObject // Size: 0xB0
{
private:
	typedef UMovieSceneSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(77); // id32("Class MovieScene.MovieSceneSection")
		return ptr;
	}
	FMovieSceneSectionEvalOptions EvalOptions; /* Ofs: 0xB0 Size: 0x2 - StructProperty MovieScene.MovieSceneSection.EvalOptions */
	uint8_t UnknownDataB2[0x2];
	float StartTime; /* Ofs: 0xB4 Size: 0x4 - FloatProperty MovieScene.MovieSceneSection.StartTime */
	float EndTime; /* Ofs: 0xB8 Size: 0x4 - FloatProperty MovieScene.MovieSceneSection.EndTime */
	int32_t RowIndex; /* Ofs: 0xBC Size: 0x4 - IntProperty MovieScene.MovieSceneSection.RowIndex */
	int32_t OverlapPriority; /* Ofs: 0xC0 Size: 0x4 - IntProperty MovieScene.MovieSceneSection.OverlapPriority */
	uint8_t boolFieldC4;
	uint8_t UnknownDataC5[0x3];
	float PrerollTime; /* Ofs: 0xC8 Size: 0x4 - FloatProperty MovieScene.MovieSceneSection.PrerollTime */
	float PostrollTime; /* Ofs: 0xCC Size: 0x4 - FloatProperty MovieScene.MovieSceneSection.PostrollTime */


	inline bool SetEvalOptions(t_structHelper inst, FMovieSceneSectionEvalOptions value) { inst.WriteOffset(0xB0, value); }
	inline bool SetStartTime(t_structHelper inst, float value) { inst.WriteOffset(0xB4, value); }
	inline bool SetEndTime(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool SetRowIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xBC, value); }
	inline bool SetOverlapPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC0, value); }
	inline bool bIsActive()
	{
		return boolFieldC4& 0x1;
	}
	inline bool SetbIsActive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsLocked()
	{
		return boolFieldC4& 0x2;
	}
	inline bool SetbIsLocked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsInfinite()
	{
		return boolFieldC4& 0x4;
	}
	inline bool SetbIsInfinite(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetPrerollTime(t_structHelper inst, float value) { inst.WriteOffset(0xC8, value); }
	inline bool SetPostrollTime(t_structHelper inst, float value) { inst.WriteOffset(0xCC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSection = sizeof(UMovieSceneSection); // 208
    static_assert(sizeof(UMovieSceneSection) == 0xD0, "Size of UMovieSceneSection is not correct.");
	auto constexpr UMovieSceneSection_EvalOptions_Offset = offsetof(UMovieSceneSection, EvalOptions);
	static_assert(UMovieSceneSection_EvalOptions_Offset == 0xb0, "UMovieSceneSection::EvalOptions offset is not b0");
	auto constexpr UMovieSceneSection_StartTime_Offset = offsetof(UMovieSceneSection, StartTime);
	static_assert(UMovieSceneSection_StartTime_Offset == 0xb4, "UMovieSceneSection::StartTime offset is not b4");
	auto constexpr UMovieSceneSection_EndTime_Offset = offsetof(UMovieSceneSection, EndTime);
	static_assert(UMovieSceneSection_EndTime_Offset == 0xb8, "UMovieSceneSection::EndTime offset is not b8");
	auto constexpr UMovieSceneSection_RowIndex_Offset = offsetof(UMovieSceneSection, RowIndex);
	static_assert(UMovieSceneSection_RowIndex_Offset == 0xbc, "UMovieSceneSection::RowIndex offset is not bc");
	auto constexpr UMovieSceneSection_OverlapPriority_Offset = offsetof(UMovieSceneSection, OverlapPriority);
	static_assert(UMovieSceneSection_OverlapPriority_Offset == 0xc0, "UMovieSceneSection::OverlapPriority offset is not c0");
	auto constexpr UMovieSceneSection_boolFieldC4_Offset = offsetof(UMovieSceneSection, boolFieldC4);
	static_assert(UMovieSceneSection_boolFieldC4_Offset == 0xc4, "UMovieSceneSection::boolFieldC4 offset is not c4");
	auto constexpr UMovieSceneSection_PrerollTime_Offset = offsetof(UMovieSceneSection, PrerollTime);
	static_assert(UMovieSceneSection_PrerollTime_Offset == 0xc8, "UMovieSceneSection::PrerollTime offset is not c8");
	auto constexpr UMovieSceneSection_PostrollTime_Offset = offsetof(UMovieSceneSection, PostrollTime);
	static_assert(UMovieSceneSection_PostrollTime_Offset == 0xcc, "UMovieSceneSection::PostrollTime offset is not cc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
