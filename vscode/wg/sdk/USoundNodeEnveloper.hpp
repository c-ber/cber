#pragma once
#include "USoundNode.hpp"
#include "FRuntimeFloatCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeEnveloper // Size: 0x168
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeEnveloper t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1221); // id32("Class Engine.SoundNodeEnveloper")
		return ptr;
	}
	float LoopStart; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.SoundNodeEnveloper.LoopStart */
	float LoopEnd; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.SoundNodeEnveloper.LoopEnd */
	float DurationAfterLoop; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.SoundNodeEnveloper.DurationAfterLoop */
	int32_t LoopCount; /* Ofs: 0x4C Size: 0x4 - IntProperty Engine.SoundNodeEnveloper.LoopCount */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];
	ExternalPtr<struct UDistributionFloatConstantCurve> VolumeInterpCurve; /* Ofs: 0x58 Size: 0x8 - ObjectProperty Engine.SoundNodeEnveloper.VolumeInterpCurve */
	ExternalPtr<struct UDistributionFloatConstantCurve> PitchInterpCurve; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.SoundNodeEnveloper.PitchInterpCurve */
	FRuntimeFloatCurve VolumeCurve; /* Ofs: 0x68 Size: 0x78 - StructProperty Engine.SoundNodeEnveloper.VolumeCurve */
	FRuntimeFloatCurve PitchCurve; /* Ofs: 0xE0 Size: 0x78 - StructProperty Engine.SoundNodeEnveloper.PitchCurve */
	float PitchMin; /* Ofs: 0x158 Size: 0x4 - FloatProperty Engine.SoundNodeEnveloper.PitchMin */
	float PitchMax; /* Ofs: 0x15C Size: 0x4 - FloatProperty Engine.SoundNodeEnveloper.PitchMax */
	float VolumeMin; /* Ofs: 0x160 Size: 0x4 - FloatProperty Engine.SoundNodeEnveloper.VolumeMin */
	float VolumeMax; /* Ofs: 0x164 Size: 0x4 - FloatProperty Engine.SoundNodeEnveloper.VolumeMax */


	inline bool SetLoopStart(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetLoopEnd(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetDurationAfterLoop(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetLoopCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C, value); }
	inline bool bLoopIndefinitely()
	{
		return boolField50& 0x1;
	}
	inline bool SetbLoopIndefinitely(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLoop()
	{
		return boolField50& 0x2;
	}
	inline bool SetbLoop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetVolumeInterpCurve(t_structHelper inst, ExternalPtr<struct UDistributionFloatConstantCurve> value) { inst.WriteOffset(0x58, value); }
	inline bool SetPitchInterpCurve(t_structHelper inst, ExternalPtr<struct UDistributionFloatConstantCurve> value) { inst.WriteOffset(0x60, value); }
	inline bool SetVolumeCurve(t_structHelper inst, FRuntimeFloatCurve value) { inst.WriteOffset(0x68, value); }
	inline bool SetPitchCurve(t_structHelper inst, FRuntimeFloatCurve value) { inst.WriteOffset(0xE0, value); }
	inline bool SetPitchMin(t_structHelper inst, float value) { inst.WriteOffset(0x158, value); }
	inline bool SetPitchMax(t_structHelper inst, float value) { inst.WriteOffset(0x15C, value); }
	inline bool SetVolumeMin(t_structHelper inst, float value) { inst.WriteOffset(0x160, value); }
	inline bool SetVolumeMax(t_structHelper inst, float value) { inst.WriteOffset(0x164, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeEnveloper = sizeof(USoundNodeEnveloper); // 360
    static_assert(sizeof(USoundNodeEnveloper) == 0x168, "Size of USoundNodeEnveloper is not correct.");
	auto constexpr USoundNodeEnveloper_LoopStart_Offset = offsetof(USoundNodeEnveloper, LoopStart);
	static_assert(USoundNodeEnveloper_LoopStart_Offset == 0x40, "USoundNodeEnveloper::LoopStart offset is not 40");
	auto constexpr USoundNodeEnveloper_LoopEnd_Offset = offsetof(USoundNodeEnveloper, LoopEnd);
	static_assert(USoundNodeEnveloper_LoopEnd_Offset == 0x44, "USoundNodeEnveloper::LoopEnd offset is not 44");
	auto constexpr USoundNodeEnveloper_DurationAfterLoop_Offset = offsetof(USoundNodeEnveloper, DurationAfterLoop);
	static_assert(USoundNodeEnveloper_DurationAfterLoop_Offset == 0x48, "USoundNodeEnveloper::DurationAfterLoop offset is not 48");
	auto constexpr USoundNodeEnveloper_LoopCount_Offset = offsetof(USoundNodeEnveloper, LoopCount);
	static_assert(USoundNodeEnveloper_LoopCount_Offset == 0x4c, "USoundNodeEnveloper::LoopCount offset is not 4c");
	auto constexpr USoundNodeEnveloper_boolField50_Offset = offsetof(USoundNodeEnveloper, boolField50);
	static_assert(USoundNodeEnveloper_boolField50_Offset == 0x50, "USoundNodeEnveloper::boolField50 offset is not 50");
	auto constexpr USoundNodeEnveloper_VolumeInterpCurve_Offset = offsetof(USoundNodeEnveloper, VolumeInterpCurve);
	static_assert(USoundNodeEnveloper_VolumeInterpCurve_Offset == 0x58, "USoundNodeEnveloper::VolumeInterpCurve offset is not 58");
	auto constexpr USoundNodeEnveloper_PitchInterpCurve_Offset = offsetof(USoundNodeEnveloper, PitchInterpCurve);
	static_assert(USoundNodeEnveloper_PitchInterpCurve_Offset == 0x60, "USoundNodeEnveloper::PitchInterpCurve offset is not 60");
	auto constexpr USoundNodeEnveloper_VolumeCurve_Offset = offsetof(USoundNodeEnveloper, VolumeCurve);
	static_assert(USoundNodeEnveloper_VolumeCurve_Offset == 0x68, "USoundNodeEnveloper::VolumeCurve offset is not 68");
	auto constexpr USoundNodeEnveloper_PitchCurve_Offset = offsetof(USoundNodeEnveloper, PitchCurve);
	static_assert(USoundNodeEnveloper_PitchCurve_Offset == 0xe0, "USoundNodeEnveloper::PitchCurve offset is not e0");
	auto constexpr USoundNodeEnveloper_PitchMin_Offset = offsetof(USoundNodeEnveloper, PitchMin);
	static_assert(USoundNodeEnveloper_PitchMin_Offset == 0x158, "USoundNodeEnveloper::PitchMin offset is not 158");
	auto constexpr USoundNodeEnveloper_PitchMax_Offset = offsetof(USoundNodeEnveloper, PitchMax);
	static_assert(USoundNodeEnveloper_PitchMax_Offset == 0x15c, "USoundNodeEnveloper::PitchMax offset is not 15c");
	auto constexpr USoundNodeEnveloper_VolumeMin_Offset = offsetof(USoundNodeEnveloper, VolumeMin);
	static_assert(USoundNodeEnveloper_VolumeMin_Offset == 0x160, "USoundNodeEnveloper::VolumeMin offset is not 160");
	auto constexpr USoundNodeEnveloper_VolumeMax_Offset = offsetof(USoundNodeEnveloper, VolumeMax);
	static_assert(USoundNodeEnveloper_VolumeMax_Offset == 0x164, "USoundNodeEnveloper::VolumeMax offset is not 164");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
