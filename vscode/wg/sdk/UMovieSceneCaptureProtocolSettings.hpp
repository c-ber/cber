#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneCaptureProtocolSettings // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UMovieSceneCaptureProtocolSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(156); // id32("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneCaptureProtocolSettings = sizeof(UMovieSceneCaptureProtocolSettings); // 48
    static_assert(sizeof(UMovieSceneCaptureProtocolSettings) == 0x30, "Size of UMovieSceneCaptureProtocolSettings is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
