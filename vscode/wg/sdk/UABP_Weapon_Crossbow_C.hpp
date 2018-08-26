#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_SequencePlayer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_Crossbow_C // Size: 0x5D8
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Crossbow_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(53149); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_AF92FF434863917DEEE826997B8019D9; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.AnimGraphNode_Root_AF92FF434863917DEEE826997B8019D9 */
	FAnimNode_Slot AnimGraphNode_Slot_79A0701E43243CA0A605D08932E9D650; /* Ofs: 0x4A8 Size: 0x60 - StructProperty ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.AnimGraphNode_Slot_79A0701E43243CA0A605D08932E9D650 */
	FAnimNode_Slot AnimGraphNode_Slot_F0A6D76C48070FB25D42489421B1AE3F; /* Ofs: 0x508 Size: 0x60 - StructProperty ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.AnimGraphNode_Slot_F0A6D76C48070FB25D42489421B1AE3F */
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D13ED4364599F1DAAB48F79F6A0CD299; /* Ofs: 0x568 Size: 0x70 - StructProperty ABP_Weapon_Crossbow.ABP_Weapon_Crossbow_C.AnimGraphNode_SequencePlayer_D13ED4364599F1DAAB48F79F6A0CD299 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_AF92FF434863917DEEE826997B8019D9(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_Slot_79A0701E43243CA0A605D08932E9D650(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_F0A6D76C48070FB25D42489421B1AE3F(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x508, value); }
	inline bool SetAnimGraphNode_SequencePlayer_D13ED4364599F1DAAB48F79F6A0CD299(t_structHelper inst, FAnimNode_SequencePlayer value) { inst.WriteOffset(0x568, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Crossbow_C = sizeof(UABP_Weapon_Crossbow_C); // 1496
    static_assert(sizeof(UABP_Weapon_Crossbow_C) == 0x5D8, "Size of UABP_Weapon_Crossbow_C is not correct.");
	auto constexpr UABP_Weapon_Crossbow_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Crossbow_C, UberGraphFrame);
	static_assert(UABP_Weapon_Crossbow_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Crossbow_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Crossbow_C_AnimGraphNode_Root_AF92FF434863917DEEE826997B8019D9_Offset = offsetof(UABP_Weapon_Crossbow_C, AnimGraphNode_Root_AF92FF434863917DEEE826997B8019D9);
	static_assert(UABP_Weapon_Crossbow_C_AnimGraphNode_Root_AF92FF434863917DEEE826997B8019D9_Offset == 0x460, "UABP_Weapon_Crossbow_C::AnimGraphNode_Root_AF92FF434863917DEEE826997B8019D9 offset is not 460");
	auto constexpr UABP_Weapon_Crossbow_C_AnimGraphNode_Slot_79A0701E43243CA0A605D08932E9D650_Offset = offsetof(UABP_Weapon_Crossbow_C, AnimGraphNode_Slot_79A0701E43243CA0A605D08932E9D650);
	static_assert(UABP_Weapon_Crossbow_C_AnimGraphNode_Slot_79A0701E43243CA0A605D08932E9D650_Offset == 0x4a8, "UABP_Weapon_Crossbow_C::AnimGraphNode_Slot_79A0701E43243CA0A605D08932E9D650 offset is not 4a8");
	auto constexpr UABP_Weapon_Crossbow_C_AnimGraphNode_Slot_F0A6D76C48070FB25D42489421B1AE3F_Offset = offsetof(UABP_Weapon_Crossbow_C, AnimGraphNode_Slot_F0A6D76C48070FB25D42489421B1AE3F);
	static_assert(UABP_Weapon_Crossbow_C_AnimGraphNode_Slot_F0A6D76C48070FB25D42489421B1AE3F_Offset == 0x508, "UABP_Weapon_Crossbow_C::AnimGraphNode_Slot_F0A6D76C48070FB25D42489421B1AE3F offset is not 508");
	auto constexpr UABP_Weapon_Crossbow_C_AnimGraphNode_SequencePlayer_D13ED4364599F1DAAB48F79F6A0CD299_Offset = offsetof(UABP_Weapon_Crossbow_C, AnimGraphNode_SequencePlayer_D13ED4364599F1DAAB48F79F6A0CD299);
	static_assert(UABP_Weapon_Crossbow_C_AnimGraphNode_SequencePlayer_D13ED4364599F1DAAB48F79F6A0CD299_Offset == 0x568, "UABP_Weapon_Crossbow_C::AnimGraphNode_SequencePlayer_D13ED4364599F1DAAB48F79F6A0CD299 offset is not 568");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
