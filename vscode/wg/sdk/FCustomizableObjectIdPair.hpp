#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectIdPair // Size: 0x20
{
public:
    FString CustomizableObjectGroupName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectIdPair.CustomizableObjectGroupName */
    FString CustomizableObjectName; /* Ofs: 0x10 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectIdPair.CustomizableObjectName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectIdPair = sizeof(FCustomizableObjectIdPair); // 32
    static_assert(sizeof(FCustomizableObjectIdPair) == 0x20, "Size of FCustomizableObjectIdPair is not correct.");
	auto constexpr FCustomizableObjectIdPair_CustomizableObjectGroupName_Offset = offsetof(FCustomizableObjectIdPair, CustomizableObjectGroupName);
	static_assert(FCustomizableObjectIdPair_CustomizableObjectGroupName_Offset == 0x0, "FCustomizableObjectIdPair::CustomizableObjectGroupName offset is not 0");
	auto constexpr FCustomizableObjectIdPair_CustomizableObjectName_Offset = offsetof(FCustomizableObjectIdPair, CustomizableObjectName);
	static_assert(FCustomizableObjectIdPair_CustomizableObjectName_Offset == 0x10, "FCustomizableObjectIdPair::CustomizableObjectName offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
