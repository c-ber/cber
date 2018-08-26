#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlane // Size: 0x10
 : public FVector // Size: 0xC
{
public:
    float W; /* Ofs: 0xC Size: 0x4 FloatProperty CoreUObject.Plane.W */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlane = sizeof(FPlane); // 16
    static_assert(sizeof(FPlane) == 0x10, "Size of FPlane is not correct.");
	auto constexpr FPlane_W_Offset = offsetof(FPlane, W);
	static_assert(FPlane_W_Offset == 0xc, "FPlane::W offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
