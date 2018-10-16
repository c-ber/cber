#pragma once
#include "USoundNode.hpp"
#include "FModulatorContinuousParams.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeModulatorContinuous // Size: 0x80
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeModulatorContinuous t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1227); // id32("Class Engine.SoundNodeModulatorContinuous")
		return ptr;
	}
	FModulatorContinuousParams PitchModulationParams; /* Ofs: 0x40 Size: 0x20 - StructProperty Engine.SoundNodeModulatorContinuous.PitchModulationParams */
	FModulatorContinuousParams VolumeModulationParams; /* Ofs: 0x60 Size: 0x20 - StructProperty Engine.SoundNodeModulatorContinuous.VolumeModulationParams */


	inline bool SetPitchModulationParams(t_structHelper inst, FModulatorContinuousParams value) { inst.WriteOffset(0x40, value); }
	inline bool SetVolumeModulationParams(t_structHelper inst, FModulatorContinuousParams value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeModulatorContinuous = sizeof(USoundNodeModulatorContinuous); // 128
    static_assert(sizeof(USoundNodeModulatorContinuous) == 0x80, "Size of USoundNodeModulatorContinuous is not correct.");
	auto constexpr USoundNodeModulatorContinuous_PitchModulationParams_Offset = offsetof(USoundNodeModulatorContinuous, PitchModulationParams);
	static_assert(USoundNodeModulatorContinuous_PitchModulationParams_Offset == 0x40, "USoundNodeModulatorContinuous::PitchModulationParams offset is not 40");
	auto constexpr USoundNodeModulatorContinuous_VolumeModulationParams_Offset = offsetof(USoundNodeModulatorContinuous, VolumeModulationParams);
	static_assert(USoundNodeModulatorContinuous_VolumeModulationParams_Offset == 0x60, "USoundNodeModulatorContinuous::VolumeModulationParams offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
