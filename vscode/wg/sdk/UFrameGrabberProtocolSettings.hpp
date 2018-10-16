#pragma once
#include "UMovieSceneCaptureProtocolSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFrameGrabberProtocolSettings // Size: 0x38
	: public UMovieSceneCaptureProtocolSettings // Size: 0x30
{
private:
	typedef UFrameGrabberProtocolSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(161); // id32("Class MovieSceneCapture.FrameGrabberProtocolSettings")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFrameGrabberProtocolSettings = sizeof(UFrameGrabberProtocolSettings); // 56
    static_assert(sizeof(UFrameGrabberProtocolSettings) == 0x38, "Size of UFrameGrabberProtocolSettings is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
