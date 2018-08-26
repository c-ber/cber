#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemUnequip // Size: 0xE8
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogItemUnequip.Character */
    FWuLogItem Item; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogItemUnequip.Item */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemUnequip = sizeof(FWuLogItemUnequip); // 232
    static_assert(sizeof(FWuLogItemUnequip) == 0xE8, "Size of FWuLogItemUnequip is not correct.");
	auto constexpr FWuLogItemUnequip_Character_Offset = offsetof(FWuLogItemUnequip, Character);
	static_assert(FWuLogItemUnequip_Character_Offset == 0x58, "FWuLogItemUnequip::Character offset is not 58");
	auto constexpr FWuLogItemUnequip_Item_Offset = offsetof(FWuLogItemUnequip, Item);
	static_assert(FWuLogItemUnequip_Item_Offset == 0xa0, "FWuLogItemUnequip::Item offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
