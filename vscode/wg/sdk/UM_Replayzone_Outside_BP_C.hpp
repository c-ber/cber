#pragma once
#include "UTslPostProcessEffect.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UM_Replayzone_Outside_BP_C // Size: 0x484
	: public UTslPostProcessEffect // Size: 0x460
{
private:
	typedef UM_Replayzone_Outside_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114600); // id32("BlueprintGeneratedClass M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x460 Size: 0x8 - StructProperty M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x468 Size: 0x8 - ObjectProperty M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.DefaultSceneRoot */
	float GlitchControlValue; /* Ofs: 0x470 Size: 0x4 - FloatProperty M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.GlitchControlValue */
	uint8_t UnknownData474[0x4];
	ExternalPtr<struct UCurveFloat> ReplayZoneCurveValue; /* Ofs: 0x478 Size: 0x8 - ObjectProperty M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.ReplayZoneCurveValue */
	float ActorSpawnTime; /* Ofs: 0x480 Size: 0x4 - FloatProperty M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.ActorSpawnTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x460, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x468, value); }
	inline bool SetGlitchControlValue(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool SetReplayZoneCurveValue(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x478, value); }
	inline bool SetActorSpawnTime(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUM_Replayzone_Outside_BP_C = sizeof(UM_Replayzone_Outside_BP_C); // 1156
    static_assert(sizeof(UM_Replayzone_Outside_BP_C) == 0x484, "Size of UM_Replayzone_Outside_BP_C is not correct.");
	auto constexpr UM_Replayzone_Outside_BP_C_UberGraphFrame_Offset = offsetof(UM_Replayzone_Outside_BP_C, UberGraphFrame);
	static_assert(UM_Replayzone_Outside_BP_C_UberGraphFrame_Offset == 0x460, "UM_Replayzone_Outside_BP_C::UberGraphFrame offset is not 460");
	auto constexpr UM_Replayzone_Outside_BP_C_DefaultSceneRoot_Offset = offsetof(UM_Replayzone_Outside_BP_C, DefaultSceneRoot);
	static_assert(UM_Replayzone_Outside_BP_C_DefaultSceneRoot_Offset == 0x468, "UM_Replayzone_Outside_BP_C::DefaultSceneRoot offset is not 468");
	auto constexpr UM_Replayzone_Outside_BP_C_GlitchControlValue_Offset = offsetof(UM_Replayzone_Outside_BP_C, GlitchControlValue);
	static_assert(UM_Replayzone_Outside_BP_C_GlitchControlValue_Offset == 0x470, "UM_Replayzone_Outside_BP_C::GlitchControlValue offset is not 470");
	auto constexpr UM_Replayzone_Outside_BP_C_ReplayZoneCurveValue_Offset = offsetof(UM_Replayzone_Outside_BP_C, ReplayZoneCurveValue);
	static_assert(UM_Replayzone_Outside_BP_C_ReplayZoneCurveValue_Offset == 0x478, "UM_Replayzone_Outside_BP_C::ReplayZoneCurveValue offset is not 478");
	auto constexpr UM_Replayzone_Outside_BP_C_ActorSpawnTime_Offset = offsetof(UM_Replayzone_Outside_BP_C, ActorSpawnTime);
	static_assert(UM_Replayzone_Outside_BP_C_ActorSpawnTime_Offset == 0x480, "UM_Replayzone_Outside_BP_C::ActorSpawnTime offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
