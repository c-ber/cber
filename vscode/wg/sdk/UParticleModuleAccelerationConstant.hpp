#pragma once
#include "UParticleModuleAccelerationBase.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAccelerationConstant // Size: 0x50
	: public UParticleModuleAccelerationBase // Size: 0x40
{
private:
	typedef UParticleModuleAccelerationConstant t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1056); // id32("Class Engine.ParticleModuleAccelerationConstant")
		return ptr;
	}
	FVector Acceleration; /* Ofs: 0x40 Size: 0xC - StructProperty Engine.ParticleModuleAccelerationConstant.Acceleration */
	uint8_t UnknownData4C[0x4];


	inline bool SetAcceleration(t_structHelper inst, FVector value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAccelerationConstant = sizeof(UParticleModuleAccelerationConstant); // 80
    static_assert(sizeof(UParticleModuleAccelerationConstant) == 0x50, "Size of UParticleModuleAccelerationConstant is not correct.");
	auto constexpr UParticleModuleAccelerationConstant_Acceleration_Offset = offsetof(UParticleModuleAccelerationConstant, Acceleration);
	static_assert(UParticleModuleAccelerationConstant_Acceleration_Offset == 0x40, "UParticleModuleAccelerationConstant::Acceleration offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
