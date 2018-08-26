#pragma once
#include "FLinearColor.hpp"
#include "ECharacterIconType.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMapIconUpdateData // Size: 0x80
{
public:
    ExternalPtr<struct UMapCharacterIconBaseWidget> Icon; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.MapIconUpdateData.Icon */
    FLinearColor IconColor; /* Ofs: 0x8 Size: 0x10 StructProperty TslGame.MapIconUpdateData.IconColor */
    bool bShowMemberNumber; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty TslGame.MapIconUpdateData.bShowMemberNumber */
    uint8_t UnknownData19[0x3];
    int32_t MemberNumber; /* Ofs: 0x1C Size: 0x4 IntProperty TslGame.MapIconUpdateData.MemberNumber */
    TEnumAsByte<enum ECharacterIconType> IconType; /* Ofs: 0x20 Size: 0x1 EnumProperty TslGame.MapIconUpdateData.IconType */
    uint8_t UnknownData21[0x3];
    float Rotation; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.MapIconUpdateData.Rotation */
    int32_t CharacterState; /* Ofs: 0x28 Size: 0x4 IntProperty TslGame.MapIconUpdateData.CharacterState */
    bool bShowPlayerName; /* Ofs: 0x2C Size: 0x1 BitMask: 01 BoolProperty TslGame.MapIconUpdateData.bShowPlayerName */
    uint8_t UnknownData2D[0x3];
    FText PlayerName; /* Ofs: 0x30 Size: 0x18 TextProperty TslGame.MapIconUpdateData.PlayerName */
    FLinearColor NameTagColor; /* Ofs: 0x48 Size: 0x10 StructProperty TslGame.MapIconUpdateData.NameTagColor */
    bool bIsMine; /* Ofs: 0x58 Size: 0x1 BitMask: 01 BoolProperty TslGame.MapIconUpdateData.bIsMine */
    bool bShowTeamNumber; /* Ofs: 0x59 Size: 0x1 BitMask: 01 BoolProperty TslGame.MapIconUpdateData.bShowTeamNumber */
    uint8_t UnknownData5A[0x2];
    int32_t TeamNumber; /* Ofs: 0x5C Size: 0x4 IntProperty TslGame.MapIconUpdateData.TeamNumber */
    FVector2D Position; /* Ofs: 0x60 Size: 0x8 StructProperty TslGame.MapIconUpdateData.Position */
    bool bIsSpectated; /* Ofs: 0x68 Size: 0x1 BitMask: 01 BoolProperty TslGame.MapIconUpdateData.bIsSpectated */
    bool bHasTeamMember; /* Ofs: 0x69 Size: 0x1 BitMask: 01 BoolProperty TslGame.MapIconUpdateData.bHasTeamMember */
    uint8_t UnknownData6A[0x6];
    TArray<struct FVehicleRiderData> RiderDatas; /* Ofs: 0x70 Size: 0x10 ArrayProperty TslGame.MapIconUpdateData.RiderDatas */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMapIconUpdateData = sizeof(FMapIconUpdateData); // 128
    static_assert(sizeof(FMapIconUpdateData) == 0x80, "Size of FMapIconUpdateData is not correct.");
	auto constexpr FMapIconUpdateData_Icon_Offset = offsetof(FMapIconUpdateData, Icon);
	static_assert(FMapIconUpdateData_Icon_Offset == 0x0, "FMapIconUpdateData::Icon offset is not 0");
	auto constexpr FMapIconUpdateData_IconColor_Offset = offsetof(FMapIconUpdateData, IconColor);
	static_assert(FMapIconUpdateData_IconColor_Offset == 0x8, "FMapIconUpdateData::IconColor offset is not 8");
	auto constexpr FMapIconUpdateData_MemberNumber_Offset = offsetof(FMapIconUpdateData, MemberNumber);
	static_assert(FMapIconUpdateData_MemberNumber_Offset == 0x1c, "FMapIconUpdateData::MemberNumber offset is not 1c");
	auto constexpr FMapIconUpdateData_IconType_Offset = offsetof(FMapIconUpdateData, IconType);
	static_assert(FMapIconUpdateData_IconType_Offset == 0x20, "FMapIconUpdateData::IconType offset is not 20");
	auto constexpr FMapIconUpdateData_Rotation_Offset = offsetof(FMapIconUpdateData, Rotation);
	static_assert(FMapIconUpdateData_Rotation_Offset == 0x24, "FMapIconUpdateData::Rotation offset is not 24");
	auto constexpr FMapIconUpdateData_CharacterState_Offset = offsetof(FMapIconUpdateData, CharacterState);
	static_assert(FMapIconUpdateData_CharacterState_Offset == 0x28, "FMapIconUpdateData::CharacterState offset is not 28");
	auto constexpr FMapIconUpdateData_PlayerName_Offset = offsetof(FMapIconUpdateData, PlayerName);
	static_assert(FMapIconUpdateData_PlayerName_Offset == 0x30, "FMapIconUpdateData::PlayerName offset is not 30");
	auto constexpr FMapIconUpdateData_NameTagColor_Offset = offsetof(FMapIconUpdateData, NameTagColor);
	static_assert(FMapIconUpdateData_NameTagColor_Offset == 0x48, "FMapIconUpdateData::NameTagColor offset is not 48");
	auto constexpr FMapIconUpdateData_TeamNumber_Offset = offsetof(FMapIconUpdateData, TeamNumber);
	static_assert(FMapIconUpdateData_TeamNumber_Offset == 0x5c, "FMapIconUpdateData::TeamNumber offset is not 5c");
	auto constexpr FMapIconUpdateData_Position_Offset = offsetof(FMapIconUpdateData, Position);
	static_assert(FMapIconUpdateData_Position_Offset == 0x60, "FMapIconUpdateData::Position offset is not 60");
	auto constexpr FMapIconUpdateData_RiderDatas_Offset = offsetof(FMapIconUpdateData, RiderDatas);
	static_assert(FMapIconUpdateData_RiderDatas_Offset == 0x70, "FMapIconUpdateData::RiderDatas offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
