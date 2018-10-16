#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPurchaseInfo // Size: 0x40
{
public:
    FString Identifier; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.PurchaseInfo.Identifier */
    FString DisplayName; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.PurchaseInfo.DisplayName */
    FString DisplayDescription; /* Ofs: 0x20 Size: 0x10 StrProperty Engine.PurchaseInfo.DisplayDescription */
    FString DisplayPrice; /* Ofs: 0x30 Size: 0x10 StrProperty Engine.PurchaseInfo.DisplayPrice */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPurchaseInfo = sizeof(FPurchaseInfo); // 64
    static_assert(sizeof(FPurchaseInfo) == 0x40, "Size of FPurchaseInfo is not correct.");
	auto constexpr FPurchaseInfo_Identifier_Offset = offsetof(FPurchaseInfo, Identifier);
	static_assert(FPurchaseInfo_Identifier_Offset == 0x0, "FPurchaseInfo::Identifier offset is not 0");
	auto constexpr FPurchaseInfo_DisplayName_Offset = offsetof(FPurchaseInfo, DisplayName);
	static_assert(FPurchaseInfo_DisplayName_Offset == 0x10, "FPurchaseInfo::DisplayName offset is not 10");
	auto constexpr FPurchaseInfo_DisplayDescription_Offset = offsetof(FPurchaseInfo, DisplayDescription);
	static_assert(FPurchaseInfo_DisplayDescription_Offset == 0x20, "FPurchaseInfo::DisplayDescription offset is not 20");
	auto constexpr FPurchaseInfo_DisplayPrice_Offset = offsetof(FPurchaseInfo, DisplayPrice);
	static_assert(FPurchaseInfo_DisplayPrice_Offset == 0x30, "FPurchaseInfo::DisplayPrice offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
