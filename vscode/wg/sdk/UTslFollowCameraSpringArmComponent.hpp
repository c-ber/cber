#pragma once
#include "USpringArmComponent.hpp"
#include "EFollowCameraMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslFollowCameraSpringArmComponent // Size: 0x540
	: public USpringArmComponent // Size: 0x520
{
private:
	typedef UTslFollowCameraSpringArmComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1382); // id32("Class TslGame.TslFollowCameraSpringArmComponent")
		return ptr;
	}
//	float MinTargetArmLength; /* Ofs: 0x518 Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.MinTargetArmLength */
//	float MaxTargetArmLength; /* Ofs: 0x51C Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.MaxTargetArmLength */
	float FollowArmTargetArmLength; /* Ofs: 0x520 Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.FollowArmTargetArmLength */
	float FollowAircraftArmTargetArmLength; /* Ofs: 0x524 Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.FollowAircraftArmTargetArmLength */
	float FollowParachutingArmTargetArmLength; /* Ofs: 0x528 Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.FollowParachutingArmTargetArmLength */
	float FollowFallingWithParachuteArmTargetArmLength; /* Ofs: 0x52C Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.FollowFallingWithParachuteArmTargetArmLength */
	float FollowVehicleArmTargetArmLength; /* Ofs: 0x530 Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.FollowVehicleArmTargetArmLength */
	float ZoomStep; /* Ofs: 0x534 Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.ZoomStep */
	float EndTargetArmLength; /* Ofs: 0x538 Size: 0x4 - FloatProperty TslGame.TslFollowCameraSpringArmComponent.EndTargetArmLength */
	uint8_t boolField53C;
	TEnumAsByte<enum EFollowCameraMode> LastFollowCameraMode; /* Ofs: 0x53D Size: 0x1 - EnumProperty TslGame.TslFollowCameraSpringArmComponent.LastFollowCameraMode */
	uint8_t UnknownData53E[0x2];


//	inline bool SetMinTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
//	inline bool SetMaxTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool SetFollowArmTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetFollowAircraftArmTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x524, value); }
	inline bool SetFollowParachutingArmTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x528, value); }
	inline bool SetFollowFallingWithParachuteArmTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x52C, value); }
	inline bool SetFollowVehicleArmTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x530, value); }
	inline bool SetZoomStep(t_structHelper inst, float value) { inst.WriteOffset(0x534, value); }
	inline bool SetEndTargetArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x538, value); }
	inline bool bZoomIn()
	{
		return boolField53C& 0x1;
	}
	inline bool SetbZoomIn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x53C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLastFollowCameraMode(t_structHelper inst, TEnumAsByte<enum EFollowCameraMode> value) { inst.WriteOffset(0x53D, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslFollowCameraSpringArmComponent = sizeof(UTslFollowCameraSpringArmComponent); // 1344
    static_assert(sizeof(UTslFollowCameraSpringArmComponent) == 0x540, "Size of UTslFollowCameraSpringArmComponent is not correct.");
//	auto constexpr UTslFollowCameraSpringArmComponent_MinTargetArmLength_Offset = offsetof(UTslFollowCameraSpringArmComponent, MinTargetArmLength);
//	static_assert(UTslFollowCameraSpringArmComponent_MinTargetArmLength_Offset == 0x518, "UTslFollowCameraSpringArmComponent::MinTargetArmLength offset is not 518");
//	auto constexpr UTslFollowCameraSpringArmComponent_MaxTargetArmLength_Offset = offsetof(UTslFollowCameraSpringArmComponent, MaxTargetArmLength);
//	static_assert(UTslFollowCameraSpringArmComponent_MaxTargetArmLength_Offset == 0x51c, "UTslFollowCameraSpringArmComponent::MaxTargetArmLength offset is not 51c");
	auto constexpr UTslFollowCameraSpringArmComponent_FollowArmTargetArmLength_Offset = offsetof(UTslFollowCameraSpringArmComponent, FollowArmTargetArmLength);
	static_assert(UTslFollowCameraSpringArmComponent_FollowArmTargetArmLength_Offset == 0x520, "UTslFollowCameraSpringArmComponent::FollowArmTargetArmLength offset is not 520");
	auto constexpr UTslFollowCameraSpringArmComponent_FollowAircraftArmTargetArmLength_Offset = offsetof(UTslFollowCameraSpringArmComponent, FollowAircraftArmTargetArmLength);
	static_assert(UTslFollowCameraSpringArmComponent_FollowAircraftArmTargetArmLength_Offset == 0x524, "UTslFollowCameraSpringArmComponent::FollowAircraftArmTargetArmLength offset is not 524");
	auto constexpr UTslFollowCameraSpringArmComponent_FollowParachutingArmTargetArmLength_Offset = offsetof(UTslFollowCameraSpringArmComponent, FollowParachutingArmTargetArmLength);
	static_assert(UTslFollowCameraSpringArmComponent_FollowParachutingArmTargetArmLength_Offset == 0x528, "UTslFollowCameraSpringArmComponent::FollowParachutingArmTargetArmLength offset is not 528");
	auto constexpr UTslFollowCameraSpringArmComponent_FollowFallingWithParachuteArmTargetArmLength_Offset = offsetof(UTslFollowCameraSpringArmComponent, FollowFallingWithParachuteArmTargetArmLength);
	static_assert(UTslFollowCameraSpringArmComponent_FollowFallingWithParachuteArmTargetArmLength_Offset == 0x52c, "UTslFollowCameraSpringArmComponent::FollowFallingWithParachuteArmTargetArmLength offset is not 52c");
	auto constexpr UTslFollowCameraSpringArmComponent_FollowVehicleArmTargetArmLength_Offset = offsetof(UTslFollowCameraSpringArmComponent, FollowVehicleArmTargetArmLength);
	static_assert(UTslFollowCameraSpringArmComponent_FollowVehicleArmTargetArmLength_Offset == 0x530, "UTslFollowCameraSpringArmComponent::FollowVehicleArmTargetArmLength offset is not 530");
	auto constexpr UTslFollowCameraSpringArmComponent_ZoomStep_Offset = offsetof(UTslFollowCameraSpringArmComponent, ZoomStep);
	static_assert(UTslFollowCameraSpringArmComponent_ZoomStep_Offset == 0x534, "UTslFollowCameraSpringArmComponent::ZoomStep offset is not 534");
	auto constexpr UTslFollowCameraSpringArmComponent_EndTargetArmLength_Offset = offsetof(UTslFollowCameraSpringArmComponent, EndTargetArmLength);
	static_assert(UTslFollowCameraSpringArmComponent_EndTargetArmLength_Offset == 0x538, "UTslFollowCameraSpringArmComponent::EndTargetArmLength offset is not 538");
	auto constexpr UTslFollowCameraSpringArmComponent_boolField53C_Offset = offsetof(UTslFollowCameraSpringArmComponent, boolField53C);
	static_assert(UTslFollowCameraSpringArmComponent_boolField53C_Offset == 0x53c, "UTslFollowCameraSpringArmComponent::boolField53C offset is not 53c");
	auto constexpr UTslFollowCameraSpringArmComponent_LastFollowCameraMode_Offset = offsetof(UTslFollowCameraSpringArmComponent, LastFollowCameraMode);
	static_assert(UTslFollowCameraSpringArmComponent_LastFollowCameraMode_Offset == 0x53d, "UTslFollowCameraSpringArmComponent::LastFollowCameraMode offset is not 53d");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
