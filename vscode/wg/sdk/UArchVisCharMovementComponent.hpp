#pragma once
#include "UCharacterMovementComponent.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UArchVisCharMovementComponent // Size: 0x8D0
	: public UCharacterMovementComponent // Size: 0x880
{
private:
	typedef UArchVisCharMovementComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2161); // id32("Class ArchVisCharacter.ArchVisCharMovementComponent")
		return ptr;
	}
//	FRotator RotationalAcceleration; /* Ofs: 0x878 Size: 0xC - StructProperty ArchVisCharacter.ArchVisCharMovementComponent.RotationalAcceleration */
	uint8_t UnknownData880[0x4];
	FRotator RotationalDeceleration; /* Ofs: 0x884 Size: 0xC - StructProperty ArchVisCharacter.ArchVisCharMovementComponent.RotationalDeceleration */
	FRotator MaxRotationalVelocity; /* Ofs: 0x890 Size: 0xC - StructProperty ArchVisCharacter.ArchVisCharMovementComponent.MaxRotationalVelocity */
	float MinPitch; /* Ofs: 0x89C Size: 0x4 - FloatProperty ArchVisCharacter.ArchVisCharMovementComponent.MinPitch */
	float MaxPitch; /* Ofs: 0x8A0 Size: 0x4 - FloatProperty ArchVisCharacter.ArchVisCharMovementComponent.MaxPitch */
	float WalkingFriction; /* Ofs: 0x8A4 Size: 0x4 - FloatProperty ArchVisCharacter.ArchVisCharMovementComponent.WalkingFriction */
	float WalkingSpeed; /* Ofs: 0x8A8 Size: 0x4 - FloatProperty ArchVisCharacter.ArchVisCharMovementComponent.WalkingSpeed */
	float WalkingAcceleration; /* Ofs: 0x8AC Size: 0x4 - FloatProperty ArchVisCharacter.ArchVisCharMovementComponent.WalkingAcceleration */
	uint8_t UnknownData8B0[0x20];


//	inline bool SetRotationalAcceleration(t_structHelper inst, FRotator value) { inst.WriteOffset(0x878, value); }
	inline bool SetRotationalDeceleration(t_structHelper inst, FRotator value) { inst.WriteOffset(0x884, value); }
	inline bool SetMaxRotationalVelocity(t_structHelper inst, FRotator value) { inst.WriteOffset(0x890, value); }
	inline bool SetMinPitch(t_structHelper inst, float value) { inst.WriteOffset(0x89C, value); }
	inline bool SetMaxPitch(t_structHelper inst, float value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetWalkingFriction(t_structHelper inst, float value) { inst.WriteOffset(0x8A4, value); }
	inline bool SetWalkingSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x8A8, value); }
	inline bool SetWalkingAcceleration(t_structHelper inst, float value) { inst.WriteOffset(0x8AC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUArchVisCharMovementComponent = sizeof(UArchVisCharMovementComponent); // 2256
    static_assert(sizeof(UArchVisCharMovementComponent) == 0x8D0, "Size of UArchVisCharMovementComponent is not correct.");
//	auto constexpr UArchVisCharMovementComponent_RotationalAcceleration_Offset = offsetof(UArchVisCharMovementComponent, RotationalAcceleration);
//	static_assert(UArchVisCharMovementComponent_RotationalAcceleration_Offset == 0x878, "UArchVisCharMovementComponent::RotationalAcceleration offset is not 878");
	auto constexpr UArchVisCharMovementComponent_RotationalDeceleration_Offset = offsetof(UArchVisCharMovementComponent, RotationalDeceleration);
	static_assert(UArchVisCharMovementComponent_RotationalDeceleration_Offset == 0x884, "UArchVisCharMovementComponent::RotationalDeceleration offset is not 884");
	auto constexpr UArchVisCharMovementComponent_MaxRotationalVelocity_Offset = offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity);
	static_assert(UArchVisCharMovementComponent_MaxRotationalVelocity_Offset == 0x890, "UArchVisCharMovementComponent::MaxRotationalVelocity offset is not 890");
	auto constexpr UArchVisCharMovementComponent_MinPitch_Offset = offsetof(UArchVisCharMovementComponent, MinPitch);
	static_assert(UArchVisCharMovementComponent_MinPitch_Offset == 0x89c, "UArchVisCharMovementComponent::MinPitch offset is not 89c");
	auto constexpr UArchVisCharMovementComponent_MaxPitch_Offset = offsetof(UArchVisCharMovementComponent, MaxPitch);
	static_assert(UArchVisCharMovementComponent_MaxPitch_Offset == 0x8a0, "UArchVisCharMovementComponent::MaxPitch offset is not 8a0");
	auto constexpr UArchVisCharMovementComponent_WalkingFriction_Offset = offsetof(UArchVisCharMovementComponent, WalkingFriction);
	static_assert(UArchVisCharMovementComponent_WalkingFriction_Offset == 0x8a4, "UArchVisCharMovementComponent::WalkingFriction offset is not 8a4");
	auto constexpr UArchVisCharMovementComponent_WalkingSpeed_Offset = offsetof(UArchVisCharMovementComponent, WalkingSpeed);
	static_assert(UArchVisCharMovementComponent_WalkingSpeed_Offset == 0x8a8, "UArchVisCharMovementComponent::WalkingSpeed offset is not 8a8");
	auto constexpr UArchVisCharMovementComponent_WalkingAcceleration_Offset = offsetof(UArchVisCharMovementComponent, WalkingAcceleration);
	static_assert(UArchVisCharMovementComponent_WalkingAcceleration_Offset == 0x8ac, "UArchVisCharMovementComponent::WalkingAcceleration offset is not 8ac");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
