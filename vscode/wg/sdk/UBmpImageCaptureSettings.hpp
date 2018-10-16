#pragma once
#include "UMovieSceneCaptureProtocolSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBmpImageCaptureSettings // Size: 0x30
	: public UMovieSceneCaptureProtocolSettings // Size: 0x30
{
private:
	typedef UBmpImageCaptureSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(162); // id32("Class MovieSceneCapture.BmpImageCaptureSettings")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBmpImageCaptureSettings = sizeof(UBmpImageCaptureSettings); // 48
    static_assert(sizeof(UBmpImageCaptureSettings) == 0x30, "Size of UBmpImageCaptureSettings is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
