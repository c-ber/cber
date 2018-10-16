#pragma once
#include "UActor.hpp"
#include "FDecalEffectDataSet.hpp"
#include "FHitResult.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslImpactEffect // Size: 0x7F0
	: public UActor // Size: 0x410
{
private:
	typedef UTslImpactEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1402); // id32("Class TslGame.TslImpactEffect")
		return ptr;
	}
	ExternalPtr<struct UParticleSystem> DefaultFX; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.DefaultFX */
	ExternalPtr<struct UParticleSystem> ConcreteFX; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.ConcreteFX */
	ExternalPtr<struct UParticleSystem> DirtFX; /* Ofs: 0x420 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.DirtFX */
	ExternalPtr<struct UParticleSystem> WaterFX; /* Ofs: 0x428 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.WaterFX */
	ExternalPtr<struct UParticleSystem> MetalFX; /* Ofs: 0x430 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.MetalFX */
	ExternalPtr<struct UParticleSystem> WoodFX; /* Ofs: 0x438 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.WoodFX */
	ExternalPtr<struct UParticleSystem> GlassFX; /* Ofs: 0x440 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.GlassFX */
	ExternalPtr<struct UParticleSystem> GrassFX; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.GrassFX */
	ExternalPtr<struct UParticleSystem> FleshFX; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.FleshFX */
	ExternalPtr<struct UParticleSystem> MudFX; /* Ofs: 0x458 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.MudFX */
	ExternalPtr<struct UParticleSystem> CropsFX; /* Ofs: 0x460 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.CropsFX */
	ExternalPtr<struct UParticleSystem> CactusFX; /* Ofs: 0x468 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.CactusFX */
	ExternalPtr<struct UParticleSystem> PaperFX; /* Ofs: 0x470 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.PaperFX */
	ExternalPtr<struct UParticleSystem> RubberFX; /* Ofs: 0x478 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.RubberFX */
	ExternalPtr<struct UParticleSystem> FabricFX; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.FabricFX */
	ExternalPtr<struct UParticleSystem> SnowFX; /* Ofs: 0x488 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.SnowFX */
	ExternalPtr<struct UParticleSystem> IceFX; /* Ofs: 0x490 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.IceFX */
	ExternalPtr<struct UAkAudioEvent> AkSound; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.AkSound */
	FDecalEffectDataSet DecalEffectDataSet; /* Ofs: 0x4A0 Size: 0x2A8 - StructProperty TslGame.TslImpactEffect.DecalEffectDataSet */
	FHitResult SurfaceHit; /* Ofs: 0x748 Size: 0x88 - StructProperty TslGame.TslImpactEffect.SurfaceHit */
	uint8_t boolField7D0;
	uint8_t UnknownData7D1[0xF];
	ExternalPtr<struct UAkComponent> AKCom; /* Ofs: 0x7E0 Size: 0x8 - ObjectProperty TslGame.TslImpactEffect.AKCom */
	uint8_t UnknownData7E8[0x8];


	inline bool SetDefaultFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x410, value); }
	inline bool SetConcreteFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x418, value); }
	inline bool SetDirtFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x420, value); }
	inline bool SetWaterFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x428, value); }
	inline bool SetMetalFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x430, value); }
	inline bool SetWoodFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x438, value); }
	inline bool SetGlassFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x440, value); }
	inline bool SetGrassFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x448, value); }
	inline bool SetFleshFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x450, value); }
	inline bool SetMudFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x458, value); }
	inline bool SetCropsFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x460, value); }
	inline bool SetCactusFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x468, value); }
	inline bool SetPaperFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x470, value); }
	inline bool SetRubberFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x478, value); }
	inline bool SetFabricFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x480, value); }
	inline bool SetSnowFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x488, value); }
	inline bool SetIceFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x490, value); }
	inline bool SetAkSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x498, value); }
	inline bool SetDecalEffectDataSet(t_structHelper inst, FDecalEffectDataSet value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetSurfaceHit(t_structHelper inst, FHitResult value) { inst.WriteOffset(0x748, value); }
	inline bool bUseParticlePool()
	{
		return boolField7D0& 0x1;
	}
	inline bool SetbUseParticlePool(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAKCom(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x7E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslImpactEffect = sizeof(UTslImpactEffect); // 2032
    static_assert(sizeof(UTslImpactEffect) == 0x7F0, "Size of UTslImpactEffect is not correct.");
	auto constexpr UTslImpactEffect_DefaultFX_Offset = offsetof(UTslImpactEffect, DefaultFX);
	static_assert(UTslImpactEffect_DefaultFX_Offset == 0x410, "UTslImpactEffect::DefaultFX offset is not 410");
	auto constexpr UTslImpactEffect_ConcreteFX_Offset = offsetof(UTslImpactEffect, ConcreteFX);
	static_assert(UTslImpactEffect_ConcreteFX_Offset == 0x418, "UTslImpactEffect::ConcreteFX offset is not 418");
	auto constexpr UTslImpactEffect_DirtFX_Offset = offsetof(UTslImpactEffect, DirtFX);
	static_assert(UTslImpactEffect_DirtFX_Offset == 0x420, "UTslImpactEffect::DirtFX offset is not 420");
	auto constexpr UTslImpactEffect_WaterFX_Offset = offsetof(UTslImpactEffect, WaterFX);
	static_assert(UTslImpactEffect_WaterFX_Offset == 0x428, "UTslImpactEffect::WaterFX offset is not 428");
	auto constexpr UTslImpactEffect_MetalFX_Offset = offsetof(UTslImpactEffect, MetalFX);
	static_assert(UTslImpactEffect_MetalFX_Offset == 0x430, "UTslImpactEffect::MetalFX offset is not 430");
	auto constexpr UTslImpactEffect_WoodFX_Offset = offsetof(UTslImpactEffect, WoodFX);
	static_assert(UTslImpactEffect_WoodFX_Offset == 0x438, "UTslImpactEffect::WoodFX offset is not 438");
	auto constexpr UTslImpactEffect_GlassFX_Offset = offsetof(UTslImpactEffect, GlassFX);
	static_assert(UTslImpactEffect_GlassFX_Offset == 0x440, "UTslImpactEffect::GlassFX offset is not 440");
	auto constexpr UTslImpactEffect_GrassFX_Offset = offsetof(UTslImpactEffect, GrassFX);
	static_assert(UTslImpactEffect_GrassFX_Offset == 0x448, "UTslImpactEffect::GrassFX offset is not 448");
	auto constexpr UTslImpactEffect_FleshFX_Offset = offsetof(UTslImpactEffect, FleshFX);
	static_assert(UTslImpactEffect_FleshFX_Offset == 0x450, "UTslImpactEffect::FleshFX offset is not 450");
	auto constexpr UTslImpactEffect_MudFX_Offset = offsetof(UTslImpactEffect, MudFX);
	static_assert(UTslImpactEffect_MudFX_Offset == 0x458, "UTslImpactEffect::MudFX offset is not 458");
	auto constexpr UTslImpactEffect_CropsFX_Offset = offsetof(UTslImpactEffect, CropsFX);
	static_assert(UTslImpactEffect_CropsFX_Offset == 0x460, "UTslImpactEffect::CropsFX offset is not 460");
	auto constexpr UTslImpactEffect_CactusFX_Offset = offsetof(UTslImpactEffect, CactusFX);
	static_assert(UTslImpactEffect_CactusFX_Offset == 0x468, "UTslImpactEffect::CactusFX offset is not 468");
	auto constexpr UTslImpactEffect_PaperFX_Offset = offsetof(UTslImpactEffect, PaperFX);
	static_assert(UTslImpactEffect_PaperFX_Offset == 0x470, "UTslImpactEffect::PaperFX offset is not 470");
	auto constexpr UTslImpactEffect_RubberFX_Offset = offsetof(UTslImpactEffect, RubberFX);
	static_assert(UTslImpactEffect_RubberFX_Offset == 0x478, "UTslImpactEffect::RubberFX offset is not 478");
	auto constexpr UTslImpactEffect_FabricFX_Offset = offsetof(UTslImpactEffect, FabricFX);
	static_assert(UTslImpactEffect_FabricFX_Offset == 0x480, "UTslImpactEffect::FabricFX offset is not 480");
	auto constexpr UTslImpactEffect_SnowFX_Offset = offsetof(UTslImpactEffect, SnowFX);
	static_assert(UTslImpactEffect_SnowFX_Offset == 0x488, "UTslImpactEffect::SnowFX offset is not 488");
	auto constexpr UTslImpactEffect_IceFX_Offset = offsetof(UTslImpactEffect, IceFX);
	static_assert(UTslImpactEffect_IceFX_Offset == 0x490, "UTslImpactEffect::IceFX offset is not 490");
	auto constexpr UTslImpactEffect_AkSound_Offset = offsetof(UTslImpactEffect, AkSound);
	static_assert(UTslImpactEffect_AkSound_Offset == 0x498, "UTslImpactEffect::AkSound offset is not 498");
	auto constexpr UTslImpactEffect_DecalEffectDataSet_Offset = offsetof(UTslImpactEffect, DecalEffectDataSet);
	static_assert(UTslImpactEffect_DecalEffectDataSet_Offset == 0x4a0, "UTslImpactEffect::DecalEffectDataSet offset is not 4a0");
	auto constexpr UTslImpactEffect_SurfaceHit_Offset = offsetof(UTslImpactEffect, SurfaceHit);
	static_assert(UTslImpactEffect_SurfaceHit_Offset == 0x748, "UTslImpactEffect::SurfaceHit offset is not 748");
	auto constexpr UTslImpactEffect_boolField7D0_Offset = offsetof(UTslImpactEffect, boolField7D0);
	static_assert(UTslImpactEffect_boolField7D0_Offset == 0x7d0, "UTslImpactEffect::boolField7D0 offset is not 7d0");
	auto constexpr UTslImpactEffect_AKCom_Offset = offsetof(UTslImpactEffect, AKCom);
	static_assert(UTslImpactEffect_AKCom_Offset == 0x7e0, "UTslImpactEffect::AKCom offset is not 7e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
