#pragma once
#include "UDataAsset.hpp"
#include "EPhysicalSurface.hpp"
#include "EWeaponClass.hpp"
#include "EDamageZoneType.hpp"
#include "EWeaponClass.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponsPenetrationConfig // Size: 0x320
	: public UDataAsset // Size: 0x38
{
private:
	typedef UWeaponsPenetrationConfig t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(74); // id32("Class TslGame.WeaponsPenetrationConfig")
		return ptr;
	}
	TMap<EPhysicalSurface, struct FPhysicalMaterialPenetrationConfig> DefaultMaterialConfigs; /* Ofs: 0x38 Size: 0x50 - MapProperty TslGame.WeaponsPenetrationConfig.DefaultMaterialConfigs */
	TMap<struct UPhysicalMaterial, struct FPhysicalMaterialPenetrationConfig> MaterialConfigOverrides; /* Ofs: 0x88 Size: 0x50 - MapProperty TslGame.WeaponsPenetrationConfig.MaterialConfigOverrides */
	TMap<EWeaponClass, struct FWeaponPenetrationConfig> WeaponClassConfigs; /* Ofs: 0xD8 Size: 0x50 - MapProperty TslGame.WeaponsPenetrationConfig.WeaponClassConfigs */
	TMap<struct UClass, struct FWeaponPenetrationConfig> WeaponConfigOverrides; /* Ofs: 0x128 Size: 0x50 - MapProperty TslGame.WeaponsPenetrationConfig.WeaponConfigOverrides */
	TMap<EPhysicalSurface, struct UCurveFloat> PenetrationPowerCurves; /* Ofs: 0x178 Size: 0x50 - MapProperty TslGame.WeaponsPenetrationConfig.PenetrationPowerCurves */
	TSet<EDamageZoneType> BodyPenetratableZones; /* Ofs: 0x1C8 Size: 0x50 - SetProperty TslGame.WeaponsPenetrationConfig.BodyPenetratableZones */
	TSet<EDamageZoneType> BodyPenetrationReceiveDamageZones; /* Ofs: 0x218 Size: 0x50 - SetProperty TslGame.WeaponsPenetrationConfig.BodyPenetrationReceiveDamageZones */
	TSet<EWeaponClass> BodyPenetrationDisabledWeapons; /* Ofs: 0x268 Size: 0x50 - SetProperty TslGame.WeaponsPenetrationConfig.BodyPenetrationDisabledWeapons */
	TSet<EWeaponClass> VehiclePenetrationDisabledWeapons; /* Ofs: 0x2B8 Size: 0x50 - SetProperty TslGame.WeaponsPenetrationConfig.VehiclePenetrationDisabledWeapons */
	float DeflectionRange; /* Ofs: 0x308 Size: 0x4 - FloatProperty TslGame.WeaponsPenetrationConfig.DeflectionRange */
	int32_t MaxSurfacesNum; /* Ofs: 0x30C Size: 0x4 - IntProperty TslGame.WeaponsPenetrationConfig.MaxSurfacesNum */
	float MinImpactAngleDeg; /* Ofs: 0x310 Size: 0x4 - FloatProperty TslGame.WeaponsPenetrationConfig.MinImpactAngleDeg */
	float MinDetectableHollowSize; /* Ofs: 0x314 Size: 0x4 - FloatProperty TslGame.WeaponsPenetrationConfig.MinDetectableHollowSize */
	float MinOutSpeed; /* Ofs: 0x318 Size: 0x4 - FloatProperty TslGame.WeaponsPenetrationConfig.MinOutSpeed */
	float MinWaterSpeed; /* Ofs: 0x31C Size: 0x4 - FloatProperty TslGame.WeaponsPenetrationConfig.MinWaterSpeed */


	inline bool SetDefaultMaterialConfigs(t_structHelper inst, TMap<EPhysicalSurface, struct FPhysicalMaterialPenetrationConfig> value) { inst.WriteOffset(0x38, value); }
	inline bool SetMaterialConfigOverrides(t_structHelper inst, TMap<struct UPhysicalMaterial, struct FPhysicalMaterialPenetrationConfig> value) { inst.WriteOffset(0x88, value); }
	inline bool SetWeaponClassConfigs(t_structHelper inst, TMap<EWeaponClass, struct FWeaponPenetrationConfig> value) { inst.WriteOffset(0xD8, value); }
	inline bool SetWeaponConfigOverrides(t_structHelper inst, TMap<struct UClass, struct FWeaponPenetrationConfig> value) { inst.WriteOffset(0x128, value); }
	inline bool SetPenetrationPowerCurves(t_structHelper inst, TMap<EPhysicalSurface, struct UCurveFloat> value) { inst.WriteOffset(0x178, value); }
	inline bool SetBodyPenetratableZones(t_structHelper inst, TSet<EDamageZoneType> value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetBodyPenetrationReceiveDamageZones(t_structHelper inst, TSet<EDamageZoneType> value) { inst.WriteOffset(0x218, value); }
	inline bool SetBodyPenetrationDisabledWeapons(t_structHelper inst, TSet<EWeaponClass> value) { inst.WriteOffset(0x268, value); }
	inline bool SetVehiclePenetrationDisabledWeapons(t_structHelper inst, TSet<EWeaponClass> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetDeflectionRange(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetMaxSurfacesNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30C, value); }
	inline bool SetMinImpactAngleDeg(t_structHelper inst, float value) { inst.WriteOffset(0x310, value); }
	inline bool SetMinDetectableHollowSize(t_structHelper inst, float value) { inst.WriteOffset(0x314, value); }
	inline bool SetMinOutSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x318, value); }
	inline bool SetMinWaterSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x31C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponsPenetrationConfig = sizeof(UWeaponsPenetrationConfig); // 800
    static_assert(sizeof(UWeaponsPenetrationConfig) == 0x320, "Size of UWeaponsPenetrationConfig is not correct.");
	auto constexpr UWeaponsPenetrationConfig_DefaultMaterialConfigs_Offset = offsetof(UWeaponsPenetrationConfig, DefaultMaterialConfigs);
	static_assert(UWeaponsPenetrationConfig_DefaultMaterialConfigs_Offset == 0x38, "UWeaponsPenetrationConfig::DefaultMaterialConfigs offset is not 38");
	auto constexpr UWeaponsPenetrationConfig_MaterialConfigOverrides_Offset = offsetof(UWeaponsPenetrationConfig, MaterialConfigOverrides);
	static_assert(UWeaponsPenetrationConfig_MaterialConfigOverrides_Offset == 0x88, "UWeaponsPenetrationConfig::MaterialConfigOverrides offset is not 88");
	auto constexpr UWeaponsPenetrationConfig_WeaponClassConfigs_Offset = offsetof(UWeaponsPenetrationConfig, WeaponClassConfigs);
	static_assert(UWeaponsPenetrationConfig_WeaponClassConfigs_Offset == 0xd8, "UWeaponsPenetrationConfig::WeaponClassConfigs offset is not d8");
	auto constexpr UWeaponsPenetrationConfig_WeaponConfigOverrides_Offset = offsetof(UWeaponsPenetrationConfig, WeaponConfigOverrides);
	static_assert(UWeaponsPenetrationConfig_WeaponConfigOverrides_Offset == 0x128, "UWeaponsPenetrationConfig::WeaponConfigOverrides offset is not 128");
	auto constexpr UWeaponsPenetrationConfig_PenetrationPowerCurves_Offset = offsetof(UWeaponsPenetrationConfig, PenetrationPowerCurves);
	static_assert(UWeaponsPenetrationConfig_PenetrationPowerCurves_Offset == 0x178, "UWeaponsPenetrationConfig::PenetrationPowerCurves offset is not 178");
	auto constexpr UWeaponsPenetrationConfig_BodyPenetratableZones_Offset = offsetof(UWeaponsPenetrationConfig, BodyPenetratableZones);
	static_assert(UWeaponsPenetrationConfig_BodyPenetratableZones_Offset == 0x1c8, "UWeaponsPenetrationConfig::BodyPenetratableZones offset is not 1c8");
	auto constexpr UWeaponsPenetrationConfig_BodyPenetrationReceiveDamageZones_Offset = offsetof(UWeaponsPenetrationConfig, BodyPenetrationReceiveDamageZones);
	static_assert(UWeaponsPenetrationConfig_BodyPenetrationReceiveDamageZones_Offset == 0x218, "UWeaponsPenetrationConfig::BodyPenetrationReceiveDamageZones offset is not 218");
	auto constexpr UWeaponsPenetrationConfig_BodyPenetrationDisabledWeapons_Offset = offsetof(UWeaponsPenetrationConfig, BodyPenetrationDisabledWeapons);
	static_assert(UWeaponsPenetrationConfig_BodyPenetrationDisabledWeapons_Offset == 0x268, "UWeaponsPenetrationConfig::BodyPenetrationDisabledWeapons offset is not 268");
	auto constexpr UWeaponsPenetrationConfig_VehiclePenetrationDisabledWeapons_Offset = offsetof(UWeaponsPenetrationConfig, VehiclePenetrationDisabledWeapons);
	static_assert(UWeaponsPenetrationConfig_VehiclePenetrationDisabledWeapons_Offset == 0x2b8, "UWeaponsPenetrationConfig::VehiclePenetrationDisabledWeapons offset is not 2b8");
	auto constexpr UWeaponsPenetrationConfig_DeflectionRange_Offset = offsetof(UWeaponsPenetrationConfig, DeflectionRange);
	static_assert(UWeaponsPenetrationConfig_DeflectionRange_Offset == 0x308, "UWeaponsPenetrationConfig::DeflectionRange offset is not 308");
	auto constexpr UWeaponsPenetrationConfig_MaxSurfacesNum_Offset = offsetof(UWeaponsPenetrationConfig, MaxSurfacesNum);
	static_assert(UWeaponsPenetrationConfig_MaxSurfacesNum_Offset == 0x30c, "UWeaponsPenetrationConfig::MaxSurfacesNum offset is not 30c");
	auto constexpr UWeaponsPenetrationConfig_MinImpactAngleDeg_Offset = offsetof(UWeaponsPenetrationConfig, MinImpactAngleDeg);
	static_assert(UWeaponsPenetrationConfig_MinImpactAngleDeg_Offset == 0x310, "UWeaponsPenetrationConfig::MinImpactAngleDeg offset is not 310");
	auto constexpr UWeaponsPenetrationConfig_MinDetectableHollowSize_Offset = offsetof(UWeaponsPenetrationConfig, MinDetectableHollowSize);
	static_assert(UWeaponsPenetrationConfig_MinDetectableHollowSize_Offset == 0x314, "UWeaponsPenetrationConfig::MinDetectableHollowSize offset is not 314");
	auto constexpr UWeaponsPenetrationConfig_MinOutSpeed_Offset = offsetof(UWeaponsPenetrationConfig, MinOutSpeed);
	static_assert(UWeaponsPenetrationConfig_MinOutSpeed_Offset == 0x318, "UWeaponsPenetrationConfig::MinOutSpeed offset is not 318");
	auto constexpr UWeaponsPenetrationConfig_MinWaterSpeed_Offset = offsetof(UWeaponsPenetrationConfig, MinWaterSpeed);
	static_assert(UWeaponsPenetrationConfig_MinWaterSpeed_Offset == 0x31c, "UWeaponsPenetrationConfig::MinWaterSpeed offset is not 31c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
