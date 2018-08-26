#pragma once
#include "FColorBlindColorSet.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTeamColorAndIcon // Size: 0x38
{
public:
    FColorBlindColorSet TeamMemberColor; /* Ofs: 0x0 Size: 0x10 StructProperty TslGame.TeamColorAndIcon.TeamMemberColor */
    ExternalPtr<struct UTexture> MarkerIcon; /* Ofs: 0x10 Size: 0x8 ObjectProperty TslGame.TeamColorAndIcon.MarkerIcon */
    ExternalPtr<struct UTexture> PlayerIcon; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.TeamColorAndIcon.PlayerIcon */
    ExternalPtr<struct UTexture> CompassIcon; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.TeamColorAndIcon.CompassIcon */
    ExternalPtr<struct UTexture> IndicatorIcon; /* Ofs: 0x28 Size: 0x8 ObjectProperty TslGame.TeamColorAndIcon.IndicatorIcon */
    ExternalPtr<struct UTexture> MapDeathIcon; /* Ofs: 0x30 Size: 0x8 ObjectProperty TslGame.TeamColorAndIcon.MapDeathIcon */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTeamColorAndIcon = sizeof(FTeamColorAndIcon); // 56
    static_assert(sizeof(FTeamColorAndIcon) == 0x38, "Size of FTeamColorAndIcon is not correct.");
	auto constexpr FTeamColorAndIcon_TeamMemberColor_Offset = offsetof(FTeamColorAndIcon, TeamMemberColor);
	static_assert(FTeamColorAndIcon_TeamMemberColor_Offset == 0x0, "FTeamColorAndIcon::TeamMemberColor offset is not 0");
	auto constexpr FTeamColorAndIcon_MarkerIcon_Offset = offsetof(FTeamColorAndIcon, MarkerIcon);
	static_assert(FTeamColorAndIcon_MarkerIcon_Offset == 0x10, "FTeamColorAndIcon::MarkerIcon offset is not 10");
	auto constexpr FTeamColorAndIcon_PlayerIcon_Offset = offsetof(FTeamColorAndIcon, PlayerIcon);
	static_assert(FTeamColorAndIcon_PlayerIcon_Offset == 0x18, "FTeamColorAndIcon::PlayerIcon offset is not 18");
	auto constexpr FTeamColorAndIcon_CompassIcon_Offset = offsetof(FTeamColorAndIcon, CompassIcon);
	static_assert(FTeamColorAndIcon_CompassIcon_Offset == 0x20, "FTeamColorAndIcon::CompassIcon offset is not 20");
	auto constexpr FTeamColorAndIcon_IndicatorIcon_Offset = offsetof(FTeamColorAndIcon, IndicatorIcon);
	static_assert(FTeamColorAndIcon_IndicatorIcon_Offset == 0x28, "FTeamColorAndIcon::IndicatorIcon offset is not 28");
	auto constexpr FTeamColorAndIcon_MapDeathIcon_Offset = offsetof(FTeamColorAndIcon, MapDeathIcon);
	static_assert(FTeamColorAndIcon_MapDeathIcon_Offset == 0x30, "FTeamColorAndIcon::MapDeathIcon offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
