#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ModifyBone.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_M16_C // Size: 0x9D8
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_M16_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131104); // id32("AnimBlueprintGeneratedClass ABP_Weapon_M16.ABP_Weapon_M16_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B */
	FAnimNode_Slot AnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9 */
	FAnimNode_Slot AnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878 */
	FAnimNode_Slot AnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404; /* Ofs: 0x5A0 Size: 0x60 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404 */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466; /* Ofs: 0x600 Size: 0x280 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960; /* Ofs: 0x880 Size: 0x48 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15; /* Ofs: 0x8C8 Size: 0x48 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A; /* Ofs: 0x910 Size: 0xB8 - StructProperty ABP_Weapon_M16.ABP_Weapon_M16_C.AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A */
	float ADSOpticsAlpha; /* Ofs: 0x9C8 Size: 0x4 - FloatProperty ABP_Weapon_M16.ABP_Weapon_M16_C.ADSOpticsAlpha */
	uint8_t UnknownData9CC[0x4];
	ExternalPtr<struct UTslWeapon_Gun> Gun; /* Ofs: 0x9D0 Size: 0x8 - ObjectProperty ABP_Weapon_M16.ABP_Weapon_M16_C.Gun */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetAnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0x600, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x880, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetAnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x910, value); }
	inline bool SetADSOpticsAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x9C8, value); }
	inline bool SetGun(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x9D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_M16_C = sizeof(UABP_Weapon_M16_C); // 2520
    static_assert(sizeof(UABP_Weapon_M16_C) == 0x9D8, "Size of UABP_Weapon_M16_C is not correct.");
	auto constexpr UABP_Weapon_M16_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_M16_C, UberGraphFrame);
	static_assert(UABP_Weapon_M16_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_M16_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E_Offset == 0x460, "UABP_Weapon_M16_C::AnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E offset is not 460");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B_Offset == 0x4a8, "UABP_Weapon_M16_C::AnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B offset is not 4a8");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9_Offset == 0x4e0, "UABP_Weapon_M16_C::AnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9 offset is not 4e0");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878_Offset == 0x540, "UABP_Weapon_M16_C::AnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878 offset is not 540");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404_Offset == 0x5a0, "UABP_Weapon_M16_C::AnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404 offset is not 5a0");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466_Offset == 0x600, "UABP_Weapon_M16_C::AnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466 offset is not 600");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960_Offset == 0x880, "UABP_Weapon_M16_C::AnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960 offset is not 880");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15_Offset == 0x8c8, "UABP_Weapon_M16_C::AnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15 offset is not 8c8");
	auto constexpr UABP_Weapon_M16_C_AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A_Offset = offsetof(UABP_Weapon_M16_C, AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A);
	static_assert(UABP_Weapon_M16_C_AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A_Offset == 0x910, "UABP_Weapon_M16_C::AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A offset is not 910");
	auto constexpr UABP_Weapon_M16_C_ADSOpticsAlpha_Offset = offsetof(UABP_Weapon_M16_C, ADSOpticsAlpha);
	static_assert(UABP_Weapon_M16_C_ADSOpticsAlpha_Offset == 0x9c8, "UABP_Weapon_M16_C::ADSOpticsAlpha offset is not 9c8");
	auto constexpr UABP_Weapon_M16_C_Gun_Offset = offsetof(UABP_Weapon_M16_C, Gun);
	static_assert(UABP_Weapon_M16_C_Gun_Offset == 0x9d0, "UABP_Weapon_M16_C::Gun offset is not 9d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
