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

struct alignas(1) UABP_SKS_C // Size: 0x5A0
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_SKS_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(134880); // id32("AnimBlueprintGeneratedClass ABP_SKS.ABP_SKS_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_SKS.ABP_SKS_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_38064EAB4C53BE339D7EA693436312DD; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_SKS.ABP_SKS_C.AnimGraphNode_Root_38064EAB4C53BE339D7EA693436312DD */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_E6A97DEA45F9362AC0208497AA2F7EE5; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_SKS.ABP_SKS_C.AnimGraphNode_LocalRefPose_E6A97DEA45F9362AC0208497AA2F7EE5 */
	FAnimNode_Slot AnimGraphNode_Slot_8BDB36F540720BFF0F716B84187740A5; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_SKS.ABP_SKS_C.AnimGraphNode_Slot_8BDB36F540720BFF0F716B84187740A5 */
	FAnimNode_Slot AnimGraphNode_Slot_02C76B9C43DD5A17AE2899A923A0889C; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_SKS.ABP_SKS_C.AnimGraphNode_Slot_02C76B9C43DD5A17AE2899A923A0889C */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_38064EAB4C53BE339D7EA693436312DD(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_E6A97DEA45F9362AC0208497AA2F7EE5(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_8BDB36F540720BFF0F716B84187740A5(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_02C76B9C43DD5A17AE2899A923A0889C(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_SKS_C = sizeof(UABP_SKS_C); // 1440
    static_assert(sizeof(UABP_SKS_C) == 0x5A0, "Size of UABP_SKS_C is not correct.");
	auto constexpr UABP_SKS_C_UberGraphFrame_Offset = offsetof(UABP_SKS_C, UberGraphFrame);
	static_assert(UABP_SKS_C_UberGraphFrame_Offset == 0x458, "UABP_SKS_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_SKS_C_AnimGraphNode_Root_38064EAB4C53BE339D7EA693436312DD_Offset = offsetof(UABP_SKS_C, AnimGraphNode_Root_38064EAB4C53BE339D7EA693436312DD);
	static_assert(UABP_SKS_C_AnimGraphNode_Root_38064EAB4C53BE339D7EA693436312DD_Offset == 0x460, "UABP_SKS_C::AnimGraphNode_Root_38064EAB4C53BE339D7EA693436312DD offset is not 460");
	auto constexpr UABP_SKS_C_AnimGraphNode_LocalRefPose_E6A97DEA45F9362AC0208497AA2F7EE5_Offset = offsetof(UABP_SKS_C, AnimGraphNode_LocalRefPose_E6A97DEA45F9362AC0208497AA2F7EE5);
	static_assert(UABP_SKS_C_AnimGraphNode_LocalRefPose_E6A97DEA45F9362AC0208497AA2F7EE5_Offset == 0x4a8, "UABP_SKS_C::AnimGraphNode_LocalRefPose_E6A97DEA45F9362AC0208497AA2F7EE5 offset is not 4a8");
	auto constexpr UABP_SKS_C_AnimGraphNode_Slot_8BDB36F540720BFF0F716B84187740A5_Offset = offsetof(UABP_SKS_C, AnimGraphNode_Slot_8BDB36F540720BFF0F716B84187740A5);
	static_assert(UABP_SKS_C_AnimGraphNode_Slot_8BDB36F540720BFF0F716B84187740A5_Offset == 0x4e0, "UABP_SKS_C::AnimGraphNode_Slot_8BDB36F540720BFF0F716B84187740A5 offset is not 4e0");
	auto constexpr UABP_SKS_C_AnimGraphNode_Slot_02C76B9C43DD5A17AE2899A923A0889C_Offset = offsetof(UABP_SKS_C, AnimGraphNode_Slot_02C76B9C43DD5A17AE2899A923A0889C);
	static_assert(UABP_SKS_C_AnimGraphNode_Slot_02C76B9C43DD5A17AE2899A923A0889C_Offset == 0x540, "UABP_SKS_C::AnimGraphNode_Slot_02C76B9C43DD5A17AE2899A923A0889C offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
