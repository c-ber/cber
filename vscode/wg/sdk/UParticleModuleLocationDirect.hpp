#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationDirect // Size: 0x178
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleLocationDirect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1100); // id32("Class Engine.ParticleModuleLocationDirect")
		return ptr;
	}
	FRawDistributionVector Location; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleLocationDirect.Location */
	FRawDistributionVector LocationOffset; /* Ofs: 0x88 Size: 0x50 - StructProperty Engine.ParticleModuleLocationDirect.LocationOffset */
	FRawDistributionVector ScaleFactor; /* Ofs: 0xD8 Size: 0x50 - StructProperty Engine.ParticleModuleLocationDirect.ScaleFactor */
	FRawDistributionVector Direction; /* Ofs: 0x128 Size: 0x50 - StructProperty Engine.ParticleModuleLocationDirect.Direction */


	inline bool SetLocation(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetLocationOffset(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x88, value); }
	inline bool SetScaleFactor(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0xD8, value); }
	inline bool SetDirection(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x128, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationDirect = sizeof(UParticleModuleLocationDirect); // 376
    static_assert(sizeof(UParticleModuleLocationDirect) == 0x178, "Size of UParticleModuleLocationDirect is not correct.");
	auto constexpr UParticleModuleLocationDirect_Location_Offset = offsetof(UParticleModuleLocationDirect, Location);
	static_assert(UParticleModuleLocationDirect_Location_Offset == 0x38, "UParticleModuleLocationDirect::Location offset is not 38");
	auto constexpr UParticleModuleLocationDirect_LocationOffset_Offset = offsetof(UParticleModuleLocationDirect, LocationOffset);
	static_assert(UParticleModuleLocationDirect_LocationOffset_Offset == 0x88, "UParticleModuleLocationDirect::LocationOffset offset is not 88");
	auto constexpr UParticleModuleLocationDirect_ScaleFactor_Offset = offsetof(UParticleModuleLocationDirect, ScaleFactor);
	static_assert(UParticleModuleLocationDirect_ScaleFactor_Offset == 0xd8, "UParticleModuleLocationDirect::ScaleFactor offset is not d8");
	auto constexpr UParticleModuleLocationDirect_Direction_Offset = offsetof(UParticleModuleLocationDirect, Direction);
	static_assert(UParticleModuleLocationDirect_Direction_Offset == 0x128, "UParticleModuleLocationDirect::Direction offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
