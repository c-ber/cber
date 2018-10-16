#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuCustomizableObjectIdPair // Size: 0x20
{
public:
    FString CustomizableObjectKey; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuCustomizableObjectIdPair.CustomizableObjectKey */
    FString CustomizableObjectValue; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.WuCustomizableObjectIdPair.CustomizableObjectValue */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuCustomizableObjectIdPair = sizeof(FWuCustomizableObjectIdPair); // 32
    static_assert(sizeof(FWuCustomizableObjectIdPair) == 0x20, "Size of FWuCustomizableObjectIdPair is not correct.");
	auto constexpr FWuCustomizableObjectIdPair_CustomizableObjectKey_Offset = offsetof(FWuCustomizableObjectIdPair, CustomizableObjectKey);
	static_assert(FWuCustomizableObjectIdPair_CustomizableObjectKey_Offset == 0x0, "FWuCustomizableObjectIdPair::CustomizableObjectKey offset is not 0");
	auto constexpr FWuCustomizableObjectIdPair_CustomizableObjectValue_Offset = offsetof(FWuCustomizableObjectIdPair, CustomizableObjectValue);
	static_assert(FWuCustomizableObjectIdPair_CustomizableObjectValue_Offset == 0x10, "FWuCustomizableObjectIdPair::CustomizableObjectValue offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
