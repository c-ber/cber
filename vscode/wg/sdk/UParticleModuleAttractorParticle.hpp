#pragma once
#include "UParticleModuleAttractorBase.hpp"
#include "FRawDistributionFloat.hpp"
#include "EAttractorParticleSelectionMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleAttractorParticle // Size: 0xC8
	: public UParticleModuleAttractorBase // Size: 0x38
{
private:
	typedef UParticleModuleAttractorParticle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1062); // id32("Class Engine.ParticleModuleAttractorParticle")
		return ptr;
	}
	FName EmitterName; /* Ofs: 0x38 Size: 0x8 - NameProperty Engine.ParticleModuleAttractorParticle.EmitterName */
	FRawDistributionFloat Range; /* Ofs: 0x40 Size: 0x38 - StructProperty Engine.ParticleModuleAttractorParticle.Range */
	uint8_t boolField78;
	uint8_t UnknownData79[0x7];
	FRawDistributionFloat Strength; /* Ofs: 0x80 Size: 0x38 - StructProperty Engine.ParticleModuleAttractorParticle.Strength */
	uint8_t boolFieldB8;
	uint8_t UnknownDataB9[0x3];
	TEnumAsByte<enum EAttractorParticleSelectionMethod> SelectionMethod; /* Ofs: 0xBC Size: 0x1 - ByteProperty Engine.ParticleModuleAttractorParticle.SelectionMethod */
	uint8_t UnknownDataBD[0x3];
	uint8_t boolFieldC0;
	uint8_t UnknownDataC1[0x3];
	int32_t LastSelIndex; /* Ofs: 0xC4 Size: 0x4 - IntProperty Engine.ParticleModuleAttractorParticle.LastSelIndex */


	inline bool SetEmitterName(t_structHelper inst, FName value) { inst.WriteOffset(0x38, value); }
	inline bool SetRange(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x40, value); }
	inline bool bStrengthByDistance()
	{
		return boolField78& 0x1;
	}
	inline bool SetbStrengthByDistance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStrength(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x80, value); }
	inline bool bAffectBaseVelocity()
	{
		return boolFieldB8& 0x1;
	}
	inline bool SetbAffectBaseVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSelectionMethod(t_structHelper inst, TEnumAsByte<enum EAttractorParticleSelectionMethod> value) { inst.WriteOffset(0xBC, value); }
	inline bool bRenewSource()
	{
		return boolFieldC0& 0x1;
	}
	inline bool SetbRenewSource(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bInheritSourceVel()
	{
		return boolFieldC0& 0x2;
	}
	inline bool SetbInheritSourceVel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetLastSelIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleAttractorParticle = sizeof(UParticleModuleAttractorParticle); // 200
    static_assert(sizeof(UParticleModuleAttractorParticle) == 0xC8, "Size of UParticleModuleAttractorParticle is not correct.");
	auto constexpr UParticleModuleAttractorParticle_EmitterName_Offset = offsetof(UParticleModuleAttractorParticle, EmitterName);
	static_assert(UParticleModuleAttractorParticle_EmitterName_Offset == 0x38, "UParticleModuleAttractorParticle::EmitterName offset is not 38");
	auto constexpr UParticleModuleAttractorParticle_Range_Offset = offsetof(UParticleModuleAttractorParticle, Range);
	static_assert(UParticleModuleAttractorParticle_Range_Offset == 0x40, "UParticleModuleAttractorParticle::Range offset is not 40");
	auto constexpr UParticleModuleAttractorParticle_boolField78_Offset = offsetof(UParticleModuleAttractorParticle, boolField78);
	static_assert(UParticleModuleAttractorParticle_boolField78_Offset == 0x78, "UParticleModuleAttractorParticle::boolField78 offset is not 78");
	auto constexpr UParticleModuleAttractorParticle_Strength_Offset = offsetof(UParticleModuleAttractorParticle, Strength);
	static_assert(UParticleModuleAttractorParticle_Strength_Offset == 0x80, "UParticleModuleAttractorParticle::Strength offset is not 80");
	auto constexpr UParticleModuleAttractorParticle_boolFieldB8_Offset = offsetof(UParticleModuleAttractorParticle, boolFieldB8);
	static_assert(UParticleModuleAttractorParticle_boolFieldB8_Offset == 0xb8, "UParticleModuleAttractorParticle::boolFieldB8 offset is not b8");
	auto constexpr UParticleModuleAttractorParticle_SelectionMethod_Offset = offsetof(UParticleModuleAttractorParticle, SelectionMethod);
	static_assert(UParticleModuleAttractorParticle_SelectionMethod_Offset == 0xbc, "UParticleModuleAttractorParticle::SelectionMethod offset is not bc");
	auto constexpr UParticleModuleAttractorParticle_boolFieldC0_Offset = offsetof(UParticleModuleAttractorParticle, boolFieldC0);
	static_assert(UParticleModuleAttractorParticle_boolFieldC0_Offset == 0xc0, "UParticleModuleAttractorParticle::boolFieldC0 offset is not c0");
	auto constexpr UParticleModuleAttractorParticle_LastSelIndex_Offset = offsetof(UParticleModuleAttractorParticle, LastSelIndex);
	static_assert(UParticleModuleAttractorParticle_LastSelIndex_Offset == 0xc4, "UParticleModuleAttractorParticle::LastSelIndex offset is not c4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
