#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemPickup // Size: 0xE8
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogItemPickup.Character */
    FWuLogItem Item; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogItemPickup.Item */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemPickup = sizeof(FWuLogItemPickup); // 232
    static_assert(sizeof(FWuLogItemPickup) == 0xE8, "Size of FWuLogItemPickup is not correct.");
	auto constexpr FWuLogItemPickup_Character_Offset = offsetof(FWuLogItemPickup, Character);
	static_assert(FWuLogItemPickup_Character_Offset == 0x58, "FWuLogItemPickup::Character offset is not 58");
	auto constexpr FWuLogItemPickup_Item_Offset = offsetof(FWuLogItemPickup, Item);
	static_assert(FWuLogItemPickup_Item_Offset == 0xa0, "FWuLogItemPickup::Item offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
