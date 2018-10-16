#pragma once
#include "UPathFollowingComponent.hpp"
#include "FVector.hpp"
#include "FNavAvoidanceMask.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCrowdFollowingComponent // Size: 0x4F0
	: public UPathFollowingComponent // Size: 0x4A0
{
private:
	typedef UCrowdFollowingComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(657); // id32("Class AIModule.CrowdFollowingComponent")
		return ptr;
	}
	FVector CrowdAgentMoveDirection; /* Ofs: 0x4A0 Size: 0xC - StructProperty AIModule.CrowdFollowingComponent.CrowdAgentMoveDirection */
	uint8_t UnknownData4AC[0x4];
	ExternalPtr<struct UCharacterMovementComponent> CharacterMovement; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty AIModule.CrowdFollowingComponent.CharacterMovement */
	FNavAvoidanceMask AvoidanceGroup; /* Ofs: 0x4B8 Size: 0x4 - StructProperty AIModule.CrowdFollowingComponent.AvoidanceGroup */
	FNavAvoidanceMask GroupsToAvoid; /* Ofs: 0x4BC Size: 0x4 - StructProperty AIModule.CrowdFollowingComponent.GroupsToAvoid */
	FNavAvoidanceMask GroupsToIgnore; /* Ofs: 0x4C0 Size: 0x4 - StructProperty AIModule.CrowdFollowingComponent.GroupsToIgnore */
	uint8_t UnknownData4C4[0x2C];


	inline bool SetCrowdAgentMoveDirection(t_structHelper inst, FVector value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetCharacterMovement(t_structHelper inst, ExternalPtr<struct UCharacterMovementComponent> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetAvoidanceGroup(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetGroupsToAvoid(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x4BC, value); }
	inline bool SetGroupsToIgnore(t_structHelper inst, FNavAvoidanceMask value) { inst.WriteOffset(0x4C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCrowdFollowingComponent = sizeof(UCrowdFollowingComponent); // 1264
    static_assert(sizeof(UCrowdFollowingComponent) == 0x4F0, "Size of UCrowdFollowingComponent is not correct.");
	auto constexpr UCrowdFollowingComponent_CrowdAgentMoveDirection_Offset = offsetof(UCrowdFollowingComponent, CrowdAgentMoveDirection);
	static_assert(UCrowdFollowingComponent_CrowdAgentMoveDirection_Offset == 0x4a0, "UCrowdFollowingComponent::CrowdAgentMoveDirection offset is not 4a0");
	auto constexpr UCrowdFollowingComponent_CharacterMovement_Offset = offsetof(UCrowdFollowingComponent, CharacterMovement);
	static_assert(UCrowdFollowingComponent_CharacterMovement_Offset == 0x4b0, "UCrowdFollowingComponent::CharacterMovement offset is not 4b0");
	auto constexpr UCrowdFollowingComponent_AvoidanceGroup_Offset = offsetof(UCrowdFollowingComponent, AvoidanceGroup);
	static_assert(UCrowdFollowingComponent_AvoidanceGroup_Offset == 0x4b8, "UCrowdFollowingComponent::AvoidanceGroup offset is not 4b8");
	auto constexpr UCrowdFollowingComponent_GroupsToAvoid_Offset = offsetof(UCrowdFollowingComponent, GroupsToAvoid);
	static_assert(UCrowdFollowingComponent_GroupsToAvoid_Offset == 0x4bc, "UCrowdFollowingComponent::GroupsToAvoid offset is not 4bc");
	auto constexpr UCrowdFollowingComponent_GroupsToIgnore_Offset = offsetof(UCrowdFollowingComponent, GroupsToIgnore);
	static_assert(UCrowdFollowingComponent_GroupsToIgnore_Offset == 0x4c0, "UCrowdFollowingComponent::GroupsToIgnore offset is not 4c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
