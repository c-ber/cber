#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCaptureEnvironment // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UMovieSceneCaptureEnvironment t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(160); // id32("Class MovieSceneCapture.MovieSceneCaptureEnvironment")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCaptureEnvironment = sizeof(UMovieSceneCaptureEnvironment); // 48
    static_assert(sizeof(UMovieSceneCaptureEnvironment) == 0x30, "Size of UMovieSceneCaptureEnvironment is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
