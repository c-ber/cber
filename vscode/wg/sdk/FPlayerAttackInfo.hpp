#pragma once
#include "EDamageReason.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlayerAttackInfo // Size: 0x58
{
public:
    int32_t Shots; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.PlayerAttackInfo.Shots */
    uint8_t UnknownData4[0x4];
    TMap<EDamageReason, struct FPlayerHitInfo> HitInfoMap; /* Ofs: 0x8 Size: 0x50 MapProperty TslGame.PlayerAttackInfo.HitInfoMap */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlayerAttackInfo = sizeof(FPlayerAttackInfo); // 88
    static_assert(sizeof(FPlayerAttackInfo) == 0x58, "Size of FPlayerAttackInfo is not correct.");
	auto constexpr FPlayerAttackInfo_Shots_Offset = offsetof(FPlayerAttackInfo, Shots);
	static_assert(FPlayerAttackInfo_Shots_Offset == 0x0, "FPlayerAttackInfo::Shots offset is not 0");
	auto constexpr FPlayerAttackInfo_HitInfoMap_Offset = offsetof(FPlayerAttackInfo, HitInfoMap);
	static_assert(FPlayerAttackInfo_HitInfoMap_Offset == 0x8, "FPlayerAttackInfo::HitInfoMap offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
