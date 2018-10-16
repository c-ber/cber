#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FIntPoint // Size: 0x8
{
public:
    int32_t X; /* Ofs: 0x0 Size: 0x4 IntProperty CoreUObject.IntPoint.X */
    int32_t Y; /* Ofs: 0x4 Size: 0x4 IntProperty CoreUObject.IntPoint.Y */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFIntPoint = sizeof(FIntPoint); // 8
    static_assert(sizeof(FIntPoint) == 0x8, "Size of FIntPoint is not correct.");
	auto constexpr FIntPoint_X_Offset = offsetof(FIntPoint, X);
	static_assert(FIntPoint_X_Offset == 0x0, "FIntPoint::X offset is not 0");
	auto constexpr FIntPoint_Y_Offset = offsetof(FIntPoint, Y);
	static_assert(FIntPoint_Y_Offset == 0x4, "FIntPoint::Y offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
