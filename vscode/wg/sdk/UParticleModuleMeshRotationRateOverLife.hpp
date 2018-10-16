#pragma once
#include "UParticleModuleRotationRateBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleMeshRotationRateOverLife // Size: 0x90
	: public UParticleModuleRotationRateBase // Size: 0x38
{
private:
	typedef UParticleModuleMeshRotationRateOverLife t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1133); // id32("Class Engine.ParticleModuleMeshRotationRateOverLife")
		return ptr;
	}
	FRawDistributionVector RotRate; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleMeshRotationRateOverLife.RotRate */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];


	inline bool SetRotRate(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool bScaleRotRate()
	{
		return boolField88& 0x1;
	}
	inline bool SetbScaleRotRate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleMeshRotationRateOverLife = sizeof(UParticleModuleMeshRotationRateOverLife); // 144
    static_assert(sizeof(UParticleModuleMeshRotationRateOverLife) == 0x90, "Size of UParticleModuleMeshRotationRateOverLife is not correct.");
	auto constexpr UParticleModuleMeshRotationRateOverLife_RotRate_Offset = offsetof(UParticleModuleMeshRotationRateOverLife, RotRate);
	static_assert(UParticleModuleMeshRotationRateOverLife_RotRate_Offset == 0x38, "UParticleModuleMeshRotationRateOverLife::RotRate offset is not 38");
	auto constexpr UParticleModuleMeshRotationRateOverLife_boolField88_Offset = offsetof(UParticleModuleMeshRotationRateOverLife, boolField88);
	static_assert(UParticleModuleMeshRotationRateOverLife_boolField88_Offset == 0x88, "UParticleModuleMeshRotationRateOverLife::boolField88 offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
