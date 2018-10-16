#pragma once
#include "FVector_NetQuantize100.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBasedMovementInfo // Size: 0x30
{
public:
    ExternalPtr<struct UPrimitiveComponent> MovementBase; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.BasedMovementInfo.MovementBase */
    FName BoneName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.BasedMovementInfo.BoneName */
    FVector_NetQuantize100 Location; /* Ofs: 0x10 Size: 0xC StructProperty Engine.BasedMovementInfo.Location */
    FRotator Rotation; /* Ofs: 0x1C Size: 0xC StructProperty Engine.BasedMovementInfo.Rotation */
    bool bServerHasBaseComponent; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty Engine.BasedMovementInfo.bServerHasBaseComponent */
    bool bRelativeRotation; /* Ofs: 0x29 Size: 0x1 BitMask: 01 BoolProperty Engine.BasedMovementInfo.bRelativeRotation */
    bool bServerHasVelocity; /* Ofs: 0x2A Size: 0x1 BitMask: 01 BoolProperty Engine.BasedMovementInfo.bServerHasVelocity */
    uint8_t UnknownData2B[0x5];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBasedMovementInfo = sizeof(FBasedMovementInfo); // 48
    static_assert(sizeof(FBasedMovementInfo) == 0x30, "Size of FBasedMovementInfo is not correct.");
	auto constexpr FBasedMovementInfo_MovementBase_Offset = offsetof(FBasedMovementInfo, MovementBase);
	static_assert(FBasedMovementInfo_MovementBase_Offset == 0x0, "FBasedMovementInfo::MovementBase offset is not 0");
	auto constexpr FBasedMovementInfo_BoneName_Offset = offsetof(FBasedMovementInfo, BoneName);
	static_assert(FBasedMovementInfo_BoneName_Offset == 0x8, "FBasedMovementInfo::BoneName offset is not 8");
	auto constexpr FBasedMovementInfo_Location_Offset = offsetof(FBasedMovementInfo, Location);
	static_assert(FBasedMovementInfo_Location_Offset == 0x10, "FBasedMovementInfo::Location offset is not 10");
	auto constexpr FBasedMovementInfo_Rotation_Offset = offsetof(FBasedMovementInfo, Rotation);
	static_assert(FBasedMovementInfo_Rotation_Offset == 0x1c, "FBasedMovementInfo::Rotation offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
