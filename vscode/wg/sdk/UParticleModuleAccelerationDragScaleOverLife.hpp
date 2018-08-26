#pragma once
#include "UParticleModuleAccelerationBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAccelerationDragScaleOverLife // Size: 0x80
	: public UParticleModuleAccelerationBase // Size: 0x40
{
private:
	typedef UParticleModuleAccelerationDragScaleOverLife t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1058); // id32("Class Engine.ParticleModuleAccelerationDragScaleOverLife")
		return ptr;
	}
	ExternalPtr<struct UDistributionFloat> DragScale; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.ParticleModuleAccelerationDragScaleOverLife.DragScale */
	FRawDistributionFloat DragScaleRaw; /* Ofs: 0x48 Size: 0x38 - StructProperty Engine.ParticleModuleAccelerationDragScaleOverLife.DragScaleRaw */


	inline bool SetDragScale(t_structHelper inst, ExternalPtr<struct UDistributionFloat> value) { inst.WriteOffset(0x40, value); }
	inline bool SetDragScaleRaw(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAccelerationDragScaleOverLife = sizeof(UParticleModuleAccelerationDragScaleOverLife); // 128
    static_assert(sizeof(UParticleModuleAccelerationDragScaleOverLife) == 0x80, "Size of UParticleModuleAccelerationDragScaleOverLife is not correct.");
	auto constexpr UParticleModuleAccelerationDragScaleOverLife_DragScale_Offset = offsetof(UParticleModuleAccelerationDragScaleOverLife, DragScale);
	static_assert(UParticleModuleAccelerationDragScaleOverLife_DragScale_Offset == 0x40, "UParticleModuleAccelerationDragScaleOverLife::DragScale offset is not 40");
	auto constexpr UParticleModuleAccelerationDragScaleOverLife_DragScaleRaw_Offset = offsetof(UParticleModuleAccelerationDragScaleOverLife, DragScaleRaw);
	static_assert(UParticleModuleAccelerationDragScaleOverLife_DragScaleRaw_Offset == 0x48, "UParticleModuleAccelerationDragScaleOverLife::DragScaleRaw offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
