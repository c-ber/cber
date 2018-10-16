#pragma once
#include "UParticleModuleRotationBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleMeshRotation // Size: 0x90
	: public UParticleModuleRotationBase // Size: 0x38
{
private:
	typedef UParticleModuleMeshRotation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1124); // id32("Class Engine.ParticleModuleMeshRotation")
		return ptr;
	}
	FRawDistributionVector StartRotation; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleMeshRotation.StartRotation */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool SetStartRotation(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool bInheritParent()
	{
		return boolField88& 0x1;
	}
	inline bool SetbInheritParent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleMeshRotation = sizeof(UParticleModuleMeshRotation); // 144
    static_assert(sizeof(UParticleModuleMeshRotation) == 0x90, "Size of UParticleModuleMeshRotation is not correct.");
	auto constexpr UParticleModuleMeshRotation_StartRotation_Offset = offsetof(UParticleModuleMeshRotation, StartRotation);
	static_assert(UParticleModuleMeshRotation_StartRotation_Offset == 0x38, "UParticleModuleMeshRotation::StartRotation offset is not 38");
	auto constexpr UParticleModuleMeshRotation_boolField88_Offset = offsetof(UParticleModuleMeshRotation, boolField88);
	static_assert(UParticleModuleMeshRotation_boolField88_Offset == 0x88, "UParticleModuleMeshRotation::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
