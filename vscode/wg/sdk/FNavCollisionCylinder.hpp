#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavCollisionCylinder // Size: 0x14
{
public:
    FVector Offset; /* Ofs: 0x0 Size: 0xC StructProperty Engine.NavCollisionCylinder.Offset */
    float Radius; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.NavCollisionCylinder.Radius */
    float Height; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.NavCollisionCylinder.Height */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavCollisionCylinder = sizeof(FNavCollisionCylinder); // 20
    static_assert(sizeof(FNavCollisionCylinder) == 0x14, "Size of FNavCollisionCylinder is not correct.");
	auto constexpr FNavCollisionCylinder_Offset_Offset = offsetof(FNavCollisionCylinder, Offset);
	static_assert(FNavCollisionCylinder_Offset_Offset == 0x0, "FNavCollisionCylinder::Offset offset is not 0");
	auto constexpr FNavCollisionCylinder_Radius_Offset = offsetof(FNavCollisionCylinder, Radius);
	static_assert(FNavCollisionCylinder_Radius_Offset == 0xc, "FNavCollisionCylinder::Radius offset is not c");
	auto constexpr FNavCollisionCylinder_Height_Offset = offsetof(FNavCollisionCylinder, Height);
	static_assert(FNavCollisionCylinder_Height_Offset == 0x10, "FNavCollisionCylinder::Height offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
