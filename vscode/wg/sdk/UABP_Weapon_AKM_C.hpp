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

struct alignas(1) UABP_Weapon_AKM_C // Size: 0x638
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_AKM_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(132069); // id32("AnimBlueprintGeneratedClass ABP_Weapon_AKM.ABP_Weapon_AKM_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_AKM.ABP_Weapon_AKM_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_489B676F4A0C867072AB5F83AA66C693; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_AKM.ABP_Weapon_AKM_C.AnimGraphNode_Root_489B676F4A0C867072AB5F83AA66C693 */
	FAnimNode_Slot AnimGraphNode_Slot_E34D8DAB4A80EA0079503BAC4F3BAF83; /* Ofs: 0x4A8 Size: 0x60 - StructProperty ABP_Weapon_AKM.ABP_Weapon_AKM_C.AnimGraphNode_Slot_E34D8DAB4A80EA0079503BAC4F3BAF83 */
	FAnimNode_Slot AnimGraphNode_Slot_A423A5AB41ED0E3ED8D9908468747A7D; /* Ofs: 0x508 Size: 0x60 - StructProperty ABP_Weapon_AKM.ABP_Weapon_AKM_C.AnimGraphNode_Slot_A423A5AB41ED0E3ED8D9908468747A7D */
	FAnimNode_Slot AnimGraphNode_Slot_21253C0242CB1954A3B37A993284F110; /* Ofs: 0x568 Size: 0x60 - StructProperty ABP_Weapon_AKM.ABP_Weapon_AKM_C.AnimGraphNode_Slot_21253C0242CB1954A3B37A993284F110 */
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DDC357794F1715B261F02582FCCF5133; /* Ofs: 0x5C8 Size: 0x70 - StructProperty ABP_Weapon_AKM.ABP_Weapon_AKM_C.AnimGraphNode_SequencePlayer_DDC357794F1715B261F02582FCCF5133 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_489B676F4A0C867072AB5F83AA66C693(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_Slot_E34D8DAB4A80EA0079503BAC4F3BAF83(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_A423A5AB41ED0E3ED8D9908468747A7D(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x508, value); }
	inline bool SetAnimGraphNode_Slot_21253C0242CB1954A3B37A993284F110(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x568, value); }
	inline bool SetAnimGraphNode_SequencePlayer_DDC357794F1715B261F02582FCCF5133(t_structHelper inst, FAnimNode_SequencePlayer value) { inst.WriteOffset(0x5C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_AKM_C = sizeof(UABP_Weapon_AKM_C); // 1592
    static_assert(sizeof(UABP_Weapon_AKM_C) == 0x638, "Size of UABP_Weapon_AKM_C is not correct.");
	auto constexpr UABP_Weapon_AKM_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_AKM_C, UberGraphFrame);
	static_assert(UABP_Weapon_AKM_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_AKM_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_AKM_C_AnimGraphNode_Root_489B676F4A0C867072AB5F83AA66C693_Offset = offsetof(UABP_Weapon_AKM_C, AnimGraphNode_Root_489B676F4A0C867072AB5F83AA66C693);
	static_assert(UABP_Weapon_AKM_C_AnimGraphNode_Root_489B676F4A0C867072AB5F83AA66C693_Offset == 0x460, "UABP_Weapon_AKM_C::AnimGraphNode_Root_489B676F4A0C867072AB5F83AA66C693 offset is not 460");
	auto constexpr UABP_Weapon_AKM_C_AnimGraphNode_Slot_E34D8DAB4A80EA0079503BAC4F3BAF83_Offset = offsetof(UABP_Weapon_AKM_C, AnimGraphNode_Slot_E34D8DAB4A80EA0079503BAC4F3BAF83);
	static_assert(UABP_Weapon_AKM_C_AnimGraphNode_Slot_E34D8DAB4A80EA0079503BAC4F3BAF83_Offset == 0x4a8, "UABP_Weapon_AKM_C::AnimGraphNode_Slot_E34D8DAB4A80EA0079503BAC4F3BAF83 offset is not 4a8");
	auto constexpr UABP_Weapon_AKM_C_AnimGraphNode_Slot_A423A5AB41ED0E3ED8D9908468747A7D_Offset = offsetof(UABP_Weapon_AKM_C, AnimGraphNode_Slot_A423A5AB41ED0E3ED8D9908468747A7D);
	static_assert(UABP_Weapon_AKM_C_AnimGraphNode_Slot_A423A5AB41ED0E3ED8D9908468747A7D_Offset == 0x508, "UABP_Weapon_AKM_C::AnimGraphNode_Slot_A423A5AB41ED0E3ED8D9908468747A7D offset is not 508");
	auto constexpr UABP_Weapon_AKM_C_AnimGraphNode_Slot_21253C0242CB1954A3B37A993284F110_Offset = offsetof(UABP_Weapon_AKM_C, AnimGraphNode_Slot_21253C0242CB1954A3B37A993284F110);
	static_assert(UABP_Weapon_AKM_C_AnimGraphNode_Slot_21253C0242CB1954A3B37A993284F110_Offset == 0x568, "UABP_Weapon_AKM_C::AnimGraphNode_Slot_21253C0242CB1954A3B37A993284F110 offset is not 568");
	auto constexpr UABP_Weapon_AKM_C_AnimGraphNode_SequencePlayer_DDC357794F1715B261F02582FCCF5133_Offset = offsetof(UABP_Weapon_AKM_C, AnimGraphNode_SequencePlayer_DDC357794F1715B261F02582FCCF5133);
	static_assert(UABP_Weapon_AKM_C_AnimGraphNode_SequencePlayer_DDC357794F1715B261F02582FCCF5133_Offset == 0x5c8, "UABP_Weapon_AKM_C::AnimGraphNode_SequencePlayer_DDC357794F1715B261F02582FCCF5133 offset is not 5c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
