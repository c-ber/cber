#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FColor // Size: 0x4
{
public:
    uint8_t B; /* Ofs: 0x0 Size: 0x1 ByteProperty CoreUObject.Color.B */
    uint8_t G; /* Ofs: 0x1 Size: 0x1 ByteProperty CoreUObject.Color.G */
    uint8_t R; /* Ofs: 0x2 Size: 0x1 ByteProperty CoreUObject.Color.R */
    uint8_t A; /* Ofs: 0x3 Size: 0x1 ByteProperty CoreUObject.Color.A */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFColor = sizeof(FColor); // 4
    static_assert(sizeof(FColor) == 0x4, "Size of FColor is not correct.");
	auto constexpr FColor_B_Offset = offsetof(FColor, B);
	static_assert(FColor_B_Offset == 0x0, "FColor::B offset is not 0");
	auto constexpr FColor_G_Offset = offsetof(FColor, G);
	static_assert(FColor_G_Offset == 0x1, "FColor::G offset is not 1");
	auto constexpr FColor_R_Offset = offsetof(FColor, R);
	static_assert(FColor_R_Offset == 0x2, "FColor::R offset is not 2");
	auto constexpr FColor_A_Offset = offsetof(FColor, A);
	static_assert(FColor_A_Offset == 0x3, "FColor::A offset is not 3");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
