#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeModulator // Size: 0x50
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeModulator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1226); // id32("Class Engine.SoundNodeModulator")
		return ptr;
	}
	float PitchMin; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.SoundNodeModulator.PitchMin */
	float PitchMax; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.SoundNodeModulator.PitchMax */
	float VolumeMin; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.SoundNodeModulator.VolumeMin */
	float VolumeMax; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.SoundNodeModulator.VolumeMax */


	inline bool SetPitchMin(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetPitchMax(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetVolumeMin(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetVolumeMax(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeModulator = sizeof(USoundNodeModulator); // 80
    static_assert(sizeof(USoundNodeModulator) == 0x50, "Size of USoundNodeModulator is not correct.");
	auto constexpr USoundNodeModulator_PitchMin_Offset = offsetof(USoundNodeModulator, PitchMin);
	static_assert(USoundNodeModulator_PitchMin_Offset == 0x40, "USoundNodeModulator::PitchMin offset is not 40");
	auto constexpr USoundNodeModulator_PitchMax_Offset = offsetof(USoundNodeModulator, PitchMax);
	static_assert(USoundNodeModulator_PitchMax_Offset == 0x44, "USoundNodeModulator::PitchMax offset is not 44");
	auto constexpr USoundNodeModulator_VolumeMin_Offset = offsetof(USoundNodeModulator, VolumeMin);
	static_assert(USoundNodeModulator_VolumeMin_Offset == 0x48, "USoundNodeModulator::VolumeMin offset is not 48");
	auto constexpr USoundNodeModulator_VolumeMax_Offset = offsetof(USoundNodeModulator, VolumeMax);
	static_assert(USoundNodeModulator_VolumeMax_Offset == 0x4c, "USoundNodeModulator::VolumeMax offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
