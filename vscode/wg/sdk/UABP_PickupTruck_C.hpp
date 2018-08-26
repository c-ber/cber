#pragma once
#include "UTslVehicleAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_CopyBone.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_MeshSpaceRefPose.hpp"
#include "FAnimNode_WheelHandler.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_RotationMultiplier.hpp"
#include "FAnimNode_RigidBody.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_PickupTruck_C // Size: 0x3C20
	: public UTslVehicleAnimInstance // Size: 0x9A0
{
private:
	typedef UABP_PickupTruck_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124068); // id32("AnimBlueprintGeneratedClass ABP_PickupTruck.ABP_PickupTruck_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9A0 Size: 0x8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.UberGraphFrame */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_D4DC81CC4F77B04A5B6B5A8082C66ACF; /* Ofs: 0x9A8 Size: 0xA8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_CopyBone_D4DC81CC4F77B04A5B6B5A8082C66ACF */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_0CBC82694B685ED340F03D9732600990; /* Ofs: 0xA50 Size: 0xA8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_CopyBone_0CBC82694B685ED340F03D9732600990 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_AC6CCBF24858B51CFB201A9036BCDBD6; /* Ofs: 0xAF8 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_AC6CCBF24858B51CFB201A9036BCDBD6 */
	FAnimNode_LookAt AnimGraphNode_LookAt_F51A2F524A1711A2FFCDE9912512F60C; /* Ofs: 0xBE0 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_F51A2F524A1711A2FFCDE9912512F60C */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_90DA62D341F7D5669919949D5A173EC6; /* Ofs: 0xD60 Size: 0x48 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_ComponentToLocalSpace_90DA62D341F7D5669919949D5A173EC6 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_0EF8607D488957CA8D131CB5A4ABCF4E; /* Ofs: 0xDA8 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_0EF8607D488957CA8D131CB5A4ABCF4E */
	FAnimNode_LookAt AnimGraphNode_LookAt_86FACC3D4557639D472CF09581EC1F4B; /* Ofs: 0xE90 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_86FACC3D4557639D472CF09581EC1F4B */
	FAnimNode_LookAt AnimGraphNode_LookAt_60A33C4243B50EB0A54D7A947533418B; /* Ofs: 0x1010 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_60A33C4243B50EB0A54D7A947533418B */
	FAnimNode_LookAt AnimGraphNode_LookAt_E40D065848EA5A1BF436A4B9B9C42E80; /* Ofs: 0x1190 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_E40D065848EA5A1BF436A4B9B9C42E80 */
	FAnimNode_LookAt AnimGraphNode_LookAt_88CFF1A842F2ABB55FFD6E96E16BAE29; /* Ofs: 0x1310 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_88CFF1A842F2ABB55FFD6E96E16BAE29 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_A25AFBC6428F7C5B2E4F779A89182CBC; /* Ofs: 0x1490 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_A25AFBC6428F7C5B2E4F779A89182CBC */
	uint8_t UnknownData1578[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_C2B2AB6A4DADCE2E1CDCBDB554837595; /* Ofs: 0x1580 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_C2B2AB6A4DADCE2E1CDCBDB554837595 */
	FAnimNode_LookAt AnimGraphNode_LookAt_AA5DC67146178CBE5B9CBCBF6D821A36; /* Ofs: 0x1700 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_AA5DC67146178CBE5B9CBCBF6D821A36 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_673101BB438A647F40F118A51B5F9E73; /* Ofs: 0x1880 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_673101BB438A647F40F118A51B5F9E73 */
	uint8_t UnknownData1968[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_C0017F534F4D3AAFB4901795BAB8FAFB; /* Ofs: 0x1970 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_C0017F534F4D3AAFB4901795BAB8FAFB */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_B0140F5E4AE370D1348787AEC672234F; /* Ofs: 0x1AF0 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_B0140F5E4AE370D1348787AEC672234F */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_81FEE31F48A3BAE664D54AA66D4762EB; /* Ofs: 0x1BD8 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_81FEE31F48A3BAE664D54AA66D4762EB */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_D24980E54FDFAF65C8AD39AE252B5145; /* Ofs: 0x1CC0 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_D24980E54FDFAF65C8AD39AE252B5145 */
	uint8_t UnknownData1DA8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_A83669914D151A824996B8BF1A66C59B; /* Ofs: 0x1DB0 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_A83669914D151A824996B8BF1A66C59B */
	FAnimNode_LookAt AnimGraphNode_LookAt_913964364088D0C00C2CB4ABB14E12AA; /* Ofs: 0x1F30 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_913964364088D0C00C2CB4ABB14E12AA */
	FAnimNode_LookAt AnimGraphNode_LookAt_B30CADA94F9DC590961AFDB7014B804E; /* Ofs: 0x20B0 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_B30CADA94F9DC590961AFDB7014B804E */
	FAnimNode_LookAt AnimGraphNode_LookAt_0FC853404AB0AFDE5F6988818F84EF3D; /* Ofs: 0x2230 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_0FC853404AB0AFDE5F6988818F84EF3D */
	FAnimNode_LookAt AnimGraphNode_LookAt_9DEA7F5B4FF231C3531AFFA3B83DFC21; /* Ofs: 0x23B0 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_9DEA7F5B4FF231C3531AFFA3B83DFC21 */
	FAnimNode_LookAt AnimGraphNode_LookAt_A2E735DF4A7AA052CC37B58B0524727B; /* Ofs: 0x2530 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_A2E735DF4A7AA052CC37B58B0524727B */
	FAnimNode_LookAt AnimGraphNode_LookAt_30CA284347D58C588A8CB089D1382A6A; /* Ofs: 0x26B0 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_30CA284347D58C588A8CB089D1382A6A */
	FAnimNode_LookAt AnimGraphNode_LookAt_6C5029EC47C9209EAA99B894C653703D; /* Ofs: 0x2830 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_6C5029EC47C9209EAA99B894C653703D */
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_0C49B8F0490DA7D30300A68046CADF70; /* Ofs: 0x29B0 Size: 0x30 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_MeshRefPose_0C49B8F0490DA7D30300A68046CADF70 */
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler_E4B8207B447B62AD3703D8A03847A577; /* Ofs: 0x29E0 Size: 0x88 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_WheelHandler_E4B8207B447B62AD3703D8A03847A577 */
	FAnimNode_Root AnimGraphNode_Root_CA34EADA4CB2546EE3D3B2915BCFEEB8; /* Ofs: 0x2A68 Size: 0x48 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_Root_CA34EADA4CB2546EE3D3B2915BCFEEB8 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_336216254934F83AE02408AB47E659DD; /* Ofs: 0x2AB0 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_336216254934F83AE02408AB47E659DD */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_9219E2174C44B02095DAF2AFFC464E5B; /* Ofs: 0x2B98 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_9219E2174C44B02095DAF2AFFC464E5B */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_B2FC6BEC4283D825E05F299ABF982D9C; /* Ofs: 0x2C80 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_B2FC6BEC4283D825E05F299ABF982D9C */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_CBD45B7C42903B451A7DEAAA4C27D9E6; /* Ofs: 0x2D68 Size: 0xE8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_BoneDrivenController_CBD45B7C42903B451A7DEAAA4C27D9E6 */
	FAnimNode_LookAt AnimGraphNode_LookAt_8397C2CB4F521A8DD581E4A8FAAE6F95; /* Ofs: 0x2E50 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_8397C2CB4F521A8DD581E4A8FAAE6F95 */
	FAnimNode_LookAt AnimGraphNode_LookAt_BEAA44EE4E2207240A89E2BD09F77039; /* Ofs: 0x2FD0 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_BEAA44EE4E2207240A89E2BD09F77039 */
	FAnimNode_LookAt AnimGraphNode_LookAt_686B94B143DEC497F60ADCB3C0B13D3A; /* Ofs: 0x3150 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_686B94B143DEC497F60ADCB3C0B13D3A */
	FAnimNode_LookAt AnimGraphNode_LookAt_7EBB1B2D4717AD57850986BE9C6E397F; /* Ofs: 0x32D0 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_7EBB1B2D4717AD57850986BE9C6E397F */
	FAnimNode_LookAt AnimGraphNode_LookAt_3E7A88A941A62D9037AE7EB1E8DB3207; /* Ofs: 0x3450 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_3E7A88A941A62D9037AE7EB1E8DB3207 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_FB39F86B4624221564E9BEA6A3015F8C; /* Ofs: 0x35D0 Size: 0xB8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_ModifyBone_FB39F86B4624221564E9BEA6A3015F8C */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5ACA0BF04447689369263FB577F450E7; /* Ofs: 0x3688 Size: 0xB8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_ModifyBone_5ACA0BF04447689369263FB577F450E7 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_C796C7CF409DB05F8E14E1A06C56F845; /* Ofs: 0x3740 Size: 0xA8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_RotationMultiplier_C796C7CF409DB05F8E14E1A06C56F845 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_00A8425E4CFFEA7B0D956AB6F0603F94; /* Ofs: 0x37E8 Size: 0xA8 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_RotationMultiplier_00A8425E4CFFEA7B0D956AB6F0603F94 */
	FAnimNode_RigidBody AnimGraphNode_RigidBody_67A5C08F4ACD9E8E3B22B58D2121D384; /* Ofs: 0x3890 Size: 0x210 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_RigidBody_67A5C08F4ACD9E8E3B22B58D2121D384 */
	FAnimNode_LookAt AnimGraphNode_LookAt_1DB68D884F50CBE1F9E690920C595661; /* Ofs: 0x3AA0 Size: 0x180 - StructProperty ABP_PickupTruck.ABP_PickupTruck_C.AnimGraphNode_LookAt_1DB68D884F50CBE1F9E690920C595661 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9A0, value); }
	inline bool SetAnimGraphNode_CopyBone_D4DC81CC4F77B04A5B6B5A8082C66ACF(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x9A8, value); }
	inline bool SetAnimGraphNode_CopyBone_0CBC82694B685ED340F03D9732600990(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0xA50, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_AC6CCBF24858B51CFB201A9036BCDBD6(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0xAF8, value); }
	inline bool SetAnimGraphNode_LookAt_F51A2F524A1711A2FFCDE9912512F60C(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xBE0, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_90DA62D341F7D5669919949D5A173EC6(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0xD60, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_0EF8607D488957CA8D131CB5A4ABCF4E(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0xDA8, value); }
	inline bool SetAnimGraphNode_LookAt_86FACC3D4557639D472CF09581EC1F4B(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xE90, value); }
	inline bool SetAnimGraphNode_LookAt_60A33C4243B50EB0A54D7A947533418B(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1010, value); }
	inline bool SetAnimGraphNode_LookAt_E40D065848EA5A1BF436A4B9B9C42E80(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1190, value); }
	inline bool SetAnimGraphNode_LookAt_88CFF1A842F2ABB55FFD6E96E16BAE29(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1310, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_A25AFBC6428F7C5B2E4F779A89182CBC(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1490, value); }
	inline bool SetAnimGraphNode_LookAt_C2B2AB6A4DADCE2E1CDCBDB554837595(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1580, value); }
	inline bool SetAnimGraphNode_LookAt_AA5DC67146178CBE5B9CBCBF6D821A36(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1700, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_673101BB438A647F40F118A51B5F9E73(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1880, value); }
	inline bool SetAnimGraphNode_LookAt_C0017F534F4D3AAFB4901795BAB8FAFB(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1970, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_B0140F5E4AE370D1348787AEC672234F(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1AF0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_81FEE31F48A3BAE664D54AA66D4762EB(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1BD8, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_D24980E54FDFAF65C8AD39AE252B5145(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1CC0, value); }
	inline bool SetAnimGraphNode_LookAt_A83669914D151A824996B8BF1A66C59B(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1DB0, value); }
	inline bool SetAnimGraphNode_LookAt_913964364088D0C00C2CB4ABB14E12AA(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1F30, value); }
	inline bool SetAnimGraphNode_LookAt_B30CADA94F9DC590961AFDB7014B804E(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x20B0, value); }
	inline bool SetAnimGraphNode_LookAt_0FC853404AB0AFDE5F6988818F84EF3D(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2230, value); }
	inline bool SetAnimGraphNode_LookAt_9DEA7F5B4FF231C3531AFFA3B83DFC21(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x23B0, value); }
	inline bool SetAnimGraphNode_LookAt_A2E735DF4A7AA052CC37B58B0524727B(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2530, value); }
	inline bool SetAnimGraphNode_LookAt_30CA284347D58C588A8CB089D1382A6A(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x26B0, value); }
	inline bool SetAnimGraphNode_LookAt_6C5029EC47C9209EAA99B894C653703D(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2830, value); }
	inline bool SetAnimGraphNode_MeshRefPose_0C49B8F0490DA7D30300A68046CADF70(t_structHelper inst, FAnimNode_MeshSpaceRefPose value) { inst.WriteOffset(0x29B0, value); }
	inline bool SetAnimGraphNode_WheelHandler_E4B8207B447B62AD3703D8A03847A577(t_structHelper inst, FAnimNode_WheelHandler value) { inst.WriteOffset(0x29E0, value); }
	inline bool SetAnimGraphNode_Root_CA34EADA4CB2546EE3D3B2915BCFEEB8(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x2A68, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_336216254934F83AE02408AB47E659DD(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x2AB0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_9219E2174C44B02095DAF2AFFC464E5B(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x2B98, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_B2FC6BEC4283D825E05F299ABF982D9C(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x2C80, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_CBD45B7C42903B451A7DEAAA4C27D9E6(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x2D68, value); }
	inline bool SetAnimGraphNode_LookAt_8397C2CB4F521A8DD581E4A8FAAE6F95(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2E50, value); }
	inline bool SetAnimGraphNode_LookAt_BEAA44EE4E2207240A89E2BD09F77039(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2FD0, value); }
	inline bool SetAnimGraphNode_LookAt_686B94B143DEC497F60ADCB3C0B13D3A(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3150, value); }
	inline bool SetAnimGraphNode_LookAt_7EBB1B2D4717AD57850986BE9C6E397F(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x32D0, value); }
	inline bool SetAnimGraphNode_LookAt_3E7A88A941A62D9037AE7EB1E8DB3207(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3450, value); }
	inline bool SetAnimGraphNode_ModifyBone_FB39F86B4624221564E9BEA6A3015F8C(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x35D0, value); }
	inline bool SetAnimGraphNode_ModifyBone_5ACA0BF04447689369263FB577F450E7(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x3688, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_C796C7CF409DB05F8E14E1A06C56F845(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x3740, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_00A8425E4CFFEA7B0D956AB6F0603F94(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x37E8, value); }
	inline bool SetAnimGraphNode_RigidBody_67A5C08F4ACD9E8E3B22B58D2121D384(t_structHelper inst, FAnimNode_RigidBody value) { inst.WriteOffset(0x3890, value); }
	inline bool SetAnimGraphNode_LookAt_1DB68D884F50CBE1F9E690920C595661(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x3AA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_PickupTruck_C = sizeof(UABP_PickupTruck_C); // 15392
    static_assert(sizeof(UABP_PickupTruck_C) == 0x3C20, "Size of UABP_PickupTruck_C is not correct.");
	auto constexpr UABP_PickupTruck_C_UberGraphFrame_Offset = offsetof(UABP_PickupTruck_C, UberGraphFrame);
	static_assert(UABP_PickupTruck_C_UberGraphFrame_Offset == 0x9a0, "UABP_PickupTruck_C::UberGraphFrame offset is not 9a0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_CopyBone_D4DC81CC4F77B04A5B6B5A8082C66ACF_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_CopyBone_D4DC81CC4F77B04A5B6B5A8082C66ACF);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_CopyBone_D4DC81CC4F77B04A5B6B5A8082C66ACF_Offset == 0x9a8, "UABP_PickupTruck_C::AnimGraphNode_CopyBone_D4DC81CC4F77B04A5B6B5A8082C66ACF offset is not 9a8");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_CopyBone_0CBC82694B685ED340F03D9732600990_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_CopyBone_0CBC82694B685ED340F03D9732600990);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_CopyBone_0CBC82694B685ED340F03D9732600990_Offset == 0xa50, "UABP_PickupTruck_C::AnimGraphNode_CopyBone_0CBC82694B685ED340F03D9732600990 offset is not a50");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_AC6CCBF24858B51CFB201A9036BCDBD6_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_AC6CCBF24858B51CFB201A9036BCDBD6);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_AC6CCBF24858B51CFB201A9036BCDBD6_Offset == 0xaf8, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_AC6CCBF24858B51CFB201A9036BCDBD6 offset is not af8");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_F51A2F524A1711A2FFCDE9912512F60C_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_F51A2F524A1711A2FFCDE9912512F60C);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_F51A2F524A1711A2FFCDE9912512F60C_Offset == 0xbe0, "UABP_PickupTruck_C::AnimGraphNode_LookAt_F51A2F524A1711A2FFCDE9912512F60C offset is not be0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_ComponentToLocalSpace_90DA62D341F7D5669919949D5A173EC6_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_ComponentToLocalSpace_90DA62D341F7D5669919949D5A173EC6);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_ComponentToLocalSpace_90DA62D341F7D5669919949D5A173EC6_Offset == 0xd60, "UABP_PickupTruck_C::AnimGraphNode_ComponentToLocalSpace_90DA62D341F7D5669919949D5A173EC6 offset is not d60");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_0EF8607D488957CA8D131CB5A4ABCF4E_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_0EF8607D488957CA8D131CB5A4ABCF4E);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_0EF8607D488957CA8D131CB5A4ABCF4E_Offset == 0xda8, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_0EF8607D488957CA8D131CB5A4ABCF4E offset is not da8");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_86FACC3D4557639D472CF09581EC1F4B_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_86FACC3D4557639D472CF09581EC1F4B);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_86FACC3D4557639D472CF09581EC1F4B_Offset == 0xe90, "UABP_PickupTruck_C::AnimGraphNode_LookAt_86FACC3D4557639D472CF09581EC1F4B offset is not e90");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_60A33C4243B50EB0A54D7A947533418B_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_60A33C4243B50EB0A54D7A947533418B);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_60A33C4243B50EB0A54D7A947533418B_Offset == 0x1010, "UABP_PickupTruck_C::AnimGraphNode_LookAt_60A33C4243B50EB0A54D7A947533418B offset is not 1010");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_E40D065848EA5A1BF436A4B9B9C42E80_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_E40D065848EA5A1BF436A4B9B9C42E80);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_E40D065848EA5A1BF436A4B9B9C42E80_Offset == 0x1190, "UABP_PickupTruck_C::AnimGraphNode_LookAt_E40D065848EA5A1BF436A4B9B9C42E80 offset is not 1190");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_88CFF1A842F2ABB55FFD6E96E16BAE29_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_88CFF1A842F2ABB55FFD6E96E16BAE29);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_88CFF1A842F2ABB55FFD6E96E16BAE29_Offset == 0x1310, "UABP_PickupTruck_C::AnimGraphNode_LookAt_88CFF1A842F2ABB55FFD6E96E16BAE29 offset is not 1310");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_A25AFBC6428F7C5B2E4F779A89182CBC_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_A25AFBC6428F7C5B2E4F779A89182CBC);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_A25AFBC6428F7C5B2E4F779A89182CBC_Offset == 0x1490, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_A25AFBC6428F7C5B2E4F779A89182CBC offset is not 1490");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_C2B2AB6A4DADCE2E1CDCBDB554837595_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_C2B2AB6A4DADCE2E1CDCBDB554837595);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_C2B2AB6A4DADCE2E1CDCBDB554837595_Offset == 0x1580, "UABP_PickupTruck_C::AnimGraphNode_LookAt_C2B2AB6A4DADCE2E1CDCBDB554837595 offset is not 1580");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_AA5DC67146178CBE5B9CBCBF6D821A36_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_AA5DC67146178CBE5B9CBCBF6D821A36);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_AA5DC67146178CBE5B9CBCBF6D821A36_Offset == 0x1700, "UABP_PickupTruck_C::AnimGraphNode_LookAt_AA5DC67146178CBE5B9CBCBF6D821A36 offset is not 1700");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_673101BB438A647F40F118A51B5F9E73_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_673101BB438A647F40F118A51B5F9E73);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_673101BB438A647F40F118A51B5F9E73_Offset == 0x1880, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_673101BB438A647F40F118A51B5F9E73 offset is not 1880");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_C0017F534F4D3AAFB4901795BAB8FAFB_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_C0017F534F4D3AAFB4901795BAB8FAFB);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_C0017F534F4D3AAFB4901795BAB8FAFB_Offset == 0x1970, "UABP_PickupTruck_C::AnimGraphNode_LookAt_C0017F534F4D3AAFB4901795BAB8FAFB offset is not 1970");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_B0140F5E4AE370D1348787AEC672234F_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_B0140F5E4AE370D1348787AEC672234F);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_B0140F5E4AE370D1348787AEC672234F_Offset == 0x1af0, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_B0140F5E4AE370D1348787AEC672234F offset is not 1af0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_81FEE31F48A3BAE664D54AA66D4762EB_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_81FEE31F48A3BAE664D54AA66D4762EB);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_81FEE31F48A3BAE664D54AA66D4762EB_Offset == 0x1bd8, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_81FEE31F48A3BAE664D54AA66D4762EB offset is not 1bd8");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_D24980E54FDFAF65C8AD39AE252B5145_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_D24980E54FDFAF65C8AD39AE252B5145);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_D24980E54FDFAF65C8AD39AE252B5145_Offset == 0x1cc0, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_D24980E54FDFAF65C8AD39AE252B5145 offset is not 1cc0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_A83669914D151A824996B8BF1A66C59B_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_A83669914D151A824996B8BF1A66C59B);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_A83669914D151A824996B8BF1A66C59B_Offset == 0x1db0, "UABP_PickupTruck_C::AnimGraphNode_LookAt_A83669914D151A824996B8BF1A66C59B offset is not 1db0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_913964364088D0C00C2CB4ABB14E12AA_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_913964364088D0C00C2CB4ABB14E12AA);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_913964364088D0C00C2CB4ABB14E12AA_Offset == 0x1f30, "UABP_PickupTruck_C::AnimGraphNode_LookAt_913964364088D0C00C2CB4ABB14E12AA offset is not 1f30");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_B30CADA94F9DC590961AFDB7014B804E_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_B30CADA94F9DC590961AFDB7014B804E);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_B30CADA94F9DC590961AFDB7014B804E_Offset == 0x20b0, "UABP_PickupTruck_C::AnimGraphNode_LookAt_B30CADA94F9DC590961AFDB7014B804E offset is not 20b0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_0FC853404AB0AFDE5F6988818F84EF3D_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_0FC853404AB0AFDE5F6988818F84EF3D);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_0FC853404AB0AFDE5F6988818F84EF3D_Offset == 0x2230, "UABP_PickupTruck_C::AnimGraphNode_LookAt_0FC853404AB0AFDE5F6988818F84EF3D offset is not 2230");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_9DEA7F5B4FF231C3531AFFA3B83DFC21_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_9DEA7F5B4FF231C3531AFFA3B83DFC21);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_9DEA7F5B4FF231C3531AFFA3B83DFC21_Offset == 0x23b0, "UABP_PickupTruck_C::AnimGraphNode_LookAt_9DEA7F5B4FF231C3531AFFA3B83DFC21 offset is not 23b0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_A2E735DF4A7AA052CC37B58B0524727B_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_A2E735DF4A7AA052CC37B58B0524727B);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_A2E735DF4A7AA052CC37B58B0524727B_Offset == 0x2530, "UABP_PickupTruck_C::AnimGraphNode_LookAt_A2E735DF4A7AA052CC37B58B0524727B offset is not 2530");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_30CA284347D58C588A8CB089D1382A6A_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_30CA284347D58C588A8CB089D1382A6A);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_30CA284347D58C588A8CB089D1382A6A_Offset == 0x26b0, "UABP_PickupTruck_C::AnimGraphNode_LookAt_30CA284347D58C588A8CB089D1382A6A offset is not 26b0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_6C5029EC47C9209EAA99B894C653703D_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_6C5029EC47C9209EAA99B894C653703D);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_6C5029EC47C9209EAA99B894C653703D_Offset == 0x2830, "UABP_PickupTruck_C::AnimGraphNode_LookAt_6C5029EC47C9209EAA99B894C653703D offset is not 2830");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_MeshRefPose_0C49B8F0490DA7D30300A68046CADF70_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_MeshRefPose_0C49B8F0490DA7D30300A68046CADF70);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_MeshRefPose_0C49B8F0490DA7D30300A68046CADF70_Offset == 0x29b0, "UABP_PickupTruck_C::AnimGraphNode_MeshRefPose_0C49B8F0490DA7D30300A68046CADF70 offset is not 29b0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_WheelHandler_E4B8207B447B62AD3703D8A03847A577_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_WheelHandler_E4B8207B447B62AD3703D8A03847A577);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_WheelHandler_E4B8207B447B62AD3703D8A03847A577_Offset == 0x29e0, "UABP_PickupTruck_C::AnimGraphNode_WheelHandler_E4B8207B447B62AD3703D8A03847A577 offset is not 29e0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_Root_CA34EADA4CB2546EE3D3B2915BCFEEB8_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_Root_CA34EADA4CB2546EE3D3B2915BCFEEB8);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_Root_CA34EADA4CB2546EE3D3B2915BCFEEB8_Offset == 0x2a68, "UABP_PickupTruck_C::AnimGraphNode_Root_CA34EADA4CB2546EE3D3B2915BCFEEB8 offset is not 2a68");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_336216254934F83AE02408AB47E659DD_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_336216254934F83AE02408AB47E659DD);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_336216254934F83AE02408AB47E659DD_Offset == 0x2ab0, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_336216254934F83AE02408AB47E659DD offset is not 2ab0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_9219E2174C44B02095DAF2AFFC464E5B_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_9219E2174C44B02095DAF2AFFC464E5B);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_9219E2174C44B02095DAF2AFFC464E5B_Offset == 0x2b98, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_9219E2174C44B02095DAF2AFFC464E5B offset is not 2b98");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_B2FC6BEC4283D825E05F299ABF982D9C_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_B2FC6BEC4283D825E05F299ABF982D9C);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_B2FC6BEC4283D825E05F299ABF982D9C_Offset == 0x2c80, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_B2FC6BEC4283D825E05F299ABF982D9C offset is not 2c80");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_CBD45B7C42903B451A7DEAAA4C27D9E6_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_BoneDrivenController_CBD45B7C42903B451A7DEAAA4C27D9E6);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_BoneDrivenController_CBD45B7C42903B451A7DEAAA4C27D9E6_Offset == 0x2d68, "UABP_PickupTruck_C::AnimGraphNode_BoneDrivenController_CBD45B7C42903B451A7DEAAA4C27D9E6 offset is not 2d68");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_8397C2CB4F521A8DD581E4A8FAAE6F95_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_8397C2CB4F521A8DD581E4A8FAAE6F95);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_8397C2CB4F521A8DD581E4A8FAAE6F95_Offset == 0x2e50, "UABP_PickupTruck_C::AnimGraphNode_LookAt_8397C2CB4F521A8DD581E4A8FAAE6F95 offset is not 2e50");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_BEAA44EE4E2207240A89E2BD09F77039_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_BEAA44EE4E2207240A89E2BD09F77039);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_BEAA44EE4E2207240A89E2BD09F77039_Offset == 0x2fd0, "UABP_PickupTruck_C::AnimGraphNode_LookAt_BEAA44EE4E2207240A89E2BD09F77039 offset is not 2fd0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_686B94B143DEC497F60ADCB3C0B13D3A_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_686B94B143DEC497F60ADCB3C0B13D3A);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_686B94B143DEC497F60ADCB3C0B13D3A_Offset == 0x3150, "UABP_PickupTruck_C::AnimGraphNode_LookAt_686B94B143DEC497F60ADCB3C0B13D3A offset is not 3150");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_7EBB1B2D4717AD57850986BE9C6E397F_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_7EBB1B2D4717AD57850986BE9C6E397F);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_7EBB1B2D4717AD57850986BE9C6E397F_Offset == 0x32d0, "UABP_PickupTruck_C::AnimGraphNode_LookAt_7EBB1B2D4717AD57850986BE9C6E397F offset is not 32d0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_3E7A88A941A62D9037AE7EB1E8DB3207_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_3E7A88A941A62D9037AE7EB1E8DB3207);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_3E7A88A941A62D9037AE7EB1E8DB3207_Offset == 0x3450, "UABP_PickupTruck_C::AnimGraphNode_LookAt_3E7A88A941A62D9037AE7EB1E8DB3207 offset is not 3450");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_ModifyBone_FB39F86B4624221564E9BEA6A3015F8C_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_ModifyBone_FB39F86B4624221564E9BEA6A3015F8C);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_ModifyBone_FB39F86B4624221564E9BEA6A3015F8C_Offset == 0x35d0, "UABP_PickupTruck_C::AnimGraphNode_ModifyBone_FB39F86B4624221564E9BEA6A3015F8C offset is not 35d0");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_ModifyBone_5ACA0BF04447689369263FB577F450E7_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_ModifyBone_5ACA0BF04447689369263FB577F450E7);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_ModifyBone_5ACA0BF04447689369263FB577F450E7_Offset == 0x3688, "UABP_PickupTruck_C::AnimGraphNode_ModifyBone_5ACA0BF04447689369263FB577F450E7 offset is not 3688");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_RotationMultiplier_C796C7CF409DB05F8E14E1A06C56F845_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_RotationMultiplier_C796C7CF409DB05F8E14E1A06C56F845);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_RotationMultiplier_C796C7CF409DB05F8E14E1A06C56F845_Offset == 0x3740, "UABP_PickupTruck_C::AnimGraphNode_RotationMultiplier_C796C7CF409DB05F8E14E1A06C56F845 offset is not 3740");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_RotationMultiplier_00A8425E4CFFEA7B0D956AB6F0603F94_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_RotationMultiplier_00A8425E4CFFEA7B0D956AB6F0603F94);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_RotationMultiplier_00A8425E4CFFEA7B0D956AB6F0603F94_Offset == 0x37e8, "UABP_PickupTruck_C::AnimGraphNode_RotationMultiplier_00A8425E4CFFEA7B0D956AB6F0603F94 offset is not 37e8");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_RigidBody_67A5C08F4ACD9E8E3B22B58D2121D384_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_RigidBody_67A5C08F4ACD9E8E3B22B58D2121D384);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_RigidBody_67A5C08F4ACD9E8E3B22B58D2121D384_Offset == 0x3890, "UABP_PickupTruck_C::AnimGraphNode_RigidBody_67A5C08F4ACD9E8E3B22B58D2121D384 offset is not 3890");
	auto constexpr UABP_PickupTruck_C_AnimGraphNode_LookAt_1DB68D884F50CBE1F9E690920C595661_Offset = offsetof(UABP_PickupTruck_C, AnimGraphNode_LookAt_1DB68D884F50CBE1F9E690920C595661);
	static_assert(UABP_PickupTruck_C_AnimGraphNode_LookAt_1DB68D884F50CBE1F9E690920C595661_Offset == 0x3aa0, "UABP_PickupTruck_C::AnimGraphNode_LookAt_1DB68D884F50CBE1F9E690920C595661 offset is not 3aa0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
