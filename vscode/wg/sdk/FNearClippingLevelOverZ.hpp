#pragma once
#include "ENearClippingLevel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNearClippingLevelOverZ // Size: 0x8
{
public:
    float Z; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.NearClippingLevelOverZ.Z */
    TEnumAsByte<enum ENearClippingLevel> Level; /* Ofs: 0x4 Size: 0x1 EnumProperty TslGame.NearClippingLevelOverZ.Level */
    uint8_t UnknownData5[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNearClippingLevelOverZ = sizeof(FNearClippingLevelOverZ); // 8
    static_assert(sizeof(FNearClippingLevelOverZ) == 0x8, "Size of FNearClippingLevelOverZ is not correct.");
	auto constexpr FNearClippingLevelOverZ_Z_Offset = offsetof(FNearClippingLevelOverZ, Z);
	static_assert(FNearClippingLevelOverZ_Z_Offset == 0x0, "FNearClippingLevelOverZ::Z offset is not 0");
	auto constexpr FNearClippingLevelOverZ_Level_Offset = offsetof(FNearClippingLevelOverZ, Level);
	static_assert(FNearClippingLevelOverZ_Level_Offset == 0x4, "FNearClippingLevelOverZ::Level offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
