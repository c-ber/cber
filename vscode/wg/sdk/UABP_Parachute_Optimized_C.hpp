#pragma once
#include "UTslParachuteAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_RotationOffsetBlendSpace.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_RotateRootBone.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Parachute_Optimized_C // Size: 0xEC8
	: public UTslParachuteAnimInstance // Size: 0x480
{
private:
	typedef UABP_Parachute_Optimized_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91765); // id32("AnimBlueprintGeneratedClass ABP_Parachute_Optimized.ABP_Parachute_Optimized_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x480 Size: 0x8 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_50503CB74D9DAE9F3677F5899E616C30; /* Ofs: 0x488 Size: 0x48 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_Root_50503CB74D9DAE9F3677F5899E616C30 */
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E4E30E324730BCF6DEFA408A9577A2F2; /* Ofs: 0x4D0 Size: 0x80 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_TransitionResult_E4E30E324730BCF6DEFA408A9577A2F2 */
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8405E2B140B88A56847506B4F5E50AEC; /* Ofs: 0x550 Size: 0x80 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_TransitionResult_8405E2B140B88A56847506B4F5E50AEC */
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_709FB9BA4322959BAB6DB9B028B0BEC3; /* Ofs: 0x5D0 Size: 0x80 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_TransitionResult_709FB9BA4322959BAB6DB9B028B0BEC3 */
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_755AAD0240819C25B612B69450BC7124; /* Ofs: 0x650 Size: 0x80 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_TransitionResult_755AAD0240819C25B612B69450BC7124 */
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B1B66602471927888DF9DDAF9B3986D5; /* Ofs: 0x6D0 Size: 0x70 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_SequencePlayer_B1B66602471927888DF9DDAF9B3986D5 */
	FAnimNode_Root AnimGraphNode_StateResult_1DF6EC7449E4829DB6BD46BDD6FEE28D; /* Ofs: 0x740 Size: 0x48 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_StateResult_1DF6EC7449E4829DB6BD46BDD6FEE28D */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_99E649B046D54D746C69919CC11A061D; /* Ofs: 0x788 Size: 0x38 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_LocalRefPose_99E649B046D54D746C69919CC11A061D */
	FAnimNode_Root AnimGraphNode_StateResult_01CFAAAB42CF3F25242BC9AECCD00DD4; /* Ofs: 0x7C0 Size: 0x48 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_StateResult_01CFAAAB42CF3F25242BC9AECCD00DD4 */
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_E3C1DEC241C1C2FA3D79D593B3EC2C1D; /* Ofs: 0x808 Size: 0x158 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_RotationOffsetBlendSpace_E3C1DEC241C1C2FA3D79D593B3EC2C1D */
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40B46AB94583CFEF7CBD02B6085B5E69; /* Ofs: 0x960 Size: 0x70 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_SequencePlayer_40B46AB94583CFEF7CBD02B6085B5E69 */
	FAnimNode_Root AnimGraphNode_StateResult_4D593FBD426D55D4BB7FFE9BCBE8A845; /* Ofs: 0x9D0 Size: 0x48 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_StateResult_4D593FBD426D55D4BB7FFE9BCBE8A845 */
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2FB760104392BC26D4C6C9AAF4CEFB24; /* Ofs: 0xA18 Size: 0x70 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_SequencePlayer_2FB760104392BC26D4C6C9AAF4CEFB24 */
	FAnimNode_Root AnimGraphNode_StateResult_EB83A3C94925B7CC7071D9B74B557A3A; /* Ofs: 0xA88 Size: 0x48 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_StateResult_EB83A3C94925B7CC7071D9B74B557A3A */
	FAnimNode_StateMachine AnimGraphNode_StateMachine_776969EF4DAAFDC48F4092BDA56C6E74; /* Ofs: 0xAD0 Size: 0xD8 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_StateMachine_776969EF4DAAFDC48F4092BDA56C6E74 */
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_DA1040B54611027093C5219047595012; /* Ofs: 0xBA8 Size: 0x60 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_RotateRootBone_DA1040B54611027093C5219047595012 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_E06527F24E361588FC6C979E042F6AC9; /* Ofs: 0xC08 Size: 0xB8 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_ModifyBone_E06527F24E361588FC6C979E042F6AC9 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_E038A1A34E6D621C25F1EA82C5273CA8; /* Ofs: 0xCC0 Size: 0x48 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_LocalToComponentSpace_E038A1A34E6D621C25F1EA82C5273CA8 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_67970A60458A81FF752861BB09BC5792; /* Ofs: 0xD08 Size: 0xB8 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_ModifyBone_67970A60458A81FF752861BB09BC5792 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_A4C27E8B40A4F9150CD4E8B4E01169F7; /* Ofs: 0xDC0 Size: 0x48 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_ComponentToLocalSpace_A4C27E8B40A4F9150CD4E8B4E01169F7 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5B021A0D42CFCC0C07D9A3828A42C4EB; /* Ofs: 0xE08 Size: 0xB8 - StructProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.AnimGraphNode_ModifyBone_5B021A0D42CFCC0C07D9A3828A42C4EB */
	ExternalPtr<struct UParachuteVehicleMovement> RefParachuteMovement; /* Ofs: 0xEC0 Size: 0x8 - ObjectProperty ABP_Parachute_Optimized.ABP_Parachute_Optimized_C.RefParachuteMovement */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x480, value); }
	inline bool SetAnimGraphNode_Root_50503CB74D9DAE9F3677F5899E616C30(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x488, value); }
	inline bool SetAnimGraphNode_TransitionResult_E4E30E324730BCF6DEFA408A9577A2F2(t_structHelper inst, FAnimNode_TransitionResult value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetAnimGraphNode_TransitionResult_8405E2B140B88A56847506B4F5E50AEC(t_structHelper inst, FAnimNode_TransitionResult value) { inst.WriteOffset(0x550, value); }
	inline bool SetAnimGraphNode_TransitionResult_709FB9BA4322959BAB6DB9B028B0BEC3(t_structHelper inst, FAnimNode_TransitionResult value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetAnimGraphNode_TransitionResult_755AAD0240819C25B612B69450BC7124(t_structHelper inst, FAnimNode_TransitionResult value) { inst.WriteOffset(0x650, value); }
	inline bool SetAnimGraphNode_SequencePlayer_B1B66602471927888DF9DDAF9B3986D5(t_structHelper inst, FAnimNode_SequencePlayer value) { inst.WriteOffset(0x6D0, value); }
	inline bool SetAnimGraphNode_StateResult_1DF6EC7449E4829DB6BD46BDD6FEE28D(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x740, value); }
	inline bool SetAnimGraphNode_LocalRefPose_99E649B046D54D746C69919CC11A061D(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x788, value); }
	inline bool SetAnimGraphNode_StateResult_01CFAAAB42CF3F25242BC9AECCD00DD4(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x7C0, value); }
	inline bool SetAnimGraphNode_RotationOffsetBlendSpace_E3C1DEC241C1C2FA3D79D593B3EC2C1D(t_structHelper inst, FAnimNode_RotationOffsetBlendSpace value) { inst.WriteOffset(0x808, value); }
	inline bool SetAnimGraphNode_SequencePlayer_40B46AB94583CFEF7CBD02B6085B5E69(t_structHelper inst, FAnimNode_SequencePlayer value) { inst.WriteOffset(0x960, value); }
	inline bool SetAnimGraphNode_StateResult_4D593FBD426D55D4BB7FFE9BCBE8A845(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x9D0, value); }
	inline bool SetAnimGraphNode_SequencePlayer_2FB760104392BC26D4C6C9AAF4CEFB24(t_structHelper inst, FAnimNode_SequencePlayer value) { inst.WriteOffset(0xA18, value); }
	inline bool SetAnimGraphNode_StateResult_EB83A3C94925B7CC7071D9B74B557A3A(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0xA88, value); }
	inline bool SetAnimGraphNode_StateMachine_776969EF4DAAFDC48F4092BDA56C6E74(t_structHelper inst, FAnimNode_StateMachine value) { inst.WriteOffset(0xAD0, value); }
	inline bool SetAnimGraphNode_RotateRootBone_DA1040B54611027093C5219047595012(t_structHelper inst, FAnimNode_RotateRootBone value) { inst.WriteOffset(0xBA8, value); }
	inline bool SetAnimGraphNode_ModifyBone_E06527F24E361588FC6C979E042F6AC9(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xC08, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_E038A1A34E6D621C25F1EA82C5273CA8(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0xCC0, value); }
	inline bool SetAnimGraphNode_ModifyBone_67970A60458A81FF752861BB09BC5792(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xD08, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_A4C27E8B40A4F9150CD4E8B4E01169F7(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0xDC0, value); }
	inline bool SetAnimGraphNode_ModifyBone_5B021A0D42CFCC0C07D9A3828A42C4EB(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xE08, value); }
	inline bool SetRefParachuteMovement(t_structHelper inst, ExternalPtr<struct UParachuteVehicleMovement> value) { inst.WriteOffset(0xEC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Parachute_Optimized_C = sizeof(UABP_Parachute_Optimized_C); // 3784
    static_assert(sizeof(UABP_Parachute_Optimized_C) == 0xEC8, "Size of UABP_Parachute_Optimized_C is not correct.");
	auto constexpr UABP_Parachute_Optimized_C_UberGraphFrame_Offset = offsetof(UABP_Parachute_Optimized_C, UberGraphFrame);
	static_assert(UABP_Parachute_Optimized_C_UberGraphFrame_Offset == 0x480, "UABP_Parachute_Optimized_C::UberGraphFrame offset is not 480");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_Root_50503CB74D9DAE9F3677F5899E616C30_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_Root_50503CB74D9DAE9F3677F5899E616C30);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_Root_50503CB74D9DAE9F3677F5899E616C30_Offset == 0x488, "UABP_Parachute_Optimized_C::AnimGraphNode_Root_50503CB74D9DAE9F3677F5899E616C30 offset is not 488");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_TransitionResult_E4E30E324730BCF6DEFA408A9577A2F2_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_TransitionResult_E4E30E324730BCF6DEFA408A9577A2F2);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_TransitionResult_E4E30E324730BCF6DEFA408A9577A2F2_Offset == 0x4d0, "UABP_Parachute_Optimized_C::AnimGraphNode_TransitionResult_E4E30E324730BCF6DEFA408A9577A2F2 offset is not 4d0");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_TransitionResult_8405E2B140B88A56847506B4F5E50AEC_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_TransitionResult_8405E2B140B88A56847506B4F5E50AEC);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_TransitionResult_8405E2B140B88A56847506B4F5E50AEC_Offset == 0x550, "UABP_Parachute_Optimized_C::AnimGraphNode_TransitionResult_8405E2B140B88A56847506B4F5E50AEC offset is not 550");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_TransitionResult_709FB9BA4322959BAB6DB9B028B0BEC3_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_TransitionResult_709FB9BA4322959BAB6DB9B028B0BEC3);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_TransitionResult_709FB9BA4322959BAB6DB9B028B0BEC3_Offset == 0x5d0, "UABP_Parachute_Optimized_C::AnimGraphNode_TransitionResult_709FB9BA4322959BAB6DB9B028B0BEC3 offset is not 5d0");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_TransitionResult_755AAD0240819C25B612B69450BC7124_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_TransitionResult_755AAD0240819C25B612B69450BC7124);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_TransitionResult_755AAD0240819C25B612B69450BC7124_Offset == 0x650, "UABP_Parachute_Optimized_C::AnimGraphNode_TransitionResult_755AAD0240819C25B612B69450BC7124 offset is not 650");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_SequencePlayer_B1B66602471927888DF9DDAF9B3986D5_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_SequencePlayer_B1B66602471927888DF9DDAF9B3986D5);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_SequencePlayer_B1B66602471927888DF9DDAF9B3986D5_Offset == 0x6d0, "UABP_Parachute_Optimized_C::AnimGraphNode_SequencePlayer_B1B66602471927888DF9DDAF9B3986D5 offset is not 6d0");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_StateResult_1DF6EC7449E4829DB6BD46BDD6FEE28D_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_StateResult_1DF6EC7449E4829DB6BD46BDD6FEE28D);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_StateResult_1DF6EC7449E4829DB6BD46BDD6FEE28D_Offset == 0x740, "UABP_Parachute_Optimized_C::AnimGraphNode_StateResult_1DF6EC7449E4829DB6BD46BDD6FEE28D offset is not 740");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_LocalRefPose_99E649B046D54D746C69919CC11A061D_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_LocalRefPose_99E649B046D54D746C69919CC11A061D);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_LocalRefPose_99E649B046D54D746C69919CC11A061D_Offset == 0x788, "UABP_Parachute_Optimized_C::AnimGraphNode_LocalRefPose_99E649B046D54D746C69919CC11A061D offset is not 788");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_StateResult_01CFAAAB42CF3F25242BC9AECCD00DD4_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_StateResult_01CFAAAB42CF3F25242BC9AECCD00DD4);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_StateResult_01CFAAAB42CF3F25242BC9AECCD00DD4_Offset == 0x7c0, "UABP_Parachute_Optimized_C::AnimGraphNode_StateResult_01CFAAAB42CF3F25242BC9AECCD00DD4 offset is not 7c0");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_RotationOffsetBlendSpace_E3C1DEC241C1C2FA3D79D593B3EC2C1D_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_RotationOffsetBlendSpace_E3C1DEC241C1C2FA3D79D593B3EC2C1D);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_RotationOffsetBlendSpace_E3C1DEC241C1C2FA3D79D593B3EC2C1D_Offset == 0x808, "UABP_Parachute_Optimized_C::AnimGraphNode_RotationOffsetBlendSpace_E3C1DEC241C1C2FA3D79D593B3EC2C1D offset is not 808");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_SequencePlayer_40B46AB94583CFEF7CBD02B6085B5E69_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_SequencePlayer_40B46AB94583CFEF7CBD02B6085B5E69);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_SequencePlayer_40B46AB94583CFEF7CBD02B6085B5E69_Offset == 0x960, "UABP_Parachute_Optimized_C::AnimGraphNode_SequencePlayer_40B46AB94583CFEF7CBD02B6085B5E69 offset is not 960");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_StateResult_4D593FBD426D55D4BB7FFE9BCBE8A845_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_StateResult_4D593FBD426D55D4BB7FFE9BCBE8A845);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_StateResult_4D593FBD426D55D4BB7FFE9BCBE8A845_Offset == 0x9d0, "UABP_Parachute_Optimized_C::AnimGraphNode_StateResult_4D593FBD426D55D4BB7FFE9BCBE8A845 offset is not 9d0");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_SequencePlayer_2FB760104392BC26D4C6C9AAF4CEFB24_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_SequencePlayer_2FB760104392BC26D4C6C9AAF4CEFB24);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_SequencePlayer_2FB760104392BC26D4C6C9AAF4CEFB24_Offset == 0xa18, "UABP_Parachute_Optimized_C::AnimGraphNode_SequencePlayer_2FB760104392BC26D4C6C9AAF4CEFB24 offset is not a18");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_StateResult_EB83A3C94925B7CC7071D9B74B557A3A_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_StateResult_EB83A3C94925B7CC7071D9B74B557A3A);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_StateResult_EB83A3C94925B7CC7071D9B74B557A3A_Offset == 0xa88, "UABP_Parachute_Optimized_C::AnimGraphNode_StateResult_EB83A3C94925B7CC7071D9B74B557A3A offset is not a88");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_StateMachine_776969EF4DAAFDC48F4092BDA56C6E74_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_StateMachine_776969EF4DAAFDC48F4092BDA56C6E74);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_StateMachine_776969EF4DAAFDC48F4092BDA56C6E74_Offset == 0xad0, "UABP_Parachute_Optimized_C::AnimGraphNode_StateMachine_776969EF4DAAFDC48F4092BDA56C6E74 offset is not ad0");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_RotateRootBone_DA1040B54611027093C5219047595012_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_RotateRootBone_DA1040B54611027093C5219047595012);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_RotateRootBone_DA1040B54611027093C5219047595012_Offset == 0xba8, "UABP_Parachute_Optimized_C::AnimGraphNode_RotateRootBone_DA1040B54611027093C5219047595012 offset is not ba8");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_ModifyBone_E06527F24E361588FC6C979E042F6AC9_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_ModifyBone_E06527F24E361588FC6C979E042F6AC9);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_ModifyBone_E06527F24E361588FC6C979E042F6AC9_Offset == 0xc08, "UABP_Parachute_Optimized_C::AnimGraphNode_ModifyBone_E06527F24E361588FC6C979E042F6AC9 offset is not c08");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_LocalToComponentSpace_E038A1A34E6D621C25F1EA82C5273CA8_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_LocalToComponentSpace_E038A1A34E6D621C25F1EA82C5273CA8);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_LocalToComponentSpace_E038A1A34E6D621C25F1EA82C5273CA8_Offset == 0xcc0, "UABP_Parachute_Optimized_C::AnimGraphNode_LocalToComponentSpace_E038A1A34E6D621C25F1EA82C5273CA8 offset is not cc0");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_ModifyBone_67970A60458A81FF752861BB09BC5792_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_ModifyBone_67970A60458A81FF752861BB09BC5792);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_ModifyBone_67970A60458A81FF752861BB09BC5792_Offset == 0xd08, "UABP_Parachute_Optimized_C::AnimGraphNode_ModifyBone_67970A60458A81FF752861BB09BC5792 offset is not d08");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_ComponentToLocalSpace_A4C27E8B40A4F9150CD4E8B4E01169F7_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_ComponentToLocalSpace_A4C27E8B40A4F9150CD4E8B4E01169F7);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_ComponentToLocalSpace_A4C27E8B40A4F9150CD4E8B4E01169F7_Offset == 0xdc0, "UABP_Parachute_Optimized_C::AnimGraphNode_ComponentToLocalSpace_A4C27E8B40A4F9150CD4E8B4E01169F7 offset is not dc0");
	auto constexpr UABP_Parachute_Optimized_C_AnimGraphNode_ModifyBone_5B021A0D42CFCC0C07D9A3828A42C4EB_Offset = offsetof(UABP_Parachute_Optimized_C, AnimGraphNode_ModifyBone_5B021A0D42CFCC0C07D9A3828A42C4EB);
	static_assert(UABP_Parachute_Optimized_C_AnimGraphNode_ModifyBone_5B021A0D42CFCC0C07D9A3828A42C4EB_Offset == 0xe08, "UABP_Parachute_Optimized_C::AnimGraphNode_ModifyBone_5B021A0D42CFCC0C07D9A3828A42C4EB offset is not e08");
	auto constexpr UABP_Parachute_Optimized_C_RefParachuteMovement_Offset = offsetof(UABP_Parachute_Optimized_C, RefParachuteMovement);
	static_assert(UABP_Parachute_Optimized_C_RefParachuteMovement_Offset == 0xec0, "UABP_Parachute_Optimized_C::RefParachuteMovement offset is not ec0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
