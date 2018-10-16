#pragma once
#include "UTslVehicleAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_CopyBone.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_RotationMultiplier.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_WheelHandler.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Motorbike_04_C // Size: 0x1798
	: public UTslVehicleAnimInstance // Size: 0x9A0
{
private:
	typedef UABP_Motorbike_04_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117384); // id32("AnimBlueprintGeneratedClass ABP_Motorbike_04.ABP_Motorbike_04_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9A0 Size: 0x8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.UberGraphFrame */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0; /* Ofs: 0x9A8 Size: 0xA8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0 */
	FAnimNode_LookAt AnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6; /* Ofs: 0xA50 Size: 0x180 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77; /* Ofs: 0xBD0 Size: 0x48 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF; /* Ofs: 0xC18 Size: 0x38 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0; /* Ofs: 0xC50 Size: 0xA8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0 */
	uint8_t UnknownDataCF8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397; /* Ofs: 0xD00 Size: 0x180 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397 */
	FAnimNode_LookAt AnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910; /* Ofs: 0xE80 Size: 0x180 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910 */
	FAnimNode_LookAt AnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F; /* Ofs: 0x1000 Size: 0x180 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F; /* Ofs: 0x1180 Size: 0xB8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32; /* Ofs: 0x1238 Size: 0xB8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32 */
	FAnimNode_Root AnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154; /* Ofs: 0x12F0 Size: 0x48 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2; /* Ofs: 0x1338 Size: 0xB8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5; /* Ofs: 0x13F0 Size: 0xB8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6C4916754C3AF04E228FD4861AD18BAB; /* Ofs: 0x14A8 Size: 0x48 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_ComponentToLocalSpace_6C4916754C3AF04E228FD4861AD18BAB */
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler_8D2398CE4A09D4B7A31747B354C65BC9; /* Ofs: 0x14F0 Size: 0x88 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_WheelHandler_8D2398CE4A09D4B7A31747B354C65BC9 */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_A4847C5B4C3DB0C42F3C569E43B50220; /* Ofs: 0x1578 Size: 0xA8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_CopyBone_A4847C5B4C3DB0C42F3C569E43B50220 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_766636434859C31D442B63B25A9CD81E; /* Ofs: 0x1620 Size: 0xE8 - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AnimGraphNode_BoneDrivenController_766636434859C31D442B63B25A9CD81E */
	ExternalPtr<struct UBP_Motorbike_03_C> BikeRef; /* Ofs: 0x1708 Size: 0x8 - ObjectProperty ABP_Motorbike_04.ABP_Motorbike_04_C.BikeRef */
	float SteerRoll; /* Ofs: 0x1710 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.SteerRoll */
	FRotator BodyRot; /* Ofs: 0x1714 Size: 0xC - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.BodyRot */
	float AD_Alpha; /* Ofs: 0x1720 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.AD_Alpha */
	FVector LastVelocity; /* Ofs: 0x1724 Size: 0xC - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.LastVelocity */
	FVector EF; /* Ofs: 0x1730 Size: 0xC - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.EF */
	uint8_t UnknownData173C[0x4];
	ExternalPtr<struct UTslMotorbikeVehicle> BikeRef4; /* Ofs: 0x1740 Size: 0x8 - ObjectProperty ABP_Motorbike_04.ABP_Motorbike_04_C.BikeRef4 */
	FRotator KickStandRot; /* Ofs: 0x1748 Size: 0xC - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.KickStandRot */
	float KickStandCurrentRot; /* Ofs: 0x1754 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.KickStandCurrentRot */
	float MaxDrop; /* Ofs: 0x1758 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.MaxDrop */
	float MaxRaise; /* Ofs: 0x175C Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.MaxRaise */
	float FrontSusp_Offset; /* Ofs: 0x1760 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.FrontSusp_Offset */
	float FrontSusp_Speed; /* Ofs: 0x1764 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.FrontSusp_Speed */
	float BackSusp_Offset; /* Ofs: 0x1768 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.BackSusp_Offset */
	float BackSusp_Speed; /* Ofs: 0x176C Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.BackSusp_Speed */
	FRotator SteerRot; /* Ofs: 0x1770 Size: 0xC - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.SteerRot */
	FRotator SpeedArrowRot; /* Ofs: 0x177C Size: 0xC - StructProperty ABP_Motorbike_04.ABP_Motorbike_04_C.SpeedArrowRot */
	float EF_Rot; /* Ofs: 0x1788 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.EF_Rot */
	float DotComp; /* Ofs: 0x178C Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.DotComp */
	float SteerComp; /* Ofs: 0x1790 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.SteerComp */
	float SpeedInKm; /* Ofs: 0x1794 Size: 0x4 - FloatProperty ABP_Motorbike_04.ABP_Motorbike_04_C.SpeedInKm */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9A0, value); }
	inline bool SetAnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x9A8, value); }
	inline bool SetAnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xA50, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0xBD0, value); }
	inline bool SetAnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0xC18, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0xC50, value); }
	inline bool SetAnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xD00, value); }
	inline bool SetAnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xE80, value); }
	inline bool SetAnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1000, value); }
	inline bool SetAnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1180, value); }
	inline bool SetAnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1238, value); }
	inline bool SetAnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x12F0, value); }
	inline bool SetAnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1338, value); }
	inline bool SetAnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x13F0, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_6C4916754C3AF04E228FD4861AD18BAB(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x14A8, value); }
	inline bool SetAnimGraphNode_WheelHandler_8D2398CE4A09D4B7A31747B354C65BC9(t_structHelper inst, FAnimNode_WheelHandler value) { inst.WriteOffset(0x14F0, value); }
	inline bool SetAnimGraphNode_CopyBone_A4847C5B4C3DB0C42F3C569E43B50220(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x1578, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_766636434859C31D442B63B25A9CD81E(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1620, value); }
	inline bool SetBikeRef(t_structHelper inst, ExternalPtr<struct UBP_Motorbike_03_C> value) { inst.WriteOffset(0x1708, value); }
	inline bool SetSteerRoll(t_structHelper inst, float value) { inst.WriteOffset(0x1710, value); }
	inline bool SetBodyRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1714, value); }
	inline bool SetAD_Alpha(t_structHelper inst, float value) { inst.WriteOffset(0x1720, value); }
	inline bool SetLastVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x1724, value); }
	inline bool SetEF(t_structHelper inst, FVector value) { inst.WriteOffset(0x1730, value); }
	inline bool SetBikeRef4(t_structHelper inst, ExternalPtr<struct UTslMotorbikeVehicle> value) { inst.WriteOffset(0x1740, value); }
	inline bool SetKickStandRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1748, value); }
	inline bool SetKickStandCurrentRot(t_structHelper inst, float value) { inst.WriteOffset(0x1754, value); }
	inline bool SetMaxDrop(t_structHelper inst, float value) { inst.WriteOffset(0x1758, value); }
	inline bool SetMaxRaise(t_structHelper inst, float value) { inst.WriteOffset(0x175C, value); }
	inline bool SetFrontSusp_Offset(t_structHelper inst, float value) { inst.WriteOffset(0x1760, value); }
	inline bool SetFrontSusp_Speed(t_structHelper inst, float value) { inst.WriteOffset(0x1764, value); }
	inline bool SetBackSusp_Offset(t_structHelper inst, float value) { inst.WriteOffset(0x1768, value); }
	inline bool SetBackSusp_Speed(t_structHelper inst, float value) { inst.WriteOffset(0x176C, value); }
	inline bool SetSteerRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1770, value); }
	inline bool SetSpeedArrowRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x177C, value); }
	inline bool SetEF_Rot(t_structHelper inst, float value) { inst.WriteOffset(0x1788, value); }
	inline bool SetDotComp(t_structHelper inst, float value) { inst.WriteOffset(0x178C, value); }
	inline bool SetSteerComp(t_structHelper inst, float value) { inst.WriteOffset(0x1790, value); }
	inline bool SetSpeedInKm(t_structHelper inst, float value) { inst.WriteOffset(0x1794, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Motorbike_04_C = sizeof(UABP_Motorbike_04_C); // 6040
    static_assert(sizeof(UABP_Motorbike_04_C) == 0x1798, "Size of UABP_Motorbike_04_C is not correct.");
	auto constexpr UABP_Motorbike_04_C_UberGraphFrame_Offset = offsetof(UABP_Motorbike_04_C, UberGraphFrame);
	static_assert(UABP_Motorbike_04_C_UberGraphFrame_Offset == 0x9a0, "UABP_Motorbike_04_C::UberGraphFrame offset is not 9a0");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0_Offset == 0x9a8, "UABP_Motorbike_04_C::AnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0 offset is not 9a8");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6_Offset == 0xa50, "UABP_Motorbike_04_C::AnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6 offset is not a50");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77_Offset == 0xbd0, "UABP_Motorbike_04_C::AnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77 offset is not bd0");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF_Offset == 0xc18, "UABP_Motorbike_04_C::AnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF offset is not c18");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0_Offset == 0xc50, "UABP_Motorbike_04_C::AnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0 offset is not c50");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397_Offset == 0xd00, "UABP_Motorbike_04_C::AnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397 offset is not d00");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910_Offset == 0xe80, "UABP_Motorbike_04_C::AnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910 offset is not e80");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F_Offset == 0x1000, "UABP_Motorbike_04_C::AnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F offset is not 1000");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F_Offset == 0x1180, "UABP_Motorbike_04_C::AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F offset is not 1180");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32_Offset == 0x1238, "UABP_Motorbike_04_C::AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32 offset is not 1238");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154_Offset == 0x12f0, "UABP_Motorbike_04_C::AnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154 offset is not 12f0");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2_Offset == 0x1338, "UABP_Motorbike_04_C::AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2 offset is not 1338");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5_Offset == 0x13f0, "UABP_Motorbike_04_C::AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5 offset is not 13f0");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_ComponentToLocalSpace_6C4916754C3AF04E228FD4861AD18BAB_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_ComponentToLocalSpace_6C4916754C3AF04E228FD4861AD18BAB);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_ComponentToLocalSpace_6C4916754C3AF04E228FD4861AD18BAB_Offset == 0x14a8, "UABP_Motorbike_04_C::AnimGraphNode_ComponentToLocalSpace_6C4916754C3AF04E228FD4861AD18BAB offset is not 14a8");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_WheelHandler_8D2398CE4A09D4B7A31747B354C65BC9_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_WheelHandler_8D2398CE4A09D4B7A31747B354C65BC9);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_WheelHandler_8D2398CE4A09D4B7A31747B354C65BC9_Offset == 0x14f0, "UABP_Motorbike_04_C::AnimGraphNode_WheelHandler_8D2398CE4A09D4B7A31747B354C65BC9 offset is not 14f0");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_CopyBone_A4847C5B4C3DB0C42F3C569E43B50220_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_CopyBone_A4847C5B4C3DB0C42F3C569E43B50220);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_CopyBone_A4847C5B4C3DB0C42F3C569E43B50220_Offset == 0x1578, "UABP_Motorbike_04_C::AnimGraphNode_CopyBone_A4847C5B4C3DB0C42F3C569E43B50220 offset is not 1578");
	auto constexpr UABP_Motorbike_04_C_AnimGraphNode_BoneDrivenController_766636434859C31D442B63B25A9CD81E_Offset = offsetof(UABP_Motorbike_04_C, AnimGraphNode_BoneDrivenController_766636434859C31D442B63B25A9CD81E);
	static_assert(UABP_Motorbike_04_C_AnimGraphNode_BoneDrivenController_766636434859C31D442B63B25A9CD81E_Offset == 0x1620, "UABP_Motorbike_04_C::AnimGraphNode_BoneDrivenController_766636434859C31D442B63B25A9CD81E offset is not 1620");
	auto constexpr UABP_Motorbike_04_C_BikeRef_Offset = offsetof(UABP_Motorbike_04_C, BikeRef);
	static_assert(UABP_Motorbike_04_C_BikeRef_Offset == 0x1708, "UABP_Motorbike_04_C::BikeRef offset is not 1708");
	auto constexpr UABP_Motorbike_04_C_SteerRoll_Offset = offsetof(UABP_Motorbike_04_C, SteerRoll);
	static_assert(UABP_Motorbike_04_C_SteerRoll_Offset == 0x1710, "UABP_Motorbike_04_C::SteerRoll offset is not 1710");
	auto constexpr UABP_Motorbike_04_C_BodyRot_Offset = offsetof(UABP_Motorbike_04_C, BodyRot);
	static_assert(UABP_Motorbike_04_C_BodyRot_Offset == 0x1714, "UABP_Motorbike_04_C::BodyRot offset is not 1714");
	auto constexpr UABP_Motorbike_04_C_AD_Alpha_Offset = offsetof(UABP_Motorbike_04_C, AD_Alpha);
	static_assert(UABP_Motorbike_04_C_AD_Alpha_Offset == 0x1720, "UABP_Motorbike_04_C::AD_Alpha offset is not 1720");
	auto constexpr UABP_Motorbike_04_C_LastVelocity_Offset = offsetof(UABP_Motorbike_04_C, LastVelocity);
	static_assert(UABP_Motorbike_04_C_LastVelocity_Offset == 0x1724, "UABP_Motorbike_04_C::LastVelocity offset is not 1724");
	auto constexpr UABP_Motorbike_04_C_EF_Offset = offsetof(UABP_Motorbike_04_C, EF);
	static_assert(UABP_Motorbike_04_C_EF_Offset == 0x1730, "UABP_Motorbike_04_C::EF offset is not 1730");
	auto constexpr UABP_Motorbike_04_C_BikeRef4_Offset = offsetof(UABP_Motorbike_04_C, BikeRef4);
	static_assert(UABP_Motorbike_04_C_BikeRef4_Offset == 0x1740, "UABP_Motorbike_04_C::BikeRef4 offset is not 1740");
	auto constexpr UABP_Motorbike_04_C_KickStandRot_Offset = offsetof(UABP_Motorbike_04_C, KickStandRot);
	static_assert(UABP_Motorbike_04_C_KickStandRot_Offset == 0x1748, "UABP_Motorbike_04_C::KickStandRot offset is not 1748");
	auto constexpr UABP_Motorbike_04_C_KickStandCurrentRot_Offset = offsetof(UABP_Motorbike_04_C, KickStandCurrentRot);
	static_assert(UABP_Motorbike_04_C_KickStandCurrentRot_Offset == 0x1754, "UABP_Motorbike_04_C::KickStandCurrentRot offset is not 1754");
	auto constexpr UABP_Motorbike_04_C_MaxDrop_Offset = offsetof(UABP_Motorbike_04_C, MaxDrop);
	static_assert(UABP_Motorbike_04_C_MaxDrop_Offset == 0x1758, "UABP_Motorbike_04_C::MaxDrop offset is not 1758");
	auto constexpr UABP_Motorbike_04_C_MaxRaise_Offset = offsetof(UABP_Motorbike_04_C, MaxRaise);
	static_assert(UABP_Motorbike_04_C_MaxRaise_Offset == 0x175c, "UABP_Motorbike_04_C::MaxRaise offset is not 175c");
	auto constexpr UABP_Motorbike_04_C_FrontSusp_Offset_Offset = offsetof(UABP_Motorbike_04_C, FrontSusp_Offset);
	static_assert(UABP_Motorbike_04_C_FrontSusp_Offset_Offset == 0x1760, "UABP_Motorbike_04_C::FrontSusp_Offset offset is not 1760");
	auto constexpr UABP_Motorbike_04_C_FrontSusp_Speed_Offset = offsetof(UABP_Motorbike_04_C, FrontSusp_Speed);
	static_assert(UABP_Motorbike_04_C_FrontSusp_Speed_Offset == 0x1764, "UABP_Motorbike_04_C::FrontSusp_Speed offset is not 1764");
	auto constexpr UABP_Motorbike_04_C_BackSusp_Offset_Offset = offsetof(UABP_Motorbike_04_C, BackSusp_Offset);
	static_assert(UABP_Motorbike_04_C_BackSusp_Offset_Offset == 0x1768, "UABP_Motorbike_04_C::BackSusp_Offset offset is not 1768");
	auto constexpr UABP_Motorbike_04_C_BackSusp_Speed_Offset = offsetof(UABP_Motorbike_04_C, BackSusp_Speed);
	static_assert(UABP_Motorbike_04_C_BackSusp_Speed_Offset == 0x176c, "UABP_Motorbike_04_C::BackSusp_Speed offset is not 176c");
	auto constexpr UABP_Motorbike_04_C_SteerRot_Offset = offsetof(UABP_Motorbike_04_C, SteerRot);
	static_assert(UABP_Motorbike_04_C_SteerRot_Offset == 0x1770, "UABP_Motorbike_04_C::SteerRot offset is not 1770");
	auto constexpr UABP_Motorbike_04_C_SpeedArrowRot_Offset = offsetof(UABP_Motorbike_04_C, SpeedArrowRot);
	static_assert(UABP_Motorbike_04_C_SpeedArrowRot_Offset == 0x177c, "UABP_Motorbike_04_C::SpeedArrowRot offset is not 177c");
	auto constexpr UABP_Motorbike_04_C_EF_Rot_Offset = offsetof(UABP_Motorbike_04_C, EF_Rot);
	static_assert(UABP_Motorbike_04_C_EF_Rot_Offset == 0x1788, "UABP_Motorbike_04_C::EF_Rot offset is not 1788");
	auto constexpr UABP_Motorbike_04_C_DotComp_Offset = offsetof(UABP_Motorbike_04_C, DotComp);
	static_assert(UABP_Motorbike_04_C_DotComp_Offset == 0x178c, "UABP_Motorbike_04_C::DotComp offset is not 178c");
	auto constexpr UABP_Motorbike_04_C_SteerComp_Offset = offsetof(UABP_Motorbike_04_C, SteerComp);
	static_assert(UABP_Motorbike_04_C_SteerComp_Offset == 0x1790, "UABP_Motorbike_04_C::SteerComp offset is not 1790");
	auto constexpr UABP_Motorbike_04_C_SpeedInKm_Offset = offsetof(UABP_Motorbike_04_C, SpeedInKm);
	static_assert(UABP_Motorbike_04_C_SpeedInKm_Offset == 0x1794, "UABP_Motorbike_04_C::SpeedInKm offset is not 1794");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
