#pragma once
#include "UCharacter.hpp"
#include "EGender.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMutableCharacter // Size: 0x8C0
	: public UCharacter // Size: 0x870
{
private:
	typedef UMutableCharacter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1870); // id32("Class TslGame.MutableCharacter")
		return ptr;
	}
	uint8_t UnknownData870[0x20];
	TEnumAsByte<enum EGender> Gender; /* Ofs: 0x890 Size: 0x1 - EnumProperty TslGame.MutableCharacter.Gender */
	uint8_t UnknownData891[0x7];
	ExternalPtr<struct UCustomizableObjectInstance> CustomizableObjectInstance; /* Ofs: 0x898 Size: 0x8 - ObjectProperty TslGame.MutableCharacter.CustomizableObjectInstance */
	ExternalPtr<struct UTslCustomizableSkeletalComponent> CustomizableSkeletalComponent; /* Ofs: 0x8A0 Size: 0x8 - ObjectProperty TslGame.MutableCharacter.CustomizableSkeletalComponent */
	TArray<uint8_t> InstanceDescriptor; /* Ofs: 0x8A8 Size: 0x10 - ArrayProperty TslGame.MutableCharacter.InstanceDescriptor */
	uint8_t UnknownData8B8[0x8];


	inline bool SetGender(t_structHelper inst, TEnumAsByte<enum EGender> value) { inst.WriteOffset(0x890, value); }
	inline bool SetCustomizableObjectInstance(t_structHelper inst, ExternalPtr<struct UCustomizableObjectInstance> value) { inst.WriteOffset(0x898, value); }
	inline bool SetCustomizableSkeletalComponent(t_structHelper inst, ExternalPtr<struct UTslCustomizableSkeletalComponent> value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetInstanceDescriptor(t_structHelper inst, TArray<uint8_t> value) { inst.WriteOffset(0x8A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMutableCharacter = sizeof(UMutableCharacter); // 2240
    static_assert(sizeof(UMutableCharacter) == 0x8C0, "Size of UMutableCharacter is not correct.");
	auto constexpr UMutableCharacter_Gender_Offset = offsetof(UMutableCharacter, Gender);
	static_assert(UMutableCharacter_Gender_Offset == 0x890, "UMutableCharacter::Gender offset is not 890");
	auto constexpr UMutableCharacter_CustomizableObjectInstance_Offset = offsetof(UMutableCharacter, CustomizableObjectInstance);
	static_assert(UMutableCharacter_CustomizableObjectInstance_Offset == 0x898, "UMutableCharacter::CustomizableObjectInstance offset is not 898");
	auto constexpr UMutableCharacter_CustomizableSkeletalComponent_Offset = offsetof(UMutableCharacter, CustomizableSkeletalComponent);
	static_assert(UMutableCharacter_CustomizableSkeletalComponent_Offset == 0x8a0, "UMutableCharacter::CustomizableSkeletalComponent offset is not 8a0");
	auto constexpr UMutableCharacter_InstanceDescriptor_Offset = offsetof(UMutableCharacter, InstanceDescriptor);
	static_assert(UMutableCharacter_InstanceDescriptor_Offset == 0x8a8, "UMutableCharacter::InstanceDescriptor offset is not 8a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
