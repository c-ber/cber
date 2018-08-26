#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyHairElementDetail // Size: 0x28
{
public:
    int32_t ColorIndex; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.LobbyHairElementDetail.ColorIndex */
    FColor Color; /* Ofs: 0x4 Size: 0x4 StructProperty TslGame.LobbyHairElementDetail.Color */
    TAssetPtr<ExternalPtr<struct UCustomizableObject>> HairAsset; /* Ofs: 0x8 Size: 0x1C AssetObjectProperty TslGame.LobbyHairElementDetail.HairAsset */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyHairElementDetail = sizeof(FLobbyHairElementDetail); // 40
    static_assert(sizeof(FLobbyHairElementDetail) == 0x28, "Size of FLobbyHairElementDetail is not correct.");
	auto constexpr FLobbyHairElementDetail_ColorIndex_Offset = offsetof(FLobbyHairElementDetail, ColorIndex);
	static_assert(FLobbyHairElementDetail_ColorIndex_Offset == 0x0, "FLobbyHairElementDetail::ColorIndex offset is not 0");
	auto constexpr FLobbyHairElementDetail_Color_Offset = offsetof(FLobbyHairElementDetail, Color);
	static_assert(FLobbyHairElementDetail_Color_Offset == 0x4, "FLobbyHairElementDetail::Color offset is not 4");
	auto constexpr FLobbyHairElementDetail_HairAsset_Offset = offsetof(FLobbyHairElementDetail, HairAsset);
	static_assert(FLobbyHairElementDetail_HairAsset_Offset == 0x8, "FLobbyHairElementDetail::HairAsset offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
