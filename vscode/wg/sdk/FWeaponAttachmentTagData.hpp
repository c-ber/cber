#pragma once
#include "EWeaponAttachmentSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponAttachmentTagData // Size: 0x18
{
public:
    TEnumAsByte<enum EWeaponAttachmentSlotID> AttachmentSlotID; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.WeaponAttachmentTagData.AttachmentSlotID */
    uint8_t UnknownData1[0x7];
    TArray<struct FName> AttachableTags; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.WeaponAttachmentTagData.AttachableTags */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponAttachmentTagData = sizeof(FWeaponAttachmentTagData); // 24
    static_assert(sizeof(FWeaponAttachmentTagData) == 0x18, "Size of FWeaponAttachmentTagData is not correct.");
	auto constexpr FWeaponAttachmentTagData_AttachmentSlotID_Offset = offsetof(FWeaponAttachmentTagData, AttachmentSlotID);
	static_assert(FWeaponAttachmentTagData_AttachmentSlotID_Offset == 0x0, "FWeaponAttachmentTagData::AttachmentSlotID offset is not 0");
	auto constexpr FWeaponAttachmentTagData_AttachableTags_Offset = offsetof(FWeaponAttachmentTagData, AttachableTags);
	static_assert(FWeaponAttachmentTagData_AttachableTags_Offset == 0x8, "FWeaponAttachmentTagData::AttachableTags offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
