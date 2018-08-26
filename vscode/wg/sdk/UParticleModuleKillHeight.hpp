#pragma once
#include "UParticleModuleKillBase.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleKillHeight // Size: 0x78
	: public UParticleModuleKillBase // Size: 0x38
{
private:
	typedef UParticleModuleKillHeight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1087); // id32("Class Engine.ParticleModuleKillHeight")
		return ptr;
	}
	FRawDistributionFloat Height; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.ParticleModuleKillHeight.Height */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];


	inline bool SetHeight(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x38, value); }
	inline bool bAbsolute()
	{
		return boolField70& 0x1;
	}
	inline bool SetbAbsolute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFloor()
	{
		return boolField70& 0x2;
	}
	inline bool SetbFloor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bApplyPSysScale()
	{
		return boolField70& 0x4;
	}
	inline bool SetbApplyPSysScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleKillHeight = sizeof(UParticleModuleKillHeight); // 120
    static_assert(sizeof(UParticleModuleKillHeight) == 0x78, "Size of UParticleModuleKillHeight is not correct.");
	auto constexpr UParticleModuleKillHeight_Height_Offset = offsetof(UParticleModuleKillHeight, Height);
	static_assert(UParticleModuleKillHeight_Height_Offset == 0x38, "UParticleModuleKillHeight::Height offset is not 38");
	auto constexpr UParticleModuleKillHeight_boolField70_Offset = offsetof(UParticleModuleKillHeight, boolField70);
	static_assert(UParticleModuleKillHeight_boolField70_Offset == 0x70, "UParticleModuleKillHeight::boolField70 offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
