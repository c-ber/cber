#pragma once
#include "UMovieSceneSection.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieScene3DTransformSection // Size: 0x4D0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieScene3DTransformSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(86); // id32("Class MovieSceneTracks.MovieScene3DTransformSection")
		return ptr;
	}
	uint8_t UnknownDataD0[0x8];
	FRichCurve Translation[3]; /* Ofs: 0x3 Size: 0x70 - StructProperty MovieSceneTracks.MovieScene3DTransformSection.Translation */
	FRichCurve Rotation[3]; /* Ofs: 0x3 Size: 0x70 - StructProperty MovieSceneTracks.MovieScene3DTransformSection.Rotation */
	FRichCurve Scale[3]; /* Ofs: 0x3 Size: 0x70 - StructProperty MovieSceneTracks.MovieScene3DTransformSection.Scale */
	uint8_t UnknownData4C8[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieScene3DTransformSection = sizeof(UMovieScene3DTransformSection); // 1232
    static_assert(sizeof(UMovieScene3DTransformSection) == 0x4D0, "Size of UMovieScene3DTransformSection is not correct.");
	auto constexpr UMovieScene3DTransformSection_Translation_Offset = offsetof(UMovieScene3DTransformSection, Translation);
	static_assert(UMovieScene3DTransformSection_Translation_Offset == 0xd8, "UMovieScene3DTransformSection::Translation offset is not d8");
	auto constexpr UMovieScene3DTransformSection_Rotation_Offset = offsetof(UMovieScene3DTransformSection, Rotation);
	static_assert(UMovieScene3DTransformSection_Rotation_Offset == 0x228, "UMovieScene3DTransformSection::Rotation offset is not 228");
	auto constexpr UMovieScene3DTransformSection_Scale_Offset = offsetof(UMovieScene3DTransformSection, Scale);
	static_assert(UMovieScene3DTransformSection_Scale_Offset == 0x378, "UMovieScene3DTransformSection::Scale offset is not 378");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
