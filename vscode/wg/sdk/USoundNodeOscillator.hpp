#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeOscillator // Size: 0x68
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeOscillator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1228); // id32("Class Engine.SoundNodeOscillator")
		return ptr;
	}
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	float AmplitudeMin; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.SoundNodeOscillator.AmplitudeMin */
	float AmplitudeMax; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.SoundNodeOscillator.AmplitudeMax */
	float FrequencyMin; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.SoundNodeOscillator.FrequencyMin */
	float FrequencyMax; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.SoundNodeOscillator.FrequencyMax */
	float OffsetMin; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.SoundNodeOscillator.OffsetMin */
	float OffsetMax; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.SoundNodeOscillator.OffsetMax */
	float CenterMin; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.SoundNodeOscillator.CenterMin */
	float CenterMax; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.SoundNodeOscillator.CenterMax */
	uint8_t UnknownData64[0x4];


	inline bool bModulateVolume()
	{
		return boolField40& 0x1;
	}
	inline bool SetbModulateVolume(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bModulatePitch()
	{
		return boolField40& 0x2;
	}
	inline bool SetbModulatePitch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetAmplitudeMin(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetAmplitudeMax(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetFrequencyMin(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetFrequencyMax(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetOffsetMin(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetOffsetMax(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetCenterMin(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetCenterMax(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeOscillator = sizeof(USoundNodeOscillator); // 104
    static_assert(sizeof(USoundNodeOscillator) == 0x68, "Size of USoundNodeOscillator is not correct.");
	auto constexpr USoundNodeOscillator_boolField40_Offset = offsetof(USoundNodeOscillator, boolField40);
	static_assert(USoundNodeOscillator_boolField40_Offset == 0x40, "USoundNodeOscillator::boolField40 offset is not 40");
	auto constexpr USoundNodeOscillator_AmplitudeMin_Offset = offsetof(USoundNodeOscillator, AmplitudeMin);
	static_assert(USoundNodeOscillator_AmplitudeMin_Offset == 0x44, "USoundNodeOscillator::AmplitudeMin offset is not 44");
	auto constexpr USoundNodeOscillator_AmplitudeMax_Offset = offsetof(USoundNodeOscillator, AmplitudeMax);
	static_assert(USoundNodeOscillator_AmplitudeMax_Offset == 0x48, "USoundNodeOscillator::AmplitudeMax offset is not 48");
	auto constexpr USoundNodeOscillator_FrequencyMin_Offset = offsetof(USoundNodeOscillator, FrequencyMin);
	static_assert(USoundNodeOscillator_FrequencyMin_Offset == 0x4c, "USoundNodeOscillator::FrequencyMin offset is not 4c");
	auto constexpr USoundNodeOscillator_FrequencyMax_Offset = offsetof(USoundNodeOscillator, FrequencyMax);
	static_assert(USoundNodeOscillator_FrequencyMax_Offset == 0x50, "USoundNodeOscillator::FrequencyMax offset is not 50");
	auto constexpr USoundNodeOscillator_OffsetMin_Offset = offsetof(USoundNodeOscillator, OffsetMin);
	static_assert(USoundNodeOscillator_OffsetMin_Offset == 0x54, "USoundNodeOscillator::OffsetMin offset is not 54");
	auto constexpr USoundNodeOscillator_OffsetMax_Offset = offsetof(USoundNodeOscillator, OffsetMax);
	static_assert(USoundNodeOscillator_OffsetMax_Offset == 0x58, "USoundNodeOscillator::OffsetMax offset is not 58");
	auto constexpr USoundNodeOscillator_CenterMin_Offset = offsetof(USoundNodeOscillator, CenterMin);
	static_assert(USoundNodeOscillator_CenterMin_Offset == 0x5c, "USoundNodeOscillator::CenterMin offset is not 5c");
	auto constexpr USoundNodeOscillator_CenterMax_Offset = offsetof(USoundNodeOscillator, CenterMax);
	static_assert(USoundNodeOscillator_CenterMax_Offset == 0x60, "USoundNodeOscillator::CenterMax offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
