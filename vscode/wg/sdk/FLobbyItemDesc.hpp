#pragma once
#include "ELobbyItemTier.hpp"
#include "ELobbyItemCategory.hpp"
#include "ELobbyItemPlatform.hpp"
#include "ELobbyItemPointSellingType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyItemDesc // Size: 0x58
{
public:
    bool bCashSellable : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.LobbyItemDesc.bCashSellable */
    bool bPointSellable : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty TslGame.LobbyItemDesc.bPointSellable */
    bool bMarketable : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty TslGame.LobbyItemDesc.bMarketable */
    bool bPointRefundable : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty TslGame.LobbyItemDesc.bPointRefundable */
    uint8_t UnknownData1[0x7];
    FString XboxConsumableId; /* Ofs: 0x8 Size: 0x10 StrProperty TslGame.LobbyItemDesc.XboxConsumableId */
    TEnumAsByte<enum ELobbyItemTier> Tier; /* Ofs: 0x18 Size: 0x1 EnumProperty TslGame.LobbyItemDesc.Tier */
    TEnumAsByte<enum ELobbyItemCategory> Category; /* Ofs: 0x19 Size: 0x1 EnumProperty TslGame.LobbyItemDesc.Category */
    uint8_t UnknownData1A[0x6];
    FText Description; /* Ofs: 0x20 Size: 0x18 TextProperty TslGame.LobbyItemDesc.Description */
    TArray<ELobbyItemPlatform> Platforms; /* Ofs: 0x38 Size: 0x10 ArrayProperty TslGame.LobbyItemDesc.Platforms */
    float CashSellingPrice; /* Ofs: 0x48 Size: 0x4 FloatProperty TslGame.LobbyItemDesc.CashSellingPrice */
    TEnumAsByte<enum ELobbyItemPointSellingType> PointSellingType; /* Ofs: 0x4C Size: 0x1 EnumProperty TslGame.LobbyItemDesc.PointSellingType */
    uint8_t UnknownData4D[0x3];
    int32_t PointSellingPrice; /* Ofs: 0x50 Size: 0x4 IntProperty TslGame.LobbyItemDesc.PointSellingPrice */
    int32_t PointRefundingPrice; /* Ofs: 0x54 Size: 0x4 IntProperty TslGame.LobbyItemDesc.PointRefundingPrice */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyItemDesc = sizeof(FLobbyItemDesc); // 88
    static_assert(sizeof(FLobbyItemDesc) == 0x58, "Size of FLobbyItemDesc is not correct.");
	auto constexpr FLobbyItemDesc_XboxConsumableId_Offset = offsetof(FLobbyItemDesc, XboxConsumableId);
	static_assert(FLobbyItemDesc_XboxConsumableId_Offset == 0x8, "FLobbyItemDesc::XboxConsumableId offset is not 8");
	auto constexpr FLobbyItemDesc_Tier_Offset = offsetof(FLobbyItemDesc, Tier);
	static_assert(FLobbyItemDesc_Tier_Offset == 0x18, "FLobbyItemDesc::Tier offset is not 18");
	auto constexpr FLobbyItemDesc_Category_Offset = offsetof(FLobbyItemDesc, Category);
	static_assert(FLobbyItemDesc_Category_Offset == 0x19, "FLobbyItemDesc::Category offset is not 19");
	auto constexpr FLobbyItemDesc_Description_Offset = offsetof(FLobbyItemDesc, Description);
	static_assert(FLobbyItemDesc_Description_Offset == 0x20, "FLobbyItemDesc::Description offset is not 20");
	auto constexpr FLobbyItemDesc_Platforms_Offset = offsetof(FLobbyItemDesc, Platforms);
	static_assert(FLobbyItemDesc_Platforms_Offset == 0x38, "FLobbyItemDesc::Platforms offset is not 38");
	auto constexpr FLobbyItemDesc_CashSellingPrice_Offset = offsetof(FLobbyItemDesc, CashSellingPrice);
	static_assert(FLobbyItemDesc_CashSellingPrice_Offset == 0x48, "FLobbyItemDesc::CashSellingPrice offset is not 48");
	auto constexpr FLobbyItemDesc_PointSellingType_Offset = offsetof(FLobbyItemDesc, PointSellingType);
	static_assert(FLobbyItemDesc_PointSellingType_Offset == 0x4c, "FLobbyItemDesc::PointSellingType offset is not 4c");
	auto constexpr FLobbyItemDesc_PointSellingPrice_Offset = offsetof(FLobbyItemDesc, PointSellingPrice);
	static_assert(FLobbyItemDesc_PointSellingPrice_Offset == 0x50, "FLobbyItemDesc::PointSellingPrice offset is not 50");
	auto constexpr FLobbyItemDesc_PointRefundingPrice_Offset = offsetof(FLobbyItemDesc, PointRefundingPrice);
	static_assert(FLobbyItemDesc_PointRefundingPrice_Offset == 0x54, "FLobbyItemDesc::PointRefundingPrice offset is not 54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
