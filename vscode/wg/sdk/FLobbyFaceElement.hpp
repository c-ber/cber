#pragma once
#include "EGender.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyFaceElement // Size: 0x28
{
public:
    TEnumAsByte<enum EGender> Gender; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.LobbyFaceElement.Gender */
    uint8_t UnknownData1[0x7];
    FString FaceType; /* Ofs: 0x8 Size: 0x10 StrProperty TslGame.LobbyFaceElement.FaceType */
    TArray<struct FLobbyFaceElementDetail> ColorData; /* Ofs: 0x18 Size: 0x10 ArrayProperty TslGame.LobbyFaceElement.ColorData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyFaceElement = sizeof(FLobbyFaceElement); // 40
    static_assert(sizeof(FLobbyFaceElement) == 0x28, "Size of FLobbyFaceElement is not correct.");
	auto constexpr FLobbyFaceElement_Gender_Offset = offsetof(FLobbyFaceElement, Gender);
	static_assert(FLobbyFaceElement_Gender_Offset == 0x0, "FLobbyFaceElement::Gender offset is not 0");
	auto constexpr FLobbyFaceElement_FaceType_Offset = offsetof(FLobbyFaceElement, FaceType);
	static_assert(FLobbyFaceElement_FaceType_Offset == 0x8, "FLobbyFaceElement::FaceType offset is not 8");
	auto constexpr FLobbyFaceElement_ColorData_Offset = offsetof(FLobbyFaceElement, ColorData);
	static_assert(FLobbyFaceElement_ColorData_Offset == 0x18, "FLobbyFaceElement::ColorData offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
