#pragma once
#include "FConstraintProfileProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPhysicsConstraintProfileHandle // Size: 0x110
{
public:
    FConstraintProfileProperties ProfileProperties; /* Ofs: 0x0 Size: 0x104 StructProperty Engine.PhysicsConstraintProfileHandle.ProfileProperties */
    uint8_t UnknownData104[0x4];
    FName ProfileName; /* Ofs: 0x108 Size: 0x8 NameProperty Engine.PhysicsConstraintProfileHandle.ProfileName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPhysicsConstraintProfileHandle = sizeof(FPhysicsConstraintProfileHandle); // 272
    static_assert(sizeof(FPhysicsConstraintProfileHandle) == 0x110, "Size of FPhysicsConstraintProfileHandle is not correct.");
	auto constexpr FPhysicsConstraintProfileHandle_ProfileProperties_Offset = offsetof(FPhysicsConstraintProfileHandle, ProfileProperties);
	static_assert(FPhysicsConstraintProfileHandle_ProfileProperties_Offset == 0x0, "FPhysicsConstraintProfileHandle::ProfileProperties offset is not 0");
	auto constexpr FPhysicsConstraintProfileHandle_ProfileName_Offset = offsetof(FPhysicsConstraintProfileHandle, ProfileName);
	static_assert(FPhysicsConstraintProfileHandle_ProfileName_Offset == 0x108, "FPhysicsConstraintProfileHandle::ProfileName offset is not 108");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
