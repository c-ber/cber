#pragma once
#include "UMovieSceneSignedObject.hpp"
#include "FCachedMovieSceneEvaluationTemplate.hpp"
#include "FMovieSceneTrackCompilationParams.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneSequence // Size: 0x330
	: public UMovieSceneSignedObject // Size: 0xB0
{
private:
	typedef UMovieSceneSequence t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(326); // id32("Class MovieScene.MovieSceneSequence")
		return ptr;
	}
	FCachedMovieSceneEvaluationTemplate EvaluationTemplate; /* Ofs: 0xB0 Size: 0x220 - StructProperty MovieScene.MovieSceneSequence.EvaluationTemplate */
	FMovieSceneTrackCompilationParams TemplateParameters; /* Ofs: 0x2D0 Size: 0x2 - StructProperty MovieScene.MovieSceneSequence.TemplateParameters */
	uint8_t UnknownData2D2[0x6];
	TMap<struct UObject, struct FCachedMovieSceneEvaluationTemplate> InstancedSubSequenceEvaluationTemplates; /* Ofs: 0x2D8 Size: 0x50 - MapProperty MovieScene.MovieSceneSequence.InstancedSubSequenceEvaluationTemplates */
	uint8_t boolField328;
	uint8_t UnknownData329[0x7];


	inline bool SetEvaluationTemplate(t_structHelper inst, FCachedMovieSceneEvaluationTemplate value) { inst.WriteOffset(0xB0, value); }
	inline bool SetTemplateParameters(t_structHelper inst, FMovieSceneTrackCompilationParams value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetInstancedSubSequenceEvaluationTemplates(t_structHelper inst, TMap<struct UObject, struct FCachedMovieSceneEvaluationTemplate> value) { inst.WriteOffset(0x2D8, value); }
	inline bool bParentContextsAreSignificant()
	{
		return boolField328& 0x1;
	}
	inline bool SetbParentContextsAreSignificant(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x328, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneSequence = sizeof(UMovieSceneSequence); // 816
    static_assert(sizeof(UMovieSceneSequence) == 0x330, "Size of UMovieSceneSequence is not correct.");
	auto constexpr UMovieSceneSequence_EvaluationTemplate_Offset = offsetof(UMovieSceneSequence, EvaluationTemplate);
	static_assert(UMovieSceneSequence_EvaluationTemplate_Offset == 0xb0, "UMovieSceneSequence::EvaluationTemplate offset is not b0");
	auto constexpr UMovieSceneSequence_TemplateParameters_Offset = offsetof(UMovieSceneSequence, TemplateParameters);
	static_assert(UMovieSceneSequence_TemplateParameters_Offset == 0x2d0, "UMovieSceneSequence::TemplateParameters offset is not 2d0");
	auto constexpr UMovieSceneSequence_InstancedSubSequenceEvaluationTemplates_Offset = offsetof(UMovieSceneSequence, InstancedSubSequenceEvaluationTemplates);
	static_assert(UMovieSceneSequence_InstancedSubSequenceEvaluationTemplates_Offset == 0x2d8, "UMovieSceneSequence::InstancedSubSequenceEvaluationTemplates offset is not 2d8");
	auto constexpr UMovieSceneSequence_boolField328_Offset = offsetof(UMovieSceneSequence, boolField328);
	static_assert(UMovieSceneSequence_boolField328_Offset == 0x328, "UMovieSceneSequence::boolField328 offset is not 328");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
