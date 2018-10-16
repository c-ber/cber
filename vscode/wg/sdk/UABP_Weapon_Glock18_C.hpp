#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_Glock18_C // Size: 0x5AC
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Glock18_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130860); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Glock18.ABP_Weapon_Glock18_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.AnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.AnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B */
	FAnimNode_Slot AnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.AnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3 */
	FAnimNode_Slot AnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.AnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1 */
	ExternalPtr<struct UTslWeapon_Gun> ActorRef; /* Ofs: 0x5A0 Size: 0x8 - ObjectProperty ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.ActorRef */
	int32_t CurrentAmmo; /* Ofs: 0x5A8 Size: 0x4 - IntProperty ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.CurrentAmmo */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetActorRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetCurrentAmmo(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Glock18_C = sizeof(UABP_Weapon_Glock18_C); // 1452
    static_assert(sizeof(UABP_Weapon_Glock18_C) == 0x5AC, "Size of UABP_Weapon_Glock18_C is not correct.");
	auto constexpr UABP_Weapon_Glock18_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Glock18_C, UberGraphFrame);
	static_assert(UABP_Weapon_Glock18_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Glock18_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Glock18_C_AnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F_Offset = offsetof(UABP_Weapon_Glock18_C, AnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F);
	static_assert(UABP_Weapon_Glock18_C_AnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F_Offset == 0x460, "UABP_Weapon_Glock18_C::AnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F offset is not 460");
	auto constexpr UABP_Weapon_Glock18_C_AnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B_Offset = offsetof(UABP_Weapon_Glock18_C, AnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B);
	static_assert(UABP_Weapon_Glock18_C_AnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B_Offset == 0x4a8, "UABP_Weapon_Glock18_C::AnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B offset is not 4a8");
	auto constexpr UABP_Weapon_Glock18_C_AnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3_Offset = offsetof(UABP_Weapon_Glock18_C, AnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3);
	static_assert(UABP_Weapon_Glock18_C_AnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3_Offset == 0x4e0, "UABP_Weapon_Glock18_C::AnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3 offset is not 4e0");
	auto constexpr UABP_Weapon_Glock18_C_AnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1_Offset = offsetof(UABP_Weapon_Glock18_C, AnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1);
	static_assert(UABP_Weapon_Glock18_C_AnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1_Offset == 0x540, "UABP_Weapon_Glock18_C::AnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1 offset is not 540");
	auto constexpr UABP_Weapon_Glock18_C_ActorRef_Offset = offsetof(UABP_Weapon_Glock18_C, ActorRef);
	static_assert(UABP_Weapon_Glock18_C_ActorRef_Offset == 0x5a0, "UABP_Weapon_Glock18_C::ActorRef offset is not 5a0");
	auto constexpr UABP_Weapon_Glock18_C_CurrentAmmo_Offset = offsetof(UABP_Weapon_Glock18_C, CurrentAmmo);
	static_assert(UABP_Weapon_Glock18_C_CurrentAmmo_Offset == 0x5a8, "UABP_Weapon_Glock18_C::CurrentAmmo offset is not 5a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
