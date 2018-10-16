#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWheelEffectType // Size: 0xD0
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTslWheelEffectType t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(50); // id32("Class TslGame.TslWheelEffectType")
		return ptr;
	}
	ExternalPtr<struct UAkAudioEvent> Sound; /* Ofs: 0x38 Size: 0x8 - ObjectProperty TslGame.TslWheelEffectType.Sound */
	ExternalPtr<struct UClass> DefaultFxClass; /* Ofs: 0x40 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.DefaultFxClass */
	ExternalPtr<struct UClass> ConcreteFxClass; /* Ofs: 0x48 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.ConcreteFxClass */
	ExternalPtr<struct UClass> DirtFxClass; /* Ofs: 0x50 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.DirtFxClass */
	ExternalPtr<struct UClass> WaterFxClass; /* Ofs: 0x58 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.WaterFxClass */
	ExternalPtr<struct UClass> MetalFxClass; /* Ofs: 0x60 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.MetalFxClass */
	ExternalPtr<struct UClass> WoodFxClass; /* Ofs: 0x68 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.WoodFxClass */
	ExternalPtr<struct UClass> GrassFxClass; /* Ofs: 0x70 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.GrassFxClass */
	ExternalPtr<struct UClass> GlassFxClass; /* Ofs: 0x78 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.GlassFxClass */
	ExternalPtr<struct UClass> RockFxClass; /* Ofs: 0x80 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.RockFxClass */
	ExternalPtr<struct UClass> SandFxClass; /* Ofs: 0x88 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.SandFxClass */
	ExternalPtr<struct UClass> SnowFxClass; /* Ofs: 0x90 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.SnowFxClass */
	ExternalPtr<struct UClass> MudFxClass; /* Ofs: 0x98 Size: 0x8 - ClassProperty TslGame.TslWheelEffectType.MudFxClass */
	float DefaultMinSpeed; /* Ofs: 0xA0 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.DefaultMinSpeed */
	float ConcreteMinSpeed; /* Ofs: 0xA4 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.ConcreteMinSpeed */
	float DirtMinSpeed; /* Ofs: 0xA8 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.DirtMinSpeed */
	float WaterMinSpeed; /* Ofs: 0xAC Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.WaterMinSpeed */
	float MetalMinSpeed; /* Ofs: 0xB0 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.MetalMinSpeed */
	float WoodMinSpeed; /* Ofs: 0xB4 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.WoodMinSpeed */
	float GrassMinSpeed; /* Ofs: 0xB8 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.GrassMinSpeed */
	float GlassMinSpeed; /* Ofs: 0xBC Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.GlassMinSpeed */
	float RockMinSpeed; /* Ofs: 0xC0 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.RockMinSpeed */
	float SandMinSpeed; /* Ofs: 0xC4 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.SandMinSpeed */
	float SnowMinSpeed; /* Ofs: 0xC8 Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.SnowMinSpeed */
	float MudMinSpeed; /* Ofs: 0xCC Size: 0x4 - FloatProperty TslGame.TslWheelEffectType.MudMinSpeed */


	inline bool SetSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x38, value); }
	inline bool SetDefaultFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x40, value); }
	inline bool SetConcreteFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x48, value); }
	inline bool SetDirtFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x50, value); }
	inline bool SetWaterFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x58, value); }
	inline bool SetMetalFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x60, value); }
	inline bool SetWoodFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x68, value); }
	inline bool SetGrassFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x70, value); }
	inline bool SetGlassFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x78, value); }
	inline bool SetRockFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x80, value); }
	inline bool SetSandFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x88, value); }
	inline bool SetSnowFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x90, value); }
	inline bool SetMudFxClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x98, value); }
	inline bool SetDefaultMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConcreteMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xA4, value); }
	inline bool SetDirtMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xA8, value); }
	inline bool SetWaterMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xAC, value); }
	inline bool SetMetalMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
	inline bool SetWoodMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xB4, value); }
	inline bool SetGrassMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool SetGlassMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xBC, value); }
	inline bool SetRockMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xC0, value); }
	inline bool SetSandMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xC4, value); }
	inline bool SetSnowMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xC8, value); }
	inline bool SetMudMinSpeed(t_structHelper inst, float value) { inst.WriteOffset(0xCC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWheelEffectType = sizeof(UTslWheelEffectType); // 208
    static_assert(sizeof(UTslWheelEffectType) == 0xD0, "Size of UTslWheelEffectType is not correct.");
	auto constexpr UTslWheelEffectType_Sound_Offset = offsetof(UTslWheelEffectType, Sound);
	static_assert(UTslWheelEffectType_Sound_Offset == 0x38, "UTslWheelEffectType::Sound offset is not 38");
	auto constexpr UTslWheelEffectType_DefaultFxClass_Offset = offsetof(UTslWheelEffectType, DefaultFxClass);
	static_assert(UTslWheelEffectType_DefaultFxClass_Offset == 0x40, "UTslWheelEffectType::DefaultFxClass offset is not 40");
	auto constexpr UTslWheelEffectType_ConcreteFxClass_Offset = offsetof(UTslWheelEffectType, ConcreteFxClass);
	static_assert(UTslWheelEffectType_ConcreteFxClass_Offset == 0x48, "UTslWheelEffectType::ConcreteFxClass offset is not 48");
	auto constexpr UTslWheelEffectType_DirtFxClass_Offset = offsetof(UTslWheelEffectType, DirtFxClass);
	static_assert(UTslWheelEffectType_DirtFxClass_Offset == 0x50, "UTslWheelEffectType::DirtFxClass offset is not 50");
	auto constexpr UTslWheelEffectType_WaterFxClass_Offset = offsetof(UTslWheelEffectType, WaterFxClass);
	static_assert(UTslWheelEffectType_WaterFxClass_Offset == 0x58, "UTslWheelEffectType::WaterFxClass offset is not 58");
	auto constexpr UTslWheelEffectType_MetalFxClass_Offset = offsetof(UTslWheelEffectType, MetalFxClass);
	static_assert(UTslWheelEffectType_MetalFxClass_Offset == 0x60, "UTslWheelEffectType::MetalFxClass offset is not 60");
	auto constexpr UTslWheelEffectType_WoodFxClass_Offset = offsetof(UTslWheelEffectType, WoodFxClass);
	static_assert(UTslWheelEffectType_WoodFxClass_Offset == 0x68, "UTslWheelEffectType::WoodFxClass offset is not 68");
	auto constexpr UTslWheelEffectType_GrassFxClass_Offset = offsetof(UTslWheelEffectType, GrassFxClass);
	static_assert(UTslWheelEffectType_GrassFxClass_Offset == 0x70, "UTslWheelEffectType::GrassFxClass offset is not 70");
	auto constexpr UTslWheelEffectType_GlassFxClass_Offset = offsetof(UTslWheelEffectType, GlassFxClass);
	static_assert(UTslWheelEffectType_GlassFxClass_Offset == 0x78, "UTslWheelEffectType::GlassFxClass offset is not 78");
	auto constexpr UTslWheelEffectType_RockFxClass_Offset = offsetof(UTslWheelEffectType, RockFxClass);
	static_assert(UTslWheelEffectType_RockFxClass_Offset == 0x80, "UTslWheelEffectType::RockFxClass offset is not 80");
	auto constexpr UTslWheelEffectType_SandFxClass_Offset = offsetof(UTslWheelEffectType, SandFxClass);
	static_assert(UTslWheelEffectType_SandFxClass_Offset == 0x88, "UTslWheelEffectType::SandFxClass offset is not 88");
	auto constexpr UTslWheelEffectType_SnowFxClass_Offset = offsetof(UTslWheelEffectType, SnowFxClass);
	static_assert(UTslWheelEffectType_SnowFxClass_Offset == 0x90, "UTslWheelEffectType::SnowFxClass offset is not 90");
	auto constexpr UTslWheelEffectType_MudFxClass_Offset = offsetof(UTslWheelEffectType, MudFxClass);
	static_assert(UTslWheelEffectType_MudFxClass_Offset == 0x98, "UTslWheelEffectType::MudFxClass offset is not 98");
	auto constexpr UTslWheelEffectType_DefaultMinSpeed_Offset = offsetof(UTslWheelEffectType, DefaultMinSpeed);
	static_assert(UTslWheelEffectType_DefaultMinSpeed_Offset == 0xa0, "UTslWheelEffectType::DefaultMinSpeed offset is not a0");
	auto constexpr UTslWheelEffectType_ConcreteMinSpeed_Offset = offsetof(UTslWheelEffectType, ConcreteMinSpeed);
	static_assert(UTslWheelEffectType_ConcreteMinSpeed_Offset == 0xa4, "UTslWheelEffectType::ConcreteMinSpeed offset is not a4");
	auto constexpr UTslWheelEffectType_DirtMinSpeed_Offset = offsetof(UTslWheelEffectType, DirtMinSpeed);
	static_assert(UTslWheelEffectType_DirtMinSpeed_Offset == 0xa8, "UTslWheelEffectType::DirtMinSpeed offset is not a8");
	auto constexpr UTslWheelEffectType_WaterMinSpeed_Offset = offsetof(UTslWheelEffectType, WaterMinSpeed);
	static_assert(UTslWheelEffectType_WaterMinSpeed_Offset == 0xac, "UTslWheelEffectType::WaterMinSpeed offset is not ac");
	auto constexpr UTslWheelEffectType_MetalMinSpeed_Offset = offsetof(UTslWheelEffectType, MetalMinSpeed);
	static_assert(UTslWheelEffectType_MetalMinSpeed_Offset == 0xb0, "UTslWheelEffectType::MetalMinSpeed offset is not b0");
	auto constexpr UTslWheelEffectType_WoodMinSpeed_Offset = offsetof(UTslWheelEffectType, WoodMinSpeed);
	static_assert(UTslWheelEffectType_WoodMinSpeed_Offset == 0xb4, "UTslWheelEffectType::WoodMinSpeed offset is not b4");
	auto constexpr UTslWheelEffectType_GrassMinSpeed_Offset = offsetof(UTslWheelEffectType, GrassMinSpeed);
	static_assert(UTslWheelEffectType_GrassMinSpeed_Offset == 0xb8, "UTslWheelEffectType::GrassMinSpeed offset is not b8");
	auto constexpr UTslWheelEffectType_GlassMinSpeed_Offset = offsetof(UTslWheelEffectType, GlassMinSpeed);
	static_assert(UTslWheelEffectType_GlassMinSpeed_Offset == 0xbc, "UTslWheelEffectType::GlassMinSpeed offset is not bc");
	auto constexpr UTslWheelEffectType_RockMinSpeed_Offset = offsetof(UTslWheelEffectType, RockMinSpeed);
	static_assert(UTslWheelEffectType_RockMinSpeed_Offset == 0xc0, "UTslWheelEffectType::RockMinSpeed offset is not c0");
	auto constexpr UTslWheelEffectType_SandMinSpeed_Offset = offsetof(UTslWheelEffectType, SandMinSpeed);
	static_assert(UTslWheelEffectType_SandMinSpeed_Offset == 0xc4, "UTslWheelEffectType::SandMinSpeed offset is not c4");
	auto constexpr UTslWheelEffectType_SnowMinSpeed_Offset = offsetof(UTslWheelEffectType, SnowMinSpeed);
	static_assert(UTslWheelEffectType_SnowMinSpeed_Offset == 0xc8, "UTslWheelEffectType::SnowMinSpeed offset is not c8");
	auto constexpr UTslWheelEffectType_MudMinSpeed_Offset = offsetof(UTslWheelEffectType, MudMinSpeed);
	static_assert(UTslWheelEffectType_MudMinSpeed_Offset == 0xcc, "UTslWheelEffectType::MudMinSpeed offset is not cc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
