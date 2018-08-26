#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVector4 // Size: 0x10
{
public:
    float X; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.Vector4.X */
    float Y; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.Vector4.Y */
    float Z; /* Ofs: 0x8 Size: 0x4 FloatProperty CoreUObject.Vector4.Z */
    float W; /* Ofs: 0xC Size: 0x4 FloatProperty CoreUObject.Vector4.W */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVector4 = sizeof(FVector4); // 16
    static_assert(sizeof(FVector4) == 0x10, "Size of FVector4 is not correct.");
	auto constexpr FVector4_X_Offset = offsetof(FVector4, X);
	static_assert(FVector4_X_Offset == 0x0, "FVector4::X offset is not 0");
	auto constexpr FVector4_Y_Offset = offsetof(FVector4, Y);
	static_assert(FVector4_Y_Offset == 0x4, "FVector4::Y offset is not 4");
	auto constexpr FVector4_Z_Offset = offsetof(FVector4, Z);
	static_assert(FVector4_Z_Offset == 0x8, "FVector4::Z offset is not 8");
	auto constexpr FVector4_W_Offset = offsetof(FVector4, W);
	static_assert(FVector4_W_Offset == 0xc, "FVector4::W offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
