#pragma once
#include "UParticleModuleLocationPrimitiveBase.hpp"
#include "FRawDistributionFloat.hpp"
#include "CylinderHeightAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationPrimitiveCylinder // Size: 0x148
	: public UParticleModuleLocationPrimitiveBase // Size: 0xC8
{
private:
	typedef UParticleModuleLocationPrimitiveCylinder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1104); // id32("Class Engine.ParticleModuleLocationPrimitiveCylinder")
		return ptr;
	}
	uint8_t boolFieldC8;
	uint8_t UnknownDataC9[0x7];
	FRawDistributionFloat StartRadius; /* Ofs: 0xD0 Size: 0x38 - StructProperty Engine.ParticleModuleLocationPrimitiveCylinder.StartRadius */
	FRawDistributionFloat StartHeight; /* Ofs: 0x108 Size: 0x38 - StructProperty Engine.ParticleModuleLocationPrimitiveCylinder.StartHeight */
	TEnumAsByte<enum CylinderHeightAxis> HeightAxis; /* Ofs: 0x140 Size: 0x1 - ByteProperty Engine.ParticleModuleLocationPrimitiveCylinder.HeightAxis */
	uint8_t UnknownData141[0x7];


	inline bool RadialVelocity()
	{
		return boolFieldC8& 0x1;
	}
	inline bool SetRadialVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStartRadius(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xD0, value); }
	inline bool SetStartHeight(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x108, value); }
	inline bool SetHeightAxis(t_structHelper inst, TEnumAsByte<enum CylinderHeightAxis> value) { inst.WriteOffset(0x140, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationPrimitiveCylinder = sizeof(UParticleModuleLocationPrimitiveCylinder); // 328
    static_assert(sizeof(UParticleModuleLocationPrimitiveCylinder) == 0x148, "Size of UParticleModuleLocationPrimitiveCylinder is not correct.");
	auto constexpr UParticleModuleLocationPrimitiveCylinder_boolFieldC8_Offset = offsetof(UParticleModuleLocationPrimitiveCylinder, boolFieldC8);
	static_assert(UParticleModuleLocationPrimitiveCylinder_boolFieldC8_Offset == 0xc8, "UParticleModuleLocationPrimitiveCylinder::boolFieldC8 offset is not c8");
	auto constexpr UParticleModuleLocationPrimitiveCylinder_StartRadius_Offset = offsetof(UParticleModuleLocationPrimitiveCylinder, StartRadius);
	static_assert(UParticleModuleLocationPrimitiveCylinder_StartRadius_Offset == 0xd0, "UParticleModuleLocationPrimitiveCylinder::StartRadius offset is not d0");
	auto constexpr UParticleModuleLocationPrimitiveCylinder_StartHeight_Offset = offsetof(UParticleModuleLocationPrimitiveCylinder, StartHeight);
	static_assert(UParticleModuleLocationPrimitiveCylinder_StartHeight_Offset == 0x108, "UParticleModuleLocationPrimitiveCylinder::StartHeight offset is not 108");
	auto constexpr UParticleModuleLocationPrimitiveCylinder_HeightAxis_Offset = offsetof(UParticleModuleLocationPrimitiveCylinder, HeightAxis);
	static_assert(UParticleModuleLocationPrimitiveCylinder_HeightAxis_Offset == 0x140, "UParticleModuleLocationPrimitiveCylinder::HeightAxis offset is not 140");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
