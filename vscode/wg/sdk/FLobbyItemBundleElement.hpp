#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyItemBundleElement // Size: 0x28
{
public:
    TAssetPtr<ExternalPtr<struct UClass>> ItemAsset; /* Ofs: 0x0 Size: 0x1C AssetClassProperty TslGame.LobbyItemBundleElement.ItemAsset */
    uint8_t UnknownData1C[0x4];
    int32_t BundleId; /* Ofs: 0x20 Size: 0x4 IntProperty TslGame.LobbyItemBundleElement.BundleId */
    int32_t Quantity; /* Ofs: 0x24 Size: 0x4 IntProperty TslGame.LobbyItemBundleElement.Quantity */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyItemBundleElement = sizeof(FLobbyItemBundleElement); // 40
    static_assert(sizeof(FLobbyItemBundleElement) == 0x28, "Size of FLobbyItemBundleElement is not correct.");
	auto constexpr FLobbyItemBundleElement_ItemAsset_Offset = offsetof(FLobbyItemBundleElement, ItemAsset);
	static_assert(FLobbyItemBundleElement_ItemAsset_Offset == 0x0, "FLobbyItemBundleElement::ItemAsset offset is not 0");
	auto constexpr FLobbyItemBundleElement_BundleId_Offset = offsetof(FLobbyItemBundleElement, BundleId);
	static_assert(FLobbyItemBundleElement_BundleId_Offset == 0x20, "FLobbyItemBundleElement::BundleId offset is not 20");
	auto constexpr FLobbyItemBundleElement_Quantity_Offset = offsetof(FLobbyItemBundleElement, Quantity);
	static_assert(FLobbyItemBundleElement_Quantity_Offset == 0x24, "FLobbyItemBundleElement::Quantity offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
