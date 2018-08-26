#pragma once
#include "UParticleModuleAccelerationBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAccelerationDrag // Size: 0x80
	: public UParticleModuleAccelerationBase // Size: 0x40
{
private:
	typedef UParticleModuleAccelerationDrag t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1057); // id32("Class Engine.ParticleModuleAccelerationDrag")
		return ptr;
	}
	ExternalPtr<struct UDistributionFloat> DragCoefficient; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.ParticleModuleAccelerationDrag.DragCoefficient */
	FRawDistributionFloat DragCoefficientRaw; /* Ofs: 0x48 Size: 0x38 - StructProperty Engine.ParticleModuleAccelerationDrag.DragCoefficientRaw */


	inline bool SetDragCoefficient(t_structHelper inst, ExternalPtr<struct UDistributionFloat> value) { inst.WriteOffset(0x40, value); }
	inline bool SetDragCoefficientRaw(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAccelerationDrag = sizeof(UParticleModuleAccelerationDrag); // 128
    static_assert(sizeof(UParticleModuleAccelerationDrag) == 0x80, "Size of UParticleModuleAccelerationDrag is not correct.");
	auto constexpr UParticleModuleAccelerationDrag_DragCoefficient_Offset = offsetof(UParticleModuleAccelerationDrag, DragCoefficient);
	static_assert(UParticleModuleAccelerationDrag_DragCoefficient_Offset == 0x40, "UParticleModuleAccelerationDrag::DragCoefficient offset is not 40");
	auto constexpr UParticleModuleAccelerationDrag_DragCoefficientRaw_Offset = offsetof(UParticleModuleAccelerationDrag, DragCoefficientRaw);
	static_assert(UParticleModuleAccelerationDrag_DragCoefficientRaw_Offset == 0x48, "UParticleModuleAccelerationDrag::DragCoefficientRaw offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
