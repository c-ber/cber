#pragma once
#include "UParticleModuleSpawnBase.hpp"
#include "FRawDistributionFloat.hpp"
#include "EParticleBurstMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSpawn // Size: 0x108
	: public UParticleModuleSpawnBase // Size: 0x40
{
private:
	typedef UParticleModuleSpawn t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1144); // id32("Class Engine.ParticleModuleSpawn")
		return ptr;
	}
	FRawDistributionFloat Rate; /* Ofs: 0x40 Size: 0x38 - StructProperty Engine.ParticleModuleSpawn.Rate */
	FRawDistributionFloat RateScale; /* Ofs: 0x78 Size: 0x38 - StructProperty Engine.ParticleModuleSpawn.RateScale */
	TEnumAsByte<enum EParticleBurstMethod> ParticleBurstMethod; /* Ofs: 0xB0 Size: 0x1 - ByteProperty Engine.ParticleModuleSpawn.ParticleBurstMethod */
	uint8_t UnknownDataB1[0x7];
	TArray<struct FParticleBurst> BurstList; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty Engine.ParticleModuleSpawn.BurstList */
	FRawDistributionFloat BurstScale; /* Ofs: 0xC8 Size: 0x38 - StructProperty Engine.ParticleModuleSpawn.BurstScale */
	uint8_t boolField100;
	uint8_t UnknownData101[0x7];


	inline bool SetRate(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x40, value); }
	inline bool SetRateScale(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x78, value); }
	inline bool SetParticleBurstMethod(t_structHelper inst, TEnumAsByte<enum EParticleBurstMethod> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetBurstList(t_structHelper inst, TArray<struct FParticleBurst> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetBurstScale(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xC8, value); }
	inline bool bApplyGlobalSpawnRateScale()
	{
		return boolField100& 0x1;
	}
	inline bool SetbApplyGlobalSpawnRateScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x100, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSpawn = sizeof(UParticleModuleSpawn); // 264
    static_assert(sizeof(UParticleModuleSpawn) == 0x108, "Size of UParticleModuleSpawn is not correct.");
	auto constexpr UParticleModuleSpawn_Rate_Offset = offsetof(UParticleModuleSpawn, Rate);
	static_assert(UParticleModuleSpawn_Rate_Offset == 0x40, "UParticleModuleSpawn::Rate offset is not 40");
	auto constexpr UParticleModuleSpawn_RateScale_Offset = offsetof(UParticleModuleSpawn, RateScale);
	static_assert(UParticleModuleSpawn_RateScale_Offset == 0x78, "UParticleModuleSpawn::RateScale offset is not 78");
	auto constexpr UParticleModuleSpawn_ParticleBurstMethod_Offset = offsetof(UParticleModuleSpawn, ParticleBurstMethod);
	static_assert(UParticleModuleSpawn_ParticleBurstMethod_Offset == 0xb0, "UParticleModuleSpawn::ParticleBurstMethod offset is not b0");
	auto constexpr UParticleModuleSpawn_BurstList_Offset = offsetof(UParticleModuleSpawn, BurstList);
	static_assert(UParticleModuleSpawn_BurstList_Offset == 0xb8, "UParticleModuleSpawn::BurstList offset is not b8");
	auto constexpr UParticleModuleSpawn_BurstScale_Offset = offsetof(UParticleModuleSpawn, BurstScale);
	static_assert(UParticleModuleSpawn_BurstScale_Offset == 0xc8, "UParticleModuleSpawn::BurstScale offset is not c8");
	auto constexpr UParticleModuleSpawn_boolField100_Offset = offsetof(UParticleModuleSpawn, boolField100);
	static_assert(UParticleModuleSpawn_boolField100_Offset == 0x100, "UParticleModuleSpawn::boolField100 offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
