#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSourceMovement // Size: 0x88
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleSourceMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1111); // id32("Class Engine.ParticleModuleSourceMovement")
		return ptr;
	}
	FRawDistributionVector SourceMovementScale; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleSourceMovement.SourceMovementScale */


	inline bool SetSourceMovementScale(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSourceMovement = sizeof(UParticleModuleSourceMovement); // 136
    static_assert(sizeof(UParticleModuleSourceMovement) == 0x88, "Size of UParticleModuleSourceMovement is not correct.");
	auto constexpr UParticleModuleSourceMovement_SourceMovementScale_Offset = offsetof(UParticleModuleSourceMovement, SourceMovementScale);
	static_assert(UParticleModuleSourceMovement_SourceMovementScale_Offset == 0x38, "UParticleModuleSourceMovement::SourceMovementScale offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
