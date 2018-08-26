#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuMatchRating // Size: 0x10
{
public:
    int32_t Rating; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.WuMatchRating.Rating */
    int32_t WinPoints; /* Ofs: 0x4 Size: 0x4 IntProperty TslGame.WuMatchRating.WinPoints */
    int32_t KillPoints; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.WuMatchRating.KillPoints */
    int32_t MMR; /* Ofs: 0xC Size: 0x4 IntProperty TslGame.WuMatchRating.MMR */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuMatchRating = sizeof(FWuMatchRating); // 16
    static_assert(sizeof(FWuMatchRating) == 0x10, "Size of FWuMatchRating is not correct.");
	auto constexpr FWuMatchRating_Rating_Offset = offsetof(FWuMatchRating, Rating);
	static_assert(FWuMatchRating_Rating_Offset == 0x0, "FWuMatchRating::Rating offset is not 0");
	auto constexpr FWuMatchRating_WinPoints_Offset = offsetof(FWuMatchRating, WinPoints);
	static_assert(FWuMatchRating_WinPoints_Offset == 0x4, "FWuMatchRating::WinPoints offset is not 4");
	auto constexpr FWuMatchRating_KillPoints_Offset = offsetof(FWuMatchRating, KillPoints);
	static_assert(FWuMatchRating_KillPoints_Offset == 0x8, "FWuMatchRating::KillPoints offset is not 8");
	auto constexpr FWuMatchRating_MMR_Offset = offsetof(FWuMatchRating, MMR);
	static_assert(FWuMatchRating_MMR_Offset == 0xc, "FWuMatchRating::MMR offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
