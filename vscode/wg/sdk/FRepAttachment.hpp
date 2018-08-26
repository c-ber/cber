#pragma once
#include "FVector_NetQuantize100.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRepAttachment // Size: 0x40
{
public:
    ExternalPtr<struct UActor> AttachParent; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.RepAttachment.AttachParent */
    FVector_NetQuantize100 LocationOffset; /* Ofs: 0x8 Size: 0xC StructProperty Engine.RepAttachment.LocationOffset */
    FVector_NetQuantize100 RelativeScale3D; /* Ofs: 0x14 Size: 0xC StructProperty Engine.RepAttachment.RelativeScale3D */
    FRotator RotationOffset; /* Ofs: 0x20 Size: 0xC StructProperty Engine.RepAttachment.RotationOffset */
    uint8_t UnknownData2C[0x4];
    FName AttachSocket; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.RepAttachment.AttachSocket */
    ExternalPtr<struct USceneComponent> AttachComponent; /* Ofs: 0x38 Size: 0x8 ObjectProperty Engine.RepAttachment.AttachComponent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRepAttachment = sizeof(FRepAttachment); // 64
    static_assert(sizeof(FRepAttachment) == 0x40, "Size of FRepAttachment is not correct.");
	auto constexpr FRepAttachment_AttachParent_Offset = offsetof(FRepAttachment, AttachParent);
	static_assert(FRepAttachment_AttachParent_Offset == 0x0, "FRepAttachment::AttachParent offset is not 0");
	auto constexpr FRepAttachment_LocationOffset_Offset = offsetof(FRepAttachment, LocationOffset);
	static_assert(FRepAttachment_LocationOffset_Offset == 0x8, "FRepAttachment::LocationOffset offset is not 8");
	auto constexpr FRepAttachment_RelativeScale3D_Offset = offsetof(FRepAttachment, RelativeScale3D);
	static_assert(FRepAttachment_RelativeScale3D_Offset == 0x14, "FRepAttachment::RelativeScale3D offset is not 14");
	auto constexpr FRepAttachment_RotationOffset_Offset = offsetof(FRepAttachment, RotationOffset);
	static_assert(FRepAttachment_RotationOffset_Offset == 0x20, "FRepAttachment::RotationOffset offset is not 20");
	auto constexpr FRepAttachment_AttachSocket_Offset = offsetof(FRepAttachment, AttachSocket);
	static_assert(FRepAttachment_AttachSocket_Offset == 0x30, "FRepAttachment::AttachSocket offset is not 30");
	auto constexpr FRepAttachment_AttachComponent_Offset = offsetof(FRepAttachment, AttachComponent);
	static_assert(FRepAttachment_AttachComponent_Offset == 0x38, "FRepAttachment::AttachComponent offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
