#pragma once
#include "UMovementComponent.hpp"
#include "FNavAgentProperties.hpp"
#include "FMovementProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavMovementComponent // Size: 0x270
	: public UMovementComponent // Size: 0x230
{
private:
	typedef UNavMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1309); // id32("Class Engine.NavMovementComponent")
		return ptr;
	}
	FNavAgentProperties NavAgentProps; /* Ofs: 0x230 Size: 0x20 - StructProperty Engine.NavMovementComponent.NavAgentProps */
	float FixedPathBrakingDistance; /* Ofs: 0x250 Size: 0x4 - FloatProperty Engine.NavMovementComponent.FixedPathBrakingDistance */
	uint8_t boolField254;
	uint8_t UnknownData255[0x3];
	FMovementProperties MovementState; /* Ofs: 0x258 Size: 0x4 - StructProperty Engine.NavMovementComponent.MovementState */
	uint8_t UnknownData25C[0x14];


	inline bool SetNavAgentProps(t_structHelper inst, FNavAgentProperties value) { inst.WriteOffset(0x230, value); }
	inline bool SetFixedPathBrakingDistance(t_structHelper inst, float value) { inst.WriteOffset(0x250, value); }
	inline bool bUpdateNavAgentWithOwnersCollision()
	{
		return boolField254& 0x1;
	}
	inline bool SetbUpdateNavAgentWithOwnersCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x254, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseAccelerationForPaths()
	{
		return boolField254& 0x2;
	}
	inline bool SetbUseAccelerationForPaths(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x254, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseFixedBrakingDistanceForPaths()
	{
		return boolField254& 0x4;
	}
	inline bool SetbUseFixedBrakingDistanceForPaths(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x254, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetMovementState(t_structHelper inst, FMovementProperties value) { inst.WriteOffset(0x258, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavMovementComponent = sizeof(UNavMovementComponent); // 624
    static_assert(sizeof(UNavMovementComponent) == 0x270, "Size of UNavMovementComponent is not correct.");
	auto constexpr UNavMovementComponent_NavAgentProps_Offset = offsetof(UNavMovementComponent, NavAgentProps);
	static_assert(UNavMovementComponent_NavAgentProps_Offset == 0x230, "UNavMovementComponent::NavAgentProps offset is not 230");
	auto constexpr UNavMovementComponent_FixedPathBrakingDistance_Offset = offsetof(UNavMovementComponent, FixedPathBrakingDistance);
	static_assert(UNavMovementComponent_FixedPathBrakingDistance_Offset == 0x250, "UNavMovementComponent::FixedPathBrakingDistance offset is not 250");
	auto constexpr UNavMovementComponent_boolField254_Offset = offsetof(UNavMovementComponent, boolField254);
	static_assert(UNavMovementComponent_boolField254_Offset == 0x254, "UNavMovementComponent::boolField254 offset is not 254");
	auto constexpr UNavMovementComponent_MovementState_Offset = offsetof(UNavMovementComponent, MovementState);
	static_assert(UNavMovementComponent_MovementState_Offset == 0x258, "UNavMovementComponent::MovementState offset is not 258");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
