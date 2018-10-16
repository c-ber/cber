#pragma once
#include "FLogBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogMatchDefinition // Size: 0x88
 : public FLogBase // Size: 0x58
{
public:
    FString MatchId; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.WuLogMatchDefinition.MatchId */
    FString PingQuality; /* Ofs: 0x68 Size: 0x10 StrProperty TslGame.WuLogMatchDefinition.PingQuality */
    TArray<struct FWuLogCharacterRating> Ratings; /* Ofs: 0x78 Size: 0x10 ArrayProperty TslGame.WuLogMatchDefinition.Ratings */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogMatchDefinition = sizeof(FWuLogMatchDefinition); // 136
    static_assert(sizeof(FWuLogMatchDefinition) == 0x88, "Size of FWuLogMatchDefinition is not correct.");
	auto constexpr FWuLogMatchDefinition_MatchId_Offset = offsetof(FWuLogMatchDefinition, MatchId);
	static_assert(FWuLogMatchDefinition_MatchId_Offset == 0x58, "FWuLogMatchDefinition::MatchId offset is not 58");
	auto constexpr FWuLogMatchDefinition_PingQuality_Offset = offsetof(FWuLogMatchDefinition, PingQuality);
	static_assert(FWuLogMatchDefinition_PingQuality_Offset == 0x68, "FWuLogMatchDefinition::PingQuality offset is not 68");
	auto constexpr FWuLogMatchDefinition_Ratings_Offset = offsetof(FWuLogMatchDefinition, Ratings);
	static_assert(FWuLogMatchDefinition_Ratings_Offset == 0x78, "FWuLogMatchDefinition::Ratings offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
