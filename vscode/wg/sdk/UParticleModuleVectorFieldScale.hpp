#pragma once
#include "UParticleModuleVectorFieldBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVectorFieldScale // Size: 0x78
	: public UParticleModuleVectorFieldBase // Size: 0x38
{
private:
	typedef UParticleModuleVectorFieldScale t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1162); // id32("Class Engine.ParticleModuleVectorFieldScale")
		return ptr;
	}
	ExternalPtr<struct UDistributionFloat> VectorFieldScale; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.ParticleModuleVectorFieldScale.VectorFieldScale */
	FRawDistributionFloat VectorFieldScaleRaw; /* Ofs: 0x40 Size: 0x38 - StructProperty Engine.ParticleModuleVectorFieldScale.VectorFieldScaleRaw */


	inline bool SetVectorFieldScale(t_structHelper inst, ExternalPtr<struct UDistributionFloat> value) { inst.WriteOffset(0x38, value); }
	inline bool SetVectorFieldScaleRaw(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVectorFieldScale = sizeof(UParticleModuleVectorFieldScale); // 120
    static_assert(sizeof(UParticleModuleVectorFieldScale) == 0x78, "Size of UParticleModuleVectorFieldScale is not correct.");
	auto constexpr UParticleModuleVectorFieldScale_VectorFieldScale_Offset = offsetof(UParticleModuleVectorFieldScale, VectorFieldScale);
	static_assert(UParticleModuleVectorFieldScale_VectorFieldScale_Offset == 0x38, "UParticleModuleVectorFieldScale::VectorFieldScale offset is not 38");
	auto constexpr UParticleModuleVectorFieldScale_VectorFieldScaleRaw_Offset = offsetof(UParticleModuleVectorFieldScale, VectorFieldScaleRaw);
	static_assert(UParticleModuleVectorFieldScale_VectorFieldScaleRaw_Offset == 0x40, "UParticleModuleVectorFieldScale::VectorFieldScaleRaw offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
