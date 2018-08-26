#pragma once
#include "UAnimInstance.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslParachuteAnimInstance // Size: 0x480
	: public UAnimInstance // Size: 0x380
{
private:
	typedef UTslParachuteAnimInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1461); // id32("Class TslGame.TslParachuteAnimInstance")
		return ptr;
	}
	ExternalPtr<struct UParachuteVehicle> ParachuteVehicleRef_CP; /* Ofs: 0x380 Size: 0x8 - ObjectProperty TslGame.TslParachuteAnimInstance.ParachuteVehicleRef_CP */
	ExternalPtr<struct UParachuteVehicleMovement> ParachuteMovementRef_CP; /* Ofs: 0x388 Size: 0x8 - ObjectProperty TslGame.TslParachuteAnimInstance.ParachuteMovementRef_CP */
	ExternalPtr<struct UTslCharacter> CharacterRef_CP; /* Ofs: 0x390 Size: 0x8 - ObjectProperty TslGame.TslParachuteAnimInstance.CharacterRef_CP */
	uint8_t UnknownData398[0x8];
	FRotator ParachuteRotation_CP; /* Ofs: 0x3A0 Size: 0xC - StructProperty TslGame.TslParachuteAnimInstance.ParachuteRotation_CP */
	float ParaTurn_CP; /* Ofs: 0x3AC Size: 0x4 - FloatProperty TslGame.TslParachuteAnimInstance.ParaTurn_CP */
	float ParaPitch_CP; /* Ofs: 0x3B0 Size: 0x4 - FloatProperty TslGame.TslParachuteAnimInstance.ParaPitch_CP */
	uint8_t boolField3B4;
	uint8_t UnknownData3B5[0xB];
	FTransform IK_L_CP; /* Ofs: 0x3C0 Size: 0x30 - StructProperty TslGame.TslParachuteAnimInstance.IK_L_CP */
	FTransform IK_R_CP; /* Ofs: 0x3F0 Size: 0x30 - StructProperty TslGame.TslParachuteAnimInstance.IK_R_CP */
	FVector IK_L_Location_CP; /* Ofs: 0x420 Size: 0xC - StructProperty TslGame.TslParachuteAnimInstance.IK_L_Location_CP */
	FRotator IK_L_Rotation_CP; /* Ofs: 0x42C Size: 0xC - StructProperty TslGame.TslParachuteAnimInstance.IK_L_Rotation_CP */
	FVector IK_R_Location_CP; /* Ofs: 0x438 Size: 0xC - StructProperty TslGame.TslParachuteAnimInstance.IK_R_Location_CP */
	FRotator IK_R_Rotation_CP; /* Ofs: 0x444 Size: 0xC - StructProperty TslGame.TslParachuteAnimInstance.IK_R_Rotation_CP */
	float EnableIKAlpha_CP; /* Ofs: 0x450 Size: 0x4 - FloatProperty TslGame.TslParachuteAnimInstance.EnableIKAlpha_CP */
	uint8_t boolField454;
	uint8_t boolField455;
	uint8_t UnknownData456[0x2];
	float ClientRotYawScale; /* Ofs: 0x458 Size: 0x4 - FloatProperty TslGame.TslParachuteAnimInstance.ClientRotYawScale */
	uint8_t UnknownData45C[0x4];
	FName LeftItemBoneName; /* Ofs: 0x460 Size: 0x8 - NameProperty TslGame.TslParachuteAnimInstance.LeftItemBoneName */
	FName RightItemBoneName; /* Ofs: 0x468 Size: 0x8 - NameProperty TslGame.TslParachuteAnimInstance.RightItemBoneName */
	float LandingCheckVelocityScalar; /* Ofs: 0x470 Size: 0x4 - FloatProperty TslGame.TslParachuteAnimInstance.LandingCheckVelocityScalar */
	float LandingCheckStartAltitude; /* Ofs: 0x474 Size: 0x4 - FloatProperty TslGame.TslParachuteAnimInstance.LandingCheckStartAltitude */
	float LandingCheckTickTime; /* Ofs: 0x478 Size: 0x4 - FloatProperty TslGame.TslParachuteAnimInstance.LandingCheckTickTime */
	uint8_t UnknownData47C[0x4];


	inline bool SetParachuteVehicleRef_CP(t_structHelper inst, ExternalPtr<struct UParachuteVehicle> value) { inst.WriteOffset(0x380, value); }
	inline bool SetParachuteMovementRef_CP(t_structHelper inst, ExternalPtr<struct UParachuteVehicleMovement> value) { inst.WriteOffset(0x388, value); }
	inline bool SetCharacterRef_CP(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x390, value); }
	inline bool SetParachuteRotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetParaTurn_CP(t_structHelper inst, float value) { inst.WriteOffset(0x3AC, value); }
	inline bool SetParaPitch_CP(t_structHelper inst, float value) { inst.WriteOffset(0x3B0, value); }
	inline bool bIsReleased_CP()
	{
		return boolField3B4& 0x1;
	}
	inline bool SetbIsReleased_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetIK_L_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetIK_R_CP(t_structHelper inst, FTransform value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetIK_L_Location_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0x420, value); }
	inline bool SetIK_L_Rotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x42C, value); }
	inline bool SetIK_R_Location_CP(t_structHelper inst, FVector value) { inst.WriteOffset(0x438, value); }
	inline bool SetIK_R_Rotation_CP(t_structHelper inst, FRotator value) { inst.WriteOffset(0x444, value); }
	inline bool SetEnableIKAlpha_CP(t_structHelper inst, float value) { inst.WriteOffset(0x450, value); }
	inline bool bIsLanding_CP()
	{
		return boolField454& 0x1;
	}
	inline bool SetbIsLanding_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x454, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMoving_CP()
	{
		return boolField455& 0x1;
	}
	inline bool SetbIsMoving_CP(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x455, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetClientRotYawScale(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool SetLeftItemBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x460, value); }
	inline bool SetRightItemBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x468, value); }
	inline bool SetLandingCheckVelocityScalar(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool SetLandingCheckStartAltitude(t_structHelper inst, float value) { inst.WriteOffset(0x474, value); }
	inline bool SetLandingCheckTickTime(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslParachuteAnimInstance = sizeof(UTslParachuteAnimInstance); // 1152
    static_assert(sizeof(UTslParachuteAnimInstance) == 0x480, "Size of UTslParachuteAnimInstance is not correct.");
	auto constexpr UTslParachuteAnimInstance_ParachuteVehicleRef_CP_Offset = offsetof(UTslParachuteAnimInstance, ParachuteVehicleRef_CP);
	static_assert(UTslParachuteAnimInstance_ParachuteVehicleRef_CP_Offset == 0x380, "UTslParachuteAnimInstance::ParachuteVehicleRef_CP offset is not 380");
	auto constexpr UTslParachuteAnimInstance_ParachuteMovementRef_CP_Offset = offsetof(UTslParachuteAnimInstance, ParachuteMovementRef_CP);
	static_assert(UTslParachuteAnimInstance_ParachuteMovementRef_CP_Offset == 0x388, "UTslParachuteAnimInstance::ParachuteMovementRef_CP offset is not 388");
	auto constexpr UTslParachuteAnimInstance_CharacterRef_CP_Offset = offsetof(UTslParachuteAnimInstance, CharacterRef_CP);
	static_assert(UTslParachuteAnimInstance_CharacterRef_CP_Offset == 0x390, "UTslParachuteAnimInstance::CharacterRef_CP offset is not 390");
	auto constexpr UTslParachuteAnimInstance_ParachuteRotation_CP_Offset = offsetof(UTslParachuteAnimInstance, ParachuteRotation_CP);
	static_assert(UTslParachuteAnimInstance_ParachuteRotation_CP_Offset == 0x3a0, "UTslParachuteAnimInstance::ParachuteRotation_CP offset is not 3a0");
	auto constexpr UTslParachuteAnimInstance_ParaTurn_CP_Offset = offsetof(UTslParachuteAnimInstance, ParaTurn_CP);
	static_assert(UTslParachuteAnimInstance_ParaTurn_CP_Offset == 0x3ac, "UTslParachuteAnimInstance::ParaTurn_CP offset is not 3ac");
	auto constexpr UTslParachuteAnimInstance_ParaPitch_CP_Offset = offsetof(UTslParachuteAnimInstance, ParaPitch_CP);
	static_assert(UTslParachuteAnimInstance_ParaPitch_CP_Offset == 0x3b0, "UTslParachuteAnimInstance::ParaPitch_CP offset is not 3b0");
	auto constexpr UTslParachuteAnimInstance_boolField3B4_Offset = offsetof(UTslParachuteAnimInstance, boolField3B4);
	static_assert(UTslParachuteAnimInstance_boolField3B4_Offset == 0x3b4, "UTslParachuteAnimInstance::boolField3B4 offset is not 3b4");
	auto constexpr UTslParachuteAnimInstance_IK_L_CP_Offset = offsetof(UTslParachuteAnimInstance, IK_L_CP);
	static_assert(UTslParachuteAnimInstance_IK_L_CP_Offset == 0x3c0, "UTslParachuteAnimInstance::IK_L_CP offset is not 3c0");
	auto constexpr UTslParachuteAnimInstance_IK_R_CP_Offset = offsetof(UTslParachuteAnimInstance, IK_R_CP);
	static_assert(UTslParachuteAnimInstance_IK_R_CP_Offset == 0x3f0, "UTslParachuteAnimInstance::IK_R_CP offset is not 3f0");
	auto constexpr UTslParachuteAnimInstance_IK_L_Location_CP_Offset = offsetof(UTslParachuteAnimInstance, IK_L_Location_CP);
	static_assert(UTslParachuteAnimInstance_IK_L_Location_CP_Offset == 0x420, "UTslParachuteAnimInstance::IK_L_Location_CP offset is not 420");
	auto constexpr UTslParachuteAnimInstance_IK_L_Rotation_CP_Offset = offsetof(UTslParachuteAnimInstance, IK_L_Rotation_CP);
	static_assert(UTslParachuteAnimInstance_IK_L_Rotation_CP_Offset == 0x42c, "UTslParachuteAnimInstance::IK_L_Rotation_CP offset is not 42c");
	auto constexpr UTslParachuteAnimInstance_IK_R_Location_CP_Offset = offsetof(UTslParachuteAnimInstance, IK_R_Location_CP);
	static_assert(UTslParachuteAnimInstance_IK_R_Location_CP_Offset == 0x438, "UTslParachuteAnimInstance::IK_R_Location_CP offset is not 438");
	auto constexpr UTslParachuteAnimInstance_IK_R_Rotation_CP_Offset = offsetof(UTslParachuteAnimInstance, IK_R_Rotation_CP);
	static_assert(UTslParachuteAnimInstance_IK_R_Rotation_CP_Offset == 0x444, "UTslParachuteAnimInstance::IK_R_Rotation_CP offset is not 444");
	auto constexpr UTslParachuteAnimInstance_EnableIKAlpha_CP_Offset = offsetof(UTslParachuteAnimInstance, EnableIKAlpha_CP);
	static_assert(UTslParachuteAnimInstance_EnableIKAlpha_CP_Offset == 0x450, "UTslParachuteAnimInstance::EnableIKAlpha_CP offset is not 450");
	auto constexpr UTslParachuteAnimInstance_boolField454_Offset = offsetof(UTslParachuteAnimInstance, boolField454);
	static_assert(UTslParachuteAnimInstance_boolField454_Offset == 0x454, "UTslParachuteAnimInstance::boolField454 offset is not 454");
	auto constexpr UTslParachuteAnimInstance_boolField455_Offset = offsetof(UTslParachuteAnimInstance, boolField455);
	static_assert(UTslParachuteAnimInstance_boolField455_Offset == 0x455, "UTslParachuteAnimInstance::boolField455 offset is not 455");
	auto constexpr UTslParachuteAnimInstance_ClientRotYawScale_Offset = offsetof(UTslParachuteAnimInstance, ClientRotYawScale);
	static_assert(UTslParachuteAnimInstance_ClientRotYawScale_Offset == 0x458, "UTslParachuteAnimInstance::ClientRotYawScale offset is not 458");
	auto constexpr UTslParachuteAnimInstance_LeftItemBoneName_Offset = offsetof(UTslParachuteAnimInstance, LeftItemBoneName);
	static_assert(UTslParachuteAnimInstance_LeftItemBoneName_Offset == 0x460, "UTslParachuteAnimInstance::LeftItemBoneName offset is not 460");
	auto constexpr UTslParachuteAnimInstance_RightItemBoneName_Offset = offsetof(UTslParachuteAnimInstance, RightItemBoneName);
	static_assert(UTslParachuteAnimInstance_RightItemBoneName_Offset == 0x468, "UTslParachuteAnimInstance::RightItemBoneName offset is not 468");
	auto constexpr UTslParachuteAnimInstance_LandingCheckVelocityScalar_Offset = offsetof(UTslParachuteAnimInstance, LandingCheckVelocityScalar);
	static_assert(UTslParachuteAnimInstance_LandingCheckVelocityScalar_Offset == 0x470, "UTslParachuteAnimInstance::LandingCheckVelocityScalar offset is not 470");
	auto constexpr UTslParachuteAnimInstance_LandingCheckStartAltitude_Offset = offsetof(UTslParachuteAnimInstance, LandingCheckStartAltitude);
	static_assert(UTslParachuteAnimInstance_LandingCheckStartAltitude_Offset == 0x474, "UTslParachuteAnimInstance::LandingCheckStartAltitude offset is not 474");
	auto constexpr UTslParachuteAnimInstance_LandingCheckTickTime_Offset = offsetof(UTslParachuteAnimInstance, LandingCheckTickTime);
	static_assert(UTslParachuteAnimInstance_LandingCheckTickTime_Offset == 0x478, "UTslParachuteAnimInstance::LandingCheckTickTime offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
