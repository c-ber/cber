#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocation // Size: 0x90
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleLocation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1095); // id32("Class Engine.ParticleModuleLocation")
		return ptr;
	}
	FRawDistributionVector StartLocation; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleLocation.StartLocation */
	float DistributeOverNPoints; /* Ofs: 0x88 Size: 0x4 - FloatProperty Engine.ParticleModuleLocation.DistributeOverNPoints */
	float DistributeThreshold; /* Ofs: 0x8C Size: 0x4 - FloatProperty Engine.ParticleModuleLocation.DistributeThreshold */


	inline bool SetStartLocation(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetDistributeOverNPoints(t_structHelper inst, float value) { inst.WriteOffset(0x88, value); }
	inline bool SetDistributeThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x8C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocation = sizeof(UParticleModuleLocation); // 144
    static_assert(sizeof(UParticleModuleLocation) == 0x90, "Size of UParticleModuleLocation is not correct.");
	auto constexpr UParticleModuleLocation_StartLocation_Offset = offsetof(UParticleModuleLocation, StartLocation);
	static_assert(UParticleModuleLocation_StartLocation_Offset == 0x38, "UParticleModuleLocation::StartLocation offset is not 38");
	auto constexpr UParticleModuleLocation_DistributeOverNPoints_Offset = offsetof(UParticleModuleLocation, DistributeOverNPoints);
	static_assert(UParticleModuleLocation_DistributeOverNPoints_Offset == 0x88, "UParticleModuleLocation::DistributeOverNPoints offset is not 88");
	auto constexpr UParticleModuleLocation_DistributeThreshold_Offset = offsetof(UParticleModuleLocation, DistributeThreshold);
	static_assert(UParticleModuleLocation_DistributeThreshold_Offset == 0x8c, "UParticleModuleLocation::DistributeThreshold offset is not 8c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
