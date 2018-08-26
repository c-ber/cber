#pragma once
#include "UActor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslProjectile_Flare // Size: 0x520
	: public UActor // Size: 0x410
{
private:
	typedef UTslProjectile_Flare t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1486); // id32("Class TslGame.TslProjectile_Flare")
		return ptr;
	}
//	ExternalPtr<struct UProjectileMovementComponent> ProjectileMovementComp; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslProjectile_Flare.ProjectileMovementComp */
	ExternalPtr<struct USphereComponent> CollisionComp; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslProjectile_Flare.CollisionComp */
	float DamageRadius; /* Ofs: 0x418 Size: 0x4 - FloatProperty TslGame.TslProjectile_Flare.DamageRadius */
	uint8_t UnknownData41C[0x4];
	ExternalPtr<struct UClass> DebuffTemplate; /* Ofs: 0x420 Size: 0x8 - ClassProperty TslGame.TslProjectile_Flare.DebuffTemplate */
	FVector HighAltTargetVelocity; /* Ofs: 0x428 Size: 0xC - StructProperty TslGame.TslProjectile_Flare.HighAltTargetVelocity */
	float GroundTraceDinstance; /* Ofs: 0x434 Size: 0x4 - FloatProperty TslGame.TslProjectile_Flare.GroundTraceDinstance */
	float AttenuationScalingCheckDelay; /* Ofs: 0x438 Size: 0x4 - FloatProperty TslGame.TslProjectile_Flare.AttenuationScalingCheckDelay */
	float AttenuationScalingInterpSpeed; /* Ofs: 0x43C Size: 0x4 - FloatProperty TslGame.TslProjectile_Flare.AttenuationScalingInterpSpeed */
	float AttenuationScalingInterpSpeedInWater; /* Ofs: 0x440 Size: 0x4 - FloatProperty TslGame.TslProjectile_Flare.AttenuationScalingInterpSpeedInWater */
	FVector2D AttenuationScalingInMap; /* Ofs: 0x444 Size: 0x8 - StructProperty TslGame.TslProjectile_Flare.AttenuationScalingInMap */
	FVector2D AttenuationScalingOutMap; /* Ofs: 0x44C Size: 0x8 - StructProperty TslGame.TslProjectile_Flare.AttenuationScalingOutMap */
	float AttenuationScalingUnderWater; /* Ofs: 0x454 Size: 0x4 - FloatProperty TslGame.TslProjectile_Flare.AttenuationScalingUnderWater */
	uint8_t UnknownData458[0x1];
	uint8_t boolField459;
	uint8_t boolField45A;
	uint8_t UnknownData45B[0xC5];


//	inline bool SetProjectileMovementComp(t_structHelper inst, ExternalPtr<struct UProjectileMovementComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetCollisionComp(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDamageRadius(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetDebuffTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x420, value); }
	inline bool SetHighAltTargetVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x428, value); }
	inline bool SetGroundTraceDinstance(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool SetAttenuationScalingCheckDelay(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetAttenuationScalingInterpSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetAttenuationScalingInterpSpeedInWater(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetAttenuationScalingInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x444, value); }
	inline bool SetAttenuationScalingOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x44C, value); }
	inline bool SetAttenuationScalingUnderWater(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool bIsUnderwater()
	{
		return boolField459& 0x1;
	}
	inline bool SetbIsUnderwater(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x459, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHighAltReached_CP()
	{
		return boolField45A& 0x1;
	}
	inline bool SetbHighAltReached_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x45A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslProjectile_Flare = sizeof(UTslProjectile_Flare); // 1312
    static_assert(sizeof(UTslProjectile_Flare) == 0x520, "Size of UTslProjectile_Flare is not correct.");
//	auto constexpr UTslProjectile_Flare_ProjectileMovementComp_Offset = offsetof(UTslProjectile_Flare, ProjectileMovementComp);
//	static_assert(UTslProjectile_Flare_ProjectileMovementComp_Offset == 0x408, "UTslProjectile_Flare::ProjectileMovementComp offset is not 408");
	auto constexpr UTslProjectile_Flare_CollisionComp_Offset = offsetof(UTslProjectile_Flare, CollisionComp);
	static_assert(UTslProjectile_Flare_CollisionComp_Offset == 0x410, "UTslProjectile_Flare::CollisionComp offset is not 410");
	auto constexpr UTslProjectile_Flare_DamageRadius_Offset = offsetof(UTslProjectile_Flare, DamageRadius);
	static_assert(UTslProjectile_Flare_DamageRadius_Offset == 0x418, "UTslProjectile_Flare::DamageRadius offset is not 418");
	auto constexpr UTslProjectile_Flare_DebuffTemplate_Offset = offsetof(UTslProjectile_Flare, DebuffTemplate);
	static_assert(UTslProjectile_Flare_DebuffTemplate_Offset == 0x420, "UTslProjectile_Flare::DebuffTemplate offset is not 420");
	auto constexpr UTslProjectile_Flare_HighAltTargetVelocity_Offset = offsetof(UTslProjectile_Flare, HighAltTargetVelocity);
	static_assert(UTslProjectile_Flare_HighAltTargetVelocity_Offset == 0x428, "UTslProjectile_Flare::HighAltTargetVelocity offset is not 428");
	auto constexpr UTslProjectile_Flare_GroundTraceDinstance_Offset = offsetof(UTslProjectile_Flare, GroundTraceDinstance);
	static_assert(UTslProjectile_Flare_GroundTraceDinstance_Offset == 0x434, "UTslProjectile_Flare::GroundTraceDinstance offset is not 434");
	auto constexpr UTslProjectile_Flare_AttenuationScalingCheckDelay_Offset = offsetof(UTslProjectile_Flare, AttenuationScalingCheckDelay);
	static_assert(UTslProjectile_Flare_AttenuationScalingCheckDelay_Offset == 0x438, "UTslProjectile_Flare::AttenuationScalingCheckDelay offset is not 438");
	auto constexpr UTslProjectile_Flare_AttenuationScalingInterpSpeed_Offset = offsetof(UTslProjectile_Flare, AttenuationScalingInterpSpeed);
	static_assert(UTslProjectile_Flare_AttenuationScalingInterpSpeed_Offset == 0x43c, "UTslProjectile_Flare::AttenuationScalingInterpSpeed offset is not 43c");
	auto constexpr UTslProjectile_Flare_AttenuationScalingInterpSpeedInWater_Offset = offsetof(UTslProjectile_Flare, AttenuationScalingInterpSpeedInWater);
	static_assert(UTslProjectile_Flare_AttenuationScalingInterpSpeedInWater_Offset == 0x440, "UTslProjectile_Flare::AttenuationScalingInterpSpeedInWater offset is not 440");
	auto constexpr UTslProjectile_Flare_AttenuationScalingInMap_Offset = offsetof(UTslProjectile_Flare, AttenuationScalingInMap);
	static_assert(UTslProjectile_Flare_AttenuationScalingInMap_Offset == 0x444, "UTslProjectile_Flare::AttenuationScalingInMap offset is not 444");
	auto constexpr UTslProjectile_Flare_AttenuationScalingOutMap_Offset = offsetof(UTslProjectile_Flare, AttenuationScalingOutMap);
	static_assert(UTslProjectile_Flare_AttenuationScalingOutMap_Offset == 0x44c, "UTslProjectile_Flare::AttenuationScalingOutMap offset is not 44c");
	auto constexpr UTslProjectile_Flare_AttenuationScalingUnderWater_Offset = offsetof(UTslProjectile_Flare, AttenuationScalingUnderWater);
	static_assert(UTslProjectile_Flare_AttenuationScalingUnderWater_Offset == 0x454, "UTslProjectile_Flare::AttenuationScalingUnderWater offset is not 454");
	auto constexpr UTslProjectile_Flare_boolField459_Offset = offsetof(UTslProjectile_Flare, boolField459);
	static_assert(UTslProjectile_Flare_boolField459_Offset == 0x459, "UTslProjectile_Flare::boolField459 offset is not 459");
	auto constexpr UTslProjectile_Flare_boolField45A_Offset = offsetof(UTslProjectile_Flare, boolField45A);
	static_assert(UTslProjectile_Flare_boolField45A_Offset == 0x45a, "UTslProjectile_Flare::boolField45A offset is not 45a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
