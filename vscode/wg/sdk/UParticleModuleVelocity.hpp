#pragma once
#include "UParticleModuleVelocityBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVelocity // Size: 0xC8
	: public UParticleModuleVelocityBase // Size: 0x40
{
private:
	typedef UParticleModuleVelocity t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1165); // id32("Class Engine.ParticleModuleVelocity")
		return ptr;
	}
	FRawDistributionVector StartVelocity; /* Ofs: 0x40 Size: 0x50 - StructProperty Engine.ParticleModuleVelocity.StartVelocity */
	FRawDistributionFloat StartVelocityRadial; /* Ofs: 0x90 Size: 0x38 - StructProperty Engine.ParticleModuleVelocity.StartVelocityRadial */


	inline bool SetStartVelocity(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x40, value); }
	inline bool SetStartVelocityRadial(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVelocity = sizeof(UParticleModuleVelocity); // 200
    static_assert(sizeof(UParticleModuleVelocity) == 0xC8, "Size of UParticleModuleVelocity is not correct.");
	auto constexpr UParticleModuleVelocity_StartVelocity_Offset = offsetof(UParticleModuleVelocity, StartVelocity);
	static_assert(UParticleModuleVelocity_StartVelocity_Offset == 0x40, "UParticleModuleVelocity::StartVelocity offset is not 40");
	auto constexpr UParticleModuleVelocity_StartVelocityRadial_Offset = offsetof(UParticleModuleVelocity, StartVelocityRadial);
	static_assert(UParticleModuleVelocity_StartVelocityRadial_Offset == 0x90, "UParticleModuleVelocity::StartVelocityRadial offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
