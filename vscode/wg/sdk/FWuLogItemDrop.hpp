#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemDrop // Size: 0xE8
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogItemDrop.Character */
    FWuLogItem Item; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogItemDrop.Item */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemDrop = sizeof(FWuLogItemDrop); // 232
    static_assert(sizeof(FWuLogItemDrop) == 0xE8, "Size of FWuLogItemDrop is not correct.");
	auto constexpr FWuLogItemDrop_Character_Offset = offsetof(FWuLogItemDrop, Character);
	static_assert(FWuLogItemDrop_Character_Offset == 0x58, "FWuLogItemDrop::Character offset is not 58");
	auto constexpr FWuLogItemDrop_Item_Offset = offsetof(FWuLogItemDrop, Item);
	static_assert(FWuLogItemDrop_Item_Offset == 0xa0, "FWuLogItemDrop::Item offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
