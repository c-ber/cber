#pragma once
#include "UParticleModuleVectorFieldBase.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVectorFieldRotationRate // Size: 0x48
	: public UParticleModuleVectorFieldBase // Size: 0x38
{
private:
	typedef UParticleModuleVectorFieldRotationRate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1161); // id32("Class Engine.ParticleModuleVectorFieldRotationRate")
		return ptr;
	}
	FVector RotationRate; /* Ofs: 0x38 Size: 0xC - StructProperty Engine.ParticleModuleVectorFieldRotationRate.RotationRate */
	uint8_t UnknownData44[0x4];


	inline bool SetRotationRate(t_structHelper inst, FVector value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVectorFieldRotationRate = sizeof(UParticleModuleVectorFieldRotationRate); // 72
    static_assert(sizeof(UParticleModuleVectorFieldRotationRate) == 0x48, "Size of UParticleModuleVectorFieldRotationRate is not correct.");
	auto constexpr UParticleModuleVectorFieldRotationRate_RotationRate_Offset = offsetof(UParticleModuleVectorFieldRotationRate, RotationRate);
	static_assert(UParticleModuleVectorFieldRotationRate_RotationRate_Offset == 0x38, "UParticleModuleVectorFieldRotationRate::RotationRate offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
