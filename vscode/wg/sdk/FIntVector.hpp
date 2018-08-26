#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FIntVector // Size: 0xC
{
public:
    int32_t X; /* Ofs: 0x0 Size: 0x4 IntProperty CoreUObject.IntVector.X */
    int32_t Y; /* Ofs: 0x4 Size: 0x4 IntProperty CoreUObject.IntVector.Y */
    int32_t Z; /* Ofs: 0x8 Size: 0x4 IntProperty CoreUObject.IntVector.Z */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFIntVector = sizeof(FIntVector); // 12
    static_assert(sizeof(FIntVector) == 0xC, "Size of FIntVector is not correct.");
	auto constexpr FIntVector_X_Offset = offsetof(FIntVector, X);
	static_assert(FIntVector_X_Offset == 0x0, "FIntVector::X offset is not 0");
	auto constexpr FIntVector_Y_Offset = offsetof(FIntVector, Y);
	static_assert(FIntVector_Y_Offset == 0x4, "FIntVector::Y offset is not 4");
	auto constexpr FIntVector_Z_Offset = offsetof(FIntVector, Z);
	static_assert(FIntVector_Z_Offset == 0x8, "FIntVector::Z offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
