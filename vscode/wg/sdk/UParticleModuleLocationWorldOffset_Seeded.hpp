#pragma once
#include "UParticleModuleLocationWorldOffset.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationWorldOffset_Seeded // Size: 0xB0
	: public UParticleModuleLocationWorldOffset // Size: 0x90
{
private:
	typedef UParticleModuleLocationWorldOffset_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1098); // id32("Class Engine.ParticleModuleLocationWorldOffset_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x90 Size: 0x20 - StructProperty Engine.ParticleModuleLocationWorldOffset_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationWorldOffset_Seeded = sizeof(UParticleModuleLocationWorldOffset_Seeded); // 176
    static_assert(sizeof(UParticleModuleLocationWorldOffset_Seeded) == 0xB0, "Size of UParticleModuleLocationWorldOffset_Seeded is not correct.");
	auto constexpr UParticleModuleLocationWorldOffset_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleLocationWorldOffset_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleLocationWorldOffset_Seeded_RandomSeedInfo_Offset == 0x90, "UParticleModuleLocationWorldOffset_Seeded::RandomSeedInfo offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
