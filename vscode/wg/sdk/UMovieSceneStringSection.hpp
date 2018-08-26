#pragma once
#include "UMovieSceneSection.hpp"
#include "FStringCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneStringSection // Size: 0x150
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneStringSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135); // id32("Class MovieSceneTracks.MovieSceneStringSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FStringCurve StringCurve; /* Ofs: 0xD8 Size: 0x78 - StructProperty MovieSceneTracks.MovieSceneStringSection.StringCurve */


	inline bool SetStringCurve(t_structHelper inst, FStringCurve value) { inst.WriteOffset(0xD8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneStringSection = sizeof(UMovieSceneStringSection); // 336
    static_assert(sizeof(UMovieSceneStringSection) == 0x150, "Size of UMovieSceneStringSection is not correct.");
	auto constexpr UMovieSceneStringSection_StringCurve_Offset = offsetof(UMovieSceneStringSection, StringCurve);
	static_assert(UMovieSceneStringSection_StringCurve_Offset == 0xd8, "UMovieSceneStringSection::StringCurve offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
