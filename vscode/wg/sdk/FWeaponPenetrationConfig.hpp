#pragma once
#include "EPhysicalSurface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponPenetrationConfig // Size: 0x50
{
public:
    TMap<EPhysicalSurface, float> PowerMultipliers; /* Ofs: 0x0 Size: 0x50 MapProperty TslGame.WeaponPenetrationConfig.PowerMultipliers */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponPenetrationConfig = sizeof(FWeaponPenetrationConfig); // 80
    static_assert(sizeof(FWeaponPenetrationConfig) == 0x50, "Size of FWeaponPenetrationConfig is not correct.");
	auto constexpr FWeaponPenetrationConfig_PowerMultipliers_Offset = offsetof(FWeaponPenetrationConfig, PowerMultipliers);
	static_assert(FWeaponPenetrationConfig_PowerMultipliers_Offset == 0x0, "FWeaponPenetrationConfig::PowerMultipliers offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
