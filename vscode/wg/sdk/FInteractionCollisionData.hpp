#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInteractionCollisionData // Size: 0x14
{
public:
    float CapsuleHalfHeight; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.InteractionCollisionData.CapsuleHalfHeight */
    float CapsuleRadius; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.InteractionCollisionData.CapsuleRadius */
    FVector CapsuleOffset; /* Ofs: 0x8 Size: 0xC StructProperty TslGame.InteractionCollisionData.CapsuleOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInteractionCollisionData = sizeof(FInteractionCollisionData); // 20
    static_assert(sizeof(FInteractionCollisionData) == 0x14, "Size of FInteractionCollisionData is not correct.");
	auto constexpr FInteractionCollisionData_CapsuleHalfHeight_Offset = offsetof(FInteractionCollisionData, CapsuleHalfHeight);
	static_assert(FInteractionCollisionData_CapsuleHalfHeight_Offset == 0x0, "FInteractionCollisionData::CapsuleHalfHeight offset is not 0");
	auto constexpr FInteractionCollisionData_CapsuleRadius_Offset = offsetof(FInteractionCollisionData, CapsuleRadius);
	static_assert(FInteractionCollisionData_CapsuleRadius_Offset == 0x4, "FInteractionCollisionData::CapsuleRadius offset is not 4");
	auto constexpr FInteractionCollisionData_CapsuleOffset_Offset = offsetof(FInteractionCollisionData, CapsuleOffset);
	static_assert(FInteractionCollisionData_CapsuleOffset_Offset == 0x8, "FInteractionCollisionData::CapsuleOffset offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
