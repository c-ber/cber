#pragma once
#include "FPlane.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMatrix // Size: 0x40
{
public:
    FPlane XPlane; /* Ofs: 0x0 Size: 0x10 StructProperty CoreUObject.Matrix.XPlane */
    FPlane YPlane; /* Ofs: 0x10 Size: 0x10 StructProperty CoreUObject.Matrix.YPlane */
    FPlane ZPlane; /* Ofs: 0x20 Size: 0x10 StructProperty CoreUObject.Matrix.ZPlane */
    FPlane WPlane; /* Ofs: 0x30 Size: 0x10 StructProperty CoreUObject.Matrix.WPlane */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMatrix = sizeof(FMatrix); // 64
    static_assert(sizeof(FMatrix) == 0x40, "Size of FMatrix is not correct.");
	auto constexpr FMatrix_XPlane_Offset = offsetof(FMatrix, XPlane);
	static_assert(FMatrix_XPlane_Offset == 0x0, "FMatrix::XPlane offset is not 0");
	auto constexpr FMatrix_YPlane_Offset = offsetof(FMatrix, YPlane);
	static_assert(FMatrix_YPlane_Offset == 0x10, "FMatrix::YPlane offset is not 10");
	auto constexpr FMatrix_ZPlane_Offset = offsetof(FMatrix, ZPlane);
	static_assert(FMatrix_ZPlane_Offset == 0x20, "FMatrix::ZPlane offset is not 20");
	auto constexpr FMatrix_WPlane_Offset = offsetof(FMatrix, WPlane);
	static_assert(FMatrix_WPlane_Offset == 0x30, "FMatrix::WPlane offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
