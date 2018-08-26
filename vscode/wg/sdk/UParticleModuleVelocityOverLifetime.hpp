#pragma once
#include "UParticleModuleVelocityBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVelocityOverLifetime // Size: 0x98
	: public UParticleModuleVelocityBase // Size: 0x40
{
private:
	typedef UParticleModuleVelocityOverLifetime t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1169); // id32("Class Engine.ParticleModuleVelocityOverLifetime")
		return ptr;
	}
	FRawDistributionVector VelOverLife; /* Ofs: 0x40 Size: 0x50 - StructProperty Engine.ParticleModuleVelocityOverLifetime.VelOverLife */
	uint8_t boolField90;
	uint8_t UnknownData91[0x7];


	inline bool SetVelOverLife(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x40, value); }
	inline bool Absolute()
	{
		return boolField90& 0x1;
	}
	inline bool SetAbsolute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVelocityOverLifetime = sizeof(UParticleModuleVelocityOverLifetime); // 152
    static_assert(sizeof(UParticleModuleVelocityOverLifetime) == 0x98, "Size of UParticleModuleVelocityOverLifetime is not correct.");
	auto constexpr UParticleModuleVelocityOverLifetime_VelOverLife_Offset = offsetof(UParticleModuleVelocityOverLifetime, VelOverLife);
	static_assert(UParticleModuleVelocityOverLifetime_VelOverLife_Offset == 0x40, "UParticleModuleVelocityOverLifetime::VelOverLife offset is not 40");
	auto constexpr UParticleModuleVelocityOverLifetime_boolField90_Offset = offsetof(UParticleModuleVelocityOverLifetime, boolField90);
	static_assert(UParticleModuleVelocityOverLifetime_boolField90_Offset == 0x90, "UParticleModuleVelocityOverLifetime::boolField90 offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
