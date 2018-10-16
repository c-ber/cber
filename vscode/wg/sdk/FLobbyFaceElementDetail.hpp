#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyFaceElementDetail // Size: 0x48
{
public:
    int32_t ColorIndex; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.LobbyFaceElementDetail.ColorIndex */
    FColor Color; /* Ofs: 0x4 Size: 0x4 StructProperty TslGame.LobbyFaceElementDetail.Color */
    TAssetPtr<ExternalPtr<struct UCustomizableObject>> BodyAsset; /* Ofs: 0x8 Size: 0x1C AssetObjectProperty TslGame.LobbyFaceElementDetail.BodyAsset */
    uint8_t UnknownData24[0x4];
    TAssetPtr<ExternalPtr<struct UCustomizableObject>> FaceAsset; /* Ofs: 0x28 Size: 0x1C AssetObjectProperty TslGame.LobbyFaceElementDetail.FaceAsset */
    uint8_t UnknownData44[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyFaceElementDetail = sizeof(FLobbyFaceElementDetail); // 72
    static_assert(sizeof(FLobbyFaceElementDetail) == 0x48, "Size of FLobbyFaceElementDetail is not correct.");
	auto constexpr FLobbyFaceElementDetail_ColorIndex_Offset = offsetof(FLobbyFaceElementDetail, ColorIndex);
	static_assert(FLobbyFaceElementDetail_ColorIndex_Offset == 0x0, "FLobbyFaceElementDetail::ColorIndex offset is not 0");
	auto constexpr FLobbyFaceElementDetail_Color_Offset = offsetof(FLobbyFaceElementDetail, Color);
	static_assert(FLobbyFaceElementDetail_Color_Offset == 0x4, "FLobbyFaceElementDetail::Color offset is not 4");
	auto constexpr FLobbyFaceElementDetail_BodyAsset_Offset = offsetof(FLobbyFaceElementDetail, BodyAsset);
	static_assert(FLobbyFaceElementDetail_BodyAsset_Offset == 0x8, "FLobbyFaceElementDetail::BodyAsset offset is not 8");
	auto constexpr FLobbyFaceElementDetail_FaceAsset_Offset = offsetof(FLobbyFaceElementDetail, FaceAsset);
	static_assert(FLobbyFaceElementDetail_FaceAsset_Offset == 0x28, "FLobbyFaceElementDetail::FaceAsset offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
