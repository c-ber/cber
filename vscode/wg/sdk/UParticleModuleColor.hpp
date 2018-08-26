#pragma once
#include "UParticleModuleColorBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleColor // Size: 0xC8
	: public UParticleModuleColorBase // Size: 0x38
{
private:
	typedef UParticleModuleColor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1076); // id32("Class Engine.ParticleModuleColor")
		return ptr;
	}
	FRawDistributionVector StartColor; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleColor.StartColor */
	FRawDistributionFloat StartAlpha; /* Ofs: 0x88 Size: 0x38 - StructProperty Engine.ParticleModuleColor.StartAlpha */
	uint8_t boolFieldC0;
	uint8_t UnknownDataC1[0x7];


	inline bool SetStartColor(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetStartAlpha(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x88, value); }
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

    auto constexpr sizeofUParticleModuleColor = sizeof(UParticleModuleColor); // 200
    static_assert(sizeof(UParticleModuleColor) == 0xC8, "Size of UParticleModuleColor is not correct.");
	auto constexpr UParticleModuleColor_StartColor_Offset = offsetof(UParticleModuleColor, StartColor);
	static_assert(UParticleModuleColor_StartColor_Offset == 0x38, "UParticleModuleColor::StartColor offset is not 38");
	auto constexpr UParticleModuleColor_StartAlpha_Offset = offsetof(UParticleModuleColor, StartAlpha);
	static_assert(UParticleModuleColor_StartAlpha_Offset == 0x88, "UParticleModuleColor::StartAlpha offset is not 88");
	auto constexpr UParticleModuleColor_boolFieldC0_Offset = offsetof(UParticleModuleColor, boolFieldC0);
	static_assert(UParticleModuleColor_boolFieldC0_Offset == 0xc0, "UParticleModuleColor::boolFieldC0 offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
