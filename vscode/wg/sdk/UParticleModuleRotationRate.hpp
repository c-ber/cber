#pragma once
#include "UParticleModuleRotationRateBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleRotationRate // Size: 0x70
	: public UParticleModuleRotationRateBase // Size: 0x38
{
private:
	typedef UParticleModuleRotationRate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1134); // id32("Class Engine.ParticleModuleRotationRate")
		return ptr;
	}
	FRawDistributionFloat StartRotationRate; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.ParticleModuleRotationRate.StartRotationRate */


	inline bool SetStartRotationRate(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleRotationRate = sizeof(UParticleModuleRotationRate); // 112
    static_assert(sizeof(UParticleModuleRotationRate) == 0x70, "Size of UParticleModuleRotationRate is not correct.");
	auto constexpr UParticleModuleRotationRate_StartRotationRate_Offset = offsetof(UParticleModuleRotationRate, StartRotationRate);
	static_assert(UParticleModuleRotationRate_StartRotationRate_Offset == 0x38, "UParticleModuleRotationRate::StartRotationRate offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
