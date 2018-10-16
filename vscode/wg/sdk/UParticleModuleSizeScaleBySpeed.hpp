#pragma once
#include "UParticleModuleSizeBase.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleSizeScaleBySpeed // Size: 0x48
	: public UParticleModuleSizeBase // Size: 0x38
{
private:
	typedef UParticleModuleSizeScaleBySpeed t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1142); // id32("Class Engine.ParticleModuleSizeScaleBySpeed")
		return ptr;
	}
	FVector2D SpeedScale; /* Ofs: 0x38 Size: 0x8 - StructProperty Engine.ParticleModuleSizeScaleBySpeed.SpeedScale */
	FVector2D MaxScale; /* Ofs: 0x40 Size: 0x8 - StructProperty Engine.ParticleModuleSizeScaleBySpeed.MaxScale */


	inline bool SetSpeedScale(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x38, value); }
	inline bool SetMaxScale(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleSizeScaleBySpeed = sizeof(UParticleModuleSizeScaleBySpeed); // 72
    static_assert(sizeof(UParticleModuleSizeScaleBySpeed) == 0x48, "Size of UParticleModuleSizeScaleBySpeed is not correct.");
	auto constexpr UParticleModuleSizeScaleBySpeed_SpeedScale_Offset = offsetof(UParticleModuleSizeScaleBySpeed, SpeedScale);
	static_assert(UParticleModuleSizeScaleBySpeed_SpeedScale_Offset == 0x38, "UParticleModuleSizeScaleBySpeed::SpeedScale offset is not 38");
	auto constexpr UParticleModuleSizeScaleBySpeed_MaxScale_Offset = offsetof(UParticleModuleSizeScaleBySpeed, MaxScale);
	static_assert(UParticleModuleSizeScaleBySpeed_MaxScale_Offset == 0x40, "UParticleModuleSizeScaleBySpeed::MaxScale offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
