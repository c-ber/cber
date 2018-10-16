#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemEquip // Size: 0xE8
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogItemEquip.Character */
    FWuLogItem Item; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogItemEquip.Item */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemEquip = sizeof(FWuLogItemEquip); // 232
    static_assert(sizeof(FWuLogItemEquip) == 0xE8, "Size of FWuLogItemEquip is not correct.");
	auto constexpr FWuLogItemEquip_Character_Offset = offsetof(FWuLogItemEquip, Character);
	static_assert(FWuLogItemEquip_Character_Offset == 0x58, "FWuLogItemEquip::Character offset is not 58");
	auto constexpr FWuLogItemEquip_Item_Offset = offsetof(FWuLogItemEquip, Item);
	static_assert(FWuLogItemEquip_Item_Offset == 0xa0, "FWuLogItemEquip::Item offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
