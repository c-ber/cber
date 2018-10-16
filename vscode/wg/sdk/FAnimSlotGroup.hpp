#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSlotGroup // Size: 0x18
{
public:
    FName GroupName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimSlotGroup.GroupName */
    TArray<struct FName> SlotNames; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.AnimSlotGroup.SlotNames */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSlotGroup = sizeof(FAnimSlotGroup); // 24
    static_assert(sizeof(FAnimSlotGroup) == 0x18, "Size of FAnimSlotGroup is not correct.");
	auto constexpr FAnimSlotGroup_GroupName_Offset = offsetof(FAnimSlotGroup, GroupName);
	static_assert(FAnimSlotGroup_GroupName_Offset == 0x0, "FAnimSlotGroup::GroupName offset is not 0");
	auto constexpr FAnimSlotGroup_SlotNames_Offset = offsetof(FAnimSlotGroup, SlotNames);
	static_assert(FAnimSlotGroup_SlotNames_Offset == 0x8, "FAnimSlotGroup::SlotNames offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
