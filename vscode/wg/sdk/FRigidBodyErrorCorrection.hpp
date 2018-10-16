#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRigidBodyErrorCorrection // Size: 0x1C
{
public:
    float LinearDeltaThresholdSq; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.RigidBodyErrorCorrection.LinearDeltaThresholdSq */
    float LinearInterpAlpha; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.RigidBodyErrorCorrection.LinearInterpAlpha */
    float LinearRecipFixTime; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.RigidBodyErrorCorrection.LinearRecipFixTime */
    float AngularDeltaThreshold; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.RigidBodyErrorCorrection.AngularDeltaThreshold */
    float AngularInterpAlpha; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.RigidBodyErrorCorrection.AngularInterpAlpha */
    float AngularRecipFixTime; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.RigidBodyErrorCorrection.AngularRecipFixTime */
    float BodySpeedThresholdSq; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.RigidBodyErrorCorrection.BodySpeedThresholdSq */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRigidBodyErrorCorrection = sizeof(FRigidBodyErrorCorrection); // 28
    static_assert(sizeof(FRigidBodyErrorCorrection) == 0x1C, "Size of FRigidBodyErrorCorrection is not correct.");
	auto constexpr FRigidBodyErrorCorrection_LinearDeltaThresholdSq_Offset = offsetof(FRigidBodyErrorCorrection, LinearDeltaThresholdSq);
	static_assert(FRigidBodyErrorCorrection_LinearDeltaThresholdSq_Offset == 0x0, "FRigidBodyErrorCorrection::LinearDeltaThresholdSq offset is not 0");
	auto constexpr FRigidBodyErrorCorrection_LinearInterpAlpha_Offset = offsetof(FRigidBodyErrorCorrection, LinearInterpAlpha);
	static_assert(FRigidBodyErrorCorrection_LinearInterpAlpha_Offset == 0x4, "FRigidBodyErrorCorrection::LinearInterpAlpha offset is not 4");
	auto constexpr FRigidBodyErrorCorrection_LinearRecipFixTime_Offset = offsetof(FRigidBodyErrorCorrection, LinearRecipFixTime);
	static_assert(FRigidBodyErrorCorrection_LinearRecipFixTime_Offset == 0x8, "FRigidBodyErrorCorrection::LinearRecipFixTime offset is not 8");
	auto constexpr FRigidBodyErrorCorrection_AngularDeltaThreshold_Offset = offsetof(FRigidBodyErrorCorrection, AngularDeltaThreshold);
	static_assert(FRigidBodyErrorCorrection_AngularDeltaThreshold_Offset == 0xc, "FRigidBodyErrorCorrection::AngularDeltaThreshold offset is not c");
	auto constexpr FRigidBodyErrorCorrection_AngularInterpAlpha_Offset = offsetof(FRigidBodyErrorCorrection, AngularInterpAlpha);
	static_assert(FRigidBodyErrorCorrection_AngularInterpAlpha_Offset == 0x10, "FRigidBodyErrorCorrection::AngularInterpAlpha offset is not 10");
	auto constexpr FRigidBodyErrorCorrection_AngularRecipFixTime_Offset = offsetof(FRigidBodyErrorCorrection, AngularRecipFixTime);
	static_assert(FRigidBodyErrorCorrection_AngularRecipFixTime_Offset == 0x14, "FRigidBodyErrorCorrection::AngularRecipFixTime offset is not 14");
	auto constexpr FRigidBodyErrorCorrection_BodySpeedThresholdSq_Offset = offsetof(FRigidBodyErrorCorrection, BodySpeedThresholdSq);
	static_assert(FRigidBodyErrorCorrection_BodySpeedThresholdSq_Offset == 0x18, "FRigidBodyErrorCorrection::BodySpeedThresholdSq offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
