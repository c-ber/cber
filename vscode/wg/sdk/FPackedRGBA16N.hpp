#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPackedRGBA16N // Size: 0x8
{
public:
    int32_t XY; /* Ofs: 0x0 Size: 0x4 IntProperty CoreUObject.PackedRGBA16N.XY */
    int32_t ZW; /* Ofs: 0x4 Size: 0x4 IntProperty CoreUObject.PackedRGBA16N.ZW */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPackedRGBA16N = sizeof(FPackedRGBA16N); // 8
    static_assert(sizeof(FPackedRGBA16N) == 0x8, "Size of FPackedRGBA16N is not correct.");
	auto constexpr FPackedRGBA16N_XY_Offset = offsetof(FPackedRGBA16N, XY);
	static_assert(FPackedRGBA16N_XY_Offset == 0x0, "FPackedRGBA16N::XY offset is not 0");
	auto constexpr FPackedRGBA16N_ZW_Offset = offsetof(FPackedRGBA16N, ZW);
	static_assert(FPackedRGBA16N_ZW_Offset == 0x4, "FPackedRGBA16N::ZW offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
