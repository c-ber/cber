#pragma once
#include "UParticleModuleSize.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSize_Seeded // Size: 0xA8
	: public UParticleModuleSize // Size: 0x88
{
private:
	typedef UParticleModuleSize_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1139); // id32("Class Engine.ParticleModuleSize_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x88 Size: 0x20 - StructProperty Engine.ParticleModuleSize_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSize_Seeded = sizeof(UParticleModuleSize_Seeded); // 168
    static_assert(sizeof(UParticleModuleSize_Seeded) == 0xA8, "Size of UParticleModuleSize_Seeded is not correct.");
	auto constexpr UParticleModuleSize_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleSize_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleSize_Seeded_RandomSeedInfo_Offset == 0x88, "UParticleModuleSize_Seeded::RandomSeedInfo offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
