#pragma once
#include "UTslVaultingHelper.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "EVaultAnimType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_VaultHelperActor_C // Size: 0x4A0
	: public UTslVaultingHelper // Size: 0x420
{
private:
	typedef UBP_VaultHelperActor_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88381); // id32("BlueprintGeneratedClass BP_VaultHelperActor.BP_VaultHelperActor_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x420 Size: 0x8 - StructProperty BP_VaultHelperActor.BP_VaultHelperActor_C.UberGraphFrame */
	ExternalPtr<struct UBillboardComponent> Billboard_Attach; /* Ofs: 0x428 Size: 0x8 - ObjectProperty BP_VaultHelperActor.BP_VaultHelperActor_C.Billboard_Attach */
	ExternalPtr<struct UBillboardComponent> Billboard; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_VaultHelperActor.BP_VaultHelperActor_C.Billboard */
	FVector V_Start; /* Ofs: 0x438 Size: 0xC - StructProperty BP_VaultHelperActor.BP_VaultHelperActor_C.V_Start */
	FVector V_Apex; /* Ofs: 0x444 Size: 0xC - StructProperty BP_VaultHelperActor.BP_VaultHelperActor_C.V_Apex */
	FVector V_End; /* Ofs: 0x450 Size: 0xC - StructProperty BP_VaultHelperActor.BP_VaultHelperActor_C.V_End */
	float V_Timer; /* Ofs: 0x45C Size: 0x4 - FloatProperty BP_VaultHelperActor.BP_VaultHelperActor_C.V_Timer */
	float V_TimerScale_PreApex; /* Ofs: 0x460 Size: 0x4 - FloatProperty BP_VaultHelperActor.BP_VaultHelperActor_C.V_TimerScale_PreApex */
	float V_TimerScale_PostApex; /* Ofs: 0x464 Size: 0x4 - FloatProperty BP_VaultHelperActor.BP_VaultHelperActor_C.V_TimerScale_PostApex */
	ExternalPtr<struct UPlayerPawn_v2_C> CharRef; /* Ofs: 0x468 Size: 0x8 - ObjectProperty BP_VaultHelperActor.BP_VaultHelperActor_C.CharRef */
	uint8_t boolField470;
	uint8_t UnknownData471[0x3];
	FVector V_ApexAdditive; /* Ofs: 0x474 Size: 0xC - StructProperty BP_VaultHelperActor.BP_VaultHelperActor_C.V_ApexAdditive */
	FVector V_ApexCalculated; /* Ofs: 0x480 Size: 0xC - StructProperty BP_VaultHelperActor.BP_VaultHelperActor_C.V_ApexCalculated */
	uint8_t boolField48C;
	TEnumAsByte<enum EVaultAnimType> VaultTypeLocal; /* Ofs: 0x48D Size: 0x1 - EnumProperty BP_VaultHelperActor.BP_VaultHelperActor_C.VaultTypeLocal */
	uint8_t boolField48E;
	uint8_t UnknownData48F[0x1];
	float AnimMultiplierPreApex; /* Ofs: 0x490 Size: 0x4 - FloatProperty BP_VaultHelperActor.BP_VaultHelperActor_C.AnimMultiplierPreApex */
	float AnimMultiplierPostApex; /* Ofs: 0x494 Size: 0x4 - FloatProperty BP_VaultHelperActor.BP_VaultHelperActor_C.AnimMultiplierPostApex */
	uint8_t boolField498;
	uint8_t boolField499;
	uint8_t UnknownData49A[0x2];
	float CancelFactor; /* Ofs: 0x49C Size: 0x4 - FloatProperty BP_VaultHelperActor.BP_VaultHelperActor_C.CancelFactor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x420, value); }
	inline bool SetBillboard_Attach(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetBillboard(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetV_Start(t_structHelper inst, FVector value) { inst.WriteOffset(0x438, value); }
	inline bool SetV_Apex(t_structHelper inst, FVector value) { inst.WriteOffset(0x444, value); }
	inline bool SetV_End(t_structHelper inst, FVector value) { inst.WriteOffset(0x450, value); }
	inline bool SetV_Timer(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetV_TimerScale_PreApex(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetV_TimerScale_PostApex(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetCharRef(t_structHelper inst, ExternalPtr<struct UPlayerPawn_v2_C> value) { inst.WriteOffset(0x468, value); }
	inline bool bInitialized()
	{
		return boolField470& 0x1;
	}
	inline bool SetbInitialized(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x470, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetV_ApexAdditive(t_structHelper inst, FVector value) { inst.WriteOffset(0x474, value); }
	inline bool SetV_ApexCalculated(t_structHelper inst, FVector value) { inst.WriteOffset(0x480, value); }
	inline bool bIsClimbing()
	{
		return boolField48C& 0x1;
	}
	inline bool SetbIsClimbing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetVaultTypeLocal(t_structHelper inst, TEnumAsByte<enum EVaultAnimType> value) { inst.WriteOffset(0x48D, value); }
	inline bool bEndToFall()
	{
		return boolField48E& 0x1;
	}
	inline bool SetbEndToFall(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAnimMultiplierPreApex(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetAnimMultiplierPostApex(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool bWantsToCancel()
	{
		return boolField498& 0x1;
	}
	inline bool SetbWantsToCancel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x498, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool CancelInitialized()
	{
		return boolField499& 0x1;
	}
	inline bool SetCancelInitialized(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x499, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCancelFactor(t_structHelper inst, float value) { inst.WriteOffset(0x49C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_VaultHelperActor_C = sizeof(UBP_VaultHelperActor_C); // 1184
    static_assert(sizeof(UBP_VaultHelperActor_C) == 0x4A0, "Size of UBP_VaultHelperActor_C is not correct.");
	auto constexpr UBP_VaultHelperActor_C_UberGraphFrame_Offset = offsetof(UBP_VaultHelperActor_C, UberGraphFrame);
	static_assert(UBP_VaultHelperActor_C_UberGraphFrame_Offset == 0x420, "UBP_VaultHelperActor_C::UberGraphFrame offset is not 420");
	auto constexpr UBP_VaultHelperActor_C_Billboard_Attach_Offset = offsetof(UBP_VaultHelperActor_C, Billboard_Attach);
	static_assert(UBP_VaultHelperActor_C_Billboard_Attach_Offset == 0x428, "UBP_VaultHelperActor_C::Billboard_Attach offset is not 428");
	auto constexpr UBP_VaultHelperActor_C_Billboard_Offset = offsetof(UBP_VaultHelperActor_C, Billboard);
	static_assert(UBP_VaultHelperActor_C_Billboard_Offset == 0x430, "UBP_VaultHelperActor_C::Billboard offset is not 430");
	auto constexpr UBP_VaultHelperActor_C_V_Start_Offset = offsetof(UBP_VaultHelperActor_C, V_Start);
	static_assert(UBP_VaultHelperActor_C_V_Start_Offset == 0x438, "UBP_VaultHelperActor_C::V_Start offset is not 438");
	auto constexpr UBP_VaultHelperActor_C_V_Apex_Offset = offsetof(UBP_VaultHelperActor_C, V_Apex);
	static_assert(UBP_VaultHelperActor_C_V_Apex_Offset == 0x444, "UBP_VaultHelperActor_C::V_Apex offset is not 444");
	auto constexpr UBP_VaultHelperActor_C_V_End_Offset = offsetof(UBP_VaultHelperActor_C, V_End);
	static_assert(UBP_VaultHelperActor_C_V_End_Offset == 0x450, "UBP_VaultHelperActor_C::V_End offset is not 450");
	auto constexpr UBP_VaultHelperActor_C_V_Timer_Offset = offsetof(UBP_VaultHelperActor_C, V_Timer);
	static_assert(UBP_VaultHelperActor_C_V_Timer_Offset == 0x45c, "UBP_VaultHelperActor_C::V_Timer offset is not 45c");
	auto constexpr UBP_VaultHelperActor_C_V_TimerScale_PreApex_Offset = offsetof(UBP_VaultHelperActor_C, V_TimerScale_PreApex);
	static_assert(UBP_VaultHelperActor_C_V_TimerScale_PreApex_Offset == 0x460, "UBP_VaultHelperActor_C::V_TimerScale_PreApex offset is not 460");
	auto constexpr UBP_VaultHelperActor_C_V_TimerScale_PostApex_Offset = offsetof(UBP_VaultHelperActor_C, V_TimerScale_PostApex);
	static_assert(UBP_VaultHelperActor_C_V_TimerScale_PostApex_Offset == 0x464, "UBP_VaultHelperActor_C::V_TimerScale_PostApex offset is not 464");
	auto constexpr UBP_VaultHelperActor_C_CharRef_Offset = offsetof(UBP_VaultHelperActor_C, CharRef);
	static_assert(UBP_VaultHelperActor_C_CharRef_Offset == 0x468, "UBP_VaultHelperActor_C::CharRef offset is not 468");
	auto constexpr UBP_VaultHelperActor_C_boolField470_Offset = offsetof(UBP_VaultHelperActor_C, boolField470);
	static_assert(UBP_VaultHelperActor_C_boolField470_Offset == 0x470, "UBP_VaultHelperActor_C::boolField470 offset is not 470");
	auto constexpr UBP_VaultHelperActor_C_V_ApexAdditive_Offset = offsetof(UBP_VaultHelperActor_C, V_ApexAdditive);
	static_assert(UBP_VaultHelperActor_C_V_ApexAdditive_Offset == 0x474, "UBP_VaultHelperActor_C::V_ApexAdditive offset is not 474");
	auto constexpr UBP_VaultHelperActor_C_V_ApexCalculated_Offset = offsetof(UBP_VaultHelperActor_C, V_ApexCalculated);
	static_assert(UBP_VaultHelperActor_C_V_ApexCalculated_Offset == 0x480, "UBP_VaultHelperActor_C::V_ApexCalculated offset is not 480");
	auto constexpr UBP_VaultHelperActor_C_boolField48C_Offset = offsetof(UBP_VaultHelperActor_C, boolField48C);
	static_assert(UBP_VaultHelperActor_C_boolField48C_Offset == 0x48c, "UBP_VaultHelperActor_C::boolField48C offset is not 48c");
	auto constexpr UBP_VaultHelperActor_C_VaultTypeLocal_Offset = offsetof(UBP_VaultHelperActor_C, VaultTypeLocal);
	static_assert(UBP_VaultHelperActor_C_VaultTypeLocal_Offset == 0x48d, "UBP_VaultHelperActor_C::VaultTypeLocal offset is not 48d");
	auto constexpr UBP_VaultHelperActor_C_boolField48E_Offset = offsetof(UBP_VaultHelperActor_C, boolField48E);
	static_assert(UBP_VaultHelperActor_C_boolField48E_Offset == 0x48e, "UBP_VaultHelperActor_C::boolField48E offset is not 48e");
	auto constexpr UBP_VaultHelperActor_C_AnimMultiplierPreApex_Offset = offsetof(UBP_VaultHelperActor_C, AnimMultiplierPreApex);
	static_assert(UBP_VaultHelperActor_C_AnimMultiplierPreApex_Offset == 0x490, "UBP_VaultHelperActor_C::AnimMultiplierPreApex offset is not 490");
	auto constexpr UBP_VaultHelperActor_C_AnimMultiplierPostApex_Offset = offsetof(UBP_VaultHelperActor_C, AnimMultiplierPostApex);
	static_assert(UBP_VaultHelperActor_C_AnimMultiplierPostApex_Offset == 0x494, "UBP_VaultHelperActor_C::AnimMultiplierPostApex offset is not 494");
	auto constexpr UBP_VaultHelperActor_C_boolField498_Offset = offsetof(UBP_VaultHelperActor_C, boolField498);
	static_assert(UBP_VaultHelperActor_C_boolField498_Offset == 0x498, "UBP_VaultHelperActor_C::boolField498 offset is not 498");
	auto constexpr UBP_VaultHelperActor_C_boolField499_Offset = offsetof(UBP_VaultHelperActor_C, boolField499);
	static_assert(UBP_VaultHelperActor_C_boolField499_Offset == 0x499, "UBP_VaultHelperActor_C::boolField499 offset is not 499");
	auto constexpr UBP_VaultHelperActor_C_CancelFactor_Offset = offsetof(UBP_VaultHelperActor_C, CancelFactor);
	static_assert(UBP_VaultHelperActor_C_CancelFactor_Offset == 0x49c, "UBP_VaultHelperActor_C::CancelFactor offset is not 49c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
