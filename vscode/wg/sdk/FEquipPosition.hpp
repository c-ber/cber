#pragma once
#include "EEquipSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEquipPosition // Size: 0x8
{
public:
    TEnumAsByte<enum EEquipSlotID> SlotID; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.EquipPosition.SlotID */
    uint8_t UnknownData1[0x3];
    int32_t Index; /* Ofs: 0x4 Size: 0x4 IntProperty TslGame.EquipPosition.Index */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEquipPosition = sizeof(FEquipPosition); // 8
    static_assert(sizeof(FEquipPosition) == 0x8, "Size of FEquipPosition is not correct.");
	auto constexpr FEquipPosition_SlotID_Offset = offsetof(FEquipPosition, SlotID);
	static_assert(FEquipPosition_SlotID_Offset == 0x0, "FEquipPosition::SlotID offset is not 0");
	auto constexpr FEquipPosition_Index_Offset = offsetof(FEquipPosition, Index);
	static_assert(FEquipPosition_Index_Offset == 0x4, "FEquipPosition::Index offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
