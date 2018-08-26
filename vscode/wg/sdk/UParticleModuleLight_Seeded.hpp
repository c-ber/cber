#pragma once
#include "UParticleModuleLight.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLight_Seeded // Size: 0x168
	: public UParticleModuleLight // Size: 0x148
{
private:
	typedef UParticleModuleLight_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1093); // id32("Class Engine.ParticleModuleLight_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x148 Size: 0x20 - StructProperty Engine.ParticleModuleLight_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x148, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLight_Seeded = sizeof(UParticleModuleLight_Seeded); // 360
    static_assert(sizeof(UParticleModuleLight_Seeded) == 0x168, "Size of UParticleModuleLight_Seeded is not correct.");
	auto constexpr UParticleModuleLight_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleLight_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleLight_Seeded_RandomSeedInfo_Offset == 0x148, "UParticleModuleLight_Seeded::RandomSeedInfo offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
