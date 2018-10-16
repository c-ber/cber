#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FVector.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_RigidBody // Size: 0x210
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    ExternalPtr<struct UPhysicsAsset> OverridePhysicsAsset; /* Ofs: 0x70 Size: 0x8 ObjectProperty ImmediatePhysics.AnimNode_RigidBody.OverridePhysicsAsset */
    FVector OverrideWorldGravity; /* Ofs: 0x78 Size: 0xC StructProperty ImmediatePhysics.AnimNode_RigidBody.OverrideWorldGravity */
    TEnumAsByte<enum ECollisionChannel> OverlapChannel; /* Ofs: 0x84 Size: 0x1 ByteProperty ImmediatePhysics.AnimNode_RigidBody.OverlapChannel */
    bool bEnableWorldGeometry; /* Ofs: 0x85 Size: 0x1 BitMask: 01 BoolProperty ImmediatePhysics.AnimNode_RigidBody.bEnableWorldGeometry */
    bool bComponentSpaceSimulation; /* Ofs: 0x86 Size: 0x1 BitMask: 01 BoolProperty ImmediatePhysics.AnimNode_RigidBody.bComponentSpaceSimulation */
    bool bOverrideWorldGravity; /* Ofs: 0x87 Size: 0x1 BitMask: 01 BoolProperty ImmediatePhysics.AnimNode_RigidBody.bOverrideWorldGravity */
    float CachedBoundsScale; /* Ofs: 0x88 Size: 0x4 FloatProperty ImmediatePhysics.AnimNode_RigidBody.CachedBoundsScale */
    uint8_t UnknownData8C[0x184];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_RigidBody = sizeof(FAnimNode_RigidBody); // 528
    static_assert(sizeof(FAnimNode_RigidBody) == 0x210, "Size of FAnimNode_RigidBody is not correct.");
	auto constexpr FAnimNode_RigidBody_OverridePhysicsAsset_Offset = offsetof(FAnimNode_RigidBody, OverridePhysicsAsset);
	static_assert(FAnimNode_RigidBody_OverridePhysicsAsset_Offset == 0x70, "FAnimNode_RigidBody::OverridePhysicsAsset offset is not 70");
	auto constexpr FAnimNode_RigidBody_OverrideWorldGravity_Offset = offsetof(FAnimNode_RigidBody, OverrideWorldGravity);
	static_assert(FAnimNode_RigidBody_OverrideWorldGravity_Offset == 0x78, "FAnimNode_RigidBody::OverrideWorldGravity offset is not 78");
	auto constexpr FAnimNode_RigidBody_OverlapChannel_Offset = offsetof(FAnimNode_RigidBody, OverlapChannel);
	static_assert(FAnimNode_RigidBody_OverlapChannel_Offset == 0x84, "FAnimNode_RigidBody::OverlapChannel offset is not 84");
	auto constexpr FAnimNode_RigidBody_CachedBoundsScale_Offset = offsetof(FAnimNode_RigidBody, CachedBoundsScale);
	static_assert(FAnimNode_RigidBody_CachedBoundsScale_Offset == 0x88, "FAnimNode_RigidBody::CachedBoundsScale offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
