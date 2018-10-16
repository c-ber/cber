#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslPlayerScores // Size: 0x10
{
public:
    float ScoreByDamage; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.TslPlayerScores.ScoreByDamage */
    float ScoreByKill; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.TslPlayerScores.ScoreByKill */
    float ScoreByRanking; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.TslPlayerScores.ScoreByRanking */
    float ScoreFactor; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.TslPlayerScores.ScoreFactor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslPlayerScores = sizeof(FTslPlayerScores); // 16
    static_assert(sizeof(FTslPlayerScores) == 0x10, "Size of FTslPlayerScores is not correct.");
	auto constexpr FTslPlayerScores_ScoreByDamage_Offset = offsetof(FTslPlayerScores, ScoreByDamage);
	static_assert(FTslPlayerScores_ScoreByDamage_Offset == 0x0, "FTslPlayerScores::ScoreByDamage offset is not 0");
	auto constexpr FTslPlayerScores_ScoreByKill_Offset = offsetof(FTslPlayerScores, ScoreByKill);
	static_assert(FTslPlayerScores_ScoreByKill_Offset == 0x4, "FTslPlayerScores::ScoreByKill offset is not 4");
	auto constexpr FTslPlayerScores_ScoreByRanking_Offset = offsetof(FTslPlayerScores, ScoreByRanking);
	static_assert(FTslPlayerScores_ScoreByRanking_Offset == 0x8, "FTslPlayerScores::ScoreByRanking offset is not 8");
	auto constexpr FTslPlayerScores_ScoreFactor_Offset = offsetof(FTslPlayerScores, ScoreFactor);
	static_assert(FTslPlayerScores_ScoreFactor_Offset == 0xc, "FTslPlayerScores::ScoreFactor offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
