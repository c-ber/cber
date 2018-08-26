#pragma once
#include "USceneComponent.hpp"
#include "FVector.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpringArmComponent // Size: 0x520
	: public USceneComponent // Size: 0x490
{
private:
	typedef USpringArmComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(241); // id32("Class Engine.SpringArmComponent")
		return ptr;
	}
	float TargetArmLength; /* Ofs: 0x490 Size: 0x4 - FloatProperty Engine.SpringArmComponent.TargetArmLength */
	FVector SocketOffset; /* Ofs: 0x494 Size: 0xC - StructProperty Engine.SpringArmComponent.SocketOffset */
	FVector TargetOffset; /* Ofs: 0x4A0 Size: 0xC - StructProperty Engine.SpringArmComponent.TargetOffset */
	float ProbeSize; /* Ofs: 0x4AC Size: 0x4 - FloatProperty Engine.SpringArmComponent.ProbeSize */
	TEnumAsByte<enum ECollisionChannel> ProbeChannel; /* Ofs: 0x4B0 Size: 0x1 - ByteProperty Engine.SpringArmComponent.ProbeChannel */
	uint8_t UnknownData4B1[0x3];
	uint8_t boolField4B4;
	uint8_t boolField4B5;
	uint8_t UnknownData4B6[0x2];
	float CameraLagSpeed; /* Ofs: 0x4B8 Size: 0x4 - FloatProperty Engine.SpringArmComponent.CameraLagSpeed */
	float CameraRotationLagSpeed; /* Ofs: 0x4BC Size: 0x4 - FloatProperty Engine.SpringArmComponent.CameraRotationLagSpeed */
	float CameraLagMaxTimeStep; /* Ofs: 0x4C0 Size: 0x4 - FloatProperty Engine.SpringArmComponent.CameraLagMaxTimeStep */
	float CameraLagMaxDistance; /* Ofs: 0x4C4 Size: 0x4 - FloatProperty Engine.SpringArmComponent.CameraLagMaxDistance */
	uint8_t UnknownData4C8[0x58];


	inline bool SetTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetSocketOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x494, value); }
	inline bool SetTargetOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetProbeSize(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetProbeChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0x4B0, value); }
	inline bool bDoCollisionTest()
	{
		return boolField4B4& 0x1;
	}
	inline bool SetbDoCollisionTest(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUsePawnControlRotation()
	{
		return boolField4B4& 0x2;
	}
	inline bool SetbUsePawnControlRotation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bInheritPitch()
	{
		return boolField4B4& 0x4;
	}
	inline bool SetbInheritPitch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bInheritYaw()
	{
		return boolField4B4& 0x8;
	}
	inline bool SetbInheritYaw(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bInheritRoll()
	{
		return boolField4B4& 0x10;
	}
	inline bool SetbInheritRoll(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bEnableCameraLag()
	{
		return boolField4B4& 0x20;
	}
	inline bool SetbEnableCameraLag(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bEnableCameraRotationLag()
	{
		return boolField4B4& 0x40;
	}
	inline bool SetbEnableCameraRotationLag(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bUseCameraLagSubstepping()
	{
		return boolField4B4& 0x80;
	}
	inline bool SetbUseCameraLagSubstepping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bDrawDebugLagMarkers()
	{
		return boolField4B5& 0x1;
	}
	inline bool SetbDrawDebugLagMarkers(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCameraLagSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetCameraRotationLagSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x4BC, value); }
	inline bool SetCameraLagMaxTimeStep(t_structHelper inst, float value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetCameraLagMaxDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4C4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpringArmComponent = sizeof(USpringArmComponent); // 1312
    static_assert(sizeof(USpringArmComponent) == 0x520, "Size of USpringArmComponent is not correct.");
	auto constexpr USpringArmComponent_TargetArmLength_Offset = offsetof(USpringArmComponent, TargetArmLength);
	static_assert(USpringArmComponent_TargetArmLength_Offset == 0x490, "USpringArmComponent::TargetArmLength offset is not 490");
	auto constexpr USpringArmComponent_SocketOffset_Offset = offsetof(USpringArmComponent, SocketOffset);
	static_assert(USpringArmComponent_SocketOffset_Offset == 0x494, "USpringArmComponent::SocketOffset offset is not 494");
	auto constexpr USpringArmComponent_TargetOffset_Offset = offsetof(USpringArmComponent, TargetOffset);
	static_assert(USpringArmComponent_TargetOffset_Offset == 0x4a0, "USpringArmComponent::TargetOffset offset is not 4a0");
	auto constexpr USpringArmComponent_ProbeSize_Offset = offsetof(USpringArmComponent, ProbeSize);
	static_assert(USpringArmComponent_ProbeSize_Offset == 0x4ac, "USpringArmComponent::ProbeSize offset is not 4ac");
	auto constexpr USpringArmComponent_ProbeChannel_Offset = offsetof(USpringArmComponent, ProbeChannel);
	static_assert(USpringArmComponent_ProbeChannel_Offset == 0x4b0, "USpringArmComponent::ProbeChannel offset is not 4b0");
	auto constexpr USpringArmComponent_boolField4B4_Offset = offsetof(USpringArmComponent, boolField4B4);
	static_assert(USpringArmComponent_boolField4B4_Offset == 0x4b4, "USpringArmComponent::boolField4B4 offset is not 4b4");
	auto constexpr USpringArmComponent_boolField4B5_Offset = offsetof(USpringArmComponent, boolField4B5);
	static_assert(USpringArmComponent_boolField4B5_Offset == 0x4b5, "USpringArmComponent::boolField4B5 offset is not 4b5");
	auto constexpr USpringArmComponent_CameraLagSpeed_Offset = offsetof(USpringArmComponent, CameraLagSpeed);
	static_assert(USpringArmComponent_CameraLagSpeed_Offset == 0x4b8, "USpringArmComponent::CameraLagSpeed offset is not 4b8");
	auto constexpr USpringArmComponent_CameraRotationLagSpeed_Offset = offsetof(USpringArmComponent, CameraRotationLagSpeed);
	static_assert(USpringArmComponent_CameraRotationLagSpeed_Offset == 0x4bc, "USpringArmComponent::CameraRotationLagSpeed offset is not 4bc");
	auto constexpr USpringArmComponent_CameraLagMaxTimeStep_Offset = offsetof(USpringArmComponent, CameraLagMaxTimeStep);
	static_assert(USpringArmComponent_CameraLagMaxTimeStep_Offset == 0x4c0, "USpringArmComponent::CameraLagMaxTimeStep offset is not 4c0");
	auto constexpr USpringArmComponent_CameraLagMaxDistance_Offset = offsetof(USpringArmComponent, CameraLagMaxDistance);
	static_assert(USpringArmComponent_CameraLagMaxDistance_Offset == 0x4c4, "USpringArmComponent::CameraLagMaxDistance offset is not 4c4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
