#pragma once
#include "UTslProjectileMolotov.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjMolotov_C // Size: 0x68C
	: public UTslProjectileMolotov // Size: 0x610
{
private:
	typedef UProjMolotov_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128720); // id32("BlueprintGeneratedClass ProjMolotov.ProjMolotov_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x610 Size: 0x8 - StructProperty ProjMolotov.ProjMolotov_C.UberGraphFrame */
	ExternalPtr<struct UCapsuleComponent> PotatoCapsule; /* Ofs: 0x618 Size: 0x8 - ObjectProperty ProjMolotov.ProjMolotov_C.PotatoCapsule */
	ExternalPtr<struct UParticleSystemComponent> ParticleSystem; /* Ofs: 0x620 Size: 0x8 - ObjectProperty ProjMolotov.ProjMolotov_C.ParticleSystem */
	TArray<struct FRotator> InitialTraceArray; /* Ofs: 0x628 Size: 0x10 - ArrayProperty ProjMolotov.ProjMolotov_C.InitialTraceArray */
	uint8_t boolField638;
	uint8_t UnknownData639[0x7];
	TArray<struct FHitResult> ConfirmedHitArray; /* Ofs: 0x640 Size: 0x10 - ArrayProperty ProjMolotov.ProjMolotov_C.ConfirmedHitArray */
	uint8_t boolField650;
	uint8_t UnknownData651[0x7];
	TArray<ExternalPtr<struct USphereComponent>> SpreadCompArray; /* Ofs: 0x658 Size: 0x10 - ArrayProperty ProjMolotov.ProjMolotov_C.SpreadCompArray */
	int32_t SpreadIndex; /* Ofs: 0x668 Size: 0x4 - IntProperty ProjMolotov.ProjMolotov_C.SpreadIndex */
	int32_t DirectionIndex; /* Ofs: 0x66C Size: 0x4 - IntProperty ProjMolotov.ProjMolotov_C.DirectionIndex */
	int32_t StepsPerTick; /* Ofs: 0x670 Size: 0x4 - IntProperty ProjMolotov.ProjMolotov_C.StepsPerTick */
	float SpreadLenXY; /* Ofs: 0x674 Size: 0x4 - FloatProperty ProjMolotov.ProjMolotov_C.SpreadLenXY */
	float SpreadLenZ; /* Ofs: 0x678 Size: 0x4 - FloatProperty ProjMolotov.ProjMolotov_C.SpreadLenZ */
	int32_t ActorSpawnerIndex; /* Ofs: 0x67C Size: 0x4 - IntProperty ProjMolotov.ProjMolotov_C.ActorSpawnerIndex */
	int32_t InstanceCountMax; /* Ofs: 0x680 Size: 0x4 - IntProperty ProjMolotov.ProjMolotov_C.InstanceCountMax */
	int32_t MaterialAdditiveInstanceCount; /* Ofs: 0x684 Size: 0x4 - IntProperty ProjMolotov.ProjMolotov_C.MaterialAdditiveInstanceCount */
	int32_t MaxMaterialAdditiveCount; /* Ofs: 0x688 Size: 0x4 - IntProperty ProjMolotov.ProjMolotov_C.MaxMaterialAdditiveCount */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x610, value); }
	inline bool SetPotatoCapsule(t_structHelper inst, ExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x618, value); }
	inline bool SetParticleSystem(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x620, value); }
	inline bool SetInitialTraceArray(t_structHelper inst, TArray<struct FRotator> value) { inst.WriteOffset(0x628, value); }
	inline bool bInitialTraceComplete()
	{
		return boolField638& 0x1;
	}
	inline bool SetbInitialTraceComplete(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x638, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetConfirmedHitArray(t_structHelper inst, TArray<struct FHitResult> value) { inst.WriteOffset(0x640, value); }
	inline bool bHitArrayProcessed()
	{
		return boolField650& 0x1;
	}
	inline bool SetbHitArrayProcessed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x650, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSpreadCompArray(t_structHelper inst, TArray<ExternalPtr<struct USphereComponent>> value) { inst.WriteOffset(0x658, value); }
	inline bool SetSpreadIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x668, value); }
	inline bool SetDirectionIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x66C, value); }
	inline bool SetStepsPerTick(t_structHelper inst, int32_t value) { inst.WriteOffset(0x670, value); }
	inline bool SetSpreadLenXY(t_structHelper inst, float value) { inst.WriteOffset(0x674, value); }
	inline bool SetSpreadLenZ(t_structHelper inst, float value) { inst.WriteOffset(0x678, value); }
	inline bool SetActorSpawnerIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x67C, value); }
	inline bool SetInstanceCountMax(t_structHelper inst, int32_t value) { inst.WriteOffset(0x680, value); }
	inline bool SetMaterialAdditiveInstanceCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x684, value); }
	inline bool SetMaxMaterialAdditiveCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x688, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjMolotov_C = sizeof(UProjMolotov_C); // 1676
    static_assert(sizeof(UProjMolotov_C) == 0x68C, "Size of UProjMolotov_C is not correct.");
	auto constexpr UProjMolotov_C_UberGraphFrame_Offset = offsetof(UProjMolotov_C, UberGraphFrame);
	static_assert(UProjMolotov_C_UberGraphFrame_Offset == 0x610, "UProjMolotov_C::UberGraphFrame offset is not 610");
	auto constexpr UProjMolotov_C_PotatoCapsule_Offset = offsetof(UProjMolotov_C, PotatoCapsule);
	static_assert(UProjMolotov_C_PotatoCapsule_Offset == 0x618, "UProjMolotov_C::PotatoCapsule offset is not 618");
	auto constexpr UProjMolotov_C_ParticleSystem_Offset = offsetof(UProjMolotov_C, ParticleSystem);
	static_assert(UProjMolotov_C_ParticleSystem_Offset == 0x620, "UProjMolotov_C::ParticleSystem offset is not 620");
	auto constexpr UProjMolotov_C_InitialTraceArray_Offset = offsetof(UProjMolotov_C, InitialTraceArray);
	static_assert(UProjMolotov_C_InitialTraceArray_Offset == 0x628, "UProjMolotov_C::InitialTraceArray offset is not 628");
	auto constexpr UProjMolotov_C_boolField638_Offset = offsetof(UProjMolotov_C, boolField638);
	static_assert(UProjMolotov_C_boolField638_Offset == 0x638, "UProjMolotov_C::boolField638 offset is not 638");
	auto constexpr UProjMolotov_C_ConfirmedHitArray_Offset = offsetof(UProjMolotov_C, ConfirmedHitArray);
	static_assert(UProjMolotov_C_ConfirmedHitArray_Offset == 0x640, "UProjMolotov_C::ConfirmedHitArray offset is not 640");
	auto constexpr UProjMolotov_C_boolField650_Offset = offsetof(UProjMolotov_C, boolField650);
	static_assert(UProjMolotov_C_boolField650_Offset == 0x650, "UProjMolotov_C::boolField650 offset is not 650");
	auto constexpr UProjMolotov_C_SpreadCompArray_Offset = offsetof(UProjMolotov_C, SpreadCompArray);
	static_assert(UProjMolotov_C_SpreadCompArray_Offset == 0x658, "UProjMolotov_C::SpreadCompArray offset is not 658");
	auto constexpr UProjMolotov_C_SpreadIndex_Offset = offsetof(UProjMolotov_C, SpreadIndex);
	static_assert(UProjMolotov_C_SpreadIndex_Offset == 0x668, "UProjMolotov_C::SpreadIndex offset is not 668");
	auto constexpr UProjMolotov_C_DirectionIndex_Offset = offsetof(UProjMolotov_C, DirectionIndex);
	static_assert(UProjMolotov_C_DirectionIndex_Offset == 0x66c, "UProjMolotov_C::DirectionIndex offset is not 66c");
	auto constexpr UProjMolotov_C_StepsPerTick_Offset = offsetof(UProjMolotov_C, StepsPerTick);
	static_assert(UProjMolotov_C_StepsPerTick_Offset == 0x670, "UProjMolotov_C::StepsPerTick offset is not 670");
	auto constexpr UProjMolotov_C_SpreadLenXY_Offset = offsetof(UProjMolotov_C, SpreadLenXY);
	static_assert(UProjMolotov_C_SpreadLenXY_Offset == 0x674, "UProjMolotov_C::SpreadLenXY offset is not 674");
	auto constexpr UProjMolotov_C_SpreadLenZ_Offset = offsetof(UProjMolotov_C, SpreadLenZ);
	static_assert(UProjMolotov_C_SpreadLenZ_Offset == 0x678, "UProjMolotov_C::SpreadLenZ offset is not 678");
	auto constexpr UProjMolotov_C_ActorSpawnerIndex_Offset = offsetof(UProjMolotov_C, ActorSpawnerIndex);
	static_assert(UProjMolotov_C_ActorSpawnerIndex_Offset == 0x67c, "UProjMolotov_C::ActorSpawnerIndex offset is not 67c");
	auto constexpr UProjMolotov_C_InstanceCountMax_Offset = offsetof(UProjMolotov_C, InstanceCountMax);
	static_assert(UProjMolotov_C_InstanceCountMax_Offset == 0x680, "UProjMolotov_C::InstanceCountMax offset is not 680");
	auto constexpr UProjMolotov_C_MaterialAdditiveInstanceCount_Offset = offsetof(UProjMolotov_C, MaterialAdditiveInstanceCount);
	static_assert(UProjMolotov_C_MaterialAdditiveInstanceCount_Offset == 0x684, "UProjMolotov_C::MaterialAdditiveInstanceCount offset is not 684");
	auto constexpr UProjMolotov_C_MaxMaterialAdditiveCount_Offset = offsetof(UProjMolotov_C, MaxMaterialAdditiveCount);
	static_assert(UProjMolotov_C_MaxMaterialAdditiveCount_Offset == 0x688, "UProjMolotov_C::MaxMaterialAdditiveCount offset is not 688");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
