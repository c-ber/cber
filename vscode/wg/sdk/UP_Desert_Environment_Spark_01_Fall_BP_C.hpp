#pragma once
#include "UTslParticleEnvironment.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Desert_Environment_Spark_01_Fall_BP_C // Size: 0x500
	: public UTslParticleEnvironment // Size: 0x490
{
private:
	typedef UP_Desert_Environment_Spark_01_Fall_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(217991); // id32("BlueprintGeneratedClass P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x490 Size: 0x8 - StructProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.UberGraphFrame */
	FVector SpawnBoxMax; /* Ofs: 0x498 Size: 0xC - StructProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.SpawnBoxMax */
	FVector SpawnBoxMin; /* Ofs: 0x4A4 Size: 0xC - StructProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.SpawnBoxMin */
	FVector Color; /* Ofs: 0x4B0 Size: 0xC - StructProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.Color */
	float SpawnRate; /* Ofs: 0x4BC Size: 0x4 - FloatProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.SpawnRate */
	FVector SizeMax; /* Ofs: 0x4C0 Size: 0xC - StructProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.SizeMax */
	FVector SizeMin; /* Ofs: 0x4CC Size: 0xC - StructProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.SizeMin */
	FVector VelocityMax; /* Ofs: 0x4D8 Size: 0xC - StructProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.VelocityMax */
	FVector VelocityMin; /* Ofs: 0x4E4 Size: 0xC - StructProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.VelocityMin */
	float LifeTime; /* Ofs: 0x4F0 Size: 0x4 - FloatProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.LifeTime */
	float LifeTimeLow; /* Ofs: 0x4F4 Size: 0x4 - FloatProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.LifeTimeLow */
	ExternalPtr<struct UAkAudioEvent> SparkSoundAk; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty P_Desert_Environment_Spark_01_Fall_BP.P_Desert_Environment_Spark_01_Fall_BP_C.SparkSoundAk */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x490, value); }
	inline bool SetSpawnBoxMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x498, value); }
	inline bool SetSpawnBoxMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetColor(t_structHelper inst, FVector value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetSpawnRate(t_structHelper inst, float value) { inst.WriteOffset(0x4BC, value); }
	inline bool SetSizeMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetSizeMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4CC, value); }
	inline bool SetVelocityMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetVelocityMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4E4, value); }
	inline bool SetLifeTime(t_structHelper inst, float value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetLifeTimeLow(t_structHelper inst, float value) { inst.WriteOffset(0x4F4, value); }
	inline bool SetSparkSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Desert_Environment_Spark_01_Fall_BP_C = sizeof(UP_Desert_Environment_Spark_01_Fall_BP_C); // 1280
    static_assert(sizeof(UP_Desert_Environment_Spark_01_Fall_BP_C) == 0x500, "Size of UP_Desert_Environment_Spark_01_Fall_BP_C is not correct.");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_UberGraphFrame_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, UberGraphFrame);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_UberGraphFrame_Offset == 0x490, "UP_Desert_Environment_Spark_01_Fall_BP_C::UberGraphFrame offset is not 490");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_SpawnBoxMax_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, SpawnBoxMax);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_SpawnBoxMax_Offset == 0x498, "UP_Desert_Environment_Spark_01_Fall_BP_C::SpawnBoxMax offset is not 498");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_SpawnBoxMin_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, SpawnBoxMin);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_SpawnBoxMin_Offset == 0x4a4, "UP_Desert_Environment_Spark_01_Fall_BP_C::SpawnBoxMin offset is not 4a4");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_Color_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, Color);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_Color_Offset == 0x4b0, "UP_Desert_Environment_Spark_01_Fall_BP_C::Color offset is not 4b0");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_SpawnRate_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, SpawnRate);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_SpawnRate_Offset == 0x4bc, "UP_Desert_Environment_Spark_01_Fall_BP_C::SpawnRate offset is not 4bc");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_SizeMax_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, SizeMax);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_SizeMax_Offset == 0x4c0, "UP_Desert_Environment_Spark_01_Fall_BP_C::SizeMax offset is not 4c0");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_SizeMin_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, SizeMin);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_SizeMin_Offset == 0x4cc, "UP_Desert_Environment_Spark_01_Fall_BP_C::SizeMin offset is not 4cc");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_VelocityMax_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, VelocityMax);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_VelocityMax_Offset == 0x4d8, "UP_Desert_Environment_Spark_01_Fall_BP_C::VelocityMax offset is not 4d8");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_VelocityMin_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, VelocityMin);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_VelocityMin_Offset == 0x4e4, "UP_Desert_Environment_Spark_01_Fall_BP_C::VelocityMin offset is not 4e4");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_LifeTime_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, LifeTime);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_LifeTime_Offset == 0x4f0, "UP_Desert_Environment_Spark_01_Fall_BP_C::LifeTime offset is not 4f0");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_LifeTimeLow_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, LifeTimeLow);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_LifeTimeLow_Offset == 0x4f4, "UP_Desert_Environment_Spark_01_Fall_BP_C::LifeTimeLow offset is not 4f4");
	auto constexpr UP_Desert_Environment_Spark_01_Fall_BP_C_SparkSoundAk_Offset = offsetof(UP_Desert_Environment_Spark_01_Fall_BP_C, SparkSoundAk);
	static_assert(UP_Desert_Environment_Spark_01_Fall_BP_C_SparkSoundAk_Offset == 0x4f8, "UP_Desert_Environment_Spark_01_Fall_BP_C::SparkSoundAk offset is not 4f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
