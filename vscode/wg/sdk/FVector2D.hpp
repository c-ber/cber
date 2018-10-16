#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVector2D // Size: 0x8
{
public:
    float X; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.Vector2D.X */
    float Y; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.Vector2D.Y */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVector2D = sizeof(FVector2D); // 8
    static_assert(sizeof(FVector2D) == 0x8, "Size of FVector2D is not correct.");
	auto constexpr FVector2D_X_Offset = offsetof(FVector2D, X);
	static_assert(FVector2D_X_Offset == 0x0, "FVector2D::X offset is not 0");
	auto constexpr FVector2D_Y_Offset = offsetof(FVector2D, Y);
	static_assert(FVector2D_Y_Offset == 0x4, "FVector2D::Y offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
