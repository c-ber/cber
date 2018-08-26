#pragma once
#include "UParticleModuleColorBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleColorScaleOverLife // Size: 0xC8
	: public UParticleModuleColorBase // Size: 0x38
{
private:
	typedef UParticleModuleColorScaleOverLife t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1079); // id32("Class Engine.ParticleModuleColorScaleOverLife")
		return ptr;
	}
	FRawDistributionVector ColorScaleOverLife; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleColorScaleOverLife.ColorScaleOverLife */
	FRawDistributionFloat AlphaScaleOverLife; /* Ofs: 0x88 Size: 0x38 - StructProperty Engine.ParticleModuleColorScaleOverLife.AlphaScaleOverLife */
	uint8_t boolFieldC0;
	uint8_t UnknownDataC1[0x7];


	inline bool SetColorScaleOverLife(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetAlphaScaleOverLife(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x88, value); }
	inline bool bEmitterTime()
	{
		return boolFieldC0& 0x1;
	}
	inline bool SetbEmitterTime(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleColorScaleOverLife = sizeof(UParticleModuleColorScaleOverLife); // 200
    static_assert(sizeof(UParticleModuleColorScaleOverLife) == 0xC8, "Size of UParticleModuleColorScaleOverLife is not correct.");
	auto constexpr UParticleModuleColorScaleOverLife_ColorScaleOverLife_Offset = offsetof(UParticleModuleColorScaleOverLife, ColorScaleOverLife);
	static_assert(UParticleModuleColorScaleOverLife_ColorScaleOverLife_Offset == 0x38, "UParticleModuleColorScaleOverLife::ColorScaleOverLife offset is not 38");
	auto constexpr UParticleModuleColorScaleOverLife_AlphaScaleOverLife_Offset = offsetof(UParticleModuleColorScaleOverLife, AlphaScaleOverLife);
	static_assert(UParticleModuleColorScaleOverLife_AlphaScaleOverLife_Offset == 0x88, "UParticleModuleColorScaleOverLife::AlphaScaleOverLife offset is not 88");
	auto constexpr UParticleModuleColorScaleOverLife_boolFieldC0_Offset = offsetof(UParticleModuleColorScaleOverLife, boolFieldC0);
	static_assert(UParticleModuleColorScaleOverLife_boolFieldC0_Offset == 0xc0, "UParticleModuleColorScaleOverLife::boolFieldC0 offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
