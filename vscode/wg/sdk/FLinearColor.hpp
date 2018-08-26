#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLinearColor // Size: 0x10
{
public:
    float R; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.LinearColor.R */
    float G; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.LinearColor.G */
    float B; /* Ofs: 0x8 Size: 0x4 FloatProperty CoreUObject.LinearColor.B */
    float A; /* Ofs: 0xC Size: 0x4 FloatProperty CoreUObject.LinearColor.A */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLinearColor = sizeof(FLinearColor); // 16
    static_assert(sizeof(FLinearColor) == 0x10, "Size of FLinearColor is not correct.");
	auto constexpr FLinearColor_R_Offset = offsetof(FLinearColor, R);
	static_assert(FLinearColor_R_Offset == 0x0, "FLinearColor::R offset is not 0");
	auto constexpr FLinearColor_G_Offset = offsetof(FLinearColor, G);
	static_assert(FLinearColor_G_Offset == 0x4, "FLinearColor::G offset is not 4");
	auto constexpr FLinearColor_B_Offset = offsetof(FLinearColor, B);
	static_assert(FLinearColor_B_Offset == 0x8, "FLinearColor::B offset is not 8");
	auto constexpr FLinearColor_A_Offset = offsetof(FLinearColor, A);
	static_assert(FLinearColor_A_Offset == 0xc, "FLinearColor::A offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
