#pragma once
#include "UTslVehicleAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_WheelHandler.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_MeshSpaceRefPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_CopyBone.hpp"
#include "FAnimNode_RotationMultiplier.hpp"
#include "FAnimNode_ModifyBone.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Uaz_469_Scale_C // Size: 0x1890
	: public UTslVehicleAnimInstance // Size: 0x9A0
{
private:
	typedef UABP_Uaz_469_Scale_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115076); // id32("AnimBlueprintGeneratedClass ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9A0 Size: 0x8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.UberGraphFrame */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3121D4D6450C01A9025E24BF0A3D3718; /* Ofs: 0x9A8 Size: 0x48 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_ComponentToLocalSpace_3121D4D6450C01A9025E24BF0A3D3718 */
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler_06CF99E84CFA4DD01E03F980F751E335; /* Ofs: 0x9F0 Size: 0x88 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_WheelHandler_06CF99E84CFA4DD01E03F980F751E335 */
	uint8_t UnknownDataA78[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_8C81E096463461BE4E270184BDF766FD; /* Ofs: 0xA80 Size: 0x180 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_LookAt_8C81E096463461BE4E270184BDF766FD */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2B908BFA4EB08F92B0E66CBFE034DCD2; /* Ofs: 0xC00 Size: 0xE8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_BoneDrivenController_2B908BFA4EB08F92B0E66CBFE034DCD2 */
	uint8_t UnknownDataCE8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_789F797B4495901FD73FD6B2FA557823; /* Ofs: 0xCF0 Size: 0x180 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_LookAt_789F797B4495901FD73FD6B2FA557823 */
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_1347AB9D41FDD289E4054A9C15AE5AD1; /* Ofs: 0xE70 Size: 0x30 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_MeshRefPose_1347AB9D41FDD289E4054A9C15AE5AD1 */
	FAnimNode_Root AnimGraphNode_Root_FC98B4E949D6FCB1B309309890D29C00; /* Ofs: 0xEA0 Size: 0x48 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_Root_FC98B4E949D6FCB1B309309890D29C00 */
	uint8_t UnknownDataEE8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_0F48BC8243CB51D27A7F059F1A8C39EB; /* Ofs: 0xEF0 Size: 0x180 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_LookAt_0F48BC8243CB51D27A7F059F1A8C39EB */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_E94FC882426A20F03FAFE482678535B1; /* Ofs: 0x1070 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_CopyBone_E94FC882426A20F03FAFE482678535B1 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_5038DD794139CFE6DC41EFB5FDEBE08F; /* Ofs: 0x1118 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_RotationMultiplier_5038DD794139CFE6DC41EFB5FDEBE08F */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_998D310642B36B430AF6EFBCA4E59C24; /* Ofs: 0x11C0 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_RotationMultiplier_998D310642B36B430AF6EFBCA4E59C24 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_828D261D4AE511CB8A8A21AC13397ADC; /* Ofs: 0x1268 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_RotationMultiplier_828D261D4AE511CB8A8A21AC13397ADC */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_0EDCD7A9476CC8B0A75F7B8C53144C10; /* Ofs: 0x1310 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_RotationMultiplier_0EDCD7A9476CC8B0A75F7B8C53144C10 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_C8D87009439D70A9D3FE7BB4935A42CE; /* Ofs: 0x13B8 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_RotationMultiplier_C8D87009439D70A9D3FE7BB4935A42CE */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_27A156534332F2AED7C9829A8A664A0D; /* Ofs: 0x1460 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_RotationMultiplier_27A156534332F2AED7C9829A8A664A0D */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_80E834804EEBC50CF8604CAFB2CC56B5; /* Ofs: 0x1508 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_RotationMultiplier_80E834804EEBC50CF8604CAFB2CC56B5 */
	FAnimNode_LookAt AnimGraphNode_LookAt_7BFA6884404B1C67B41F65A8166AF334; /* Ofs: 0x15B0 Size: 0x180 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_LookAt_7BFA6884404B1C67B41F65A8166AF334 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_FA87EE9949B3667162854FAE6BD92195; /* Ofs: 0x1730 Size: 0xA8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_RotationMultiplier_FA87EE9949B3667162854FAE6BD92195 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99; /* Ofs: 0x17D8 Size: 0xB8 - StructProperty ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C.AnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9A0, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_3121D4D6450C01A9025E24BF0A3D3718(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x9A8, value); }
	inline bool SetAnimGraphNode_WheelHandler_06CF99E84CFA4DD01E03F980F751E335(t_structHelper inst, FAnimNode_WheelHandler value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetAnimGraphNode_LookAt_8C81E096463461BE4E270184BDF766FD(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xA80, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_2B908BFA4EB08F92B0E66CBFE034DCD2(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0xC00, value); }
	inline bool SetAnimGraphNode_LookAt_789F797B4495901FD73FD6B2FA557823(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xCF0, value); }
	inline bool SetAnimGraphNode_MeshRefPose_1347AB9D41FDD289E4054A9C15AE5AD1(t_structHelper inst, FAnimNode_MeshSpaceRefPose value) { inst.WriteOffset(0xE70, value); }
	inline bool SetAnimGraphNode_Root_FC98B4E949D6FCB1B309309890D29C00(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0xEA0, value); }
	inline bool SetAnimGraphNode_LookAt_0F48BC8243CB51D27A7F059F1A8C39EB(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xEF0, value); }
	inline bool SetAnimGraphNode_CopyBone_E94FC882426A20F03FAFE482678535B1(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x1070, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_5038DD794139CFE6DC41EFB5FDEBE08F(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1118, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_998D310642B36B430AF6EFBCA4E59C24(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x11C0, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_828D261D4AE511CB8A8A21AC13397ADC(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1268, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_0EDCD7A9476CC8B0A75F7B8C53144C10(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1310, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_C8D87009439D70A9D3FE7BB4935A42CE(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x13B8, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_27A156534332F2AED7C9829A8A664A0D(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1460, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_80E834804EEBC50CF8604CAFB2CC56B5(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1508, value); }
	inline bool SetAnimGraphNode_LookAt_7BFA6884404B1C67B41F65A8166AF334(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x15B0, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_FA87EE9949B3667162854FAE6BD92195(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1730, value); }
	inline bool SetAnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x17D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Uaz_469_Scale_C = sizeof(UABP_Uaz_469_Scale_C); // 6288
    static_assert(sizeof(UABP_Uaz_469_Scale_C) == 0x1890, "Size of UABP_Uaz_469_Scale_C is not correct.");
	auto constexpr UABP_Uaz_469_Scale_C_UberGraphFrame_Offset = offsetof(UABP_Uaz_469_Scale_C, UberGraphFrame);
	static_assert(UABP_Uaz_469_Scale_C_UberGraphFrame_Offset == 0x9a0, "UABP_Uaz_469_Scale_C::UberGraphFrame offset is not 9a0");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_ComponentToLocalSpace_3121D4D6450C01A9025E24BF0A3D3718_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_ComponentToLocalSpace_3121D4D6450C01A9025E24BF0A3D3718);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_ComponentToLocalSpace_3121D4D6450C01A9025E24BF0A3D3718_Offset == 0x9a8, "UABP_Uaz_469_Scale_C::AnimGraphNode_ComponentToLocalSpace_3121D4D6450C01A9025E24BF0A3D3718 offset is not 9a8");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_WheelHandler_06CF99E84CFA4DD01E03F980F751E335_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_WheelHandler_06CF99E84CFA4DD01E03F980F751E335);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_WheelHandler_06CF99E84CFA4DD01E03F980F751E335_Offset == 0x9f0, "UABP_Uaz_469_Scale_C::AnimGraphNode_WheelHandler_06CF99E84CFA4DD01E03F980F751E335 offset is not 9f0");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_LookAt_8C81E096463461BE4E270184BDF766FD_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_LookAt_8C81E096463461BE4E270184BDF766FD);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_LookAt_8C81E096463461BE4E270184BDF766FD_Offset == 0xa80, "UABP_Uaz_469_Scale_C::AnimGraphNode_LookAt_8C81E096463461BE4E270184BDF766FD offset is not a80");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_BoneDrivenController_2B908BFA4EB08F92B0E66CBFE034DCD2_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_BoneDrivenController_2B908BFA4EB08F92B0E66CBFE034DCD2);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_BoneDrivenController_2B908BFA4EB08F92B0E66CBFE034DCD2_Offset == 0xc00, "UABP_Uaz_469_Scale_C::AnimGraphNode_BoneDrivenController_2B908BFA4EB08F92B0E66CBFE034DCD2 offset is not c00");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_LookAt_789F797B4495901FD73FD6B2FA557823_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_LookAt_789F797B4495901FD73FD6B2FA557823);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_LookAt_789F797B4495901FD73FD6B2FA557823_Offset == 0xcf0, "UABP_Uaz_469_Scale_C::AnimGraphNode_LookAt_789F797B4495901FD73FD6B2FA557823 offset is not cf0");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_MeshRefPose_1347AB9D41FDD289E4054A9C15AE5AD1_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_MeshRefPose_1347AB9D41FDD289E4054A9C15AE5AD1);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_MeshRefPose_1347AB9D41FDD289E4054A9C15AE5AD1_Offset == 0xe70, "UABP_Uaz_469_Scale_C::AnimGraphNode_MeshRefPose_1347AB9D41FDD289E4054A9C15AE5AD1 offset is not e70");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_Root_FC98B4E949D6FCB1B309309890D29C00_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_Root_FC98B4E949D6FCB1B309309890D29C00);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_Root_FC98B4E949D6FCB1B309309890D29C00_Offset == 0xea0, "UABP_Uaz_469_Scale_C::AnimGraphNode_Root_FC98B4E949D6FCB1B309309890D29C00 offset is not ea0");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_LookAt_0F48BC8243CB51D27A7F059F1A8C39EB_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_LookAt_0F48BC8243CB51D27A7F059F1A8C39EB);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_LookAt_0F48BC8243CB51D27A7F059F1A8C39EB_Offset == 0xef0, "UABP_Uaz_469_Scale_C::AnimGraphNode_LookAt_0F48BC8243CB51D27A7F059F1A8C39EB offset is not ef0");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_CopyBone_E94FC882426A20F03FAFE482678535B1_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_CopyBone_E94FC882426A20F03FAFE482678535B1);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_CopyBone_E94FC882426A20F03FAFE482678535B1_Offset == 0x1070, "UABP_Uaz_469_Scale_C::AnimGraphNode_CopyBone_E94FC882426A20F03FAFE482678535B1 offset is not 1070");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_5038DD794139CFE6DC41EFB5FDEBE08F_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_RotationMultiplier_5038DD794139CFE6DC41EFB5FDEBE08F);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_5038DD794139CFE6DC41EFB5FDEBE08F_Offset == 0x1118, "UABP_Uaz_469_Scale_C::AnimGraphNode_RotationMultiplier_5038DD794139CFE6DC41EFB5FDEBE08F offset is not 1118");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_998D310642B36B430AF6EFBCA4E59C24_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_RotationMultiplier_998D310642B36B430AF6EFBCA4E59C24);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_998D310642B36B430AF6EFBCA4E59C24_Offset == 0x11c0, "UABP_Uaz_469_Scale_C::AnimGraphNode_RotationMultiplier_998D310642B36B430AF6EFBCA4E59C24 offset is not 11c0");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_828D261D4AE511CB8A8A21AC13397ADC_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_RotationMultiplier_828D261D4AE511CB8A8A21AC13397ADC);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_828D261D4AE511CB8A8A21AC13397ADC_Offset == 0x1268, "UABP_Uaz_469_Scale_C::AnimGraphNode_RotationMultiplier_828D261D4AE511CB8A8A21AC13397ADC offset is not 1268");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_0EDCD7A9476CC8B0A75F7B8C53144C10_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_RotationMultiplier_0EDCD7A9476CC8B0A75F7B8C53144C10);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_0EDCD7A9476CC8B0A75F7B8C53144C10_Offset == 0x1310, "UABP_Uaz_469_Scale_C::AnimGraphNode_RotationMultiplier_0EDCD7A9476CC8B0A75F7B8C53144C10 offset is not 1310");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_C8D87009439D70A9D3FE7BB4935A42CE_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_RotationMultiplier_C8D87009439D70A9D3FE7BB4935A42CE);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_C8D87009439D70A9D3FE7BB4935A42CE_Offset == 0x13b8, "UABP_Uaz_469_Scale_C::AnimGraphNode_RotationMultiplier_C8D87009439D70A9D3FE7BB4935A42CE offset is not 13b8");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_27A156534332F2AED7C9829A8A664A0D_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_RotationMultiplier_27A156534332F2AED7C9829A8A664A0D);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_27A156534332F2AED7C9829A8A664A0D_Offset == 0x1460, "UABP_Uaz_469_Scale_C::AnimGraphNode_RotationMultiplier_27A156534332F2AED7C9829A8A664A0D offset is not 1460");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_80E834804EEBC50CF8604CAFB2CC56B5_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_RotationMultiplier_80E834804EEBC50CF8604CAFB2CC56B5);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_80E834804EEBC50CF8604CAFB2CC56B5_Offset == 0x1508, "UABP_Uaz_469_Scale_C::AnimGraphNode_RotationMultiplier_80E834804EEBC50CF8604CAFB2CC56B5 offset is not 1508");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_LookAt_7BFA6884404B1C67B41F65A8166AF334_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_LookAt_7BFA6884404B1C67B41F65A8166AF334);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_LookAt_7BFA6884404B1C67B41F65A8166AF334_Offset == 0x15b0, "UABP_Uaz_469_Scale_C::AnimGraphNode_LookAt_7BFA6884404B1C67B41F65A8166AF334 offset is not 15b0");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_FA87EE9949B3667162854FAE6BD92195_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_RotationMultiplier_FA87EE9949B3667162854FAE6BD92195);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_RotationMultiplier_FA87EE9949B3667162854FAE6BD92195_Offset == 0x1730, "UABP_Uaz_469_Scale_C::AnimGraphNode_RotationMultiplier_FA87EE9949B3667162854FAE6BD92195 offset is not 1730");
	auto constexpr UABP_Uaz_469_Scale_C_AnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99_Offset = offsetof(UABP_Uaz_469_Scale_C, AnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99);
	static_assert(UABP_Uaz_469_Scale_C_AnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99_Offset == 0x17d8, "UABP_Uaz_469_Scale_C::AnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99 offset is not 17d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
