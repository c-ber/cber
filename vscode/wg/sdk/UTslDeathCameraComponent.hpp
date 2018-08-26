#pragma once
#include "UActorComponent.hpp"
#include "EViewTargetBlendFunction.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDeathCameraComponent // Size: 0x250
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslDeathCameraComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1360); // id32("Class TslGame.TslDeathCameraComponent")
		return ptr;
	}
//	FName FollowBone; /* Ofs: 0x1E8 Size: 0x8 - NameProperty TslGame.TslDeathCameraComponent.FollowBone */
	float MaxCameraDistance; /* Ofs: 0x1F0 Size: 0x4 - FloatProperty TslGame.TslDeathCameraComponent.MaxCameraDistance */
	float CollisionDistanceFactor; /* Ofs: 0x1F4 Size: 0x4 - FloatProperty TslGame.TslDeathCameraComponent.CollisionDistanceFactor */
	float DeathFollowBlendTime; /* Ofs: 0x1F8 Size: 0x4 - FloatProperty TslGame.TslDeathCameraComponent.DeathFollowBlendTime */
	TEnumAsByte<enum EViewTargetBlendFunction> DeathFollowBlendFunc; /* Ofs: 0x1FC Size: 0x1 - ByteProperty TslGame.TslDeathCameraComponent.DeathFollowBlendFunc */
	uint8_t UnknownData1FD[0x3];
	float DeathFollowBlendExp; /* Ofs: 0x200 Size: 0x4 - FloatProperty TslGame.TslDeathCameraComponent.DeathFollowBlendExp */
	float DeathFollowTime; /* Ofs: 0x204 Size: 0x4 - FloatProperty TslGame.TslDeathCameraComponent.DeathFollowTime */
	float DefaultFreeCameraArmLength; /* Ofs: 0x208 Size: 0x4 - FloatProperty TslGame.TslDeathCameraComponent.DefaultFreeCameraArmLength */
	FVector DeathLocationOffset; /* Ofs: 0x20C Size: 0xC - StructProperty TslGame.TslDeathCameraComponent.DeathLocationOffset */
	ExternalPtr<struct UTslCharacter> DeathCharacter; /* Ofs: 0x218 Size: 0x8 - ObjectProperty TslGame.TslDeathCameraComponent.DeathCharacter */
	uint8_t UnknownData220[0x30];


//	inline bool SetFollowBone(t_structHelper inst, FName value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetMaxCameraDistance(t_structHelper inst, float value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetCollisionDistanceFactor(t_structHelper inst, float value) { inst.WriteOffset(0x1F4, value); }
	inline bool SetDeathFollowBlendTime(t_structHelper inst, float value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetDeathFollowBlendFunc(t_structHelper inst, TEnumAsByte<enum EViewTargetBlendFunction> value) { inst.WriteOffset(0x1FC, value); }
	inline bool SetDeathFollowBlendExp(t_structHelper inst, float value) { inst.WriteOffset(0x200, value); }
	inline bool SetDeathFollowTime(t_structHelper inst, float value) { inst.WriteOffset(0x204, value); }
	inline bool SetDefaultFreeCameraArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x208, value); }
	inline bool SetDeathLocationOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x20C, value); }
	inline bool SetDeathCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x218, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDeathCameraComponent = sizeof(UTslDeathCameraComponent); // 592
    static_assert(sizeof(UTslDeathCameraComponent) == 0x250, "Size of UTslDeathCameraComponent is not correct.");
//	auto constexpr UTslDeathCameraComponent_FollowBone_Offset = offsetof(UTslDeathCameraComponent, FollowBone);
//	static_assert(UTslDeathCameraComponent_FollowBone_Offset == 0x1e8, "UTslDeathCameraComponent::FollowBone offset is not 1e8");
	auto constexpr UTslDeathCameraComponent_MaxCameraDistance_Offset = offsetof(UTslDeathCameraComponent, MaxCameraDistance);
	static_assert(UTslDeathCameraComponent_MaxCameraDistance_Offset == 0x1f0, "UTslDeathCameraComponent::MaxCameraDistance offset is not 1f0");
	auto constexpr UTslDeathCameraComponent_CollisionDistanceFactor_Offset = offsetof(UTslDeathCameraComponent, CollisionDistanceFactor);
	static_assert(UTslDeathCameraComponent_CollisionDistanceFactor_Offset == 0x1f4, "UTslDeathCameraComponent::CollisionDistanceFactor offset is not 1f4");
	auto constexpr UTslDeathCameraComponent_DeathFollowBlendTime_Offset = offsetof(UTslDeathCameraComponent, DeathFollowBlendTime);
	static_assert(UTslDeathCameraComponent_DeathFollowBlendTime_Offset == 0x1f8, "UTslDeathCameraComponent::DeathFollowBlendTime offset is not 1f8");
	auto constexpr UTslDeathCameraComponent_DeathFollowBlendFunc_Offset = offsetof(UTslDeathCameraComponent, DeathFollowBlendFunc);
	static_assert(UTslDeathCameraComponent_DeathFollowBlendFunc_Offset == 0x1fc, "UTslDeathCameraComponent::DeathFollowBlendFunc offset is not 1fc");
	auto constexpr UTslDeathCameraComponent_DeathFollowBlendExp_Offset = offsetof(UTslDeathCameraComponent, DeathFollowBlendExp);
	static_assert(UTslDeathCameraComponent_DeathFollowBlendExp_Offset == 0x200, "UTslDeathCameraComponent::DeathFollowBlendExp offset is not 200");
	auto constexpr UTslDeathCameraComponent_DeathFollowTime_Offset = offsetof(UTslDeathCameraComponent, DeathFollowTime);
	static_assert(UTslDeathCameraComponent_DeathFollowTime_Offset == 0x204, "UTslDeathCameraComponent::DeathFollowTime offset is not 204");
	auto constexpr UTslDeathCameraComponent_DefaultFreeCameraArmLength_Offset = offsetof(UTslDeathCameraComponent, DefaultFreeCameraArmLength);
	static_assert(UTslDeathCameraComponent_DefaultFreeCameraArmLength_Offset == 0x208, "UTslDeathCameraComponent::DefaultFreeCameraArmLength offset is not 208");
	auto constexpr UTslDeathCameraComponent_DeathLocationOffset_Offset = offsetof(UTslDeathCameraComponent, DeathLocationOffset);
	static_assert(UTslDeathCameraComponent_DeathLocationOffset_Offset == 0x20c, "UTslDeathCameraComponent::DeathLocationOffset offset is not 20c");
	auto constexpr UTslDeathCameraComponent_DeathCharacter_Offset = offsetof(UTslDeathCameraComponent, DeathCharacter);
	static_assert(UTslDeathCameraComponent_DeathCharacter_Offset == 0x218, "UTslDeathCameraComponent::DeathCharacter offset is not 218");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
