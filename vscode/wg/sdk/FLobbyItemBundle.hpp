#pragma once
#include "ELobbyItemBundleType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyItemBundle // Size: 0x30
{
public:
    int32_t BundleId; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.LobbyItemBundle.BundleId */
    uint8_t UnknownData4[0x4];
    FString BundleName; /* Ofs: 0x8 Size: 0x10 StrProperty TslGame.LobbyItemBundle.BundleName */
    TEnumAsByte<enum ELobbyItemBundleType> Type; /* Ofs: 0x18 Size: 0x1 EnumProperty TslGame.LobbyItemBundle.Type */
    uint8_t UnknownData19[0x7];
    TArray<struct FLobbyItemBundleElement> ItemList; /* Ofs: 0x20 Size: 0x10 ArrayProperty TslGame.LobbyItemBundle.ItemList */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyItemBundle = sizeof(FLobbyItemBundle); // 48
    static_assert(sizeof(FLobbyItemBundle) == 0x30, "Size of FLobbyItemBundle is not correct.");
	auto constexpr FLobbyItemBundle_BundleId_Offset = offsetof(FLobbyItemBundle, BundleId);
	static_assert(FLobbyItemBundle_BundleId_Offset == 0x0, "FLobbyItemBundle::BundleId offset is not 0");
	auto constexpr FLobbyItemBundle_BundleName_Offset = offsetof(FLobbyItemBundle, BundleName);
	static_assert(FLobbyItemBundle_BundleName_Offset == 0x8, "FLobbyItemBundle::BundleName offset is not 8");
	auto constexpr FLobbyItemBundle_Type_Offset = offsetof(FLobbyItemBundle, Type);
	static_assert(FLobbyItemBundle_Type_Offset == 0x18, "FLobbyItemBundle::Type offset is not 18");
	auto constexpr FLobbyItemBundle_ItemList_Offset = offsetof(FLobbyItemBundle, ItemList);
	static_assert(FLobbyItemBundle_ItemList_Offset == 0x20, "FLobbyItemBundle::ItemList offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
