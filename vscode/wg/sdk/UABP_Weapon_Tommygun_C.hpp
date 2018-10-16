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

struct alignas(1) UABP_Weapon_Tommygun_C // Size: 0x748
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Tommygun_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131447); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.AnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.AnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA */
	FAnimNode_Slot AnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.AnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA */
	FAnimNode_Slot AnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.AnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454 */
	FAnimNode_Slot AnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6; /* Ofs: 0x5A0 Size: 0x60 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.AnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734; /* Ofs: 0x600 Size: 0xB8 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.AnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E; /* Ofs: 0x6B8 Size: 0x48 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.AnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A; /* Ofs: 0x700 Size: 0x48 - StructProperty ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C.AnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetAnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x600, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x700, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Tommygun_C = sizeof(UABP_Weapon_Tommygun_C); // 1864
    static_assert(sizeof(UABP_Weapon_Tommygun_C) == 0x748, "Size of UABP_Weapon_Tommygun_C is not correct.");
	auto constexpr UABP_Weapon_Tommygun_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Tommygun_C, UberGraphFrame);
	static_assert(UABP_Weapon_Tommygun_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Tommygun_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Tommygun_C_AnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8_Offset = offsetof(UABP_Weapon_Tommygun_C, AnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8);
	static_assert(UABP_Weapon_Tommygun_C_AnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8_Offset == 0x460, "UABP_Weapon_Tommygun_C::AnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8 offset is not 460");
	auto constexpr UABP_Weapon_Tommygun_C_AnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA_Offset = offsetof(UABP_Weapon_Tommygun_C, AnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA);
	static_assert(UABP_Weapon_Tommygun_C_AnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA_Offset == 0x4a8, "UABP_Weapon_Tommygun_C::AnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA offset is not 4a8");
	auto constexpr UABP_Weapon_Tommygun_C_AnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA_Offset = offsetof(UABP_Weapon_Tommygun_C, AnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA);
	static_assert(UABP_Weapon_Tommygun_C_AnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA_Offset == 0x4e0, "UABP_Weapon_Tommygun_C::AnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA offset is not 4e0");
	auto constexpr UABP_Weapon_Tommygun_C_AnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454_Offset = offsetof(UABP_Weapon_Tommygun_C, AnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454);
	static_assert(UABP_Weapon_Tommygun_C_AnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454_Offset == 0x540, "UABP_Weapon_Tommygun_C::AnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454 offset is not 540");
	auto constexpr UABP_Weapon_Tommygun_C_AnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6_Offset = offsetof(UABP_Weapon_Tommygun_C, AnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6);
	static_assert(UABP_Weapon_Tommygun_C_AnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6_Offset == 0x5a0, "UABP_Weapon_Tommygun_C::AnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6 offset is not 5a0");
	auto constexpr UABP_Weapon_Tommygun_C_AnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734_Offset = offsetof(UABP_Weapon_Tommygun_C, AnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734);
	static_assert(UABP_Weapon_Tommygun_C_AnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734_Offset == 0x600, "UABP_Weapon_Tommygun_C::AnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734 offset is not 600");
	auto constexpr UABP_Weapon_Tommygun_C_AnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E_Offset = offsetof(UABP_Weapon_Tommygun_C, AnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E);
	static_assert(UABP_Weapon_Tommygun_C_AnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E_Offset == 0x6b8, "UABP_Weapon_Tommygun_C::AnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E offset is not 6b8");
	auto constexpr UABP_Weapon_Tommygun_C_AnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A_Offset = offsetof(UABP_Weapon_Tommygun_C, AnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A);
	static_assert(UABP_Weapon_Tommygun_C_AnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A_Offset == 0x700, "UABP_Weapon_Tommygun_C::AnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A offset is not 700");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
