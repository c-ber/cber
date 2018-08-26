#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicalAnimationComponent // Size: 0x230
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UPhysicalAnimationComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1810); // id32("Class Engine.PhysicalAnimationComponent")
		return ptr;
	}
//	float StrengthMultiplyer; /* Ofs: 0x1E8 Size: 0x4 - FloatProperty Engine.PhysicalAnimationComponent.StrengthMultiplyer */
	ExternalPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; /* Ofs: 0x1F0 Size: 0x8 - ObjectProperty Engine.PhysicalAnimationComponent.SkeletalMeshComponent */
	uint8_t UnknownData1F8[0x38];


//	inline bool SetStrengthMultiplyer(t_structHelper inst, float value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetSkeletalMeshComponent(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x1F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicalAnimationComponent = sizeof(UPhysicalAnimationComponent); // 560
    static_assert(sizeof(UPhysicalAnimationComponent) == 0x230, "Size of UPhysicalAnimationComponent is not correct.");
//	auto constexpr UPhysicalAnimationComponent_StrengthMultiplyer_Offset = offsetof(UPhysicalAnimationComponent, StrengthMultiplyer);
//	static_assert(UPhysicalAnimationComponent_StrengthMultiplyer_Offset == 0x1e8, "UPhysicalAnimationComponent::StrengthMultiplyer offset is not 1e8");
	auto constexpr UPhysicalAnimationComponent_SkeletalMeshComponent_Offset = offsetof(UPhysicalAnimationComponent, SkeletalMeshComponent);
	static_assert(UPhysicalAnimationComponent_SkeletalMeshComponent_Offset == 0x1f0, "UPhysicalAnimationComponent::SkeletalMeshComponent offset is not 1f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
