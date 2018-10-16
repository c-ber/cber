#pragma once
#include "UAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_MeshSpaceRefPose.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAquaRail_Animation_C // Size: 0x6A0
	: public UAnimInstance // Size: 0x380
{
private:
	typedef UAquaRail_Animation_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116042); // id32("AnimBlueprintGeneratedClass AquaRail_Animation.AquaRail_Animation_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x380 Size: 0x8 - StructProperty AquaRail_Animation.AquaRail_Animation_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_A7671C744F5BB133E82CEB93D2D4A69C; /* Ofs: 0x388 Size: 0x48 - StructProperty AquaRail_Animation.AquaRail_Animation_C.AnimGraphNode_Root_A7671C744F5BB133E82CEB93D2D4A69C */
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_16D8E6014B866D3FFD00428E4A4A5EA0; /* Ofs: 0x3D0 Size: 0x30 - StructProperty AquaRail_Animation.AquaRail_Animation_C.AnimGraphNode_MeshRefPose_16D8E6014B866D3FFD00428E4A4A5EA0 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B; /* Ofs: 0x400 Size: 0xB8 - StructProperty AquaRail_Animation.AquaRail_Animation_C.AnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9B6105AA4C65900693D885866D58C999; /* Ofs: 0x4B8 Size: 0x48 - StructProperty AquaRail_Animation.AquaRail_Animation_C.AnimGraphNode_ComponentToLocalSpace_9B6105AA4C65900693D885866D58C999 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D; /* Ofs: 0x500 Size: 0xB8 - StructProperty AquaRail_Animation.AquaRail_Animation_C.AnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809; /* Ofs: 0x5B8 Size: 0xB8 - StructProperty AquaRail_Animation.AquaRail_Animation_C.AnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809 */
	float SteeringWheelAngle; /* Ofs: 0x670 Size: 0x4 - FloatProperty AquaRail_Animation.AquaRail_Animation_C.SteeringWheelAngle */
	float RudderAngle; /* Ofs: 0x674 Size: 0x4 - FloatProperty AquaRail_Animation.AquaRail_Animation_C.RudderAngle */
	float PropellerRotation; /* Ofs: 0x678 Size: 0x4 - FloatProperty AquaRail_Animation.AquaRail_Animation_C.PropellerRotation */
	FRotator RudderRot; /* Ofs: 0x67C Size: 0xC - StructProperty AquaRail_Animation.AquaRail_Animation_C.RudderRot */
	FRotator SteeringWheelRot; /* Ofs: 0x688 Size: 0xC - StructProperty AquaRail_Animation.AquaRail_Animation_C.SteeringWheelRot */
	FRotator PropellerRot; /* Ofs: 0x694 Size: 0xC - StructProperty AquaRail_Animation.AquaRail_Animation_C.PropellerRot */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x380, value); }
	inline bool SetAnimGraphNode_Root_A7671C744F5BB133E82CEB93D2D4A69C(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x388, value); }
	inline bool SetAnimGraphNode_MeshRefPose_16D8E6014B866D3FFD00428E4A4A5EA0(t_structHelper inst, FAnimNode_MeshSpaceRefPose value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetAnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x400, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_9B6105AA4C65900693D885866D58C999(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetAnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x500, value); }
	inline bool SetAnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetSteeringWheelAngle(t_structHelper inst, float value) { inst.WriteOffset(0x670, value); }
	inline bool SetRudderAngle(t_structHelper inst, float value) { inst.WriteOffset(0x674, value); }
	inline bool SetPropellerRotation(t_structHelper inst, float value) { inst.WriteOffset(0x678, value); }
	inline bool SetRudderRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x67C, value); }
	inline bool SetSteeringWheelRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x688, value); }
	inline bool SetPropellerRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x694, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAquaRail_Animation_C = sizeof(UAquaRail_Animation_C); // 1696
    static_assert(sizeof(UAquaRail_Animation_C) == 0x6A0, "Size of UAquaRail_Animation_C is not correct.");
	auto constexpr UAquaRail_Animation_C_UberGraphFrame_Offset = offsetof(UAquaRail_Animation_C, UberGraphFrame);
	static_assert(UAquaRail_Animation_C_UberGraphFrame_Offset == 0x380, "UAquaRail_Animation_C::UberGraphFrame offset is not 380");
	auto constexpr UAquaRail_Animation_C_AnimGraphNode_Root_A7671C744F5BB133E82CEB93D2D4A69C_Offset = offsetof(UAquaRail_Animation_C, AnimGraphNode_Root_A7671C744F5BB133E82CEB93D2D4A69C);
	static_assert(UAquaRail_Animation_C_AnimGraphNode_Root_A7671C744F5BB133E82CEB93D2D4A69C_Offset == 0x388, "UAquaRail_Animation_C::AnimGraphNode_Root_A7671C744F5BB133E82CEB93D2D4A69C offset is not 388");
	auto constexpr UAquaRail_Animation_C_AnimGraphNode_MeshRefPose_16D8E6014B866D3FFD00428E4A4A5EA0_Offset = offsetof(UAquaRail_Animation_C, AnimGraphNode_MeshRefPose_16D8E6014B866D3FFD00428E4A4A5EA0);
	static_assert(UAquaRail_Animation_C_AnimGraphNode_MeshRefPose_16D8E6014B866D3FFD00428E4A4A5EA0_Offset == 0x3d0, "UAquaRail_Animation_C::AnimGraphNode_MeshRefPose_16D8E6014B866D3FFD00428E4A4A5EA0 offset is not 3d0");
	auto constexpr UAquaRail_Animation_C_AnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B_Offset = offsetof(UAquaRail_Animation_C, AnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B);
	static_assert(UAquaRail_Animation_C_AnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B_Offset == 0x400, "UAquaRail_Animation_C::AnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B offset is not 400");
	auto constexpr UAquaRail_Animation_C_AnimGraphNode_ComponentToLocalSpace_9B6105AA4C65900693D885866D58C999_Offset = offsetof(UAquaRail_Animation_C, AnimGraphNode_ComponentToLocalSpace_9B6105AA4C65900693D885866D58C999);
	static_assert(UAquaRail_Animation_C_AnimGraphNode_ComponentToLocalSpace_9B6105AA4C65900693D885866D58C999_Offset == 0x4b8, "UAquaRail_Animation_C::AnimGraphNode_ComponentToLocalSpace_9B6105AA4C65900693D885866D58C999 offset is not 4b8");
	auto constexpr UAquaRail_Animation_C_AnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D_Offset = offsetof(UAquaRail_Animation_C, AnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D);
	static_assert(UAquaRail_Animation_C_AnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D_Offset == 0x500, "UAquaRail_Animation_C::AnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D offset is not 500");
	auto constexpr UAquaRail_Animation_C_AnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809_Offset = offsetof(UAquaRail_Animation_C, AnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809);
	static_assert(UAquaRail_Animation_C_AnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809_Offset == 0x5b8, "UAquaRail_Animation_C::AnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809 offset is not 5b8");
	auto constexpr UAquaRail_Animation_C_SteeringWheelAngle_Offset = offsetof(UAquaRail_Animation_C, SteeringWheelAngle);
	static_assert(UAquaRail_Animation_C_SteeringWheelAngle_Offset == 0x670, "UAquaRail_Animation_C::SteeringWheelAngle offset is not 670");
	auto constexpr UAquaRail_Animation_C_RudderAngle_Offset = offsetof(UAquaRail_Animation_C, RudderAngle);
	static_assert(UAquaRail_Animation_C_RudderAngle_Offset == 0x674, "UAquaRail_Animation_C::RudderAngle offset is not 674");
	auto constexpr UAquaRail_Animation_C_PropellerRotation_Offset = offsetof(UAquaRail_Animation_C, PropellerRotation);
	static_assert(UAquaRail_Animation_C_PropellerRotation_Offset == 0x678, "UAquaRail_Animation_C::PropellerRotation offset is not 678");
	auto constexpr UAquaRail_Animation_C_RudderRot_Offset = offsetof(UAquaRail_Animation_C, RudderRot);
	static_assert(UAquaRail_Animation_C_RudderRot_Offset == 0x67c, "UAquaRail_Animation_C::RudderRot offset is not 67c");
	auto constexpr UAquaRail_Animation_C_SteeringWheelRot_Offset = offsetof(UAquaRail_Animation_C, SteeringWheelRot);
	static_assert(UAquaRail_Animation_C_SteeringWheelRot_Offset == 0x688, "UAquaRail_Animation_C::SteeringWheelRot offset is not 688");
	auto constexpr UAquaRail_Animation_C_PropellerRot_Offset = offsetof(UAquaRail_Animation_C, PropellerRot);
	static_assert(UAquaRail_Animation_C_PropellerRot_Offset == 0x694, "UAquaRail_Animation_C::PropellerRot offset is not 694");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
