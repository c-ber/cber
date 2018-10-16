#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectIdentifier // Size: 0x30
{
public:
    FString CustomizableObjectGroupName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectIdentifier.CustomizableObjectGroupName */
    FString CustomizableObjectName; /* Ofs: 0x10 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectIdentifier.CustomizableObjectName */
    FString Guid; /* Ofs: 0x20 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectIdentifier.Guid */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectIdentifier = sizeof(FCustomizableObjectIdentifier); // 48
    static_assert(sizeof(FCustomizableObjectIdentifier) == 0x30, "Size of FCustomizableObjectIdentifier is not correct.");
	auto constexpr FCustomizableObjectIdentifier_CustomizableObjectGroupName_Offset = offsetof(FCustomizableObjectIdentifier, CustomizableObjectGroupName);
	static_assert(FCustomizableObjectIdentifier_CustomizableObjectGroupName_Offset == 0x0, "FCustomizableObjectIdentifier::CustomizableObjectGroupName offset is not 0");
	auto constexpr FCustomizableObjectIdentifier_CustomizableObjectName_Offset = offsetof(FCustomizableObjectIdentifier, CustomizableObjectName);
	static_assert(FCustomizableObjectIdentifier_CustomizableObjectName_Offset == 0x10, "FCustomizableObjectIdentifier::CustomizableObjectName offset is not 10");
	auto constexpr FCustomizableObjectIdentifier_Guid_Offset = offsetof(FCustomizableObjectIdentifier, Guid);
	static_assert(FCustomizableObjectIdentifier_Guid_Offset == 0x20, "FCustomizableObjectIdentifier::Guid offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
