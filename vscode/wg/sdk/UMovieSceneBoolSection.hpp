#pragma once
#include "UMovieSceneSection.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneBoolSection // Size: 0x150
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneBoolSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91); // id32("Class MovieSceneTracks.MovieSceneBoolSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	uint8_t boolFieldD8;
	uint8_t UnknownDataD9[0x7];
	FIntegralCurve BoolCurve; /* Ofs: 0xE0 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneBoolSection.BoolCurve */


	inline bool DefaultValue()
	{
		return boolFieldD8& 0x1;
	}
	inline bool SetDefaultValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBoolCurve(t_structHelper inst, FIntegralCurve value) { inst.WriteOffset(0xE0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneBoolSection = sizeof(UMovieSceneBoolSection); // 336
    static_assert(sizeof(UMovieSceneBoolSection) == 0x150, "Size of UMovieSceneBoolSection is not correct.");
	auto constexpr UMovieSceneBoolSection_boolFieldD8_Offset = offsetof(UMovieSceneBoolSection, boolFieldD8);
	static_assert(UMovieSceneBoolSection_boolFieldD8_Offset == 0xd8, "UMovieSceneBoolSection::boolFieldD8 offset is not d8");
	auto constexpr UMovieSceneBoolSection_BoolCurve_Offset = offsetof(UMovieSceneBoolSection, BoolCurve);
	static_assert(UMovieSceneBoolSection_BoolCurve_Offset == 0xe0, "UMovieSceneBoolSection::BoolCurve offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
