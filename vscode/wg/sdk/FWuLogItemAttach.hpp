#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemAttach // Size: 0x130
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogItemAttach.Character */
    FWuLogItem ParentItem; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogItemAttach.ParentItem */
    FWuLogItem ChildItem; /* Ofs: 0xE8 Size: 0x48 StructProperty TslGame.WuLogItemAttach.ChildItem */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemAttach = sizeof(FWuLogItemAttach); // 304
    static_assert(sizeof(FWuLogItemAttach) == 0x130, "Size of FWuLogItemAttach is not correct.");
	auto constexpr FWuLogItemAttach_Character_Offset = offsetof(FWuLogItemAttach, Character);
	static_assert(FWuLogItemAttach_Character_Offset == 0x58, "FWuLogItemAttach::Character offset is not 58");
	auto constexpr FWuLogItemAttach_ParentItem_Offset = offsetof(FWuLogItemAttach, ParentItem);
	static_assert(FWuLogItemAttach_ParentItem_Offset == 0xa0, "FWuLogItemAttach::ParentItem offset is not a0");
	auto constexpr FWuLogItemAttach_ChildItem_Offset = offsetof(FWuLogItemAttach, ChildItem);
	static_assert(FWuLogItemAttach_ChildItem_Offset == 0xe8, "FWuLogItemAttach::ChildItem offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
