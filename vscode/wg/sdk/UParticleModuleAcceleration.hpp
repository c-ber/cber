#pragma once
#include "UParticleModuleAccelerationBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAcceleration // Size: 0x98
	: public UParticleModuleAccelerationBase // Size: 0x40
{
private:
	typedef UParticleModuleAcceleration t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1055); // id32("Class Engine.ParticleModuleAcceleration")
		return ptr;
	}
	FRawDistributionVector Acceleration; /* Ofs: 0x40 Size: 0x50 - StructProperty Engine.ParticleModuleAcceleration.Acceleration */
	uint8_t boolField90;
	uint8_t UnknownData91[0x7];


	inline bool SetAcceleration(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x40, value); }
	inline bool bApplyOwnerScale()
	{
		return boolField90& 0x1;
	}
	inline bool SetbApplyOwnerScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAcceleration = sizeof(UParticleModuleAcceleration); // 152
    static_assert(sizeof(UParticleModuleAcceleration) == 0x98, "Size of UParticleModuleAcceleration is not correct.");
	auto constexpr UParticleModuleAcceleration_Acceleration_Offset = offsetof(UParticleModuleAcceleration, Acceleration);
	static_assert(UParticleModuleAcceleration_Acceleration_Offset == 0x40, "UParticleModuleAcceleration::Acceleration offset is not 40");
	auto constexpr UParticleModuleAcceleration_boolField90_Offset = offsetof(UParticleModuleAcceleration, boolField90);
	static_assert(UParticleModuleAcceleration_boolField90_Offset == 0x90, "UParticleModuleAcceleration::boolField90 offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
