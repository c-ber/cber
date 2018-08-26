#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogCharacter // Size: 0x48
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuLogCharacter.Name */
    FString NetId; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.WuLogCharacter.NetId */
    int32_t TeamId; /* Ofs: 0x20 Size: 0x4 IntProperty TslGame.WuLogCharacter.TeamId */
    float Health; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.WuLogCharacter.Health */
    FVector Location; /* Ofs: 0x28 Size: 0xC StructProperty TslGame.WuLogCharacter.Location */
    int32_t Ranking; /* Ofs: 0x34 Size: 0x4 IntProperty TslGame.WuLogCharacter.Ranking */
    FString AccountId; /* Ofs: 0x38 Size: 0x10 StrProperty TslGame.WuLogCharacter.AccountId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogCharacter = sizeof(FWuLogCharacter); // 72
    static_assert(sizeof(FWuLogCharacter) == 0x48, "Size of FWuLogCharacter is not correct.");
	auto constexpr FWuLogCharacter_Name_Offset = offsetof(FWuLogCharacter, Name);
	static_assert(FWuLogCharacter_Name_Offset == 0x0, "FWuLogCharacter::Name offset is not 0");
	auto constexpr FWuLogCharacter_NetId_Offset = offsetof(FWuLogCharacter, NetId);
	static_assert(FWuLogCharacter_NetId_Offset == 0x10, "FWuLogCharacter::NetId offset is not 10");
	auto constexpr FWuLogCharacter_TeamId_Offset = offsetof(FWuLogCharacter, TeamId);
	static_assert(FWuLogCharacter_TeamId_Offset == 0x20, "FWuLogCharacter::TeamId offset is not 20");
	auto constexpr FWuLogCharacter_Health_Offset = offsetof(FWuLogCharacter, Health);
	static_assert(FWuLogCharacter_Health_Offset == 0x24, "FWuLogCharacter::Health offset is not 24");
	auto constexpr FWuLogCharacter_Location_Offset = offsetof(FWuLogCharacter, Location);
	static_assert(FWuLogCharacter_Location_Offset == 0x28, "FWuLogCharacter::Location offset is not 28");
	auto constexpr FWuLogCharacter_Ranking_Offset = offsetof(FWuLogCharacter, Ranking);
	static_assert(FWuLogCharacter_Ranking_Offset == 0x34, "FWuLogCharacter::Ranking offset is not 34");
	auto constexpr FWuLogCharacter_AccountId_Offset = offsetof(FWuLogCharacter, AccountId);
	static_assert(FWuLogCharacter_AccountId_Offset == 0x38, "FWuLogCharacter::AccountId offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
