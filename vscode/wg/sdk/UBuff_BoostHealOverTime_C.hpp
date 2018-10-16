#pragma once
#include "UTslBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_BoostHealOverTime_C // Size: 0x49C
	: public UTslBuff // Size: 0x470
{
private:
	typedef UBuff_BoostHealOverTime_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88426); // id32("BlueprintGeneratedClass Buff_BoostHealOverTime.Buff_BoostHealOverTime_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x478 Size: 0x8 - ObjectProperty Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.DefaultSceneRoot */
	float HealPerTick; /* Ofs: 0x480 Size: 0x4 - FloatProperty Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.HealPerTick */
	uint8_t UnknownData484[0x4];
	TArray<struct FBoostHealBuffData> BoostHealBuffData; /* Ofs: 0x488 Size: 0x10 - ArrayProperty Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.BoostHealBuffData */
	float StartHealth; /* Ofs: 0x498 Size: 0x4 - FloatProperty Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StartHealth */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetHealPerTick(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
	inline bool SetBoostHealBuffData(t_structHelper inst, TArray<struct FBoostHealBuffData> value) { inst.WriteOffset(0x488, value); }
	inline bool SetStartHealth(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_BoostHealOverTime_C = sizeof(UBuff_BoostHealOverTime_C); // 1180
    static_assert(sizeof(UBuff_BoostHealOverTime_C) == 0x49C, "Size of UBuff_BoostHealOverTime_C is not correct.");
	auto constexpr UBuff_BoostHealOverTime_C_UberGraphFrame_Offset = offsetof(UBuff_BoostHealOverTime_C, UberGraphFrame);
	static_assert(UBuff_BoostHealOverTime_C_UberGraphFrame_Offset == 0x470, "UBuff_BoostHealOverTime_C::UberGraphFrame offset is not 470");
	auto constexpr UBuff_BoostHealOverTime_C_DefaultSceneRoot_Offset = offsetof(UBuff_BoostHealOverTime_C, DefaultSceneRoot);
	static_assert(UBuff_BoostHealOverTime_C_DefaultSceneRoot_Offset == 0x478, "UBuff_BoostHealOverTime_C::DefaultSceneRoot offset is not 478");
	auto constexpr UBuff_BoostHealOverTime_C_HealPerTick_Offset = offsetof(UBuff_BoostHealOverTime_C, HealPerTick);
	static_assert(UBuff_BoostHealOverTime_C_HealPerTick_Offset == 0x480, "UBuff_BoostHealOverTime_C::HealPerTick offset is not 480");
	auto constexpr UBuff_BoostHealOverTime_C_BoostHealBuffData_Offset = offsetof(UBuff_BoostHealOverTime_C, BoostHealBuffData);
	static_assert(UBuff_BoostHealOverTime_C_BoostHealBuffData_Offset == 0x488, "UBuff_BoostHealOverTime_C::BoostHealBuffData offset is not 488");
	auto constexpr UBuff_BoostHealOverTime_C_StartHealth_Offset = offsetof(UBuff_BoostHealOverTime_C, StartHealth);
	static_assert(UBuff_BoostHealOverTime_C_StartHealth_Offset == 0x498, "UBuff_BoostHealOverTime_C::StartHealth offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
