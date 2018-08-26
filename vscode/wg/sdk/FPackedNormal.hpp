#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPackedNormal // Size: 0x4
{
public:
    uint8_t X; /* Ofs: 0x0 Size: 0x1 ByteProperty CoreUObject.PackedNormal.X */
    uint8_t Y; /* Ofs: 0x1 Size: 0x1 ByteProperty CoreUObject.PackedNormal.Y */
    uint8_t Z; /* Ofs: 0x2 Size: 0x1 ByteProperty CoreUObject.PackedNormal.Z */
    uint8_t W; /* Ofs: 0x3 Size: 0x1 ByteProperty CoreUObject.PackedNormal.W */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPackedNormal = sizeof(FPackedNormal); // 4
    static_assert(sizeof(FPackedNormal) == 0x4, "Size of FPackedNormal is not correct.");
	auto constexpr FPackedNormal_X_Offset = offsetof(FPackedNormal, X);
	static_assert(FPackedNormal_X_Offset == 0x0, "FPackedNormal::X offset is not 0");
	auto constexpr FPackedNormal_Y_Offset = offsetof(FPackedNormal, Y);
	static_assert(FPackedNormal_Y_Offset == 0x1, "FPackedNormal::Y offset is not 1");
	auto constexpr FPackedNormal_Z_Offset = offsetof(FPackedNormal, Z);
	static_assert(FPackedNormal_Z_Offset == 0x2, "FPackedNormal::Z offset is not 2");
	auto constexpr FPackedNormal_W_Offset = offsetof(FPackedNormal, W);
	static_assert(FPackedNormal_W_Offset == 0x3, "FPackedNormal::W offset is not 3");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
