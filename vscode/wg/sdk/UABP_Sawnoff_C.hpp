#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Sawnoff_C // Size: 0x7A4
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Sawnoff_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(54640); // id32("AnimBlueprintGeneratedClass ABP_Sawnoff.ABP_Sawnoff_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_095A647040B9A89DF7BCE9969CBB8A11; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.AnimGraphNode_Root_095A647040B9A89DF7BCE9969CBB8A11 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_45B0E127491AC2C223DAFD9A712B4CF7; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.AnimGraphNode_LocalRefPose_45B0E127491AC2C223DAFD9A712B4CF7 */
	FAnimNode_Slot AnimGraphNode_Slot_CB5234E44CBD81AEE15AF5BB6D9F83FA; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.AnimGraphNode_Slot_CB5234E44CBD81AEE15AF5BB6D9F83FA */
	FAnimNode_Slot AnimGraphNode_Slot_2D86CBBC48F76A4EDC750291CC6B63C7; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.AnimGraphNode_Slot_2D86CBBC48F76A4EDC750291CC6B63C7 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62; /* Ofs: 0x5A0 Size: 0xB8 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.AnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D44C21114361B6E26516D0A7EC04F835; /* Ofs: 0x658 Size: 0x48 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.AnimGraphNode_LocalToComponentSpace_D44C21114361B6E26516D0A7EC04F835 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A; /* Ofs: 0x6A0 Size: 0xB8 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.AnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4FEF57104CA4C34AC6C9DBA006D58FC9; /* Ofs: 0x758 Size: 0x48 - StructProperty ABP_Sawnoff.ABP_Sawnoff_C.AnimGraphNode_ComponentToLocalSpace_4FEF57104CA4C34AC6C9DBA006D58FC9 */
	float ShellAlpha; /* Ofs: 0x7A0 Size: 0x4 - FloatProperty ABP_Sawnoff.ABP_Sawnoff_C.ShellAlpha */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_095A647040B9A89DF7BCE9969CBB8A11(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_45B0E127491AC2C223DAFD9A712B4CF7(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_CB5234E44CBD81AEE15AF5BB6D9F83FA(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_2D86CBBC48F76A4EDC750291CC6B63C7(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_D44C21114361B6E26516D0A7EC04F835(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x658, value); }
	inline bool SetAnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_4FEF57104CA4C34AC6C9DBA006D58FC9(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x758, value); }
	inline bool SetShellAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x7A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Sawnoff_C = sizeof(UABP_Sawnoff_C); // 1956
    static_assert(sizeof(UABP_Sawnoff_C) == 0x7A4, "Size of UABP_Sawnoff_C is not correct.");
	auto constexpr UABP_Sawnoff_C_UberGraphFrame_Offset = offsetof(UABP_Sawnoff_C, UberGraphFrame);
	static_assert(UABP_Sawnoff_C_UberGraphFrame_Offset == 0x458, "UABP_Sawnoff_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Sawnoff_C_AnimGraphNode_Root_095A647040B9A89DF7BCE9969CBB8A11_Offset = offsetof(UABP_Sawnoff_C, AnimGraphNode_Root_095A647040B9A89DF7BCE9969CBB8A11);
	static_assert(UABP_Sawnoff_C_AnimGraphNode_Root_095A647040B9A89DF7BCE9969CBB8A11_Offset == 0x460, "UABP_Sawnoff_C::AnimGraphNode_Root_095A647040B9A89DF7BCE9969CBB8A11 offset is not 460");
	auto constexpr UABP_Sawnoff_C_AnimGraphNode_LocalRefPose_45B0E127491AC2C223DAFD9A712B4CF7_Offset = offsetof(UABP_Sawnoff_C, AnimGraphNode_LocalRefPose_45B0E127491AC2C223DAFD9A712B4CF7);
	static_assert(UABP_Sawnoff_C_AnimGraphNode_LocalRefPose_45B0E127491AC2C223DAFD9A712B4CF7_Offset == 0x4a8, "UABP_Sawnoff_C::AnimGraphNode_LocalRefPose_45B0E127491AC2C223DAFD9A712B4CF7 offset is not 4a8");
	auto constexpr UABP_Sawnoff_C_AnimGraphNode_Slot_CB5234E44CBD81AEE15AF5BB6D9F83FA_Offset = offsetof(UABP_Sawnoff_C, AnimGraphNode_Slot_CB5234E44CBD81AEE15AF5BB6D9F83FA);
	static_assert(UABP_Sawnoff_C_AnimGraphNode_Slot_CB5234E44CBD81AEE15AF5BB6D9F83FA_Offset == 0x4e0, "UABP_Sawnoff_C::AnimGraphNode_Slot_CB5234E44CBD81AEE15AF5BB6D9F83FA offset is not 4e0");
	auto constexpr UABP_Sawnoff_C_AnimGraphNode_Slot_2D86CBBC48F76A4EDC750291CC6B63C7_Offset = offsetof(UABP_Sawnoff_C, AnimGraphNode_Slot_2D86CBBC48F76A4EDC750291CC6B63C7);
	static_assert(UABP_Sawnoff_C_AnimGraphNode_Slot_2D86CBBC48F76A4EDC750291CC6B63C7_Offset == 0x540, "UABP_Sawnoff_C::AnimGraphNode_Slot_2D86CBBC48F76A4EDC750291CC6B63C7 offset is not 540");
	auto constexpr UABP_Sawnoff_C_AnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62_Offset = offsetof(UABP_Sawnoff_C, AnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62);
	static_assert(UABP_Sawnoff_C_AnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62_Offset == 0x5a0, "UABP_Sawnoff_C::AnimGraphNode_ModifyBone_191746AD49F18512D94F0287AC301A62 offset is not 5a0");
	auto constexpr UABP_Sawnoff_C_AnimGraphNode_LocalToComponentSpace_D44C21114361B6E26516D0A7EC04F835_Offset = offsetof(UABP_Sawnoff_C, AnimGraphNode_LocalToComponentSpace_D44C21114361B6E26516D0A7EC04F835);
	static_assert(UABP_Sawnoff_C_AnimGraphNode_LocalToComponentSpace_D44C21114361B6E26516D0A7EC04F835_Offset == 0x658, "UABP_Sawnoff_C::AnimGraphNode_LocalToComponentSpace_D44C21114361B6E26516D0A7EC04F835 offset is not 658");
	auto constexpr UABP_Sawnoff_C_AnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A_Offset = offsetof(UABP_Sawnoff_C, AnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A);
	static_assert(UABP_Sawnoff_C_AnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A_Offset == 0x6a0, "UABP_Sawnoff_C::AnimGraphNode_ModifyBone_B3E3F0A54C8C1FFF6366ADA4819F668A offset is not 6a0");
	auto constexpr UABP_Sawnoff_C_AnimGraphNode_ComponentToLocalSpace_4FEF57104CA4C34AC6C9DBA006D58FC9_Offset = offsetof(UABP_Sawnoff_C, AnimGraphNode_ComponentToLocalSpace_4FEF57104CA4C34AC6C9DBA006D58FC9);
	static_assert(UABP_Sawnoff_C_AnimGraphNode_ComponentToLocalSpace_4FEF57104CA4C34AC6C9DBA006D58FC9_Offset == 0x758, "UABP_Sawnoff_C::AnimGraphNode_ComponentToLocalSpace_4FEF57104CA4C34AC6C9DBA006D58FC9 offset is not 758");
	auto constexpr UABP_Sawnoff_C_ShellAlpha_Offset = offsetof(UABP_Sawnoff_C, ShellAlpha);
	static_assert(UABP_Sawnoff_C_ShellAlpha_Offset == 0x7a0, "UABP_Sawnoff_C::ShellAlpha offset is not 7a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
