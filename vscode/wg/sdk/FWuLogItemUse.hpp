#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemUse // Size: 0xE8
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogItemUse.Character */
    FWuLogItem Item; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogItemUse.Item */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemUse = sizeof(FWuLogItemUse); // 232
    static_assert(sizeof(FWuLogItemUse) == 0xE8, "Size of FWuLogItemUse is not correct.");
	auto constexpr FWuLogItemUse_Character_Offset = offsetof(FWuLogItemUse, Character);
	static_assert(FWuLogItemUse_Character_Offset == 0x58, "FWuLogItemUse::Character offset is not 58");
	auto constexpr FWuLogItemUse_Item_Offset = offsetof(FWuLogItemUse, Item);
	static_assert(FWuLogItemUse_Item_Offset == 0xa0, "FWuLogItemUse::Item offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
