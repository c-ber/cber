#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerRevive // Size: 0xE8
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Reviver; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogPlayerRevive.Reviver */
    FWuLogCharacter Victim; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogPlayerRevive.Victim */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerRevive = sizeof(FWuLogPlayerRevive); // 232
    static_assert(sizeof(FWuLogPlayerRevive) == 0xE8, "Size of FWuLogPlayerRevive is not correct.");
	auto constexpr FWuLogPlayerRevive_Reviver_Offset = offsetof(FWuLogPlayerRevive, Reviver);
	static_assert(FWuLogPlayerRevive_Reviver_Offset == 0x58, "FWuLogPlayerRevive::Reviver offset is not 58");
	auto constexpr FWuLogPlayerRevive_Victim_Offset = offsetof(FWuLogPlayerRevive, Victim);
	static_assert(FWuLogPlayerRevive_Victim_Offset == 0xa0, "FWuLogPlayerRevive::Victim offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
