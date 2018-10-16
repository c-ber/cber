#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleLODLevel // Size: 0xC0
	: public UObject // Size: 0x30
{
private:
	typedef UParticleLODLevel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1052); // id32("Class Engine.ParticleLODLevel")
		return ptr;
	}
	int32_t Level; /* Ofs: 0x30 Size: 0x4 - IntProperty Engine.ParticleLODLevel.Level */
	uint8_t boolField34;
	uint8_t UnknownData35[0x3];
	ExternalPtr<struct UParticleModuleRequired> RequiredModule; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.ParticleLODLevel.RequiredModule */
	TArray<ExternalPtr<struct UParticleModule>> Modules; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.ParticleLODLevel.Modules */
	ExternalPtr<struct UParticleModuleTypeDataBase> TypeDataModule; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Engine.ParticleLODLevel.TypeDataModule */
	ExternalPtr<struct UParticleModuleSpawn> SpawnModule; /* Ofs: 0x58 Size: 0x8 - ObjectProperty Engine.ParticleLODLevel.SpawnModule */
	ExternalPtr<struct UParticleModuleEventGenerator> EventGenerator; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.ParticleLODLevel.EventGenerator */
	TArray<ExternalPtr<struct UParticleModuleSpawnBase>> SpawningModules; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Engine.ParticleLODLevel.SpawningModules */
	TArray<ExternalPtr<struct UParticleModule>> SpawnModules; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.ParticleLODLevel.SpawnModules */
	TArray<ExternalPtr<struct UParticleModule>> UpdateModules; /* Ofs: 0x88 Size: 0x10 - ArrayProperty Engine.ParticleLODLevel.UpdateModules */
	TArray<ExternalPtr<struct UParticleModuleOrbit>> OrbitModules; /* Ofs: 0x98 Size: 0x10 - ArrayProperty Engine.ParticleLODLevel.OrbitModules */
	TArray<ExternalPtr<struct UParticleModuleEventReceiverBase>> EventReceiverModules; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty Engine.ParticleLODLevel.EventReceiverModules */
	uint8_t boolFieldB8;
	uint8_t UnknownDataB9[0x3];
	int32_t PeakActiveParticles; /* Ofs: 0xBC Size: 0x4 - IntProperty Engine.ParticleLODLevel.PeakActiveParticles */


	inline bool SetLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool bEnabled()
	{
		return boolField34& 0x1;
	}
	inline bool SetbEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRequiredModule(t_structHelper inst, ExternalPtr<struct UParticleModuleRequired> value) { inst.WriteOffset(0x38, value); }
	inline bool SetModules(t_structHelper inst, TArray<ExternalPtr<struct UParticleModule>> value) { inst.WriteOffset(0x40, value); }
	inline bool SetTypeDataModule(t_structHelper inst, ExternalPtr<struct UParticleModuleTypeDataBase> value) { inst.WriteOffset(0x50, value); }
	inline bool SetSpawnModule(t_structHelper inst, ExternalPtr<struct UParticleModuleSpawn> value) { inst.WriteOffset(0x58, value); }
	inline bool SetEventGenerator(t_structHelper inst, ExternalPtr<struct UParticleModuleEventGenerator> value) { inst.WriteOffset(0x60, value); }
	inline bool SetSpawningModules(t_structHelper inst, TArray<ExternalPtr<struct UParticleModuleSpawnBase>> value) { inst.WriteOffset(0x68, value); }
	inline bool SetSpawnModules(t_structHelper inst, TArray<ExternalPtr<struct UParticleModule>> value) { inst.WriteOffset(0x78, value); }
	inline bool SetUpdateModules(t_structHelper inst, TArray<ExternalPtr<struct UParticleModule>> value) { inst.WriteOffset(0x88, value); }
	inline bool SetOrbitModules(t_structHelper inst, TArray<ExternalPtr<struct UParticleModuleOrbit>> value) { inst.WriteOffset(0x98, value); }
	inline bool SetEventReceiverModules(t_structHelper inst, TArray<ExternalPtr<struct UParticleModuleEventReceiverBase>> value) { inst.WriteOffset(0xA8, value); }
	inline bool ConvertedModules()
	{
		return boolFieldB8& 0x1;
	}
	inline bool SetConvertedModules(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPeakActiveParticles(t_structHelper inst, int32_t value) { inst.WriteOffset(0xBC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleLODLevel = sizeof(UParticleLODLevel); // 192
    static_assert(sizeof(UParticleLODLevel) == 0xC0, "Size of UParticleLODLevel is not correct.");
	auto constexpr UParticleLODLevel_Level_Offset = offsetof(UParticleLODLevel, Level);
	static_assert(UParticleLODLevel_Level_Offset == 0x30, "UParticleLODLevel::Level offset is not 30");
	auto constexpr UParticleLODLevel_boolField34_Offset = offsetof(UParticleLODLevel, boolField34);
	static_assert(UParticleLODLevel_boolField34_Offset == 0x34, "UParticleLODLevel::boolField34 offset is not 34");
	auto constexpr UParticleLODLevel_RequiredModule_Offset = offsetof(UParticleLODLevel, RequiredModule);
	static_assert(UParticleLODLevel_RequiredModule_Offset == 0x38, "UParticleLODLevel::RequiredModule offset is not 38");
	auto constexpr UParticleLODLevel_Modules_Offset = offsetof(UParticleLODLevel, Modules);
	static_assert(UParticleLODLevel_Modules_Offset == 0x40, "UParticleLODLevel::Modules offset is not 40");
	auto constexpr UParticleLODLevel_TypeDataModule_Offset = offsetof(UParticleLODLevel, TypeDataModule);
	static_assert(UParticleLODLevel_TypeDataModule_Offset == 0x50, "UParticleLODLevel::TypeDataModule offset is not 50");
	auto constexpr UParticleLODLevel_SpawnModule_Offset = offsetof(UParticleLODLevel, SpawnModule);
	static_assert(UParticleLODLevel_SpawnModule_Offset == 0x58, "UParticleLODLevel::SpawnModule offset is not 58");
	auto constexpr UParticleLODLevel_EventGenerator_Offset = offsetof(UParticleLODLevel, EventGenerator);
	static_assert(UParticleLODLevel_EventGenerator_Offset == 0x60, "UParticleLODLevel::EventGenerator offset is not 60");
	auto constexpr UParticleLODLevel_SpawningModules_Offset = offsetof(UParticleLODLevel, SpawningModules);
	static_assert(UParticleLODLevel_SpawningModules_Offset == 0x68, "UParticleLODLevel::SpawningModules offset is not 68");
	auto constexpr UParticleLODLevel_SpawnModules_Offset = offsetof(UParticleLODLevel, SpawnModules);
	static_assert(UParticleLODLevel_SpawnModules_Offset == 0x78, "UParticleLODLevel::SpawnModules offset is not 78");
	auto constexpr UParticleLODLevel_UpdateModules_Offset = offsetof(UParticleLODLevel, UpdateModules);
	static_assert(UParticleLODLevel_UpdateModules_Offset == 0x88, "UParticleLODLevel::UpdateModules offset is not 88");
	auto constexpr UParticleLODLevel_OrbitModules_Offset = offsetof(UParticleLODLevel, OrbitModules);
	static_assert(UParticleLODLevel_OrbitModules_Offset == 0x98, "UParticleLODLevel::OrbitModules offset is not 98");
	auto constexpr UParticleLODLevel_EventReceiverModules_Offset = offsetof(UParticleLODLevel, EventReceiverModules);
	static_assert(UParticleLODLevel_EventReceiverModules_Offset == 0xa8, "UParticleLODLevel::EventReceiverModules offset is not a8");
	auto constexpr UParticleLODLevel_boolFieldB8_Offset = offsetof(UParticleLODLevel, boolFieldB8);
	static_assert(UParticleLODLevel_boolFieldB8_Offset == 0xb8, "UParticleLODLevel::boolFieldB8 offset is not b8");
	auto constexpr UParticleLODLevel_PeakActiveParticles_Offset = offsetof(UParticleLODLevel, PeakActiveParticles);
	static_assert(UParticleLODLevel_PeakActiveParticles_Offset == 0xbc, "UParticleLODLevel::PeakActiveParticles offset is not bc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
