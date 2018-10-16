#pragma once
#include "FLogBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogMatchStart // Size: 0xB0
 : public FLogBase // Size: 0x58
{
public:
    FString MapName; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.WuLogMatchStart.MapName */
    FString WeatherId; /* Ofs: 0x68 Size: 0x10 StrProperty TslGame.WuLogMatchStart.WeatherId */
    TArray<struct FWuLogCharacter> Characters; /* Ofs: 0x78 Size: 0x10 ArrayProperty TslGame.WuLogMatchStart.Characters */
    FString CameraViewBehaviour; /* Ofs: 0x88 Size: 0x10 StrProperty TslGame.WuLogMatchStart.CameraViewBehaviour */
    int32_t TeamSize; /* Ofs: 0x98 Size: 0x4 IntProperty TslGame.WuLogMatchStart.TeamSize */
    uint8_t UnknownData9C[0x4];
    FString BlueZoneCustomOptions; /* Ofs: 0xA0 Size: 0x10 StrProperty TslGame.WuLogMatchStart.BlueZoneCustomOptions */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogMatchStart = sizeof(FWuLogMatchStart); // 176
    static_assert(sizeof(FWuLogMatchStart) == 0xB0, "Size of FWuLogMatchStart is not correct.");
	auto constexpr FWuLogMatchStart_MapName_Offset = offsetof(FWuLogMatchStart, MapName);
	static_assert(FWuLogMatchStart_MapName_Offset == 0x58, "FWuLogMatchStart::MapName offset is not 58");
	auto constexpr FWuLogMatchStart_WeatherId_Offset = offsetof(FWuLogMatchStart, WeatherId);
	static_assert(FWuLogMatchStart_WeatherId_Offset == 0x68, "FWuLogMatchStart::WeatherId offset is not 68");
	auto constexpr FWuLogMatchStart_Characters_Offset = offsetof(FWuLogMatchStart, Characters);
	static_assert(FWuLogMatchStart_Characters_Offset == 0x78, "FWuLogMatchStart::Characters offset is not 78");
	auto constexpr FWuLogMatchStart_CameraViewBehaviour_Offset = offsetof(FWuLogMatchStart, CameraViewBehaviour);
	static_assert(FWuLogMatchStart_CameraViewBehaviour_Offset == 0x88, "FWuLogMatchStart::CameraViewBehaviour offset is not 88");
	auto constexpr FWuLogMatchStart_TeamSize_Offset = offsetof(FWuLogMatchStart, TeamSize);
	static_assert(FWuLogMatchStart_TeamSize_Offset == 0x98, "FWuLogMatchStart::TeamSize offset is not 98");
	auto constexpr FWuLogMatchStart_BlueZoneCustomOptions_Offset = offsetof(FWuLogMatchStart, BlueZoneCustomOptions);
	static_assert(FWuLogMatchStart_BlueZoneCustomOptions_Offset == 0xa0, "FWuLogMatchStart::BlueZoneCustomOptions offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
