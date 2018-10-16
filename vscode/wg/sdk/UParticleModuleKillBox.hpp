#pragma once
#include "UParticleModuleKillBase.hpp"
#include "FRawDistributionVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleKillBox // Size: 0xE0
	: public UParticleModuleKillBase // Size: 0x38
{
private:
	typedef UParticleModuleKillBox t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1086); // id32("Class Engine.ParticleModuleKillBox")
		return ptr;
	}
	FRawDistributionVector LowerLeftCorner; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleKillBox.LowerLeftCorner */
	FRawDistributionVector UpperRightCorner; /* Ofs: 0x88 Size: 0x50 - StructProperty Engine.ParticleModuleKillBox.UpperRightCorner */
	uint8_t boolFieldD8;
	uint8_t UnknownDataD9[0x7];


	inline bool SetLowerLeftCorner(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetUpperRightCorner(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x88, value); }
	inline bool bAbsolute()
	{
		return boolFieldD8& 0x1;
	}
	inline bool SetbAbsolute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bKillInside()
	{
		return boolFieldD8& 0x2;
	}
	inline bool SetbKillInside(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAxisAlignedAndFixedSize()
	{
		return boolFieldD8& 0x4;
	}
	inline bool SetbAxisAlignedAndFixedSize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleKillBox = sizeof(UParticleModuleKillBox); // 224
    static_assert(sizeof(UParticleModuleKillBox) == 0xE0, "Size of UParticleModuleKillBox is not correct.");
	auto constexpr UParticleModuleKillBox_LowerLeftCorner_Offset = offsetof(UParticleModuleKillBox, LowerLeftCorner);
	static_assert(UParticleModuleKillBox_LowerLeftCorner_Offset == 0x38, "UParticleModuleKillBox::LowerLeftCorner offset is not 38");
	auto constexpr UParticleModuleKillBox_UpperRightCorner_Offset = offsetof(UParticleModuleKillBox, UpperRightCorner);
	static_assert(UParticleModuleKillBox_UpperRightCorner_Offset == 0x88, "UParticleModuleKillBox::UpperRightCorner offset is not 88");
	auto constexpr UParticleModuleKillBox_boolFieldD8_Offset = offsetof(UParticleModuleKillBox, boolFieldD8);
	static_assert(UParticleModuleKillBox_boolFieldD8_Offset == 0xd8, "UParticleModuleKillBox::boolFieldD8 offset is not d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
