#pragma once
#include "UParticleModuleRotationRateBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleMeshRotationRate // Size: 0x88
	: public UParticleModuleRotationRateBase // Size: 0x38
{
private:
	typedef UParticleModuleMeshRotationRate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1130); // id32("Class Engine.ParticleModuleMeshRotationRate")
		return ptr;
	}
	FRawDistributionVector StartRotationRate; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleMeshRotationRate.StartRotationRate */


	inline bool SetStartRotationRate(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleMeshRotationRate = sizeof(UParticleModuleMeshRotationRate); // 136
    static_assert(sizeof(UParticleModuleMeshRotationRate) == 0x88, "Size of UParticleModuleMeshRotationRate is not correct.");
	auto constexpr UParticleModuleMeshRotationRate_StartRotationRate_Offset = offsetof(UParticleModuleMeshRotationRate, StartRotationRate);
	static_assert(UParticleModuleMeshRotationRate_StartRotationRate_Offset == 0x38, "UParticleModuleMeshRotationRate::StartRotationRate offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
