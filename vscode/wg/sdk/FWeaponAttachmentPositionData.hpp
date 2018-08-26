#pragma once
#include "EWeaponAttachmentSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponAttachmentPositionData // Size: 0x20
{
public:
    TEnumAsByte<enum EWeaponAttachmentSlotID> AttachmentSlotID; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.WeaponAttachmentPositionData.AttachmentSlotID */
    uint8_t UnknownData1[0x7];
    FName AttachmentPoint; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.WeaponAttachmentPositionData.AttachmentPoint */
    TArray<struct FWeaponAttachmentTagPositionData> AttachmentPointByTag; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.WeaponAttachmentPositionData.AttachmentPointByTag */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponAttachmentPositionData = sizeof(FWeaponAttachmentPositionData); // 32
    static_assert(sizeof(FWeaponAttachmentPositionData) == 0x20, "Size of FWeaponAttachmentPositionData is not correct.");
	auto constexpr FWeaponAttachmentPositionData_AttachmentSlotID_Offset = offsetof(FWeaponAttachmentPositionData, AttachmentSlotID);
	static_assert(FWeaponAttachmentPositionData_AttachmentSlotID_Offset == 0x0, "FWeaponAttachmentPositionData::AttachmentSlotID offset is not 0");
	auto constexpr FWeaponAttachmentPositionData_AttachmentPoint_Offset = offsetof(FWeaponAttachmentPositionData, AttachmentPoint);
	static_assert(FWeaponAttachmentPositionData_AttachmentPoint_Offset == 0x8, "FWeaponAttachmentPositionData::AttachmentPoint offset is not 8");
	auto constexpr FWeaponAttachmentPositionData_AttachmentPointByTag_Offset = offsetof(FWeaponAttachmentPositionData, AttachmentPointByTag);
	static_assert(FWeaponAttachmentPositionData_AttachmentPointByTag_Offset == 0x10, "FWeaponAttachmentPositionData::AttachmentPointByTag offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
