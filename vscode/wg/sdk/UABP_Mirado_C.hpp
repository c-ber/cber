#pragma once
#include "UTslVehicleAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_RotationMultiplier.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_CopyBone.hpp"
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_MeshSpaceRefPose.hpp"
#include "FAnimNode_WheelHandler.hpp"
#include "FAnimNode_Root.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Mirado_C // Size: 0x4E90
	: public UTslVehicleAnimInstance // Size: 0x9A0
{
private:
	typedef UABP_Mirado_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117844); // id32("AnimBlueprintGeneratedClass ABP_Mirado.ABP_Mirado_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9A0 Size: 0x8 - StructProperty ABP_Mirado.ABP_Mirado_C.UberGraphFrame */
	uint8_t UnknownData9A8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_C7C906F142E27D6E4F264AAD4DAACEC7; /* Ofs: 0x9B0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_C7C906F142E27D6E4F264AAD4DAACEC7 */
	FAnimNode_LookAt AnimGraphNode_LookAt_ACC4BEEB4625F2D646AF128C92826924; /* Ofs: 0xB30 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_ACC4BEEB4625F2D646AF128C92826924 */
	FAnimNode_LookAt AnimGraphNode_LookAt_3B6336884D9D89F9A2B75693FAF29C44; /* Ofs: 0xCB0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_3B6336884D9D89F9A2B75693FAF29C44 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_D500203C447A0CC46AE9DD9E25B8B7AF; /* Ofs: 0xE30 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_D500203C447A0CC46AE9DD9E25B8B7AF */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_CF676CC84CD2B7740553C8ADCCF3B386; /* Ofs: 0xF18 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_CF676CC84CD2B7740553C8ADCCF3B386 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_E924B3A04B9C7F237A294592ED001B7E; /* Ofs: 0x1000 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_E924B3A04B9C7F237A294592ED001B7E */
	uint8_t UnknownData10E8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_774F977F4B60BEF8E24E82AB18D8EB9A; /* Ofs: 0x10F0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_774F977F4B60BEF8E24E82AB18D8EB9A */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_CCD57ED44F70A17A4798588700CCD1FD; /* Ofs: 0x1270 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_CCD57ED44F70A17A4798588700CCD1FD */
	uint8_t UnknownData1358[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_226EF54440745C658E8B229A74C2F270; /* Ofs: 0x1360 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_226EF54440745C658E8B229A74C2F270 */
	FAnimNode_LookAt AnimGraphNode_LookAt_83848ECD4414D66C03653D8648F38A65; /* Ofs: 0x14E0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_83848ECD4414D66C03653D8648F38A65 */
	FAnimNode_LookAt AnimGraphNode_LookAt_8C6F00F74533123C5C671988AB75D8C7; /* Ofs: 0x1660 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_8C6F00F74533123C5C671988AB75D8C7 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_69701B0F46406278695B6B9C8D3EAB5B; /* Ofs: 0x17E0 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_69701B0F46406278695B6B9C8D3EAB5B */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_6AC0B04B4982D617959D4A9E95DCC055; /* Ofs: 0x18C8 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_6AC0B04B4982D617959D4A9E95DCC055 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_0DE7ACB1420F614C7BF3F8899687B6FE; /* Ofs: 0x19B0 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_0DE7ACB1420F614C7BF3F8899687B6FE */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_0AD2D59B4AB1929196E6DF8EEB55B645; /* Ofs: 0x1A98 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_0AD2D59B4AB1929196E6DF8EEB55B645 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_51EA55464400A81C1FC112ABA2075EED; /* Ofs: 0x1B80 Size: 0xA8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_RotationMultiplier_51EA55464400A81C1FC112ABA2075EED */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9BCD587449DF081A36E7F4AD8446025F; /* Ofs: 0x1C28 Size: 0xB8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_ModifyBone_9BCD587449DF081A36E7F4AD8446025F */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_C1E95EF04E1C4B1A8C79BC922B1D2E62; /* Ofs: 0x1CE0 Size: 0xB8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_ModifyBone_C1E95EF04E1C4B1A8C79BC922B1D2E62 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_EFB10D0A4C13AD751A8C03A1836A0650; /* Ofs: 0x1D98 Size: 0xA8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_RotationMultiplier_EFB10D0A4C13AD751A8C03A1836A0650 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_BF2A586D4A4039D6FA37AEBFD33FB0B5; /* Ofs: 0x1E40 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_BF2A586D4A4039D6FA37AEBFD33FB0B5 */
	uint8_t UnknownData1F28[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_E69B91D94258B85316ADFD821D33F92B; /* Ofs: 0x1F30 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_E69B91D94258B85316ADFD821D33F92B */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BFB5799F4D53BA1EECBB82ADEDDD8D18; /* Ofs: 0x20B0 Size: 0x48 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_ComponentToLocalSpace_BFB5799F4D53BA1EECBB82ADEDDD8D18 */
	uint8_t UnknownData20F8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_C7D90AB84C1190AEBAB82F910E423C2E; /* Ofs: 0x2100 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_C7D90AB84C1190AEBAB82F910E423C2E */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_345AB17040D09C8D6DCD5982604821DF; /* Ofs: 0x2280 Size: 0xA8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_CopyBone_345AB17040D09C8D6DCD5982604821DF */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_AD99523247EBB42AE613C1A1614F7647; /* Ofs: 0x2328 Size: 0xA8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_CopyBone_AD99523247EBB42AE613C1A1614F7647 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4E5F08654EE53B5FE0826BB4D167391C; /* Ofs: 0x23D0 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_4E5F08654EE53B5FE0826BB4D167391C */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2B71ED134E66A11FEE7A1BB835159861; /* Ofs: 0x24B8 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_2B71ED134E66A11FEE7A1BB835159861 */
	FAnimNode_LookAt AnimGraphNode_LookAt_F39F28E646BD4D3D6C326C9F902ACF8A; /* Ofs: 0x25A0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_F39F28E646BD4D3D6C326C9F902ACF8A */
	FAnimNode_LookAt AnimGraphNode_LookAt_9FAB6CBC40E32A0EE3B6F692F5487A53; /* Ofs: 0x2720 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_9FAB6CBC40E32A0EE3B6F692F5487A53 */
	FAnimNode_LookAt AnimGraphNode_LookAt_62DD06274CB6F08950FA8ABD6711C4FE; /* Ofs: 0x28A0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_62DD06274CB6F08950FA8ABD6711C4FE */
	FAnimNode_LookAt AnimGraphNode_LookAt_E9214800405159FAE31389901B648F24; /* Ofs: 0x2A20 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_E9214800405159FAE31389901B648F24 */
	FAnimNode_LookAt AnimGraphNode_LookAt_1634388E48A5AE44E5BD12A85A1952CA; /* Ofs: 0x2BA0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_1634388E48A5AE44E5BD12A85A1952CA */
	FAnimNode_LookAt AnimGraphNode_LookAt_C4B0DFA74F25157455B58EB518ADC64B; /* Ofs: 0x2D20 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_C4B0DFA74F25157455B58EB518ADC64B */
	FAnimNode_LookAt AnimGraphNode_LookAt_04A9A20745322E17F8A7F9B640607FC9; /* Ofs: 0x2EA0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_04A9A20745322E17F8A7F9B640607FC9 */
	FAnimNode_LookAt AnimGraphNode_LookAt_A33BF9124C6BA04CFC6377B698788EB8; /* Ofs: 0x3020 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_A33BF9124C6BA04CFC6377B698788EB8 */
	FAnimNode_LookAt AnimGraphNode_LookAt_62DC8DB34878C0F8A4002D8AE200B345; /* Ofs: 0x31A0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_62DC8DB34878C0F8A4002D8AE200B345 */
	FAnimNode_LookAt AnimGraphNode_LookAt_77358C87404B6DB12B711F87C36E3FAF; /* Ofs: 0x3320 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_77358C87404B6DB12B711F87C36E3FAF */
	FAnimNode_LookAt AnimGraphNode_LookAt_73DFB609426CF9AD9802A3A4F47A1CC0; /* Ofs: 0x34A0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_73DFB609426CF9AD9802A3A4F47A1CC0 */
	FAnimNode_LookAt AnimGraphNode_LookAt_046C1BFA4CFE26F07BCA09AE45B0BB13; /* Ofs: 0x3620 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_046C1BFA4CFE26F07BCA09AE45B0BB13 */
	FAnimNode_LookAt AnimGraphNode_LookAt_796C4BDF428CF2D9FC08F5A9915265E1; /* Ofs: 0x37A0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_796C4BDF428CF2D9FC08F5A9915265E1 */
	FAnimNode_LookAt AnimGraphNode_LookAt_1FBD28A5409388674BB7B9A0E3308497; /* Ofs: 0x3920 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_1FBD28A5409388674BB7B9A0E3308497 */
	FAnimNode_LookAt AnimGraphNode_LookAt_21AD6CCB4B6CEDB9393B9BA630D0C26B; /* Ofs: 0x3AA0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_21AD6CCB4B6CEDB9393B9BA630D0C26B */
	FAnimNode_LookAt AnimGraphNode_LookAt_0E6A29C14C96D43E5F3ADB8615F335F0; /* Ofs: 0x3C20 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_0E6A29C14C96D43E5F3ADB8615F335F0 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_FD9D41F941D0202D9A7CDC96F1734321; /* Ofs: 0x3DA0 Size: 0xB8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_ModifyBone_FD9D41F941D0202D9A7CDC96F1734321 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_69AC7B7B416FBA3571A1CEB6AB4E5106; /* Ofs: 0x3E58 Size: 0xB8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_ModifyBone_69AC7B7B416FBA3571A1CEB6AB4E5106 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_E3CFD9E24B7CC019403854814CD87E42; /* Ofs: 0x3F10 Size: 0xB8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_ModifyBone_E3CFD9E24B7CC019403854814CD87E42 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_D055140C40FE22A8F25C73B92DA1A59E; /* Ofs: 0x3FC8 Size: 0xB8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_ModifyBone_D055140C40FE22A8F25C73B92DA1A59E */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_BE3C40F94ACB2193B37237B29682DBCC; /* Ofs: 0x4080 Size: 0x280 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_AnimDynamics_BE3C40F94ACB2193B37237B29682DBCC */
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_CEDACC78436B71FA9F76C5A23F6D8DA0; /* Ofs: 0x4300 Size: 0x30 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_MeshRefPose_CEDACC78436B71FA9F76C5A23F6D8DA0 */
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler_B8FD4C1D4EFDE310F076EE89A353B744; /* Ofs: 0x4330 Size: 0x88 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_WheelHandler_B8FD4C1D4EFDE310F076EE89A353B744 */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_B43DCC5C409DB00FA9A412B1579949A1; /* Ofs: 0x43B8 Size: 0x280 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_AnimDynamics_B43DCC5C409DB00FA9A412B1579949A1 */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_AA0339194A892E80F979B09BE4A68905; /* Ofs: 0x4638 Size: 0x280 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_AnimDynamics_AA0339194A892E80F979B09BE4A68905 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3EE903D349B6F63060A951AACEF5D796; /* Ofs: 0x48B8 Size: 0xB8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_ModifyBone_3EE903D349B6F63060A951AACEF5D796 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_9BFE5F124AF240179294EBB47619EBA0; /* Ofs: 0x4970 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_9BFE5F124AF240179294EBB47619EBA0 */
	uint8_t UnknownData4A58[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_B1EED25141EEF0AE428E48B88A8492C6; /* Ofs: 0x4A60 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_B1EED25141EEF0AE428E48B88A8492C6 */
	FAnimNode_LookAt AnimGraphNode_LookAt_DC968F764DA5598418279A8EB4E74275; /* Ofs: 0x4BE0 Size: 0x180 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_LookAt_DC968F764DA5598418279A8EB4E74275 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_783281924A85D48B3630E8B5040215D2; /* Ofs: 0x4D60 Size: 0xE8 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_BoneDrivenController_783281924A85D48B3630E8B5040215D2 */
	FAnimNode_Root AnimGraphNode_Root_0C5A63434F1CDA52A2AC5A98322CD8B3; /* Ofs: 0x4E48 Size: 0x48 - StructProperty ABP_Mirado.ABP_Mirado_C.AnimGraphNode_Root_0C5A63434F1CDA52A2AC5A98322CD8B3 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9A0, value); }
	inline bool SetAnimGraphNode_LookAt_C7C906F142E27D6E4F264AAD4DAACEC7(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x9B0, value); }
	inline bool SetAnimGraphNode_LookAt_ACC4BEEB4625F2D646AF128C92826924(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xB30, value); }
	inline bool SetAnimGraphNode_LookAt_3B6336884D9D89F9A2B75693FAF29C44(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xCB0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_D500203C447A0CC46AE9DD9E25B8B7AF(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0xE30, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_CF676CC84CD2B7740553C8ADCCF3B386(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0xF18, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_E924B3A04B9C7F237A294592ED001B7E(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1000, value); }
	inline bool SetAnimGraphNode_LookAt_774F977F4B60BEF8E24E82AB18D8EB9A(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x10F0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_CCD57ED44F70A17A4798588700CCD1FD(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1270, value); }
	inline bool SetAnimGraphNode_LookAt_226EF54440745C658E8B229A74C2F270(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1360, value); }
	inline bool SetAnimGraphNode_LookAt_83848ECD4414D66C03653D8648F38A65(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x14E0, value); }
	inline bool SetAnimGraphNode_LookAt_8C6F00F74533123C5C671988AB75D8C7(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1660, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_69701B0F46406278695B6B9C8D3EAB5B(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x17E0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_6AC0B04B4982D617959D4A9E95DCC055(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x18C8, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_0DE7ACB1420F614C7BF3F8899687B6FE(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x19B0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_0AD2D59B4AB1929196E6DF8EEB55B645(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1A98, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_51EA55464400A81C1FC112ABA2075EED(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1B80, value); }
	inline bool SetAnimGraphNode_ModifyBone_9BCD587449DF081A36E7F4AD8446025F(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1C28, value); }
	inline bool SetAnimGraphNode_ModifyBone_C1E95EF04E1C4B1A8C79BC922B1D2E62(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1CE0, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_EFB10D0A4C13AD751A8C03A1836A0650(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1D98, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_BF2A586D4A4039D6FA37AEBFD33FB0B5(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1E40, value); }
	inline bool SetAnimGraphNode_LookAt_E69B91D94258B85316ADFD821D33F92B(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1F30, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_BFB5799F4D53BA1EECBB82ADEDDD8D18(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x20B0, value); }
	inline bool SetAnimGraphNode_LookAt_C7D90AB84C1190AEBAB82F910E423C2E(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2100, value); }
	inline bool SetAnimGraphNode_CopyBone_345AB17040D09C8D6DCD5982604821DF(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x2280, value); }
	inline bool SetAnimGraphNode_CopyBone_AD99523247EBB42AE613C1A1614F7647(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x2328, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_4E5F08654EE53B5FE0826BB4D167391C(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x23D0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_2B71ED134E66A11FEE7A1BB835159861(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x24B8, value); }
	inline bool SetAnimGraphNode_LookAt_F39F28E646BD4D3D6C326C9F902ACF8A(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x25A0, value); }
	inline bool SetAnimGraphNode_LookAt_9FAB6CBC40E32A0EE3B6F692F5487A53(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2720, value); }
	inline bool SetAnimGraphNode_LookAt_62DD06274CB6F08950FA8ABD6711C4FE(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x28A0, value); }
	inline bool SetAnimGraphNode_LookAt_E9214800405159FAE31389901B648F24(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2A20, value); }
	inline bool SetAnimGraphNode_LookAt_1634388E48A5AE44E5BD12A85A1952CA(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2BA0, value); }
	inline bool SetAnimGraphNode_LookAt_C4B0DFA74F25157455B58EB518ADC64B(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2D20, value); }
	inline bool SetAnimGraphNode_LookAt_04A9A20745322E17F8A7F9B640607FC9(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2EA0, value); }
	inline bool SetAnimGraphNode_LookAt_A33BF9124C6BA04CFC6377B698788EB8(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3020, value); }
	inline bool SetAnimGraphNode_LookAt_62DC8DB34878C0F8A4002D8AE200B345(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x31A0, value); }
	inline bool SetAnimGraphNode_LookAt_77358C87404B6DB12B711F87C36E3FAF(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3320, value); }
	inline bool SetAnimGraphNode_LookAt_73DFB609426CF9AD9802A3A4F47A1CC0(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x34A0, value); }
	inline bool SetAnimGraphNode_LookAt_046C1BFA4CFE26F07BCA09AE45B0BB13(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3620, value); }
	inline bool SetAnimGraphNode_LookAt_796C4BDF428CF2D9FC08F5A9915265E1(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x37A0, value); }
	inline bool SetAnimGraphNode_LookAt_1FBD28A5409388674BB7B9A0E3308497(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3920, value); }
	inline bool SetAnimGraphNode_LookAt_21AD6CCB4B6CEDB9393B9BA630D0C26B(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3AA0, value); }
	inline bool SetAnimGraphNode_LookAt_0E6A29C14C96D43E5F3ADB8615F335F0(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3C20, value); }
	inline bool SetAnimGraphNode_ModifyBone_FD9D41F941D0202D9A7CDC96F1734321(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x3DA0, value); }
	inline bool SetAnimGraphNode_ModifyBone_69AC7B7B416FBA3571A1CEB6AB4E5106(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x3E58, value); }
	inline bool SetAnimGraphNode_ModifyBone_E3CFD9E24B7CC019403854814CD87E42(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x3F10, value); }
	inline bool SetAnimGraphNode_ModifyBone_D055140C40FE22A8F25C73B92DA1A59E(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x3FC8, value); }
	inline bool SetAnimGraphNode_AnimDynamics_BE3C40F94ACB2193B37237B29682DBCC(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0x4080, value); }
	inline bool SetAnimGraphNode_MeshRefPose_CEDACC78436B71FA9F76C5A23F6D8DA0(t_structHelper inst, FAnimNode_MeshSpaceRefPose value) { inst.WriteOffset(0x4300, value); }
	inline bool SetAnimGraphNode_WheelHandler_B8FD4C1D4EFDE310F076EE89A353B744(t_structHelper inst, FAnimNode_WheelHandler value) { inst.WriteOffset(0x4330, value); }
	inline bool SetAnimGraphNode_AnimDynamics_B43DCC5C409DB00FA9A412B1579949A1(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0x43B8, value); }
	inline bool SetAnimGraphNode_AnimDynamics_AA0339194A892E80F979B09BE4A68905(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0x4638, value); }
	inline bool SetAnimGraphNode_ModifyBone_3EE903D349B6F63060A951AACEF5D796(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x48B8, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_9BFE5F124AF240179294EBB47619EBA0(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x4970, value); }
	inline bool SetAnimGraphNode_LookAt_B1EED25141EEF0AE428E48B88A8492C6(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x4A60, value); }
	inline bool SetAnimGraphNode_LookAt_DC968F764DA5598418279A8EB4E74275(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x4BE0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_783281924A85D48B3630E8B5040215D2(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x4D60, value); }
	inline bool SetAnimGraphNode_Root_0C5A63434F1CDA52A2AC5A98322CD8B3(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x4E48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Mirado_C = sizeof(UABP_Mirado_C); // 20112
    static_assert(sizeof(UABP_Mirado_C) == 0x4E90, "Size of UABP_Mirado_C is not correct.");
	auto constexpr UABP_Mirado_C_UberGraphFrame_Offset = offsetof(UABP_Mirado_C, UberGraphFrame);
	static_assert(UABP_Mirado_C_UberGraphFrame_Offset == 0x9a0, "UABP_Mirado_C::UberGraphFrame offset is not 9a0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_C7C906F142E27D6E4F264AAD4DAACEC7_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_C7C906F142E27D6E4F264AAD4DAACEC7);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_C7C906F142E27D6E4F264AAD4DAACEC7_Offset == 0x9b0, "UABP_Mirado_C::AnimGraphNode_LookAt_C7C906F142E27D6E4F264AAD4DAACEC7 offset is not 9b0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_ACC4BEEB4625F2D646AF128C92826924_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_ACC4BEEB4625F2D646AF128C92826924);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_ACC4BEEB4625F2D646AF128C92826924_Offset == 0xb30, "UABP_Mirado_C::AnimGraphNode_LookAt_ACC4BEEB4625F2D646AF128C92826924 offset is not b30");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_3B6336884D9D89F9A2B75693FAF29C44_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_3B6336884D9D89F9A2B75693FAF29C44);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_3B6336884D9D89F9A2B75693FAF29C44_Offset == 0xcb0, "UABP_Mirado_C::AnimGraphNode_LookAt_3B6336884D9D89F9A2B75693FAF29C44 offset is not cb0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_D500203C447A0CC46AE9DD9E25B8B7AF_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_D500203C447A0CC46AE9DD9E25B8B7AF);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_D500203C447A0CC46AE9DD9E25B8B7AF_Offset == 0xe30, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_D500203C447A0CC46AE9DD9E25B8B7AF offset is not e30");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_CF676CC84CD2B7740553C8ADCCF3B386_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_CF676CC84CD2B7740553C8ADCCF3B386);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_CF676CC84CD2B7740553C8ADCCF3B386_Offset == 0xf18, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_CF676CC84CD2B7740553C8ADCCF3B386 offset is not f18");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_E924B3A04B9C7F237A294592ED001B7E_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_E924B3A04B9C7F237A294592ED001B7E);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_E924B3A04B9C7F237A294592ED001B7E_Offset == 0x1000, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_E924B3A04B9C7F237A294592ED001B7E offset is not 1000");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_774F977F4B60BEF8E24E82AB18D8EB9A_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_774F977F4B60BEF8E24E82AB18D8EB9A);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_774F977F4B60BEF8E24E82AB18D8EB9A_Offset == 0x10f0, "UABP_Mirado_C::AnimGraphNode_LookAt_774F977F4B60BEF8E24E82AB18D8EB9A offset is not 10f0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_CCD57ED44F70A17A4798588700CCD1FD_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_CCD57ED44F70A17A4798588700CCD1FD);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_CCD57ED44F70A17A4798588700CCD1FD_Offset == 0x1270, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_CCD57ED44F70A17A4798588700CCD1FD offset is not 1270");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_226EF54440745C658E8B229A74C2F270_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_226EF54440745C658E8B229A74C2F270);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_226EF54440745C658E8B229A74C2F270_Offset == 0x1360, "UABP_Mirado_C::AnimGraphNode_LookAt_226EF54440745C658E8B229A74C2F270 offset is not 1360");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_83848ECD4414D66C03653D8648F38A65_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_83848ECD4414D66C03653D8648F38A65);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_83848ECD4414D66C03653D8648F38A65_Offset == 0x14e0, "UABP_Mirado_C::AnimGraphNode_LookAt_83848ECD4414D66C03653D8648F38A65 offset is not 14e0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_8C6F00F74533123C5C671988AB75D8C7_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_8C6F00F74533123C5C671988AB75D8C7);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_8C6F00F74533123C5C671988AB75D8C7_Offset == 0x1660, "UABP_Mirado_C::AnimGraphNode_LookAt_8C6F00F74533123C5C671988AB75D8C7 offset is not 1660");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_69701B0F46406278695B6B9C8D3EAB5B_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_69701B0F46406278695B6B9C8D3EAB5B);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_69701B0F46406278695B6B9C8D3EAB5B_Offset == 0x17e0, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_69701B0F46406278695B6B9C8D3EAB5B offset is not 17e0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_6AC0B04B4982D617959D4A9E95DCC055_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_6AC0B04B4982D617959D4A9E95DCC055);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_6AC0B04B4982D617959D4A9E95DCC055_Offset == 0x18c8, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_6AC0B04B4982D617959D4A9E95DCC055 offset is not 18c8");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_0DE7ACB1420F614C7BF3F8899687B6FE_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_0DE7ACB1420F614C7BF3F8899687B6FE);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_0DE7ACB1420F614C7BF3F8899687B6FE_Offset == 0x19b0, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_0DE7ACB1420F614C7BF3F8899687B6FE offset is not 19b0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_0AD2D59B4AB1929196E6DF8EEB55B645_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_0AD2D59B4AB1929196E6DF8EEB55B645);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_0AD2D59B4AB1929196E6DF8EEB55B645_Offset == 0x1a98, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_0AD2D59B4AB1929196E6DF8EEB55B645 offset is not 1a98");
	auto constexpr UABP_Mirado_C_AnimGraphNode_RotationMultiplier_51EA55464400A81C1FC112ABA2075EED_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_RotationMultiplier_51EA55464400A81C1FC112ABA2075EED);
	static_assert(UABP_Mirado_C_AnimGraphNode_RotationMultiplier_51EA55464400A81C1FC112ABA2075EED_Offset == 0x1b80, "UABP_Mirado_C::AnimGraphNode_RotationMultiplier_51EA55464400A81C1FC112ABA2075EED offset is not 1b80");
	auto constexpr UABP_Mirado_C_AnimGraphNode_ModifyBone_9BCD587449DF081A36E7F4AD8446025F_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_ModifyBone_9BCD587449DF081A36E7F4AD8446025F);
	static_assert(UABP_Mirado_C_AnimGraphNode_ModifyBone_9BCD587449DF081A36E7F4AD8446025F_Offset == 0x1c28, "UABP_Mirado_C::AnimGraphNode_ModifyBone_9BCD587449DF081A36E7F4AD8446025F offset is not 1c28");
	auto constexpr UABP_Mirado_C_AnimGraphNode_ModifyBone_C1E95EF04E1C4B1A8C79BC922B1D2E62_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_ModifyBone_C1E95EF04E1C4B1A8C79BC922B1D2E62);
	static_assert(UABP_Mirado_C_AnimGraphNode_ModifyBone_C1E95EF04E1C4B1A8C79BC922B1D2E62_Offset == 0x1ce0, "UABP_Mirado_C::AnimGraphNode_ModifyBone_C1E95EF04E1C4B1A8C79BC922B1D2E62 offset is not 1ce0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_RotationMultiplier_EFB10D0A4C13AD751A8C03A1836A0650_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_RotationMultiplier_EFB10D0A4C13AD751A8C03A1836A0650);
	static_assert(UABP_Mirado_C_AnimGraphNode_RotationMultiplier_EFB10D0A4C13AD751A8C03A1836A0650_Offset == 0x1d98, "UABP_Mirado_C::AnimGraphNode_RotationMultiplier_EFB10D0A4C13AD751A8C03A1836A0650 offset is not 1d98");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_BF2A586D4A4039D6FA37AEBFD33FB0B5_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_BF2A586D4A4039D6FA37AEBFD33FB0B5);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_BF2A586D4A4039D6FA37AEBFD33FB0B5_Offset == 0x1e40, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_BF2A586D4A4039D6FA37AEBFD33FB0B5 offset is not 1e40");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_E69B91D94258B85316ADFD821D33F92B_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_E69B91D94258B85316ADFD821D33F92B);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_E69B91D94258B85316ADFD821D33F92B_Offset == 0x1f30, "UABP_Mirado_C::AnimGraphNode_LookAt_E69B91D94258B85316ADFD821D33F92B offset is not 1f30");
	auto constexpr UABP_Mirado_C_AnimGraphNode_ComponentToLocalSpace_BFB5799F4D53BA1EECBB82ADEDDD8D18_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_ComponentToLocalSpace_BFB5799F4D53BA1EECBB82ADEDDD8D18);
	static_assert(UABP_Mirado_C_AnimGraphNode_ComponentToLocalSpace_BFB5799F4D53BA1EECBB82ADEDDD8D18_Offset == 0x20b0, "UABP_Mirado_C::AnimGraphNode_ComponentToLocalSpace_BFB5799F4D53BA1EECBB82ADEDDD8D18 offset is not 20b0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_C7D90AB84C1190AEBAB82F910E423C2E_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_C7D90AB84C1190AEBAB82F910E423C2E);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_C7D90AB84C1190AEBAB82F910E423C2E_Offset == 0x2100, "UABP_Mirado_C::AnimGraphNode_LookAt_C7D90AB84C1190AEBAB82F910E423C2E offset is not 2100");
	auto constexpr UABP_Mirado_C_AnimGraphNode_CopyBone_345AB17040D09C8D6DCD5982604821DF_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_CopyBone_345AB17040D09C8D6DCD5982604821DF);
	static_assert(UABP_Mirado_C_AnimGraphNode_CopyBone_345AB17040D09C8D6DCD5982604821DF_Offset == 0x2280, "UABP_Mirado_C::AnimGraphNode_CopyBone_345AB17040D09C8D6DCD5982604821DF offset is not 2280");
	auto constexpr UABP_Mirado_C_AnimGraphNode_CopyBone_AD99523247EBB42AE613C1A1614F7647_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_CopyBone_AD99523247EBB42AE613C1A1614F7647);
	static_assert(UABP_Mirado_C_AnimGraphNode_CopyBone_AD99523247EBB42AE613C1A1614F7647_Offset == 0x2328, "UABP_Mirado_C::AnimGraphNode_CopyBone_AD99523247EBB42AE613C1A1614F7647 offset is not 2328");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_4E5F08654EE53B5FE0826BB4D167391C_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_4E5F08654EE53B5FE0826BB4D167391C);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_4E5F08654EE53B5FE0826BB4D167391C_Offset == 0x23d0, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_4E5F08654EE53B5FE0826BB4D167391C offset is not 23d0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_2B71ED134E66A11FEE7A1BB835159861_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_2B71ED134E66A11FEE7A1BB835159861);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_2B71ED134E66A11FEE7A1BB835159861_Offset == 0x24b8, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_2B71ED134E66A11FEE7A1BB835159861 offset is not 24b8");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_F39F28E646BD4D3D6C326C9F902ACF8A_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_F39F28E646BD4D3D6C326C9F902ACF8A);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_F39F28E646BD4D3D6C326C9F902ACF8A_Offset == 0x25a0, "UABP_Mirado_C::AnimGraphNode_LookAt_F39F28E646BD4D3D6C326C9F902ACF8A offset is not 25a0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_9FAB6CBC40E32A0EE3B6F692F5487A53_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_9FAB6CBC40E32A0EE3B6F692F5487A53);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_9FAB6CBC40E32A0EE3B6F692F5487A53_Offset == 0x2720, "UABP_Mirado_C::AnimGraphNode_LookAt_9FAB6CBC40E32A0EE3B6F692F5487A53 offset is not 2720");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_62DD06274CB6F08950FA8ABD6711C4FE_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_62DD06274CB6F08950FA8ABD6711C4FE);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_62DD06274CB6F08950FA8ABD6711C4FE_Offset == 0x28a0, "UABP_Mirado_C::AnimGraphNode_LookAt_62DD06274CB6F08950FA8ABD6711C4FE offset is not 28a0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_E9214800405159FAE31389901B648F24_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_E9214800405159FAE31389901B648F24);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_E9214800405159FAE31389901B648F24_Offset == 0x2a20, "UABP_Mirado_C::AnimGraphNode_LookAt_E9214800405159FAE31389901B648F24 offset is not 2a20");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_1634388E48A5AE44E5BD12A85A1952CA_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_1634388E48A5AE44E5BD12A85A1952CA);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_1634388E48A5AE44E5BD12A85A1952CA_Offset == 0x2ba0, "UABP_Mirado_C::AnimGraphNode_LookAt_1634388E48A5AE44E5BD12A85A1952CA offset is not 2ba0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_C4B0DFA74F25157455B58EB518ADC64B_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_C4B0DFA74F25157455B58EB518ADC64B);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_C4B0DFA74F25157455B58EB518ADC64B_Offset == 0x2d20, "UABP_Mirado_C::AnimGraphNode_LookAt_C4B0DFA74F25157455B58EB518ADC64B offset is not 2d20");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_04A9A20745322E17F8A7F9B640607FC9_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_04A9A20745322E17F8A7F9B640607FC9);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_04A9A20745322E17F8A7F9B640607FC9_Offset == 0x2ea0, "UABP_Mirado_C::AnimGraphNode_LookAt_04A9A20745322E17F8A7F9B640607FC9 offset is not 2ea0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_A33BF9124C6BA04CFC6377B698788EB8_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_A33BF9124C6BA04CFC6377B698788EB8);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_A33BF9124C6BA04CFC6377B698788EB8_Offset == 0x3020, "UABP_Mirado_C::AnimGraphNode_LookAt_A33BF9124C6BA04CFC6377B698788EB8 offset is not 3020");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_62DC8DB34878C0F8A4002D8AE200B345_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_62DC8DB34878C0F8A4002D8AE200B345);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_62DC8DB34878C0F8A4002D8AE200B345_Offset == 0x31a0, "UABP_Mirado_C::AnimGraphNode_LookAt_62DC8DB34878C0F8A4002D8AE200B345 offset is not 31a0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_77358C87404B6DB12B711F87C36E3FAF_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_77358C87404B6DB12B711F87C36E3FAF);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_77358C87404B6DB12B711F87C36E3FAF_Offset == 0x3320, "UABP_Mirado_C::AnimGraphNode_LookAt_77358C87404B6DB12B711F87C36E3FAF offset is not 3320");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_73DFB609426CF9AD9802A3A4F47A1CC0_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_73DFB609426CF9AD9802A3A4F47A1CC0);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_73DFB609426CF9AD9802A3A4F47A1CC0_Offset == 0x34a0, "UABP_Mirado_C::AnimGraphNode_LookAt_73DFB609426CF9AD9802A3A4F47A1CC0 offset is not 34a0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_046C1BFA4CFE26F07BCA09AE45B0BB13_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_046C1BFA4CFE26F07BCA09AE45B0BB13);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_046C1BFA4CFE26F07BCA09AE45B0BB13_Offset == 0x3620, "UABP_Mirado_C::AnimGraphNode_LookAt_046C1BFA4CFE26F07BCA09AE45B0BB13 offset is not 3620");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_796C4BDF428CF2D9FC08F5A9915265E1_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_796C4BDF428CF2D9FC08F5A9915265E1);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_796C4BDF428CF2D9FC08F5A9915265E1_Offset == 0x37a0, "UABP_Mirado_C::AnimGraphNode_LookAt_796C4BDF428CF2D9FC08F5A9915265E1 offset is not 37a0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_1FBD28A5409388674BB7B9A0E3308497_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_1FBD28A5409388674BB7B9A0E3308497);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_1FBD28A5409388674BB7B9A0E3308497_Offset == 0x3920, "UABP_Mirado_C::AnimGraphNode_LookAt_1FBD28A5409388674BB7B9A0E3308497 offset is not 3920");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_21AD6CCB4B6CEDB9393B9BA630D0C26B_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_21AD6CCB4B6CEDB9393B9BA630D0C26B);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_21AD6CCB4B6CEDB9393B9BA630D0C26B_Offset == 0x3aa0, "UABP_Mirado_C::AnimGraphNode_LookAt_21AD6CCB4B6CEDB9393B9BA630D0C26B offset is not 3aa0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_0E6A29C14C96D43E5F3ADB8615F335F0_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_0E6A29C14C96D43E5F3ADB8615F335F0);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_0E6A29C14C96D43E5F3ADB8615F335F0_Offset == 0x3c20, "UABP_Mirado_C::AnimGraphNode_LookAt_0E6A29C14C96D43E5F3ADB8615F335F0 offset is not 3c20");
	auto constexpr UABP_Mirado_C_AnimGraphNode_ModifyBone_FD9D41F941D0202D9A7CDC96F1734321_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_ModifyBone_FD9D41F941D0202D9A7CDC96F1734321);
	static_assert(UABP_Mirado_C_AnimGraphNode_ModifyBone_FD9D41F941D0202D9A7CDC96F1734321_Offset == 0x3da0, "UABP_Mirado_C::AnimGraphNode_ModifyBone_FD9D41F941D0202D9A7CDC96F1734321 offset is not 3da0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_ModifyBone_69AC7B7B416FBA3571A1CEB6AB4E5106_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_ModifyBone_69AC7B7B416FBA3571A1CEB6AB4E5106);
	static_assert(UABP_Mirado_C_AnimGraphNode_ModifyBone_69AC7B7B416FBA3571A1CEB6AB4E5106_Offset == 0x3e58, "UABP_Mirado_C::AnimGraphNode_ModifyBone_69AC7B7B416FBA3571A1CEB6AB4E5106 offset is not 3e58");
	auto constexpr UABP_Mirado_C_AnimGraphNode_ModifyBone_E3CFD9E24B7CC019403854814CD87E42_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_ModifyBone_E3CFD9E24B7CC019403854814CD87E42);
	static_assert(UABP_Mirado_C_AnimGraphNode_ModifyBone_E3CFD9E24B7CC019403854814CD87E42_Offset == 0x3f10, "UABP_Mirado_C::AnimGraphNode_ModifyBone_E3CFD9E24B7CC019403854814CD87E42 offset is not 3f10");
	auto constexpr UABP_Mirado_C_AnimGraphNode_ModifyBone_D055140C40FE22A8F25C73B92DA1A59E_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_ModifyBone_D055140C40FE22A8F25C73B92DA1A59E);
	static_assert(UABP_Mirado_C_AnimGraphNode_ModifyBone_D055140C40FE22A8F25C73B92DA1A59E_Offset == 0x3fc8, "UABP_Mirado_C::AnimGraphNode_ModifyBone_D055140C40FE22A8F25C73B92DA1A59E offset is not 3fc8");
	auto constexpr UABP_Mirado_C_AnimGraphNode_AnimDynamics_BE3C40F94ACB2193B37237B29682DBCC_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_AnimDynamics_BE3C40F94ACB2193B37237B29682DBCC);
	static_assert(UABP_Mirado_C_AnimGraphNode_AnimDynamics_BE3C40F94ACB2193B37237B29682DBCC_Offset == 0x4080, "UABP_Mirado_C::AnimGraphNode_AnimDynamics_BE3C40F94ACB2193B37237B29682DBCC offset is not 4080");
	auto constexpr UABP_Mirado_C_AnimGraphNode_MeshRefPose_CEDACC78436B71FA9F76C5A23F6D8DA0_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_MeshRefPose_CEDACC78436B71FA9F76C5A23F6D8DA0);
	static_assert(UABP_Mirado_C_AnimGraphNode_MeshRefPose_CEDACC78436B71FA9F76C5A23F6D8DA0_Offset == 0x4300, "UABP_Mirado_C::AnimGraphNode_MeshRefPose_CEDACC78436B71FA9F76C5A23F6D8DA0 offset is not 4300");
	auto constexpr UABP_Mirado_C_AnimGraphNode_WheelHandler_B8FD4C1D4EFDE310F076EE89A353B744_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_WheelHandler_B8FD4C1D4EFDE310F076EE89A353B744);
	static_assert(UABP_Mirado_C_AnimGraphNode_WheelHandler_B8FD4C1D4EFDE310F076EE89A353B744_Offset == 0x4330, "UABP_Mirado_C::AnimGraphNode_WheelHandler_B8FD4C1D4EFDE310F076EE89A353B744 offset is not 4330");
	auto constexpr UABP_Mirado_C_AnimGraphNode_AnimDynamics_B43DCC5C409DB00FA9A412B1579949A1_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_AnimDynamics_B43DCC5C409DB00FA9A412B1579949A1);
	static_assert(UABP_Mirado_C_AnimGraphNode_AnimDynamics_B43DCC5C409DB00FA9A412B1579949A1_Offset == 0x43b8, "UABP_Mirado_C::AnimGraphNode_AnimDynamics_B43DCC5C409DB00FA9A412B1579949A1 offset is not 43b8");
	auto constexpr UABP_Mirado_C_AnimGraphNode_AnimDynamics_AA0339194A892E80F979B09BE4A68905_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_AnimDynamics_AA0339194A892E80F979B09BE4A68905);
	static_assert(UABP_Mirado_C_AnimGraphNode_AnimDynamics_AA0339194A892E80F979B09BE4A68905_Offset == 0x4638, "UABP_Mirado_C::AnimGraphNode_AnimDynamics_AA0339194A892E80F979B09BE4A68905 offset is not 4638");
	auto constexpr UABP_Mirado_C_AnimGraphNode_ModifyBone_3EE903D349B6F63060A951AACEF5D796_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_ModifyBone_3EE903D349B6F63060A951AACEF5D796);
	static_assert(UABP_Mirado_C_AnimGraphNode_ModifyBone_3EE903D349B6F63060A951AACEF5D796_Offset == 0x48b8, "UABP_Mirado_C::AnimGraphNode_ModifyBone_3EE903D349B6F63060A951AACEF5D796 offset is not 48b8");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_9BFE5F124AF240179294EBB47619EBA0_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_9BFE5F124AF240179294EBB47619EBA0);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_9BFE5F124AF240179294EBB47619EBA0_Offset == 0x4970, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_9BFE5F124AF240179294EBB47619EBA0 offset is not 4970");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_B1EED25141EEF0AE428E48B88A8492C6_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_B1EED25141EEF0AE428E48B88A8492C6);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_B1EED25141EEF0AE428E48B88A8492C6_Offset == 0x4a60, "UABP_Mirado_C::AnimGraphNode_LookAt_B1EED25141EEF0AE428E48B88A8492C6 offset is not 4a60");
	auto constexpr UABP_Mirado_C_AnimGraphNode_LookAt_DC968F764DA5598418279A8EB4E74275_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_LookAt_DC968F764DA5598418279A8EB4E74275);
	static_assert(UABP_Mirado_C_AnimGraphNode_LookAt_DC968F764DA5598418279A8EB4E74275_Offset == 0x4be0, "UABP_Mirado_C::AnimGraphNode_LookAt_DC968F764DA5598418279A8EB4E74275 offset is not 4be0");
	auto constexpr UABP_Mirado_C_AnimGraphNode_BoneDrivenController_783281924A85D48B3630E8B5040215D2_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_BoneDrivenController_783281924A85D48B3630E8B5040215D2);
	static_assert(UABP_Mirado_C_AnimGraphNode_BoneDrivenController_783281924A85D48B3630E8B5040215D2_Offset == 0x4d60, "UABP_Mirado_C::AnimGraphNode_BoneDrivenController_783281924A85D48B3630E8B5040215D2 offset is not 4d60");
	auto constexpr UABP_Mirado_C_AnimGraphNode_Root_0C5A63434F1CDA52A2AC5A98322CD8B3_Offset = offsetof(UABP_Mirado_C, AnimGraphNode_Root_0C5A63434F1CDA52A2AC5A98322CD8B3);
	static_assert(UABP_Mirado_C_AnimGraphNode_Root_0C5A63434F1CDA52A2AC5A98322CD8B3_Offset == 0x4e48, "UABP_Mirado_C::AnimGraphNode_Root_0C5A63434F1CDA52A2AC5A98322CD8B3 offset is not 4e48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
