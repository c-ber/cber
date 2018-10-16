#pragma once
#include "UTslParticleEnvironment.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C // Size: 0x4FC
	: public UTslParticleEnvironment // Size: 0x490
{
private:
	typedef UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(196990); // id32("BlueprintGeneratedClass P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C")
		return ptr;
	}
	FVector SpawnBoxMax; /* Ofs: 0x490 Size: 0xC - StructProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.SpawnBoxMax */
	FVector SpawnBoxMin; /* Ofs: 0x49C Size: 0xC - StructProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.SpawnBoxMin */
	FVector Color; /* Ofs: 0x4A8 Size: 0xC - StructProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.Color */
	float SpawnRate; /* Ofs: 0x4B4 Size: 0x4 - FloatProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.SpawnRate */
	float SpawnRateLow; /* Ofs: 0x4B8 Size: 0x4 - FloatProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.SpawnRateLow */
	FVector SizeMax; /* Ofs: 0x4BC Size: 0xC - StructProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.SizeMax */
	FVector SizeMin; /* Ofs: 0x4C8 Size: 0xC - StructProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.SizeMin */
	FVector VelocityMax; /* Ofs: 0x4D4 Size: 0xC - StructProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.VelocityMax */
	FVector VelocityMin; /* Ofs: 0x4E0 Size: 0xC - StructProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.VelocityMin */
	float LifeTime; /* Ofs: 0x4EC Size: 0x4 - FloatProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.LifeTime */
	float LifeTimeLow; /* Ofs: 0x4F0 Size: 0x4 - FloatProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.LifeTimeLow */
	float Alpha; /* Ofs: 0x4F4 Size: 0x4 - FloatProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.Alpha */
	float AlphaLow; /* Ofs: 0x4F8 Size: 0x4 - FloatProperty P_Desert_Environment_WaterDrop_Ceiling_01_BP.P_Desert_Environment_WaterDrop_Ceiling_01_BP_C.AlphaLow */


	inline bool SetSpawnBoxMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x490, value); }
	inline bool SetSpawnBoxMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x49C, value); }
	inline bool SetColor(t_structHelper inst, FVector value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetSpawnRate(t_structHelper inst, float value) { inst.WriteOffset(0x4B4, value); }
	inline bool SetSpawnRateLow(t_structHelper inst, float value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetSizeMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x4BC, value); }
	inline bool SetSizeMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetVelocityMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetVelocityMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetLifeTime(t_structHelper inst, float value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetLifeTimeLow(t_structHelper inst, float value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x4F4, value); }
	inline bool SetAlphaLow(t_structHelper inst, float value) { inst.WriteOffset(0x4F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Desert_Environment_WaterDrop_Ceiling_01_BP_C = sizeof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C); // 1276
    static_assert(sizeof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C) == 0x4FC, "Size of UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C is not correct.");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SpawnBoxMax_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, SpawnBoxMax);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SpawnBoxMax_Offset == 0x490, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::SpawnBoxMax offset is not 490");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SpawnBoxMin_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, SpawnBoxMin);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SpawnBoxMin_Offset == 0x49c, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::SpawnBoxMin offset is not 49c");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_Color_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, Color);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_Color_Offset == 0x4a8, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::Color offset is not 4a8");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SpawnRate_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, SpawnRate);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SpawnRate_Offset == 0x4b4, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::SpawnRate offset is not 4b4");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SpawnRateLow_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, SpawnRateLow);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SpawnRateLow_Offset == 0x4b8, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::SpawnRateLow offset is not 4b8");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SizeMax_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, SizeMax);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SizeMax_Offset == 0x4bc, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::SizeMax offset is not 4bc");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SizeMin_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, SizeMin);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_SizeMin_Offset == 0x4c8, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::SizeMin offset is not 4c8");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_VelocityMax_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, VelocityMax);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_VelocityMax_Offset == 0x4d4, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::VelocityMax offset is not 4d4");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_VelocityMin_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, VelocityMin);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_VelocityMin_Offset == 0x4e0, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::VelocityMin offset is not 4e0");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_LifeTime_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, LifeTime);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_LifeTime_Offset == 0x4ec, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::LifeTime offset is not 4ec");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_LifeTimeLow_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, LifeTimeLow);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_LifeTimeLow_Offset == 0x4f0, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::LifeTimeLow offset is not 4f0");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_Alpha_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, Alpha);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_Alpha_Offset == 0x4f4, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::Alpha offset is not 4f4");
	auto constexpr UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_AlphaLow_Offset = offsetof(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C, AlphaLow);
	static_assert(UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C_AlphaLow_Offset == 0x4f8, "UP_Desert_Environment_WaterDrop_Ceiling_01_BP_C::AlphaLow offset is not 4f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
