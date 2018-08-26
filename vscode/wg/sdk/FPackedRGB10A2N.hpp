#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPackedRGB10A2N // Size: 0x4
{
public:
    int32_t Packed; /* Ofs: 0x0 Size: 0x4 IntProperty CoreUObject.PackedRGB10A2N.Packed */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPackedRGB10A2N = sizeof(FPackedRGB10A2N); // 4
    static_assert(sizeof(FPackedRGB10A2N) == 0x4, "Size of FPackedRGB10A2N is not correct.");
	auto constexpr FPackedRGB10A2N_Packed_Offset = offsetof(FPackedRGB10A2N, Packed);
	static_assert(FPackedRGB10A2N_Packed_Offset == 0x0, "FPackedRGB10A2N::Packed offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
