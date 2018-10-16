#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWheelSetup // Size: 0x28
{
public:
    ExternalPtr<struct UClass> WheelClass; /* Ofs: 0x0 Size: 0x8 ClassProperty PhysXVehicles.WheelSetup.WheelClass */
    ExternalPtr<struct UClass> PuncturedWheelClass; /* Ofs: 0x8 Size: 0x8 ClassProperty PhysXVehicles.WheelSetup.PuncturedWheelClass */
    FName BoneName; /* Ofs: 0x10 Size: 0x8 NameProperty PhysXVehicles.WheelSetup.BoneName */
    FVector AdditionalOffset; /* Ofs: 0x18 Size: 0xC StructProperty PhysXVehicles.WheelSetup.AdditionalOffset */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWheelSetup = sizeof(FWheelSetup); // 40
    static_assert(sizeof(FWheelSetup) == 0x28, "Size of FWheelSetup is not correct.");
	auto constexpr FWheelSetup_WheelClass_Offset = offsetof(FWheelSetup, WheelClass);
	static_assert(FWheelSetup_WheelClass_Offset == 0x0, "FWheelSetup::WheelClass offset is not 0");
	auto constexpr FWheelSetup_PuncturedWheelClass_Offset = offsetof(FWheelSetup, PuncturedWheelClass);
	static_assert(FWheelSetup_PuncturedWheelClass_Offset == 0x8, "FWheelSetup::PuncturedWheelClass offset is not 8");
	auto constexpr FWheelSetup_BoneName_Offset = offsetof(FWheelSetup, BoneName);
	static_assert(FWheelSetup_BoneName_Offset == 0x10, "FWheelSetup::BoneName offset is not 10");
	auto constexpr FWheelSetup_AdditionalOffset_Offset = offsetof(FWheelSetup, AdditionalOffset);
	static_assert(FWheelSetup_AdditionalOffset_Offset == 0x18, "FWheelSetup::AdditionalOffset offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
