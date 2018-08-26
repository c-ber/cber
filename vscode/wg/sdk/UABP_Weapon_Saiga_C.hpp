#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_Saiga_C // Size: 0x600
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Saiga_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133198); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Saiga.ABP_Weapon_Saiga_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_7C2D6C3B459FAEFC5E9CA4BE205E510A; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.AnimGraphNode_Root_7C2D6C3B459FAEFC5E9CA4BE205E510A */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_2CFAC9B74031412DC01F24A4EE350778; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.AnimGraphNode_LocalRefPose_2CFAC9B74031412DC01F24A4EE350778 */
	FAnimNode_Slot AnimGraphNode_Slot_CC5186664712D4C59F3AABA80EC8B0DE; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.AnimGraphNode_Slot_CC5186664712D4C59F3AABA80EC8B0DE */
	FAnimNode_Slot AnimGraphNode_Slot_B80D3FAE4774937A895219B5450320E0; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.AnimGraphNode_Slot_B80D3FAE4774937A895219B5450320E0 */
	FAnimNode_Slot AnimGraphNode_Slot_FACECDA04E385A9FC12474ACC63D5CE6; /* Ofs: 0x5A0 Size: 0x60 - StructProperty ABP_Weapon_Saiga.ABP_Weapon_Saiga_C.AnimGraphNode_Slot_FACECDA04E385A9FC12474ACC63D5CE6 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_7C2D6C3B459FAEFC5E9CA4BE205E510A(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_2CFAC9B74031412DC01F24A4EE350778(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_CC5186664712D4C59F3AABA80EC8B0DE(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_B80D3FAE4774937A895219B5450320E0(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_Slot_FACECDA04E385A9FC12474ACC63D5CE6(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x5A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Saiga_C = sizeof(UABP_Weapon_Saiga_C); // 1536
    static_assert(sizeof(UABP_Weapon_Saiga_C) == 0x600, "Size of UABP_Weapon_Saiga_C is not correct.");
	auto constexpr UABP_Weapon_Saiga_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Saiga_C, UberGraphFrame);
	static_assert(UABP_Weapon_Saiga_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Saiga_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Saiga_C_AnimGraphNode_Root_7C2D6C3B459FAEFC5E9CA4BE205E510A_Offset = offsetof(UABP_Weapon_Saiga_C, AnimGraphNode_Root_7C2D6C3B459FAEFC5E9CA4BE205E510A);
	static_assert(UABP_Weapon_Saiga_C_AnimGraphNode_Root_7C2D6C3B459FAEFC5E9CA4BE205E510A_Offset == 0x460, "UABP_Weapon_Saiga_C::AnimGraphNode_Root_7C2D6C3B459FAEFC5E9CA4BE205E510A offset is not 460");
	auto constexpr UABP_Weapon_Saiga_C_AnimGraphNode_LocalRefPose_2CFAC9B74031412DC01F24A4EE350778_Offset = offsetof(UABP_Weapon_Saiga_C, AnimGraphNode_LocalRefPose_2CFAC9B74031412DC01F24A4EE350778);
	static_assert(UABP_Weapon_Saiga_C_AnimGraphNode_LocalRefPose_2CFAC9B74031412DC01F24A4EE350778_Offset == 0x4a8, "UABP_Weapon_Saiga_C::AnimGraphNode_LocalRefPose_2CFAC9B74031412DC01F24A4EE350778 offset is not 4a8");
	auto constexpr UABP_Weapon_Saiga_C_AnimGraphNode_Slot_CC5186664712D4C59F3AABA80EC8B0DE_Offset = offsetof(UABP_Weapon_Saiga_C, AnimGraphNode_Slot_CC5186664712D4C59F3AABA80EC8B0DE);
	static_assert(UABP_Weapon_Saiga_C_AnimGraphNode_Slot_CC5186664712D4C59F3AABA80EC8B0DE_Offset == 0x4e0, "UABP_Weapon_Saiga_C::AnimGraphNode_Slot_CC5186664712D4C59F3AABA80EC8B0DE offset is not 4e0");
	auto constexpr UABP_Weapon_Saiga_C_AnimGraphNode_Slot_B80D3FAE4774937A895219B5450320E0_Offset = offsetof(UABP_Weapon_Saiga_C, AnimGraphNode_Slot_B80D3FAE4774937A895219B5450320E0);
	static_assert(UABP_Weapon_Saiga_C_AnimGraphNode_Slot_B80D3FAE4774937A895219B5450320E0_Offset == 0x540, "UABP_Weapon_Saiga_C::AnimGraphNode_Slot_B80D3FAE4774937A895219B5450320E0 offset is not 540");
	auto constexpr UABP_Weapon_Saiga_C_AnimGraphNode_Slot_FACECDA04E385A9FC12474ACC63D5CE6_Offset = offsetof(UABP_Weapon_Saiga_C, AnimGraphNode_Slot_FACECDA04E385A9FC12474ACC63D5CE6);
	static_assert(UABP_Weapon_Saiga_C_AnimGraphNode_Slot_FACECDA04E385A9FC12474ACC63D5CE6_Offset == 0x5a0, "UABP_Weapon_Saiga_C::AnimGraphNode_Slot_FACECDA04E385A9FC12474ACC63D5CE6 offset is not 5a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
