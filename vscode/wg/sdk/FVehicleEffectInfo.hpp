#pragma once
#include "FFloatRange.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVehicleEffectInfo // Size: 0xF0
{
public:
    ExternalPtr<struct UClass> Explosion; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Explosion */
    float DamagedPercentMax; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.VehicleEffectInfo.DamagedPercentMax */
    uint8_t UnknownDataC[0x4];
    ExternalPtr<struct UClass> Damaged; /* Ofs: 0x10 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Damaged */
    ExternalPtr<struct UClass> Destroyed; /* Ofs: 0x18 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Destroyed */
    ExternalPtr<struct UAkAudioEvent> EngineSound; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.VehicleEffectInfo.EngineSound */
    ExternalPtr<struct UAkAudioEvent> EngineSound_Remote; /* Ofs: 0x28 Size: 0x8 ObjectProperty TslGame.VehicleEffectInfo.EngineSound_Remote */
    ExternalPtr<struct UClass> Muffler; /* Ofs: 0x30 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Muffler */
    ExternalPtr<struct UClass> Muffler2; /* Ofs: 0x38 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Muffler2 */
    ExternalPtr<struct UClass> Boost; /* Ofs: 0x40 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Boost */
    ExternalPtr<struct UClass> Boost2; /* Ofs: 0x48 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Boost2 */
    ExternalPtr<struct UClass> FrontTrail; /* Ofs: 0x50 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.FrontTrail */
    ExternalPtr<struct UClass> RearTrail; /* Ofs: 0x58 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.RearTrail */
    ExternalPtr<struct UClass> Thruster; /* Ofs: 0x60 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Thruster */
    ExternalPtr<struct UClass> Thruster2; /* Ofs: 0x68 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.Thruster2 */
    ExternalPtr<struct UClass> FrontFoamLeft; /* Ofs: 0x70 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.FrontFoamLeft */
    ExternalPtr<struct UClass> FrontFoamRight; /* Ofs: 0x78 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.FrontFoamRight */
    FFloatRange ImpactNormalForceRange; /* Ofs: 0x80 Size: 0x10 StructProperty TslGame.VehicleEffectInfo.ImpactNormalForceRange */
    ExternalPtr<struct UClass> ImpactDefault; /* Ofs: 0x90 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactDefault */
    ExternalPtr<struct UClass> ImpactConcrete; /* Ofs: 0x98 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactConcrete */
    ExternalPtr<struct UClass> ImpactDirt; /* Ofs: 0xA0 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactDirt */
    ExternalPtr<struct UClass> ImpactWater; /* Ofs: 0xA8 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactWater */
    ExternalPtr<struct UClass> ImpactMetal; /* Ofs: 0xB0 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactMetal */
    ExternalPtr<struct UClass> ImpactWood; /* Ofs: 0xB8 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactWood */
    ExternalPtr<struct UClass> ImpactGlass; /* Ofs: 0xC0 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactGlass */
    ExternalPtr<struct UClass> ImpactGrass; /* Ofs: 0xC8 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactGrass */
    ExternalPtr<struct UClass> ImpactRock; /* Ofs: 0xD0 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactRock */
    ExternalPtr<struct UClass> ImpactSand; /* Ofs: 0xD8 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactSand */
    ExternalPtr<struct UClass> ImpactFlesh; /* Ofs: 0xE0 Size: 0x8 ClassProperty TslGame.VehicleEffectInfo.ImpactFlesh */
    int32_t MaxImpactCount; /* Ofs: 0xE8 Size: 0x4 IntProperty TslGame.VehicleEffectInfo.MaxImpactCount */
    uint8_t UnknownDataEC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVehicleEffectInfo = sizeof(FVehicleEffectInfo); // 240
    static_assert(sizeof(FVehicleEffectInfo) == 0xF0, "Size of FVehicleEffectInfo is not correct.");
	auto constexpr FVehicleEffectInfo_Explosion_Offset = offsetof(FVehicleEffectInfo, Explosion);
	static_assert(FVehicleEffectInfo_Explosion_Offset == 0x0, "FVehicleEffectInfo::Explosion offset is not 0");
	auto constexpr FVehicleEffectInfo_DamagedPercentMax_Offset = offsetof(FVehicleEffectInfo, DamagedPercentMax);
	static_assert(FVehicleEffectInfo_DamagedPercentMax_Offset == 0x8, "FVehicleEffectInfo::DamagedPercentMax offset is not 8");
	auto constexpr FVehicleEffectInfo_Damaged_Offset = offsetof(FVehicleEffectInfo, Damaged);
	static_assert(FVehicleEffectInfo_Damaged_Offset == 0x10, "FVehicleEffectInfo::Damaged offset is not 10");
	auto constexpr FVehicleEffectInfo_Destroyed_Offset = offsetof(FVehicleEffectInfo, Destroyed);
	static_assert(FVehicleEffectInfo_Destroyed_Offset == 0x18, "FVehicleEffectInfo::Destroyed offset is not 18");
	auto constexpr FVehicleEffectInfo_EngineSound_Offset = offsetof(FVehicleEffectInfo, EngineSound);
	static_assert(FVehicleEffectInfo_EngineSound_Offset == 0x20, "FVehicleEffectInfo::EngineSound offset is not 20");
	auto constexpr FVehicleEffectInfo_EngineSound_Remote_Offset = offsetof(FVehicleEffectInfo, EngineSound_Remote);
	static_assert(FVehicleEffectInfo_EngineSound_Remote_Offset == 0x28, "FVehicleEffectInfo::EngineSound_Remote offset is not 28");
	auto constexpr FVehicleEffectInfo_Muffler_Offset = offsetof(FVehicleEffectInfo, Muffler);
	static_assert(FVehicleEffectInfo_Muffler_Offset == 0x30, "FVehicleEffectInfo::Muffler offset is not 30");
	auto constexpr FVehicleEffectInfo_Muffler2_Offset = offsetof(FVehicleEffectInfo, Muffler2);
	static_assert(FVehicleEffectInfo_Muffler2_Offset == 0x38, "FVehicleEffectInfo::Muffler2 offset is not 38");
	auto constexpr FVehicleEffectInfo_Boost_Offset = offsetof(FVehicleEffectInfo, Boost);
	static_assert(FVehicleEffectInfo_Boost_Offset == 0x40, "FVehicleEffectInfo::Boost offset is not 40");
	auto constexpr FVehicleEffectInfo_Boost2_Offset = offsetof(FVehicleEffectInfo, Boost2);
	static_assert(FVehicleEffectInfo_Boost2_Offset == 0x48, "FVehicleEffectInfo::Boost2 offset is not 48");
	auto constexpr FVehicleEffectInfo_FrontTrail_Offset = offsetof(FVehicleEffectInfo, FrontTrail);
	static_assert(FVehicleEffectInfo_FrontTrail_Offset == 0x50, "FVehicleEffectInfo::FrontTrail offset is not 50");
	auto constexpr FVehicleEffectInfo_RearTrail_Offset = offsetof(FVehicleEffectInfo, RearTrail);
	static_assert(FVehicleEffectInfo_RearTrail_Offset == 0x58, "FVehicleEffectInfo::RearTrail offset is not 58");
	auto constexpr FVehicleEffectInfo_Thruster_Offset = offsetof(FVehicleEffectInfo, Thruster);
	static_assert(FVehicleEffectInfo_Thruster_Offset == 0x60, "FVehicleEffectInfo::Thruster offset is not 60");
	auto constexpr FVehicleEffectInfo_Thruster2_Offset = offsetof(FVehicleEffectInfo, Thruster2);
	static_assert(FVehicleEffectInfo_Thruster2_Offset == 0x68, "FVehicleEffectInfo::Thruster2 offset is not 68");
	auto constexpr FVehicleEffectInfo_FrontFoamLeft_Offset = offsetof(FVehicleEffectInfo, FrontFoamLeft);
	static_assert(FVehicleEffectInfo_FrontFoamLeft_Offset == 0x70, "FVehicleEffectInfo::FrontFoamLeft offset is not 70");
	auto constexpr FVehicleEffectInfo_FrontFoamRight_Offset = offsetof(FVehicleEffectInfo, FrontFoamRight);
	static_assert(FVehicleEffectInfo_FrontFoamRight_Offset == 0x78, "FVehicleEffectInfo::FrontFoamRight offset is not 78");
	auto constexpr FVehicleEffectInfo_ImpactNormalForceRange_Offset = offsetof(FVehicleEffectInfo, ImpactNormalForceRange);
	static_assert(FVehicleEffectInfo_ImpactNormalForceRange_Offset == 0x80, "FVehicleEffectInfo::ImpactNormalForceRange offset is not 80");
	auto constexpr FVehicleEffectInfo_ImpactDefault_Offset = offsetof(FVehicleEffectInfo, ImpactDefault);
	static_assert(FVehicleEffectInfo_ImpactDefault_Offset == 0x90, "FVehicleEffectInfo::ImpactDefault offset is not 90");
	auto constexpr FVehicleEffectInfo_ImpactConcrete_Offset = offsetof(FVehicleEffectInfo, ImpactConcrete);
	static_assert(FVehicleEffectInfo_ImpactConcrete_Offset == 0x98, "FVehicleEffectInfo::ImpactConcrete offset is not 98");
	auto constexpr FVehicleEffectInfo_ImpactDirt_Offset = offsetof(FVehicleEffectInfo, ImpactDirt);
	static_assert(FVehicleEffectInfo_ImpactDirt_Offset == 0xa0, "FVehicleEffectInfo::ImpactDirt offset is not a0");
	auto constexpr FVehicleEffectInfo_ImpactWater_Offset = offsetof(FVehicleEffectInfo, ImpactWater);
	static_assert(FVehicleEffectInfo_ImpactWater_Offset == 0xa8, "FVehicleEffectInfo::ImpactWater offset is not a8");
	auto constexpr FVehicleEffectInfo_ImpactMetal_Offset = offsetof(FVehicleEffectInfo, ImpactMetal);
	static_assert(FVehicleEffectInfo_ImpactMetal_Offset == 0xb0, "FVehicleEffectInfo::ImpactMetal offset is not b0");
	auto constexpr FVehicleEffectInfo_ImpactWood_Offset = offsetof(FVehicleEffectInfo, ImpactWood);
	static_assert(FVehicleEffectInfo_ImpactWood_Offset == 0xb8, "FVehicleEffectInfo::ImpactWood offset is not b8");
	auto constexpr FVehicleEffectInfo_ImpactGlass_Offset = offsetof(FVehicleEffectInfo, ImpactGlass);
	static_assert(FVehicleEffectInfo_ImpactGlass_Offset == 0xc0, "FVehicleEffectInfo::ImpactGlass offset is not c0");
	auto constexpr FVehicleEffectInfo_ImpactGrass_Offset = offsetof(FVehicleEffectInfo, ImpactGrass);
	static_assert(FVehicleEffectInfo_ImpactGrass_Offset == 0xc8, "FVehicleEffectInfo::ImpactGrass offset is not c8");
	auto constexpr FVehicleEffectInfo_ImpactRock_Offset = offsetof(FVehicleEffectInfo, ImpactRock);
	static_assert(FVehicleEffectInfo_ImpactRock_Offset == 0xd0, "FVehicleEffectInfo::ImpactRock offset is not d0");
	auto constexpr FVehicleEffectInfo_ImpactSand_Offset = offsetof(FVehicleEffectInfo, ImpactSand);
	static_assert(FVehicleEffectInfo_ImpactSand_Offset == 0xd8, "FVehicleEffectInfo::ImpactSand offset is not d8");
	auto constexpr FVehicleEffectInfo_ImpactFlesh_Offset = offsetof(FVehicleEffectInfo, ImpactFlesh);
	static_assert(FVehicleEffectInfo_ImpactFlesh_Offset == 0xe0, "FVehicleEffectInfo::ImpactFlesh offset is not e0");
	auto constexpr FVehicleEffectInfo_MaxImpactCount_Offset = offsetof(FVehicleEffectInfo, MaxImpactCount);
	static_assert(FVehicleEffectInfo_MaxImpactCount_Offset == 0xe8, "FVehicleEffectInfo::MaxImpactCount offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
