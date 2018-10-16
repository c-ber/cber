#pragma once
#include "FMovementProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavAgentProperties // Size: 0x20
 : public FMovementProperties // Size: 0x4
{
public:
    float AgentRadius; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.NavAgentProperties.AgentRadius */
    float AgentHeight; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.NavAgentProperties.AgentHeight */
    float AgentStepHeight; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.NavAgentProperties.AgentStepHeight */
    float NavWalkingSearchHeightScale; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.NavAgentProperties.NavWalkingSearchHeightScale */
    uint8_t UnknownData14[0x4];
    ExternalPtr<struct UClass> PreferredNavData; /* Ofs: 0x18 Size: 0x8 ClassProperty Engine.NavAgentProperties.PreferredNavData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavAgentProperties = sizeof(FNavAgentProperties); // 32
    static_assert(sizeof(FNavAgentProperties) == 0x20, "Size of FNavAgentProperties is not correct.");
	auto constexpr FNavAgentProperties_AgentRadius_Offset = offsetof(FNavAgentProperties, AgentRadius);
	static_assert(FNavAgentProperties_AgentRadius_Offset == 0x4, "FNavAgentProperties::AgentRadius offset is not 4");
	auto constexpr FNavAgentProperties_AgentHeight_Offset = offsetof(FNavAgentProperties, AgentHeight);
	static_assert(FNavAgentProperties_AgentHeight_Offset == 0x8, "FNavAgentProperties::AgentHeight offset is not 8");
	auto constexpr FNavAgentProperties_AgentStepHeight_Offset = offsetof(FNavAgentProperties, AgentStepHeight);
	static_assert(FNavAgentProperties_AgentStepHeight_Offset == 0xc, "FNavAgentProperties::AgentStepHeight offset is not c");
	auto constexpr FNavAgentProperties_NavWalkingSearchHeightScale_Offset = offsetof(FNavAgentProperties, NavWalkingSearchHeightScale);
	static_assert(FNavAgentProperties_NavWalkingSearchHeightScale_Offset == 0x10, "FNavAgentProperties::NavWalkingSearchHeightScale offset is not 10");
	auto constexpr FNavAgentProperties_PreferredNavData_Offset = offsetof(FNavAgentProperties, PreferredNavData);
	static_assert(FNavAgentProperties_PreferredNavData_Offset == 0x18, "FNavAgentProperties::PreferredNavData offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
