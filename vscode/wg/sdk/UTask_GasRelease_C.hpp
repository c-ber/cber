#pragma once
#include "UBTTask_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTask_GasRelease_C // Size: 0xF8
	: public UBTTask_BlueprintBase // Size: 0xA8
{
private:
	typedef UTask_GasRelease_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114650); // id32("BlueprintGeneratedClass Task_GasRelease.Task_GasRelease_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA8 Size: 0x8 - StructProperty Task_GasRelease.Task_GasRelease_C.UberGraphFrame */
	ExternalPtr<struct UTslGameState> GameState; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty Task_GasRelease.Task_GasRelease_C.GameState */
	FBlackboardKeySelector ReleaseDuration; /* Ofs: 0xB8 Size: 0x28 - StructProperty Task_GasRelease.Task_GasRelease_C.ReleaseDuration */
	float ElapsedDuration; /* Ofs: 0xE0 Size: 0x4 - FloatProperty Task_GasRelease.Task_GasRelease_C.ElapsedDuration */
	float TotalDuration; /* Ofs: 0xE4 Size: 0x4 - FloatProperty Task_GasRelease.Task_GasRelease_C.TotalDuration */
	float BeginRadius; /* Ofs: 0xE8 Size: 0x4 - FloatProperty Task_GasRelease.Task_GasRelease_C.BeginRadius */
	FVector BeginPosition; /* Ofs: 0xEC Size: 0xC - StructProperty Task_GasRelease.Task_GasRelease_C.BeginPosition */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA8, value); }
	inline bool SetGameState(t_structHelper inst, ExternalPtr<struct UTslGameState> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetReleaseDuration(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xB8, value); }
	inline bool SetElapsedDuration(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetTotalDuration(t_structHelper inst, float value) { inst.WriteOffset(0xE4, value); }
	inline bool SetBeginRadius(t_structHelper inst, float value) { inst.WriteOffset(0xE8, value); }
	inline bool SetBeginPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0xEC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTask_GasRelease_C = sizeof(UTask_GasRelease_C); // 248
    static_assert(sizeof(UTask_GasRelease_C) == 0xF8, "Size of UTask_GasRelease_C is not correct.");
	auto constexpr UTask_GasRelease_C_UberGraphFrame_Offset = offsetof(UTask_GasRelease_C, UberGraphFrame);
	static_assert(UTask_GasRelease_C_UberGraphFrame_Offset == 0xa8, "UTask_GasRelease_C::UberGraphFrame offset is not a8");
	auto constexpr UTask_GasRelease_C_GameState_Offset = offsetof(UTask_GasRelease_C, GameState);
	static_assert(UTask_GasRelease_C_GameState_Offset == 0xb0, "UTask_GasRelease_C::GameState offset is not b0");
	auto constexpr UTask_GasRelease_C_ReleaseDuration_Offset = offsetof(UTask_GasRelease_C, ReleaseDuration);
	static_assert(UTask_GasRelease_C_ReleaseDuration_Offset == 0xb8, "UTask_GasRelease_C::ReleaseDuration offset is not b8");
	auto constexpr UTask_GasRelease_C_ElapsedDuration_Offset = offsetof(UTask_GasRelease_C, ElapsedDuration);
	static_assert(UTask_GasRelease_C_ElapsedDuration_Offset == 0xe0, "UTask_GasRelease_C::ElapsedDuration offset is not e0");
	auto constexpr UTask_GasRelease_C_TotalDuration_Offset = offsetof(UTask_GasRelease_C, TotalDuration);
	static_assert(UTask_GasRelease_C_TotalDuration_Offset == 0xe4, "UTask_GasRelease_C::TotalDuration offset is not e4");
	auto constexpr UTask_GasRelease_C_BeginRadius_Offset = offsetof(UTask_GasRelease_C, BeginRadius);
	static_assert(UTask_GasRelease_C_BeginRadius_Offset == 0xe8, "UTask_GasRelease_C::BeginRadius offset is not e8");
	auto constexpr UTask_GasRelease_C_BeginPosition_Offset = offsetof(UTask_GasRelease_C, BeginPosition);
	static_assert(UTask_GasRelease_C_BeginPosition_Offset == 0xec, "UTask_GasRelease_C::BeginPosition offset is not ec");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
