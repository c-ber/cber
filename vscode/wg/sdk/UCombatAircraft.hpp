#pragma once
#include "UTslAircraftVehicle.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCombatAircraft // Size: 0x570
	: public UTslAircraftVehicle // Size: 0x530
{
private:
	typedef UCombatAircraft t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1984); // id32("Class TslGame.CombatAircraft")
		return ptr;
	}
//	ExternalPtr<struct UClass> BombTemplateClass; /* Ofs: 0x528 Size: 0x8 - ClassProperty TslGame.CombatAircraft.BombTemplateClass */
	FVector2D BombDropInterval; /* Ofs: 0x530 Size: 0x8 - StructProperty TslGame.CombatAircraft.BombDropInterval */
	uint8_t UnknownData538[0x4];
	float BombProjectileDelayTime; /* Ofs: 0x53C Size: 0x4 - FloatProperty TslGame.CombatAircraft.BombProjectileDelayTime */
	float BombingZoneDuration; /* Ofs: 0x540 Size: 0x4 - FloatProperty TslGame.CombatAircraft.BombingZoneDuration */
	int32_t BombingZoneProjectileCount; /* Ofs: 0x544 Size: 0x4 - IntProperty TslGame.CombatAircraft.BombingZoneProjectileCount */
	float BombingZoneWidth; /* Ofs: 0x548 Size: 0x4 - FloatProperty TslGame.CombatAircraft.BombingZoneWidth */
	FVector2D ExplosionArea; /* Ofs: 0x54C Size: 0x8 - StructProperty TslGame.CombatAircraft.ExplosionArea */
	uint8_t UnknownData554[0x4];
	TArray<ExternalPtr<struct UTslPhysicsVolume>> OceanPhysicsVolume; /* Ofs: 0x558 Size: 0x10 - ArrayProperty TslGame.CombatAircraft.OceanPhysicsVolume */
	uint8_t UnknownData568[0x8];


//	inline bool SetBombTemplateClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x528, value); }
	inline bool SetBombDropInterval(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x530, value); }
	inline bool SetBombProjectileDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x53C, value); }
	inline bool SetBombingZoneDuration(t_structHelper inst, float value) { inst.WriteOffset(0x540, value); }
	inline bool SetBombingZoneProjectileCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x544, value); }
	inline bool SetBombingZoneWidth(t_structHelper inst, float value) { inst.WriteOffset(0x548, value); }
	inline bool SetExplosionArea(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x54C, value); }
	inline bool SetOceanPhysicsVolume(t_structHelper inst, TArray<ExternalPtr<struct UTslPhysicsVolume>> value) { inst.WriteOffset(0x558, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCombatAircraft = sizeof(UCombatAircraft); // 1392
    static_assert(sizeof(UCombatAircraft) == 0x570, "Size of UCombatAircraft is not correct.");
//	auto constexpr UCombatAircraft_BombTemplateClass_Offset = offsetof(UCombatAircraft, BombTemplateClass);
//	static_assert(UCombatAircraft_BombTemplateClass_Offset == 0x528, "UCombatAircraft::BombTemplateClass offset is not 528");
	auto constexpr UCombatAircraft_BombDropInterval_Offset = offsetof(UCombatAircraft, BombDropInterval);
	static_assert(UCombatAircraft_BombDropInterval_Offset == 0x530, "UCombatAircraft::BombDropInterval offset is not 530");
	auto constexpr UCombatAircraft_BombProjectileDelayTime_Offset = offsetof(UCombatAircraft, BombProjectileDelayTime);
	static_assert(UCombatAircraft_BombProjectileDelayTime_Offset == 0x53c, "UCombatAircraft::BombProjectileDelayTime offset is not 53c");
	auto constexpr UCombatAircraft_BombingZoneDuration_Offset = offsetof(UCombatAircraft, BombingZoneDuration);
	static_assert(UCombatAircraft_BombingZoneDuration_Offset == 0x540, "UCombatAircraft::BombingZoneDuration offset is not 540");
	auto constexpr UCombatAircraft_BombingZoneProjectileCount_Offset = offsetof(UCombatAircraft, BombingZoneProjectileCount);
	static_assert(UCombatAircraft_BombingZoneProjectileCount_Offset == 0x544, "UCombatAircraft::BombingZoneProjectileCount offset is not 544");
	auto constexpr UCombatAircraft_BombingZoneWidth_Offset = offsetof(UCombatAircraft, BombingZoneWidth);
	static_assert(UCombatAircraft_BombingZoneWidth_Offset == 0x548, "UCombatAircraft::BombingZoneWidth offset is not 548");
	auto constexpr UCombatAircraft_ExplosionArea_Offset = offsetof(UCombatAircraft, ExplosionArea);
	static_assert(UCombatAircraft_ExplosionArea_Offset == 0x54c, "UCombatAircraft::ExplosionArea offset is not 54c");
	auto constexpr UCombatAircraft_OceanPhysicsVolume_Offset = offsetof(UCombatAircraft, OceanPhysicsVolume);
	static_assert(UCombatAircraft_OceanPhysicsVolume_Offset == 0x558, "UCombatAircraft::OceanPhysicsVolume offset is not 558");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
