#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "FRawDistributionFloat.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationPrimitiveBase // Size: 0xC8
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleLocationPrimitiveBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1103); // id32("Class Engine.ParticleModuleLocationPrimitiveBase")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];
	FRawDistributionFloat VelocityScale; /* Ofs: 0x40 Size: 0x38 - StructProperty Engine.ParticleModuleLocationPrimitiveBase.VelocityScale */
	FRawDistributionVector StartLocation; /* Ofs: 0x78 Size: 0x50 - StructProperty Engine.ParticleModuleLocationPrimitiveBase.StartLocation */


	inline bool Positive_X()
	{
		return boolField38& 0x1;
	}
	inline bool SetPositive_X(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool Positive_Y()
	{
		return boolField38& 0x2;
	}
	inline bool SetPositive_Y(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool Positive_Z()
	{
		return boolField38& 0x4;
	}
	inline bool SetPositive_Z(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool Negative_X()
	{
		return boolField38& 0x8;
	}
	inline bool SetNegative_X(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool Negative_Y()
	{
		return boolField38& 0x10;
	}
	inline bool SetNegative_Y(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool Negative_Z()
	{
		return boolField38& 0x20;
	}
	inline bool SetNegative_Z(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SurfaceOnly()
	{
		return boolField38& 0x40;
	}
	inline bool SetSurfaceOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool Velocity()
	{
		return boolField38& 0x80;
	}
	inline bool SetVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool SetVelocityScale(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x40, value); }
	inline bool SetStartLocation(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationPrimitiveBase = sizeof(UParticleModuleLocationPrimitiveBase); // 200
    static_assert(sizeof(UParticleModuleLocationPrimitiveBase) == 0xC8, "Size of UParticleModuleLocationPrimitiveBase is not correct.");
	auto constexpr UParticleModuleLocationPrimitiveBase_boolField38_Offset = offsetof(UParticleModuleLocationPrimitiveBase, boolField38);
	static_assert(UParticleModuleLocationPrimitiveBase_boolField38_Offset == 0x38, "UParticleModuleLocationPrimitiveBase::boolField38 offset is not 38");
	auto constexpr UParticleModuleLocationPrimitiveBase_VelocityScale_Offset = offsetof(UParticleModuleLocationPrimitiveBase, VelocityScale);
	static_assert(UParticleModuleLocationPrimitiveBase_VelocityScale_Offset == 0x40, "UParticleModuleLocationPrimitiveBase::VelocityScale offset is not 40");
	auto constexpr UParticleModuleLocationPrimitiveBase_StartLocation_Offset = offsetof(UParticleModuleLocationPrimitiveBase, StartLocation);
	static_assert(UParticleModuleLocationPrimitiveBase_StartLocation_Offset == 0x78, "UParticleModuleLocationPrimitiveBase::StartLocation offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
