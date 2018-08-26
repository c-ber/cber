#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogVehicle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogVehicleDestroy // Size: 0xF8
 : public FLogBase // Size: 0x58
{
public:
    int32_t AttackId; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogVehicleDestroy.AttackId */
    uint8_t UnknownData5C[0x4];
    FWuLogCharacter Attacker; /* Ofs: 0x60 Size: 0x48 StructProperty TslGame.WuLogVehicleDestroy.Attacker */
    FWuLogVehicle Vehicle; /* Ofs: 0xA8 Size: 0x28 StructProperty TslGame.WuLogVehicleDestroy.Vehicle */
    FString DamageTypeCategory; /* Ofs: 0xD0 Size: 0x10 StrProperty TslGame.WuLogVehicleDestroy.DamageTypeCategory */
    FString DamageCauserName; /* Ofs: 0xE0 Size: 0x10 StrProperty TslGame.WuLogVehicleDestroy.DamageCauserName */
    float Distance; /* Ofs: 0xF0 Size: 0x4 FloatProperty TslGame.WuLogVehicleDestroy.Distance */
    uint8_t UnknownDataF4[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogVehicleDestroy = sizeof(FWuLogVehicleDestroy); // 248
    static_assert(sizeof(FWuLogVehicleDestroy) == 0xF8, "Size of FWuLogVehicleDestroy is not correct.");
	auto constexpr FWuLogVehicleDestroy_AttackId_Offset = offsetof(FWuLogVehicleDestroy, AttackId);
	static_assert(FWuLogVehicleDestroy_AttackId_Offset == 0x58, "FWuLogVehicleDestroy::AttackId offset is not 58");
	auto constexpr FWuLogVehicleDestroy_Attacker_Offset = offsetof(FWuLogVehicleDestroy, Attacker);
	static_assert(FWuLogVehicleDestroy_Attacker_Offset == 0x60, "FWuLogVehicleDestroy::Attacker offset is not 60");
	auto constexpr FWuLogVehicleDestroy_Vehicle_Offset = offsetof(FWuLogVehicleDestroy, Vehicle);
	static_assert(FWuLogVehicleDestroy_Vehicle_Offset == 0xa8, "FWuLogVehicleDestroy::Vehicle offset is not a8");
	auto constexpr FWuLogVehicleDestroy_DamageTypeCategory_Offset = offsetof(FWuLogVehicleDestroy, DamageTypeCategory);
	static_assert(FWuLogVehicleDestroy_DamageTypeCategory_Offset == 0xd0, "FWuLogVehicleDestroy::DamageTypeCategory offset is not d0");
	auto constexpr FWuLogVehicleDestroy_DamageCauserName_Offset = offsetof(FWuLogVehicleDestroy, DamageCauserName);
	static_assert(FWuLogVehicleDestroy_DamageCauserName_Offset == 0xe0, "FWuLogVehicleDestroy::DamageCauserName offset is not e0");
	auto constexpr FWuLogVehicleDestroy_Distance_Offset = offsetof(FWuLogVehicleDestroy, Distance);
	static_assert(FWuLogVehicleDestroy_Distance_Offset == 0xf0, "FWuLogVehicleDestroy::Distance offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
