#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInAppPurchaseProductRequest // Size: 0x18
{
public:
    FString ProductIdentifier; /* Ofs: 0x0 Size: 0x10 StrProperty OnlineSubsystem.InAppPurchaseProductRequest.ProductIdentifier */
    bool bIsConsumable; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty OnlineSubsystem.InAppPurchaseProductRequest.bIsConsumable */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInAppPurchaseProductRequest = sizeof(FInAppPurchaseProductRequest); // 24
    static_assert(sizeof(FInAppPurchaseProductRequest) == 0x18, "Size of FInAppPurchaseProductRequest is not correct.");
	auto constexpr FInAppPurchaseProductRequest_ProductIdentifier_Offset = offsetof(FInAppPurchaseProductRequest, ProductIdentifier);
	static_assert(FInAppPurchaseProductRequest_ProductIdentifier_Offset == 0x0, "FInAppPurchaseProductRequest::ProductIdentifier offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
