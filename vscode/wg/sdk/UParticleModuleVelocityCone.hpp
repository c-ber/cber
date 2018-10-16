#pragma once
#include "UParticleModuleVelocityBase.hpp"
#include "FRawDistributionFloat.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleVelocityCone // Size: 0xC0
	: public UParticleModuleVelocityBase // Size: 0x40
{
private:
	typedef UParticleModuleVelocityCone t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1167); // id32("Class Engine.ParticleModuleVelocityCone")
		return ptr;
	}
	FRawDistributionFloat Angle; /* Ofs: 0x40 Size: 0x38 - StructProperty Engine.ParticleModuleVelocityCone.Angle */
	FRawDistributionFloat Velocity; /* Ofs: 0x78 Size: 0x38 - StructProperty Engine.ParticleModuleVelocityCone.Velocity */
	FVector Direction; /* Ofs: 0xB0 Size: 0xC - StructProperty Engine.ParticleModuleVelocityCone.Direction */
	uint8_t UnknownDataBC[0x4];


	inline bool SetAngle(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x40, value); }
	inline bool SetVelocity(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x78, value); }
	inline bool SetDirection(t_structHelper inst, FVector value) { inst.WriteOffset(0xB0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleVelocityCone = sizeof(UParticleModuleVelocityCone); // 192
    static_assert(sizeof(UParticleModuleVelocityCone) == 0xC0, "Size of UParticleModuleVelocityCone is not correct.");
	auto constexpr UParticleModuleVelocityCone_Angle_Offset = offsetof(UParticleModuleVelocityCone, Angle);
	static_assert(UParticleModuleVelocityCone_Angle_Offset == 0x40, "UParticleModuleVelocityCone::Angle offset is not 40");
	auto constexpr UParticleModuleVelocityCone_Velocity_Offset = offsetof(UParticleModuleVelocityCone, Velocity);
	static_assert(UParticleModuleVelocityCone_Velocity_Offset == 0x78, "UParticleModuleVelocityCone::Velocity offset is not 78");
	auto constexpr UParticleModuleVelocityCone_Direction_Offset = offsetof(UParticleModuleVelocityCone, Direction);
	static_assert(UParticleModuleVelocityCone_Direction_Offset == 0xb0, "UParticleModuleVelocityCone::Direction offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
