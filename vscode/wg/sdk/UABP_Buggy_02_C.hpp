#pragma once
#include "UTslVehicleAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_RotationMultiplier.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_WheelHandler.hpp"
#include "FAnimNode_CopyBone.hpp"
#include "FAnimNode_MeshSpaceRefPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_ModifyBone.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Buggy_02_C // Size: 0x2F88
	: public UTslVehicleAnimInstance // Size: 0x9A0
{
private:
	typedef UABP_Buggy_02_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116919); // id32("AnimBlueprintGeneratedClass ABP_Buggy_02.ABP_Buggy_02_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9A0 Size: 0x8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.UberGraphFrame */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_525B0D71411FEEC29D97728CAD3498F2; /* Ofs: 0x9A8 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_525B0D71411FEEC29D97728CAD3498F2 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2D5DFC0843E5768F908C608128614308; /* Ofs: 0xA90 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_2D5DFC0843E5768F908C608128614308 */
	uint8_t UnknownDataB78[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_41048E284724F4A8DDDD0CB3C5DC185F; /* Ofs: 0xB80 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_41048E284724F4A8DDDD0CB3C5DC185F */
	FAnimNode_LookAt AnimGraphNode_LookAt_9392501D46BE0C346DF473B19AC45DEA; /* Ofs: 0xD00 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_9392501D46BE0C346DF473B19AC45DEA */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_32BC35E444C8E3B3AD7D73916262A773; /* Ofs: 0xE80 Size: 0xA8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_RotationMultiplier_32BC35E444C8E3B3AD7D73916262A773 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4F071B7947A1EC420D9F539DB2C67218; /* Ofs: 0xF28 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_4F071B7947A1EC420D9F539DB2C67218 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_40518C144A367A467CC7DE8E230A629C; /* Ofs: 0x1010 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_40518C144A367A467CC7DE8E230A629C */
	uint8_t UnknownData10F8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_86E309CF49845B1AB57A13A3E845595C; /* Ofs: 0x1100 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_86E309CF49845B1AB57A13A3E845595C */
	FAnimNode_LookAt AnimGraphNode_LookAt_20231E94463777C18E76A1AF4037F36B; /* Ofs: 0x1280 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_20231E94463777C18E76A1AF4037F36B */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_F799497442C968C1E5358EB8709A236A; /* Ofs: 0x1400 Size: 0xA8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_RotationMultiplier_F799497442C968C1E5358EB8709A236A */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2BE9CB224632CE656CDA9D8602B21829; /* Ofs: 0x14A8 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_2BE9CB224632CE656CDA9D8602B21829 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_7568F4C44D626692B442C886CA915B8E; /* Ofs: 0x1590 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_7568F4C44D626692B442C886CA915B8E */
	uint8_t UnknownData1678[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_9A59C9F04B0D23713F80C89D693603B7; /* Ofs: 0x1680 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_9A59C9F04B0D23713F80C89D693603B7 */
	FAnimNode_LookAt AnimGraphNode_LookAt_9F374C574CA3C275ABF11B906CC6AEFD; /* Ofs: 0x1800 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_9F374C574CA3C275ABF11B906CC6AEFD */
	FAnimNode_LookAt AnimGraphNode_LookAt_30DE3D4841BF1574C99A0D877FDF4AC9; /* Ofs: 0x1980 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_30DE3D4841BF1574C99A0D877FDF4AC9 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3CEE7B114F611C19DC12D380FF65133A; /* Ofs: 0x1B00 Size: 0x48 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_ComponentToLocalSpace_3CEE7B114F611C19DC12D380FF65133A */
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler_4E4CB5084AF05A0D12FF4EA77E33506E; /* Ofs: 0x1B48 Size: 0x88 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_WheelHandler_4E4CB5084AF05A0D12FF4EA77E33506E */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_3F9971AF45A6FC72D6453A98A794FC6F; /* Ofs: 0x1BD0 Size: 0xA8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_CopyBone_3F9971AF45A6FC72D6453A98A794FC6F */
	uint8_t UnknownData1C78[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_34CFC3A04D8C772F60DB04BC986F3358; /* Ofs: 0x1C80 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_34CFC3A04D8C772F60DB04BC986F3358 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_D99FF38141F9A7C96009B08BD89C7A8C; /* Ofs: 0x1E00 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_D99FF38141F9A7C96009B08BD89C7A8C */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_0863980840F1050B21C00893035B112D; /* Ofs: 0x1EE8 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_0863980840F1050B21C00893035B112D */
	FAnimNode_LookAt AnimGraphNode_LookAt_86C5B6C54066F2CFB461FDB1042ACA75; /* Ofs: 0x1FD0 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_86C5B6C54066F2CFB461FDB1042ACA75 */
	FAnimNode_LookAt AnimGraphNode_LookAt_776CD22D4E1EEBB1359AE9A3DF6E456C; /* Ofs: 0x2150 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_776CD22D4E1EEBB1359AE9A3DF6E456C */
	FAnimNode_LookAt AnimGraphNode_LookAt_C2C299464A50806AF1536F91C6A7758E; /* Ofs: 0x22D0 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_C2C299464A50806AF1536F91C6A7758E */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_907B50A849EFC92CBA815BB3A4564152; /* Ofs: 0x2450 Size: 0xA8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_CopyBone_907B50A849EFC92CBA815BB3A4564152 */
	uint8_t UnknownData24F8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_2417D96A4F4BAFE072FB69B47B948AF4; /* Ofs: 0x2500 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_2417D96A4F4BAFE072FB69B47B948AF4 */
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_C8CD5E94491A92C7E2848F8821F7BCA0; /* Ofs: 0x2680 Size: 0x30 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_MeshRefPose_C8CD5E94491A92C7E2848F8821F7BCA0 */
	FAnimNode_Root AnimGraphNode_Root_68BA2A6F4DED33E2087BD987FCF84942; /* Ofs: 0x26B0 Size: 0x48 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_Root_68BA2A6F4DED33E2087BD987FCF84942 */
	uint8_t UnknownData26F8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_97A0671143C606571D65BA9E90F216CF; /* Ofs: 0x2700 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_97A0671143C606571D65BA9E90F216CF */
	FAnimNode_LookAt AnimGraphNode_LookAt_83FDDF9F4273A19F8716C9A90D938DAE; /* Ofs: 0x2880 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_83FDDF9F4273A19F8716C9A90D938DAE */
	FAnimNode_LookAt AnimGraphNode_LookAt_A1B31BA24CAB101750315E8D8E2777EA; /* Ofs: 0x2A00 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_A1B31BA24CAB101750315E8D8E2777EA */
	FAnimNode_LookAt AnimGraphNode_LookAt_C22376EB4323F04B048533967201D033; /* Ofs: 0x2B80 Size: 0x180 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_LookAt_C22376EB4323F04B048533967201D033 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2795E080496160CD8E8709BD6AE87A63; /* Ofs: 0x2D00 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_2795E080496160CD8E8709BD6AE87A63 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2AD3089444CB42FD4C81D99F5C8E7EA5; /* Ofs: 0x2DE8 Size: 0xE8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_BoneDrivenController_2AD3089444CB42FD4C81D99F5C8E7EA5 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747; /* Ofs: 0x2ED0 Size: 0xB8 - StructProperty ABP_Buggy_02.ABP_Buggy_02_C.AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9A0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_525B0D71411FEEC29D97728CAD3498F2(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x9A8, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_2D5DFC0843E5768F908C608128614308(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0xA90, value); }
	inline bool SetAnimGraphNode_LookAt_41048E284724F4A8DDDD0CB3C5DC185F(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xB80, value); }
	inline bool SetAnimGraphNode_LookAt_9392501D46BE0C346DF473B19AC45DEA(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xD00, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_32BC35E444C8E3B3AD7D73916262A773(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0xE80, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_4F071B7947A1EC420D9F539DB2C67218(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0xF28, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_40518C144A367A467CC7DE8E230A629C(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1010, value); }
	inline bool SetAnimGraphNode_LookAt_86E309CF49845B1AB57A13A3E845595C(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1100, value); }
	inline bool SetAnimGraphNode_LookAt_20231E94463777C18E76A1AF4037F36B(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1280, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_F799497442C968C1E5358EB8709A236A(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1400, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_2BE9CB224632CE656CDA9D8602B21829(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x14A8, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_7568F4C44D626692B442C886CA915B8E(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1590, value); }
	inline bool SetAnimGraphNode_LookAt_9A59C9F04B0D23713F80C89D693603B7(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1680, value); }
	inline bool SetAnimGraphNode_LookAt_9F374C574CA3C275ABF11B906CC6AEFD(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1800, value); }
	inline bool SetAnimGraphNode_LookAt_30DE3D4841BF1574C99A0D877FDF4AC9(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1980, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_3CEE7B114F611C19DC12D380FF65133A(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x1B00, value); }
	inline bool SetAnimGraphNode_WheelHandler_4E4CB5084AF05A0D12FF4EA77E33506E(t_structHelper inst, FAnimNode_WheelHandler value) { inst.WriteOffset(0x1B48, value); }
	inline bool SetAnimGraphNode_CopyBone_3F9971AF45A6FC72D6453A98A794FC6F(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x1BD0, value); }
	inline bool SetAnimGraphNode_LookAt_34CFC3A04D8C772F60DB04BC986F3358(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1C80, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_D99FF38141F9A7C96009B08BD89C7A8C(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1E00, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_0863980840F1050B21C00893035B112D(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1EE8, value); }
	inline bool SetAnimGraphNode_LookAt_86C5B6C54066F2CFB461FDB1042ACA75(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1FD0, value); }
	inline bool SetAnimGraphNode_LookAt_776CD22D4E1EEBB1359AE9A3DF6E456C(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2150, value); }
	inline bool SetAnimGraphNode_LookAt_C2C299464A50806AF1536F91C6A7758E(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x22D0, value); }
	inline bool SetAnimGraphNode_CopyBone_907B50A849EFC92CBA815BB3A4564152(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x2450, value); }
	inline bool SetAnimGraphNode_LookAt_2417D96A4F4BAFE072FB69B47B948AF4(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2500, value); }
	inline bool SetAnimGraphNode_MeshRefPose_C8CD5E94491A92C7E2848F8821F7BCA0(t_structHelper inst, FAnimNode_MeshSpaceRefPose value) { inst.WriteOffset(0x2680, value); }
	inline bool SetAnimGraphNode_Root_68BA2A6F4DED33E2087BD987FCF84942(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x26B0, value); }
	inline bool SetAnimGraphNode_LookAt_97A0671143C606571D65BA9E90F216CF(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2700, value); }
	inline bool SetAnimGraphNode_LookAt_83FDDF9F4273A19F8716C9A90D938DAE(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2880, value); }
	inline bool SetAnimGraphNode_LookAt_A1B31BA24CAB101750315E8D8E2777EA(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2A00, value); }
	inline bool SetAnimGraphNode_LookAt_C22376EB4323F04B048533967201D033(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x2B80, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_2795E080496160CD8E8709BD6AE87A63(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x2D00, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_2AD3089444CB42FD4C81D99F5C8E7EA5(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x2DE8, value); }
	inline bool SetAnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x2ED0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Buggy_02_C = sizeof(UABP_Buggy_02_C); // 12168
    static_assert(sizeof(UABP_Buggy_02_C) == 0x2F88, "Size of UABP_Buggy_02_C is not correct.");
	auto constexpr UABP_Buggy_02_C_UberGraphFrame_Offset = offsetof(UABP_Buggy_02_C, UberGraphFrame);
	static_assert(UABP_Buggy_02_C_UberGraphFrame_Offset == 0x9a0, "UABP_Buggy_02_C::UberGraphFrame offset is not 9a0");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_525B0D71411FEEC29D97728CAD3498F2_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_525B0D71411FEEC29D97728CAD3498F2);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_525B0D71411FEEC29D97728CAD3498F2_Offset == 0x9a8, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_525B0D71411FEEC29D97728CAD3498F2 offset is not 9a8");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_2D5DFC0843E5768F908C608128614308_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_2D5DFC0843E5768F908C608128614308);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_2D5DFC0843E5768F908C608128614308_Offset == 0xa90, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_2D5DFC0843E5768F908C608128614308 offset is not a90");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_41048E284724F4A8DDDD0CB3C5DC185F_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_41048E284724F4A8DDDD0CB3C5DC185F);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_41048E284724F4A8DDDD0CB3C5DC185F_Offset == 0xb80, "UABP_Buggy_02_C::AnimGraphNode_LookAt_41048E284724F4A8DDDD0CB3C5DC185F offset is not b80");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_9392501D46BE0C346DF473B19AC45DEA_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_9392501D46BE0C346DF473B19AC45DEA);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_9392501D46BE0C346DF473B19AC45DEA_Offset == 0xd00, "UABP_Buggy_02_C::AnimGraphNode_LookAt_9392501D46BE0C346DF473B19AC45DEA offset is not d00");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_RotationMultiplier_32BC35E444C8E3B3AD7D73916262A773_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_RotationMultiplier_32BC35E444C8E3B3AD7D73916262A773);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_RotationMultiplier_32BC35E444C8E3B3AD7D73916262A773_Offset == 0xe80, "UABP_Buggy_02_C::AnimGraphNode_RotationMultiplier_32BC35E444C8E3B3AD7D73916262A773 offset is not e80");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_4F071B7947A1EC420D9F539DB2C67218_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_4F071B7947A1EC420D9F539DB2C67218);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_4F071B7947A1EC420D9F539DB2C67218_Offset == 0xf28, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_4F071B7947A1EC420D9F539DB2C67218 offset is not f28");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_40518C144A367A467CC7DE8E230A629C_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_40518C144A367A467CC7DE8E230A629C);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_40518C144A367A467CC7DE8E230A629C_Offset == 0x1010, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_40518C144A367A467CC7DE8E230A629C offset is not 1010");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_86E309CF49845B1AB57A13A3E845595C_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_86E309CF49845B1AB57A13A3E845595C);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_86E309CF49845B1AB57A13A3E845595C_Offset == 0x1100, "UABP_Buggy_02_C::AnimGraphNode_LookAt_86E309CF49845B1AB57A13A3E845595C offset is not 1100");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_20231E94463777C18E76A1AF4037F36B_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_20231E94463777C18E76A1AF4037F36B);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_20231E94463777C18E76A1AF4037F36B_Offset == 0x1280, "UABP_Buggy_02_C::AnimGraphNode_LookAt_20231E94463777C18E76A1AF4037F36B offset is not 1280");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_RotationMultiplier_F799497442C968C1E5358EB8709A236A_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_RotationMultiplier_F799497442C968C1E5358EB8709A236A);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_RotationMultiplier_F799497442C968C1E5358EB8709A236A_Offset == 0x1400, "UABP_Buggy_02_C::AnimGraphNode_RotationMultiplier_F799497442C968C1E5358EB8709A236A offset is not 1400");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_2BE9CB224632CE656CDA9D8602B21829_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_2BE9CB224632CE656CDA9D8602B21829);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_2BE9CB224632CE656CDA9D8602B21829_Offset == 0x14a8, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_2BE9CB224632CE656CDA9D8602B21829 offset is not 14a8");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_7568F4C44D626692B442C886CA915B8E_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_7568F4C44D626692B442C886CA915B8E);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_7568F4C44D626692B442C886CA915B8E_Offset == 0x1590, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_7568F4C44D626692B442C886CA915B8E offset is not 1590");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_9A59C9F04B0D23713F80C89D693603B7_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_9A59C9F04B0D23713F80C89D693603B7);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_9A59C9F04B0D23713F80C89D693603B7_Offset == 0x1680, "UABP_Buggy_02_C::AnimGraphNode_LookAt_9A59C9F04B0D23713F80C89D693603B7 offset is not 1680");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_9F374C574CA3C275ABF11B906CC6AEFD_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_9F374C574CA3C275ABF11B906CC6AEFD);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_9F374C574CA3C275ABF11B906CC6AEFD_Offset == 0x1800, "UABP_Buggy_02_C::AnimGraphNode_LookAt_9F374C574CA3C275ABF11B906CC6AEFD offset is not 1800");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_30DE3D4841BF1574C99A0D877FDF4AC9_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_30DE3D4841BF1574C99A0D877FDF4AC9);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_30DE3D4841BF1574C99A0D877FDF4AC9_Offset == 0x1980, "UABP_Buggy_02_C::AnimGraphNode_LookAt_30DE3D4841BF1574C99A0D877FDF4AC9 offset is not 1980");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_ComponentToLocalSpace_3CEE7B114F611C19DC12D380FF65133A_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_ComponentToLocalSpace_3CEE7B114F611C19DC12D380FF65133A);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_ComponentToLocalSpace_3CEE7B114F611C19DC12D380FF65133A_Offset == 0x1b00, "UABP_Buggy_02_C::AnimGraphNode_ComponentToLocalSpace_3CEE7B114F611C19DC12D380FF65133A offset is not 1b00");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_WheelHandler_4E4CB5084AF05A0D12FF4EA77E33506E_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_WheelHandler_4E4CB5084AF05A0D12FF4EA77E33506E);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_WheelHandler_4E4CB5084AF05A0D12FF4EA77E33506E_Offset == 0x1b48, "UABP_Buggy_02_C::AnimGraphNode_WheelHandler_4E4CB5084AF05A0D12FF4EA77E33506E offset is not 1b48");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_CopyBone_3F9971AF45A6FC72D6453A98A794FC6F_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_CopyBone_3F9971AF45A6FC72D6453A98A794FC6F);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_CopyBone_3F9971AF45A6FC72D6453A98A794FC6F_Offset == 0x1bd0, "UABP_Buggy_02_C::AnimGraphNode_CopyBone_3F9971AF45A6FC72D6453A98A794FC6F offset is not 1bd0");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_34CFC3A04D8C772F60DB04BC986F3358_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_34CFC3A04D8C772F60DB04BC986F3358);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_34CFC3A04D8C772F60DB04BC986F3358_Offset == 0x1c80, "UABP_Buggy_02_C::AnimGraphNode_LookAt_34CFC3A04D8C772F60DB04BC986F3358 offset is not 1c80");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_D99FF38141F9A7C96009B08BD89C7A8C_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_D99FF38141F9A7C96009B08BD89C7A8C);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_D99FF38141F9A7C96009B08BD89C7A8C_Offset == 0x1e00, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_D99FF38141F9A7C96009B08BD89C7A8C offset is not 1e00");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_0863980840F1050B21C00893035B112D_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_0863980840F1050B21C00893035B112D);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_0863980840F1050B21C00893035B112D_Offset == 0x1ee8, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_0863980840F1050B21C00893035B112D offset is not 1ee8");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_86C5B6C54066F2CFB461FDB1042ACA75_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_86C5B6C54066F2CFB461FDB1042ACA75);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_86C5B6C54066F2CFB461FDB1042ACA75_Offset == 0x1fd0, "UABP_Buggy_02_C::AnimGraphNode_LookAt_86C5B6C54066F2CFB461FDB1042ACA75 offset is not 1fd0");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_776CD22D4E1EEBB1359AE9A3DF6E456C_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_776CD22D4E1EEBB1359AE9A3DF6E456C);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_776CD22D4E1EEBB1359AE9A3DF6E456C_Offset == 0x2150, "UABP_Buggy_02_C::AnimGraphNode_LookAt_776CD22D4E1EEBB1359AE9A3DF6E456C offset is not 2150");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_C2C299464A50806AF1536F91C6A7758E_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_C2C299464A50806AF1536F91C6A7758E);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_C2C299464A50806AF1536F91C6A7758E_Offset == 0x22d0, "UABP_Buggy_02_C::AnimGraphNode_LookAt_C2C299464A50806AF1536F91C6A7758E offset is not 22d0");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_CopyBone_907B50A849EFC92CBA815BB3A4564152_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_CopyBone_907B50A849EFC92CBA815BB3A4564152);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_CopyBone_907B50A849EFC92CBA815BB3A4564152_Offset == 0x2450, "UABP_Buggy_02_C::AnimGraphNode_CopyBone_907B50A849EFC92CBA815BB3A4564152 offset is not 2450");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_2417D96A4F4BAFE072FB69B47B948AF4_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_2417D96A4F4BAFE072FB69B47B948AF4);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_2417D96A4F4BAFE072FB69B47B948AF4_Offset == 0x2500, "UABP_Buggy_02_C::AnimGraphNode_LookAt_2417D96A4F4BAFE072FB69B47B948AF4 offset is not 2500");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_MeshRefPose_C8CD5E94491A92C7E2848F8821F7BCA0_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_MeshRefPose_C8CD5E94491A92C7E2848F8821F7BCA0);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_MeshRefPose_C8CD5E94491A92C7E2848F8821F7BCA0_Offset == 0x2680, "UABP_Buggy_02_C::AnimGraphNode_MeshRefPose_C8CD5E94491A92C7E2848F8821F7BCA0 offset is not 2680");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_Root_68BA2A6F4DED33E2087BD987FCF84942_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_Root_68BA2A6F4DED33E2087BD987FCF84942);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_Root_68BA2A6F4DED33E2087BD987FCF84942_Offset == 0x26b0, "UABP_Buggy_02_C::AnimGraphNode_Root_68BA2A6F4DED33E2087BD987FCF84942 offset is not 26b0");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_97A0671143C606571D65BA9E90F216CF_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_97A0671143C606571D65BA9E90F216CF);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_97A0671143C606571D65BA9E90F216CF_Offset == 0x2700, "UABP_Buggy_02_C::AnimGraphNode_LookAt_97A0671143C606571D65BA9E90F216CF offset is not 2700");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_83FDDF9F4273A19F8716C9A90D938DAE_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_83FDDF9F4273A19F8716C9A90D938DAE);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_83FDDF9F4273A19F8716C9A90D938DAE_Offset == 0x2880, "UABP_Buggy_02_C::AnimGraphNode_LookAt_83FDDF9F4273A19F8716C9A90D938DAE offset is not 2880");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_A1B31BA24CAB101750315E8D8E2777EA_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_A1B31BA24CAB101750315E8D8E2777EA);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_A1B31BA24CAB101750315E8D8E2777EA_Offset == 0x2a00, "UABP_Buggy_02_C::AnimGraphNode_LookAt_A1B31BA24CAB101750315E8D8E2777EA offset is not 2a00");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_LookAt_C22376EB4323F04B048533967201D033_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_LookAt_C22376EB4323F04B048533967201D033);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_LookAt_C22376EB4323F04B048533967201D033_Offset == 0x2b80, "UABP_Buggy_02_C::AnimGraphNode_LookAt_C22376EB4323F04B048533967201D033 offset is not 2b80");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_2795E080496160CD8E8709BD6AE87A63_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_2795E080496160CD8E8709BD6AE87A63);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_2795E080496160CD8E8709BD6AE87A63_Offset == 0x2d00, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_2795E080496160CD8E8709BD6AE87A63 offset is not 2d00");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_2AD3089444CB42FD4C81D99F5C8E7EA5_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_BoneDrivenController_2AD3089444CB42FD4C81D99F5C8E7EA5);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_BoneDrivenController_2AD3089444CB42FD4C81D99F5C8E7EA5_Offset == 0x2de8, "UABP_Buggy_02_C::AnimGraphNode_BoneDrivenController_2AD3089444CB42FD4C81D99F5C8E7EA5 offset is not 2de8");
	auto constexpr UABP_Buggy_02_C_AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747_Offset = offsetof(UABP_Buggy_02_C, AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747);
	static_assert(UABP_Buggy_02_C_AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747_Offset == 0x2ed0, "UABP_Buggy_02_C::AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747 offset is not 2ed0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
