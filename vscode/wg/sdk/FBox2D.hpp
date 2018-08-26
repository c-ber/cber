#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBox2D // Size: 0x14
{
public:
    FVector2D Min; /* Ofs: 0x0 Size: 0x8 StructProperty CoreUObject.Box2D.Min */
    FVector2D Max; /* Ofs: 0x8 Size: 0x8 StructProperty CoreUObject.Box2D.Max */
    uint8_t bIsValid; /* Ofs: 0x10 Size: 0x1 ByteProperty CoreUObject.Box2D.bIsValid */
    uint8_t UnknownData11[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBox2D = sizeof(FBox2D); // 20
    static_assert(sizeof(FBox2D) == 0x14, "Size of FBox2D is not correct.");
	auto constexpr FBox2D_Min_Offset = offsetof(FBox2D, Min);
	static_assert(FBox2D_Min_Offset == 0x0, "FBox2D::Min offset is not 0");
	auto constexpr FBox2D_Max_Offset = offsetof(FBox2D, Max);
	static_assert(FBox2D_Max_Offset == 0x8, "FBox2D::Max offset is not 8");
	auto constexpr FBox2D_bIsValid_Offset = offsetof(FBox2D, bIsValid);
	static_assert(FBox2D_bIsValid_Offset == 0x10, "FBox2D::bIsValid offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
