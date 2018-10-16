#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponAttachmentTagPositionData // Size: 0x10
{
public:
    FName AttachmentTag; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.WeaponAttachmentTagPositionData.AttachmentTag */
    FName AttachmentPoint; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.WeaponAttachmentTagPositionData.AttachmentPoint */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponAttachmentTagPositionData = sizeof(FWeaponAttachmentTagPositionData); // 16
    static_assert(sizeof(FWeaponAttachmentTagPositionData) == 0x10, "Size of FWeaponAttachmentTagPositionData is not correct.");
	auto constexpr FWeaponAttachmentTagPositionData_AttachmentTag_Offset = offsetof(FWeaponAttachmentTagPositionData, AttachmentTag);
	static_assert(FWeaponAttachmentTagPositionData_AttachmentTag_Offset == 0x0, "FWeaponAttachmentTagPositionData::AttachmentTag offset is not 0");
	auto constexpr FWeaponAttachmentTagPositionData_AttachmentPoint_Offset = offsetof(FWeaponAttachmentTagPositionData, AttachmentPoint);
	static_assert(FWeaponAttachmentTagPositionData_AttachmentPoint_Offset == 0x8, "FWeaponAttachmentTagPositionData::AttachmentPoint offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
