#pragma once
#include "FROscillator.hpp"
#include "FVOscillator.hpp"
#include "FFOscillator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraShake // Size: 0x170
	: public UObject // Size: 0x30
{
private:
	typedef UCameraShake t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1730); // id32("Class Engine.CameraShake")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x3];
	float OscillationDuration; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.CameraShake.OscillationDuration */
	float OscillationBlendInTime; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.CameraShake.OscillationBlendInTime */
	float OscillationBlendOutTime; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.CameraShake.OscillationBlendOutTime */
	FROscillator RotOscillation; /* Ofs: 0x40 Size: 0x24 - StructProperty Engine.CameraShake.RotOscillation */
	FVOscillator LocOscillation; /* Ofs: 0x64 Size: 0x24 - StructProperty Engine.CameraShake.LocOscillation */
	FFOscillator FOVOscillation; /* Ofs: 0x88 Size: 0xC - StructProperty Engine.CameraShake.FOVOscillation */
	float AnimPlayRate; /* Ofs: 0x94 Size: 0x4 - FloatProperty Engine.CameraShake.AnimPlayRate */
	float AnimScale; /* Ofs: 0x98 Size: 0x4 - FloatProperty Engine.CameraShake.AnimScale */
	float AnimBlendInTime; /* Ofs: 0x9C Size: 0x4 - FloatProperty Engine.CameraShake.AnimBlendInTime */
	float AnimBlendOutTime; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.CameraShake.AnimBlendOutTime */
	float RandomAnimSegmentDuration; /* Ofs: 0xA4 Size: 0x4 - FloatProperty Engine.CameraShake.RandomAnimSegmentDuration */
	ExternalPtr<struct UCameraAnim> Anim; /* Ofs: 0xA8 Size: 0x8 - ObjectProperty Engine.CameraShake.Anim */
	uint8_t boolFieldB0;
	uint8_t UnknownDataB1[0x17];
	ExternalPtr<struct UPlayerCameraManager> CameraOwner; /* Ofs: 0xC8 Size: 0x8 - ObjectProperty Engine.CameraShake.CameraOwner */
	uint8_t UnknownDataD0[0x88];
	float ShakeScale; /* Ofs: 0x158 Size: 0x4 - FloatProperty Engine.CameraShake.ShakeScale */
	float OscillatorTimeRemaining; /* Ofs: 0x15C Size: 0x4 - FloatProperty Engine.CameraShake.OscillatorTimeRemaining */
	ExternalPtr<struct UCameraAnimInst> AnimInst; /* Ofs: 0x160 Size: 0x8 - ObjectProperty Engine.CameraShake.AnimInst */
	uint8_t UnknownData168[0x8];


	inline bool bSingleInstance()
	{
		return boolField30& 0x1;
	}
	inline bool SetbSingleInstance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOscillationDuration(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetOscillationBlendInTime(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetOscillationBlendOutTime(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetRotOscillation(t_structHelper inst, FROscillator value) { inst.WriteOffset(0x40, value); }
	inline bool SetLocOscillation(t_structHelper inst, FVOscillator value) { inst.WriteOffset(0x64, value); }
	inline bool SetFOVOscillation(t_structHelper inst, FFOscillator value) { inst.WriteOffset(0x88, value); }
	inline bool SetAnimPlayRate(t_structHelper inst, float value) { inst.WriteOffset(0x94, value); }
	inline bool SetAnimScale(t_structHelper inst, float value) { inst.WriteOffset(0x98, value); }
	inline bool SetAnimBlendInTime(t_structHelper inst, float value) { inst.WriteOffset(0x9C, value); }
	inline bool SetAnimBlendOutTime(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
	inline bool SetRandomAnimSegmentDuration(t_structHelper inst, float value) { inst.WriteOffset(0xA4, value); }
	inline bool SetAnim(t_structHelper inst, ExternalPtr<struct UCameraAnim> value) { inst.WriteOffset(0xA8, value); }
	inline bool bRandomAnimSegment()
	{
		return boolFieldB0& 0x1;
	}
	inline bool SetbRandomAnimSegment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCameraOwner(t_structHelper inst, ExternalPtr<struct UPlayerCameraManager> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetShakeScale(t_structHelper inst, float value) { inst.WriteOffset(0x158, value); }
	inline bool SetOscillatorTimeRemaining(t_structHelper inst, float value) { inst.WriteOffset(0x15C, value); }
	inline bool SetAnimInst(t_structHelper inst, ExternalPtr<struct UCameraAnimInst> value) { inst.WriteOffset(0x160, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraShake = sizeof(UCameraShake); // 368
    static_assert(sizeof(UCameraShake) == 0x170, "Size of UCameraShake is not correct.");
	auto constexpr UCameraShake_boolField30_Offset = offsetof(UCameraShake, boolField30);
	static_assert(UCameraShake_boolField30_Offset == 0x30, "UCameraShake::boolField30 offset is not 30");
	auto constexpr UCameraShake_OscillationDuration_Offset = offsetof(UCameraShake, OscillationDuration);
	static_assert(UCameraShake_OscillationDuration_Offset == 0x34, "UCameraShake::OscillationDuration offset is not 34");
	auto constexpr UCameraShake_OscillationBlendInTime_Offset = offsetof(UCameraShake, OscillationBlendInTime);
	static_assert(UCameraShake_OscillationBlendInTime_Offset == 0x38, "UCameraShake::OscillationBlendInTime offset is not 38");
	auto constexpr UCameraShake_OscillationBlendOutTime_Offset = offsetof(UCameraShake, OscillationBlendOutTime);
	static_assert(UCameraShake_OscillationBlendOutTime_Offset == 0x3c, "UCameraShake::OscillationBlendOutTime offset is not 3c");
	auto constexpr UCameraShake_RotOscillation_Offset = offsetof(UCameraShake, RotOscillation);
	static_assert(UCameraShake_RotOscillation_Offset == 0x40, "UCameraShake::RotOscillation offset is not 40");
	auto constexpr UCameraShake_LocOscillation_Offset = offsetof(UCameraShake, LocOscillation);
	static_assert(UCameraShake_LocOscillation_Offset == 0x64, "UCameraShake::LocOscillation offset is not 64");
	auto constexpr UCameraShake_FOVOscillation_Offset = offsetof(UCameraShake, FOVOscillation);
	static_assert(UCameraShake_FOVOscillation_Offset == 0x88, "UCameraShake::FOVOscillation offset is not 88");
	auto constexpr UCameraShake_AnimPlayRate_Offset = offsetof(UCameraShake, AnimPlayRate);
	static_assert(UCameraShake_AnimPlayRate_Offset == 0x94, "UCameraShake::AnimPlayRate offset is not 94");
	auto constexpr UCameraShake_AnimScale_Offset = offsetof(UCameraShake, AnimScale);
	static_assert(UCameraShake_AnimScale_Offset == 0x98, "UCameraShake::AnimScale offset is not 98");
	auto constexpr UCameraShake_AnimBlendInTime_Offset = offsetof(UCameraShake, AnimBlendInTime);
	static_assert(UCameraShake_AnimBlendInTime_Offset == 0x9c, "UCameraShake::AnimBlendInTime offset is not 9c");
	auto constexpr UCameraShake_AnimBlendOutTime_Offset = offsetof(UCameraShake, AnimBlendOutTime);
	static_assert(UCameraShake_AnimBlendOutTime_Offset == 0xa0, "UCameraShake::AnimBlendOutTime offset is not a0");
	auto constexpr UCameraShake_RandomAnimSegmentDuration_Offset = offsetof(UCameraShake, RandomAnimSegmentDuration);
	static_assert(UCameraShake_RandomAnimSegmentDuration_Offset == 0xa4, "UCameraShake::RandomAnimSegmentDuration offset is not a4");
	auto constexpr UCameraShake_Anim_Offset = offsetof(UCameraShake, Anim);
	static_assert(UCameraShake_Anim_Offset == 0xa8, "UCameraShake::Anim offset is not a8");
	auto constexpr UCameraShake_boolFieldB0_Offset = offsetof(UCameraShake, boolFieldB0);
	static_assert(UCameraShake_boolFieldB0_Offset == 0xb0, "UCameraShake::boolFieldB0 offset is not b0");
	auto constexpr UCameraShake_CameraOwner_Offset = offsetof(UCameraShake, CameraOwner);
	static_assert(UCameraShake_CameraOwner_Offset == 0xc8, "UCameraShake::CameraOwner offset is not c8");
	auto constexpr UCameraShake_ShakeScale_Offset = offsetof(UCameraShake, ShakeScale);
	static_assert(UCameraShake_ShakeScale_Offset == 0x158, "UCameraShake::ShakeScale offset is not 158");
	auto constexpr UCameraShake_OscillatorTimeRemaining_Offset = offsetof(UCameraShake, OscillatorTimeRemaining);
	static_assert(UCameraShake_OscillatorTimeRemaining_Offset == 0x15c, "UCameraShake::OscillatorTimeRemaining offset is not 15c");
	auto constexpr UCameraShake_AnimInst_Offset = offsetof(UCameraShake, AnimInst);
	static_assert(UCameraShake_AnimInst_Offset == 0x160, "UCameraShake::AnimInst offset is not 160");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
