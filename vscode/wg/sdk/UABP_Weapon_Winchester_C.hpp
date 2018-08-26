#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_Winchester_C // Size: 0x910
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Winchester_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131597); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Winchester.ABP_Weapon_Winchester_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_93E7EBDB4960DD00F335008848B03007; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimGraphNode_Root_93E7EBDB4960DD00F335008848B03007 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_076F713B47A096F5DDCC9F859D54B0F6; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimGraphNode_LocalRefPose_076F713B47A096F5DDCC9F859D54B0F6 */
	FAnimNode_Slot AnimGraphNode_Slot_BB2F9D4B448DEF3C61115FB500631E2A; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimGraphNode_Slot_BB2F9D4B448DEF3C61115FB500631E2A */
	FAnimNode_Slot AnimGraphNode_Slot_F329328048C8990491D322A517FDCE3B; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimGraphNode_Slot_F329328048C8990491D322A517FDCE3B */
	FAnimNode_Slot AnimGraphNode_Slot_A1F35721401CF685024630B287234ACD; /* Ofs: 0x5A0 Size: 0x60 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimGraphNode_Slot_A1F35721401CF685024630B287234ACD */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_53CE8CB94FB47C7196ED449CCE68A8CC; /* Ofs: 0x600 Size: 0x280 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimGraphNode_AnimDynamics_53CE8CB94FB47C7196ED449CCE68A8CC */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_C1157737474422659875D1AFB5DFC9A9; /* Ofs: 0x880 Size: 0x48 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimGraphNode_LocalToComponentSpace_C1157737474422659875D1AFB5DFC9A9 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B6EF3522445AC2C951D18A93A50FD627; /* Ofs: 0x8C8 Size: 0x48 - StructProperty ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimGraphNode_ComponentToLocalSpace_B6EF3522445AC2C951D18A93A50FD627 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_93E7EBDB4960DD00F335008848B03007(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_076F713B47A096F5DDCC9F859D54B0F6(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_BB2F9D4B448DEF3C61115FB500631E2A(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_F329328048C8990491D322A517FDCE3B(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_Slot_A1F35721401CF685024630B287234ACD(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetAnimGraphNode_AnimDynamics_53CE8CB94FB47C7196ED449CCE68A8CC(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0x600, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_C1157737474422659875D1AFB5DFC9A9(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x880, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_B6EF3522445AC2C951D18A93A50FD627(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x8C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Winchester_C = sizeof(UABP_Weapon_Winchester_C); // 2320
    static_assert(sizeof(UABP_Weapon_Winchester_C) == 0x910, "Size of UABP_Weapon_Winchester_C is not correct.");
	auto constexpr UABP_Weapon_Winchester_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Winchester_C, UberGraphFrame);
	static_assert(UABP_Weapon_Winchester_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Winchester_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Winchester_C_AnimGraphNode_Root_93E7EBDB4960DD00F335008848B03007_Offset = offsetof(UABP_Weapon_Winchester_C, AnimGraphNode_Root_93E7EBDB4960DD00F335008848B03007);
	static_assert(UABP_Weapon_Winchester_C_AnimGraphNode_Root_93E7EBDB4960DD00F335008848B03007_Offset == 0x460, "UABP_Weapon_Winchester_C::AnimGraphNode_Root_93E7EBDB4960DD00F335008848B03007 offset is not 460");
	auto constexpr UABP_Weapon_Winchester_C_AnimGraphNode_LocalRefPose_076F713B47A096F5DDCC9F859D54B0F6_Offset = offsetof(UABP_Weapon_Winchester_C, AnimGraphNode_LocalRefPose_076F713B47A096F5DDCC9F859D54B0F6);
	static_assert(UABP_Weapon_Winchester_C_AnimGraphNode_LocalRefPose_076F713B47A096F5DDCC9F859D54B0F6_Offset == 0x4a8, "UABP_Weapon_Winchester_C::AnimGraphNode_LocalRefPose_076F713B47A096F5DDCC9F859D54B0F6 offset is not 4a8");
	auto constexpr UABP_Weapon_Winchester_C_AnimGraphNode_Slot_BB2F9D4B448DEF3C61115FB500631E2A_Offset = offsetof(UABP_Weapon_Winchester_C, AnimGraphNode_Slot_BB2F9D4B448DEF3C61115FB500631E2A);
	static_assert(UABP_Weapon_Winchester_C_AnimGraphNode_Slot_BB2F9D4B448DEF3C61115FB500631E2A_Offset == 0x4e0, "UABP_Weapon_Winchester_C::AnimGraphNode_Slot_BB2F9D4B448DEF3C61115FB500631E2A offset is not 4e0");
	auto constexpr UABP_Weapon_Winchester_C_AnimGraphNode_Slot_F329328048C8990491D322A517FDCE3B_Offset = offsetof(UABP_Weapon_Winchester_C, AnimGraphNode_Slot_F329328048C8990491D322A517FDCE3B);
	static_assert(UABP_Weapon_Winchester_C_AnimGraphNode_Slot_F329328048C8990491D322A517FDCE3B_Offset == 0x540, "UABP_Weapon_Winchester_C::AnimGraphNode_Slot_F329328048C8990491D322A517FDCE3B offset is not 540");
	auto constexpr UABP_Weapon_Winchester_C_AnimGraphNode_Slot_A1F35721401CF685024630B287234ACD_Offset = offsetof(UABP_Weapon_Winchester_C, AnimGraphNode_Slot_A1F35721401CF685024630B287234ACD);
	static_assert(UABP_Weapon_Winchester_C_AnimGraphNode_Slot_A1F35721401CF685024630B287234ACD_Offset == 0x5a0, "UABP_Weapon_Winchester_C::AnimGraphNode_Slot_A1F35721401CF685024630B287234ACD offset is not 5a0");
	auto constexpr UABP_Weapon_Winchester_C_AnimGraphNode_AnimDynamics_53CE8CB94FB47C7196ED449CCE68A8CC_Offset = offsetof(UABP_Weapon_Winchester_C, AnimGraphNode_AnimDynamics_53CE8CB94FB47C7196ED449CCE68A8CC);
	static_assert(UABP_Weapon_Winchester_C_AnimGraphNode_AnimDynamics_53CE8CB94FB47C7196ED449CCE68A8CC_Offset == 0x600, "UABP_Weapon_Winchester_C::AnimGraphNode_AnimDynamics_53CE8CB94FB47C7196ED449CCE68A8CC offset is not 600");
	auto constexpr UABP_Weapon_Winchester_C_AnimGraphNode_LocalToComponentSpace_C1157737474422659875D1AFB5DFC9A9_Offset = offsetof(UABP_Weapon_Winchester_C, AnimGraphNode_LocalToComponentSpace_C1157737474422659875D1AFB5DFC9A9);
	static_assert(UABP_Weapon_Winchester_C_AnimGraphNode_LocalToComponentSpace_C1157737474422659875D1AFB5DFC9A9_Offset == 0x880, "UABP_Weapon_Winchester_C::AnimGraphNode_LocalToComponentSpace_C1157737474422659875D1AFB5DFC9A9 offset is not 880");
	auto constexpr UABP_Weapon_Winchester_C_AnimGraphNode_ComponentToLocalSpace_B6EF3522445AC2C951D18A93A50FD627_Offset = offsetof(UABP_Weapon_Winchester_C, AnimGraphNode_ComponentToLocalSpace_B6EF3522445AC2C951D18A93A50FD627);
	static_assert(UABP_Weapon_Winchester_C_AnimGraphNode_ComponentToLocalSpace_B6EF3522445AC2C951D18A93A50FD627_Offset == 0x8c8, "UABP_Weapon_Winchester_C::AnimGraphNode_ComponentToLocalSpace_B6EF3522445AC2C951D18A93A50FD627 offset is not 8c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
