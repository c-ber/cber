#pragma once
#include "FVector.hpp"
#include "FQuat.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConstraintOffset // Size: 0x60
{
public:
    FVector Translation; /* Ofs: 0x0 Size: 0xC StructProperty AnimationCore.ConstraintOffset.Translation */
    uint8_t UnknownDataC[0x4];
    FQuat Rotation; /* Ofs: 0x10 Size: 0x10 StructProperty AnimationCore.ConstraintOffset.Rotation */
    FVector Scale; /* Ofs: 0x20 Size: 0xC StructProperty AnimationCore.ConstraintOffset.Scale */
    uint8_t UnknownData2C[0x4];
    FTransform Parent; /* Ofs: 0x30 Size: 0x30 StructProperty AnimationCore.ConstraintOffset.Parent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConstraintOffset = sizeof(FConstraintOffset); // 96
    static_assert(sizeof(FConstraintOffset) == 0x60, "Size of FConstraintOffset is not correct.");
	auto constexpr FConstraintOffset_Translation_Offset = offsetof(FConstraintOffset, Translation);
	static_assert(FConstraintOffset_Translation_Offset == 0x0, "FConstraintOffset::Translation offset is not 0");
	auto constexpr FConstraintOffset_Rotation_Offset = offsetof(FConstraintOffset, Rotation);
	static_assert(FConstraintOffset_Rotation_Offset == 0x10, "FConstraintOffset::Rotation offset is not 10");
	auto constexpr FConstraintOffset_Scale_Offset = offsetof(FConstraintOffset, Scale);
	static_assert(FConstraintOffset_Scale_Offset == 0x20, "FConstraintOffset::Scale offset is not 20");
	auto constexpr FConstraintOffset_Parent_Offset = offsetof(FConstraintOffset, Parent);
	static_assert(FConstraintOffset_Parent_Offset == 0x30, "FConstraintOffset::Parent offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
