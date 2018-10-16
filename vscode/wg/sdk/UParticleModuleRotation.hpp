#pragma once
#include "UParticleModuleRotationBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleRotation // Size: 0x70
	: public UParticleModuleRotationBase // Size: 0x38
{
private:
	typedef UParticleModuleRotation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1126); // id32("Class Engine.ParticleModuleRotation")
		return ptr;
	}
	FRawDistributionFloat StartRotation; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.ParticleModuleRotation.StartRotation */


	inline bool SetStartRotation(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleRotation = sizeof(UParticleModuleRotation); // 112
    static_assert(sizeof(UParticleModuleRotation) == 0x70, "Size of UParticleModuleRotation is not correct.");
	auto constexpr UParticleModuleRotation_StartRotation_Offset = offsetof(UParticleModuleRotation, StartRotation);
	static_assert(UParticleModuleRotation_StartRotation_Offset == 0x38, "UParticleModuleRotation::StartRotation offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
