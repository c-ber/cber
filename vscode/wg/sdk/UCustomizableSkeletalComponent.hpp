#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomizableSkeletalComponent // Size: 0x4E0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UCustomizableSkeletalComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1356); // id32("Class CustomizableObject.CustomizableSkeletalComponent")
		return ptr;
	}
	uint8_t boolField490;
	uint8_t UnknownData491[0x3];
	float SkippedLastRenderTime; /* Ofs: 0x494 Size: 0x4 - FloatProperty CustomizableObject.CustomizableSkeletalComponent.SkippedLastRenderTime */
	ExternalPtr<struct UCustomizableObjectInstance> CustomizableObjectInstance; /* Ofs: 0x498 Size: 0x8 - ObjectProperty CustomizableObject.CustomizableSkeletalComponent.CustomizableObjectInstance */
	uint8_t UnknownData4A0[0x40];


	inline bool bPendingUpdateSkeletalMesh()
	{
		return boolField490& 0x1;
	}
	inline bool SetbPendingUpdateSkeletalMesh(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSkippedLastRenderTime(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
	inline bool SetCustomizableObjectInstance(t_structHelper inst, ExternalPtr<struct UCustomizableObjectInstance> value) { inst.WriteOffset(0x498, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomizableSkeletalComponent = sizeof(UCustomizableSkeletalComponent); // 1248
    static_assert(sizeof(UCustomizableSkeletalComponent) == 0x4E0, "Size of UCustomizableSkeletalComponent is not correct.");
	auto constexpr UCustomizableSkeletalComponent_boolField490_Offset = offsetof(UCustomizableSkeletalComponent, boolField490);
	static_assert(UCustomizableSkeletalComponent_boolField490_Offset == 0x490, "UCustomizableSkeletalComponent::boolField490 offset is not 490");
	auto constexpr UCustomizableSkeletalComponent_SkippedLastRenderTime_Offset = offsetof(UCustomizableSkeletalComponent, SkippedLastRenderTime);
	static_assert(UCustomizableSkeletalComponent_SkippedLastRenderTime_Offset == 0x494, "UCustomizableSkeletalComponent::SkippedLastRenderTime offset is not 494");
	auto constexpr UCustomizableSkeletalComponent_CustomizableObjectInstance_Offset = offsetof(UCustomizableSkeletalComponent, CustomizableObjectInstance);
	static_assert(UCustomizableSkeletalComponent_CustomizableObjectInstance_Offset == 0x498, "UCustomizableSkeletalComponent::CustomizableObjectInstance offset is not 498");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
