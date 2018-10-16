#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"
#include "FWuLogItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemDetach // Size: 0x130
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogItemDetach.Character */
    FWuLogItem ParentItem; /* Ofs: 0xA0 Size: 0x48 StructProperty TslGame.WuLogItemDetach.ParentItem */
    FWuLogItem ChildItem; /* Ofs: 0xE8 Size: 0x48 StructProperty TslGame.WuLogItemDetach.ChildItem */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemDetach = sizeof(FWuLogItemDetach); // 304
    static_assert(sizeof(FWuLogItemDetach) == 0x130, "Size of FWuLogItemDetach is not correct.");
	auto constexpr FWuLogItemDetach_Character_Offset = offsetof(FWuLogItemDetach, Character);
	static_assert(FWuLogItemDetach_Character_Offset == 0x58, "FWuLogItemDetach::Character offset is not 58");
	auto constexpr FWuLogItemDetach_ParentItem_Offset = offsetof(FWuLogItemDetach, ParentItem);
	static_assert(FWuLogItemDetach_ParentItem_Offset == 0xa0, "FWuLogItemDetach::ParentItem offset is not a0");
	auto constexpr FWuLogItemDetach_ChildItem_Offset = offsetof(FWuLogItemDetach, ChildItem);
	static_assert(FWuLogItemDetach_ChildItem_Offset == 0xe8, "FWuLogItemDetach::ChildItem offset is not e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
