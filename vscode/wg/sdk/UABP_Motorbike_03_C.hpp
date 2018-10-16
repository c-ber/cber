#pragma once
#include "UVehicleAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_WheelHandler.hpp"
#include "FAnimNode_CopyBone.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_RotationMultiplier.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Motorbike_03_C // Size: 0x1590
	: public UVehicleAnimInstance // Size: 0x890
{
private:
	typedef UABP_Motorbike_03_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117259); // id32("AnimBlueprintGeneratedClass ABP_Motorbike_03.ABP_Motorbike_03_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x890 Size: 0x8 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.UberGraphFrame */
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4; /* Ofs: 0x898 Size: 0x88 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4 */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F; /* Ofs: 0x920 Size: 0xA8 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF; /* Ofs: 0x9C8 Size: 0xE8 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF */
	FAnimNode_LookAt AnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418; /* Ofs: 0xAB0 Size: 0x180 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C; /* Ofs: 0xC30 Size: 0x48 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8; /* Ofs: 0xC78 Size: 0x48 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD; /* Ofs: 0xCC0 Size: 0x38 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18; /* Ofs: 0xCF8 Size: 0xA8 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575; /* Ofs: 0xDA0 Size: 0xA8 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575 */
	uint8_t UnknownDataE48[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD; /* Ofs: 0xE50 Size: 0x180 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD */
	FAnimNode_LookAt AnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC; /* Ofs: 0xFD0 Size: 0x180 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC */
	FAnimNode_LookAt AnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D; /* Ofs: 0x1150 Size: 0x180 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D */
	FAnimNode_LookAt AnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037; /* Ofs: 0x12D0 Size: 0x180 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB; /* Ofs: 0x1450 Size: 0xB8 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB */
	FAnimNode_Root AnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83; /* Ofs: 0x1508 Size: 0x48 - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83 */
	ExternalPtr<struct UBP_Motorbike_03_C> BikeRef; /* Ofs: 0x1550 Size: 0x8 - ObjectProperty ABP_Motorbike_03.ABP_Motorbike_03_C.BikeRef */
	float SteerRoll; /* Ofs: 0x1558 Size: 0x4 - FloatProperty ABP_Motorbike_03.ABP_Motorbike_03_C.SteerRoll */
	FRotator BodyRot; /* Ofs: 0x155C Size: 0xC - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.BodyRot */
	float AD_Alpha; /* Ofs: 0x1568 Size: 0x4 - FloatProperty ABP_Motorbike_03.ABP_Motorbike_03_C.AD_Alpha */
	FVector LastVelocity; /* Ofs: 0x156C Size: 0xC - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.LastVelocity */
	FVector EF; /* Ofs: 0x1578 Size: 0xC - StructProperty ABP_Motorbike_03.ABP_Motorbike_03_C.EF */
	uint8_t UnknownData1584[0x4];
	ExternalPtr<struct UTslMotorbikeVehicle> BikeRef4; /* Ofs: 0x1588 Size: 0x8 - ObjectProperty ABP_Motorbike_03.ABP_Motorbike_03_C.BikeRef4 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x890, value); }
	inline bool SetAnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4(t_structHelper inst, FAnimNode_WheelHandler value) { inst.WriteOffset(0x898, value); }
	inline bool SetAnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x920, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x9C8, value); }
	inline bool SetAnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xAB0, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0xC30, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0xC78, value); }
	inline bool SetAnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0xCC0, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0xCF8, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0xDA0, value); }
	inline bool SetAnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xE50, value); }
	inline bool SetAnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xFD0, value); }
	inline bool SetAnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1150, value); }
	inline bool SetAnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x12D0, value); }
	inline bool SetAnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1450, value); }
	inline bool SetAnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x1508, value); }
	inline bool SetBikeRef(t_structHelper inst, ExternalPtr<struct UBP_Motorbike_03_C> value) { inst.WriteOffset(0x1550, value); }
	inline bool SetSteerRoll(t_structHelper inst, float value) { inst.WriteOffset(0x1558, value); }
	inline bool SetBodyRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x155C, value); }
	inline bool SetAD_Alpha(t_structHelper inst, float value) { inst.WriteOffset(0x1568, value); }
	inline bool SetLastVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x156C, value); }
	inline bool SetEF(t_structHelper inst, FVector value) { inst.WriteOffset(0x1578, value); }
	inline bool SetBikeRef4(t_structHelper inst, ExternalPtr<struct UTslMotorbikeVehicle> value) { inst.WriteOffset(0x1588, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Motorbike_03_C = sizeof(UABP_Motorbike_03_C); // 5520
    static_assert(sizeof(UABP_Motorbike_03_C) == 0x1590, "Size of UABP_Motorbike_03_C is not correct.");
	auto constexpr UABP_Motorbike_03_C_UberGraphFrame_Offset = offsetof(UABP_Motorbike_03_C, UberGraphFrame);
	static_assert(UABP_Motorbike_03_C_UberGraphFrame_Offset == 0x890, "UABP_Motorbike_03_C::UberGraphFrame offset is not 890");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4_Offset == 0x898, "UABP_Motorbike_03_C::AnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4 offset is not 898");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F_Offset == 0x920, "UABP_Motorbike_03_C::AnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F offset is not 920");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF_Offset == 0x9c8, "UABP_Motorbike_03_C::AnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF offset is not 9c8");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418_Offset == 0xab0, "UABP_Motorbike_03_C::AnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418 offset is not ab0");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C_Offset == 0xc30, "UABP_Motorbike_03_C::AnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C offset is not c30");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8_Offset == 0xc78, "UABP_Motorbike_03_C::AnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8 offset is not c78");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD_Offset == 0xcc0, "UABP_Motorbike_03_C::AnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD offset is not cc0");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18_Offset == 0xcf8, "UABP_Motorbike_03_C::AnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18 offset is not cf8");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575_Offset == 0xda0, "UABP_Motorbike_03_C::AnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575 offset is not da0");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD_Offset == 0xe50, "UABP_Motorbike_03_C::AnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD offset is not e50");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC_Offset == 0xfd0, "UABP_Motorbike_03_C::AnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC offset is not fd0");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D_Offset == 0x1150, "UABP_Motorbike_03_C::AnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D offset is not 1150");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037_Offset == 0x12d0, "UABP_Motorbike_03_C::AnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037 offset is not 12d0");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB_Offset == 0x1450, "UABP_Motorbike_03_C::AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB offset is not 1450");
	auto constexpr UABP_Motorbike_03_C_AnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83_Offset = offsetof(UABP_Motorbike_03_C, AnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83);
	static_assert(UABP_Motorbike_03_C_AnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83_Offset == 0x1508, "UABP_Motorbike_03_C::AnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83 offset is not 1508");
	auto constexpr UABP_Motorbike_03_C_BikeRef_Offset = offsetof(UABP_Motorbike_03_C, BikeRef);
	static_assert(UABP_Motorbike_03_C_BikeRef_Offset == 0x1550, "UABP_Motorbike_03_C::BikeRef offset is not 1550");
	auto constexpr UABP_Motorbike_03_C_SteerRoll_Offset = offsetof(UABP_Motorbike_03_C, SteerRoll);
	static_assert(UABP_Motorbike_03_C_SteerRoll_Offset == 0x1558, "UABP_Motorbike_03_C::SteerRoll offset is not 1558");
	auto constexpr UABP_Motorbike_03_C_BodyRot_Offset = offsetof(UABP_Motorbike_03_C, BodyRot);
	static_assert(UABP_Motorbike_03_C_BodyRot_Offset == 0x155c, "UABP_Motorbike_03_C::BodyRot offset is not 155c");
	auto constexpr UABP_Motorbike_03_C_AD_Alpha_Offset = offsetof(UABP_Motorbike_03_C, AD_Alpha);
	static_assert(UABP_Motorbike_03_C_AD_Alpha_Offset == 0x1568, "UABP_Motorbike_03_C::AD_Alpha offset is not 1568");
	auto constexpr UABP_Motorbike_03_C_LastVelocity_Offset = offsetof(UABP_Motorbike_03_C, LastVelocity);
	static_assert(UABP_Motorbike_03_C_LastVelocity_Offset == 0x156c, "UABP_Motorbike_03_C::LastVelocity offset is not 156c");
	auto constexpr UABP_Motorbike_03_C_EF_Offset = offsetof(UABP_Motorbike_03_C, EF);
	static_assert(UABP_Motorbike_03_C_EF_Offset == 0x1578, "UABP_Motorbike_03_C::EF offset is not 1578");
	auto constexpr UABP_Motorbike_03_C_BikeRef4_Offset = offsetof(UABP_Motorbike_03_C, BikeRef4);
	static_assert(UABP_Motorbike_03_C_BikeRef4_Offset == 0x1588, "UABP_Motorbike_03_C::BikeRef4 offset is not 1588");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
