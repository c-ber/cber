#pragma once
#include "UMovieSceneSection.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCameraCutSection // Size: 0xE0
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneCameraCutSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(96); // id32("Class MovieSceneTracks.MovieSceneCameraCutSection")
		return ptr;
	}
	FGuid CameraGuid; /* Ofs: 0xD0 Size: 0x10 - StructProperty MovieSceneTracks.MovieSceneCameraCutSection.CameraGuid */


	inline bool SetCameraGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0xD0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCameraCutSection = sizeof(UMovieSceneCameraCutSection); // 224
    static_assert(sizeof(UMovieSceneCameraCutSection) == 0xE0, "Size of UMovieSceneCameraCutSection is not correct.");
	auto constexpr UMovieSceneCameraCutSection_CameraGuid_Offset = offsetof(UMovieSceneCameraCutSection, CameraGuid);
	static_assert(UMovieSceneCameraCutSection_CameraGuid_Offset == 0xd0, "UMovieSceneCameraCutSection::CameraGuid offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
