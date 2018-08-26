#pragma once
#include "UMovieSceneSection.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneVectorSection // Size: 0x2A0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneVectorSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(140); // id32("Class MovieSceneTracks.MovieSceneVectorSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FRichCurve Curves[4]; /* Ofs: 0x4 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneVectorSection.Curves */
	int32_t ChannelsUsed; /* Ofs: 0x298 Size: 0x4 - IntProperty MovieSceneTracks.MovieSceneVectorSection.ChannelsUsed */
	uint8_t UnknownData29C[0x4];


	inline bool SetChannelsUsed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x298, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneVectorSection = sizeof(UMovieSceneVectorSection); // 672
    static_assert(sizeof(UMovieSceneVectorSection) == 0x2A0, "Size of UMovieSceneVectorSection is not correct.");
	auto constexpr UMovieSceneVectorSection_Curves_Offset = offsetof(UMovieSceneVectorSection, Curves);
	static_assert(UMovieSceneVectorSection_Curves_Offset == 0xd8, "UMovieSceneVectorSection::Curves offset is not d8");
	auto constexpr UMovieSceneVectorSection_ChannelsUsed_Offset = offsetof(UMovieSceneVectorSection, ChannelsUsed);
	static_assert(UMovieSceneVectorSection_ChannelsUsed_Offset == 0x298, "UMovieSceneVectorSection::ChannelsUsed offset is not 298");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
