#pragma once
#include "UTslBuff.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_ADSHoldingBreathCooldown_C // Size: 0x484
	: public UTslBuff // Size: 0x470
{
private:
	typedef UBuff_ADSHoldingBreathCooldown_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(92063); // id32("BlueprintGeneratedClass Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x478 Size: 0x8 - ObjectProperty Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.DefaultSceneRoot */
	float FinalSpreadFactor; /* Ofs: 0x480 Size: 0x4 - FloatProperty Buff_ADSHoldingBreathCooldown.Buff_ADSHoldingBreathCooldown_C.FinalSpreadFactor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetFinalSpreadFactor(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_ADSHoldingBreathCooldown_C = sizeof(UBuff_ADSHoldingBreathCooldown_C); // 1156
    static_assert(sizeof(UBuff_ADSHoldingBreathCooldown_C) == 0x484, "Size of UBuff_ADSHoldingBreathCooldown_C is not correct.");
	auto constexpr UBuff_ADSHoldingBreathCooldown_C_UberGraphFrame_Offset = offsetof(UBuff_ADSHoldingBreathCooldown_C, UberGraphFrame);
	static_assert(UBuff_ADSHoldingBreathCooldown_C_UberGraphFrame_Offset == 0x470, "UBuff_ADSHoldingBreathCooldown_C::UberGraphFrame offset is not 470");
	auto constexpr UBuff_ADSHoldingBreathCooldown_C_DefaultSceneRoot_Offset = offsetof(UBuff_ADSHoldingBreathCooldown_C, DefaultSceneRoot);
	static_assert(UBuff_ADSHoldingBreathCooldown_C_DefaultSceneRoot_Offset == 0x478, "UBuff_ADSHoldingBreathCooldown_C::DefaultSceneRoot offset is not 478");
	auto constexpr UBuff_ADSHoldingBreathCooldown_C_FinalSpreadFactor_Offset = offsetof(UBuff_ADSHoldingBreathCooldown_C, FinalSpreadFactor);
	static_assert(UBuff_ADSHoldingBreathCooldown_C_FinalSpreadFactor_Offset == 0x480, "UBuff_ADSHoldingBreathCooldown_C::FinalSpreadFactor offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
