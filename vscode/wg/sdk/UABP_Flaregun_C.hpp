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

struct alignas(1) UABP_Flaregun_C // Size: 0x540
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Flaregun_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130455); // id32("AnimBlueprintGeneratedClass ABP_Flaregun.ABP_Flaregun_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Flaregun.ABP_Flaregun_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_E6EC57BE4D86D306B4BE1096BAB11152; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Flaregun.ABP_Flaregun_C.AnimGraphNode_Root_E6EC57BE4D86D306B4BE1096BAB11152 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_45E95D194E4914DA3736EF873FED6CE5; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Flaregun.ABP_Flaregun_C.AnimGraphNode_LocalRefPose_45E95D194E4914DA3736EF873FED6CE5 */
	FAnimNode_Slot AnimGraphNode_Slot_39BD47FB48CFB1DB82DBA69EEDB69EF1; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Flaregun.ABP_Flaregun_C.AnimGraphNode_Slot_39BD47FB48CFB1DB82DBA69EEDB69EF1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_E6EC57BE4D86D306B4BE1096BAB11152(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_45E95D194E4914DA3736EF873FED6CE5(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_39BD47FB48CFB1DB82DBA69EEDB69EF1(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Flaregun_C = sizeof(UABP_Flaregun_C); // 1344
    static_assert(sizeof(UABP_Flaregun_C) == 0x540, "Size of UABP_Flaregun_C is not correct.");
	auto constexpr UABP_Flaregun_C_UberGraphFrame_Offset = offsetof(UABP_Flaregun_C, UberGraphFrame);
	static_assert(UABP_Flaregun_C_UberGraphFrame_Offset == 0x458, "UABP_Flaregun_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Flaregun_C_AnimGraphNode_Root_E6EC57BE4D86D306B4BE1096BAB11152_Offset = offsetof(UABP_Flaregun_C, AnimGraphNode_Root_E6EC57BE4D86D306B4BE1096BAB11152);
	static_assert(UABP_Flaregun_C_AnimGraphNode_Root_E6EC57BE4D86D306B4BE1096BAB11152_Offset == 0x460, "UABP_Flaregun_C::AnimGraphNode_Root_E6EC57BE4D86D306B4BE1096BAB11152 offset is not 460");
	auto constexpr UABP_Flaregun_C_AnimGraphNode_LocalRefPose_45E95D194E4914DA3736EF873FED6CE5_Offset = offsetof(UABP_Flaregun_C, AnimGraphNode_LocalRefPose_45E95D194E4914DA3736EF873FED6CE5);
	static_assert(UABP_Flaregun_C_AnimGraphNode_LocalRefPose_45E95D194E4914DA3736EF873FED6CE5_Offset == 0x4a8, "UABP_Flaregun_C::AnimGraphNode_LocalRefPose_45E95D194E4914DA3736EF873FED6CE5 offset is not 4a8");
	auto constexpr UABP_Flaregun_C_AnimGraphNode_Slot_39BD47FB48CFB1DB82DBA69EEDB69EF1_Offset = offsetof(UABP_Flaregun_C, AnimGraphNode_Slot_39BD47FB48CFB1DB82DBA69EEDB69EF1);
	static_assert(UABP_Flaregun_C_AnimGraphNode_Slot_39BD47FB48CFB1DB82DBA69EEDB69EF1_Offset == 0x4e0, "UABP_Flaregun_C::AnimGraphNode_Slot_39BD47FB48CFB1DB82DBA69EEDB69EF1 offset is not 4e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
