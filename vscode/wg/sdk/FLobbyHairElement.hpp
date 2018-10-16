#pragma once
#include "EGender.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyHairElement // Size: 0x28
{
public:
    TEnumAsByte<enum EGender> Gender; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.LobbyHairElement.Gender */
    uint8_t UnknownData1[0x7];
    FString HairType; /* Ofs: 0x8 Size: 0x10 StrProperty TslGame.LobbyHairElement.HairType */
    TArray<struct FLobbyHairElementDetail> ColorData; /* Ofs: 0x18 Size: 0x10 ArrayProperty TslGame.LobbyHairElement.ColorData */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyHairElement = sizeof(FLobbyHairElement); // 40
    static_assert(sizeof(FLobbyHairElement) == 0x28, "Size of FLobbyHairElement is not correct.");
	auto constexpr FLobbyHairElement_Gender_Offset = offsetof(FLobbyHairElement, Gender);
	static_assert(FLobbyHairElement_Gender_Offset == 0x0, "FLobbyHairElement::Gender offset is not 0");
	auto constexpr FLobbyHairElement_HairType_Offset = offsetof(FLobbyHairElement, HairType);
	static_assert(FLobbyHairElement_HairType_Offset == 0x8, "FLobbyHairElement::HairType offset is not 8");
	auto constexpr FLobbyHairElement_ColorData_Offset = offsetof(FLobbyHairElement, ColorData);
	static_assert(FLobbyHairElement_ColorData_Offset == 0x18, "FLobbyHairElement::ColorData offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
