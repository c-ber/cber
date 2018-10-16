#pragma once
#include "UBTTask_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTask_GasWarning_C // Size: 0x15C
	: public UBTTask_BlueprintBase // Size: 0xA8
{
private:
	typedef UTask_GasWarning_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114648); // id32("BlueprintGeneratedClass Task_GasWarning.Task_GasWarning_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA8 Size: 0x8 - StructProperty Task_GasWarning.Task_GasWarning_C.UberGraphFrame */
	FBlackboardKeySelector WarningPosition; /* Ofs: 0xB0 Size: 0x28 - StructProperty Task_GasWarning.Task_GasWarning_C.WarningPosition */
	FBlackboardKeySelector WarningRadius; /* Ofs: 0xD8 Size: 0x28 - StructProperty Task_GasWarning.Task_GasWarning_C.WarningRadius */
	FBlackboardKeySelector WarningDuration; /* Ofs: 0x100 Size: 0x28 - StructProperty Task_GasWarning.Task_GasWarning_C.WarningDuration */
	float RemainDuration; /* Ofs: 0x128 Size: 0x4 - FloatProperty Task_GasWarning.Task_GasWarning_C.RemainDuration */
	int32_t PoisonWarningTimeIndex; /* Ofs: 0x12C Size: 0x4 - IntProperty Task_GasWarning.Task_GasWarning_C.PoisonWarningTimeIndex */
	FBlackboardKeySelector ReleaseDuration; /* Ofs: 0x130 Size: 0x28 - StructProperty Task_GasWarning.Task_GasWarning_C.ReleaseDuration */
	float TotalRemainDuration; /* Ofs: 0x158 Size: 0x4 - FloatProperty Task_GasWarning.Task_GasWarning_C.TotalRemainDuration */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA8, value); }
	inline bool SetWarningPosition(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xB0, value); }
	inline bool SetWarningRadius(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xD8, value); }
	inline bool SetWarningDuration(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x100, value); }
	inline bool SetRemainDuration(t_structHelper inst, float value) { inst.WriteOffset(0x128, value); }
	inline bool SetPoisonWarningTimeIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x12C, value); }
	inline bool SetReleaseDuration(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x130, value); }
	inline bool SetTotalRemainDuration(t_structHelper inst, float value) { inst.WriteOffset(0x158, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTask_GasWarning_C = sizeof(UTask_GasWarning_C); // 348
    static_assert(sizeof(UTask_GasWarning_C) == 0x15C, "Size of UTask_GasWarning_C is not correct.");
	auto constexpr UTask_GasWarning_C_UberGraphFrame_Offset = offsetof(UTask_GasWarning_C, UberGraphFrame);
	static_assert(UTask_GasWarning_C_UberGraphFrame_Offset == 0xa8, "UTask_GasWarning_C::UberGraphFrame offset is not a8");
	auto constexpr UTask_GasWarning_C_WarningPosition_Offset = offsetof(UTask_GasWarning_C, WarningPosition);
	static_assert(UTask_GasWarning_C_WarningPosition_Offset == 0xb0, "UTask_GasWarning_C::WarningPosition offset is not b0");
	auto constexpr UTask_GasWarning_C_WarningRadius_Offset = offsetof(UTask_GasWarning_C, WarningRadius);
	static_assert(UTask_GasWarning_C_WarningRadius_Offset == 0xd8, "UTask_GasWarning_C::WarningRadius offset is not d8");
	auto constexpr UTask_GasWarning_C_WarningDuration_Offset = offsetof(UTask_GasWarning_C, WarningDuration);
	static_assert(UTask_GasWarning_C_WarningDuration_Offset == 0x100, "UTask_GasWarning_C::WarningDuration offset is not 100");
	auto constexpr UTask_GasWarning_C_RemainDuration_Offset = offsetof(UTask_GasWarning_C, RemainDuration);
	static_assert(UTask_GasWarning_C_RemainDuration_Offset == 0x128, "UTask_GasWarning_C::RemainDuration offset is not 128");
	auto constexpr UTask_GasWarning_C_PoisonWarningTimeIndex_Offset = offsetof(UTask_GasWarning_C, PoisonWarningTimeIndex);
	static_assert(UTask_GasWarning_C_PoisonWarningTimeIndex_Offset == 0x12c, "UTask_GasWarning_C::PoisonWarningTimeIndex offset is not 12c");
	auto constexpr UTask_GasWarning_C_ReleaseDuration_Offset = offsetof(UTask_GasWarning_C, ReleaseDuration);
	static_assert(UTask_GasWarning_C_ReleaseDuration_Offset == 0x130, "UTask_GasWarning_C::ReleaseDuration offset is not 130");
	auto constexpr UTask_GasWarning_C_TotalRemainDuration_Offset = offsetof(UTask_GasWarning_C, TotalRemainDuration);
	static_assert(UTask_GasWarning_C_TotalRemainDuration_Offset == 0x158, "UTask_GasWarning_C::TotalRemainDuration offset is not 158");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
