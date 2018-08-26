#pragma once
#include "UTslParticleEnvironment.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Desert_Environment_FallingDebris_01_BP_C // Size: 0x4F8
	: public UTslParticleEnvironment // Size: 0x490
{
private:
	typedef UP_Desert_Environment_FallingDebris_01_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(160278); // id32("BlueprintGeneratedClass P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C")
		return ptr;
	}
	FVector SpawnBoxMax; /* Ofs: 0x490 Size: 0xC - StructProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.SpawnBoxMax */
	FVector SpawnBoxMin; /* Ofs: 0x49C Size: 0xC - StructProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.SpawnBoxMin */
	FVector Color; /* Ofs: 0x4A8 Size: 0xC - StructProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.Color */
	float SpawnRate; /* Ofs: 0x4B4 Size: 0x4 - FloatProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.SpawnRate */
	FVector SizeMax; /* Ofs: 0x4B8 Size: 0xC - StructProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.SizeMax */
	FVector SizeMin; /* Ofs: 0x4C4 Size: 0xC - StructProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.SizeMin */
	FVector VelocityMax; /* Ofs: 0x4D0 Size: 0xC - StructProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.VelocityMax */
	FVector VelocityMin; /* Ofs: 0x4DC Size: 0xC - StructProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.VelocityMin */
	float LifeTime; /* Ofs: 0x4E8 Size: 0x4 - FloatProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.LifeTime */
	float LifeTimeLow; /* Ofs: 0x4EC Size: 0x4 - FloatProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.LifeTimeLow */
	float Alpha; /* Ofs: 0x4F0 Size: 0x4 - FloatProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.Alpha */
	float AlphaLow; /* Ofs: 0x4F4 Size: 0x4 - FloatProperty P_Desert_Environment_FallingDebris_01_BP.P_Desert_Environment_FallingDebris_01_BP_C.AlphaLow */


	inline bool SetSpawnBoxMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x490, value); }
	inline bool SetSpawnBoxMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x49C, value); }
	inline bool SetColor(t_structHelper inst, FVector value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetSpawnRate(t_structHelper inst, float value) { inst.WriteOffset(0x4B4, value); }
	inline bool SetSizeMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetSizeMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4C4, value); }
	inline bool SetVelocityMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetVelocityMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4DC, value); }
	inline bool SetLifeTime(t_structHelper inst, float value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetLifeTimeLow(t_structHelper inst, float value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetAlphaLow(t_structHelper inst, float value) { inst.WriteOffset(0x4F4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Desert_Environment_FallingDebris_01_BP_C = sizeof(UP_Desert_Environment_FallingDebris_01_BP_C); // 1272
    static_assert(sizeof(UP_Desert_Environment_FallingDebris_01_BP_C) == 0x4F8, "Size of UP_Desert_Environment_FallingDebris_01_BP_C is not correct.");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_SpawnBoxMax_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, SpawnBoxMax);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_SpawnBoxMax_Offset == 0x490, "UP_Desert_Environment_FallingDebris_01_BP_C::SpawnBoxMax offset is not 490");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_SpawnBoxMin_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, SpawnBoxMin);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_SpawnBoxMin_Offset == 0x49c, "UP_Desert_Environment_FallingDebris_01_BP_C::SpawnBoxMin offset is not 49c");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_Color_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, Color);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_Color_Offset == 0x4a8, "UP_Desert_Environment_FallingDebris_01_BP_C::Color offset is not 4a8");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_SpawnRate_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, SpawnRate);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_SpawnRate_Offset == 0x4b4, "UP_Desert_Environment_FallingDebris_01_BP_C::SpawnRate offset is not 4b4");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_SizeMax_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, SizeMax);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_SizeMax_Offset == 0x4b8, "UP_Desert_Environment_FallingDebris_01_BP_C::SizeMax offset is not 4b8");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_SizeMin_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, SizeMin);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_SizeMin_Offset == 0x4c4, "UP_Desert_Environment_FallingDebris_01_BP_C::SizeMin offset is not 4c4");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_VelocityMax_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, VelocityMax);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_VelocityMax_Offset == 0x4d0, "UP_Desert_Environment_FallingDebris_01_BP_C::VelocityMax offset is not 4d0");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_VelocityMin_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, VelocityMin);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_VelocityMin_Offset == 0x4dc, "UP_Desert_Environment_FallingDebris_01_BP_C::VelocityMin offset is not 4dc");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_LifeTime_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, LifeTime);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_LifeTime_Offset == 0x4e8, "UP_Desert_Environment_FallingDebris_01_BP_C::LifeTime offset is not 4e8");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_LifeTimeLow_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, LifeTimeLow);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_LifeTimeLow_Offset == 0x4ec, "UP_Desert_Environment_FallingDebris_01_BP_C::LifeTimeLow offset is not 4ec");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_Alpha_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, Alpha);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_Alpha_Offset == 0x4f0, "UP_Desert_Environment_FallingDebris_01_BP_C::Alpha offset is not 4f0");
	auto constexpr UP_Desert_Environment_FallingDebris_01_BP_C_AlphaLow_Offset = offsetof(UP_Desert_Environment_FallingDebris_01_BP_C, AlphaLow);
	static_assert(UP_Desert_Environment_FallingDebris_01_BP_C_AlphaLow_Offset == 0x4f4, "UP_Desert_Environment_FallingDebris_01_BP_C::AlphaLow offset is not 4f4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
