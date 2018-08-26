#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCaptureResolution // Size: 0x8
{
public:
    uint32_t ResX; /* Ofs: 0x0 Size: 0x4 UInt32Property MovieSceneCapture.CaptureResolution.ResX */
    uint32_t ResY; /* Ofs: 0x4 Size: 0x4 UInt32Property MovieSceneCapture.CaptureResolution.ResY */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCaptureResolution = sizeof(FCaptureResolution); // 8
    static_assert(sizeof(FCaptureResolution) == 0x8, "Size of FCaptureResolution is not correct.");
	auto constexpr FCaptureResolution_ResX_Offset = offsetof(FCaptureResolution, ResX);
	static_assert(FCaptureResolution_ResX_Offset == 0x0, "FCaptureResolution::ResX offset is not 0");
	auto constexpr FCaptureResolution_ResY_Offset = offsetof(FCaptureResolution, ResY);
	static_assert(FCaptureResolution_ResY_Offset == 0x4, "FCaptureResolution::ResY offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
