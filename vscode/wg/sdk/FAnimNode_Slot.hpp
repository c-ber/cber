#pragma once
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_Slot // Size: 0x60
 : public FAnimNode_Base // Size: 0x30
{
public:
    FPoseLink Source; /* Ofs: 0x30 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_Slot.Source */
    FName SlotName; /* Ofs: 0x48 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_Slot.SlotName */
    uint8_t UnknownData50[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_Slot = sizeof(FAnimNode_Slot); // 96
    static_assert(sizeof(FAnimNode_Slot) == 0x60, "Size of FAnimNode_Slot is not correct.");
	auto constexpr FAnimNode_Slot_Source_Offset = offsetof(FAnimNode_Slot, Source);
	static_assert(FAnimNode_Slot_Source_Offset == 0x30, "FAnimNode_Slot::Source offset is not 30");
	auto constexpr FAnimNode_Slot_SlotName_Offset = offsetof(FAnimNode_Slot, SlotName);
	static_assert(FAnimNode_Slot_SlotName_Offset == 0x48, "FAnimNode_Slot::SlotName offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
