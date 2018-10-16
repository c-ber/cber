#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerGroupWidget_C // Size: 0x298
	: public UUserWidget // Size: 0x248
{
private:
	typedef UPlayerGroupWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(191401); // id32("WidgetBlueprintGeneratedClass PlayerGroupWidget.PlayerGroupWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty PlayerGroupWidget.PlayerGroupWidget_C.UberGraphFrame */
	ExternalPtr<struct UVerticalBox> PlayerList; /* Ofs: 0x250 Size: 0x8 - ObjectProperty PlayerGroupWidget.PlayerGroupWidget_C.PlayerList */
	ExternalPtr<struct UBorder> PlayerListBG; /* Ofs: 0x258 Size: 0x8 - ObjectProperty PlayerGroupWidget.PlayerGroupWidget_C.PlayerListBG */
	ExternalPtr<struct UBorder> PlayerListBorder; /* Ofs: 0x260 Size: 0x8 - ObjectProperty PlayerGroupWidget.PlayerGroupWidget_C.PlayerListBorder */
	ExternalPtr<struct USizeBox> SizeBoxTeamNumber; /* Ofs: 0x268 Size: 0x8 - ObjectProperty PlayerGroupWidget.PlayerGroupWidget_C.SizeBoxTeamNumber */
	ExternalPtr<struct UTextBlock> TextTeamNumber; /* Ofs: 0x270 Size: 0x8 - ObjectProperty PlayerGroupWidget.PlayerGroupWidget_C.TextTeamNumber */
	TArray<ExternalPtr<struct UPlayerInfoWidget_C>> PlayerInfoWidgetList; /* Ofs: 0x278 Size: 0x10 - ArrayProperty PlayerGroupWidget.PlayerGroupWidget_C.PlayerInfoWidgetList */
	uint8_t boolField288;
	uint8_t UnknownData289[0x7];
	ExternalPtr<struct UMaterialInstanceDynamic> BGMaterial; /* Ofs: 0x290 Size: 0x8 - ObjectProperty PlayerGroupWidget.PlayerGroupWidget_C.BGMaterial */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetPlayerList(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetPlayerListBG(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x258, value); }
	inline bool SetPlayerListBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x260, value); }
	inline bool SetSizeBoxTeamNumber(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x268, value); }
	inline bool SetTextTeamNumber(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetPlayerInfoWidgetList(t_structHelper inst, TArray<ExternalPtr<struct UPlayerInfoWidget_C>> value) { inst.WriteOffset(0x278, value); }
	inline bool bSelect()
	{
		return boolField288& 0x1;
	}
	inline bool SetbSelect(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x288, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBGMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerGroupWidget_C = sizeof(UPlayerGroupWidget_C); // 664
    static_assert(sizeof(UPlayerGroupWidget_C) == 0x298, "Size of UPlayerGroupWidget_C is not correct.");
	auto constexpr UPlayerGroupWidget_C_UberGraphFrame_Offset = offsetof(UPlayerGroupWidget_C, UberGraphFrame);
	static_assert(UPlayerGroupWidget_C_UberGraphFrame_Offset == 0x248, "UPlayerGroupWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UPlayerGroupWidget_C_PlayerList_Offset = offsetof(UPlayerGroupWidget_C, PlayerList);
	static_assert(UPlayerGroupWidget_C_PlayerList_Offset == 0x250, "UPlayerGroupWidget_C::PlayerList offset is not 250");
	auto constexpr UPlayerGroupWidget_C_PlayerListBG_Offset = offsetof(UPlayerGroupWidget_C, PlayerListBG);
	static_assert(UPlayerGroupWidget_C_PlayerListBG_Offset == 0x258, "UPlayerGroupWidget_C::PlayerListBG offset is not 258");
	auto constexpr UPlayerGroupWidget_C_PlayerListBorder_Offset = offsetof(UPlayerGroupWidget_C, PlayerListBorder);
	static_assert(UPlayerGroupWidget_C_PlayerListBorder_Offset == 0x260, "UPlayerGroupWidget_C::PlayerListBorder offset is not 260");
	auto constexpr UPlayerGroupWidget_C_SizeBoxTeamNumber_Offset = offsetof(UPlayerGroupWidget_C, SizeBoxTeamNumber);
	static_assert(UPlayerGroupWidget_C_SizeBoxTeamNumber_Offset == 0x268, "UPlayerGroupWidget_C::SizeBoxTeamNumber offset is not 268");
	auto constexpr UPlayerGroupWidget_C_TextTeamNumber_Offset = offsetof(UPlayerGroupWidget_C, TextTeamNumber);
	static_assert(UPlayerGroupWidget_C_TextTeamNumber_Offset == 0x270, "UPlayerGroupWidget_C::TextTeamNumber offset is not 270");
	auto constexpr UPlayerGroupWidget_C_PlayerInfoWidgetList_Offset = offsetof(UPlayerGroupWidget_C, PlayerInfoWidgetList);
	static_assert(UPlayerGroupWidget_C_PlayerInfoWidgetList_Offset == 0x278, "UPlayerGroupWidget_C::PlayerInfoWidgetList offset is not 278");
	auto constexpr UPlayerGroupWidget_C_boolField288_Offset = offsetof(UPlayerGroupWidget_C, boolField288);
	static_assert(UPlayerGroupWidget_C_boolField288_Offset == 0x288, "UPlayerGroupWidget_C::boolField288 offset is not 288");
	auto constexpr UPlayerGroupWidget_C_BGMaterial_Offset = offsetof(UPlayerGroupWidget_C, BGMaterial);
	static_assert(UPlayerGroupWidget_C_BGMaterial_Offset == 0x290, "UPlayerGroupWidget_C::BGMaterial offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
