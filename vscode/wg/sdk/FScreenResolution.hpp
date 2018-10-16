#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScreenResolution // Size: 0x8
{
public:
    int32_t Width; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.ScreenResolution.Width */
    int32_t Height; /* Ofs: 0x4 Size: 0x4 IntProperty TslGame.ScreenResolution.Height */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScreenResolution = sizeof(FScreenResolution); // 8
    static_assert(sizeof(FScreenResolution) == 0x8, "Size of FScreenResolution is not correct.");
	auto constexpr FScreenResolution_Width_Offset = offsetof(FScreenResolution, Width);
	static_assert(FScreenResolution_Width_Offset == 0x0, "FScreenResolution::Width offset is not 0");
	auto constexpr FScreenResolution_Height_Offset = offsetof(FScreenResolution, Height);
	static_assert(FScreenResolution_Height_Offset == 0x4, "FScreenResolution::Height offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
