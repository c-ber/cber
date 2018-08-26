#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInAppPurchaseRestoreInfo // Size: 0x30
{
public:
    FString Identifier; /* Ofs: 0x0 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseRestoreInfo.Identifier */
    FString ReceiptData; /* Ofs: 0x10 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseRestoreInfo.ReceiptData */
    FString TransactionIdentifier; /* Ofs: 0x20 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseRestoreInfo.TransactionIdentifier */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInAppPurchaseRestoreInfo = sizeof(FInAppPurchaseRestoreInfo); // 48
    static_assert(sizeof(FInAppPurchaseRestoreInfo) == 0x30, "Size of FInAppPurchaseRestoreInfo is not correct.");
	auto constexpr FInAppPurchaseRestoreInfo_Identifier_Offset = offsetof(FInAppPurchaseRestoreInfo, Identifier);
	static_assert(FInAppPurchaseRestoreInfo_Identifier_Offset == 0x0, "FInAppPurchaseRestoreInfo::Identifier offset is not 0");
	auto constexpr FInAppPurchaseRestoreInfo_ReceiptData_Offset = offsetof(FInAppPurchaseRestoreInfo, ReceiptData);
	static_assert(FInAppPurchaseRestoreInfo_ReceiptData_Offset == 0x10, "FInAppPurchaseRestoreInfo::ReceiptData offset is not 10");
	auto constexpr FInAppPurchaseRestoreInfo_TransactionIdentifier_Offset = offsetof(FInAppPurchaseRestoreInfo, TransactionIdentifier);
	static_assert(FInAppPurchaseRestoreInfo_TransactionIdentifier_Offset == 0x20, "FInAppPurchaseRestoreInfo::TransactionIdentifier offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
