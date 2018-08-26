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

struct alignas(1) UBoat_PG117_Animation_C // Size: 0x6A0
	: public UAnimInstance // Size: 0x380
{
private:
	typedef UBoat_PG117_Animation_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115725); // id32("AnimBlueprintGeneratedClass Boat_PG117_Animation.Boat_PG117_Animation_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x380 Size: 0x8 - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21; /* Ofs: 0x388 Size: 0x48 - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.AnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21 */
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8; /* Ofs: 0x3D0 Size: 0x30 - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.AnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE; /* Ofs: 0x400 Size: 0xB8 - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F; /* Ofs: 0x4B8 Size: 0x48 - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.AnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034; /* Ofs: 0x500 Size: 0xB8 - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9; /* Ofs: 0x5B8 Size: 0xB8 - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9 */
	float SteeringWheelAngle; /* Ofs: 0x670 Size: 0x4 - FloatProperty Boat_PG117_Animation.Boat_PG117_Animation_C.SteeringWheelAngle */
	float RudderAngle; /* Ofs: 0x674 Size: 0x4 - FloatProperty Boat_PG117_Animation.Boat_PG117_Animation_C.RudderAngle */
	float PropellerRotation; /* Ofs: 0x678 Size: 0x4 - FloatProperty Boat_PG117_Animation.Boat_PG117_Animation_C.PropellerRotation */
	FRotator RudderRot; /* Ofs: 0x67C Size: 0xC - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.RudderRot */
	FRotator SteeringWheelRot; /* Ofs: 0x688 Size: 0xC - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.SteeringWheelRot */
	FRotator PropellerRot; /* Ofs: 0x694 Size: 0xC - StructProperty Boat_PG117_Animation.Boat_PG117_Animation_C.PropellerRot */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x380, value); }
	inline bool SetAnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x388, value); }
	inline bool SetAnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8(t_structHelper inst, FAnimNode_MeshSpaceRefPose value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetAnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x400, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetAnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x500, value); }
	inline bool SetAnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetSteeringWheelAngle(t_structHelper inst, float value) { inst.WriteOffset(0x670, value); }
	inline bool SetRudderAngle(t_structHelper inst, float value) { inst.WriteOffset(0x674, value); }
	inline bool SetPropellerRotation(t_structHelper inst, float value) { inst.WriteOffset(0x678, value); }
	inline bool SetRudderRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x67C, value); }
	inline bool SetSteeringWheelRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x688, value); }
	inline bool SetPropellerRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x694, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoat_PG117_Animation_C = sizeof(UBoat_PG117_Animation_C); // 1696
    static_assert(sizeof(UBoat_PG117_Animation_C) == 0x6A0, "Size of UBoat_PG117_Animation_C is not correct.");
	auto constexpr UBoat_PG117_Animation_C_UberGraphFrame_Offset = offsetof(UBoat_PG117_Animation_C, UberGraphFrame);
	static_assert(UBoat_PG117_Animation_C_UberGraphFrame_Offset == 0x380, "UBoat_PG117_Animation_C::UberGraphFrame offset is not 380");
	auto constexpr UBoat_PG117_Animation_C_AnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21_Offset = offsetof(UBoat_PG117_Animation_C, AnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21);
	static_assert(UBoat_PG117_Animation_C_AnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21_Offset == 0x388, "UBoat_PG117_Animation_C::AnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21 offset is not 388");
	auto constexpr UBoat_PG117_Animation_C_AnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8_Offset = offsetof(UBoat_PG117_Animation_C, AnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8);
	static_assert(UBoat_PG117_Animation_C_AnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8_Offset == 0x3d0, "UBoat_PG117_Animation_C::AnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8 offset is not 3d0");
	auto constexpr UBoat_PG117_Animation_C_AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE_Offset = offsetof(UBoat_PG117_Animation_C, AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE);
	static_assert(UBoat_PG117_Animation_C_AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE_Offset == 0x400, "UBoat_PG117_Animation_C::AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE offset is not 400");
	auto constexpr UBoat_PG117_Animation_C_AnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F_Offset = offsetof(UBoat_PG117_Animation_C, AnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F);
	static_assert(UBoat_PG117_Animation_C_AnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F_Offset == 0x4b8, "UBoat_PG117_Animation_C::AnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F offset is not 4b8");
	auto constexpr UBoat_PG117_Animation_C_AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034_Offset = offsetof(UBoat_PG117_Animation_C, AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034);
	static_assert(UBoat_PG117_Animation_C_AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034_Offset == 0x500, "UBoat_PG117_Animation_C::AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034 offset is not 500");
	auto constexpr UBoat_PG117_Animation_C_AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9_Offset = offsetof(UBoat_PG117_Animation_C, AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9);
	static_assert(UBoat_PG117_Animation_C_AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9_Offset == 0x5b8, "UBoat_PG117_Animation_C::AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9 offset is not 5b8");
	auto constexpr UBoat_PG117_Animation_C_SteeringWheelAngle_Offset = offsetof(UBoat_PG117_Animation_C, SteeringWheelAngle);
	static_assert(UBoat_PG117_Animation_C_SteeringWheelAngle_Offset == 0x670, "UBoat_PG117_Animation_C::SteeringWheelAngle offset is not 670");
	auto constexpr UBoat_PG117_Animation_C_RudderAngle_Offset = offsetof(UBoat_PG117_Animation_C, RudderAngle);
	static_assert(UBoat_PG117_Animation_C_RudderAngle_Offset == 0x674, "UBoat_PG117_Animation_C::RudderAngle offset is not 674");
	auto constexpr UBoat_PG117_Animation_C_PropellerRotation_Offset = offsetof(UBoat_PG117_Animation_C, PropellerRotation);
	static_assert(UBoat_PG117_Animation_C_PropellerRotation_Offset == 0x678, "UBoat_PG117_Animation_C::PropellerRotation offset is not 678");
	auto constexpr UBoat_PG117_Animation_C_RudderRot_Offset = offsetof(UBoat_PG117_Animation_C, RudderRot);
	static_assert(UBoat_PG117_Animation_C_RudderRot_Offset == 0x67c, "UBoat_PG117_Animation_C::RudderRot offset is not 67c");
	auto constexpr UBoat_PG117_Animation_C_SteeringWheelRot_Offset = offsetof(UBoat_PG117_Animation_C, SteeringWheelRot);
	static_assert(UBoat_PG117_Animation_C_SteeringWheelRot_Offset == 0x688, "UBoat_PG117_Animation_C::SteeringWheelRot offset is not 688");
	auto constexpr UBoat_PG117_Animation_C_PropellerRot_Offset = offsetof(UBoat_PG117_Animation_C, PropellerRot);
	static_assert(UBoat_PG117_Animation_C_PropellerRot_Offset == 0x694, "UBoat_PG117_Animation_C::PropellerRot offset is not 694");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
