#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInAppPurchaseProductInfo // Size: 0xA8
{
public:
    FString Identifier; /* Ofs: 0x0 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.Identifier */
    FString TransactionIdentifier; /* Ofs: 0x10 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.TransactionIdentifier */
    FString DisplayName; /* Ofs: 0x20 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.DisplayName */
    FString DisplayDescription; /* Ofs: 0x30 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.DisplayDescription */
    FString DisplayPrice; /* Ofs: 0x40 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.DisplayPrice */
    float RawPrice; /* Ofs: 0x50 Size: 0x4 FloatProperty OnlineSubsystem.InAppPurchaseProductInfo.RawPrice */
    uint8_t UnknownData54[0x4];
    FString CurrencyCode; /* Ofs: 0x58 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.CurrencyCode */
    FString CurrencySymbol; /* Ofs: 0x68 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.CurrencySymbol */
    FString DecimalSeparator; /* Ofs: 0x78 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.DecimalSeparator */
    FString GroupingSeparator; /* Ofs: 0x88 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.GroupingSeparator */
    FString ReceiptData; /* Ofs: 0x98 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductInfo.ReceiptData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInAppPurchaseProductInfo = sizeof(FInAppPurchaseProductInfo); // 168
    static_assert(sizeof(FInAppPurchaseProductInfo) == 0xA8, "Size of FInAppPurchaseProductInfo is not correct.");
	auto constexpr FInAppPurchaseProductInfo_Identifier_Offset = offsetof(FInAppPurchaseProductInfo, Identifier);
	static_assert(FInAppPurchaseProductInfo_Identifier_Offset == 0x0, "FInAppPurchaseProductInfo::Identifier offset is not 0");
	auto constexpr FInAppPurchaseProductInfo_TransactionIdentifier_Offset = offsetof(FInAppPurchaseProductInfo, TransactionIdentifier);
	static_assert(FInAppPurchaseProductInfo_TransactionIdentifier_Offset == 0x10, "FInAppPurchaseProductInfo::TransactionIdentifier offset is not 10");
	auto constexpr FInAppPurchaseProductInfo_DisplayName_Offset = offsetof(FInAppPurchaseProductInfo, DisplayName);
	static_assert(FInAppPurchaseProductInfo_DisplayName_Offset == 0x20, "FInAppPurchaseProductInfo::DisplayName offset is not 20");
	auto constexpr FInAppPurchaseProductInfo_DisplayDescription_Offset = offsetof(FInAppPurchaseProductInfo, DisplayDescription);
	static_assert(FInAppPurchaseProductInfo_DisplayDescription_Offset == 0x30, "FInAppPurchaseProductInfo::DisplayDescription offset is not 30");
	auto constexpr FInAppPurchaseProductInfo_DisplayPrice_Offset = offsetof(FInAppPurchaseProductInfo, DisplayPrice);
	static_assert(FInAppPurchaseProductInfo_DisplayPrice_Offset == 0x40, "FInAppPurchaseProductInfo::DisplayPrice offset is not 40");
	auto constexpr FInAppPurchaseProductInfo_RawPrice_Offset = offsetof(FInAppPurchaseProductInfo, RawPrice);
	static_assert(FInAppPurchaseProductInfo_RawPrice_Offset == 0x50, "FInAppPurchaseProductInfo::RawPrice offset is not 50");
	auto constexpr FInAppPurchaseProductInfo_CurrencyCode_Offset = offsetof(FInAppPurchaseProductInfo, CurrencyCode);
	static_assert(FInAppPurchaseProductInfo_CurrencyCode_Offset == 0x58, "FInAppPurchaseProductInfo::CurrencyCode offset is not 58");
	auto constexpr FInAppPurchaseProductInfo_CurrencySymbol_Offset = offsetof(FInAppPurchaseProductInfo, CurrencySymbol);
	static_assert(FInAppPurchaseProductInfo_CurrencySymbol_Offset == 0x68, "FInAppPurchaseProductInfo::CurrencySymbol offset is not 68");
	auto constexpr FInAppPurchaseProductInfo_DecimalSeparator_Offset = offsetof(FInAppPurchaseProductInfo, DecimalSeparator);
	static_assert(FInAppPurchaseProductInfo_DecimalSeparator_Offset == 0x78, "FInAppPurchaseProductInfo::DecimalSeparator offset is not 78");
	auto constexpr FInAppPurchaseProductInfo_GroupingSeparator_Offset = offsetof(FInAppPurchaseProductInfo, GroupingSeparator);
	static_assert(FInAppPurchaseProductInfo_GroupingSeparator_Offset == 0x88, "FInAppPurchaseProductInfo::GroupingSeparator offset is not 88");
	auto constexpr FInAppPurchaseProductInfo_ReceiptData_Offset = offsetof(FInAppPurchaseProductInfo, ReceiptData);
	static_assert(FInAppPurchaseProductInfo_ReceiptData_Offset == 0x98, "FInAppPurchaseProductInfo::ReceiptData offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
