#pragma once
#include "UParticleModuleRotationRate.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleRotationRate_Seeded // Size: 0x90
	: public UParticleModuleRotationRate // Size: 0x70
{
private:
	typedef UParticleModuleRotationRate_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1135); // id32("Class Engine.ParticleModuleRotationRate_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x70 Size: 0x20 - StructProperty Engine.ParticleModuleRotationRate_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleRotationRate_Seeded = sizeof(UParticleModuleRotationRate_Seeded); // 144
    static_assert(sizeof(UParticleModuleRotationRate_Seeded) == 0x90, "Size of UParticleModuleRotationRate_Seeded is not correct.");
	auto constexpr UParticleModuleRotationRate_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleRotationRate_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleRotationRate_Seeded_RandomSeedInfo_Offset == 0x70, "UParticleModuleRotationRate_Seeded::RandomSeedInfo offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
