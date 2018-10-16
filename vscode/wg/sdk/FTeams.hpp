#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTeams // Size: 0x18
{
public:
    int32_t TeamNum; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.Teams.TeamNum */
    uint8_t UnknownData4[0x4];
    TArray<ExternalPtr<struct UTeam>> Members; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.Teams.Members */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTeams = sizeof(FTeams); // 24
    static_assert(sizeof(FTeams) == 0x18, "Size of FTeams is not correct.");
	auto constexpr FTeams_TeamNum_Offset = offsetof(FTeams, TeamNum);
	static_assert(FTeams_TeamNum_Offset == 0x0, "FTeams::TeamNum offset is not 0");
	auto constexpr FTeams_Members_Offset = offsetof(FTeams, Members);
	static_assert(FTeams_Members_Offset == 0x8, "FTeams::Members offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
