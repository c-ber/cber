#pragma once
#include "UParticleModuleVectorFieldBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVectorFieldScaleOverLife // Size: 0x78
	: public UParticleModuleVectorFieldBase // Size: 0x38
{
private:
	typedef UParticleModuleVectorFieldScaleOverLife t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1163); // id32("Class Engine.ParticleModuleVectorFieldScaleOverLife")
		return ptr;
	}
	ExternalPtr<struct UDistributionFloat> VectorFieldScaleOverLife; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.ParticleModuleVectorFieldScaleOverLife.VectorFieldScaleOverLife */
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; /* Ofs: 0x40 Size: 0x38 - StructProperty Engine.ParticleModuleVectorFieldScaleOverLife.VectorFieldScaleOverLifeRaw */


	inline bool SetVectorFieldScaleOverLife(t_structHelper inst, ExternalPtr<struct UDistributionFloat> value) { inst.WriteOffset(0x38, value); }
	inline bool SetVectorFieldScaleOverLifeRaw(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVectorFieldScaleOverLife = sizeof(UParticleModuleVectorFieldScaleOverLife); // 120
    static_assert(sizeof(UParticleModuleVectorFieldScaleOverLife) == 0x78, "Size of UParticleModuleVectorFieldScaleOverLife is not correct.");
	auto constexpr UParticleModuleVectorFieldScaleOverLife_VectorFieldScaleOverLife_Offset = offsetof(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLife);
	static_assert(UParticleModuleVectorFieldScaleOverLife_VectorFieldScaleOverLife_Offset == 0x38, "UParticleModuleVectorFieldScaleOverLife::VectorFieldScaleOverLife offset is not 38");
	auto constexpr UParticleModuleVectorFieldScaleOverLife_VectorFieldScaleOverLifeRaw_Offset = offsetof(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLifeRaw);
	static_assert(UParticleModuleVectorFieldScaleOverLife_VectorFieldScaleOverLifeRaw_Offset == 0x40, "UParticleModuleVectorFieldScaleOverLife::VectorFieldScaleOverLifeRaw offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
