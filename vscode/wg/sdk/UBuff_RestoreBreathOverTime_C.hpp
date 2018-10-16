#pragma once
#include "UCharacterBreathBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_RestoreBreathOverTime_C // Size: 0x4C0
	: public UCharacterBreathBuff // Size: 0x480
{
private:
	typedef UBuff_RestoreBreathOverTime_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88549); // id32("BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x480 Size: 0x8 - StructProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x488 Size: 0x8 - ObjectProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.DefaultSceneRoot */
	ExternalPtr<struct UTslCharacter> CharacterRef; /* Ofs: 0x490 Size: 0x8 - ObjectProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CharacterRef */
	float BreathPerTickMax; /* Ofs: 0x498 Size: 0x4 - FloatProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.BreathPerTickMax */
	float BreathRestoreTickInterval; /* Ofs: 0x49C Size: 0x4 - FloatProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.BreathRestoreTickInterval */
	float BreathRestoreRestBoost; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.BreathRestoreRestBoost */
	float BreathRestoreRunnin; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.BreathRestoreRunnin */
	float DelayAfterUnderwaterSwimming; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.DelayAfterUnderwaterSwimming */
	float LastTimeUnderwater; /* Ofs: 0x4AC Size: 0x4 - FloatProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.LastTimeUnderwater */
	uint8_t boolField4B0;
	uint8_t UnknownData4B1[0x7];
	FTimerHandle DelayAfterSwimmingTimerHandle; /* Ofs: 0x4B8 Size: 0x8 - StructProperty Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.DelayAfterSwimmingTimerHandle */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x480, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x488, value); }
	inline bool SetCharacterRef(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x490, value); }
	inline bool SetBreathPerTickMax(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetBreathRestoreTickInterval(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
	inline bool SetBreathRestoreRestBoost(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetBreathRestoreRunnin(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetDelayAfterUnderwaterSwimming(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetLastTimeUnderwater(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
	inline bool bCanBuff()
	{
		return boolField4B0& 0x1;
	}
	inline bool SetbCanBuff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDelayAfterSwimmingTimerHandle(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x4B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_RestoreBreathOverTime_C = sizeof(UBuff_RestoreBreathOverTime_C); // 1216
    static_assert(sizeof(UBuff_RestoreBreathOverTime_C) == 0x4C0, "Size of UBuff_RestoreBreathOverTime_C is not correct.");
	auto constexpr UBuff_RestoreBreathOverTime_C_UberGraphFrame_Offset = offsetof(UBuff_RestoreBreathOverTime_C, UberGraphFrame);
	static_assert(UBuff_RestoreBreathOverTime_C_UberGraphFrame_Offset == 0x480, "UBuff_RestoreBreathOverTime_C::UberGraphFrame offset is not 480");
	auto constexpr UBuff_RestoreBreathOverTime_C_DefaultSceneRoot_Offset = offsetof(UBuff_RestoreBreathOverTime_C, DefaultSceneRoot);
	static_assert(UBuff_RestoreBreathOverTime_C_DefaultSceneRoot_Offset == 0x488, "UBuff_RestoreBreathOverTime_C::DefaultSceneRoot offset is not 488");
	auto constexpr UBuff_RestoreBreathOverTime_C_CharacterRef_Offset = offsetof(UBuff_RestoreBreathOverTime_C, CharacterRef);
	static_assert(UBuff_RestoreBreathOverTime_C_CharacterRef_Offset == 0x490, "UBuff_RestoreBreathOverTime_C::CharacterRef offset is not 490");
	auto constexpr UBuff_RestoreBreathOverTime_C_BreathPerTickMax_Offset = offsetof(UBuff_RestoreBreathOverTime_C, BreathPerTickMax);
	static_assert(UBuff_RestoreBreathOverTime_C_BreathPerTickMax_Offset == 0x498, "UBuff_RestoreBreathOverTime_C::BreathPerTickMax offset is not 498");
	auto constexpr UBuff_RestoreBreathOverTime_C_BreathRestoreTickInterval_Offset = offsetof(UBuff_RestoreBreathOverTime_C, BreathRestoreTickInterval);
	static_assert(UBuff_RestoreBreathOverTime_C_BreathRestoreTickInterval_Offset == 0x49c, "UBuff_RestoreBreathOverTime_C::BreathRestoreTickInterval offset is not 49c");
	auto constexpr UBuff_RestoreBreathOverTime_C_BreathRestoreRestBoost_Offset = offsetof(UBuff_RestoreBreathOverTime_C, BreathRestoreRestBoost);
	static_assert(UBuff_RestoreBreathOverTime_C_BreathRestoreRestBoost_Offset == 0x4a0, "UBuff_RestoreBreathOverTime_C::BreathRestoreRestBoost offset is not 4a0");
	auto constexpr UBuff_RestoreBreathOverTime_C_BreathRestoreRunnin_Offset = offsetof(UBuff_RestoreBreathOverTime_C, BreathRestoreRunnin);
	static_assert(UBuff_RestoreBreathOverTime_C_BreathRestoreRunnin_Offset == 0x4a4, "UBuff_RestoreBreathOverTime_C::BreathRestoreRunnin offset is not 4a4");
	auto constexpr UBuff_RestoreBreathOverTime_C_DelayAfterUnderwaterSwimming_Offset = offsetof(UBuff_RestoreBreathOverTime_C, DelayAfterUnderwaterSwimming);
	static_assert(UBuff_RestoreBreathOverTime_C_DelayAfterUnderwaterSwimming_Offset == 0x4a8, "UBuff_RestoreBreathOverTime_C::DelayAfterUnderwaterSwimming offset is not 4a8");
	auto constexpr UBuff_RestoreBreathOverTime_C_LastTimeUnderwater_Offset = offsetof(UBuff_RestoreBreathOverTime_C, LastTimeUnderwater);
	static_assert(UBuff_RestoreBreathOverTime_C_LastTimeUnderwater_Offset == 0x4ac, "UBuff_RestoreBreathOverTime_C::LastTimeUnderwater offset is not 4ac");
	auto constexpr UBuff_RestoreBreathOverTime_C_boolField4B0_Offset = offsetof(UBuff_RestoreBreathOverTime_C, boolField4B0);
	static_assert(UBuff_RestoreBreathOverTime_C_boolField4B0_Offset == 0x4b0, "UBuff_RestoreBreathOverTime_C::boolField4B0 offset is not 4b0");
	auto constexpr UBuff_RestoreBreathOverTime_C_DelayAfterSwimmingTimerHandle_Offset = offsetof(UBuff_RestoreBreathOverTime_C, DelayAfterSwimmingTimerHandle);
	static_assert(UBuff_RestoreBreathOverTime_C_DelayAfterSwimmingTimerHandle_Offset == 0x4b8, "UBuff_RestoreBreathOverTime_C::DelayAfterSwimmingTimerHandle offset is not 4b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
