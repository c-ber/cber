#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerPosition // Size: 0xB8
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogPlayerPosition.Character */
    float ElapsedTime; /* Ofs: 0xA0 Size: 0x4 FloatProperty TslGame.WuLogPlayerPosition.ElapsedTime */
    int32_t NumAlivePlayers; /* Ofs: 0xA4 Size: 0x4 IntProperty TslGame.WuLogPlayerPosition.NumAlivePlayers */
    float ClientFPS; /* Ofs: 0xA8 Size: 0x4 FloatProperty TslGame.WuLogPlayerPosition.ClientFPS */
    int32_t Under30FPS; /* Ofs: 0xAC Size: 0x4 IntProperty TslGame.WuLogPlayerPosition.Under30FPS */
    int32_t Under60FPS; /* Ofs: 0xB0 Size: 0x4 IntProperty TslGame.WuLogPlayerPosition.Under60FPS */
    uint8_t UnknownDataB4[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerPosition = sizeof(FWuLogPlayerPosition); // 184
    static_assert(sizeof(FWuLogPlayerPosition) == 0xB8, "Size of FWuLogPlayerPosition is not correct.");
	auto constexpr FWuLogPlayerPosition_Character_Offset = offsetof(FWuLogPlayerPosition, Character);
	static_assert(FWuLogPlayerPosition_Character_Offset == 0x58, "FWuLogPlayerPosition::Character offset is not 58");
	auto constexpr FWuLogPlayerPosition_ElapsedTime_Offset = offsetof(FWuLogPlayerPosition, ElapsedTime);
	static_assert(FWuLogPlayerPosition_ElapsedTime_Offset == 0xa0, "FWuLogPlayerPosition::ElapsedTime offset is not a0");
	auto constexpr FWuLogPlayerPosition_NumAlivePlayers_Offset = offsetof(FWuLogPlayerPosition, NumAlivePlayers);
	static_assert(FWuLogPlayerPosition_NumAlivePlayers_Offset == 0xa4, "FWuLogPlayerPosition::NumAlivePlayers offset is not a4");
	auto constexpr FWuLogPlayerPosition_ClientFPS_Offset = offsetof(FWuLogPlayerPosition, ClientFPS);
	static_assert(FWuLogPlayerPosition_ClientFPS_Offset == 0xa8, "FWuLogPlayerPosition::ClientFPS offset is not a8");
	auto constexpr FWuLogPlayerPosition_Under30FPS_Offset = offsetof(FWuLogPlayerPosition, Under30FPS);
	static_assert(FWuLogPlayerPosition_Under30FPS_Offset == 0xac, "FWuLogPlayerPosition::Under30FPS offset is not ac");
	auto constexpr FWuLogPlayerPosition_Under60FPS_Offset = offsetof(FWuLogPlayerPosition, Under60FPS);
	static_assert(FWuLogPlayerPosition_Under60FPS_Offset == 0xb0, "FWuLogPlayerPosition::Under60FPS offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
