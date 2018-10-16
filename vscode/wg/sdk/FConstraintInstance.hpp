#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"
#include "FConstraintProfileProperties.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConstraintInstance // Size: 0x1F0
{
public:
    uint8_t UnknownData0[0x18];
    FName JointName; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.ConstraintInstance.JointName */
    FName ConstraintBone1; /* Ofs: 0x20 Size: 0x8 NameProperty Engine.ConstraintInstance.ConstraintBone1 */
    FName ConstraintBone2; /* Ofs: 0x28 Size: 0x8 NameProperty Engine.ConstraintInstance.ConstraintBone2 */
    FVector Pos1; /* Ofs: 0x30 Size: 0xC StructProperty Engine.ConstraintInstance.Pos1 */
    FVector PriAxis1; /* Ofs: 0x3C Size: 0xC StructProperty Engine.ConstraintInstance.PriAxis1 */
    FVector SecAxis1; /* Ofs: 0x48 Size: 0xC StructProperty Engine.ConstraintInstance.SecAxis1 */
    FVector Pos2; /* Ofs: 0x54 Size: 0xC StructProperty Engine.ConstraintInstance.Pos2 */
    FVector PriAxis2; /* Ofs: 0x60 Size: 0xC StructProperty Engine.ConstraintInstance.PriAxis2 */
    FVector SecAxis2; /* Ofs: 0x6C Size: 0xC StructProperty Engine.ConstraintInstance.SecAxis2 */
    FRotator AngularRotationOffset; /* Ofs: 0x78 Size: 0xC StructProperty Engine.ConstraintInstance.AngularRotationOffset */
    bool bScaleLinearLimits; /* Ofs: 0x84 Size: 0x1 BitMask: 01 BoolProperty Engine.ConstraintInstance.bScaleLinearLimits */
    uint8_t UnknownData85[0x7];
    FConstraintProfileProperties ProfileInstance; /* Ofs: 0x8C Size: 0x104 StructProperty Engine.ConstraintInstance.ProfileInstance */
    uint8_t UnknownData190[0x60];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConstraintInstance = sizeof(FConstraintInstance); // 496
    static_assert(sizeof(FConstraintInstance) == 0x1F0, "Size of FConstraintInstance is not correct.");
	auto constexpr FConstraintInstance_JointName_Offset = offsetof(FConstraintInstance, JointName);
	static_assert(FConstraintInstance_JointName_Offset == 0x18, "FConstraintInstance::JointName offset is not 18");
	auto constexpr FConstraintInstance_ConstraintBone1_Offset = offsetof(FConstraintInstance, ConstraintBone1);
	static_assert(FConstraintInstance_ConstraintBone1_Offset == 0x20, "FConstraintInstance::ConstraintBone1 offset is not 20");
	auto constexpr FConstraintInstance_ConstraintBone2_Offset = offsetof(FConstraintInstance, ConstraintBone2);
	static_assert(FConstraintInstance_ConstraintBone2_Offset == 0x28, "FConstraintInstance::ConstraintBone2 offset is not 28");
	auto constexpr FConstraintInstance_Pos1_Offset = offsetof(FConstraintInstance, Pos1);
	static_assert(FConstraintInstance_Pos1_Offset == 0x30, "FConstraintInstance::Pos1 offset is not 30");
	auto constexpr FConstraintInstance_PriAxis1_Offset = offsetof(FConstraintInstance, PriAxis1);
	static_assert(FConstraintInstance_PriAxis1_Offset == 0x3c, "FConstraintInstance::PriAxis1 offset is not 3c");
	auto constexpr FConstraintInstance_SecAxis1_Offset = offsetof(FConstraintInstance, SecAxis1);
	static_assert(FConstraintInstance_SecAxis1_Offset == 0x48, "FConstraintInstance::SecAxis1 offset is not 48");
	auto constexpr FConstraintInstance_Pos2_Offset = offsetof(FConstraintInstance, Pos2);
	static_assert(FConstraintInstance_Pos2_Offset == 0x54, "FConstraintInstance::Pos2 offset is not 54");
	auto constexpr FConstraintInstance_PriAxis2_Offset = offsetof(FConstraintInstance, PriAxis2);
	static_assert(FConstraintInstance_PriAxis2_Offset == 0x60, "FConstraintInstance::PriAxis2 offset is not 60");
	auto constexpr FConstraintInstance_SecAxis2_Offset = offsetof(FConstraintInstance, SecAxis2);
	static_assert(FConstraintInstance_SecAxis2_Offset == 0x6c, "FConstraintInstance::SecAxis2 offset is not 6c");
	auto constexpr FConstraintInstance_AngularRotationOffset_Offset = offsetof(FConstraintInstance, AngularRotationOffset);
	static_assert(FConstraintInstance_AngularRotationOffset_Offset == 0x78, "FConstraintInstance::AngularRotationOffset offset is not 78");
	auto constexpr FConstraintInstance_ProfileInstance_Offset = offsetof(FConstraintInstance, ProfileInstance);
	static_assert(FConstraintInstance_ProfileInstance_Offset == 0x8c, "FConstraintInstance::ProfileInstance offset is not 8c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
