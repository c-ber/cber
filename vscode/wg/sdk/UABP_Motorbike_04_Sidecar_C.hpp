#pragma once
#include "UVehicleAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_CopyBone.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_RotationMultiplier.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_WheelHandler.hpp"
#include "FAnimNode_Root.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Motorbike_04_Sidecar_C // Size: 0x1A38
	: public UVehicleAnimInstance // Size: 0x890
{
private:
	typedef UABP_Motorbike_04_Sidecar_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(120314); // id32("AnimBlueprintGeneratedClass ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x890 Size: 0x8 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.UberGraphFrame */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744; /* Ofs: 0x898 Size: 0x48 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744 */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A; /* Ofs: 0x8E0 Size: 0xA8 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A; /* Ofs: 0x988 Size: 0xE8 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A */
	FAnimNode_LookAt AnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB; /* Ofs: 0xA70 Size: 0x180 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C; /* Ofs: 0xBF0 Size: 0x48 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B; /* Ofs: 0xC38 Size: 0x38 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF; /* Ofs: 0xC70 Size: 0xA8 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF */
	uint8_t UnknownDataD18[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0; /* Ofs: 0xD20 Size: 0x180 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0 */
	FAnimNode_LookAt AnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D; /* Ofs: 0xEA0 Size: 0x180 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D */
	FAnimNode_LookAt AnimGraphNode_LookAt_340FA171423B264747775F974A9976B1; /* Ofs: 0x1020 Size: 0x180 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LookAt_340FA171423B264747775F974A9976B1 */
	FAnimNode_LookAt AnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F; /* Ofs: 0x11A0 Size: 0x180 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191; /* Ofs: 0x1320 Size: 0xB8 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8; /* Ofs: 0x13D8 Size: 0xA8 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837; /* Ofs: 0x1480 Size: 0xE8 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837 */
	uint8_t UnknownData1568[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029; /* Ofs: 0x1570 Size: 0x180 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029 */
	FAnimNode_LookAt AnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8; /* Ofs: 0x16F0 Size: 0x180 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8 */
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler_E0130E554698A3384516C6A209B513F6; /* Ofs: 0x1870 Size: 0x88 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_WheelHandler_E0130E554698A3384516C6A209B513F6 */
	FAnimNode_Root AnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B; /* Ofs: 0x18F8 Size: 0x48 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32; /* Ofs: 0x1940 Size: 0xB8 - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32 */
	ExternalPtr<struct UTslMotorbikeVehicle> BikeRef; /* Ofs: 0x19F8 Size: 0x8 - ObjectProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.BikeRef */
	float SteerRoll; /* Ofs: 0x1A00 Size: 0x4 - FloatProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.SteerRoll */
	FRotator BodyRot; /* Ofs: 0x1A04 Size: 0xC - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.BodyRot */
	float AD_Alpha; /* Ofs: 0x1A10 Size: 0x4 - FloatProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.AD_Alpha */
	FVector LastVelocity; /* Ofs: 0x1A14 Size: 0xC - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.LastVelocity */
	FVector EF; /* Ofs: 0x1A20 Size: 0xC - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.EF */
	FRotator SteerRot; /* Ofs: 0x1A2C Size: 0xC - StructProperty ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.SteerRot */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x890, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x898, value); }
	inline bool SetAnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x8E0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x988, value); }
	inline bool SetAnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xA70, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0xBF0, value); }
	inline bool SetAnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0xC38, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0xC70, value); }
	inline bool SetAnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xD20, value); }
	inline bool SetAnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xEA0, value); }
	inline bool SetAnimGraphNode_LookAt_340FA171423B264747775F974A9976B1(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1020, value); }
	inline bool SetAnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x11A0, value); }
	inline bool SetAnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1320, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x13D8, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1480, value); }
	inline bool SetAnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1570, value); }
	inline bool SetAnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x16F0, value); }
	inline bool SetAnimGraphNode_WheelHandler_E0130E554698A3384516C6A209B513F6(t_structHelper inst, FAnimNode_WheelHandler value) { inst.WriteOffset(0x1870, value); }
	inline bool SetAnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x18F8, value); }
	inline bool SetAnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1940, value); }
	inline bool SetBikeRef(t_structHelper inst, ExternalPtr<struct UTslMotorbikeVehicle> value) { inst.WriteOffset(0x19F8, value); }
	inline bool SetSteerRoll(t_structHelper inst, float value) { inst.WriteOffset(0x1A00, value); }
	inline bool SetBodyRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1A04, value); }
	inline bool SetAD_Alpha(t_structHelper inst, float value) { inst.WriteOffset(0x1A10, value); }
	inline bool SetLastVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x1A14, value); }
	inline bool SetEF(t_structHelper inst, FVector value) { inst.WriteOffset(0x1A20, value); }
	inline bool SetSteerRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1A2C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Motorbike_04_Sidecar_C = sizeof(UABP_Motorbike_04_Sidecar_C); // 6712
    static_assert(sizeof(UABP_Motorbike_04_Sidecar_C) == 0x1A38, "Size of UABP_Motorbike_04_Sidecar_C is not correct.");
	auto constexpr UABP_Motorbike_04_Sidecar_C_UberGraphFrame_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, UberGraphFrame);
	static_assert(UABP_Motorbike_04_Sidecar_C_UberGraphFrame_Offset == 0x890, "UABP_Motorbike_04_Sidecar_C::UberGraphFrame offset is not 890");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744_Offset == 0x898, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744 offset is not 898");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A_Offset == 0x8e0, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A offset is not 8e0");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A_Offset == 0x988, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A offset is not 988");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB_Offset == 0xa70, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB offset is not a70");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C_Offset == 0xbf0, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C offset is not bf0");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B_Offset == 0xc38, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B offset is not c38");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF_Offset == 0xc70, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF offset is not c70");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0_Offset == 0xd20, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0 offset is not d20");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D_Offset == 0xea0, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D offset is not ea0");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_340FA171423B264747775F974A9976B1_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LookAt_340FA171423B264747775F974A9976B1);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_340FA171423B264747775F974A9976B1_Offset == 0x1020, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LookAt_340FA171423B264747775F974A9976B1 offset is not 1020");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F_Offset == 0x11a0, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F offset is not 11a0");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191_Offset == 0x1320, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191 offset is not 1320");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8_Offset == 0x13d8, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8 offset is not 13d8");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837_Offset == 0x1480, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837 offset is not 1480");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029_Offset == 0x1570, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029 offset is not 1570");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8_Offset == 0x16f0, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8 offset is not 16f0");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_WheelHandler_E0130E554698A3384516C6A209B513F6_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_WheelHandler_E0130E554698A3384516C6A209B513F6);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_WheelHandler_E0130E554698A3384516C6A209B513F6_Offset == 0x1870, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_WheelHandler_E0130E554698A3384516C6A209B513F6 offset is not 1870");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B_Offset == 0x18f8, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B offset is not 18f8");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32);
	static_assert(UABP_Motorbike_04_Sidecar_C_AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32_Offset == 0x1940, "UABP_Motorbike_04_Sidecar_C::AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32 offset is not 1940");
	auto constexpr UABP_Motorbike_04_Sidecar_C_BikeRef_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, BikeRef);
	static_assert(UABP_Motorbike_04_Sidecar_C_BikeRef_Offset == 0x19f8, "UABP_Motorbike_04_Sidecar_C::BikeRef offset is not 19f8");
	auto constexpr UABP_Motorbike_04_Sidecar_C_SteerRoll_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, SteerRoll);
	static_assert(UABP_Motorbike_04_Sidecar_C_SteerRoll_Offset == 0x1a00, "UABP_Motorbike_04_Sidecar_C::SteerRoll offset is not 1a00");
	auto constexpr UABP_Motorbike_04_Sidecar_C_BodyRot_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, BodyRot);
	static_assert(UABP_Motorbike_04_Sidecar_C_BodyRot_Offset == 0x1a04, "UABP_Motorbike_04_Sidecar_C::BodyRot offset is not 1a04");
	auto constexpr UABP_Motorbike_04_Sidecar_C_AD_Alpha_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, AD_Alpha);
	static_assert(UABP_Motorbike_04_Sidecar_C_AD_Alpha_Offset == 0x1a10, "UABP_Motorbike_04_Sidecar_C::AD_Alpha offset is not 1a10");
	auto constexpr UABP_Motorbike_04_Sidecar_C_LastVelocity_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, LastVelocity);
	static_assert(UABP_Motorbike_04_Sidecar_C_LastVelocity_Offset == 0x1a14, "UABP_Motorbike_04_Sidecar_C::LastVelocity offset is not 1a14");
	auto constexpr UABP_Motorbike_04_Sidecar_C_EF_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, EF);
	static_assert(UABP_Motorbike_04_Sidecar_C_EF_Offset == 0x1a20, "UABP_Motorbike_04_Sidecar_C::EF offset is not 1a20");
	auto constexpr UABP_Motorbike_04_Sidecar_C_SteerRot_Offset = offsetof(UABP_Motorbike_04_Sidecar_C, SteerRot);
	static_assert(UABP_Motorbike_04_Sidecar_C_SteerRot_Offset == 0x1a2c, "UABP_Motorbike_04_Sidecar_C::SteerRot offset is not 1a2c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
