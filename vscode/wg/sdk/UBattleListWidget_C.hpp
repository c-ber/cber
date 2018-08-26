#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBattleListWidget_C // Size: 0x29C
	: public UUserWidget // Size: 0x248
{
private:
	typedef UBattleListWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187273); // id32("WidgetBlueprintGeneratedClass BattleListWidget.BattleListWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty BattleListWidget.BattleListWidget_C.UberGraphFrame */
	ExternalPtr<struct UScrollBox> BattleListScrollBox; /* Ofs: 0x250 Size: 0x8 - ObjectProperty BattleListWidget.BattleListWidget_C.BattleListScrollBox */
	ExternalPtr<struct UBorder> BGBOX; /* Ofs: 0x258 Size: 0x8 - ObjectProperty BattleListWidget.BattleListWidget_C.BGBOX */
	TArray<ExternalPtr<struct UTslCharacter>> RefreshedPlayerList; /* Ofs: 0x260 Size: 0x10 - ArrayProperty BattleListWidget.BattleListWidget_C.RefreshedPlayerList */
	uint8_t boolField270;
	uint8_t UnknownData271[0x7];
	TArray<ExternalPtr<struct UPlayerInfoWidget_C>> PlayerInfoPool; /* Ofs: 0x278 Size: 0x10 - ArrayProperty BattleListWidget.BattleListWidget_C.PlayerInfoPool */
	TArray<ExternalPtr<struct UBattleListSubTitle_C>> BattleListSubTitlePool; /* Ofs: 0x288 Size: 0x10 - ArrayProperty BattleListWidget.BattleListWidget_C.BattleListSubTitlePool */
	int32_t IndexCount; /* Ofs: 0x298 Size: 0x4 - IntProperty BattleListWidget.BattleListWidget_C.IndexCount */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetBattleListScrollBox(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetBGBOX(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x258, value); }
	inline bool SetRefreshedPlayerList(t_structHelper inst, TArray<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0x260, value); }
	inline bool IsShow()
	{
		return boolField270& 0x1;
	}
	inline bool SetIsShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x270, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlayerInfoPool(t_structHelper inst, TArray<ExternalPtr<struct UPlayerInfoWidget_C>> value) { inst.WriteOffset(0x278, value); }
	inline bool SetBattleListSubTitlePool(t_structHelper inst, TArray<ExternalPtr<struct UBattleListSubTitle_C>> value) { inst.WriteOffset(0x288, value); }
	inline bool SetIndexCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x298, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBattleListWidget_C = sizeof(UBattleListWidget_C); // 668
    static_assert(sizeof(UBattleListWidget_C) == 0x29C, "Size of UBattleListWidget_C is not correct.");
	auto constexpr UBattleListWidget_C_UberGraphFrame_Offset = offsetof(UBattleListWidget_C, UberGraphFrame);
	static_assert(UBattleListWidget_C_UberGraphFrame_Offset == 0x248, "UBattleListWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UBattleListWidget_C_BattleListScrollBox_Offset = offsetof(UBattleListWidget_C, BattleListScrollBox);
	static_assert(UBattleListWidget_C_BattleListScrollBox_Offset == 0x250, "UBattleListWidget_C::BattleListScrollBox offset is not 250");
	auto constexpr UBattleListWidget_C_BGBOX_Offset = offsetof(UBattleListWidget_C, BGBOX);
	static_assert(UBattleListWidget_C_BGBOX_Offset == 0x258, "UBattleListWidget_C::BGBOX offset is not 258");
	auto constexpr UBattleListWidget_C_RefreshedPlayerList_Offset = offsetof(UBattleListWidget_C, RefreshedPlayerList);
	static_assert(UBattleListWidget_C_RefreshedPlayerList_Offset == 0x260, "UBattleListWidget_C::RefreshedPlayerList offset is not 260");
	auto constexpr UBattleListWidget_C_boolField270_Offset = offsetof(UBattleListWidget_C, boolField270);
	static_assert(UBattleListWidget_C_boolField270_Offset == 0x270, "UBattleListWidget_C::boolField270 offset is not 270");
	auto constexpr UBattleListWidget_C_PlayerInfoPool_Offset = offsetof(UBattleListWidget_C, PlayerInfoPool);
	static_assert(UBattleListWidget_C_PlayerInfoPool_Offset == 0x278, "UBattleListWidget_C::PlayerInfoPool offset is not 278");
	auto constexpr UBattleListWidget_C_BattleListSubTitlePool_Offset = offsetof(UBattleListWidget_C, BattleListSubTitlePool);
	static_assert(UBattleListWidget_C_BattleListSubTitlePool_Offset == 0x288, "UBattleListWidget_C::BattleListSubTitlePool offset is not 288");
	auto constexpr UBattleListWidget_C_IndexCount_Offset = offsetof(UBattleListWidget_C, IndexCount);
	static_assert(UBattleListWidget_C_IndexCount_Offset == 0x298, "UBattleListWidget_C::IndexCount offset is not 298");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
