#pragma once
#include "UParticleModuleVectorFieldBase.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVectorFieldRotation // Size: 0x50
	: public UParticleModuleVectorFieldBase // Size: 0x38
{
private:
	typedef UParticleModuleVectorFieldRotation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1160); // id32("Class Engine.ParticleModuleVectorFieldRotation")
		return ptr;
	}
	FVector MinInitialRotation; /* Ofs: 0x38 Size: 0xC - StructProperty Engine.ParticleModuleVectorFieldRotation.MinInitialRotation */
	FVector MaxInitialRotation; /* Ofs: 0x44 Size: 0xC - StructProperty Engine.ParticleModuleVectorFieldRotation.MaxInitialRotation */


	inline bool SetMinInitialRotation(t_structHelper inst, FVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetMaxInitialRotation(t_structHelper inst, FVector value) { inst.WriteOffset(0x44, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVectorFieldRotation = sizeof(UParticleModuleVectorFieldRotation); // 80
    static_assert(sizeof(UParticleModuleVectorFieldRotation) == 0x50, "Size of UParticleModuleVectorFieldRotation is not correct.");
	auto constexpr UParticleModuleVectorFieldRotation_MinInitialRotation_Offset = offsetof(UParticleModuleVectorFieldRotation, MinInitialRotation);
	static_assert(UParticleModuleVectorFieldRotation_MinInitialRotation_Offset == 0x38, "UParticleModuleVectorFieldRotation::MinInitialRotation offset is not 38");
	auto constexpr UParticleModuleVectorFieldRotation_MaxInitialRotation_Offset = offsetof(UParticleModuleVectorFieldRotation, MaxInitialRotation);
	static_assert(UParticleModuleVectorFieldRotation_MaxInitialRotation_Offset == 0x44, "UParticleModuleVectorFieldRotation::MaxInitialRotation offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
