#pragma once
#include "UParticleModuleLifetimeBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLifetime // Size: 0x70
	: public UParticleModuleLifetimeBase // Size: 0x38
{
private:
	typedef UParticleModuleLifetime t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1089); // id32("Class Engine.ParticleModuleLifetime")
		return ptr;
	}
	FRawDistributionFloat LifeTime; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.ParticleModuleLifetime.LifeTime */


	inline bool SetLifeTime(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLifetime = sizeof(UParticleModuleLifetime); // 112
    static_assert(sizeof(UParticleModuleLifetime) == 0x70, "Size of UParticleModuleLifetime is not correct.");
	auto constexpr UParticleModuleLifetime_LifeTime_Offset = offsetof(UParticleModuleLifetime, LifeTime);
	static_assert(UParticleModuleLifetime_LifeTime_Offset == 0x38, "UParticleModuleLifetime::LifeTime offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
