#pragma once
#include "UParticleModuleParameterDynamic.hpp"
#include "FParticleRandomSeedInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleParameterDynamic_Seeded // Size: 0x70
	: public UParticleModuleParameterDynamic // Size: 0x50
{
private:
	typedef UParticleModuleParameterDynamic_Seeded t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1120); // id32("Class Engine.ParticleModuleParameterDynamic_Seeded")
		return ptr;
	}
	FParticleRandomSeedInfo RandomSeedInfo; /* Ofs: 0x50 Size: 0x20 - StructProperty Engine.ParticleModuleParameterDynamic_Seeded.RandomSeedInfo */


	inline bool SetRandomSeedInfo(t_structHelper inst, FParticleRandomSeedInfo value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleParameterDynamic_Seeded = sizeof(UParticleModuleParameterDynamic_Seeded); // 112
    static_assert(sizeof(UParticleModuleParameterDynamic_Seeded) == 0x70, "Size of UParticleModuleParameterDynamic_Seeded is not correct.");
	auto constexpr UParticleModuleParameterDynamic_Seeded_RandomSeedInfo_Offset = offsetof(UParticleModuleParameterDynamic_Seeded, RandomSeedInfo);
	static_assert(UParticleModuleParameterDynamic_Seeded_RandomSeedInfo_Offset == 0x50, "UParticleModuleParameterDynamic_Seeded::RandomSeedInfo offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
