#pragma once
#include "FVector_NetQuantize100.hpp"
#include "FQuat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRigidBodyState // Size: 0x40
{
public:
    FVector_NetQuantize100 Position; /* Ofs: 0x0 Size: 0xC StructProperty Engine.RigidBodyState.Position */
    uint8_t UnknownDataC[0x4];
    FQuat Quaternion; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.RigidBodyState.Quaternion */
    FVector_NetQuantize100 LinVel; /* Ofs: 0x20 Size: 0xC StructProperty Engine.RigidBodyState.LinVel */
    FVector_NetQuantize100 AngVel; /* Ofs: 0x2C Size: 0xC StructProperty Engine.RigidBodyState.AngVel */
    uint8_t Flags; /* Ofs: 0x38 Size: 0x1 ByteProperty Engine.RigidBodyState.Flags */
    uint8_t UnknownData39[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRigidBodyState = sizeof(FRigidBodyState); // 64
    static_assert(sizeof(FRigidBodyState) == 0x40, "Size of FRigidBodyState is not correct.");
	auto constexpr FRigidBodyState_Position_Offset = offsetof(FRigidBodyState, Position);
	static_assert(FRigidBodyState_Position_Offset == 0x0, "FRigidBodyState::Position offset is not 0");
	auto constexpr FRigidBodyState_Quaternion_Offset = offsetof(FRigidBodyState, Quaternion);
	static_assert(FRigidBodyState_Quaternion_Offset == 0x10, "FRigidBodyState::Quaternion offset is not 10");
	auto constexpr FRigidBodyState_LinVel_Offset = offsetof(FRigidBodyState, LinVel);
	static_assert(FRigidBodyState_LinVel_Offset == 0x20, "FRigidBodyState::LinVel offset is not 20");
	auto constexpr FRigidBodyState_AngVel_Offset = offsetof(FRigidBodyState, AngVel);
	static_assert(FRigidBodyState_AngVel_Offset == 0x2c, "FRigidBodyState::AngVel offset is not 2c");
	auto constexpr FRigidBodyState_Flags_Offset = offsetof(FRigidBodyState, Flags);
	static_assert(FRigidBodyState_Flags_Offset == 0x38, "FRigidBodyState::Flags offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
