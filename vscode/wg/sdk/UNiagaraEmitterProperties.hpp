#pragma once
#include "ENiagaraCollisionMode.hpp"
#include "FNiagaraEmitterScriptProperties.hpp"
#include "FNiagaraEventScriptProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNiagaraEmitterProperties // Size: 0x110
	: public UObject // Size: 0x30
{
private:
	typedef UNiagaraEmitterProperties t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(27); // id32("Class Niagara.NiagaraEmitterProperties")
		return ptr;
	}
	float SpawnRate; /* Ofs: 0x30 Size: 0x4 - FloatProperty Niagara.NiagaraEmitterProperties.SpawnRate */
	uint8_t boolField34;
	uint8_t UnknownData35[0x3];
	ExternalPtr<struct UMaterial> Material; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Niagara.NiagaraEmitterProperties.Material */
	float StartTime; /* Ofs: 0x40 Size: 0x4 - FloatProperty Niagara.NiagaraEmitterProperties.StartTime */
	float EndTime; /* Ofs: 0x44 Size: 0x4 - FloatProperty Niagara.NiagaraEmitterProperties.EndTime */
	int32_t NumLoops; /* Ofs: 0x48 Size: 0x4 - IntProperty Niagara.NiagaraEmitterProperties.NumLoops */
	TEnumAsByte<enum ENiagaraCollisionMode> CollisionMode; /* Ofs: 0x4C Size: 0x1 - EnumProperty Niagara.NiagaraEmitterProperties.CollisionMode */
	uint8_t UnknownData4D[0x3];
	ExternalPtr<struct UNiagaraEffectRendererProperties> RendererProperties; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Niagara.NiagaraEmitterProperties.RendererProperties */
	FNiagaraEmitterScriptProperties UpdateScriptProps; /* Ofs: 0x58 Size: 0x28 - StructProperty Niagara.NiagaraEmitterProperties.UpdateScriptProps */
	FNiagaraEmitterScriptProperties SpawnScriptProps; /* Ofs: 0x80 Size: 0x28 - StructProperty Niagara.NiagaraEmitterProperties.SpawnScriptProps */
	FNiagaraEventScriptProperties EventHandlerScriptProps; /* Ofs: 0xA8 Size: 0x50 - StructProperty Niagara.NiagaraEmitterProperties.EventHandlerScriptProps */
	TArray<struct FNiagaraEmitterBurst> Bursts; /* Ofs: 0xF8 Size: 0x10 - ArrayProperty Niagara.NiagaraEmitterProperties.Bursts */
	uint8_t boolField108;
	uint8_t UnknownData109[0x7];


	inline bool SetSpawnRate(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool bLocalSpace()
	{
		return boolField34& 0x1;
	}
	inline bool SetbLocalSpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x38, value); }
	inline bool SetStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetEndTime(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetNumLoops(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
	inline bool SetCollisionMode(t_structHelper inst, TEnumAsByte<enum ENiagaraCollisionMode> value) { inst.WriteOffset(0x4C, value); }
	inline bool SetRendererProperties(t_structHelper inst, ExternalPtr<struct UNiagaraEffectRendererProperties> value) { inst.WriteOffset(0x50, value); }
	inline bool SetUpdateScriptProps(t_structHelper inst, FNiagaraEmitterScriptProperties value) { inst.WriteOffset(0x58, value); }
	inline bool SetSpawnScriptProps(t_structHelper inst, FNiagaraEmitterScriptProperties value) { inst.WriteOffset(0x80, value); }
	inline bool SetEventHandlerScriptProps(t_structHelper inst, FNiagaraEventScriptProperties value) { inst.WriteOffset(0xA8, value); }
	inline bool SetBursts(t_structHelper inst, TArray<struct FNiagaraEmitterBurst> value) { inst.WriteOffset(0xF8, value); }
	inline bool bInterpolatedSpawning()
	{
		return boolField108& 0x1;
	}
	inline bool SetbInterpolatedSpawning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x108, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNiagaraEmitterProperties = sizeof(UNiagaraEmitterProperties); // 272
    static_assert(sizeof(UNiagaraEmitterProperties) == 0x110, "Size of UNiagaraEmitterProperties is not correct.");
	auto constexpr UNiagaraEmitterProperties_SpawnRate_Offset = offsetof(UNiagaraEmitterProperties, SpawnRate);
	static_assert(UNiagaraEmitterProperties_SpawnRate_Offset == 0x30, "UNiagaraEmitterProperties::SpawnRate offset is not 30");
	auto constexpr UNiagaraEmitterProperties_boolField34_Offset = offsetof(UNiagaraEmitterProperties, boolField34);
	static_assert(UNiagaraEmitterProperties_boolField34_Offset == 0x34, "UNiagaraEmitterProperties::boolField34 offset is not 34");
	auto constexpr UNiagaraEmitterProperties_Material_Offset = offsetof(UNiagaraEmitterProperties, Material);
	static_assert(UNiagaraEmitterProperties_Material_Offset == 0x38, "UNiagaraEmitterProperties::Material offset is not 38");
	auto constexpr UNiagaraEmitterProperties_StartTime_Offset = offsetof(UNiagaraEmitterProperties, StartTime);
	static_assert(UNiagaraEmitterProperties_StartTime_Offset == 0x40, "UNiagaraEmitterProperties::StartTime offset is not 40");
	auto constexpr UNiagaraEmitterProperties_EndTime_Offset = offsetof(UNiagaraEmitterProperties, EndTime);
	static_assert(UNiagaraEmitterProperties_EndTime_Offset == 0x44, "UNiagaraEmitterProperties::EndTime offset is not 44");
	auto constexpr UNiagaraEmitterProperties_NumLoops_Offset = offsetof(UNiagaraEmitterProperties, NumLoops);
	static_assert(UNiagaraEmitterProperties_NumLoops_Offset == 0x48, "UNiagaraEmitterProperties::NumLoops offset is not 48");
	auto constexpr UNiagaraEmitterProperties_CollisionMode_Offset = offsetof(UNiagaraEmitterProperties, CollisionMode);
	static_assert(UNiagaraEmitterProperties_CollisionMode_Offset == 0x4c, "UNiagaraEmitterProperties::CollisionMode offset is not 4c");
	auto constexpr UNiagaraEmitterProperties_RendererProperties_Offset = offsetof(UNiagaraEmitterProperties, RendererProperties);
	static_assert(UNiagaraEmitterProperties_RendererProperties_Offset == 0x50, "UNiagaraEmitterProperties::RendererProperties offset is not 50");
	auto constexpr UNiagaraEmitterProperties_UpdateScriptProps_Offset = offsetof(UNiagaraEmitterProperties, UpdateScriptProps);
	static_assert(UNiagaraEmitterProperties_UpdateScriptProps_Offset == 0x58, "UNiagaraEmitterProperties::UpdateScriptProps offset is not 58");
	auto constexpr UNiagaraEmitterProperties_SpawnScriptProps_Offset = offsetof(UNiagaraEmitterProperties, SpawnScriptProps);
	static_assert(UNiagaraEmitterProperties_SpawnScriptProps_Offset == 0x80, "UNiagaraEmitterProperties::SpawnScriptProps offset is not 80");
	auto constexpr UNiagaraEmitterProperties_EventHandlerScriptProps_Offset = offsetof(UNiagaraEmitterProperties, EventHandlerScriptProps);
	static_assert(UNiagaraEmitterProperties_EventHandlerScriptProps_Offset == 0xa8, "UNiagaraEmitterProperties::EventHandlerScriptProps offset is not a8");
	auto constexpr UNiagaraEmitterProperties_Bursts_Offset = offsetof(UNiagaraEmitterProperties, Bursts);
	static_assert(UNiagaraEmitterProperties_Bursts_Offset == 0xf8, "UNiagaraEmitterProperties::Bursts offset is not f8");
	auto constexpr UNiagaraEmitterProperties_boolField108_Offset = offsetof(UNiagaraEmitterProperties, boolField108);
	static_assert(UNiagaraEmitterProperties_boolField108_Offset == 0x108, "UNiagaraEmitterProperties::boolField108 offset is not 108");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
