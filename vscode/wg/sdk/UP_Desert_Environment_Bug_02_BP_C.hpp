#pragma once
#include "UTslParticleEnvironment.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Desert_Environment_Bug_02_BP_C // Size: 0x4C4
	: public UTslParticleEnvironment // Size: 0x490
{
private:
	typedef UP_Desert_Environment_Bug_02_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(218033); // id32("BlueprintGeneratedClass P_Desert_Environment_Bug_02_BP.P_Desert_Environment_Bug_02_BP_C")
		return ptr;
	}
	FVector SpawnBoxMax; /* Ofs: 0x490 Size: 0xC - StructProperty P_Desert_Environment_Bug_02_BP.P_Desert_Environment_Bug_02_BP_C.SpawnBoxMax */
	FVector SpawnBoxMin; /* Ofs: 0x49C Size: 0xC - StructProperty P_Desert_Environment_Bug_02_BP.P_Desert_Environment_Bug_02_BP_C.SpawnBoxMin */
	float SpawnRate; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty P_Desert_Environment_Bug_02_BP.P_Desert_Environment_Bug_02_BP_C.SpawnRate */
	FVector SizeMax; /* Ofs: 0x4AC Size: 0xC - StructProperty P_Desert_Environment_Bug_02_BP.P_Desert_Environment_Bug_02_BP_C.SizeMax */
	FVector SizeMin; /* Ofs: 0x4B8 Size: 0xC - StructProperty P_Desert_Environment_Bug_02_BP.P_Desert_Environment_Bug_02_BP_C.SizeMin */


	inline bool SetSpawnBoxMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x490, value); }
	inline bool SetSpawnBoxMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x49C, value); }
	inline bool SetSpawnRate(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetSizeMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetSizeMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Desert_Environment_Bug_02_BP_C = sizeof(UP_Desert_Environment_Bug_02_BP_C); // 1220
    static_assert(sizeof(UP_Desert_Environment_Bug_02_BP_C) == 0x4C4, "Size of UP_Desert_Environment_Bug_02_BP_C is not correct.");
	auto constexpr UP_Desert_Environment_Bug_02_BP_C_SpawnBoxMax_Offset = offsetof(UP_Desert_Environment_Bug_02_BP_C, SpawnBoxMax);
	static_assert(UP_Desert_Environment_Bug_02_BP_C_SpawnBoxMax_Offset == 0x490, "UP_Desert_Environment_Bug_02_BP_C::SpawnBoxMax offset is not 490");
	auto constexpr UP_Desert_Environment_Bug_02_BP_C_SpawnBoxMin_Offset = offsetof(UP_Desert_Environment_Bug_02_BP_C, SpawnBoxMin);
	static_assert(UP_Desert_Environment_Bug_02_BP_C_SpawnBoxMin_Offset == 0x49c, "UP_Desert_Environment_Bug_02_BP_C::SpawnBoxMin offset is not 49c");
	auto constexpr UP_Desert_Environment_Bug_02_BP_C_SpawnRate_Offset = offsetof(UP_Desert_Environment_Bug_02_BP_C, SpawnRate);
	static_assert(UP_Desert_Environment_Bug_02_BP_C_SpawnRate_Offset == 0x4a8, "UP_Desert_Environment_Bug_02_BP_C::SpawnRate offset is not 4a8");
	auto constexpr UP_Desert_Environment_Bug_02_BP_C_SizeMax_Offset = offsetof(UP_Desert_Environment_Bug_02_BP_C, SizeMax);
	static_assert(UP_Desert_Environment_Bug_02_BP_C_SizeMax_Offset == 0x4ac, "UP_Desert_Environment_Bug_02_BP_C::SizeMax offset is not 4ac");
	auto constexpr UP_Desert_Environment_Bug_02_BP_C_SizeMin_Offset = offsetof(UP_Desert_Environment_Bug_02_BP_C, SizeMin);
	static_assert(UP_Desert_Environment_Bug_02_BP_C_SizeMin_Offset == 0x4b8, "UP_Desert_Environment_Bug_02_BP_C::SizeMin offset is not 4b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
