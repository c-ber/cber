#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTeamInfo // Size: 0x28
{
public:
    FString TeamName; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.TeamInfo.TeamName */
    ExternalPtr<struct UTexture2D> TeamIcon; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.TeamInfo.TeamIcon */
    FLinearColor TeamColor; /* Ofs: 0x18 Size: 0x10 StructProperty TslGame.TeamInfo.TeamColor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTeamInfo = sizeof(FTeamInfo); // 40
    static_assert(sizeof(FTeamInfo) == 0x28, "Size of FTeamInfo is not correct.");
	auto constexpr FTeamInfo_TeamName_Offset = offsetof(FTeamInfo, TeamName);
	static_assert(FTeamInfo_TeamName_Offset == 0x0, "FTeamInfo::TeamName offset is not 0");
	auto constexpr FTeamInfo_TeamIcon_Offset = offsetof(FTeamInfo, TeamIcon);
	static_assert(FTeamInfo_TeamIcon_Offset == 0x10, "FTeamInfo::TeamIcon offset is not 10");
	auto constexpr FTeamInfo_TeamColor_Offset = offsetof(FTeamInfo, TeamColor);
	static_assert(FTeamInfo_TeamColor_Offset == 0x18, "FTeamInfo::TeamColor offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
