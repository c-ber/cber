#pragma once
#include "UFrameGrabberProtocolSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UImageCaptureSettings // Size: 0x40
	: public UFrameGrabberProtocolSettings // Size: 0x38
{
private:
	typedef UImageCaptureSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(163); // id32("Class MovieSceneCapture.ImageCaptureSettings")
		return ptr;
	}
	int32_t CompressionQuality; /* Ofs: 0x38 Size: 0x4 - IntProperty MovieSceneCapture.ImageCaptureSettings.CompressionQuality */
	uint8_t UnknownData3C[0x4];


	inline bool SetCompressionQuality(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUImageCaptureSettings = sizeof(UImageCaptureSettings); // 64
    static_assert(sizeof(UImageCaptureSettings) == 0x40, "Size of UImageCaptureSettings is not correct.");
	auto constexpr UImageCaptureSettings_CompressionQuality_Offset = offsetof(UImageCaptureSettings, CompressionQuality);
	static_assert(UImageCaptureSettings_CompressionQuality_Offset == 0x38, "UImageCaptureSettings::CompressionQuality offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
