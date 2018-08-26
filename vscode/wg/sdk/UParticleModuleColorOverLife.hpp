#pragma once
#include "UParticleModuleColorBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleColorOverLife // Size: 0xC8
	: public UParticleModuleColorBase // Size: 0x38
{
private:
	typedef UParticleModuleColorOverLife t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1078); // id32("Class Engine.ParticleModuleColorOverLife")
		return ptr;
	}
	FRawDistributionVector ColorOverLife; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleColorOverLife.ColorOverLife */
	FRawDistributionFloat AlphaOverLife; /* Ofs: 0x88 Size: 0x38 - StructProperty Engine.ParticleModuleColorOverLife.AlphaOverLife */
	uint8_t boolFieldC0;
	uint8_t UnknownDataC1[0x7];


	inline bool SetColorOverLife(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetAlphaOverLife(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x88, value); }
	inline bool bClampAlpha()
	{
		return boolFieldC0& 0x1;
	}
	inline bool SetbClampAlpha(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleColorOverLife = sizeof(UParticleModuleColorOverLife); // 200
    static_assert(sizeof(UParticleModuleColorOverLife) == 0xC8, "Size of UParticleModuleColorOverLife is not correct.");
	auto constexpr UParticleModuleColorOverLife_ColorOverLife_Offset = offsetof(UParticleModuleColorOverLife, ColorOverLife);
	static_assert(UParticleModuleColorOverLife_ColorOverLife_Offset == 0x38, "UParticleModuleColorOverLife::ColorOverLife offset is not 38");
	auto constexpr UParticleModuleColorOverLife_AlphaOverLife_Offset = offsetof(UParticleModuleColorOverLife, AlphaOverLife);
	static_assert(UParticleModuleColorOverLife_AlphaOverLife_Offset == 0x88, "UParticleModuleColorOverLife::AlphaOverLife offset is not 88");
	auto constexpr UParticleModuleColorOverLife_boolFieldC0_Offset = offsetof(UParticleModuleColorOverLife, boolFieldC0);
	static_assert(UParticleModuleColorOverLife_boolFieldC0_Offset == 0xc0, "UParticleModuleColorOverLife::boolFieldC0 offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
