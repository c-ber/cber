#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_Root.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_Groza_C // Size: 0x600
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Groza_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(134083); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Groza.ABP_Weapon_Groza_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Groza.ABP_Weapon_Groza_C.UberGraphFrame */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_47BEA76E459DDB1FC64DC2994EB2B79D; /* Ofs: 0x460 Size: 0x38 - StructProperty ABP_Weapon_Groza.ABP_Weapon_Groza_C.AnimGraphNode_LocalRefPose_47BEA76E459DDB1FC64DC2994EB2B79D */
	FAnimNode_Slot AnimGraphNode_Slot_F903CE9D4A0458296B231DBC493A1404; /* Ofs: 0x498 Size: 0x60 - StructProperty ABP_Weapon_Groza.ABP_Weapon_Groza_C.AnimGraphNode_Slot_F903CE9D4A0458296B231DBC493A1404 */
	FAnimNode_Slot AnimGraphNode_Slot_B0A6987D42EF8619DED6A6B3BCBC0CFB; /* Ofs: 0x4F8 Size: 0x60 - StructProperty ABP_Weapon_Groza.ABP_Weapon_Groza_C.AnimGraphNode_Slot_B0A6987D42EF8619DED6A6B3BCBC0CFB */
	FAnimNode_Slot AnimGraphNode_Slot_0A299D624C51DDA0EA2AC1B79756F4A7; /* Ofs: 0x558 Size: 0x60 - StructProperty ABP_Weapon_Groza.ABP_Weapon_Groza_C.AnimGraphNode_Slot_0A299D624C51DDA0EA2AC1B79756F4A7 */
	FAnimNode_Root AnimGraphNode_Root_C082EBC147536FE7BAD54BBE99755151; /* Ofs: 0x5B8 Size: 0x48 - StructProperty ABP_Weapon_Groza.ABP_Weapon_Groza_C.AnimGraphNode_Root_C082EBC147536FE7BAD54BBE99755151 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_LocalRefPose_47BEA76E459DDB1FC64DC2994EB2B79D(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_Slot_F903CE9D4A0458296B231DBC493A1404(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x498, value); }
	inline bool SetAnimGraphNode_Slot_B0A6987D42EF8619DED6A6B3BCBC0CFB(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetAnimGraphNode_Slot_0A299D624C51DDA0EA2AC1B79756F4A7(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x558, value); }
	inline bool SetAnimGraphNode_Root_C082EBC147536FE7BAD54BBE99755151(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x5B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Groza_C = sizeof(UABP_Weapon_Groza_C); // 1536
    static_assert(sizeof(UABP_Weapon_Groza_C) == 0x600, "Size of UABP_Weapon_Groza_C is not correct.");
	auto constexpr UABP_Weapon_Groza_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Groza_C, UberGraphFrame);
	static_assert(UABP_Weapon_Groza_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Groza_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Groza_C_AnimGraphNode_LocalRefPose_47BEA76E459DDB1FC64DC2994EB2B79D_Offset = offsetof(UABP_Weapon_Groza_C, AnimGraphNode_LocalRefPose_47BEA76E459DDB1FC64DC2994EB2B79D);
	static_assert(UABP_Weapon_Groza_C_AnimGraphNode_LocalRefPose_47BEA76E459DDB1FC64DC2994EB2B79D_Offset == 0x460, "UABP_Weapon_Groza_C::AnimGraphNode_LocalRefPose_47BEA76E459DDB1FC64DC2994EB2B79D offset is not 460");
	auto constexpr UABP_Weapon_Groza_C_AnimGraphNode_Slot_F903CE9D4A0458296B231DBC493A1404_Offset = offsetof(UABP_Weapon_Groza_C, AnimGraphNode_Slot_F903CE9D4A0458296B231DBC493A1404);
	static_assert(UABP_Weapon_Groza_C_AnimGraphNode_Slot_F903CE9D4A0458296B231DBC493A1404_Offset == 0x498, "UABP_Weapon_Groza_C::AnimGraphNode_Slot_F903CE9D4A0458296B231DBC493A1404 offset is not 498");
	auto constexpr UABP_Weapon_Groza_C_AnimGraphNode_Slot_B0A6987D42EF8619DED6A6B3BCBC0CFB_Offset = offsetof(UABP_Weapon_Groza_C, AnimGraphNode_Slot_B0A6987D42EF8619DED6A6B3BCBC0CFB);
	static_assert(UABP_Weapon_Groza_C_AnimGraphNode_Slot_B0A6987D42EF8619DED6A6B3BCBC0CFB_Offset == 0x4f8, "UABP_Weapon_Groza_C::AnimGraphNode_Slot_B0A6987D42EF8619DED6A6B3BCBC0CFB offset is not 4f8");
	auto constexpr UABP_Weapon_Groza_C_AnimGraphNode_Slot_0A299D624C51DDA0EA2AC1B79756F4A7_Offset = offsetof(UABP_Weapon_Groza_C, AnimGraphNode_Slot_0A299D624C51DDA0EA2AC1B79756F4A7);
	static_assert(UABP_Weapon_Groza_C_AnimGraphNode_Slot_0A299D624C51DDA0EA2AC1B79756F4A7_Offset == 0x558, "UABP_Weapon_Groza_C::AnimGraphNode_Slot_0A299D624C51DDA0EA2AC1B79756F4A7 offset is not 558");
	auto constexpr UABP_Weapon_Groza_C_AnimGraphNode_Root_C082EBC147536FE7BAD54BBE99755151_Offset = offsetof(UABP_Weapon_Groza_C, AnimGraphNode_Root_C082EBC147536FE7BAD54BBE99755151);
	static_assert(UABP_Weapon_Groza_C_AnimGraphNode_Root_C082EBC147536FE7BAD54BBE99755151_Offset == 0x5b8, "UABP_Weapon_Groza_C::AnimGraphNode_Root_C082EBC147536FE7BAD54BBE99755151 offset is not 5b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
