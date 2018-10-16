#pragma once
#include "UActor.hpp"
#include "FDecalEffectDataSet.hpp"
#include "FHitResult.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslExplosionEffect // Size: 0x770
	: public UActor // Size: 0x410
{
private:
	typedef UTslExplosionEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1374); // id32("Class TslGame.TslExplosionEffect")
		return ptr;
	}
//	ExternalPtr<struct UParticleSystem> ExplosionFX; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslExplosionEffect.ExplosionFX */
	ExternalPtr<struct UPointLightComponent> ExplosionLight; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslExplosionEffect.ExplosionLight */
	float ExplosionLightFadeOut; /* Ofs: 0x418 Size: 0x4 - FloatProperty TslGame.TslExplosionEffect.ExplosionLightFadeOut */
	uint8_t UnknownData41C[0x4];
	ExternalPtr<struct UAkAudioEvent> ExplosionSound; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.TslExplosionEffect.ExplosionSound */
	FDecalEffectDataSet DecalEffectDataSet; /* Ofs: 0x428 Size: 0x2A8 - StructProperty TslGame.TslExplosionEffect.DecalEffectDataSet */
	float DecalSpawnDelayTime; /* Ofs: 0x6D0 Size: 0x4 - FloatProperty TslGame.TslExplosionEffect.DecalSpawnDelayTime */
	uint8_t UnknownData6D4[0x4];
	FHitResult SurfaceHit; /* Ofs: 0x6D8 Size: 0x88 - StructProperty TslGame.TslExplosionEffect.SurfaceHit */
	uint8_t UnknownData760[0x10];


//	inline bool SetExplosionFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x408, value); }
	inline bool SetExplosionLight(t_structHelper inst, ExternalPtr<struct UPointLightComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetExplosionLightFadeOut(t_structHelper inst, float value) { inst.WriteOffset(0x418, value); }
	inline bool SetExplosionSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetDecalEffectDataSet(t_structHelper inst, FDecalEffectDataSet value) { inst.WriteOffset(0x428, value); }
	inline bool SetDecalSpawnDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x6D0, value); }
	inline bool SetSurfaceHit(t_structHelper inst, FHitResult value) { inst.WriteOffset(0x6D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslExplosionEffect = sizeof(UTslExplosionEffect); // 1904
    static_assert(sizeof(UTslExplosionEffect) == 0x770, "Size of UTslExplosionEffect is not correct.");
//	auto constexpr UTslExplosionEffect_ExplosionFX_Offset = offsetof(UTslExplosionEffect, ExplosionFX);
//	static_assert(UTslExplosionEffect_ExplosionFX_Offset == 0x408, "UTslExplosionEffect::ExplosionFX offset is not 408");
	auto constexpr UTslExplosionEffect_ExplosionLight_Offset = offsetof(UTslExplosionEffect, ExplosionLight);
	static_assert(UTslExplosionEffect_ExplosionLight_Offset == 0x410, "UTslExplosionEffect::ExplosionLight offset is not 410");
	auto constexpr UTslExplosionEffect_ExplosionLightFadeOut_Offset = offsetof(UTslExplosionEffect, ExplosionLightFadeOut);
	static_assert(UTslExplosionEffect_ExplosionLightFadeOut_Offset == 0x418, "UTslExplosionEffect::ExplosionLightFadeOut offset is not 418");
	auto constexpr UTslExplosionEffect_ExplosionSound_Offset = offsetof(UTslExplosionEffect, ExplosionSound);
	static_assert(UTslExplosionEffect_ExplosionSound_Offset == 0x420, "UTslExplosionEffect::ExplosionSound offset is not 420");
	auto constexpr UTslExplosionEffect_DecalEffectDataSet_Offset = offsetof(UTslExplosionEffect, DecalEffectDataSet);
	static_assert(UTslExplosionEffect_DecalEffectDataSet_Offset == 0x428, "UTslExplosionEffect::DecalEffectDataSet offset is not 428");
	auto constexpr UTslExplosionEffect_DecalSpawnDelayTime_Offset = offsetof(UTslExplosionEffect, DecalSpawnDelayTime);
	static_assert(UTslExplosionEffect_DecalSpawnDelayTime_Offset == 0x6d0, "UTslExplosionEffect::DecalSpawnDelayTime offset is not 6d0");
	auto constexpr UTslExplosionEffect_SurfaceHit_Offset = offsetof(UTslExplosionEffect, SurfaceHit);
	static_assert(UTslExplosionEffect_SurfaceHit_Offset == 0x6d8, "UTslExplosionEffect::SurfaceHit offset is not 6d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
