#pragma once
#include "UStaticMeshActor.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInteractiveFoliageActor // Size: 0x480
	: public UStaticMeshActor // Size: 0x420
{
private:
	typedef UInteractiveFoliageActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(392); // id32("Class Foliage.InteractiveFoliageActor")
		return ptr;
	}
//	ExternalPtr<struct UCapsuleComponent> CapsuleComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Foliage.InteractiveFoliageActor.CapsuleComponent */
	FVector TouchingActorEntryPosition; /* Ofs: 0x420 Size: 0xC - StructProperty Foliage.InteractiveFoliageActor.TouchingActorEntryPosition */
	FVector FoliageVelocity; /* Ofs: 0x42C Size: 0xC - StructProperty Foliage.InteractiveFoliageActor.FoliageVelocity */
	FVector FoliageForce; /* Ofs: 0x438 Size: 0xC - StructProperty Foliage.InteractiveFoliageActor.FoliageForce */
	FVector FoliagePosition; /* Ofs: 0x444 Size: 0xC - StructProperty Foliage.InteractiveFoliageActor.FoliagePosition */
	float FoliageDamageImpulseScale; /* Ofs: 0x450 Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.FoliageDamageImpulseScale */
	float FoliageTouchImpulseScale; /* Ofs: 0x454 Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.FoliageTouchImpulseScale */
	float FoliageStiffness; /* Ofs: 0x458 Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.FoliageStiffness */
	float FoliageStiffnessQuadratic; /* Ofs: 0x45C Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.FoliageStiffnessQuadratic */
	float FoliageDamping; /* Ofs: 0x460 Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.FoliageDamping */
	float MaxDamageImpulse; /* Ofs: 0x464 Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.MaxDamageImpulse */
	float MaxTouchImpulse; /* Ofs: 0x468 Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.MaxTouchImpulse */
	float MaxForce; /* Ofs: 0x46C Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.MaxForce */
	float Mass; /* Ofs: 0x470 Size: 0x4 - FloatProperty Foliage.InteractiveFoliageActor.Mass */
	uint8_t UnknownData474[0xC];


//	inline bool SetCapsuleComponent(t_structHelper inst, ExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetTouchingActorEntryPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x420, value); }
	inline bool SetFoliageVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x42C, value); }
	inline bool SetFoliageForce(t_structHelper inst, FVector value) { inst.WriteOffset(0x438, value); }
	inline bool SetFoliagePosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x444, value); }
	inline bool SetFoliageDamageImpulseScale(t_structHelper inst, float value) { inst.WriteOffset(0x450, value); }
	inline bool SetFoliageTouchImpulseScale(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool SetFoliageStiffness(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool SetFoliageStiffnessQuadratic(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetFoliageDamping(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetMaxDamageImpulse(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetMaxTouchImpulse(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool SetMaxForce(t_structHelper inst, float value) { inst.WriteOffset(0x46C, value); }
	inline bool SetMass(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInteractiveFoliageActor = sizeof(UInteractiveFoliageActor); // 1152
    static_assert(sizeof(UInteractiveFoliageActor) == 0x480, "Size of UInteractiveFoliageActor is not correct.");
//	auto constexpr UInteractiveFoliageActor_CapsuleComponent_Offset = offsetof(UInteractiveFoliageActor, CapsuleComponent);
//	static_assert(UInteractiveFoliageActor_CapsuleComponent_Offset == 0x418, "UInteractiveFoliageActor::CapsuleComponent offset is not 418");
	auto constexpr UInteractiveFoliageActor_TouchingActorEntryPosition_Offset = offsetof(UInteractiveFoliageActor, TouchingActorEntryPosition);
	static_assert(UInteractiveFoliageActor_TouchingActorEntryPosition_Offset == 0x420, "UInteractiveFoliageActor::TouchingActorEntryPosition offset is not 420");
	auto constexpr UInteractiveFoliageActor_FoliageVelocity_Offset = offsetof(UInteractiveFoliageActor, FoliageVelocity);
	static_assert(UInteractiveFoliageActor_FoliageVelocity_Offset == 0x42c, "UInteractiveFoliageActor::FoliageVelocity offset is not 42c");
	auto constexpr UInteractiveFoliageActor_FoliageForce_Offset = offsetof(UInteractiveFoliageActor, FoliageForce);
	static_assert(UInteractiveFoliageActor_FoliageForce_Offset == 0x438, "UInteractiveFoliageActor::FoliageForce offset is not 438");
	auto constexpr UInteractiveFoliageActor_FoliagePosition_Offset = offsetof(UInteractiveFoliageActor, FoliagePosition);
	static_assert(UInteractiveFoliageActor_FoliagePosition_Offset == 0x444, "UInteractiveFoliageActor::FoliagePosition offset is not 444");
	auto constexpr UInteractiveFoliageActor_FoliageDamageImpulseScale_Offset = offsetof(UInteractiveFoliageActor, FoliageDamageImpulseScale);
	static_assert(UInteractiveFoliageActor_FoliageDamageImpulseScale_Offset == 0x450, "UInteractiveFoliageActor::FoliageDamageImpulseScale offset is not 450");
	auto constexpr UInteractiveFoliageActor_FoliageTouchImpulseScale_Offset = offsetof(UInteractiveFoliageActor, FoliageTouchImpulseScale);
	static_assert(UInteractiveFoliageActor_FoliageTouchImpulseScale_Offset == 0x454, "UInteractiveFoliageActor::FoliageTouchImpulseScale offset is not 454");
	auto constexpr UInteractiveFoliageActor_FoliageStiffness_Offset = offsetof(UInteractiveFoliageActor, FoliageStiffness);
	static_assert(UInteractiveFoliageActor_FoliageStiffness_Offset == 0x458, "UInteractiveFoliageActor::FoliageStiffness offset is not 458");
	auto constexpr UInteractiveFoliageActor_FoliageStiffnessQuadratic_Offset = offsetof(UInteractiveFoliageActor, FoliageStiffnessQuadratic);
	static_assert(UInteractiveFoliageActor_FoliageStiffnessQuadratic_Offset == 0x45c, "UInteractiveFoliageActor::FoliageStiffnessQuadratic offset is not 45c");
	auto constexpr UInteractiveFoliageActor_FoliageDamping_Offset = offsetof(UInteractiveFoliageActor, FoliageDamping);
	static_assert(UInteractiveFoliageActor_FoliageDamping_Offset == 0x460, "UInteractiveFoliageActor::FoliageDamping offset is not 460");
	auto constexpr UInteractiveFoliageActor_MaxDamageImpulse_Offset = offsetof(UInteractiveFoliageActor, MaxDamageImpulse);
	static_assert(UInteractiveFoliageActor_MaxDamageImpulse_Offset == 0x464, "UInteractiveFoliageActor::MaxDamageImpulse offset is not 464");
	auto constexpr UInteractiveFoliageActor_MaxTouchImpulse_Offset = offsetof(UInteractiveFoliageActor, MaxTouchImpulse);
	static_assert(UInteractiveFoliageActor_MaxTouchImpulse_Offset == 0x468, "UInteractiveFoliageActor::MaxTouchImpulse offset is not 468");
	auto constexpr UInteractiveFoliageActor_MaxForce_Offset = offsetof(UInteractiveFoliageActor, MaxForce);
	static_assert(UInteractiveFoliageActor_MaxForce_Offset == 0x46c, "UInteractiveFoliageActor::MaxForce offset is not 46c");
	auto constexpr UInteractiveFoliageActor_Mass_Offset = offsetof(UInteractiveFoliageActor, Mass);
	static_assert(UInteractiveFoliageActor_Mass_Offset == 0x470, "UInteractiveFoliageActor::Mass offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
