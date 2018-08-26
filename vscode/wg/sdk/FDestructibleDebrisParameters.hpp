#pragma once
#include "FBox.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDestructibleDebrisParameters // Size: 0x2C
{
public:
    float DebrisLifetimeMin; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.DestructibleDebrisParameters.DebrisLifetimeMin */
    float DebrisLifetimeMax; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.DestructibleDebrisParameters.DebrisLifetimeMax */
    float DebrisMaxSeparationMin; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.DestructibleDebrisParameters.DebrisMaxSeparationMin */
    float DebrisMaxSeparationMax; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.DestructibleDebrisParameters.DebrisMaxSeparationMax */
    FBox ValidBounds; /* Ofs: 0x10 Size: 0x1C StructProperty Engine.DestructibleDebrisParameters.ValidBounds */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDestructibleDebrisParameters = sizeof(FDestructibleDebrisParameters); // 44
    static_assert(sizeof(FDestructibleDebrisParameters) == 0x2C, "Size of FDestructibleDebrisParameters is not correct.");
	auto constexpr FDestructibleDebrisParameters_DebrisLifetimeMin_Offset = offsetof(FDestructibleDebrisParameters, DebrisLifetimeMin);
	static_assert(FDestructibleDebrisParameters_DebrisLifetimeMin_Offset == 0x0, "FDestructibleDebrisParameters::DebrisLifetimeMin offset is not 0");
	auto constexpr FDestructibleDebrisParameters_DebrisLifetimeMax_Offset = offsetof(FDestructibleDebrisParameters, DebrisLifetimeMax);
	static_assert(FDestructibleDebrisParameters_DebrisLifetimeMax_Offset == 0x4, "FDestructibleDebrisParameters::DebrisLifetimeMax offset is not 4");
	auto constexpr FDestructibleDebrisParameters_DebrisMaxSeparationMin_Offset = offsetof(FDestructibleDebrisParameters, DebrisMaxSeparationMin);
	static_assert(FDestructibleDebrisParameters_DebrisMaxSeparationMin_Offset == 0x8, "FDestructibleDebrisParameters::DebrisMaxSeparationMin offset is not 8");
	auto constexpr FDestructibleDebrisParameters_DebrisMaxSeparationMax_Offset = offsetof(FDestructibleDebrisParameters, DebrisMaxSeparationMax);
	static_assert(FDestructibleDebrisParameters_DebrisMaxSeparationMax_Offset == 0xc, "FDestructibleDebrisParameters::DebrisMaxSeparationMax offset is not c");
	auto constexpr FDestructibleDebrisParameters_ValidBounds_Offset = offsetof(FDestructibleDebrisParameters, ValidBounds);
	static_assert(FDestructibleDebrisParameters_ValidBounds_Offset == 0x10, "FDestructibleDebrisParameters::ValidBounds offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
