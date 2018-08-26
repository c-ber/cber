#pragma once
#include "UParticleModuleAttractorBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAttractorPoint // Size: 0x100
	: public UParticleModuleAttractorBase // Size: 0x38
{
private:
	typedef UParticleModuleAttractorPoint t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1063); // id32("Class Engine.ParticleModuleAttractorPoint")
		return ptr;
	}
	FRawDistributionVector Position; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleAttractorPoint.Position */
	FRawDistributionFloat Range; /* Ofs: 0x88 Size: 0x38 - StructProperty Engine.ParticleModuleAttractorPoint.Range */
	FRawDistributionFloat Strength; /* Ofs: 0xC0 Size: 0x38 - StructProperty Engine.ParticleModuleAttractorPoint.Strength */
	uint8_t boolFieldF8;
	uint8_t boolFieldF9;
	uint8_t UnknownDataFA[0x6];


	inline bool SetPosition(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetRange(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x88, value); }
	inline bool SetStrength(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xC0, value); }
	inline bool StrengthByDistance()
	{
		return boolFieldF8& 0x1;
	}
	inline bool SetStrengthByDistance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAffectBaseVelocity()
	{
		return boolFieldF8& 0x2;
	}
	inline bool SetbAffectBaseVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bOverrideVelocity()
	{
		return boolFieldF8& 0x4;
	}
	inline bool SetbOverrideVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUseWorldSpacePosition()
	{
		return boolFieldF8& 0x8;
	}
	inline bool SetbUseWorldSpacePosition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool Positive_X()
	{
		return boolFieldF8& 0x10;
	}
	inline bool SetPositive_X(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool Positive_Y()
	{
		return boolFieldF8& 0x20;
	}
	inline bool SetPositive_Y(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool Positive_Z()
	{
		return boolFieldF8& 0x40;
	}
	inline bool SetPositive_Z(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool Negative_X()
	{
		return boolFieldF8& 0x80;
	}
	inline bool SetNegative_X(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool Negative_Y()
	{
		return boolFieldF9& 0x1;
	}
	inline bool SetNegative_Y(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool Negative_Z()
	{
		return boolFieldF9& 0x2;
	}
	inline bool SetNegative_Z(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF9, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAttractorPoint = sizeof(UParticleModuleAttractorPoint); // 256
    static_assert(sizeof(UParticleModuleAttractorPoint) == 0x100, "Size of UParticleModuleAttractorPoint is not correct.");
	auto constexpr UParticleModuleAttractorPoint_Position_Offset = offsetof(UParticleModuleAttractorPoint, Position);
	static_assert(UParticleModuleAttractorPoint_Position_Offset == 0x38, "UParticleModuleAttractorPoint::Position offset is not 38");
	auto constexpr UParticleModuleAttractorPoint_Range_Offset = offsetof(UParticleModuleAttractorPoint, Range);
	static_assert(UParticleModuleAttractorPoint_Range_Offset == 0x88, "UParticleModuleAttractorPoint::Range offset is not 88");
	auto constexpr UParticleModuleAttractorPoint_Strength_Offset = offsetof(UParticleModuleAttractorPoint, Strength);
	static_assert(UParticleModuleAttractorPoint_Strength_Offset == 0xc0, "UParticleModuleAttractorPoint::Strength offset is not c0");
	auto constexpr UParticleModuleAttractorPoint_boolFieldF8_Offset = offsetof(UParticleModuleAttractorPoint, boolFieldF8);
	static_assert(UParticleModuleAttractorPoint_boolFieldF8_Offset == 0xf8, "UParticleModuleAttractorPoint::boolFieldF8 offset is not f8");
	auto constexpr UParticleModuleAttractorPoint_boolFieldF9_Offset = offsetof(UParticleModuleAttractorPoint, boolFieldF9);
	static_assert(UParticleModuleAttractorPoint_boolFieldF9_Offset == 0xf9, "UParticleModuleAttractorPoint::boolFieldF9 offset is not f9");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
