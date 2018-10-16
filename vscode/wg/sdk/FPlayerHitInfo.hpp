#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlayerHitInfo // Size: 0xC
{
public:
    int32_t Hits; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.PlayerHitInfo.Hits */
    float Damages; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.PlayerHitInfo.Damages */
    int32_t Kills; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.PlayerHitInfo.Kills */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlayerHitInfo = sizeof(FPlayerHitInfo); // 12
    static_assert(sizeof(FPlayerHitInfo) == 0xC, "Size of FPlayerHitInfo is not correct.");
	auto constexpr FPlayerHitInfo_Hits_Offset = offsetof(FPlayerHitInfo, Hits);
	static_assert(FPlayerHitInfo_Hits_Offset == 0x0, "FPlayerHitInfo::Hits offset is not 0");
	auto constexpr FPlayerHitInfo_Damages_Offset = offsetof(FPlayerHitInfo, Damages);
	static_assert(FPlayerHitInfo_Damages_Offset == 0x4, "FPlayerHitInfo::Damages offset is not 4");
	auto constexpr FPlayerHitInfo_Kills_Offset = offsetof(FPlayerHitInfo, Kills);
	static_assert(FPlayerHitInfo_Kills_Offset == 0x8, "FPlayerHitInfo::Kills offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
