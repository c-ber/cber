#pragma once
#include "UTslProjectile.hpp"
#include "EMolotovSimulationType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslProjectileMolotov // Size: 0x610
	: public UTslProjectile // Size: 0x5B0
{
private:
	typedef UTslProjectileMolotov t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1484); // id32("Class TslGame.TslProjectileMolotov")
		return ptr;
	}
	TEnumAsByte<enum EMolotovSimulationType> MolotovSimulation; /* Ofs: 0x5B0 Size: 0x1 - EnumProperty TslGame.TslProjectileMolotov.MolotovSimulation */
	uint8_t UnknownData5B1[0x3];
	float SimulationTickTime; /* Ofs: 0x5B4 Size: 0x4 - FloatProperty TslGame.TslProjectileMolotov.SimulationTickTime */
	ExternalPtr<struct UClass> EffectControllerClass; /* Ofs: 0x5B8 Size: 0x8 - ClassProperty TslGame.TslProjectileMolotov.EffectControllerClass */
	ExternalPtr<struct UClass> DamageFieldContainerTemplate; /* Ofs: 0x5C0 Size: 0x8 - ClassProperty TslGame.TslProjectileMolotov.DamageFieldContainerTemplate */
	ExternalPtr<struct UClass> DamageFieldContainerInWallTemplate; /* Ofs: 0x5C8 Size: 0x8 - ClassProperty TslGame.TslProjectileMolotov.DamageFieldContainerInWallTemplate */
	ExternalPtr<struct UClass> DamageFieldTemplate; /* Ofs: 0x5D0 Size: 0x8 - ClassProperty TslGame.TslProjectileMolotov.DamageFieldTemplate */
	ExternalPtr<struct UClass> DamageFieldTemplateInWall; /* Ofs: 0x5D8 Size: 0x8 - ClassProperty TslGame.TslProjectileMolotov.DamageFieldTemplateInWall */
	ExternalPtr<struct UClass> FragmentProjectileClass; /* Ofs: 0x5E0 Size: 0x8 - ClassProperty TslGame.TslProjectileMolotov.FragmentProjectileClass */
	int32_t ImpactMaxCount; /* Ofs: 0x5E8 Size: 0x4 - IntProperty TslGame.TslProjectileMolotov.ImpactMaxCount */
	uint8_t UnknownData5EC[0x24];


	inline bool SetMolotovSimulation(t_structHelper inst, TEnumAsByte<enum EMolotovSimulationType> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetSimulationTickTime(t_structHelper inst, float value) { inst.WriteOffset(0x5B4, value); }
	inline bool SetEffectControllerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetDamageFieldContainerTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetDamageFieldContainerInWallTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetDamageFieldTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetDamageFieldTemplateInWall(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetFragmentProjectileClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetImpactMaxCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslProjectileMolotov = sizeof(UTslProjectileMolotov); // 1552
    static_assert(sizeof(UTslProjectileMolotov) == 0x610, "Size of UTslProjectileMolotov is not correct.");
	auto constexpr UTslProjectileMolotov_MolotovSimulation_Offset = offsetof(UTslProjectileMolotov, MolotovSimulation);
	static_assert(UTslProjectileMolotov_MolotovSimulation_Offset == 0x5b0, "UTslProjectileMolotov::MolotovSimulation offset is not 5b0");
	auto constexpr UTslProjectileMolotov_SimulationTickTime_Offset = offsetof(UTslProjectileMolotov, SimulationTickTime);
	static_assert(UTslProjectileMolotov_SimulationTickTime_Offset == 0x5b4, "UTslProjectileMolotov::SimulationTickTime offset is not 5b4");
	auto constexpr UTslProjectileMolotov_EffectControllerClass_Offset = offsetof(UTslProjectileMolotov, EffectControllerClass);
	static_assert(UTslProjectileMolotov_EffectControllerClass_Offset == 0x5b8, "UTslProjectileMolotov::EffectControllerClass offset is not 5b8");
	auto constexpr UTslProjectileMolotov_DamageFieldContainerTemplate_Offset = offsetof(UTslProjectileMolotov, DamageFieldContainerTemplate);
	static_assert(UTslProjectileMolotov_DamageFieldContainerTemplate_Offset == 0x5c0, "UTslProjectileMolotov::DamageFieldContainerTemplate offset is not 5c0");
	auto constexpr UTslProjectileMolotov_DamageFieldContainerInWallTemplate_Offset = offsetof(UTslProjectileMolotov, DamageFieldContainerInWallTemplate);
	static_assert(UTslProjectileMolotov_DamageFieldContainerInWallTemplate_Offset == 0x5c8, "UTslProjectileMolotov::DamageFieldContainerInWallTemplate offset is not 5c8");
	auto constexpr UTslProjectileMolotov_DamageFieldTemplate_Offset = offsetof(UTslProjectileMolotov, DamageFieldTemplate);
	static_assert(UTslProjectileMolotov_DamageFieldTemplate_Offset == 0x5d0, "UTslProjectileMolotov::DamageFieldTemplate offset is not 5d0");
	auto constexpr UTslProjectileMolotov_DamageFieldTemplateInWall_Offset = offsetof(UTslProjectileMolotov, DamageFieldTemplateInWall);
	static_assert(UTslProjectileMolotov_DamageFieldTemplateInWall_Offset == 0x5d8, "UTslProjectileMolotov::DamageFieldTemplateInWall offset is not 5d8");
	auto constexpr UTslProjectileMolotov_FragmentProjectileClass_Offset = offsetof(UTslProjectileMolotov, FragmentProjectileClass);
	static_assert(UTslProjectileMolotov_FragmentProjectileClass_Offset == 0x5e0, "UTslProjectileMolotov::FragmentProjectileClass offset is not 5e0");
	auto constexpr UTslProjectileMolotov_ImpactMaxCount_Offset = offsetof(UTslProjectileMolotov, ImpactMaxCount);
	static_assert(UTslProjectileMolotov_ImpactMaxCount_Offset == 0x5e8, "UTslProjectileMolotov::ImpactMaxCount offset is not 5e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
