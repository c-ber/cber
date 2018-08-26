#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FProjectileData // Size: 0x40
{
public:
    float ProjectileLife; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.ProjectileData.ProjectileLife */
    int32_t ExplosionDamage; /* Ofs: 0x4 Size: 0x4 IntProperty TslGame.ProjectileData.ExplosionDamage */
    float ExplosionRadius; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.ProjectileData.ExplosionRadius */
    uint8_t UnknownDataC[0x4];
    ExternalPtr<struct UCurveFloat> DamageCurve; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.ProjectileData.DamageCurve */
    float MinImpactVelocityForSound; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.ProjectileData.MinImpactVelocityForSound */
    float TimeBetweenImpactSound; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.ProjectileData.TimeBetweenImpactSound */
    ExternalPtr<struct UClass> DamageType; /* Ofs: 0x20 Size: 0x8 ClassProperty TslGame.ProjectileData.DamageType */
    bool DestroyAtExplosion; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty TslGame.ProjectileData.DestroyAtExplosion */
    bool bIgnoreVerticalSurfaces; /* Ofs: 0x29 Size: 0x1 BitMask: 01 BoolProperty TslGame.ProjectileData.bIgnoreVerticalSurfaces */
    uint8_t UnknownData2A[0x2];
    int32_t VerticalSurfaceImpactLimit; /* Ofs: 0x2C Size: 0x4 IntProperty TslGame.ProjectileData.VerticalSurfaceImpactLimit */
    float AbsPitchLimitForVerticalSurface; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.ProjectileData.AbsPitchLimitForVerticalSurface */
    float WaterHit_VelocityScalar; /* Ofs: 0x34 Size: 0x4 FloatProperty TslGame.ProjectileData.WaterHit_VelocityScalar */
    float WaterHit_GravityScalar; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.ProjectileData.WaterHit_GravityScalar */
    bool bExplodeOnDamage; /* Ofs: 0x3C Size: 0x1 BitMask: 01 BoolProperty TslGame.ProjectileData.bExplodeOnDamage */
    uint8_t UnknownData3D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFProjectileData = sizeof(FProjectileData); // 64
    static_assert(sizeof(FProjectileData) == 0x40, "Size of FProjectileData is not correct.");
	auto constexpr FProjectileData_ProjectileLife_Offset = offsetof(FProjectileData, ProjectileLife);
	static_assert(FProjectileData_ProjectileLife_Offset == 0x0, "FProjectileData::ProjectileLife offset is not 0");
	auto constexpr FProjectileData_ExplosionDamage_Offset = offsetof(FProjectileData, ExplosionDamage);
	static_assert(FProjectileData_ExplosionDamage_Offset == 0x4, "FProjectileData::ExplosionDamage offset is not 4");
	auto constexpr FProjectileData_ExplosionRadius_Offset = offsetof(FProjectileData, ExplosionRadius);
	static_assert(FProjectileData_ExplosionRadius_Offset == 0x8, "FProjectileData::ExplosionRadius offset is not 8");
	auto constexpr FProjectileData_DamageCurve_Offset = offsetof(FProjectileData, DamageCurve);
	static_assert(FProjectileData_DamageCurve_Offset == 0x10, "FProjectileData::DamageCurve offset is not 10");
	auto constexpr FProjectileData_MinImpactVelocityForSound_Offset = offsetof(FProjectileData, MinImpactVelocityForSound);
	static_assert(FProjectileData_MinImpactVelocityForSound_Offset == 0x18, "FProjectileData::MinImpactVelocityForSound offset is not 18");
	auto constexpr FProjectileData_TimeBetweenImpactSound_Offset = offsetof(FProjectileData, TimeBetweenImpactSound);
	static_assert(FProjectileData_TimeBetweenImpactSound_Offset == 0x1c, "FProjectileData::TimeBetweenImpactSound offset is not 1c");
	auto constexpr FProjectileData_DamageType_Offset = offsetof(FProjectileData, DamageType);
	static_assert(FProjectileData_DamageType_Offset == 0x20, "FProjectileData::DamageType offset is not 20");
	auto constexpr FProjectileData_VerticalSurfaceImpactLimit_Offset = offsetof(FProjectileData, VerticalSurfaceImpactLimit);
	static_assert(FProjectileData_VerticalSurfaceImpactLimit_Offset == 0x2c, "FProjectileData::VerticalSurfaceImpactLimit offset is not 2c");
	auto constexpr FProjectileData_AbsPitchLimitForVerticalSurface_Offset = offsetof(FProjectileData, AbsPitchLimitForVerticalSurface);
	static_assert(FProjectileData_AbsPitchLimitForVerticalSurface_Offset == 0x30, "FProjectileData::AbsPitchLimitForVerticalSurface offset is not 30");
	auto constexpr FProjectileData_WaterHit_VelocityScalar_Offset = offsetof(FProjectileData, WaterHit_VelocityScalar);
	static_assert(FProjectileData_WaterHit_VelocityScalar_Offset == 0x34, "FProjectileData::WaterHit_VelocityScalar offset is not 34");
	auto constexpr FProjectileData_WaterHit_GravityScalar_Offset = offsetof(FProjectileData, WaterHit_GravityScalar);
	static_assert(FProjectileData_WaterHit_GravityScalar_Offset == 0x38, "FProjectileData::WaterHit_GravityScalar offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
