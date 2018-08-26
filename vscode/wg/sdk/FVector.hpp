#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVector // Size: 0xC
{
public:
    float X; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.Vector.X */
    float Y; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.Vector.Y */
    float Z; /* Ofs: 0x8 Size: 0x4 FloatProperty CoreUObject.Vector.Z */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVector = sizeof(FVector); // 12
    static_assert(sizeof(FVector) == 0xC, "Size of FVector is not correct.");
	auto constexpr FVector_X_Offset = offsetof(FVector, X);
	static_assert(FVector_X_Offset == 0x0, "FVector::X offset is not 0");
	auto constexpr FVector_Y_Offset = offsetof(FVector, Y);
	static_assert(FVector_Y_Offset == 0x4, "FVector::Y offset is not 4");
	auto constexpr FVector_Z_Offset = offsetof(FVector, Z);
	static_assert(FVector_Z_Offset == 0x8, "FVector::Z offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
