#pragma once
#include "UFrameGrabberProtocolSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVideoCaptureSettings // Size: 0x50
	: public UFrameGrabberProtocolSettings // Size: 0x38
{
private:
	typedef UVideoCaptureSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(165); // id32("Class MovieSceneCapture.VideoCaptureSettings")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x3];
	float CompressionQuality; /* Ofs: 0x3C Size: 0x4 - FloatProperty MovieSceneCapture.VideoCaptureSettings.CompressionQuality */
	FString VideoCodec; /* Ofs: 0x40 Size: 0x10 - StrProperty MovieSceneCapture.VideoCaptureSettings.VideoCodec */


	inline bool bUseCompression()
	{
		return boolField38& 0x1;
	}
	inline bool SetbUseCompression(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCompressionQuality(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetVideoCodec(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVideoCaptureSettings = sizeof(UVideoCaptureSettings); // 80
    static_assert(sizeof(UVideoCaptureSettings) == 0x50, "Size of UVideoCaptureSettings is not correct.");
	auto constexpr UVideoCaptureSettings_boolField38_Offset = offsetof(UVideoCaptureSettings, boolField38);
	static_assert(UVideoCaptureSettings_boolField38_Offset == 0x38, "UVideoCaptureSettings::boolField38 offset is not 38");
	auto constexpr UVideoCaptureSettings_CompressionQuality_Offset = offsetof(UVideoCaptureSettings, CompressionQuality);
	static_assert(UVideoCaptureSettings_CompressionQuality_Offset == 0x3c, "UVideoCaptureSettings::CompressionQuality offset is not 3c");
	auto constexpr UVideoCaptureSettings_VideoCodec_Offset = offsetof(UVideoCaptureSettings, VideoCodec);
	static_assert(UVideoCaptureSettings_VideoCodec_Offset == 0x40, "UVideoCaptureSettings::VideoCodec offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
